
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUpComponent_HitColor.WBP_SetUpComponent_HitColor_C
// Size: 0x3f8 (Inherited: 0x298)
class UWBP_SetUpComponent_HitColor_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UDFImage* DFImage_174; // 0x2a0(0x08)
	struct UDFImage* DFImage_258; // 0x2a8(0x08)
	/*struct TSoftObjectPtr<UTexture2D>*/char NewVar_1[0x28]; // 0x2b0(0x28)
	struct FSlateColor NewVar_2; // 0x2d8(0x28)
	struct FSlateColor NewVar_3; // 0x300(0x28)
	struct FSlateColor NewVar_4; // 0x328(0x28)
	struct FSlateColor NewVar_5; // 0x350(0x28)
	struct FSlateColor NewVar_6; // 0x378(0x28)
	struct FName TableName; // 0x3a0(0x08)
	struct TMap<int32_t, struct FSlateColor> ColorMap; // 0x3a8(0x50)

	void InitColorMap(); // Function WBP_SetUpComponent_HitColor.WBP_SetUpComponent_HitColor_C.InitColorMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0700078
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
