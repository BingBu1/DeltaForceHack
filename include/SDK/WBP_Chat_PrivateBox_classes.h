
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Chat_PrivateBox.WBP_Chat_PrivateBox_C
// Size: 0x688 (Inherited: 0x550)
class UWBP_Chat_PrivateBox_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Chat_PrivateBox_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Chat_PrivateBox_in; // 0x560(0x08)
	struct UDFButton* Button_514; // 0x568(0x08)
	struct UDFImage* DFImage_41; // 0x570(0x08)
	struct UDFImage* DFImage_197; // 0x578(0x08)
	struct UTextBlock* TextBlock; // 0x580(0x08)
	struct UTextBlock* TextBlock_01; // 0x588(0x08)
	/*struct UWBP_Common_SmallFlatRank_C**/char WBP_Common_SmallFlatRank_C_1[0x8]; // 0x590(0x08)
	struct UWBP_CommonHeadIcon_C* WBP_CommonHeadIcon; // 0x598(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg[0x8]; // 0x5a0(0x08)
	struct UWBP_CommonPoint_V1_C* WBP_CommonPoint_V1; // 0x5a8(0x08)
	struct UWBP_SlotCompSelected_C* WBP_SlotCompSelected; // 0x5b0(0x08)
	int32_t Set_Type; // 0x5b8(0x04)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	struct FSlateColor Text_Color_01; // 0x5c0(0x28)
	struct FSlateColor Text_Color_02; // 0x5e8(0x28)
	struct FSlateColor Text_Color_03; // 0x610(0x28)
	/*struct TSoftObjectPtr<UObject>*/char Chat_Bg_Select[0x28]; // 0x638(0x28)
	/*struct TSoftObjectPtr<UObject>*/char Chat_Bg_Default[0x28]; // 0x660(0x28)

	void BP_SetSelected(); // Function WBP_Chat_PrivateBox.WBP_Chat_PrivateBox_C.BP_SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5bc04491f6
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
