
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ShootingRange_LoadBullets_ItemDetail.WBP_ShootingRange_LoadBullets_ItemDetail_C
// Size: 0x5bc (Inherited: 0x550)
class UWBP_ShootingRange_LoadBullets_ItemDetail_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_ShootingRange_LoadBullets_ItemDetail_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_ShootingRange_LoadBullets_ItemDetail_in; // 0x560(0x08)
	struct UDFImage* DFImage_01_PCOnly; // 0x568(0x08)
	struct UDFImage* DFImage_AK; // 0x570(0x08)
	struct UDFImage* DFImage_Pistol; // 0x578(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x580(0x08)
	struct UTextBlock* TextBlock_titleMini; // 0x588(0x08)
	struct UTextBlock* TextBlock_titleName; // 0x590(0x08)
	/*struct UWBP_CommonItemTemplate_C**/char WBP_CommonItemTemplate[0x8]; // 0x598(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x5a0(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x5a8(0x10)
	int32_t Type; // 0x5b8(0x04)

	void SetType(int32_t Type); // Function WBP_ShootingRange_LoadBullets_ItemDetail.WBP_ShootingRange_LoadBullets_ItemDetail_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0740065
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
