
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class PixUI.PixFileLoadObject
// Size: 0x90 (Inherited: 0x30)
class UPixFileLoadObject : public UObject {
public:

	char pad_30[0x60]; // 0x30(0x60)

	void OnFileLoad(struct TArray<char>& arrayFileData); // Function PixUI.PixFileLoadObject.OnFileLoad // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PixUI.PixUIBPLibrary
// Size: 0x30 (Inherited: 0x30)
class UPixUIBPLibrary : public UBlueprintFunctionLibrary {
public:


	struct FString STATIC_PixUI_Version(); // Function PixUI.PixUIBPLibrary.PixUI_Version // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PixUI.PixUIBrushWrapper
// Size: 0x40 (Inherited: 0x30)
class UPixUIBrushWrapper : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PixUI.PixUIExternalInterface
// Size: 0x30 (Inherited: 0x30)
class UPixUIExternalInterface : public UInterface {
public:


	struct UWidget* OnWidgetLoad(struct FString fstrWidgetPath, struct FString fstrWidgetTag); // Function PixUI.PixUIExternalInterface.OnWidgetLoad // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PixUI.PixUIInput
// Size: 0x68 (Inherited: 0x30)
class UPixUIInput : public UObject {
public:

	/*struct FDelegate*/char DelegateActivateInput[0x10]; // 0x30(0x10)
	/*struct FDelegate*/char DelegateDeactivateInput[0x10]; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	void STATIC_OnInputText(struct FString fstrInsert, bool bEndInput, bool bLostFocus, bool bReplace); // Function PixUI.PixUIInput.OnInputText // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PixUI.PixUILog
// Size: 0x40 (Inherited: 0x30)
class UPixUILog : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char LogDelegate[0x10]; // 0x30(0x10)

	void STATIC_PxLogToggleSwitchLevel(enum class EPxLogLevels eLogLevel, bool beOpen); // Function PixUI.PixUILog.PxLogToggleSwitchLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PixUI.PixUIScriptVM
// Size: 0xf0 (Inherited: 0x30)
class UPixUIScriptVM : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char DelegateOnCreate[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnClose[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnDestroy[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnLoaded[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnScriptStateInit[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnInternalError[0x10]; // 0x80(0x10)
	/*struct FDelegate*/char DelegateOnExternalOpen[0x10]; // 0x90(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnExternalClose[0x10]; // 0xa0(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnMessage[0x10]; // 0xb0(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnAppForeground[0x10]; // 0xc0(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnAppBackground[0x10]; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)

	struct FString SendPxMessage(struct FString fstrMessage, int32_t nWaitMS); // Function PixUI.PixUIScriptVM.SendPxMessage // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PixUI.PixUIViewPortWidget
// Size: 0x2d0 (Inherited: 0x298)
class UPixUIViewPortWidget : public UUserWidget {
public:

	/*struct FDelegate*/char PixUIWidgetOpenDelegate[0x10]; // 0x298(0x10)
	/*struct FDelegate*/char PixUIWidgetConfirmDelegate[0x10]; // 0x2a8(0x10)
	/*struct FDelegate*/char PixUIWidgetPromptDelegate[0x10]; // 0x2b8(0x10)
	char pad_2C8[0x8]; // 0x2c8(0x08)

	struct FString SendPxMessage(struct FString fstrMessage); // Function PixUI.PixUIViewPortWidget.SendPxMessage // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PixUI.PixUIWidget
// Size: 0x328 (Inherited: 0x198)
class UPixUIWidget : public UCanvasPanel {
public:

	char pad_198[0x8]; // 0x198(0x08)
	/*struct FMulticastInlineDelegate*/char DelegateOnCreate[0x10]; // 0x1a0(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnClose[0x10]; // 0x1b0(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnDestroy[0x10]; // 0x1c0(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnLoaded[0x10]; // 0x1d0(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnScriptStateInit[0x10]; // 0x1e0(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnInternalError[0x10]; // 0x1f0(0x10)
	/*struct FDelegate*/char DelegateOnExternalOpen[0x10]; // 0x200(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnExternalClose[0x10]; // 0x210(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnMessage[0x10]; // 0x220(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnAlert[0x10]; // 0x230(0x10)
	/*struct FDelegate*/char DelegateOnConfirm[0x10]; // 0x240(0x10)
	/*struct FDelegate*/char DelegateOnPrompt[0x10]; // 0x250(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnTransform[0x10]; // 0x260(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnAppForeground[0x10]; // 0x270(0x10)
	/*struct FMulticastInlineDelegate*/char DelegateOnAppBackground[0x10]; // 0x280(0x10)
	/*struct FDelegate*/char DelegateHookKeyEvent[0x10]; // 0x290(0x10)
	bool bIsRHIRender; // 0x2a0(0x01)
	bool bIsAsync; // 0x2a1(0x01)
	bool bIsForcePaint; // 0x2a2(0x01)
	bool bIsLazyReleaseMode; // 0x2a3(0x01)
	enum class EPxWidgetBatchType BatchType; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct FText TextDefaultUrl; // 0x2a8(0x18)
	char pad_2C0[0x68]; // 0x2c0(0x68)

	void ShowNextDrawBatch(); // Function PixUI.PixUIWidget.ShowNextDrawBatch // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PixUI.PxSubLayerWidget
// Size: 0x188 (Inherited: 0x168)
class UPxSubLayerWidget : public UWidget {
public:

	char pad_168[0x20]; // 0x168(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PixUI.PxSubCtrlWidget
// Size: 0x198 (Inherited: 0x188)
class UPxSubCtrlWidget : public UPxSubLayerWidget {
public:

	char pad_188[0x10]; // 0x188(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
