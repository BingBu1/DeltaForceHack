#include "pch.h"
#include "Bone.h"
namespace WorldHelper {

inline Dumper::UWorld * GetWorld(){
	return *Dumper::UWorld::GWorld;
}

inline Dumper::APlayerController *GetPlayerContorller() {
	Dumper::UWorld *World	  = *Dumper::UWorld::GWorld;
	Dumper::APlayerController *RetVal = nullptr;
	if(!World)
		return RetVal;
	if(World->OwningGameInstance && World->OwningGameInstance->LocalPlayers[0]) {
		auto LoaclPlayer = World->OwningGameInstance->LocalPlayers[0];
		RetVal	 = LoaclPlayer->PlayerController;
	}
	return RetVal;
}

inline Dumper::TArray<Dumper::AActor *> *GetAActorList() {
	Dumper::UWorld *World	         = *Dumper::UWorld::GWorld;
	Dumper::TArray<Dumper::AActor *> *RetVal = nullptr;
	if(!World)
		return RetVal;
	if(World->PersistentLevel) {
		RetVal = &(World->PersistentLevel->Actors);
	}
	return RetVal;
}

inline void GetPickBaseList(Dumper::TArray<Dumper::AActor *> &ActorList) {
	static auto GamePlay = Dumper::UObject::FindObject<Dumper::UGameplayStatics>();
	if(!GamePlay)
		GamePlay = Dumper::UObject::FindObject<Dumper::UGameplayStatics>();
	auto PickupClass = Dumper::APickupBase::StaticClass();
	if(!PickupClass)
		return;
	auto World = GetWorld();
	if(!World)
		return;
	GamePlay->STATIC_GetAllActorsOfClass(World, PickupClass, ActorList);
}

inline void GetBoxOpenBox(Dumper::TArray<Dumper::AActor *> &ActorList) {
	static auto GamePlay = Dumper::UObject::FindObject<Dumper::UGameplayStatics>();
	if(!GamePlay)
		GamePlay = Dumper::UObject::FindObject<Dumper::UGameplayStatics>();
	auto BoxClass = Dumper::AInventoryPickup_OpenBox::StaticClass();
	if(!BoxClass)
		return;
	GamePlay->STATIC_GetAllActorsOfClass(GetWorld(), BoxClass, ActorList);
}

inline void GetBoxontainer(Dumper::TArray<Dumper::AActor *> &ActorList) {
	static auto GamePlay = Dumper::UObject::FindObject<Dumper::UGameplayStatics>();
	if(!GamePlay)
		GamePlay = Dumper::UObject::FindObject<Dumper::UGameplayStatics>();
	auto Box2Class = Dumper::AInventoryPickup_Container::StaticClass();
	if(!Box2Class)
		return;
	GamePlay->STATIC_GetAllActorsOfClass(GetWorld(), Box2Class, ActorList);
}

inline bool IsActorVisible(Dumper::AActor *Me, Dumper::AActor *Target) {
	static Dumper::UKismetSystemLibrary * Obj;
	Dumper::UWorld * World{};
	Dumper::FVector Start{}, End{}, Eyes{};
	Dumper::FRotator EyesRotation{};
	Dumper::TArray<Dumper::AActor *> ig{};
	Dumper::FLinearColor col{};
	Dumper::FHitResult res{};
	if(!Obj)
		Obj = Dumper::UObject::FindObject<Dumper::UKismetSystemLibrary>();

	if(!Obj)
		return false;
	
	if(!Me || ! Target)
		return false;
	World = GetWorld();
	if(!World)
		return false;
	Dumper::AGPCharacterBase *Player = static_cast<Dumper::AGPCharacterBase *>(Me);
	Dumper::AGPCharacterBase* TargetChar = static_cast<Dumper::AGPCharacterBase*>(Target);
	if(!Player || !TargetChar)
		return false;
	if(!Player->Mesh || !TargetChar->Mesh)
		return false;
	Player->GetActorEyesViewPoint(Eyes, EyesRotation);
	Start = Eyes;
	End = TargetChar->Mesh->GetBoneWorldPos(PlayerBone::Neck);

	bool IsSurrse = Obj->STATIC_LineTraceSingle(World, Start, End, Dumper::ETraceTypeQuery::TraceTypeQuery1, true,
			            ig, Dumper::EDrawDebugTrace::None, res, true, col, col, 0.f);
	if(IsSurrse) {
		if(res.Actor.Get() != Target) {
			IsSurrse = false;
		}
	}

	return IsSurrse;

	// auto PlayerC = GetPlayerContorller();
	// if(!World)
	// 	return false;
	// if(Target->IsA(Dumper::AGPCharacterBase::StaticClass()) == false)
	// 	return false;
	// Me->GetActorEyesViewPoint(Eyes, EyesRotation);
	// return PlayerC->LineOfSightTo(Target, Eyes, false);
}

inline bool IsFriend(Dumper::AActor *A, Dumper::AActor *B) {
	if(!A || !B)
		return false;
	auto Class = Dumper::ADFMCharacter::StaticClass();
	if(!A->IsA(Class) || !B->IsA(Class))	
		return false;
	auto ACharaterA	        = static_cast<Dumper::ADFMCharacter *>(A);
	auto ACharaterB	        = static_cast<Dumper::ADFMCharacter *>(B);
	if(!ACharaterA->PlayerState || !ACharaterB->PlayerState)
		return false;
	uint32_t ACampId        = static_cast<Dumper::AGPPlayerState *>(ACharaterA->PlayerState)->GetCamp();
	uint32_t BCampId        = static_cast<Dumper::AGPPlayerState *>(ACharaterB->PlayerState)->GetCamp();
	uint32_t ATeamId        = static_cast<Dumper::AGPPlayerState *>(ACharaterA->PlayerState)->GetTeamID();
	uint32_t BTeamId = static_cast<Dumper::AGPPlayerState *>(ACharaterB->PlayerState)->GetTeamID();
	return ACampId == BCampId;
}

inline int32_t GetArmorLevel(Dumper::ADFMCharacter *Achar, Dumper::EEquipmentType Type) {
	if (Type == Dumper::EEquipmentType::Max || ! Achar) {
		return 0;
	}
	if(!Achar->DFMBlackboard)
		return 0;
	return Achar->DFMBlackboard->GetArmorLevel(Type);
}

inline Dumper::TArray<Dumper::FArmorInfo> *GetArmorInfoArray(Dumper::ADFMCharacter *Achar) {
	if(!Achar->DFMBlackboard)
		return nullptr;
	if(!Achar->DFMBlackboard->CharacterEquipComponent)
		return nullptr;
	auto Equip = Achar->DFMBlackboard->CharacterEquipComponent;
	return &Equip->EquipedArmorInfoArray;
}

inline int32_t GetArmorLevel2(Dumper::ADFMCharacter *Achar, Dumper::EEquipmentType Type) {
	if (Type == Dumper::EEquipmentType::Max || ! Achar) {
		return 0;
	}
	auto Array = GetArmorInfoArray(Achar);
	if(!Array)
		return 0;
	for(auto &Info : *Array) {
		if(Info.EquipmentType == Type){
			return Info.ArmorLevel;
		}
	}
	return 0;
}

inline std::string GetArmorInfostr(Dumper::ADFMCharacter *Achar) {
	auto Array = GetArmorInfoArray(Achar);
	std::string Armorstr{};
	if(!Array)
		return "";
	for(auto &Info : *Array) {
		auto ArmorName = Info.ProtecetName.GetName();
		int32_t ArmorLevel = Info.ArmorLevel;
		Armorstr = fmt::format("{}{}{}\n",Armorstr,ArmorName,ArmorLevel);
	}
	return Armorstr;
}

}    // namespace WorldHelper
