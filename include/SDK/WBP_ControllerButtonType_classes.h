
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ControllerButtonType.WBP_ControllerButtonType_C
// Size: 0x3e1 (Inherited: 0x328)
class UWBP_ControllerButtonType_C : public UDFMCommonActionButtonView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* WBP_ControllerButtonHoldRun_in; // 0x330(0x08)
	struct UWidgetAnimation* WBP_ControllerButtonType_out; // 0x338(0x08)
	struct UWidgetAnimation* WBP_ControllerButtonType_loop; // 0x340(0x08)
	struct UWidgetAnimation* WBP_ControllerButtonType_in; // 0x348(0x08)
	bool NoIcon; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int32_t DFColor; // 0x354(0x04)
	int32_t Type; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	/*struct TSoftObjectPtr<UObject>*/char RefImage[0x28]; // 0x360(0x28)
	struct FMargin offset; // 0x388(0x10)
	struct FVector2D imageSize; // 0x398(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image[0x10]; // 0x3a0(0x10)
	bool isSmall; // 0x3b0(0x01)
	bool isSpecial; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	/*struct TSoftObjectPtr<UObject>*/char Image_2[0x28]; // 0x3b8(0x28)
	bool OnlyIcon; // 0x3e0(0x01)

	void BP_Init(); // Function WBP_ControllerButtonType.WBP_ControllerButtonType_C.BP_Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x67c000005a
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
