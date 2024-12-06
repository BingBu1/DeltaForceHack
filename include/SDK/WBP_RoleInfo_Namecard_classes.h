
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_RoleInfo_Namecard.WBP_RoleInfo_Namecard_C
// Size: 0x2f0 (Inherited: 0x298)
class UWBP_RoleInfo_Namecard_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UDFImage* DFImage_144; // 0x2a0(0x08)
	struct UDFImage* DFImage_202; // 0x2a8(0x08)
	struct UDFImage* DFImage_223; // 0x2b0(0x08)
	struct UDFImage* DFImage_Privilege; // 0x2b8(0x08)
	struct UWBP_RoleInfo_TitleItem_Small_C* WBP_RoleInfo_TitleItem_Small; // 0x2c0(0x08)
	struct UDFButton* wtLevelBtn; // 0x2c8(0x08)
	struct UDFButton* wtOpenHead; // 0x2d0(0x08)
	struct UDFButton* wtOpenMilitary; // 0x2d8(0x08)
	struct UWBP_CommonHeadIcon_C* wtPlayerIcon; // 0x2e0(0x08)
	struct UObject* NewVar_1; // 0x2e8(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_RoleInfo_Namecard.WBP_RoleInfo_Namecard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
