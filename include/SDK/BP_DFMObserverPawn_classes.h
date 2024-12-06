
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_DFMObserverPawn.BP_DFMObserverPawn_C
// Size: 0x573 (Inherited: 0x4f0)
class ABP_DFMObserverPawn_C : public ADFMObserverPawn {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UGameAkComponent* GameAk; // 0x4f8(0x08)
	struct UFloatingPawnMovement* CameraMovementComponent; // 0x500(0x08)
	struct UCameraComponent* Camera; // 0x508(0x08)
	struct TArray<struct FSplinePoint> CameraSplinePointsArray; // 0x510(0x10)
	float CurrentDistance; // 0x520(0x04)
	struct FVector FocusPoint; // 0x524(0x0c)
	struct TArray<struct FVector> CameraPointsArray; // 0x530(0x10)
	struct TArray<struct FVector> TargetPointsArray; // 0x540(0x10)
	struct TArray<struct FSplinePoint> TargetSplinePointsArray; // 0x550(0x10)
	struct ABP_DFMCameraTrackActor_C* CameraTrackActor; // 0x560(0x08)
	bool bFocusOnPoint; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	float CurrentPercent; // 0x56c(0x04)
	bool ShowDebugRealTime; // 0x570(0x01)
	bool bFocusOnTargetLine; // 0x571(0x01)
	bool bShowDebug; // 0x572(0x01)

	void SetCameraTurningBoost(float TurningBoost); // Function BP_DFMObserverPawn.BP_DFMObserverPawn_C.SetCameraTurningBoost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
