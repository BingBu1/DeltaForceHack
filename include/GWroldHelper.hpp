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

	World = GetWorld();
	if(!World)
		return false;
	if(Target->IsA(Dumper::AGPCharacterBase::StaticClass()) == false)
		return false;

	Me->GetActorEyesViewPoint(Eyes, EyesRotation);
	Start = Eyes;
	End = static_cast<Dumper::AGPCharacterBase*>(Target)->Mesh->GetBoneWorldPos(PlayerBone::Neck);

	bool IsSurrse = Obj->STATIC_LineTraceSingle(World, Start, End, Dumper::ETraceTypeQuery::TraceTypeQuery1, true,
			            ig, Dumper::EDrawDebugTrace::None, res, true, col, col, 0.f);
	if(!IsSurrse || !res.bBlockingHit)
		return false;
	auto HitActor = Dumper::UObject::GetGlobalObjects().GetObjectPtr(res.Actor.ObjectIndex);
	return (HitActor ? HitActor->Object : NULL) == Target;
}


}    // namespace WorldHelper
