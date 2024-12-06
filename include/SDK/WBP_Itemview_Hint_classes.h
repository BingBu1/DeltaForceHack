
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Itemview_Hint.WBP_Itemview_Hint_C
// Size: 0x5d0 (Inherited: 0x550)
class UWBP_Itemview_Hint_C : public UDFInteractorMissionTipsItem {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Itemview_Favorite_PlayOnce; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Itemview_Favorite_loop; // 0x560(0x08)
	struct UWidgetAnimation* WBP_Itemview_Favorite_out; // 0x568(0x08)
	struct UWidgetAnimation* WBP_Itemview_Favorite_in; // 0x570(0x08)
	struct UImage* Image_54; // 0x578(0x08)
	struct UImage* Image_130; // 0x580(0x08)
	int32_t Type; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	/*struct TSoftObjectPtr<UPaperSprite>*/char Image[0x28]; // 0x590(0x28)
	int32_t TempAniType; // 0x5b8(0x04)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x5c0(0x10)

	void SetType(int32_t Type); // Function WBP_Itemview_Hint.WBP_Itemview_Hint_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xf445832112205216
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
