
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_InventoryPickup.BP_InventoryPickup_C
// Size: 0x1580 (Inherited: 0x1558)
class ABP_InventoryPickup_C : public AInventoryPickup {
public:

	struct UBoxComponent* FakeBoxForHit; // 0x1558(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x1560(0x08)
	struct UInteractorSingleItemPrestartLogicComponent* InteractorSingleItemPrestartLogic; // 0x1568(0x08)
	struct UInteractorOperatorProcessComponent* InteractorOperatorProcess; // 0x1570(0x08)
	struct UInteractorProcessPawnAnimComponent* InteractorProcessPawnAnim; // 0x1578(0x08)

	struct FVector GetBoundsOriginOffset(); // Function BP_InventoryPickup.BP_InventoryPickup_C.GetBoundsOriginOffset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
