
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ComplexWeaponDataTerm.WBP_ComplexWeaponDataTerm_C
// Size: 0x5c0 (Inherited: 0x550)
class UWBP_ComplexWeaponDataTerm_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage_82; // 0x558(0x08)
	struct UDFImage* DFImage_389; // 0x560(0x08)
	struct UDFTextBlock* wQuestObjWeaponInfoDesc; // 0x568(0x08)
	struct UDFImage* wQuestObjWeaponInfoIcon; // 0x570(0x08)
	struct URichTextBlock* wQuestObjWeaponInfoValue; // 0x578(0x08)
	int32_t Number; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char attributeIcon[0x10]; // 0x588(0x10)
	int32_t DefaultType; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct TArray<struct FText> defaultText; // 0x5a0(0x10)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char stateIcon[0x10]; // 0x5b0(0x10)

	void SetType(bool IsRequire); // Function WBP_ComplexWeaponDataTerm.WBP_ComplexWeaponDataTerm_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
