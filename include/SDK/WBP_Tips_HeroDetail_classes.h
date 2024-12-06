
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Tips_HeroDetail.WBP_Tips_HeroDetail_C
// Size: 0x4f8 (Inherited: 0x450)
class UWBP_Tips_HeroDetail_C : public UDFMSkillDetailView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* WBP_Tips_HeroDetail_Ani_out; // 0x458(0x08)
	struct UWidgetAnimation* WBP_Tips_HeroDetail_Ani_in; // 0x460(0x08)
	struct UDFTextBlock* DFTextBlock_29; // 0x468(0x08)
	struct UDFTextBlock* DFTextBlock_74; // 0x470(0x08)
	struct UDFImage* Icon; // 0x478(0x08)
	struct UImage* Image_30; // 0x480(0x08)
	struct UWBP_Tips_HeroDetail_Skill_C* WBP_Tips_HeroDetail_Skill; // 0x488(0x08)
	struct UWBP_Tips_HeroDetail_Skill_C* WBP_Tips_HeroDetail_Skill_167; // 0x490(0x08)
	struct UWBP_Tips_HeroDetail_Skill_C* WBP_Tips_HeroDetail_Skill_279; // 0x498(0x08)
	struct UWBP_Tips_HeroDetail_Skill_C* WBP_Tips_HeroDetail_Skill_371; // 0x4a0(0x08)
	struct TMap<int64_t, struct FLinearColor> Colors; // 0x4a8(0x50)

	struct UDFMSkillDetailViewItem* BP_GetProp2(); // Function WBP_Tips_HeroDetail.WBP_Tips_HeroDetail_C.BP_GetProp2 // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
