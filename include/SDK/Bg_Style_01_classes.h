
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass Bg_Style_01.Bg_Style_01_C
// Size: 0x2f8 (Inherited: 0x298)
class UBg_Style_01_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UImage* Image_16; // 0x2a0(0x08)
	struct UImage* Image_4215; // 0x2a8(0x08)
	struct UPaperSprite* SetBorder; // 0x2b0(0x08)
	struct FLinearColor Boder_Color; // 0x2b8(0x10)
	struct FLinearColor Bg_Color; // 0x2c8(0x10)
	int32_t BorderSize; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UPaperSprite* Sprite; // 0x2e0(0x08)
	/*struct FMulticastInlineDelegate*/char ClickCallback[0x10]; // 0x2e8(0x10)

	void PreConstruct(bool IsDesignTime); // Function Bg_Style_01.Bg_Style_01_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
