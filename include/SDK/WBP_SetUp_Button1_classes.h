
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUp_Button1.WBP_SetUp_Button1_C
// Size: 0x309 (Inherited: 0x298)
class UWBP_SetUp_Button1_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* WBP_SetUp_Button1_RecoverHoverAni; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_SetUp_Button1_HoverAni; // 0x2a8(0x08)
	struct UWidgetAnimation* WBP_SetUp_Button1_out; // 0x2b0(0x08)
	struct UWidgetAnimation* WBP_SetUp_Button1_in; // 0x2b8(0x08)
	struct UDFImage* DFImage_274; // 0x2c0(0x08)
	struct UDFImage* DFImage_FX; // 0x2c8(0x08)
	struct UDFImage* DFImage_Line; // 0x2d0(0x08)
	struct UDFButton* DFMButton_23; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_104; // 0x2e0(0x08)
	int32_t StyleIndex; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FText Name; // 0x2f0(0x18)
	bool Line; // 0x308(0x01)

	void BP_SetLine(bool Line); // Function WBP_SetUp_Button1.WBP_SetUp_Button1_C.BP_SetLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
