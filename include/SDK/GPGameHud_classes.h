
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPGameHud.HUDComponent
// Size: 0x30 (Inherited: 0x30)
class UHUDComponent : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.BaseHUD
// Size: 0x6d8 (Inherited: 0x468)
class ABaseHUD : public AHUD {
public:

	char pad_468[0x8]; // 0x468(0x08)
	struct TArray<struct UBatchUIController*> Controllers; // 0x470(0x10)
	float SafeZoneValue; // 0x480(0x04)
	char pad_484[0x54]; // 0x484(0x54)
	bool bStartInGame; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct TArray<struct FAsyncUILoadID> AsyncUILoadIDs; // 0x4e0(0x10)
	struct TMap<struct FSoftClassPath, struct UClass*> AsyncLoadedControllerClassCache; // 0x4f0(0x50)
	struct TMap<struct FSoftClassPath, struct UClass*> AsyncLoadedViewClassCache; // 0x540(0x50)
	char pad_590[0x78]; // 0x590(0x78)
	struct UMobileGamePad* Gamepad; // 0x608(0x08)
	struct AActor* LocalFocusActor; // 0x610(0x08)
	char pad_618[0x10]; // 0x618(0x10)
	struct FName DefaultUIDataTable_Name; // 0x628(0x08)
	struct UDataTable* DefaultUIDataTable; // 0x630(0x08)
	struct TArray<struct UClass*> HUDComponentClass; // 0x638(0x10)
	/*struct TSet<struct FName>*/char HUDBlackLists[0x50]; // 0x648(0x50)
	struct TArray<struct UHUDComponent*> HUDComponents; // 0x698(0x10)
	char pad_6A8[0x18]; // 0x6a8(0x18)
	struct TArray<struct ULuaUIHudBaseView*> HudList; // 0x6c0(0x10)
	char pad_6D0[0x8]; // 0x6d0(0x08)

	void UpdatePanelSwitcherHD(); // Function GPGameHud.BaseHUD.UpdatePanelSwitcherHD // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.GPGameHudDelegates
// Size: 0x160 (Inherited: 0x38)
class UGPGameHudDelegates : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnBaseHudInit[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnGameBaseUIViewInit[0x10]; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)
	/*struct FMulticastInlineDelegate*/char OnBeforeHUDStateChanged[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char PostOnGameHudStateChanged[0x10]; // 0x80(0x10)
	char pad_90[0x20]; // 0x90(0x20)
	/*struct FMulticastInlineDelegate*/char OnDisplayCommonBanner[0x10]; // 0xb0(0x10)
	/*struct FMulticastInlineDelegate*/char OnDisplayCommonBannerWithDuration[0x10]; // 0xc0(0x10)
	/*struct FMulticastInlineDelegate*/char OnDisplayBossBloodStrip[0x10]; // 0xd0(0x10)
	/*struct FMulticastInlineDelegate*/char OnGMHudCreated[0x10]; // 0xe0(0x10)
	/*struct FMulticastInlineDelegate*/char AirDropVehicleTipHUD[0x10]; // 0xf0(0x10)
	/*struct FMulticastInlineDelegate*/char OnHUDViewAsyncLoaded[0x10]; // 0x100(0x10)
	/*struct FMulticastInlineDelegate*/char OnHUDInitializeAsyncLoadProgress[0x10]; // 0x110(0x10)
	/*struct FMulticastInlineDelegate*/char OnHUDInitializeAsyncLoadComplete[0x10]; // 0x120(0x10)
	/*struct FMulticastInlineDelegate*/char OnLoadingViewShutDown[0x10]; // 0x130(0x10)
	/*struct FDelegate*/char AddScreenOCStaticMesh[0x10]; // 0x140(0x10)
	/*struct FDelegate*/char RemoveScreenOCStaticMesh[0x10]; // 0x150(0x10)

	struct UGPGameHudDelegates* STATIC_Get(struct UObject* GameContextObject); // Function GPGameHud.GPGameHudDelegates.Get // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.GPMobileCustomLayoutBPLibrary
// Size: 0x30 (Inherited: 0x30)
class UGPMobileCustomLayoutBPLibrary : public UObject {
public:


	void STATIC_FetchAllCustomLayoutAppearance(struct UObject* WorldContextObject); // Function GPGameHud.GPMobileCustomLayoutBPLibrary.FetchAllCustomLayoutAppearance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.HUDClipmap
// Size: 0x2f8 (Inherited: 0x2c8)
class UHUDClipmap : public UClipmap {
public:

	struct FIntPoint PatchCountXY; // 0x2c8(0x08)
	int32_t MaxMipCount; // 0x2d0(0x04)
	struct FIntPoint ReservedPatchCountXY; // 0x2d4(0x08)
	struct FIntPoint ClipMapSizeXY; // 0x2dc(0x08)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	/*struct TArray<struct TSoftObjectPtr<UTexture2D>>*/char AllSubtextures[0x10]; // 0x2e8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.HUDLoadSetting
// Size: 0xa8 (Inherited: 0x40)
class UHUDLoadSetting : public UDeveloperSettings {
public:

	struct TArray<struct FString> AllowedAutoLoadNames; // 0x40(0x10)
	char pad_50[0x58]; // 0x50(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.HUDStateManager
// Size: 0xd0 (Inherited: 0x38)
class UHUDStateManager : public UWorldSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	/*struct FMulticastInlineDelegate*/char OnGameHudStateAdded[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnGameHudStateRemoved[0x10]; // 0x50(0x10)
	struct TMap<enum class GameHUDSate, struct FBaseUIViewArray> BaseUIViewMaps; // 0x60(0x50)
	char pad_B0[0x20]; // 0xb0(0x20)

	void RemoveState(enum class GameHUDSate State, bool bForceRefresh); // Function GPGameHud.HUDStateManager.RemoveState // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.MobileDraggableButton
// Size: 0x4c0 (Inherited: 0x4b0)
class UMobileDraggableButton : public UButton {
public:

	bool bCanDrag; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	struct FName PressedSoundName; // 0x4b4(0x08)
	char pad_4BC[0x4]; // 0x4bc(0x04)

	bool IsDragging(); // Function GPGameHud.MobileDraggableButton.IsDragging // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.MobileGamePad
// Size: 0x188 (Inherited: 0x30)
class UMobileGamePad : public UObject {
public:

	struct TArray<struct UMobileGamePadView*> VisibleViewCache; // 0x30(0x10)
	struct UMobileGamePadView* MobileButtonViews[0x1d]; // 0x40(0xe8)
	char pad_128[0x10]; // 0x128(0x10)
	struct UMobilePlayerInput* CachedPlayerInput; // 0x138(0x08)
	struct TArray<struct UClass*> MobileButtonViewClasses; // 0x140(0x10)
	char pad_150[0x38]; // 0x150(0x38)

	void OnSetCinematicMode(bool bCinematicMode); // Function GPGameHud.MobileGamePad.OnSetCinematicMode // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.RootUIView
// Size: 0x2c0 (Inherited: 0x298)
class URootUIView : public UUserWidget {
public:

	struct UCanvasPanel* UIContent; // 0x298(0x08)
	char pad_2A0[0x10]; // 0x2a0(0x10)
	struct TArray<struct UWidget*> InSafeZoneWidgets; // 0x2b0(0x10)

	void SetRootUISafeZone(float SafeZoneValue); // Function GPGameHud.RootUIView.SetRootUISafeZone // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.BaseUIView
// Size: 0x388 (Inherited: 0x298)
class UBaseUIView : public UUserWidget {
public:

	bool bIsHud; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct AActor* LocalFocusActor; // 0x2a0(0x08)
	struct UBaseUIController* ViewController; // 0x2a8(0x08)
	struct TArray<struct FString> UserDefinedPanelNameList; // 0x2b0(0x10)
	bool ChangeRootVisibleFlag; // 0x2c0(0x01)
	bool bTickWhenHidden; // 0x2c1(0x01)
	bool bNeverSleep; // 0x2c2(0x01)
	char pad_2C3[0x1]; // 0x2c3(0x01)
	float WaitForDestroyTime; // 0x2c4(0x04)
	enum class EGPInputModeType WantedInputMode; // 0x2c8(0x01)
	char pad_2C9[0xf]; // 0x2c9(0x0f)
	struct UWidget* DynamicRoot; // 0x2d8(0x08)
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct TArray<enum class GameHUDSate> AlwaysShowGameHudState; // 0x2e8(0x10)
	struct TArray<enum class GameHUDSate> VisibleGameHudState; // 0x2f8(0x10)
	struct TArray<enum class GameHUDSate> InVisibleGameHudState; // 0x308(0x10)
	bool bControlByUiState; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UObject* PanelOwner; // 0x320(0x08)
	struct FAnimationNameSelector FadeInAnimationName; // 0x328(0x08)
	struct FAnimationNameSelector FadeOutAnimationName; // 0x330(0x08)
	struct FUIAnimationController AnimationController; // 0x338(0x20)
	struct TArray<struct UWidgetAnimation*> AllUMGAnimations; // 0x358(0x10)
	bool bInFadeIn; // 0x368(0x01)
	bool bInFadeOut; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct UWidgetAnimation* UMGFadeInAnimation; // 0x370(0x08)
	struct UWidgetAnimation* UMGFadeOutAnimation; // 0x378(0x08)
	bool bCacheScreenOCStaticMeshOn; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)

	void ToggleScreenOCStaticMesh(); // Function GPGameHud.BaseUIView.ToggleScreenOCStaticMesh // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.BaseUIController
// Size: 0xb0 (Inherited: 0x30)
class UBaseUIController : public UObject {
public:

	char pad_30[0x28]; // 0x30(0x28)
	struct UClass* ViewClass; // 0x58(0x08)
	int32_t ZOrder; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FGameplayTagContainer ChannelTagContainer; // 0x68(0x20)
	bool bIsSafeZone; // 0x88(0x01)
	char pad_89[0x1]; // 0x89(0x01)
	bool m_NeverSleep; // 0x8a(0x01)
	bool bLowFrequencyInvalidation; // 0x8b(0x01)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UBaseUIView* View; // 0x90(0x08)
	struct ABaseHUD* BaseHUD; // 0x98(0x08)
	struct UObject* ViewPanelOwner; // 0xa0(0x08)
	bool bStartInGame; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void StartInGame(); // Function GPGameHud.BaseUIController.StartInGame // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.LuaUIHudBaseView
// Size: 0x5a8 (Inherited: 0x550)
class ULuaUIHudBaseView : public ULuaUIBaseView {
public:

	struct TArray<enum class GameHUDSate> AlwaysShowGameHudState; // 0x550(0x10)
	struct TArray<enum class GameHUDSate> VisibleGameHudState; // 0x560(0x10)
	struct TArray<enum class GameHUDSate> InVisibleGameHudState; // 0x570(0x10)
	bool NeedUpdate; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	float TickElapsedTime; // 0x584(0x04)
	float TickInterval; // 0x588(0x04)
	bool bControlByUiState; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)
	struct AActor* LocalFocusActor; // 0x590(0x08)
	char pad_598[0x8]; // 0x598(0x08)
	struct UWidget* DynamicRoot; // 0x5a0(0x08)

	void Update(float Delta); // Function GPGameHud.LuaUIHudBaseView.Update // (Native|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.BatchUIView
// Size: 0x480 (Inherited: 0x388)
class UBatchUIView : public UBaseUIView {
public:

	enum class LayerZorder ViewLayer; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UPanelWidget* UIRootContent; // 0x390(0x08)
	struct TMap<struct FString, struct UPanelWidget*> CacheViewContents; // 0x398(0x50)
	char pad_3E8[0x8]; // 0x3e8(0x08)
	struct TArray<struct UBaseUIView*> CachedSubBaseUIViews; // 0x3f0(0x10)
	struct TArray<struct UBaseUIView*> SubViews; // 0x400(0x10)
	struct TMap<struct FSoftClassPath, struct UBaseUIView*> ViewClassPathToBaseUIViews; // 0x410(0x50)
	char pad_460[0x10]; // 0x460(0x10)
	struct TArray<struct UWidget*> SafeZoneWidgets; // 0x470(0x10)

	void SetRootUISafeZone(float InSafeZoneValue); // Function GPGameHud.BatchUIView.SetRootUISafeZone // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.CommonHUDView
// Size: 0x390 (Inherited: 0x388)
class UCommonHUDView : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)

	void OnHUDStateChanged(); // Function GPGameHud.CommonHUDView.OnHUDStateChanged // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.MobileGamePadView
// Size: 0x3b8 (Inherited: 0x388)
class UMobileGamePadView : public UBaseUIView {
public:

	bool bHandleUIMsg; // 0x388(0x01)
	bool bAlwaysHandleUIMsg; // 0x389(0x01)
	char pad_38A[0xe]; // 0x38a(0x0e)
	struct TArray<struct UMobileDraggableButton*> DraggableBtns; // 0x398(0x10)
	struct UMobileGamePad* CachedGamePad; // 0x3a8(0x08)
	char pad_3B0[0x8]; // 0x3b0(0x08)

	void OpenGMMainView4Lua(); // Function GPGameHud.MobileGamePadView.OpenGMMainView4Lua // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.BatchUIController
// Size: 0x118 (Inherited: 0xb0)
class UBatchUIController : public UBaseUIController {
public:

	char pad_B0[0x8]; // 0xb0(0x08)
	struct TArray<struct UBaseUIController*> ChildControllers; // 0xb8(0x10)
	struct TMap<struct FSoftClassPath, struct UBaseUIController*> ControllerClassPathToBaseUIControllers; // 0xc8(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameHud.LuaUIHudOldView
// Size: 0x5a8 (Inherited: 0x5a8)
class ULuaUIHudOldView : public ULuaUIHudBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
