
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SubtitleContent.WBP_SubtitleContent_C
// Size: 0x2fc (Inherited: 0x298)
class UWBP_SubtitleContent_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* WBP_SubtitleContent_in01_1; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_SubtitleContent_out; // 0x2a8(0x08)
	struct UWidgetAnimation* WBP_SubtitleContent_in; // 0x2b0(0x08)
	struct UWidgetAnimation* Move_Anim; // 0x2b8(0x08)
	struct UWidgetAnimation* Out_Anim; // 0x2c0(0x08)
	struct UWidgetAnimation* In_Anim; // 0x2c8(0x08)
	struct URichTextBlock* Content; // 0x2d0(0x08)
	struct UImage* Image_00; // 0x2d8(0x08)
	struct UDFSizeBox* SizeBox_5; // 0x2e0(0x08)
	/*struct FMulticastInlineDelegate*/char OnClicked[0x10]; // 0x2e8(0x10)
	float BP_Width; // 0x2f8(0x04)

	void SetSpeakerIconType(int32_t SpeakerIconType); // Function WBP_SubtitleContent.WBP_SubtitleContent_C.SetSpeakerIconType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
