
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Common_AchievementIcon.WBP_Common_AchievementIcon_C
// Size: 0x588 (Inherited: 0x550)
class UWBP_Common_AchievementIcon_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage_102; // 0x558(0x08)
	struct UDFImage* DFImage_Bg; // 0x560(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x568(0x08)
	int32_t Type; // 0x570(0x04)
	int32_t Color; // 0x574(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image[0x10]; // 0x578(0x10)

	void SetColor(int32_t Color); // Function WBP_Common_AchievementIcon.WBP_Common_AchievementIcon_C.SetColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
