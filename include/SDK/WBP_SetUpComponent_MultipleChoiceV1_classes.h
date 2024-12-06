
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUpComponent_MultipleChoiceV1.WBP_SetUpComponent_MultipleChoiceV1_C
// Size: 0x5c1 (Inherited: 0x558)
class UWBP_SetUpComponent_MultipleChoiceV1_C : public UWBP_BaseSetUpItem_C {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_MultipleChoice_out; // 0x560(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_MultipleChoice_in; // 0x568(0x08)
	struct UDFImage* DFImage_329; // 0x570(0x08)
	struct UDFImage* DFImage_Bg; // 0x578(0x08)
	struct UDFImage* DFImage_Disabled; // 0x580(0x08)
	struct UCanvasPanel* HoverPan; // 0x588(0x08)
	struct UDFTextBlock* TextBlock; // 0x590(0x08)
	struct UWBP_DFTabGroupDroDownBox_Pc_C* WBP_DFTabGroupDroDownBox_Pc; // 0x598(0x08)
	struct FText bpTitle; // 0x5a0(0x18)
	bool Disabled; // 0x5b8(0x01)
	char pad_5B9[0x3]; // 0x5b9(0x03)
	int32_t Type; // 0x5bc(0x04)
	bool Line; // 0x5c0(0x01)

	void SetLine(bool Line); // Function WBP_SetUpComponent_MultipleChoiceV1.WBP_SetUpComponent_MultipleChoiceV1_C.SetLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
