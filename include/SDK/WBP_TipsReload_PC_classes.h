
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_TipsReload_PC.WBP_TipsReload_PC_C
// Size: 0x5fc (Inherited: 0x5a8)
class UWBP_TipsReload_PC_C : public ULuaUIHudBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a8(0x08)
	struct UWidgetAnimation* WBP_TipsReload_PC_NeedAmmo_loop; // 0x5b0(0x08)
	struct UWidgetAnimation* WBP_TipsReload_PC_out; // 0x5b8(0x08)
	struct UWidgetAnimation* WBP_TipsReload_PC_in; // 0x5c0(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_Reload_loop_type1; // 0x5c8(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_Reload_loop_type3; // 0x5d0(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_Reload_loop_type2; // 0x5d8(0x08)
	struct UTextBlock* TipsText; // 0x5e0(0x08)
	/*struct UWBP_CommonKeyIconBox_C**/char WBP_CommonKeyIconBox[0x8]; // 0x5e8(0x08)
	int32_t Type; // 0x5f0(0x04)
	float LowWarningThresholdRatio; // 0x5f4(0x04)
	float SuperLowWarningThresholdRatio; // 0x5f8(0x04)

	void BP_SetType(int32_t Type); // Function WBP_TipsReload_PC.WBP_TipsReload_PC_C.BP_SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x72c0650073
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
