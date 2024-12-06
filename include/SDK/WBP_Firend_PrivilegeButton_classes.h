
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Firend_PrivilegeButton.WBP_Firend_PrivilegeButton_C
// Size: 0x57c (Inherited: 0x550)
class UWBP_Firend_PrivilegeButton_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage; // 0x558(0x08)
	struct UDFSpacer* DFSpacer_30; // 0x560(0x08)
	struct UDFButton* PrivilegeBtn; // 0x568(0x08)
	struct UDFTextBlock* Text_Privilege; // 0x570(0x08)
	int32_t Type; // 0x578(0x04)

	void SetType(int32_t Type); // Function WBP_Firend_PrivilegeButton.WBP_Firend_PrivilegeButton_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffebfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
