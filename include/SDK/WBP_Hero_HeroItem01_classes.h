
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Hero_HeroItem01.WBP_Hero_HeroItem01_C
// Size: 0x63c (Inherited: 0x550)
class UWBP_Hero_HeroItem01_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* HoverAni; // 0x558(0x08)
	struct UWidgetAnimation* UnhoverAni; // 0x560(0x08)
	struct UWidgetAnimation* WBP_Hero_HeroItem01_out; // 0x568(0x08)
	struct UWidgetAnimation* WBP_Hero_HeroItem01_in; // 0x570(0x08)
	struct UWidgetAnimation* WBP_Hero_HeroItem01_select; // 0x578(0x08)
	struct UDFButton* Button_113; // 0x580(0x08)
	struct UDFButton* DFButton_Cybercafe; // 0x588(0x08)
	struct UDFImage* DFImage_113; // 0x590(0x08)
	struct UDFImage* DFImage_130; // 0x598(0x08)
	struct UDFImage* DFImage_155; // 0x5a0(0x08)
	struct UDFImage* DFImage_Mask; // 0x5a8(0x08)
	struct UDFTipsAnchor* DFTipsAnchor; // 0x5b0(0x08)
	struct UDFMImage* fx_tuglicth; // 0x5b8(0x08)
	struct UImage* Image_Man; // 0x5c0(0x08)
	struct UImage* Img_ArmedIcon; // 0x5c8(0x08)
	struct UImage* Img_Cybercafe; // 0x5d0(0x08)
	struct UImage* Img_Select; // 0x5d8(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x5e0(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x5e8(0x08)
	/*struct UWBP_SlotCompMaskSmallLock_C**/char WBP_SlotCompMaskSmallLock[0x8]; // 0x5f0(0x08)
	struct UWBP_SlotCompSelected_C* WBP_SlotCompSelected; // 0x5f8(0x08)
	struct UWBP_Hero_Label_C* WBP_Store_Countdown_71; // 0x600(0x08)
	struct UDFTipsAnchor* wtHeroGetMethodTA; // 0x608(0x08)
	enum class ESlateVisibility IsSelected; // 0x610(0x01)
	char pad_611[0x7]; // 0x611(0x07)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char BP_Image[0x10]; // 0x618(0x10)
	/*struct TArray<struct TSoftObjectPtr<UTexture2D>>*/char Ref_Image[0x10]; // 0x628(0x10)
	int32_t Type; // 0x638(0x04)

	void SetType(int32_t Type); // Function WBP_Hero_HeroItem01.WBP_Hero_HeroItem01_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec06b006c
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
