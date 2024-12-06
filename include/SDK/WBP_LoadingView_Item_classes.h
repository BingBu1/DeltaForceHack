
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_LoadingView_Item.WBP_LoadingView_Item_C
// Size: 0x318 (Inherited: 0x298)
class UWBP_LoadingView_Item_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UDFImage* DFImage_Bg; // 0x2a0(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_5; // 0x2a8(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_6; // 0x2b0(0x08)
	struct UDFTextBlock* Text_01; // 0x2b8(0x08)
	struct UDFTextBlock* Text_02; // 0x2c0(0x08)
	struct UDFTextBlock* Text_03; // 0x2c8(0x08)
	struct TArray<struct FText> ArrText_01; // 0x2d0(0x10)
	int32_t Index; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct FText> ArrText_02; // 0x2e8(0x10)
	struct TArray<struct FText> ArrText_03; // 0x2f8(0x10)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char ArrBg[0x10]; // 0x308(0x10)

	void SetInfo(int32_t Index); // Function WBP_LoadingView_Item.WBP_LoadingView_Item_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffffffffc0000001
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
