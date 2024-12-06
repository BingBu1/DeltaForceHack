
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_DFMSafeHouseNPC_Interact.BP_DFMSafeHouseNPC_Interact_C
// Size: 0xee0 (Inherited: 0xec5)
class ABP_DFMSafeHouseNPC_Interact_C : public ABP_DFMSafeHouseNPC_C {
public:

	char pad_EC5[0x3]; // 0xec5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xec8(0x08)
	struct UWidgetComponent* Interaction3DTip; // 0xed0(0x08)
	struct USHInteractorNPCComponent* SHInteractorNPC; // 0xed8(0x08)

	void Event_On_Start_Interact(struct AActor* InteractingTarget); // Function BP_DFMSafeHouseNPC_Interact.BP_DFMSafeHouseNPC_Interact_C.Event On Start Interact // (BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
