
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_InventoryPickup_Container.BP_InventoryPickup_Container_C
// Size: 0x1a20 (Inherited: 0x19f0)
class ABP_InventoryPickup_Container_C : public AInventoryPickup_Container {
public:

	struct UBoxComponent* FakeBoxForHit; // 0x19f0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x19f8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x1a00(0x08)
	struct UInteractorOperatorProcessComponent* OperatorProcess; // 0x1a08(0x08)
	struct UInteractorOperatorProcessComponent* InteractorOperatorProcess; // 0x1a10(0x08)
	struct UInteractorProcessPawnAnimComponent* InteractorProcessPawnAnim; // 0x1a18(0x08)

	struct FVector GetBoundsOriginOffset(); // Function BP_InventoryPickup_Container.BP_InventoryPickup_Container_C.GetBoundsOriginOffset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
