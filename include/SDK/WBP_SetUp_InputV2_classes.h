
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUp_InputV2.WBP_SetUp_InputV2_C
// Size: 0xbbc (Inherited: 0xb98)
class UWBP_SetUp_InputV2_C : public UDFHDSettingsInputPanel {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb98(0x08)
	struct UDFVerticalBox* FunctionGroupList; // 0xba0(0x08)
	struct UDFScrollBox* InputPanelScrollBox; // 0xba8(0x08)
	/*struct UWBP_SetUpComponent_InputRevoke_C**/char WBP_SetUpComponent_TipsBar[0x8]; // 0xbb0(0x08)
	int32_t NewVar_1; // 0xbb8(0x04)

	void PreConstruct(bool IsDesignTime); // Function WBP_SetUp_InputV2.WBP_SetUp_InputV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4bdcb6f76a35e2c
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
