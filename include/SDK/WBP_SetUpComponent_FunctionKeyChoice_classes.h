
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUpComponent_FunctionKeyChoice.WBP_SetUpComponent_FunctionKeyChoice_C
// Size: 0x600 (Inherited: 0x550)
class UWBP_SetUpComponent_FunctionKeyChoice_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_MultipleChoice_2_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_MultipleChoice_2_in; // 0x560(0x08)
	struct UWBP_SetUpComponent_BtnBg_C* BtnBg; // 0x568(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x570(0x08)
	struct UDFButton* DFButton_1; // 0x578(0x08)
	struct UDFCheckBox* DFCheckBox_EnableOptionalBind; // 0x580(0x08)
	struct UDFImage* DFImage; // 0x588(0x08)
	struct UDFImage* DFImage_113; // 0x590(0x08)
	struct UDFImage* DFImage_Disabled; // 0x598(0x08)
	struct UTextBlock* GamepadKey; // 0x5a0(0x08)
	struct UCanvasPanel* HoverPan; // 0x5a8(0x08)
	struct UDFVerticalBox* ItemSubList; // 0x5b0(0x08)
	struct UWBP_SetUp_ButtonKeyChoice_C* KeyButton1; // 0x5b8(0x08)
	struct UWBP_SetUp_ButtonKeyChoice_C* KeyButton2; // 0x5c0(0x08)
	struct UDFSizeBox* OptionalBindCover; // 0x5c8(0x08)
	struct UTextBlock* OptionalBindFunctioName; // 0x5d0(0x08)
	struct UWBP_SetUp_DroDownBox_Pc_C* WBP_SetUp_DroDownBox_Pc; // 0x5d8(0x08)
	struct FText bpTitle; // 0x5e0(0x18)
	bool Disabled; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	int32_t Type; // 0x5fc(0x04)

	void SetType(int32_t Type); // Function WBP_SetUpComponent_FunctionKeyChoice.WBP_SetUpComponent_FunctionKeyChoice_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
