
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_InventoryPickup_WeapModule.BP_InventoryPickup_WeapModule_C
// Size: 0x15b1 (Inherited: 0x1588)
class ABP_InventoryPickup_WeapModule_C : public AInventoryPickup_WeaponModule {
public:

	struct UBoxComponent* FakeBoxForHit; // 0x1588(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x1590(0x08)
	struct UInteractorSingleItemPrestartLogicComponent* InteractorSingleItemPrestartLogic; // 0x1598(0x08)
	struct UInteractorOperatorProcessComponent* InteractorOperatorProcess; // 0x15a0(0x08)
	struct UInteractorProcessPawnAnimComponent* InteractorProcessPawnAnim; // 0x15a8(0x08)
	bool bCanOverlap; // 0x15b0(0x01)

	struct FVector GetBoundsOriginOffset(); // Function BP_InventoryPickup_WeapModule.BP_InventoryPickup_WeapModule_C.GetBoundsOriginOffset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
