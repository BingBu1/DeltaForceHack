#include "pch.h"
#include "esp.h"
#include "GWroldHelper.hpp"
#include "HookDx11Manager.h"


Esp::Esp() {
	AddMenu(this);
}

std::string Esp::GetActorName(Dumper::AActor *Actor) {
	std::string RetVal;
	
	if(Actor->IsA(Dumper::ACharacterBase::StaticClass())) {
		auto ACharater	 = static_cast<Dumper::AGPCharacterBase *>(Actor);
		auto PlayerState = ACharater->PlayerState->IsA(Dumper::AGPPlayerState::StaticClass()) ? static_cast<Dumper::AGPPlayerState *>(ACharater->PlayerState) : nullptr;
		// auto CampId = PlayerState->GetCamp();
		auto IsAi = PlayerState->bIsPlayerAI;
		RetVal    = fmt::format("{}{}", xorstr_("玩家"), IsAi ? "(Ai)" : "");
	}
	if(Esp_DrawUnk && RetVal.empty()){
		RetVal = Actor->GetName();
	}
	return RetVal;
}

void Esp::DrawUnkName(Dumper::AActor *Actor){
	if(!Actor || !Esp_DrawUnk)
		return;
	Dumper::FVector2D Out;
	auto PlayerContrller = WorldHelper::GetPlayerContorller();
	auto Name = Actor->GetName();
	if(Name.empty() || !PlayerContrller)
		return;
	auto Vec = Actor->K2_GetActorLocation();
	PlayerContrller->ProjectWorldLocationToScreen(Vec, Out, false);
	if((Out.X == 0.f && Out.Y == 0.f) || (Out.X < 0.f || Out.X > Wide || Out.Y < 0.f || Out.Y > height))
		return;
	
	float Distance = PlayerContrller->AcknowledgedPawn->GetDistanceTo(Actor) / 100.f;
	ImGui::PushFont(HookDx11Manager::GetInstance()->Font);
	auto Drawstr  = fmt::format("{}[{:.0f}M]", Name, Distance);
	auto CalcSize = ImGui::GetFont()->CalcTextSizeA(ImGui::GetFontSize(), FLT_MAX, 0.f, Drawstr.c_str());

	Draw->AddText({ Out.X - CalcSize.x / 2, Out.Y }, ImColor(255, 255, 255), Drawstr.c_str());
	ImGui::PopFont();
}

void Esp::DrawPlayerEsp(Dumper::AActor *Actor) {
	if(!Esp_Enable) {
		return;
	}
	Dumper::FVector2D Out{};
	int32_t CampId = 0, CurrentCampId = 0;
	
	auto PlayerContrller = WorldHelper::GetPlayerContorller();
	if(Actor == nullptr || Actor->RootComponent == nullptr || Actor == PlayerContrller->AcknowledgedPawn)
		return;
	if(!PlayerContrller->AcknowledgedPawn)
		return;
	if(Actor->IsA(Dumper::ACharacterBase::StaticClass()) == false){
		if(Esp_DrawUnk)
			DrawUnkName(Actor);
		return;
	}
		
	auto LocalApwn = PlayerContrller->AcknowledgedPawn;
	auto ACharater = static_cast<Dumper::ADFMCharacter *>(Actor);
	if(LocalApwn->PlayerState == nullptr || ACharater->PlayerState == nullptr)
		return;

	CurrentCampId  = static_cast<Dumper::AGPPlayerState *>(LocalApwn->PlayerState)->GetCamp();
	CampId         = static_cast<Dumper::AGPPlayerState *>(ACharater->PlayerState)->GetCamp();
	bool IsFriend = CurrentCampId == CampId;
	if(Esp_Impending && ACharater->IsImpendingDeath() || ACharater->IsDead())
		return;
	if(Esp_Friend && IsFriend)
		return;
	auto Name = GetActorName(Actor);
	if(Name.empty())
		return;
	auto Vec = Actor->RootComponent->K2_GetComponentLocation();
	PlayerContrller->ProjectWorldLocationToScreen(Vec, Out, false);
	if((Out.X == 0.f && Out.Y == 0.f) || (Out.X < 0.f || Out.X > Wide || Out.Y < 0.f || Out.Y > height))
		return;
	
	float Distance = PlayerContrller->AcknowledgedPawn->GetDistanceTo(Actor) / 100.f;
	ImGui::PushFont(HookDx11Manager::GetInstance()->Font);
	auto Drawstr   = fmt::format("{}[{:.0f}M]", Name, Distance);
	auto CalcSize  = ImGui::GetFont()->CalcTextSizeA(ImGui::GetFontSize(), FLT_MAX, 0.f, Drawstr.c_str());
	Draw->AddText({ Out.X - CalcSize.x / 2, Out.Y }, ImColor(255, 255, 255), Drawstr.c_str());
	ImGui::PopFont();
}

void Esp::AlwaysDraw() {
	auto PlayerContrller = WorldHelper::GetPlayerContorller();
	auto AActors	     = WorldHelper::GetAActorList();
	Draw	     = ImGui::GetForegroundDrawList();
	auto ScreenRect = HookDx11Manager::GetInstance()->GetWindowsRect();
	Wide = std::get<0>(ScreenRect);
	height = std::get<1>(ScreenRect);
	if(!AActors || !PlayerContrller)
		return;
	auto AActors_ = *AActors;
	for(int i = 0; i < AActors_.Count(); i++) {
		auto Actor = AActors_[i];
		if(Actor == nullptr)
			continue;
		DrawPlayerEsp(Actor);
		DrawBone(Actor);
	}
}
void Esp::BonePosToSceen(Dumper::FVector &A, Dumper::FVector &B, Dumper::FVector2D &OutA, Dumper::FVector2D &OutB){
	Dumper::FVector2D Out_1, Out2;
	auto PlayerContrller = WorldHelper::GetPlayerContorller();
	if(!PlayerContrller)
		return;
	PlayerContrller->ProjectWorldLocationToScreen(A, OutA, false);
	PlayerContrller->ProjectWorldLocationToScreen(B, OutB, false);
}

void Esp::DrwaBoneByLine(Dumper::FVector &A, Dumper::FVector &B, bool isViblse) {
	Dumper::FVector2D Out_1, Out_2;
	ImColor DrawColor = isViblse ? ImColor(0, 255, 0) : ImColor(255, 0, 0);
	BonePosToSceen(A, B, Out_1, Out_2);
	if((Out_1.X == 0.f && Out_1.Y == 0.f) || (Out_1.X < 0.f || Out_1.X > Wide || Out_1.Y < 0.f || Out_1.Y > height))
		return;
	if((Out_2.X == 0.f && Out_2.Y == 0.f) || (Out_2.X < 0.f || Out_2.X > Wide || Out_2.Y < 0.f || Out_2.Y > height))
		return;

	Draw->AddLine({ Out_1.X, Out_1.Y }, { Out_2.X, Out_2.Y }, DrawColor);
}

void Esp::DrawBone(Dumper::AActor *Actor){
	if(!Esp_DrawBone)
		return;
	Dumper::FVector2D Out_1;
	int32_t CampId = 0, CurrentCampId = 0;
	auto PlayerContrller = WorldHelper::GetPlayerContorller();
	if(Actor == nullptr || Actor->RootComponent == nullptr || Actor == PlayerContrller->AcknowledgedPawn)
		return;
	if(!PlayerContrller->AcknowledgedPawn)
		return;
	if(Actor->IsA(Dumper::ACharacterBase::StaticClass()) == false)
		return;
	auto LocalApwn = PlayerContrller->AcknowledgedPawn;
	auto ACharater = static_cast<Dumper::AGPCharacterBase *>(Actor);
	if(LocalApwn->PlayerState == nullptr || ACharater->PlayerState == nullptr)
		return;

	CurrentCampId  = static_cast<Dumper::AGPPlayerState *>(LocalApwn->PlayerState)->GetCamp();
	CampId         = static_cast<Dumper::AGPPlayerState *>(ACharater->PlayerState)->GetCamp();
	if(Esp_Impending && ACharater->IsImpendingDeath() || ACharater->IsDead())
		return;
	if(Esp_Friend && CurrentCampId == CampId)
		return;
	if(ACharater->Mesh == nullptr)
		return;
	Dumper::FVector Head, Body, Pelvis, LeftLeg, LeftUpLeg, LeftFoot, RightLeg,
	    RightUpLeg, RightFoot, LeftArm, LeftLowArm, leftHand, RightArm, RightLowArm, RightHand;

	Head = ACharater->Mesh->GetBoneWorldPos(PlayerBone::Head);
	Body = ACharater->Mesh->GetBoneWorldPos(PlayerBone::Neck);
	Pelvis = ACharater->Mesh->GetBoneWorldPos(PlayerBone::Hips);
	LeftLeg = ACharater->Mesh->GetBoneWorldPos(PlayerBone::LeftLeg);
	LeftUpLeg = ACharater->Mesh->GetBoneWorldPos(PlayerBone::LeftUpLeg);
	LeftFoot = ACharater->Mesh->GetBoneWorldPos(PlayerBone::LeftFoot);

	RightLeg   = ACharater->Mesh->GetBoneWorldPos(PlayerBone::RightLeg);
	RightUpLeg = ACharater->Mesh->GetBoneWorldPos(PlayerBone::RightUpLeg);
	RightFoot  = ACharater->Mesh->GetBoneWorldPos(PlayerBone::RightFoot);

	LeftArm = ACharater->Mesh->GetBoneWorldPos(PlayerBone::LeftArm);
	LeftLowArm = ACharater->Mesh->GetBoneWorldPos(PlayerBone::VB_LeftArm_LeftForeArm);
	leftHand = ACharater->Mesh->GetBoneWorldPos(PlayerBone::LeftHand);

	RightArm = ACharater->Mesh->GetBoneWorldPos(PlayerBone::RightArm);
	RightLowArm = ACharater->Mesh->GetBoneWorldPos(PlayerBone::VB_RightArm_RightForeArm);
	RightHand = ACharater->Mesh->GetBoneWorldPos(PlayerBone::RightHand);

	bool IsVisble = WorldHelper::IsActorVisible(PlayerContrller->AcknowledgedPawn, Actor);

	DrwaBoneByLine(Head, Body, IsVisble);
	DrwaBoneByLine(Body, Pelvis, IsVisble);

	DrwaBoneByLine(Pelvis, LeftUpLeg, IsVisble);
	DrwaBoneByLine(LeftUpLeg, LeftLeg, IsVisble);
	DrwaBoneByLine(LeftLeg, LeftFoot, IsVisble);

	DrwaBoneByLine(Pelvis, RightUpLeg, IsVisble);
	DrwaBoneByLine(RightUpLeg, RightLeg, IsVisble);
	DrwaBoneByLine(RightLeg, RightFoot, IsVisble);

	DrwaBoneByLine(RightArm, RightLowArm, IsVisble);
	DrwaBoneByLine(RightLowArm, leftHand, IsVisble);

	DrwaBoneByLine(LeftArm, LeftLowArm, IsVisble);
	DrwaBoneByLine(LeftLowArm, leftHand, IsVisble);
}

void Esp::DrawMenu() {
	ImGui::Checkbox("透视_测试", &Esp_Enable);
	ImGui::Checkbox("倒地不透", &Esp_Impending);
	ImGui::Checkbox("友军不透", &Esp_Friend);
	ImGui::Checkbox("绘制骨骼", &Esp_DrawBone);
	ImGui::Checkbox("绘制未知物体", &Esp_DrawUnk);
}

std::tuple<int, int> Esp::GetScreenCenter(){
	std::tie(Wide, height) = HookDx11Manager::GetInstance()->GetWindowsRect();
	return { Wide / 2, height / 2 };
}