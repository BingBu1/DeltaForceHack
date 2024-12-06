
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Chat_Private.WBP_Chat_Private_C
// Size: 0x5c0 (Inherited: 0x550)
class UWBP_Chat_Private_C : public ULuaUIBaseView {
public:

	/*struct UWBP_DFCommonIconButton_C**/char Button_Game[0x8]; // 0x550(0x08)
	struct UButton* Button_mention; // 0x558(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char Button_QQ[0x8]; // 0x560(0x08)
	struct UButton* Button_UnRead; // 0x568(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char Button_WX[0x8]; // 0x570(0x08)
	struct UWBP_DFCommonIconCheckButton_C* Checkbox_1517; // 0x578(0x08)
	struct UDFNamedSlot* EmptySlot; // 0x580(0x08)
	struct ULine* Image_341; // 0x588(0x08)
	struct UDFMCommonImage* Image_1149; // 0x590(0x08)
	struct UDFMCommonImage* Image_1176; // 0x598(0x08)
	struct UDFMCommonImage* Image_1401; // 0x5a0(0x08)
	struct UTextBlock* TextBlock_112; // 0x5a8(0x08)
	struct UDFRichTextBlock* TextBlock_373; // 0x5b0(0x08)
	struct UDFWaterfallScrollView* WaterfallScrollView; // 0x5b8(0x08)

	enum class ESlateVisibility Get_Image_340_Visibility_1(); // Function WBP_Chat_Private.WBP_Chat_Private_C.Get_Image_340_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3dc000003e
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
