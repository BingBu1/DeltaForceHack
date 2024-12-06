
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Collections_ProductionMatrix_Item.WBP_Collections_ProductionMatrix_Item_C
// Size: 0x590 (Inherited: 0x550)
class UWBP_Collections_ProductionMatrix_Item_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFButton* wtEmptyBtn; // 0x558(0x08)
	struct UScaleBox* wtEmptyIcon; // 0x560(0x08)
	struct UDFImage* wtEmptyMask; // 0x568(0x08)
	struct UWBP_ShopItemTemplate_C* wtWeaponSkinItemView; // 0x570(0x08)
	int32_t Type; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image[0x10]; // 0x580(0x10)

	void SetType(int32_t Selection); // Function WBP_Collections_ProductionMatrix_Item.WBP_Collections_ProductionMatrix_Item_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
