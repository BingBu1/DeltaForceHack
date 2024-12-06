
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailContent_EnhancedAccessoryLevel.WBP_ItemDetailContent_EnhancedAccessoryLevel_C
// Size: 0x58c (Inherited: 0x550)
class UWBP_ItemDetailContent_EnhancedAccessoryLevel_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char _wtDefenceLevelCheckBox[0x8]; // 0x558(0x08)
	struct UDFImage* DFImage_74; // 0x560(0x08)
	struct UDFImage* DFImage_170; // 0x568(0x08)
	/*struct UWBP_CommonItemTemplate_C**/char WBP_CommonItemTemplate[0x8]; // 0x570(0x08)
	struct UWBP_ItemDetailContent_BigItem_C* wPiercingLevel; // 0x578(0x08)
	/*struct UWBP_DFCommonButtonV3S1_C**/char wUnEquip[0x8]; // 0x580(0x08)
	int32_t Type; // 0x588(0x04)

	void SetType(); // Function WBP_ItemDetailContent_EnhancedAccessoryLevel.WBP_ItemDetailContent_EnhancedAccessoryLevel_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
