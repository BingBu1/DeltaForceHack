
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SyncBtn_Item_01.WBP_SyncBtn_Item_01_C
// Size: 0x5f8 (Inherited: 0x550)
class UWBP_SyncBtn_Item_01_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UButton* Button_1; // 0x558(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_1; // 0x560(0x08)
	struct UDFTextBlock* DFTextBlock_60; // 0x568(0x08)
	struct UDFImage* Disable; // 0x570(0x08)
	struct UDFImage* Disable_2; // 0x578(0x08)
	struct UImage* Lock; // 0x580(0x08)
	/*struct UWBP_CommonOthersPoint_C**/char WBP_CommonOthersPoint[0x8]; // 0x588(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image_Bg_Disable[0x10]; // 0x590(0x10)
	int32_t ImageType; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct FText SetText; // 0x5a8(0x18)
	bool Disabled; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image_Bg_Normal[0x10]; // 0x5c8(0x10)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image_Bg_Horver[0x10]; // 0x5d8(0x10)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image_Bg_Click[0x10]; // 0x5e8(0x10)

	void SetButtonType(/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>& Type*/); // Function WBP_SyncBtn_Item_01.WBP_SyncBtn_Item_01_C.SetButtonType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
