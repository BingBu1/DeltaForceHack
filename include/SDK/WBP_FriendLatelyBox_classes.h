
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_FriendLatelyBox.WBP_FriendLatelyBox_C
// Size: 0x668 (Inherited: 0x550)
class UWBP_FriendLatelyBox_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_FriendLatelyBox_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_FriendLatelyBox_in; // 0x560(0x08)
	struct UWidgetAnimation* Anim_PopupPanel; // 0x568(0x08)
	struct UDFImage* DFImage_99; // 0x570(0x08)
	struct UDFImage* DFImage_222; // 0x578(0x08)
	struct UImage* Image_173; // 0x580(0x08)
	struct UDFImage* Masks; // 0x588(0x08)
	struct USizeBox* SizeBox_10; // 0x590(0x08)
	struct UWBP_CommonHeadIcon_C* WBP_CommonHeadIcon; // 0x598(0x08)
	struct UWBP_Friend_BrandAvatar_C* WBP_Friend_BrandAvatar; // 0x5a0(0x08)
	struct UWBP_FriendAddButton_C* WBP_FriendAddButton_C_1; // 0x5a8(0x08)
	struct UTextBlock* wtLatelyTimeTxt; // 0x5b0(0x08)
	struct UTextBlock* wtPlayerName; // 0x5b8(0x08)
	struct UTextBlock* wtPlayerState; // 0x5c0(0x08)
	struct TArray<struct UPaperSprite*> RefImage; // 0x5c8(0x10)
	int32_t Type; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct TArray<struct UPaperSprite*> Type_Image; // 0x5e0(0x10)
	struct FSlateColor Color_01; // 0x5f0(0x28)
	struct FSlateColor Color_02; // 0x618(0x28)
	struct FSlateColor Color_03; // 0x640(0x28)

	void Set_Style(int32_t Type); // Function WBP_FriendLatelyBox.WBP_FriendLatelyBox_C.Set Style // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x72c0650073
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
