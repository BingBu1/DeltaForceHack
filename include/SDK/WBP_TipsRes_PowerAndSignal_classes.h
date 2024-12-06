
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_TipsRes_PowerAndSignal.WBP_TipsRes_PowerAndSignal_C
// Size: 0x638 (Inherited: 0x5a8)
class UWBP_TipsRes_PowerAndSignal_C : public ULuaUIHudBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a8(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x5b0(0x08)
	struct UDFCanvasPosReContainer* DFCanvasPosReContainer_2; // 0x5b8(0x08)
	struct UDFSizeBox* DFSizeBox_1; // 0x5c0(0x08)
	struct UProgressBar* wtBatteryBar; // 0x5c8(0x08)
	struct UImage* wtBatteryImg; // 0x5d0(0x08)
	struct UTextBlock* wtLatencyText; // 0x5d8(0x08)
	struct UTextBlock* wtMatchInfoText; // 0x5e0(0x08)
	struct UImage* wtSignalImg; // 0x5e8(0x08)
	bool IsLowPower; // 0x5f0(0x01)
	bool IsLowSignal; // 0x5f1(0x01)
	char pad_5F2[0x6]; // 0x5f2(0x06)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char SignalIcons[0x10]; // 0x5f8(0x10)
	/*struct TSoftObjectPtr<UPaperSprite>*/char RefImage[0x28]; // 0x608(0x28)
	struct FName NewVar_1; // 0x630(0x08)

	void IsPC(); // Function WBP_TipsRes_PowerAndSignal.WBP_TipsRes_PowerAndSignal_C.IsPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x73fffec0700078
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
