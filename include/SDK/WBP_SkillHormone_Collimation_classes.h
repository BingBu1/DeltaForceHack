
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SkillHormone_Collimation.WBP_SkillHormone_Collimation_C
// Size: 0x438 (Inherited: 0x3a0)
class UWBP_SkillHormone_Collimation_C : public UDFMMobileSupportCrosshairView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UWidgetAnimation* WBP_SkillHormone_Collimation_lock; // 0x3a8(0x08)
	struct UWidgetAnimation* WBP_SkillHormone_Collimation_out; // 0x3b0(0x08)
	struct UWidgetAnimation* WBP_SkillHormone_Collimation_in; // 0x3b8(0x08)
	struct UWidgetAnimation* WBP_SkillHormone_Collimation; // 0x3c0(0x08)
	struct UWidgetAnimation* cg; // 0x3c8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x3d0(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Effects; // 0x3d8(0x08)
	struct UDFImage* DFImage; // 0x3e0(0x08)
	struct UDFImage* DFImage_2; // 0x3e8(0x08)
	struct UDFImage* DFImage_3; // 0x3f0(0x08)
	struct UDFImage* DFImage_4; // 0x3f8(0x08)
	struct UDFImage* DFImage_5; // 0x400(0x08)
	struct UDFImage* DFImage_47; // 0x408(0x08)
	struct UDFMImage* DFMImage_2; // 0x410(0x08)
	struct UDFMImage* DFMImage_3; // 0x418(0x08)
	struct UImage* Image_82; // 0x420(0x08)
	int32_t Type; // 0x428(0x04)
	bool Lock; // 0x42c(0x01)
	bool SetVsibile; // 0x42d(0x01)
	char pad_42E[0x2]; // 0x42e(0x02)
	struct UWeaponFuncComponentAimOutline* AimOutlineComponent; // 0x430(0x08)

	void GetAimOutlineComponent(struct UWeaponFuncComponentAimOutline*& Component); // Function WBP_SkillHormone_Collimation.WBP_SkillHormone_Collimation_C.GetAimOutlineComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x72c0000070
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
