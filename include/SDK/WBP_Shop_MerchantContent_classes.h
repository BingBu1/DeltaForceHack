
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Shop_MerchantContent.WBP_Shop_MerchantContent_C
// Size: 0x5b8 (Inherited: 0x550)
class UWBP_Shop_MerchantContent_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Shop_MerchantContent_huan; // 0x558(0x08)
	struct UDFScrollGridBox* ScrollGridBox_shop; // 0x560(0x08)
	struct FLinearColor BP_ExchangeDisableColor; // 0x568(0x10)
	struct FLinearColor BP_ExchangeAbleSelectColor; // 0x578(0x10)
	struct FLinearColor BP_ExchangeAbleUnselectColor; // 0x588(0x10)
	struct FVector2D BP_V2dItemSizePC; // 0x598(0x08)
	struct FVector2D BP_V2dItemSizeM; // 0x5a0(0x08)
	struct FVector2D NewVar_1; // 0x5a8(0x08)
	float ItemViewHeightOverrideHD; // 0x5b0(0x04)
	float ItemViewHeightOverrideMobile; // 0x5b4(0x04)

	void BP_SetStyle(); // Function WBP_Shop_MerchantContent.WBP_Shop_MerchantContent_C.BP_SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffcc0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
