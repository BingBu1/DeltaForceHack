
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUp_ButtonKeyChoice.WBP_SetUp_ButtonKeyChoice_C
// Size: 0x5b4 (Inherited: 0x550)
class UWBP_SetUp_ButtonKeyChoice_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFButton* Button_95; // 0x558(0x08)
	struct UDFImage* DFImage_Line; // 0x560(0x08)
	struct UDFImage* DFImage_Line1; // 0x568(0x08)
	struct UWBP_SetUpComponent_Tu_C* SetUpComponent_Tu; // 0x570(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x578(0x08)
	/*struct UWBP_CommonKeyIconBox_C**/char WBP_CommonKeyIconBox[0x8]; // 0x580(0x08)
	struct UTextBlock* ZoomText1; // 0x588(0x08)
	int32_t Type; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct FText InputStateTipsTxt; // 0x598(0x18)
	float KeyIconHeight; // 0x5b0(0x04)

	void UpdateType(int32_t Type); // Function WBP_SetUp_ButtonKeyChoice.WBP_SetUp_ButtonKeyChoice_C.UpdateType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec033005f
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
