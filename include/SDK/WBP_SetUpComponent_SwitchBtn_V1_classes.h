
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUpComponent_SwitchBtn_V1.WBP_SetUpComponent_SwitchBtn_V1_C
// Size: 0x5b0 (Inherited: 0x550)
class UWBP_SetUpComponent_SwitchBtn_V1_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFButton* Button_232; // 0x558(0x08)
	struct UDFTextBlock* DFTextBlock_70; // 0x560(0x08)
	struct UImage* Image_223; // 0x568(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x570(0x08)
	int32_t Type; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FText Text1; // 0x580(0x18)
	struct FText Text2; // 0x598(0x18)

	void SetType(int32_t Selection); // Function WBP_SetUpComponent_SwitchBtn_V1.WBP_SetUpComponent_SwitchBtn_V1_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x72c0000070
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
