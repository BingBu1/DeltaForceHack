
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Interaction_Npc.WBP_Interaction_Npc_C
// Size: 0x2d0 (Inherited: 0x2b8)
class UWBP_Interaction_Npc_C : public UIrisSafeHouseInteractorNPCIcon {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* wtDeviceIcon; // 0x2c0(0x08)
	struct UTextBlock* wtDeviceName; // 0x2c8(0x08)

	void SetInfo(struct FSoftObjectPath IconImgPath, struct FText& Name); // Function WBP_Interaction_Npc.WBP_Interaction_Npc_C.SetInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
