
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_Inventory_DeadBody.BP_Inventory_DeadBody_C
// Size: 0x1d58 (Inherited: 0x1d48)
class ABP_Inventory_DeadBody_C : public AInventoryPickup_DeadBody {
public:

	struct UInteractorProcessPawnAnimComponent* InteractorProcessPawnAnim; // 0x1d48(0x08)
	struct UInteractorOperatorProcessComponent* InteractorOperatorProcess; // 0x1d50(0x08)

	struct FVector GetBoundsOriginOffset(); // Function BP_Inventory_DeadBody.BP_Inventory_DeadBody_C.GetBoundsOriginOffset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
