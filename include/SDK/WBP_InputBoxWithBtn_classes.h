
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_InputBoxWithBtn.WBP_InputBoxWithBtn_C
// Size: 0x2f8 (Inherited: 0x298)
class UWBP_InputBoxWithBtn_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* WBP_InputBoxWithBtn_in; // 0x2a0(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_1; // 0x2a8(0x08)
	struct UDFImage* DFImageDelete; // 0x2b0(0x08)
	struct UDFButton* wtButtonDelete; // 0x2b8(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char wtCommonIconBtnFind[0x8]; // 0x2c0(0x08)
	struct UDFEditableTextBox* wtDFEditableTextBox; // 0x2c8(0x08)
	struct FText HintText; // 0x2d0(0x18)
	bool IsVis; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct UDFEditableTextBox* NewVar_1; // 0x2f0(0x08)

	void Set_Type(bool IsVis, struct FText HintText); // Function WBP_InputBoxWithBtn.WBP_InputBoxWithBtn_C.Set Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
