
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_FriendBox.WBP_FriendBox_C
// Size: 0x5dc (Inherited: 0x550)
class UWBP_FriendBox_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_FriendBox_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_FriendBox_in; // 0x560(0x08)
	struct UWidgetAnimation* Anim_PopupPanel; // 0x568(0x08)
	struct UImage* Image_6635; // 0x570(0x08)
	struct UDFImage* Masks; // 0x578(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char TeamBtn[0x8]; // 0x580(0x08)
	struct UWBP_CommonHeadIcon_C* WBP_CommonHeadIcon; // 0x588(0x08)
	struct UWBP_Firend_PrivilegeButton_C* WBP_Firend_PrivilegeButton; // 0x590(0x08)
	struct UWBP_Friend_BrandAvatar_C* WBP_Friend_BrandAvatar; // 0x598(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char WBP_TeamMatesPraise[0x8]; // 0x5a0(0x08)
	struct UTextBlock* wtIntimacyText; // 0x5a8(0x08)
	struct UTextBlock* wtPlayerNameText; // 0x5b0(0x08)
	struct UTextBlock* wtPlayerState; // 0x5b8(0x08)
	/*struct UWBP_DFCommonButtonV3S1_C**/char wtTeamAdd[0x8]; // 0x5c0(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x5c8(0x10)
	int32_t Type; // 0x5d8(0x04)

	void SetType(int32_t Selection); // Function WBP_FriendBox.WBP_FriendBox_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
