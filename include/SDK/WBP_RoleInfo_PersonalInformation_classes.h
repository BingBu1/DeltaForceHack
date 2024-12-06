
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_RoleInfo_PersonalInformation.WBP_RoleInfo_PersonalInformation_C
// Size: 0x599 (Inherited: 0x550)
class UWBP_RoleInfo_PersonalInformation_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage_35; // 0x558(0x08)
	struct UDFTextBlock* DFTextBlock_54; // 0x560(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtCommonCheckInstruction[0x8]; // 0x568(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x570(0x08)
	struct UDFRichTextBlock* wtRoleInfoText; // 0x578(0x08)
	struct FText Text; // 0x580(0x18)
	bool Type; // 0x598(0x01)

	void SetStyle(bool Type); // Function WBP_RoleInfo_PersonalInformation.WBP_RoleInfo_PersonalInformation_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c000003e
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
