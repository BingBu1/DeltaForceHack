
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WVP_Common_DragSelectedBox.WVP_Common_DragSelectedBox_C
// Size: 0x618 (Inherited: 0x550)
class UWVP_Common_DragSelectedBox_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* Anima_ShopItemTemplate; // 0x558(0x08)
	struct UWidgetAnimation* Anim_GuideHighlight; // 0x560(0x08)
	struct UWidgetAnimation* WVP_Common_DragSelectedBox_all; // 0x568(0x08)
	struct UWidgetAnimation* Anima_loop_01; // 0x570(0x08)
	struct UWidgetAnimation* Anima_Loop; // 0x578(0x08)
	struct UWidgetAnimation* Anima_Warning; // 0x580(0x08)
	struct UWidgetAnimation* Anim_DragFlickerOneSecond; // 0x588(0x08)
	struct UWidgetAnimation* Anim_DoubleClik; // 0x590(0x08)
	struct UWidgetAnimation* Anim_Breathing; // 0x598(0x08)
	struct UWidgetAnimation* Anim_Twinkle; // 0x5a0(0x08)
	struct UWidgetAnimation* Anim_Into; // 0x5a8(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x5b0(0x08)
	struct UDFImage* DFImage_Bgmask; // 0x5b8(0x08)
	struct UDFImage* DFImage_Line; // 0x5c0(0x08)
	struct UDFTextBlock* DFTextBlock_88; // 0x5c8(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x5d0(0x08)
	struct UImage* Image_2; // 0x5d8(0x08)
	struct UImage* Image_01; // 0x5e0(0x08)
	struct UImage* Image_02; // 0x5e8(0x08)
	struct UImage* Image_03; // 0x5f0(0x08)
	struct UTextBlock* TextBlock_57; // 0x5f8(0x08)
	int32_t Type; // 0x600(0x04)
	char pad_604[0x4]; // 0x604(0x04)
	struct TArray<struct UPaperSprite*> BG; // 0x608(0x10)

	void Set_Type(); // Function WVP_Common_DragSelectedBox.WVP_Common_DragSelectedBox_C.Set_Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
