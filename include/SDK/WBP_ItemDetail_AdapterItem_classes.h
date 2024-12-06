
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetail_AdapterItem.WBP_ItemDetail_AdapterItem_C
// Size: 0x5fc (Inherited: 0x550)
class UWBP_ItemDetail_AdapterItem_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UCanvasPanel* Canvas; // 0x558(0x08)
	struct UDFImage* DFImage_110; // 0x560(0x08)
	struct UDFImage* Hover; // 0x568(0x08)
	struct UImage* Image_44; // 0x570(0x08)
	struct UScaleBox* ScaleBox_1; // 0x578(0x08)
	struct USizeBox* SizeBox_1; // 0x580(0x08)
	struct UWBP_SlotCompSelected_C* WBP_SlotCompSelected; // 0x588(0x08)
	struct UDFMImage* wItemIcon; // 0x590(0x08)
	struct UWBP_Itemview_QualityRectangle_C* wQualityBp; // 0x598(0x08)
	struct UTextBlock* wSocketName; // 0x5a0(0x08)
	struct UImage* wtMask; // 0x5a8(0x08)
	struct UWVP_Common_DragSelectedBox_C* WVP_Common_DragSelectedBox; // 0x5b0(0x08)
	int32_t bpSize; // 0x5b8(0x04)
	bool BpIsEquip; // 0x5bc(0x01)
	char pad_5BD[0x3]; // 0x5bd(0x03)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char BpRefImage[0x10]; // 0x5c0(0x10)
	/*struct TSoftObjectPtr<UPaperSprite>*/char BpRefIcon[0x28]; // 0x5d0(0x28)
	int32_t BpStyle; // 0x5f8(0x04)

	void SetStyle(); // Function WBP_ItemDetail_AdapterItem.WBP_ItemDetail_AdapterItem_C.SetStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
