
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Shop_SingleMerchantView_Item.WBP_Shop_SingleMerchantView_Item_C
// Size: 0x2d4 (Inherited: 0x298)
class UWBP_Shop_SingleMerchantView_Item_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* WBP_QuestLockStateItem_out; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_QuestLockStateItem_in; // 0x2a8(0x08)
	struct UWidgetAnimation* WBP_QuestLockStateItem_Autoout; // 0x2b0(0x08)
	struct UWidgetAnimation* WBP_QuestLockStateItem_AutoIn; // 0x2b8(0x08)
	struct UDFMImage* DFMImage_Line; // 0x2c0(0x08)
	struct UDFTextBlock* wQuestUnlockTxt; // 0x2c8(0x08)
	int32_t TextStyle; // 0x2d0(0x04)

	void IsPC(); // Function WBP_Shop_SingleMerchantView_Item.WBP_Shop_SingleMerchantView_Item_C.IsPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x72c0650073
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
