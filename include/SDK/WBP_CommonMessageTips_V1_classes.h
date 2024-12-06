
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonMessageTips_V1.WBP_CommonMessageTips_V1_C
// Size: 0x571 (Inherited: 0x550)
class UWBP_CommonMessageTips_V1_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFRichTextBlock* _wtTextContent; // 0x558(0x08)
	struct FMargin BP_DefaultPadding; // 0x560(0x10)
	bool CustomStyle; // 0x570(0x01)

	void BP_SetCustomFontStyle(struct FName& InNewFontStyleID); // Function WBP_CommonMessageTips_V1.WBP_CommonMessageTips_V1_C.BP_SetCustomFontStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffffffff6aaaaaac
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
