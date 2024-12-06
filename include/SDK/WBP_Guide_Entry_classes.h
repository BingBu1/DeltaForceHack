
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Guide_Entry.WBP_Guide_Entry_C
// Size: 0x5a8 (Inherited: 0x550)
class UWBP_Guide_Entry_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Guide_Entry_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Guide_Entry_in; // 0x560(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_3; // 0x568(0x08)
	struct UDFImage* DFImage_Left_VerticalLine; // 0x570(0x08)
	struct UDFImage* DFMImage_225; // 0x578(0x08)
	struct UDFSizeBox* DFSizeBox_6; // 0x580(0x08)
	struct UDFTextBlock* wTipsText; // 0x588(0x08)
	struct FText GuideText; // 0x590(0x18)

	void SetType(); // Function WBP_Guide_Entry.WBP_Guide_Entry_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
