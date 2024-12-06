
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SafeRoomChatHistory.WBP_SafeRoomChatHistory_C
// Size: 0x585 (Inherited: 0x550)
class UWBP_SafeRoomChatHistory_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Chat_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Chat_in; // 0x560(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x568(0x08)
	struct USafeZone* SafeZone_1; // 0x570(0x08)
	struct UDFWaterfallScrollView* WaterfallScrollView; // 0x578(0x08)
	int32_t Type; // 0x580(0x04)
	bool PCChatBox; // 0x584(0x01)

	void SetStyle(bool PCChatBox); // Function WBP_SafeRoomChatHistory.WBP_SafeRoomChatHistory_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x6ec061006d
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
