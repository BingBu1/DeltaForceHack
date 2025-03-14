#include "pch.h"
#include "esp.h"
#include "GWroldHelper.hpp"
#include "HookDx11Manager.h"
#include "Helper.hpp"

Esp::Esp() {
	AddMenu(this);
	Esp_Disance = 150.f;
}

std::string Esp::GetActorName(Dumper::AActor *Actor) {
	std::string RetVal{};
	std::string OriginName = Actor->GetName();
	if(Actor->IsA(Dumper::ACharacterBase::StaticClass())) {
		auto ACharater	 = static_cast<Dumper::AGPCharacterBase *>(Actor);
		auto PlayerState = ACharater->PlayerState->IsA(Dumper::AGPPlayerState::StaticClass()) ? static_cast<Dumper::AGPPlayerState *>(ACharater->PlayerState) : nullptr;
		auto IsAi = PlayerState->bIsPlayerAI;
		auto PlayerName = PlayerState->GetPlayerName();
		auto name = PlayerName.wc_str();
		RetVal	 = fmt::format("{}{}", PlayerName.IsValid() == false ? xorstr_("玩家") : utf_16_To_utf_8(name), IsAi ? "(Ai)" : "");
	} else if(Actor->IsA(Dumper::AInventoryPickup_DeadBody::StaticClass())) {
		auto DeadBody = static_cast<Dumper::AInventoryPickup_DeadBody*>(Actor);
		auto IsAi = DeadBody->IsAIDeadbody();
		RetVal = fmt::format("{}{}",xorstr_("尸体物资"),IsAi ? "(Ai)":"");
	} else if(Actor->IsA(Dumper::APickupBase::StaticClass())) {
		auto Name = static_cast<Dumper::ABP_InventoryPickup_C *>(Actor)->GetItemName();
		auto Namew = Name.Get();
		RetVal = utf_16_To_utf_8(Namew);
	} else if(OriginName.find(xorstr_("BP_FXProxy_Exit")) != std::string::npos) {
		RetVal = xorstr_("撤离点");
	} else if(OriginName.find(xorstr_("Computer")) != std::string::npos) {
		RetVal = xorstr_("电脑");
	}

	if(Esp_DrawUnk && RetVal.empty()) {
		RetVal = Actor->GetName();
	}
	return RetVal;
}

void Esp::DrawUnkName(Dumper::AActor *Actor){
	if(!Actor || !Esp_DrawUnk)
		return;
	Dumper::FVector2D Out;
	
	std::string Drawstr;
	auto PlayerContrller = WorldHelper::GetPlayerContorller();
	auto Name = Actor->GetName();
	if(Name.empty() || !PlayerContrller)
		return;
	auto Vec = Actor->K2_GetActorLocation();
	PlayerContrller->ProjectWorldLocationToScreen(Vec, Out, false);
	if((Out.X == 0.f && Out.Y == 0.f) || (Out.X < 0.f || Out.X > Wide || Out.Y < 0.f || Out.Y > height))
		return;
	if(!PlayerContrller->AcknowledgedPawn)
		return;
	float Distance = PlayerContrller->AcknowledgedPawn->GetDistanceTo(Actor) / 100.f;
	if(Distance > Esp_Disance)
		return;
	ImGui::PushFont(HookDx11Manager::GetInstance()->Font);
	auto CalcSize = ImGui::GetFont()->CalcTextSizeA(ImGui::GetFontSize(), FLT_MAX, 0.f, Drawstr.c_str());
	Draw->AddText({ Out.X - CalcSize.x / 2, Out.Y }, ImColor(255, 255, 255), Drawstr.c_str());
	ImGui::PopFont();
}

void Esp::DrawPlayer(Dumper::AActor *Actor) {
    if(!EspName_Enable) {
        return;
    }
    Dumper::FVector2D Out{};
    int32_t CampId = 0, CurrentCampId = 0, TeamId = 0, CurrentTeamId = 0;
    auto PlayerContrller = WorldHelper::GetPlayerContorller();
    if(!PlayerContrller || !PlayerContrller->AcknowledgedPawn) // 检查 PlayerContrller 是否为空
        return;
    auto LocalApwn = PlayerContrller->AcknowledgedPawn;
    auto ACharater = static_cast<Dumper::ADFMCharacter *>(Actor); // 使用 dynamic_cast 进行类型转换检查
    if(!LocalApwn || LocalApwn->PlayerState == nullptr || ACharater == nullptr || ACharater->PlayerState == nullptr) // 检查 ACharater 是否为空
        return;

    bool IsFriend = WorldHelper::IsFriend(LocalApwn, ACharater);
    if(Esp_Impending && ACharater->IsImpendingDeath() || ACharater->IsDead())
        return;
    if(Esp_Friend && IsFriend)
        return;
    auto Name = GetActorName(Actor);
    if(Name.empty())
        return;
    auto Vec = Actor->K2_GetActorLocation();

    PlayerContrller->ProjectWorldLocationToScreen(Vec, Out, false);
    if((Out.X == 0.f && Out.Y == 0.f) || (Out.X < 0.f || Out.X > Wide || Out.Y < 0.f || Out.Y > height))
        return;

    float Distance = PlayerContrller->AcknowledgedPawn->GetDistanceTo(Actor) / 100.f;
    if(Distance > Esp_Disance)
        return;
    auto HeadLevel   = WorldHelper::GetArmorLevel(static_cast<Dumper::ADFMCharacter *>(Actor), Dumper::EEquipmentType::Helmet);
    auto BreastLevel = WorldHelper::GetArmorLevel(static_cast<Dumper::ADFMCharacter *>(Actor), Dumper::EEquipmentType::BreastPlate);


    ImGui::PushFont(HookDx11Manager::GetInstance()->Font);
    auto Drawstr = fmt::format("{}[{:.0f}M]\n头:{}胸:{}", Name, Distance, HeadLevel, BreastLevel);
    auto CalcSize = ImGui::GetFont()->CalcTextSizeA(ImGui::GetFontSize(), FLT_MAX, 0.f, Drawstr.c_str());
    Draw->AddText({ Out.X - CalcSize.x / 2, Out.Y }, ImColor(255, 255, 255), Drawstr.c_str());
    ImGui::PopFont();
}

void Esp::DrawOther(Dumper::AActor *Actor) {
	if (!Esp_DrwaPick) 
		return;
	
	Dumper::FVector2D Out{};
	int32_t Price	     = 0;
	auto PlayerContrller = WorldHelper::GetPlayerContorller();
	auto Name	     = GetActorName(Actor);
	std::string Drawstr{};
	if(Name.empty())
		return;
	auto Vec = Actor->K2_GetActorLocation();
	PlayerContrller->ProjectWorldLocationToScreen(Vec, Out, false);
	if((Out.X == 0.f && Out.Y == 0.f) || (Out.X < 0.f || Out.X > Wide || Out.Y < 0.f || Out.Y > height))
		return;
	if(!PlayerContrller->AcknowledgedPawn)
		return;
	float Distance = PlayerContrller->AcknowledgedPawn->GetDistanceTo(Actor) / 100.f;
	if(Distance > Esp_Disance)
		return;
	// if(Actor->IsA(Dumper::ABP_InventoryPickup_C::StaticClass())){
	// 	Price = static_cast<Dumper::AGPInventoryBase*>(Actor)->GetSellPrice();
	// }
		
	if(Price != 0) {
		Drawstr = fmt::format("{}[{:.0f}M]\n价值:{}", Name, Distance, Price);
	} else {
		Drawstr = fmt::format("{}[{:.0f}M]", Name, Distance);
	}
	ImGui::PushFont(HookDx11Manager::GetInstance()->Font);
	auto CalcSize = ImGui::GetFont()->CalcTextSizeA(ImGui::GetFontSize(), FLT_MAX, 0.f, Drawstr.c_str());
	this->DrawName.push_back({Drawstr.c_str(),{ Out.X - CalcSize.x / 2, Out.Y },ImColor(255, 255, 255)});
	// Draw->AddText({ Out.X - CalcSize.x / 2, Out.Y }, ImColor(255, 255, 255), Drawstr.c_str());
	ImGui::PopFont();
}

void Esp::DrawNameEsp(Dumper::AActor *Actor) {
	auto PlayerContrller = WorldHelper::GetPlayerContorller();
	if(Actor == nullptr || Actor->RootComponent == nullptr || Actor == PlayerContrller->AcknowledgedPawn)
		return;
	if(!PlayerContrller->AcknowledgedPawn)
		return;
	if(Actor->IsA(Dumper::ACharacterBase::StaticClass()) == false){
		DrawUnkName(Actor);
		return;
	}
	DrawPlayer(Actor);
	DrawBackPlayer(Actor);
}

void Esp::DrawBackPlayer(Dumper::AActor *Actor) {
    if (!Esp_DrwaPlayerBaack)
        return;

    Dumper::FVector2D Out{};
    auto PlayerContrller = WorldHelper::GetPlayerContorller();
    if (!PlayerContrller || !PlayerContrller->AcknowledgedPawn)
        return;

    auto LocalApwn = PlayerContrller->AcknowledgedPawn;
    auto ACharater = static_cast<Dumper::ADFMCharacter *>(Actor);
    if (!LocalApwn || !LocalApwn->PlayerState || !ACharater || !ACharater->PlayerState)
        return;

    auto Vec		  = Actor->K2_GetActorLocation();
    auto PlayerVec	  = LocalApwn->K2_GetActorLocation();
    auto DirectionToEnemy	  = Vec - PlayerVec;
    Dumper::FRotator PlayerRot	  = PlayerContrller->K2_GetActorRotation();
    Dumper::FVector PlayerForward = PlayerRot.ToVector();
    float Dot		  = PlayerForward.Dot(DirectionToEnemy.GetSafeNormal());

	if(Dot < 0.0f){
		Dumper::FVector2D ScreenPosition, ScreenCenter;
		PlayerContrller->ProjectWorldLocationToScreen(Vec, ScreenPosition, false);
		const float CircleRadius = 100.0f;
		const ImVec2 CircelCenter = { static_cast<float>(Wide) / 2, static_cast<float>(height) / 2 };
		ScreenCenter = {CircelCenter.x, CircelCenter.y};
		Draw->AddCircleFilled(CircelCenter, CircleRadius, ImColor(255, 0, 0, 255), 100);

		// 计算敌人指向圆心的方向，并绘制三角形（箭头）
		Dumper::FVector2D DirectionToEnemy2D = ScreenPosition - ScreenCenter;
		DirectionToEnemy2D.Normalize();
		DirectionToEnemy2D *= CircleRadius;
		// 自定义箭头大小
		const float ArrowSize = 20.0f;

		Dumper::FVector2D ArrowTip = ScreenCenter + DirectionToEnemy2D;

		// 计算箭头的左右两个点
		Dumper::FVector2D ArrowLeft  = ArrowTip - Dumper::FVector2D(DirectionToEnemy2D.Y, -DirectionToEnemy2D.X) * ArrowSize;
		Dumper::FVector2D ArrowRight = ArrowTip + Dumper::FVector2D(DirectionToEnemy2D.Y, -DirectionToEnemy2D.X) * ArrowSize;

		// 绘制三角形（箭头）
		ImVec2 points[3];
		points[0] = ImVec2(ScreenCenter.X, ScreenCenter.Y);
		points[1] = ImVec2(ArrowLeft.X, ArrowLeft.Y);
		points[2] = ImVec2(ArrowRight.X, ArrowRight.Y);

		Draw->AddConvexPolyFilled(points, 3, IM_COL32(255, 0, 0, 255));
	}

    // PlayerContrller->ProjectWorldLocationToScreen(Vec, Out, false);

    // if ((Out.X == 0.f && Out.Y == 0.f) || (Out.X < 0.f || Out.X > Wide || Out.Y < 0.f || Out.Y > height)) {
    //     float Distance = PlayerContrller->AcknowledgedPawn->GetDistanceTo(Actor) / 100.f;
    //     if (Distance > Esp_Disance)
    //         return;

    //     // 计算方向和角度
    //     Dumper::FVector direction = (Vec - PlayerVec).GetSafeNormal();
    //     float angle = atan2(direction.Y, direction.X);

    //     // 确定圆心位置
    //     ImVec2 center(static_cast<float>(Wide) / 2, static_cast<float>(height) / 2);
    //     float radius = 100.0f; // 圆的半径

    //     // 确定三角形的位置
    //     ImVec2 indicatorPosition(
    //         center.x + radius * cos(angle),
    //         center.y + radius * sin(angle)
    //     );
    //     auto color = ImColor(1.0f, 0.0f, 0.0f, 1.0f); // 红色

    //     // 绘制中心圆
    //     Draw->AddCircle(center, radius, color, 100);

    //     // 绘制三角形
    //     float triangleSize = 20.0f; // 调整三角形大小

    //     ImVec2 p1 = indicatorPosition;
    //     ImVec2 p2 = ImVec2(indicatorPosition.x + triangleSize * cos(angle + 3.14159f / 6), indicatorPosition.y + triangleSize * sin(angle + 3.14159f / 6));
    //     ImVec2 p3 = ImVec2(indicatorPosition.x + triangleSize * cos(angle - 3.14159f / 6), indicatorPosition.y + triangleSize * sin(angle - 3.14159f / 6));
    //     Draw->AddTriangleFilled(p1, p2, p3, color);
    // }
}

void Esp::AlwaysDraw() {
	Draw = ImGui::GetForegroundDrawList();
	auto PlayerContrller   = WorldHelper::GetPlayerContorller();
	
	std::tie(Wide, height) = HookDx11Manager::GetInstance()->GetWindowsRect();

	Dumper::TArray<Dumper::AActor *> *AActors;
	AActors = WorldHelper::GetAActorList();
	
	if(!AActors || !PlayerContrller)
		return;
	auto AActors_ = *AActors;
	for(int i = 0; i < AActors_.Count(); i++) {
		auto Actor = AActors_[i];
		if(Actor == nullptr || IsBadReadPtr(Actor, 8) == true)
			continue;
		DrawNameEsp(Actor);
		DrawBone(Actor);
		WallHack(Actor);
	}
	if(Esp_DrwaPick) {
		Dumper::TArray<Dumper::AActor *> Box_1{}, Box_2{}, Pick{};
		WorldHelper::GetPickBaseList(Pick);
		for(auto i : Pick) {
			if(i == nullptr || IsBadReadPtr(i, 8))
				continue;
			DrawOther(i);
		}
	}
	ExecDraw();
}

void Esp::ExecDraw(){
	std::vector<std::vector<std::string>> mergedTexts; // 每组拼接的物品名称
    std::vector<std::vector<ImU32>> mergedColors;      // 每组拼接的物品颜色
    std::vector<ImVec2> mergedPositions;              // 每组的绘制位置

	const float maxDistance = 20.0f;
	mergedTexts.reserve(this->DrawName.size());
    mergedColors.reserve(this->DrawName.size());
    mergedPositions.reserve(this->DrawName.size());

	for(size_t i = 0; i < this->DrawName.size(); ++i) {
		bool merged = false;
		for(size_t j = 0; j < mergedPositions.size(); ++j) {
			float dx       = DrawName[i].DrawPos.x - mergedPositions[j].x;
			float dy       = DrawName[i].DrawPos.y - mergedPositions[j].y;
			float distance = std::sqrt(dx * dx + dy * dy);
			if(distance < maxDistance) {
				mergedTexts[j].push_back(DrawName[i].DrawStr);
                mergedColors[j].push_back(DrawName[i].DrawColor);
				merged = true;
				break;
			}
		}
		if(!merged) {
			// 创建新的组
			mergedTexts.push_back({ DrawName[i].DrawStr });
			mergedColors.push_back({ DrawName[i].DrawColor });
			mergedPositions.push_back(DrawName[i].DrawPos);
		}
	}
	for (size_t i = 0; i < mergedTexts.size(); ++i) {
        ImVec2 pos = mergedPositions[i];

        // 按行绘制每个物品
        for (size_t k = 0; k < mergedTexts[i].size(); ++k) {
	        ImGui::PushFont(HookDx11Manager::GetInstance()->Font);
	        auto CalcSize = ImGui::GetFont()->CalcTextSizeA(ImGui::GetFontSize(), FLT_MAX, 0.f, mergedTexts[i][k].c_str());
	        Draw->AddText(pos, mergedColors[i][k], mergedTexts[i][k].c_str());
	        pos.y += CalcSize.y; 
	        ImGui::PopFont();
        }
    }
	DrawName.clear();
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

	bool IsFriend = WorldHelper::IsFriend(LocalApwn, ACharater);
	if(Esp_Impending && ACharater->IsImpendingDeath() || ACharater->IsDead())
		return;
	if(Esp_Friend && IsFriend)
		return;
	if(ACharater->Mesh == nullptr)
		return;
	float Distance = PlayerContrller->AcknowledgedPawn->GetDistanceTo(Actor) / 100.f;
	if(Distance > Esp_Disance)
		return;
	Dumper::FVector HeadTop, Head, Body, Pelvis, LeftLeg, LeftUpLeg, LeftFoot, RightLeg,
	    RightUpLeg, RightFoot, LeftArm, LeftLowArm, leftHand, RightArm, RightLowArm, RightHand;

	HeadTop = ACharater->Mesh->GetBoneWorldPos(PlayerBone::Head_Joint);
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

    // 绘制头部圆形
    Dumper::FVector2D HeadScreenPos, NeckScreenPos;
    if (PlayerContrller->ProjectWorldLocationToScreen(Head, HeadScreenPos, false) &&
        PlayerContrller->ProjectWorldLocationToScreen(Body, NeckScreenPos, false)) {
        if (HeadScreenPos.X > 0.f && HeadScreenPos.X < Wide && HeadScreenPos.Y > 0.f && HeadScreenPos.Y < height) {
            float radius = std::sqrt(std::pow(HeadScreenPos.X - NeckScreenPos.X, 2) + std::pow(HeadScreenPos.Y - NeckScreenPos.Y, 2));
            ImColor color = IsVisble ? ImColor(0, 255, 0) : ImColor(255, 0, 0); // 可见时为绿色，不可见时为红色
            Draw->AddCircle(ImVec2(HeadScreenPos.X, HeadScreenPos.Y), radius, color, 100);
        }
    }

}

void Esp::WallHack(Dumper::AActor * Actor){
	if(!Esp_WallHack)
		return;
	auto PlayerContrller = WorldHelper::GetPlayerContorller();
	if(Actor == nullptr || Actor->RootComponent == nullptr || Actor == PlayerContrller->AcknowledgedPawn)
		return;
	if(!PlayerContrller->AcknowledgedPawn)
		return;
	if(Actor->IsA(Dumper::ACharacterBase::StaticClass()) == false)
		return;
	auto Acharater = static_cast<Dumper::AGPCharacterBase *>(Actor);
	if(Acharater->BlackBoard == nullptr)
		return;
	auto blackBoard = Acharater->BlackBoard;
	if(blackBoard->OutLineEffectComponent == nullptr)
		return;

	constexpr uint32_t bitflag = (UINT32)Dumper::EOutLineEffectType::OutLineType_DyingShowCampMedicCanRescueSelf;
	
	auto EffectFlag = *PULONG32(PCHAR(blackBoard->OutLineEffectComponent) + 0x1D0); //未公开IDA逆一下PlayOutLineEffect函数
	
	if(EffectFlag & bitflag)
		return;
	blackBoard->OutLineEffectComponent->PlayOutLineEffect((Dumper::EOutLineEffectType)bitflag);
}

void Esp::DrawMenu() {
	ImGui::Checkbox("绘制昵称", &EspName_Enable);
	ImGui::Checkbox("绘制物资", &Esp_DrwaPick);
	ImGui::Checkbox("倒地不透", &Esp_Impending);
	ImGui::Checkbox("友军不透", &Esp_Friend);
	ImGui::Checkbox("绘制骨骼", &Esp_DrawBone);
	ImGui::Checkbox("热能透视", &Esp_WallHack);
	ImGui::Checkbox("绘制屏幕外预警", &Esp_DrwaPlayerBaack);
	ImGui::Checkbox("绘制未知物体", &Esp_DrawUnk);

	ImGui::SliderFloat("透视距离", &Esp_Disance, 0.f, 2000.f);
	
}

std::tuple<int, int> Esp::GetScreenCenter(){
	std::tie(Wide, height) = HookDx11Manager::GetInstance()->GetWindowsRect();
	return { Wide / 2, height / 2 };
}