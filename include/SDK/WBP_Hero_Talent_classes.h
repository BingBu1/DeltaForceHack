
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Hero_Talent.WBP_Hero_Talent_C
// Size: 0x5a0 (Inherited: 0x550)
class UWBP_Hero_Talent_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Hero_Talent_in; // 0x558(0x08)
	struct UButton* Button_113; // 0x560(0x08)
	struct UWBP_SlotCompSelected_C* DFImage_Selected; // 0x568(0x08)
	struct UDFTextBlock* DFTextBlock; // 0x570(0x08)
	struct UDFTextBlock* DFTextBlock_50; // 0x578(0x08)
	struct UImage* fx_bu; // 0x580(0x08)
	struct UImage* Image_Line; // 0x588(0x08)
	struct UImage* Image_Talent; // 0x590(0x08)
	bool HadeLine; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	int32_t Type; // 0x59c(0x04)

	void SetType(int32_t Type, bool HadeLine); // Function WBP_Hero_Talent.WBP_Hero_Talent_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x30c0000031
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
