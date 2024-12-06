
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Common_LobbyBottomBar.WBP_Common_LobbyBottomBar_C
// Size: 0x590 (Inherited: 0x550)
class UWBP_Common_LobbyBottomBar_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Common_LobbyBottomBar_Moss; // 0x558(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_btn; // 0x560(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char WBP_CommonIconButton_Invite[0x8]; // 0x568(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char WBP_CommonIconButton_Moss[0x8]; // 0x570(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char WBP_CommonIconButton_Recruit[0x8]; // 0x578(0x08)
	struct UWBP_Hall_Button_C* WBP_Hall_Button; // 0x580(0x08)
	struct UWBP_Moss_Main_C* WBP_Moss_Main_63; // 0x588(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_Common_LobbyBottomBar.WBP_Common_LobbyBottomBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
