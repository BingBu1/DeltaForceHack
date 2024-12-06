
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFTabGroupBox.WBP_DFTabGroupBox_C
// Size: 0x3858 (Inherited: 0x570)
class UWBP_DFTabGroupBox_C : public UDFDJWMainTab {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UWidgetAnimation* LoopAni; // 0x578(0x08)
	struct UDFImage* DFImage_309; // 0x580(0x08)
	struct UImage* wImg_CheckedNormalAniCircle_UncheckedUpAni_fx03; // 0x588(0x08)
	struct UNamedSlot* wtChildSlot; // 0x590(0x08)
	struct FName ImageStyleID; // 0x598(0x08)
	bool Type; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct FDFRichTextBlockCheckStateStyle TextStyle; // 0x5a8(0x1958)
	struct FDFRichTextBlockCheckStateStyle TextStyle_PC; // 0x1f00(0x1958)

	void SetPC(); // Function WBP_DFTabGroupBox.WBP_DFTabGroupBox_C.SetPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x52c0000064
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
