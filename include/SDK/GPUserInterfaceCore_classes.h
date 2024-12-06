
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPUserInterfaceCore.GPUINavigationManager
// Size: 0x70 (Inherited: 0x38)
class UGPUINavigationManager : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnNavigationChangedFocusEvent[0x10]; // 0x38(0x10)
	char pad_48[0x28]; // 0x48(0x28)

	struct UGPUINavigationManager* STATIC_Get(struct UObject* WorldContext); // Function GPUserInterfaceCore.GPUINavigationManager.Get // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterfaceCore.GPUINavigationUtils
// Size: 0x30 (Inherited: 0x30)
class UGPUINavigationUtils : public UBlueprintFunctionLibrary {
public:


	bool STATIC_TryAutoFocus(uint32_t UserIndex, struct UUserWidget* RootWidget); // Function GPUserInterfaceCore.GPUINavigationUtils.TryAutoFocus // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterfaceCore.LuaDragDropOperation
// Size: 0xd0 (Inherited: 0x90)
class ULuaDragDropOperation : public UDragDropOperation {
public:

	struct FVector2D DragOffset; // 0x90(0x08)
	struct FVector2D TargetPosition; // 0x98(0x08)
	struct FVector2D MousePosition; // 0xa0(0x08)
	bool bCancelByUser; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UUserWidget* WidgetReference; // 0xb0(0x08)
	bool bBroadcastLuaEvent; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString LuaEventName; // 0xc0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterfaceCore.LuaUIBaseView
// Size: 0x550 (Inherited: 0x298)
class ULuaUIBaseView : public UUserWidget {
public:

	char pad_298[0x2c]; // 0x298(0x2c)
	bool bBPAutoPlay; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct FString LuaPath; // 0x2c8(0x10)
	bool bBindLuaPath; // 0x2d8(0x01)
	bool bUseLuaPaint; // 0x2d9(0x01)
	bool bCacheLuaTable; // 0x2da(0x01)
	bool bTransformWorld; // 0x2db(0x01)
	bool bSwallowClick; // 0x2dc(0x01)
	bool bInterceptPreviewMouse; // 0x2dd(0x01)
	bool bHandleClick; // 0x2de(0x01)
	bool bHandleClickR; // 0x2df(0x01)
	bool bHandleClickMid; // 0x2e0(0x01)
	bool bHandleDoubleClick; // 0x2e1(0x01)
	bool bHandleHover; // 0x2e2(0x01)
	char pad_2E3[0x1]; // 0x2e3(0x01)
	float DoubleClickInterval; // 0x2e4(0x04)
	float DoubleClickIntervalHD; // 0x2e8(0x04)
	bool bClickWaitDoubleClick; // 0x2ec(0x01)
	bool bHandleLongPress; // 0x2ed(0x01)
	char pad_2EE[0x2]; // 0x2ee(0x02)
	float LongPressInterval; // 0x2f0(0x04)
	float LongPressCancelDistance; // 0x2f4(0x04)
	bool bPreciseClick; // 0x2f8(0x01)
	bool bUseNativeTouchEvent; // 0x2f9(0x01)
	char pad_2FA[0x2]; // 0x2fa(0x02)
	/*struct FDelegate*/char OnCustomDragLogic[0x10]; // 0x2fc(0x10)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FMargin ContentAreaHD; // 0x310(0x10)
	enum class ELuaUIBaseViewWantedInputMode WantedInputMode; // 0x320(0x01)
	bool bUseClipzone; // 0x321(0x01)
	char pad_322[0x9e]; // 0x322(0x9e)
	struct UObject* PanelOwner; // 0x3c0(0x08)
	bool bHandleDrag; // 0x3c8(0x01)
	bool bHandleDrop; // 0x3c9(0x01)
	enum class ETriggerDragLogic TriggerDragLogic; // 0x3ca(0x01)
	enum class EViewDragMode DragMode; // 0x3cb(0x01)
	float DragAngle; // 0x3cc(0x04)
	float DragDropVerticalDeltaThreshold; // 0x3d0(0x04)
	float FastDragAngle; // 0x3d4(0x04)
	struct UClass* LuaDragDropOp; // 0x3d8(0x08)
	bool bCancelDragWhenLongPressTrigger; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	float DragTriggerDistance; // 0x3e4(0x04)
	float DragThreshold; // 0x3e8(0x04)
	int32_t MaxDragPointSampleNum; // 0x3ec(0x04)
	bool bIgnoreFirstSample; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	/*struct FMulticastInlineDelegate*/char OnMouseEnterEvent[0x10]; // 0x3f8(0x10)
	/*struct FMulticastInlineDelegate*/char OnMouseLeaveEvent[0x10]; // 0x408(0x10)
	/*struct FMulticastInlineDelegate*/char OnPressed[0x10]; // 0x418(0x10)
	/*struct FMulticastInlineDelegate*/char OnReleased[0x10]; // 0x428(0x10)
	/*struct FDelegate*/char OnHovered[0x10]; // 0x438(0x10)
	/*struct FDelegate*/char OnUnhovered[0x10]; // 0x448(0x10)
	/*struct FMulticastInlineDelegate*/char OnFocusReceivedEvent[0x10]; // 0x458(0x10)
	/*struct FMulticastInlineDelegate*/char OnFocusLostEvent[0x10]; // 0x468(0x10)
	enum class EGPUIFocusEffectType FocusEffectType; // 0x478(0x01)
	bool bDoHittestNavigation; // 0x479(0x01)
	char pad_47A[0xd6]; // 0x47a(0xd6)

	void UserWidgetDelegate__DelegateSignature(); // DelegateFunction GPUserInterfaceCore.LuaUIBaseView.UserWidgetDelegate__DelegateSignature // (Public|Delegate) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterfaceCore.DFNavigationSelectorBase
// Size: 0x568 (Inherited: 0x550)
class UDFNavigationSelectorBase : public ULuaUIBaseView {
public:

	struct UWidget* SelectorRoot; // 0x550(0x08)
	char pad_558[0x10]; // 0x558(0x10)

	void Unbind(); // Function GPUserInterfaceCore.DFNavigationSelectorBase.Unbind // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
