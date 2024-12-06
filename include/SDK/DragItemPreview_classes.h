
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass DragItemPreview.DragItemPreview_C
// Size: 0x578 (Inherited: 0x550)
class UDragItemPreview_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UImage* Image_91; // 0x558(0x08)
	struct UDFMImage* ItemIcon; // 0x560(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x568(0x08)
	/*struct UWBP_Common_DragDescTip_C**/char wtHint[0x8]; // 0x570(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function DragItemPreview.DragItemPreview_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
