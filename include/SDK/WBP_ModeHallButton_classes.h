
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ModeHallButton.WBP_ModeHallButton_C
// Size: 0x5f0 (Inherited: 0x550)
class UWBP_ModeHallButton_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_ModeHallButton_in_Common; // 0x558(0x08)
	struct UWidgetAnimation* WBP_ModeHallButton_out_3; // 0x560(0x08)
	struct UWidgetAnimation* WBP_ModeHallButton_in_3; // 0x568(0x08)
	struct UWidgetAnimation* WBP_ModeHallButton_in_Begin; // 0x570(0x08)
	struct UImage* Image; // 0x578(0x08)
	struct UImage* Image_2; // 0x580(0x08)
	struct UImage* Image_Bg; // 0x588(0x08)
	struct UImage* Image_dgxFX; // 0x590(0x08)
	struct UDFImage* Image_Lock; // 0x598(0x08)
	struct UDFImage* Image_Lock_2; // 0x5a0(0x08)
	struct UDFCanvasPanel* Lock_Panel; // 0x5a8(0x08)
	struct UComputeTextBlock* TextBlock_34; // 0x5b0(0x08)
	struct UDFButton* wtTabBtn; // 0x5b8(0x08)
	struct FText Text; // 0x5c0(0x18)
	bool Type; // 0x5d8(0x01)
	bool IsLock; // 0x5d9(0x01)
	bool TextSize; // 0x5da(0x01)
	char pad_5DB[0x1]; // 0x5db(0x01)
	struct FName TextSizeID; // 0x5dc(0x08)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	int64_t ButtonID; // 0x5e8(0x08)

	void SetLock(bool Lock); // Function WBP_ModeHallButton.WBP_ModeHallButton_C.SetLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
