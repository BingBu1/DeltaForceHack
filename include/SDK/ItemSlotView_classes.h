
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass ItemSlotView.ItemSlotView_C
// Size: 0x588 (Inherited: 0x550)
class UItemSlotView_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* Anima_ItemSlotView_Fadeout; // 0x558(0x08)
	struct UDFNamedSlot* DFNamedSlot_51; // 0x560(0x08)
	struct UDFNamedSlot* DFNamedSlotBg_Pc; // 0x568(0x08)
	struct USizeBox* SlotSizeBox; // 0x570(0x08)
	struct UMaterialInstance* TilingMaterial; // 0x578(0x08)
	struct UTexture* MaskMaterial; // 0x580(0x08)

	void PreConstruct(bool IsDesignTime); // Function ItemSlotView.ItemSlotView_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
