
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Itemview_Compared.WBP_Itemview_Compared_C
// Size: 0x5b0 (Inherited: 0x550)
class UWBP_Itemview_Compared_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Itemview_Compared_Green_loop; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Itemview_Compared_Red_loop; // 0x560(0x08)
	struct UWidgetAnimation* WBP_Itemview_Repair_PlayOnce; // 0x568(0x08)
	struct UWidgetAnimation* WBP_Itemview_Repair_out; // 0x570(0x08)
	struct UWidgetAnimation* WBP_Itemview_Repair_in; // 0x578(0x08)
	struct UDFImage* DFImage_130; // 0x580(0x08)
	struct UDFImage* DFImage_188; // 0x588(0x08)
	struct UImage* Image_FX_2; // 0x590(0x08)
	int32_t Type; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x5a0(0x10)

	void SetType(int32_t Selection); // Function WBP_Itemview_Compared.WBP_Itemview_Compared_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x6bce2770
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
