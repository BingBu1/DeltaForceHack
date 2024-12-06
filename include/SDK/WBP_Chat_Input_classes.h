
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Chat_Input.WBP_Chat_Input_C
// Size: 0x328 (Inherited: 0x2d0)
class UWBP_Chat_Input_C : public UInputMethodCandidateList {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* WBP_Chat_Input_in; // 0x2d8(0x08)
	struct UWidgetAnimation* WBP_Chat_Input_out; // 0x2e0(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2e8(0x08)
	struct UDFImage* DFImage_40; // 0x2f0(0x08)
	struct UDFVerticalBox* DFVerticalBox_1; // 0x2f8(0x08)
	struct TArray<struct UWBP_Chat_InputItem_C*> Candidates; // 0x300(0x10)
	struct TArray<struct FString> TestCandidate; // 0x310(0x10)
	struct FVector2D TestPosition; // 0x320(0x08)

	void OnSetCandidateList(struct TArray<struct FString>& List, int32_t SelectionIndex); // Function WBP_Chat_Input.WBP_Chat_Input_C.OnSetCandidateList // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
