
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Shop_TypeOfArticle.WBP_Shop_TypeOfArticle_C
// Size: 0x5a4 (Inherited: 0x550)
class UWBP_Shop_TypeOfArticle_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* Anim_In; // 0x558(0x08)
	struct UDFMImage* wtImgTypeIcon; // 0x560(0x08)
	struct UComputeTextBlock* wtTbTypeName; // 0x568(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x570(0x10)
	int32_t Type; // 0x580(0x04)
	struct FLinearColor BP_normalColor; // 0x584(0x10)
	struct FLinearColor BP_disabledColor; // 0x594(0x10)

	void BP_Set_Type(); // Function WBP_Shop_TypeOfArticle.WBP_Shop_TypeOfArticle_C.BP_Set_Type // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
