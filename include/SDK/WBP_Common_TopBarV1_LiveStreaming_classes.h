
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Common_TopBarV1_LiveStreaming.WBP_Common_TopBarV1_LiveStreaming_C
// Size: 0x584 (Inherited: 0x550)
class UWBP_Common_TopBarV1_LiveStreaming_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_111; // 0x558(0x08)
	struct UDFImage* DFImage_Icon; // 0x560(0x08)
	struct UDFButton* wtSetupBtn; // 0x568(0x08)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char Arrimage[0x10]; // 0x570(0x10)
	int32_t Image; // 0x580(0x04)

	void BP_GetReddotPanel(struct UPanelWidget*& Panel); // Function WBP_Common_TopBarV1_LiveStreaming.WBP_Common_TopBarV1_LiveStreaming_C.BP_GetReddotPanel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4eea49fea5c2cfff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
