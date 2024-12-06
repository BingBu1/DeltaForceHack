
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUpComponent_CheckOrder.WBP_SetUpComponent_CheckOrder_C
// Size: 0x5d0 (Inherited: 0x550)
class UWBP_SetUpComponent_CheckOrder_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_CheckOrder_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_CheckOrder_in; // 0x560(0x08)
	struct UDFCheckBox* DFCheckBox_102; // 0x568(0x08)
	struct UDFImage* DFImage_Bg; // 0x570(0x08)
	struct UDFImage* DFImage_Disabled; // 0x578(0x08)
	struct UDFImage* DFImage_X; // 0x580(0x08)
	struct UCanvasPanel* HoverPan; // 0x588(0x08)
	struct UDFImage* Image_Hover; // 0x590(0x08)
	struct UTextBlock* TextBlock; // 0x598(0x08)
	struct FText bpTitle; // 0x5a0(0x18)
	/*struct FMulticastInlineDelegate*/char OnCheckStateChanged[0x10]; // 0x5b8(0x10)
	bool Selected; // 0x5c8(0x01)
	bool Disabled; // 0x5c9(0x01)
	char pad_5CA[0x2]; // 0x5ca(0x02)
	int32_t Type; // 0x5cc(0x04)

	void SetType(int32_t Type); // Function WBP_SetUpComponent_CheckOrder.WBP_SetUpComponent_CheckOrder_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
