
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Common_LobbyTopBar.WBP_Common_LobbyTopBar_C
// Size: 0x5a8 (Inherited: 0x550)
class UWBP_Common_LobbyTopBar_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_AllBtn; // 0x558(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_1; // 0x560(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_Left; // 0x568(0x08)
	struct UWBP_Common_LobbyDraw_C* WBP_Common_LobbyDraw; // 0x570(0x08)
	struct UWBP_Hall_Announcement_C* WBP_Hall_Announcement; // 0x578(0x08)
	struct UWBP_Common_TopBarV1_MoreDrawView_C* wtAllBtn; // 0x580(0x08)
	struct UWBP_Common_TopBarV1_CustomerService_Item_C* wtCustomerServiceBtn; // 0x588(0x08)
	struct UWBP_Common_TopBarV1_Download_C* wtDownloadBtn; // 0x590(0x08)
	struct UWBP_Common_TopBarV1_LiveStreaming_C* wtLiveStreamBtn; // 0x598(0x08)
	struct UWBP_CommonHeadIcon_C* wtPlayHead; // 0x5a0(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_Common_LobbyTopBar.WBP_Common_LobbyTopBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
