
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_AssemblyEquipAmmoCase_item.WBP_AssemblyEquipAmmoCase_item_C
// Size: 0x5b8 (Inherited: 0x550)
class UWBP_AssemblyEquipAmmoCase_item_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage; // 0x558(0x08)
	struct UDFImage* DFImage_51; // 0x560(0x08)
	struct UDFTextBlock* DFTextBlock_194; // 0x568(0x08)
	int32_t Bp_Type; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct FText Text; // 0x578(0x18)
	/*struct TSoftObjectPtr<UPaperSprite>*/char RefImage[0x28]; // 0x590(0x28)

	void BP_SetType(int32_t Type); // Function WBP_AssemblyEquipAmmoCase_item.WBP_AssemblyEquipAmmoCase_item_C.BP_SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
