
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUpComponent_ArrangemenItem.WBP_SetUpComponent_ArrangemenItem_C
// Size: 0x618 (Inherited: 0x550)
class UWBP_SetUpComponent_ArrangemenItem_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_ArrangemenItemNew_Dag_Out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_ArrangemenItemNew_Dag_In; // 0x560(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_ArrangemenItemNew_out; // 0x568(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_ArrangemenItemNew_in; // 0x570(0x08)
	struct UButton* Button_94; // 0x578(0x08)
	struct UDFImage* DFImage_171; // 0x580(0x08)
	struct UDFImage* DFImage_329; // 0x588(0x08)
	struct UDFImage* DFImage_457; // 0x590(0x08)
	struct UDFImage* DFImage_Disabled; // 0x598(0x08)
	struct UCanvasPanel* HoverPan; // 0x5a0(0x08)
	struct UScaleBox* ScaleBox_1; // 0x5a8(0x08)
	struct UImage* tuozhua; // 0x5b0(0x08)
	struct UWBP_ReorderableListDragArea_C* wtDragArea; // 0x5b8(0x08)
	struct UImage* wtIcon; // 0x5c0(0x08)
	struct UTextBlock* wtTitle; // 0x5c8(0x08)
	struct FText Name; // 0x5d0(0x18)
	bool Disabled; // 0x5e8(0x01)
	char pad_5E9[0x7]; // 0x5e9(0x07)
	/*struct TSoftObjectPtr<UPaperSprite>*/char Image[0x28]; // 0x5f0(0x28)

	void SetDisabled(); // Function WBP_SetUpComponent_ArrangemenItem.WBP_SetUpComponent_ArrangemenItem_C.SetDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
