
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Store_ItemBox.WBP_Store_ItemBox_C
// Size: 0x580 (Inherited: 0x550)
class UWBP_Store_ItemBox_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UPlatformSizeBox* PlatformSizeBox_3; // 0x558(0x08)
	struct UWBP_SlotCompGet_C* WBP_SlotCompGet; // 0x560(0x08)
	struct UDFImage* wtCannotRestoreImg; // 0x568(0x08)
	/*struct UWBP_CommonItemTemplate_C**/char wtCommonItemTemplate[0x8]; // 0x570(0x08)
	struct UDFTextBlock* wtOwnedText; // 0x578(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_Store_ItemBox.WBP_Store_ItemBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x72c0650073
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
