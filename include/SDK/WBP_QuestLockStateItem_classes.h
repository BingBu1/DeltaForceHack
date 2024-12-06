
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_QuestLockStateItem.WBP_QuestLockStateItem_C
// Size: 0x595 (Inherited: 0x550)
class UWBP_QuestLockStateItem_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_QuestLockStateItem_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_QuestLockStateItem_in; // 0x560(0x08)
	struct UWidgetAnimation* WBP_QuestLockStateItem_Autoout; // 0x568(0x08)
	struct UWidgetAnimation* WBP_QuestLockStateItem_AutoIn; // 0x570(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_4; // 0x578(0x08)
	struct UDFMImage* DFMImage_Line; // 0x580(0x08)
	struct UDFTextBlock* wQuestUnlockTxt; // 0x588(0x08)
	int32_t TextStyle; // 0x590(0x04)
	bool PointIsVisible; // 0x594(0x01)

	void SetPointVisible(bool Condition); // Function WBP_QuestLockStateItem.WBP_QuestLockStateItem_C.SetPointVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
