
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailContent_TimeLimit.WBP_ItemDetailContent_TimeLimit_C
// Size: 0x2cc (Inherited: 0x298)
class UWBP_ItemDetailContent_TimeLimit_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UImage* Image_109; // 0x2a0(0x08)
	struct UImage* Image_1031; // 0x2a8(0x08)
	struct UTextBlock* wTimeText; // 0x2b0(0x08)
	struct TArray<struct UPaperSprite*> BPImage; // 0x2b8(0x10)
	int32_t BpType; // 0x2c8(0x04)

	void BpSetColor(bool bGreen); // Function WBP_ItemDetailContent_TimeLimit.WBP_ItemDetailContent_TimeLimit_C.BpSetColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
