
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Chat_BtnBoxS2.WBP_Chat_BtnBoxS2_C
// Size: 0x340 (Inherited: 0x298)
class UWBP_Chat_BtnBoxS2_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UButton* Button; // 0x2a0(0x08)
	struct UImage* Image_84; // 0x2a8(0x08)
	struct UImage* Image_01; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_01; // 0x2b8(0x08)
	bool Set_Select; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FText Set_Text; // 0x2c8(0x18)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image_Bg[0x10]; // 0x2e0(0x10)
	struct FSlateColor Text_Color_01; // 0x2f0(0x28)
	struct FSlateColor Text_Color_02; // 0x318(0x28)

	void BP_Set_Type(); // Function WBP_Chat_BtnBoxS2.WBP_Chat_BtnBoxS2_C.BP_Set_Type // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3f03a8f5fdc7211b
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
