
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonHoverBg_V2.WBP_CommonHoverBg_V2_C
// Size: 0x360 (Inherited: 0x00)
class UWBP_CommonHoverBg_V2_C {
public:

	char pad_0[0x338]; // 0x00(0x338)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UDFImage* DFImage; // 0x340(0x08)
	struct UImage* wtHover; // 0x348(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image[0x10]; // 0x350(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_CommonHoverBg_V2.WBP_CommonHoverBg_V2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
