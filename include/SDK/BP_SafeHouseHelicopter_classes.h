
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_SafeHouseHelicopter.BP_SafeHouseHelicopter_C
// Size: 0x5f8 (Inherited: 0x4f8)
class ABP_SafeHouseHelicopter_C : public ASafeHouseHelicopter {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UGameAkComponent* GameAk; // 0x500(0x08)
	struct USkeletalMeshComponent* Rope; // 0x508(0x08)
	struct UStaticMeshComponent* GTI_Wheel_03; // 0x510(0x08)
	struct UStaticMeshComponent* GTI_Wheel_02; // 0x518(0x08)
	struct UStaticMeshComponent* GTI_Wheel_01; // 0x520(0x08)
	struct USkeletalMeshComponent* Support_Right; // 0x528(0x08)
	struct USkeletalMeshComponent* Support_Left; // 0x530(0x08)
	struct USkeletalMeshComponent* Support_Back; // 0x538(0x08)
	struct UStaticMeshComponent* Helicopter_Up; // 0x540(0x08)
	struct UStaticMeshComponent* Helicopter_Down; // 0x548(0x08)
	struct UStaticMeshComponent* Helicopter_Back; // 0x550(0x08)
	struct USkeletalMeshComponent* HatchCover_Left; // 0x558(0x08)
	struct USkeletalMeshComponent* HatchCover_Right; // 0x560(0x08)
	struct UStaticMeshComponent* GTI_Propeller_02; // 0x568(0x08)
	struct UStaticMeshComponent* GTI_Propeller_01; // 0x570(0x08)
	struct UStaticMeshComponent* GTI_Door_04; // 0x578(0x08)
	struct UStaticMeshComponent* GTI_Door_03; // 0x580(0x08)
	struct UStaticMeshComponent* GTI_Door_02; // 0x588(0x08)
	struct UStaticMeshComponent* GTI_Door_01; // 0x590(0x08)
	struct UStaticMeshComponent* GTI_Body_3P; // 0x598(0x08)
	struct USkeletalMeshComponent* GTI_Base; // 0x5a0(0x08)
	struct USceneComponent* DropDownPoint; // 0x5a8(0x08)
	struct USceneComponent* root; // 0x5b0(0x08)
	struct USplineComponent* Spline1; // 0x5b8(0x08)
	struct UArrowComponent* Arrow; // 0x5c0(0x08)
	struct USceneComponent* BaseRoot; // 0x5c8(0x08)
	struct UParticleSystemComponent* LandVFX; // 0x5d0(0x08)
	struct UFXResourceContainerComponent* CloudFX01; // 0x5d8(0x08)
	struct UFXResourceContainerComponent* CloudFX02; // 0x5e0(0x08)
	struct UParticleSystemComponent* NativeCloudFX01; // 0x5e8(0x08)
	struct UParticleSystemComponent* NativeCloudFX02; // 0x5f0(0x08)

	void DeactiveSmokeFX(bool Dense); // Function BP_SafeHouseHelicopter.BP_SafeHouseHelicopter_C.DeactiveSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffebfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
