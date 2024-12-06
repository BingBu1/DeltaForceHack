
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class TimiAudioProfiler.TAProfilerBPFuncLibrary
// Size: 0x30 (Inherited: 0x30)
class UTAProfilerBPFuncLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_CreateProfilerWidget(struct APlayerController* InPlayerController); // Function TimiAudioProfiler.TAProfilerBPFuncLibrary.CreateProfilerWidget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class TimiAudioProfiler.TAProfilerPanel
// Size: 0x330 (Inherited: 0x298)
class UTAProfilerPanel : public UUserWidget {
public:

	struct UButton* Button_Event; // 0x298(0x08)
	struct UButton* Button_RTPC; // 0x2a0(0x08)
	struct UButton* Button_Close; // 0x2a8(0x08)
	struct UButton* Button_Clean; // 0x2b0(0x08)
	struct UButton* Button_StartLog; // 0x2b8(0x08)
	struct UButton* Button_EndLog; // 0x2c0(0x08)
	struct UScrollBox* ScrollBox_Event; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_Event; // 0x2d0(0x08)
	struct UScrollBox* ScrollBox_RTPC; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_RTPC; // 0x2e0(0x08)
	struct UEditableTextBox* EditableTextBox_Search; // 0x2e8(0x08)
	char pad_2F0[0x40]; // 0x2f0(0x40)

	void StartLogOnClicked(); // Function TimiAudioProfiler.TAProfilerPanel.StartLogOnClicked // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
