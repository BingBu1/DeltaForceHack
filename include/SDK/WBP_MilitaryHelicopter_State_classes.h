
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_MilitaryHelicopter_State.WBP_MilitaryHelicopter_State_C
// Size: 0x635 (Inherited: 0x5e8)
class UWBP_MilitaryHelicopter_State_C : public UDFMMobileHelicopterStateWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e8(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_467; // 0x5f0(0x08)
	struct UWBP_Helicopter_GunnerView_C* GunInfo; // 0x5f8(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* IconState; // 0x600(0x08)
	struct UDFMCommonImage* Image_296; // 0x608(0x08)
	struct UDFMCommonImage* Image_297; // 0x610(0x08)
	struct UWBP_Helicopter_GunnerInfo_C* WBP_Helicopter_GunnerInfo; // 0x618(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x620(0x10)
	int32_t Type; // 0x630(0x04)
	bool IsLowHP; // 0x634(0x01)

	void PCAdaptation(); // Function WBP_MilitaryHelicopter_State.WBP_MilitaryHelicopter_State_C.PCAdaptation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0740000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
