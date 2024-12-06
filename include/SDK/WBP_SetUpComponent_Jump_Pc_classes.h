
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUpComponent_Jump_Pc.WBP_SetUpComponent_Jump_Pc_C
// Size: 0x5c9 (Inherited: 0x558)
class UWBP_SetUpComponent_Jump_Pc_C : public UWBP_BaseSetUpItem_C {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_CheckOrder_out; // 0x560(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_CheckOrder_in; // 0x568(0x08)
	struct UDFButton* _wtJumpBtn; // 0x570(0x08)
	struct UDFImage* DFImage_Bg; // 0x578(0x08)
	struct UCanvasPanel* HoverPan; // 0x580(0x08)
	struct UDFImage* Image_Hover; // 0x588(0x08)
	struct UTextBlock* TextBlock; // 0x590(0x08)
	struct FText bpTitle; // 0x598(0x18)
	/*struct FMulticastInlineDelegate*/char OnCheckStateChanged[0x10]; // 0x5b0(0x10)
	bool Disabled; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	int32_t Type; // 0x5c4(0x04)
	bool Line; // 0x5c8(0x01)

	void SetLine(bool Line); // Function WBP_SetUpComponent_Jump_Pc.WBP_SetUpComponent_Jump_Pc_C.SetLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdbfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
