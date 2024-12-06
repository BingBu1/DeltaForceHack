
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Battle_Hero_Talent.WBP_Battle_Hero_Talent_C
// Size: 0x590 (Inherited: 0x550)
class UWBP_Battle_Hero_Talent_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFButton* Button_113; // 0x558(0x08)
	struct UCanvasPanel* CanvasPanel_37; // 0x560(0x08)
	struct UDFTextBlock* DFTextBlock; // 0x568(0x08)
	struct UDFTextBlock* DFTextBlock_50; // 0x570(0x08)
	struct UImage* Image_Line; // 0x578(0x08)
	struct UImage* Image_Talent; // 0x580(0x08)
	int32_t Type; // 0x588(0x04)
	float Wrap; // 0x58c(0x04)

	void SetType(int32_t Type); // Function WBP_Battle_Hero_Talent.WBP_Battle_Hero_Talent_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3fc0000040
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
