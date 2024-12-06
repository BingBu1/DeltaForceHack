
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseExpansionManager.WBP_WarehouseExpansionManager_C
// Size: 0x5d0 (Inherited: 0x550)
class UWBP_WarehouseExpansionManager_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_WarehouseExpansionManager_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_WarehouseExpansionManager_in; // 0x560(0x08)
	struct UDFImage* DFImage_Bg; // 0x568(0x08)
	struct UImage* Image_332; // 0x570(0x08)
	struct UImage* Image_413; // 0x578(0x08)
	struct UImage* Image_485; // 0x580(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x588(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x590(0x08)
	struct UWBP_WarehouseExpansionManagerItem_C* WBP_WarehouseExpansionManagerItem; // 0x598(0x08)
	struct UButton* wtBgMaskBtn; // 0x5a0(0x08)
	struct UWBP_WarehouseScroll_C* wtDownMask; // 0x5a8(0x08)
	struct UButton* wtEndManageBtn; // 0x5b0(0x08)
	struct UWBP_WarehouseScroll_C* wtUpMask; // 0x5b8(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Imagebg[0x10]; // 0x5c0(0x10)

	void SetStyle(); // Function WBP_WarehouseExpansionManager.WBP_WarehouseExpansionManager_C.SetStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
