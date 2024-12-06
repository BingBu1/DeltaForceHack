
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Hall_TeamModelItem.WBP_Hall_TeamModelItem_C
// Size: 0x5f0 (Inherited: 0x550)
class UWBP_Hall_TeamModelItem_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* HoverMobileBg; // 0x558(0x08)
	struct UDFImage* HoverMobileBg01; // 0x560(0x08)
	struct UDFImage* HoverPcBg; // 0x568(0x08)
	struct UDFImage* Line; // 0x570(0x08)
	struct UDFImage* NormalMobileBg; // 0x578(0x08)
	struct UDFImage* NormalMobileBg_01; // 0x580(0x08)
	struct UDFImage* NormalMobileBg_02; // 0x588(0x08)
	struct UDFButton* wtExitOrKickBtn; // 0x590(0x08)
	struct UDFImage* wtExitOrKickIcon; // 0x598(0x08)
	struct UDFImage* wtHeroTypeIcon; // 0x5a0(0x08)
	struct UDFImage* wtMicIcon; // 0x5a8(0x08)
	struct UDFTextBlock* wtNameTxt; // 0x5b0(0x08)
	struct UDFButton* wtPlayerInfoBtn; // 0x5b8(0x08)
	struct UDFCanvasPanel* wtReadyPanel; // 0x5c0(0x08)
	int32_t Type; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char Arrimage[0x10]; // 0x5d0(0x10)
	struct FMargin NewVar_1; // 0x5e0(0x10)

	void SetType(int32_t Type); // Function WBP_Hall_TeamModelItem.WBP_Hall_TeamModelItem_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3cc71c70c0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
