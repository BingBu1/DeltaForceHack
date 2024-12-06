
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_TopBarHD_BtnReturn.WBP_TopBarHD_BtnReturn_C
// Size: 0x5e8 (Inherited: 0x550)
class UWBP_TopBarHD_BtnReturn_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SetUp_ButtonReturn_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SetUp_ButtonReturn_in; // 0x560(0x08)
	struct UDFButton* Button_95; // 0x568(0x08)
	/*struct UWBP_CommonKeyIcon_C**/char WBP_CommonKeyIcon1[0x8]; // 0x570(0x08)
	struct UTextBlock* ZoomText1; // 0x578(0x08)
	struct FText Name; // 0x580(0x18)
	/*struct TSoftObjectPtr<UPaperSprite>*/char Image[0x28]; // 0x598(0x28)
	/*struct TSoftObjectPtr<UPaperSprite>*/char NewVar_1[0x28]; // 0x5c0(0x28)

	void SetStyle(); // Function WBP_TopBarHD_BtnReturn.WBP_TopBarHD_BtnReturn_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xc000006b
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
