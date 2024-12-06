
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Common_JumpOver.WBP_Common_JumpOver_C
// Size: 0x5ac (Inherited: 0x550)
class UWBP_Common_JumpOver_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Common_JumpOver_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Common_JumpOver_in; // 0x560(0x08)
	struct UDFButton* Button_135; // 0x568(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Space; // 0x570(0x08)
	struct UDFMImage* DFMImage_82; // 0x578(0x08)
	struct UDFMImage* DFMImage_152; // 0x580(0x08)
	struct UDFMImage* DFMImage_221; // 0x588(0x08)
	struct UDFVisibilityReContainer* DFVisibilityReContainer_1; // 0x590(0x08)
	struct UTextBlock* wtSkipText; // 0x598(0x08)
	struct UDFRichTextBlock* wtSkipText_PCOnly; // 0x5a0(0x08)
	int32_t DefaultLocationType; // 0x5a8(0x04)

	void SetType(int32_t LocationType); // Function WBP_Common_JumpOver.WBP_Common_JumpOver_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
