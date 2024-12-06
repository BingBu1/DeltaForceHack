
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMGameHud.AbilityBaseEffectView
// Size: 0x390 (Inherited: 0x388)
class UAbilityBaseEffectView : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityDectorMapIconViewController
// Size: 0x2a0 (Inherited: 0x290)
class UAbilityDectorMapIconViewController : public UMapIconViewController {
public:

	char pad_290[0x10]; // 0x290(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityDetectorEnemyItemView
// Size: 0x3b8 (Inherited: 0x388)
class UAbilityDetectorEnemyItemView : public UBaseUIView {
public:

	struct AGPCharacter* Target; // 0x388(0x08)
	struct UImage* AvatarImg; // 0x390(0x08)
	struct UTextBlock* HealthTextBlock; // 0x398(0x08)
	struct UTextBlock* ArmorTextBlock; // 0x3a0(0x08)
	char pad_3A8[0x10]; // 0x3a8(0x10)

	void OnEquipChanged(); // Function DFMGameHud.AbilityDetectorEnemyItemView.OnEquipChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityDetectorEnemyLstHudView
// Size: 0x428 (Inherited: 0x388)
class UAbilityDetectorEnemyLstHudView : public UBaseUIView {
public:

	float DelayHideTime; // 0x388(0x04)
	float KeepingTime; // 0x38c(0x04)
	char pad_390[0x8]; // 0x390(0x08)
	struct UHorizontalBox* HorizontalBox_177; // 0x398(0x08)
	struct UAbilityDetectorEnemyItemView* WBP_TipNonre_ScoutListItem_C_1; // 0x3a0(0x08)
	struct UAbilityDetectorEnemyItemView* WBP_TipNonre_ScoutListItem_C_2; // 0x3a8(0x08)
	struct UAbilityDetectorEnemyItemView* WBP_TipNonre_ScoutListItem_C_3; // 0x3b0(0x08)
	struct UAbilityDetectorEnemyItemView* WBP_TipNonre_ScoutListItem_C_4; // 0x3b8(0x08)
	struct UAbilityDetectorEnemyItemView* WBP_TipNonre_ScoutListItem_C_5; // 0x3c0(0x08)
	struct UAbilityDetectorEnemyItemView* WBP_TipNonre_ScoutListItem_C_6; // 0x3c8(0x08)
	struct UCanvasPanel* RootPanel; // 0x3d0(0x08)
	struct UCanvasPanel* ItemPanel; // 0x3d8(0x08)
	struct UTextBlock* NotFound; // 0x3e0(0x08)
	struct UTextBlock* NearBy; // 0x3e8(0x08)
	struct UWidgetAnimation* Anim_In; // 0x3f0(0x08)
	struct UWidgetAnimation* Anim_Out; // 0x3f8(0x08)
	struct TArray<struct UAbilityDetectorEnemyItemView*> TipsLst; // 0x400(0x10)
	char pad_410[0x10]; // 0x410(0x10)
	struct FTimerHandle Handle; // 0x420(0x08)

	void OnDetectorEnemyChanged(struct AGPCharacter* CHARACTER, bool bShow); // Function DFMGameHud.AbilityDetectorEnemyLstHudView.OnDetectorEnemyChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityDetectorHudController
// Size: 0xb0 (Inherited: 0xb0)
class UAbilityDetectorHudController : public UBaseUIController {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityEngineerVehicleHudController
// Size: 0xb0 (Inherited: 0xb0)
class UAbilityEngineerVehicleHudController : public UBaseUIController {
public:


	void OnVehicleOperate(bool On, struct AActor* Actor, struct ACHARACTER* CHARACTER); // Function DFMGameHud.AbilityEngineerVehicleHudController.OnVehicleOperate // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityLockerView
// Size: 0x480 (Inherited: 0x388)
class UAbilityLockerView : public UBaseUIView {
public:

	struct UCanvasPanel* MarkerCanvas; // 0x388(0x08)
	struct TMap<enum class EGPAbilityLockerType, struct FGameMarkerPool2> MarkerUsingPool; // 0x390(0x50)
	struct TMap<enum class EGPAbilityLockerType, struct FGameMarkerPool2> MarkerNotUsePool; // 0x3e0(0x50)
	struct TMap<enum class EGPAbilityLockerType, struct UClass*> MarkerWidgetsMap; // 0x430(0x50)

	void RemoveWidgetFromUsingPool(enum class EGPAbilityLockerType markerType, int32_t Index); // Function DFMGameHud.AbilityLockerView.RemoveWidgetFromUsingPool // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ActorLocationTipsWidget
// Size: 0x298 (Inherited: 0x298)
class UActorLocationTipsWidget : public UUserWidget {
public:


	void UpdateView(struct AActor* Actor); // Function DFMGameHud.ActorLocationTipsWidget.UpdateView // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ActorLocationTipsView
// Size: 0x4a0 (Inherited: 0x388)
class UActorLocationTipsView : public UBaseUIView {
public:

	struct TArray<struct FActorTipsConfig> ActorConfig; // 0x388(0x10)
	struct UCanvasPanel* RootPanel; // 0x398(0x08)
	char pad_3A0[0x50]; // 0x3a0(0x50)
	struct TMap<struct UClass*, struct UCanvasPanel*> SubPanelMap; // 0x3f0(0x50)
	char pad_440[0x60]; // 0x440(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AILabDebugView
// Size: 0x3c0 (Inherited: 0x3b8)
class UAILabDebugView : public UMobileGamePadView {
public:

	struct UAILabOBTeamItemView* AILabDeTeamItem; // 0x3b8(0x08)

	void OnUinInfoChanged(); // Function DFMGameHud.AILabDebugView.OnUinInfoChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AILabOBHudView
// Size: 0x490 (Inherited: 0x388)
class UAILabOBHudView : public UBaseUIView {
public:

	struct UAILabOBTeamItemView* AILabTeamItem_00; // 0x388(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_01; // 0x390(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_02; // 0x398(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_03; // 0x3a0(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_11; // 0x3a8(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_12; // 0x3b0(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_13; // 0x3b8(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_14; // 0x3c0(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_21; // 0x3c8(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_22; // 0x3d0(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_23; // 0x3d8(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_24; // 0x3e0(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_31; // 0x3e8(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_32; // 0x3f0(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_33; // 0x3f8(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem_34; // 0x400(0x08)
	struct UAILabOBTeamItemView* AILabTeamItem; // 0x408(0x08)
	struct UAILabOBTeamItemView* AITeamItem; // 0x410(0x08)
	struct UAILabOBTeamItemView* AILabControlTeamItem; // 0x418(0x08)
	struct UAILabStyleView* AILabStyleItem; // 0x420(0x08)
	struct TArray<struct UAILabOBTeamItemView*> AllPlayerTeamInfo; // 0x428(0x10)
	char pad_438[0x28]; // 0x438(0x28)
	struct FString CurrentSpectatorName; // 0x460(0x10)
	struct FString CurrentSpectatorUin; // 0x470(0x10)
	struct TArray<struct ADFMCharacter*> AllClientCharacters; // 0x480(0x10)

	void OnSpectateBriefInfoChanged(); // Function DFMGameHud.AILabOBHudView.OnSpectateBriefInfoChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AILabOBTeamItemView
// Size: 0x2d8 (Inherited: 0x298)
class UAILabOBTeamItemView : public UUserWidget {
public:

	struct UComboBoxString* ComboBoxString_Team; // 0x298(0x08)
	struct UAILabOBHudView* ParentWidget; // 0x2a0(0x08)
	int32_t MyTeamID; // 0x2a8(0x04)
	int32_t CampId; // 0x2ac(0x04)
	struct TArray<struct FSpectatorBriefInfo> AllBriefInfo; // 0x2b0(0x10)
	struct TArray<struct FString> DropDownListItem; // 0x2c0(0x10)
	char pad_2D0[0x4]; // 0x2d0(0x04)
	int32_t Uin; // 0x2d4(0x04)

	void OnUinClicked(struct FString Value); // Function DFMGameHud.AILabOBTeamItemView.OnUinClicked // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AILabStyleView
// Size: 0x2c0 (Inherited: 0x298)
class UAILabStyleView : public UUserWidget {
public:

	struct UComboBoxString* ComboBoxString_Team; // 0x298(0x08)
	struct UAILabOBHudView* ParentWidget; // 0x2a0(0x08)
	int32_t Style; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TArray<struct FString> DropDownListItem; // 0x2b0(0x10)

	void OnItemClicked(struct FString Value); // Function DFMGameHud.AILabStyleView.OnItemClicked // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AIMsgHUDView
// Size: 0x460 (Inherited: 0x388)
class UAIMsgHUDView : public UBaseUIView {
public:

	struct UClass* VisionDirMsgWidget; // 0x388(0x08)
	float SafeRatio; // 0x390(0x04)
	float AlertMsgLastTime; // 0x394(0x04)
	float FightMsgLastTime; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct UCanvasPanel* ViewPanel; // 0x3a0(0x08)
	struct TMap<struct ADFMCharacter*, struct FAIMsgWidgets> AIMsgMap; // 0x3a8(0x50)
	struct UDFMCharacterAmbientAudioFSM* DFMCharacterAmbientAudioFSM; // 0x3f8(0x08)
	struct UDFMProcessAIMsgComponent* ProcessAIMsgComponent; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)
	struct TMap<struct ADFMCharacter*, struct UPlayerMarkerAIMakerWidget*> AIMarkerMap; // 0x410(0x50)

	void PlayerControllerChanged(struct APlayerController* NewController); // Function DFMGameHud.AIMsgHUDView.PlayerControllerChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AmmoAddTips
// Size: 0x418 (Inherited: 0x388)
class UAmmoAddTips : public UBaseUIView {
public:

	struct UImage* Image; // 0x388(0x08)
	struct UImage* Image_2; // 0x390(0x08)
	struct UImage* Image_3; // 0x398(0x08)
	struct UImage* Image_4; // 0x3a0(0x08)
	struct UImage* Image_5; // 0x3a8(0x08)
	struct UImage* Image_6; // 0x3b0(0x08)
	struct URichTextBlock* wRichText_2; // 0x3b8(0x08)
	struct URichTextBlock* wRichText_3; // 0x3c0(0x08)
	struct URichTextBlock* wRichText_4; // 0x3c8(0x08)
	struct URichTextBlock* wRichText_5; // 0x3d0(0x08)
	struct URichTextBlock* wRichText_6; // 0x3d8(0x08)
	struct URichTextBlock* wRichText_7; // 0x3e0(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x3e8(0x08)
	struct UWidgetAnimation* WeaponAnimIn; // 0x3f0(0x08)
	struct UWidgetAnimation* WeaponAnimOut; // 0x3f8(0x08)
	char pad_400[0x8]; // 0x400(0x08)
	struct TArray<struct FLinearColor> BulletColorByLevel; // 0x408(0x10)

	void OnShowTips(struct TArray<int32_t>& BulletLevelArray); // Function DFMGameHud.AmmoAddTips.OnShowTips // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ReloadRouletteHUDView
// Size: 0x530 (Inherited: 0x388)
class UReloadRouletteHUDView : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct TArray<enum class GameHUDSate> InvisibleFocusHUDState; // 0x390(0x10)
	struct UReloadRouletteItemView* WBP_ReloadRouletteItem; // 0x3a0(0x08)
	struct UReloadRouletteItemView* WBP_ReloadRouletteItem_2; // 0x3a8(0x08)
	struct UReloadRouletteItemView* WBP_ReloadRouletteItem_3; // 0x3b0(0x08)
	struct UReloadRouletteItemView* WBP_ReloadRouletteItem_4; // 0x3b8(0x08)
	struct UUserWidget* WBP_ReloadRouletteText; // 0x3c0(0x08)
	struct UUserWidget* WBP_ReloadRouletteText_2; // 0x3c8(0x08)
	struct UUserWidget* WBP_ReloadRouletteText_3; // 0x3d0(0x08)
	struct UUserWidget* WBP_ReloadRouletteText_4; // 0x3d8(0x08)
	struct UTextBlock* wtCenterText; // 0x3e0(0x08)
	struct UTextBlock* wtSubText; // 0x3e8(0x08)
	struct UVerticalBox* VerticalBox_2; // 0x3f0(0x08)
	struct UImage* DFImage_9; // 0x3f8(0x08)
	struct UImage* TouchPoint; // 0x400(0x08)
	struct UCommonRouletteInfoView* WBP_CommonRouletteInfo; // 0x408(0x08)
	struct UWidgetAnimation* Anim_RotateRight; // 0x410(0x08)
	struct UWidgetAnimation* Anim_RotateLeft; // 0x418(0x08)
	float InnerRadius; // 0x420(0x04)
	float OuterRadius; // 0x424(0x04)
	bool bEnableDebugView; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct TMap<int32_t, struct FText> NameTextMap; // 0x430(0x50)
	struct FText CancelText; // 0x480(0x18)
	struct FVector2D CurrentCenterPos; // 0x498(0x08)
	struct FVector2D CurrentTouchPointPos; // 0x4a0(0x08)
	struct UGPInputReloadLogic* ReloadLogic; // 0x4a8(0x08)
	struct TArray<struct FInventoryItemInfo> AmmoSortedList; // 0x4b0(0x10)
	struct FText AmmoInfoText; // 0x4c0(0x18)
	struct TArray<struct UReloadRouletteItemView*> ReloadRouletteItems; // 0x4d8(0x10)
	struct UDFMWeaponDataComponentAmmo_Item* DCAmmo_Item; // 0x4e8(0x08)
	struct TArray<struct UUserWidget*> ReloadRouletteTextItems; // 0x4f0(0x10)
	struct TArray<struct UTextBlock*> ReloadRouletteTexts; // 0x500(0x10)
	struct TArray<struct UDFMImage*> ReloadRouletteImages; // 0x510(0x10)
	char pad_520[0x10]; // 0x520(0x10)

	void OnTouchPointNumChanged(int32_t TouchPointNum); // Function DFMGameHud.ReloadRouletteHUDView.OnTouchPointNumChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ReloadRouletteItemView
// Size: 0x298 (Inherited: 0x298)
class UReloadRouletteItemView : public UUserWidget {
public:


	void BPSetType(bool Selected, int32_t InType); // Function DFMGameHud.ReloadRouletteItemView.BPSetType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AnimShowSettings
// Size: 0x48 (Inherited: 0x30)
class UAnimShowSettings : public UObject {
public:

	bool bShowFPP; // 0x30(0x01)
	bool bShowTPP; // 0x31(0x01)
	bool bShowMontage; // 0x32(0x01)
	bool bShowBSDetail; // 0x33(0x01)
	bool bShowCurves; // 0x34(0x01)
	bool bShowVars; // 0x35(0x01)
	bool bShowEvals; // 0x36(0x01)
	bool bShowWpn; // 0x37(0x01)
	struct FString SearchString; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AnimDebugLogView
// Size: 0x488 (Inherited: 0x3b8)
class UAnimDebugLogView : public UMobileGamePadView {
public:

	char pad_3B8[0x20]; // 0x3b8(0x20)
	struct URichTextBlock* RichTextBlockLog; // 0x3d8(0x08)
	enum class EAnimDebugType DebugType; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct UEditableTextBox* RichTextBlockLogFilterText; // 0x3e8(0x08)
	struct UEditableTextBox* SearchTextBox; // 0x3f0(0x08)
	struct UComboBoxString* SelectCharacterCmd; // 0x3f8(0x08)
	char pad_400[0x20]; // 0x400(0x20)
	struct UCheckbox* AnimShowFPPCheckBox; // 0x420(0x08)
	struct UCheckbox* AnimShowTPPCheckBox; // 0x428(0x08)
	struct UCheckbox* AnimShowMontageCheckBox; // 0x430(0x08)
	struct UCheckbox* AnimShowBSDetailCheckBox; // 0x438(0x08)
	struct UCheckbox* AnimShowCurvesCheckBox; // 0x440(0x08)
	struct UCheckbox* AnimShowVarsCheckBox; // 0x448(0x08)
	struct UCheckbox* AnimShowEvalsCheckBox; // 0x450(0x08)
	struct UCheckbox* AnimShowWpnCheckBox; // 0x458(0x08)
	struct TArray<struct AActor*> AllActors; // 0x460(0x10)
	int32_t CurrentActorId; // 0x470(0x04)
	char pad_474[0x14]; // 0x474(0x14)

	void ShowDebugPanel(bool Show, enum class EAnimDebugType ShowDebugType); // Function DFMGameHud.AnimDebugLogView.ShowDebugPanel // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AccessAnimInstance
// Size: 0x280 (Inherited: 0x280)
class UAccessAnimInstance : public UAnimInstance {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AnimTrackingWidget
// Size: 0x298 (Inherited: 0x298)
class UAnimTrackingWidget : public UUserWidget {
public:


	void BP_PlayTrackingAnimation(); // Function DFMGameHud.AnimTrackingWidget.BP_PlayTrackingAnimation // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AssistedAimingDebugLogView
// Size: 0x410 (Inherited: 0x3b8)
class UAssistedAimingDebugLogView : public UMobileGamePadView {
public:

	struct FAssistedAimingDebugViewInfo LogAssistedAimingInfo; // 0x3b8(0x50)
	bool bEnableRecoilGraph; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)

	void OnRotateStickyLogInfo(float StickyParam, float Friction, float MoveSpeed, float DistanceHorizontal, float ReduceScale, bool bHitPreventMissEnable, int32_t HitContinueMissNumber, float HitPreventMissStartTime, float HitBulletRadius); // Function DFMGameHud.AssistedAimingDebugLogView.OnRotateStickyLogInfo // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BallisticTargetHUDView
// Size: 0x438 (Inherited: 0x388)
class UBallisticTargetHUDView : public UBaseUIView {
public:

	struct FSlateBrush CraterBrush; // 0x388(0x90)
	struct FVector2D CraterSize; // 0x418(0x08)
	struct UCanvasPanel* GraphPanel; // 0x420(0x08)
	struct TArray<struct UImage*> Craters; // 0x428(0x10)

	void ResetCraters(); // Function DFMGameHud.BallisticTargetHUDView.ResetCraters // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BattleFieldSafeAreaScreenEffectHUD
// Size: 0x498 (Inherited: 0x388)
class UBattleFieldSafeAreaScreenEffectHUD : public UBaseUIView {
public:

	/*struct TSoftObjectPtr<UMaterialInstance>*/char LeaveSafeAreaStartMI[0x28]; // 0x388(0x28)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char LeaveSafeAreaLoopMI[0x28]; // 0x3b0(0x28)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char LeaveSafeAreaEndMI[0x28]; // 0x3d8(0x28)
	struct AGPCharacter* GPCharacter; // 0x400(0x08)
	char pad_408[0x30]; // 0x408(0x30)
	float SafeAreaFadeInTime; // 0x438(0x04)
	float SafeAreaFadeOutTime; // 0x43c(0x04)
	float SafeAreaFadeDeltaTime; // 0x440(0x04)
	float CountDownRefreshDeltaTime; // 0x444(0x04)
	float GuideRefreshFrequency; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UTextBlock* HintText; // 0x450(0x08)
	struct UImage* ArrowImage; // 0x458(0x08)
	struct UTextBlock* countdown; // 0x460(0x08)
	struct UWidgetAnimation* NumbAnim; // 0x468(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_OutGamingArea_in; // 0x470(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_OutGamingArea_loop; // 0x478(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_OutGamingArea_out; // 0x480(0x08)
	struct FLinearColor ArrowImageColor; // 0x488(0x10)

	void OnMatchOver(enum class EMatchOverReason& MatchOverReason); // Function DFMGameHud.BattleFieldSafeAreaScreenEffectHUD.OnMatchOver // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BattleStatusHud
// Size: 0x3a8 (Inherited: 0x388)
class UBattleStatusHud : public UBaseUIView {
public:

	char pad_388[0x10]; // 0x388(0x10)
	struct UBaseBattleStatusItem* CurrentActiveWidget; // 0x398(0x08)
	char pad_3A0[0x8]; // 0x3a0(0x08)

	void RefreshSneakView(); // Function DFMGameHud.BattleStatusHud.RefreshSneakView // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BaseBattleStatusItem
// Size: 0x298 (Inherited: 0x298)
class UBaseBattleStatusItem : public UUserWidget {
public:


	void BPShow(); // Function DFMGameHud.BaseBattleStatusItem.BPShow // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BloodBarTipsHud
// Size: 0x470 (Inherited: 0x388)
class UBloodBarTipsHud : public UBaseUIView {
public:

	struct TArray<struct UBloodBarTipsHudItem*> BloodUIitems; // 0x388(0x10)
	struct UCanvasPanel* Container; // 0x398(0x08)
	struct UClass* ItemClass; // 0x3a0(0x08)
	struct FVector2D offset; // 0x3a8(0x08)
	char pad_3B0[0x30]; // 0x3b0(0x30)
	struct TMap<uint64_t, struct UBloodBarTipsHudItem*> BloodCharacterMap; // 0x3e0(0x50)
	struct ADFMCharacter* CurShowCharacter; // 0x430(0x08)
	char pad_438[0x10]; // 0x438(0x10)
	struct TArray<struct UBloodBarTipsHudItem*> AllUIItems; // 0x448(0x10)
	char pad_458[0x18]; // 0x458(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BloodBarTipsHudItem
// Size: 0x2c8 (Inherited: 0x298)
class UBloodBarTipsHudItem : public UUserWidget {
public:

	struct UTextBlock* NameTxt; // 0x298(0x08)
	struct ACHARACTER* OwnCharacter; // 0x2a0(0x08)
	bool IsFinshed; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UBloodBarTipsHud* ParentHud; // 0x2b0(0x08)
	char pad_2B8[0x10]; // 0x2b8(0x10)

	void OnUpdateHealthBar(float Health, bool Initialize); // Function DFMGameHud.BloodBarTipsHudItem.OnUpdateHealthBar // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BloodBarTipsUIController
// Size: 0xf0 (Inherited: 0xb0)
class UBloodBarTipsUIController : public UBaseUIController {
public:

	struct UBloodBarTipsHud* BloodBarTipsHud; // 0xb0(0x08)
	float CheckDistance; // 0xb8(0x04)
	float ZoomCheckDistance; // 0xbc(0x04)
	float FrameTime; // 0xc0(0x04)
	char pad_C4[0x1]; // 0xc4(0x01)
	bool bIsAsync; // 0xc5(0x01)
	char pad_C6[0xa]; // 0xc6(0x0a)
	struct ADFMCharacter* HitCharater; // 0xd0(0x08)
	char pad_D8[0x18]; // 0xd8(0x18)

	void OnCharRestart(struct AGPCharacterBase* CHARACTER); // Function DFMGameHud.BloodBarTipsUIController.OnCharRestart // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BossBeLaserScreenEffectHUD
// Size: 0x3e8 (Inherited: 0x388)
class UBossBeLaserScreenEffectHUD : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct UImage* Image_Right; // 0x390(0x08)
	struct UImage* Image_Left; // 0x398(0x08)
	struct AActor* BossActor; // 0x3a0(0x08)
	struct AActor* SelfActor; // 0x3a8(0x08)
	float BlockSightValue; // 0x3b0(0x04)
	float InAlphaValue; // 0x3b4(0x04)
	float BlockSightDelay; // 0x3b8(0x04)
	float InAlphaDelay; // 0x3bc(0x04)
	float MaxAliveTime; // 0x3c0(0x04)
	bool EnableTraceTest; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	float ForwardMin; // 0x3c8(0x04)
	float ForwardMax; // 0x3cc(0x04)
	float RightMin; // 0x3d0(0x04)
	float RightMax; // 0x3d4(0x04)
	float DirectionMin; // 0x3d8(0x04)
	float DirectionMax; // 0x3dc(0x04)
	float FocusClamp; // 0x3e0(0x04)
	bool bDebugDraw; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BossBeLaserScreenEffectController
// Size: 0x150 (Inherited: 0x148)
class UBossBeLaserScreenEffectController : public UScreenEffectControllerBase {
public:

	struct TWeakObjectPtr<struct UBossBeLaserScreenEffectHUD> CacheBossLaserScreenUI; // 0x148(0x08)

	void SetupBossActor(struct AActor* Boss); // Function DFMGameHud.BossBeLaserScreenEffectController.SetupBossActor // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BossLocationViewController
// Size: 0x2b0 (Inherited: 0x290)
class UBossLocationViewController : public UMapIconViewController {
public:

	char pad_290[0x20]; // 0x290(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BreakAwayScreenEffectHUD
// Size: 0x3a8 (Inherited: 0x388)
class UBreakAwayScreenEffectHUD : public UBaseUIView {
public:

	char pad_388[0x10]; // 0x388(0x10)
	struct UWidgetAnimation* WBP_ScreenEff_Recharge_Loop_In; // 0x398(0x08)
	struct UWidgetAnimation* WBP_ScreenEff_Recharge_Loop_out; // 0x3a0(0x08)

	void OnOutAnimaPlayEnd(); // Function DFMGameHud.BreakAwayScreenEffectHUD.OnOutAnimaPlayEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BreakAwayScreenEffectController
// Size: 0x150 (Inherited: 0x148)
class UBreakAwayScreenEffectController : public UScreenEffectControllerBase {
public:

	struct TWeakObjectPtr<struct UBaseUIView> CacheLowHealthScreenUI; // 0x148(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BroadcastHudItem
// Size: 0x700 (Inherited: 0x388)
class UBroadcastHudItem : public UBaseUIView {
public:

	struct UTextBlock* KillerNameText; // 0x388(0x08)
	struct UImage* KillIcon; // 0x390(0x08)
	struct UTextBlock* BekilledNameText; // 0x398(0x08)
	struct UImage* RankIcon_Killer; // 0x3a0(0x08)
	struct UImage* KnockDownIcon; // 0x3a8(0x08)
	struct UImage* RankIcon_Killee; // 0x3b0(0x08)
	struct UImage* GameInfoIcon; // 0x3b8(0x08)
	struct UImage* Icon_Testing; // 0x3c0(0x08)
	bool bIsFinished; // 0x3c8(0x01)
	char pad_3C9[0x1]; // 0x3c9(0x01)
	bool bIfNeedAlwaysShow; // 0x3ca(0x01)
	char pad_3CB[0x5]; // 0x3cb(0x05)
	struct TMap<enum class EBroadcastNameColorType, struct FBroadcastHudNameColor> NameColorMap; // 0x3d0(0x50)
	struct TMap<enum class EBroadcastTeamInfoType, struct UPaperSprite*> TeamIconMap; // 0x420(0x50)
	struct TMap<enum class EBroadcastGameInfoType, struct UPaperSprite*> GameInfoIconMap; // 0x470(0x50)
	struct TMap<enum class EDeadType, struct UPaperSprite*> KillIconMap; // 0x4c0(0x50)
	struct TMap<enum class EBroadcastKillIconType, struct UPaperSprite*> KillTypeIconMap; // 0x510(0x50)
	struct FSoftObjectPath DefaultKillIcon; // 0x560(0x18)
	bool bUseVehicleIcon; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct FSlateColor SelfNameColor; // 0x580(0x28)
	struct FLinearColor SelfNameOutlineColor; // 0x5a8(0x10)
	struct FSlateColor SelfNameColor_MP; // 0x5b8(0x28)
	struct FLinearColor SelfNameOutlineColor_MP; // 0x5e0(0x10)
	struct FSlateColor TeamNameColor; // 0x5f0(0x28)
	struct FLinearColor TeamNameOutColor; // 0x618(0x10)
	struct FSlateColor EnemyNameColor; // 0x628(0x28)
	struct FLinearColor EnemyNameOutColor; // 0x650(0x10)
	struct FSlateColor GameInfoColor; // 0x660(0x28)
	struct FLinearColor GameInfoOutlineColor; // 0x688(0x10)
	struct FSlateColor BF_Camp_NameColor; // 0x698(0x28)
	struct FLinearColor BF_Camp_NameColor_Outline; // 0x6c0(0x10)
	char pad_6D0[0x30]; // 0x6d0(0x30)

	void SetHidden(); // Function DFMGameHud.BroadcastHudItem.SetHidden // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BroadcastHudView
// Size: 0x5e0 (Inherited: 0x388)
class UBroadcastHudView : public UBaseUIView {
public:

	float DisplayTime; // 0x388(0x04)
	float Interval; // 0x38c(0x04)
	float MoveTime; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FRuntimeFloatCurve MoveCurve; // 0x398(0xa0)
	int32_t MaxShowNum; // 0x438(0x04)
	float Vertical_Spacing; // 0x43c(0x04)
	struct UCanvasPanel* TipContainer; // 0x440(0x08)
	struct FVector2D ChildPanelSlotSize; // 0x448(0x08)
	struct UClass* BroadcastTipItemClass; // 0x450(0x08)
	int32_t PreSpwanItemNum; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct TArray<struct UBroadcastHudItem*> BroadcastUIItemArr; // 0x460(0x10)
	char pad_470[0x10]; // 0x470(0x10)
	struct ADFMGameState* GPGameState; // 0x480(0x08)
	struct ADFMPlayerController* GPPlayerController; // 0x488(0x08)
	struct TMap<uint64_t, struct FSoftObjectPath> WeaponIconCache; // 0x490(0x50)
	char pad_4E0[0x10]; // 0x4e0(0x10)
	struct TArray<struct UBroadcastHudItem*> RemoveItems; // 0x4f0(0x10)
	struct TArray<struct UBroadcastHudItem*> ReuseableItems; // 0x500(0x10)
	char pad_510[0xc8]; // 0x510(0xc8)
	float Vertical_Offset; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)

	void PopBroadcastMsg(); // Function DFMGameHud.BroadcastHudView.PopBroadcastMsg // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BuffAndStaminaViewPC
// Size: 0x768 (Inherited: 0x5a8)
class UBuffAndStaminaViewPC : public ULuaUIHudBaseView {
public:

	bool bAlwayseShowHealthTipBox; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	int32_t HealthTipAnimationCount; // 0x5ac(0x04)
	struct FUIAnimationController AnimationController; // 0x5b0(0x20)
	struct UBorder* wtBuffDetialTipWindow; // 0x5d0(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_HealthTipBox; // 0x5d8(0x08)
	struct UImage* ProgressBar_Base; // 0x5e0(0x08)
	struct UImage* ProgressBar_Extra; // 0x5e8(0x08)
	struct UImage* ProgressBar_Front_FX; // 0x5f0(0x08)
	struct UCanvasPanel* StaminaCanvasPanel; // 0x5f8(0x08)
	struct FName KeyProgress; // 0x600(0x08)
	struct FName KeyProgressDown; // 0x608(0x08)
	struct FName Num; // 0x610(0x08)
	struct FName KeyColor; // 0x618(0x08)
	struct FName KeyColorDown; // 0x620(0x08)
	float StaminaChangeSpeed; // 0x628(0x04)
	float ChangeAnimThreshold; // 0x62c(0x04)
	float LowStaminaValue; // 0x630(0x04)
	float BaseStaminaMaxValue; // 0x634(0x04)
	float FullStaminaFlushTime; // 0x638(0x04)
	float BackCountdownTime; // 0x63c(0x04)
	float playStaminaChangeFlushThreshold; // 0x640(0x04)
	struct FLinearColor BaseFrontColor; // 0x644(0x10)
	struct FLinearColor BaseDownColor; // 0x654(0x10)
	struct FLinearColor ExtraFrontColor; // 0x664(0x10)
	struct FLinearColor ExtraDownColor; // 0x674(0x10)
	struct FLinearColor ConsumeDownColor; // 0x684(0x10)
	struct FLinearColor LowStaminaColor; // 0x694(0x10)
	char pad_6A4[0x2c]; // 0x6a4(0x2c)
	struct UMaterialInstanceDynamic* BaseMaterial; // 0x6d0(0x08)
	struct UMaterialInstanceDynamic* ExtraMaterial; // 0x6d8(0x08)
	struct UMaterialInstanceDynamic* FXMaterial; // 0x6e0(0x08)
	struct AGPCharacter* LocalCharacter; // 0x6e8(0x08)
	struct UGPStaminaDataComponent* StaminaComp; // 0x6f0(0x08)
	struct UWidgetAnimation* LowStaminaAnimation; // 0x6f8(0x08)
	struct ADFMCharacter* DFMCharacter; // 0x700(0x08)
	bool bIsOpenBag; // 0x708(0x01)
	char pad_709[0x3]; // 0x709(0x03)
	int32_t HasHealthDebuffCount; // 0x70c(0x04)
	struct TArray<uint32_t> HealthDebuffList; // 0x710(0x10)
	struct UGPInputAimLogic* InputAimLogic; // 0x720(0x08)
	bool bCacheIsZooming; // 0x728(0x01)
	char pad_729[0x7]; // 0x729(0x07)
	struct UHoldBreathIconView* WBP_HoldBreathIcon; // 0x730(0x08)
	float LowBreathPercent; // 0x738(0x04)
	float ShowIconPercent; // 0x73c(0x04)
	bool bHasPlayExhaustAnim; // 0x740(0x01)
	bool bInFadeIn; // 0x741(0x01)
	bool bInFadeOut; // 0x742(0x01)
	bool bFadeInAndOutCompleted; // 0x743(0x01)
	char pad_744[0x24]; // 0x744(0x24)

	void UpdateKeyTip(); // Function DFMGameHud.BuffAndStaminaViewPC.UpdateKeyTip // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BuffItemHUDView
// Size: 0x3b0 (Inherited: 0x388)
class UBuffItemHUDView : public UBaseUIView {
public:

	struct UTextBlock* CountText; // 0x388(0x08)
	struct UButton* BuffBtn; // 0x390(0x08)
	struct UImage* Image_91; // 0x398(0x08)
	struct UImage* BuffImage; // 0x3a0(0x08)
	bool bLoading; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	uint32_t CurrentBuffId; // 0x3ac(0x04)

	void UpdatePrograss(uint64_t InArg1, uint64_t InArg2, uint64_t InArg3); // Function DFMGameHud.BuffItemHUDView.UpdatePrograss // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BuffListDetailHUDView
// Size: 0x3f8 (Inherited: 0x3b8)
class UBuffListDetailHUDView : public UMobileGamePadView {
public:

	struct TArray<struct UBuffListDetailItemView*> ItemList; // 0x3b8(0x10)
	struct UScrollBox* Scroll_Box; // 0x3c8(0x08)
	struct UBuffListDetailItemView* H_MiniMan_BufferDetailInfo; // 0x3d0(0x08)
	struct UBuffListDetailItemView* H_MiniMan_BufferDetailInfo_2; // 0x3d8(0x08)
	struct UBuffListDetailItemView* H_MiniMan_BufferDetailInfo_3; // 0x3e0(0x08)
	struct UBuffListDetailItemView* H_MiniMan_BufferDetailInfo_4; // 0x3e8(0x08)
	struct UBuffListDetailItemView* H_MiniMan_BufferDetailInfo_5; // 0x3f0(0x08)

	void SetBuffList(struct TArray<struct FCharacterBuff>& buffArray); // Function DFMGameHud.BuffListDetailHUDView.SetBuffList // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BuffListDetailItemView
// Size: 0x2c0 (Inherited: 0x298)
class UBuffListDetailItemView : public UUserWidget {
public:

	struct UBuffItemHUDView* BuffItem1_2; // 0x298(0x08)
	struct UTextBlock* TextName; // 0x2a0(0x08)
	struct UTextBlock* TextTime; // 0x2a8(0x08)
	struct UTextBlock* TextDesc; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void SetCharacterBuffEffectEntity(struct FName Ebuff, struct UDFMCharacterBuffEntityBase* BuffEntity, uint32_t Cnt, uint32_t BuffId); // Function DFMGameHud.BuffListDetailItemView.SetCharacterBuffEffectEntity // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ButtonClickProxy
// Size: 0x50 (Inherited: 0x30)
class UButtonClickProxy : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)
	struct UButton* Button; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)

	void OnButtonClick(); // Function DFMGameHud.ButtonClickProxy.OnButtonClick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CaptureTextView
// Size: 0x2a0 (Inherited: 0x298)
class UCaptureTextView : public UUserWidget {
public:

	bool bIsRed; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)

	void ShowCapturedBgImage(bool bShow); // Function DFMGameHud.CaptureTextView.ShowCapturedBgImage // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterArmorBarItem
// Size: 0x300 (Inherited: 0x298)
class UCharacterArmorBarItem : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UImage* ProgressBar_Fore; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* FrontMaterial; // 0x2b0(0x08)
	char pad_2B8[0x48]; // 0x2b8(0x48)

	void SetCharacterArmorBarView(struct FCharacterArmorBarItemView ViewData); // Function DFMGameHud.CharacterArmorBarItem.SetCharacterArmorBarView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterArmorStatusItem
// Size: 0x310 (Inherited: 0x298)
class UCharacterArmorStatusItem : public UUserWidget {
public:

	struct FLinearColor ColorDown_Add; // 0x298(0x10)
	struct FLinearColor ColorDown_Reduce; // 0x2a8(0x10)
	struct URadialImage* DFProgressBar_Damage; // 0x2b8(0x08)
	struct URadialImage* DFProgressBar_Base; // 0x2c0(0x08)
	struct URadialImage* DFProgressBar_Extra; // 0x2c8(0x08)
	float HitAnimSpeed; // 0x2d0(0x04)
	bool bEnableTickAnim; // 0x2d4(0x01)
	char pad_2D5[0xb]; // 0x2d5(0x0b)
	struct FArmorStatusDataView Data; // 0x2e0(0x10)
	char pad_2F0[0x18]; // 0x2f0(0x18)
	struct TWeakObjectPtr<struct ADFMCharacter> CharacterPtr; // 0x308(0x08)

	void Update(float Delta); // Function DFMGameHud.CharacterArmorStatusItem.Update // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterAttrsDebugItem
// Size: 0x2a0 (Inherited: 0x298)
class UCharacterAttrsDebugItem : public UUserWidget {
public:

	struct URichTextBlock* TextBlock; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterAttrsDebugHud
// Size: 0x3c8 (Inherited: 0x388)
class UCharacterAttrsDebugHud : public UBaseUIView {
public:

	struct UComboBoxString* AttributeSetSelectComboBoxStringx; // 0x388(0x08)
	struct UScrollBox* AttributesList; // 0x390(0x08)
	char pad_398[0x20]; // 0x398(0x20)
	struct ADFMCharacter* CHARACTER; // 0x3b8(0x08)
	struct UCharacterAttributesCenterComponent* CacheAttributesCenterComponent; // 0x3c0(0x08)

	void RefreshAttributesOpDatas(); // Function DFMGameHud.CharacterAttrsDebugHud.RefreshAttributesOpDatas // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterBloodBase
// Size: 0x390 (Inherited: 0x298)
class UCharacterBloodBase : public UUserWidget {
public:

	struct UTextBlock* wtHealthValueTxt; // 0x298(0x08)
	struct UTextBlock* wtMaxValueTxt; // 0x2a0(0x08)
	struct UImage* ArmBarImage; // 0x2a8(0x08)
	struct UImage* AddImg; // 0x2b0(0x08)
	struct UImage* HeathBarBottomLine; // 0x2b8(0x08)
	char pad_2C0[0x8]; // 0x2c0(0x08)
	struct URadialImage* DFProgressBar_Base; // 0x2c8(0x08)
	struct URadialImage* DFProgressBar_Extra; // 0x2d0(0x08)
	struct UProgressBar* ProgressBar_Stripe; // 0x2d8(0x08)
	struct UWidgetAnimation* ProgressBar_Stripe_Anim_In; // 0x2e0(0x08)
	struct UWidgetAnimation* ProgressBar_Stripe_Anim_Out; // 0x2e8(0x08)
	struct TArray<struct FLinearColor> RefColorArray; // 0x2f0(0x10)
	char pad_300[0x8]; // 0x300(0x08)
	struct UMaterialInstanceDynamic* FrontMaterial; // 0x308(0x08)
	char pad_310[0x28]; // 0x310(0x28)
	struct UWidgetAnimation* DebuffBloodAnimation; // 0x338(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> CharacterPtr; // 0x340(0x08)
	char pad_348[0x8]; // 0x348(0x08)
	bool bNeedHandleLowHealthColor; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	struct FLinearColor IncreaseColor; // 0x354(0x10)
	struct FLinearColor DecreaseColor; // 0x364(0x10)
	float LowHealthPercent; // 0x374(0x04)
	float HitAnimSpeed; // 0x378(0x04)
	float CacheLastHealth; // 0x37c(0x04)
	struct UCharacterBloodHandleBase* HandleClass; // 0x380(0x08)
	char pad_388[0x8]; // 0x388(0x08)

	void SetListenBuffEventTag(struct ADFMCharacter* InCharacter, struct FName InListenBuffEventTag); // Function DFMGameHud.CharacterBloodBase.SetListenBuffEventTag // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterBuffListView
// Size: 0x90 (Inherited: 0x30)
class UCharacterBuffListView : public UObject {
public:

	struct TArray<struct UCommonBuffItemView*> wtBuffItemViewLists; // 0x30(0x10)
	struct UPanelWidget* wtBuffContent; // 0x40(0x08)
	struct UClass* wtBuffItemViewClass; // 0x48(0x08)
	struct UCharaterBuffDetailTipView* BuffDetailTipView; // 0x50(0x08)
	struct FVector2D ItemBoxSize; // 0x58(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> CHARACTER; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)
	struct TArray<uint32_t> HealthDebuffList; // 0x80(0x10)

	void UpdateBuffList(); // Function DFMGameHud.CharacterBuffListView.UpdateBuffList // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterHealthInfoHud
// Size: 0x3f0 (Inherited: 0x388)
class UCharacterHealthInfoHud : public UBaseUIView {
public:

	struct UUserWidget* wtArmorRoot; // 0x388(0x08)
	struct UCharacterArmorStatusItem* wtArmorHelmet; // 0x390(0x08)
	struct UCharacterArmorStatusItem* wtArmorBreastPlate; // 0x398(0x08)
	struct UCharacterBloodBase* wtCharacterBloodBar; // 0x3a0(0x08)
	struct UClass* wtBuffItemViewClass; // 0x3a8(0x08)
	struct UCharacterBuffListView* CharacterBuffListView; // 0x3b0(0x08)
	struct UCharacterBuffListView* CharacterBuffDetailTipItemView; // 0x3b8(0x08)
	struct UCharaterBuffDetailTipView* BuffDetailTipView; // 0x3c0(0x08)
	struct UClass* wtBuffDetailTipItemViewClass; // 0x3c8(0x08)
	struct UCharacterMiniManView* MiniManView; // 0x3d0(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> CacheChar; // 0x3d8(0x08)
	struct TWeakObjectPtr<struct USOLCharacterEquipComponent> CacheEquipComponent; // 0x3e0(0x08)
	struct TWeakObjectPtr<struct UDFMHealthDataComponent> CacheHealthCom; // 0x3e8(0x08)

	void OnWatchCharEquipmentChanage(); // Function DFMGameHud.CharacterHealthInfoHud.OnWatchCharEquipmentChanage // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterMiniManView
// Size: 0x2b8 (Inherited: 0x298)
class UCharacterMiniManView : public UUserWidget {
public:

	struct TArray<struct UPaperSprite*> PoseSprites; // 0x298(0x10)
	struct UImage* MinimanImage; // 0x2a8(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> CHARACTER; // 0x2b0(0x08)

	void UpdatePose(); // Function DFMGameHud.CharacterMiniManView.UpdatePose // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharaterBuffDetailTipItemView
// Size: 0x2f8 (Inherited: 0x298)
class UCharaterBuffDetailTipItemView : public UUserWidget {
public:

	struct URichTextBlock* DescText; // 0x298(0x08)
	struct UCommonBuffItemView* BuffItemView; // 0x2a0(0x08)
	struct FText DebuffDesc; // 0x2a8(0x18)
	struct FText BuffDesc; // 0x2c0(0x18)
	struct FText CommonDesc; // 0x2d8(0x18)
	struct UImage* Image_33; // 0x2f0(0x08)

	void SetSepLineVisibility(enum class ESlateVisibility InVisibility); // Function DFMGameHud.CharaterBuffDetailTipItemView.SetSepLineVisibility // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharaterBuffDetailTipView
// Size: 0x68 (Inherited: 0x30)
class UCharaterBuffDetailTipView : public UObject {
public:

	struct UUserWidget* UserWidget; // 0x30(0x08)
	struct UPanelWidget* wtBuffContent; // 0x38(0x08)
	struct UPanelWidget* WindowRoot; // 0x40(0x08)
	struct UClass* wtBuffItemViewClass; // 0x48(0x08)
	struct TArray<struct UCharaterBuffDetailTipItemView*> wtBuffItemViewLists; // 0x50(0x10)
	struct UUserWidget* TargetUI; // 0x60(0x08)

	void UpdateBuffTipView(struct TArray<struct FCharacterBuffListViewData>& VisibleArray); // Function DFMGameHud.CharaterBuffDetailTipView.UpdateBuffTipView // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CommonBuffItemView
// Size: 0x350 (Inherited: 0x298)
class UCommonBuffItemView : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UButton* PressArea; // 0x2a0(0x08)
	struct URadialImage* wtBuffProgressBar1; // 0x2a8(0x08)
	struct UTextBlock* wtBuffNumTxt; // 0x2b0(0x08)
	struct FVector2D ItemBoxSize; // 0x2b8(0x08)
	struct UWidgetAnimation* DebuffBloodAnimation; // 0x2c0(0x08)
	struct UDFImage* _wtBuffIcon; // 0x2c8(0x08)
	/*struct FMulticastInlineDelegate*/char OnPressEvent[0x10]; // 0x2d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnClickEvent[0x10]; // 0x2e0(0x10)
	/*struct FMulticastInlineDelegate*/char HoverdEvent[0x10]; // 0x2f0(0x10)
	/*struct FMulticastInlineDelegate*/char UnHoverdEvent[0x10]; // 0x300(0x10)
	int32_t CacheBuffNum; // 0x310(0x04)
	int32_t CacheWidgetBuffId; // 0x314(0x04)
	char pad_318[0x8]; // 0x318(0x08)
	struct FCommonBuffItemDataView Data; // 0x320(0x20)
	float HoldJudgeTime; // 0x340(0x04)
	char pad_344[0x8]; // 0x344(0x08)
	int32_t HealthTipAnimationCount; // 0x34c(0x04)

	void TryPlayBuffAnimation(); // Function DFMGameHud.CommonBuffItemView.TryPlayBuffAnimation // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CommonBuffItemViewHD
// Size: 0x300 (Inherited: 0x298)
class UCommonBuffItemViewHD : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UButton* PressArea; // 0x2a0(0x08)
	struct UProgressBar* wtBuffProgressBar_2; // 0x2a8(0x08)
	struct UTextBlock* wtBuffNumTxt; // 0x2b0(0x08)
	int32_t CacheBuffNum; // 0x2b8(0x04)
	int32_t CacheWidgetBuffId; // 0x2bc(0x04)
	char pad_2C0[0x20]; // 0x2c0(0x20)
	/*struct FMulticastInlineDelegate*/char OnPressEvent[0x10]; // 0x2e0(0x10)
	/*struct FMulticastInlineDelegate*/char OnHoverEvent[0x10]; // 0x2f0(0x10)

	void SetBuffData(struct FCommonBuffItemDataView ViewData); // Function DFMGameHud.CommonBuffItemViewHD.SetBuffData // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CommonButtonView
// Size: 0x390 (Inherited: 0x388)
class UCommonButtonView : public UBaseUIView {
public:

	struct UButton* CommonButton; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CommonIconMapItemHUDController
// Size: 0x2b0 (Inherited: 0x290)
class UCommonIconMapItemHUDController : public UMapIconViewController {
public:

	enum class ECommonIconMapMarkerType markerType; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	uint64_t PlayerUin; // 0x298(0x08)
	bool bIsEnemy; // 0x2a0(0x01)
	char pad_2A1[0xf]; // 0x2a1(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CommonRouletteItemView
// Size: 0x398 (Inherited: 0x388)
class UCommonRouletteItemView : public UBaseUIView {
public:

	struct UUserWidget* ItemWidget; // 0x388(0x08)
	enum class EDFRouletteType RouletteType; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)

	void InitItemWidgetThroughCpp(); // Function DFMGameHud.CommonRouletteItemView.InitItemWidgetThroughCpp // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CommonRouletteItemInnerContentView
// Size: 0x398 (Inherited: 0x388)
class UCommonRouletteItemInnerContentView : public UBaseUIView {
public:

	struct UDFImage* InnerImage; // 0x388(0x08)
	struct UDFTextBlock* InnerTextBlock; // 0x390(0x08)

	void SetContentImageOpacity(float InOpacity); // Function DFMGameHud.CommonRouletteItemInnerContentView.SetContentImageOpacity // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CommonRouletteView
// Size: 0x3f0 (Inherited: 0x388)
class UCommonRouletteView : public UBaseUIView {
public:

	int32_t ItemNumUsing; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<struct UCommonRouletteItemView*> ItemContainerWidgetsPool; // 0x390(0x10)
	struct TArray<struct UUserWidget*> ItemLineWidgetsPool; // 0x3a0(0x10)
	struct TArray<struct UImage*> DisabledMaterialImagesPool; // 0x3b0(0x10)
	struct UImage* HoverEffect; // 0x3c0(0x08)
	struct UWidgetAnimation* Anim_In; // 0x3c8(0x08)
	struct UWidgetAnimation* Anim_Out; // 0x3d0(0x08)
	struct UWidgetAnimation* Hover; // 0x3d8(0x08)
	struct UWidgetAnimation* UnHover; // 0x3e0(0x08)
	struct UWidgetAnimation* Select; // 0x3e8(0x08)

	void SetDisabledIndexs(float RouletteStartAngle, struct TArray<int32_t> InItemsIndex); // Function DFMGameHud.CommonRouletteView.SetDisabledIndexs // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CommonRouletteInfoView
// Size: 0x3b0 (Inherited: 0x388)
class UCommonRouletteInfoView : public UBaseUIView {
public:

	struct UTextBlock* CenterText; // 0x388(0x08)
	struct UTextBlock* SubText; // 0x390(0x08)
	struct UDFMImage* MoveIcon; // 0x398(0x08)
	struct UHDKeyIconBoxWidget* WBP_CommonKeyIconBox; // 0x3a0(0x08)
	struct UTextBlock* KeyIconText; // 0x3a8(0x08)

	void BP_SetType(int32_t Type); // Function DFMGameHud.CommonRouletteInfoView.BP_SetType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ContractObjectionIconViewController
// Size: 0x620 (Inherited: 0x290)
class UContractObjectionIconViewController : public UMapIconViewController {
public:

	char pad_290[0x390]; // 0x290(0x390)

	void UpdateQuestProgress(int64_t UpdateQuestId, char QuestState); // Function DFMGameHud.ContractObjectionIconViewController.UpdateQuestProgress // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ContractPointIconViewController
// Size: 0x510 (Inherited: 0x2c8)
class UContractPointIconViewController : public USelectableMapIconController {
public:

	char pad_2C8[0x228]; // 0x2c8(0x228)
	struct AGameState_PVPVE* GameState; // 0x4f0(0x08)
	char pad_4F8[0x18]; // 0x4f8(0x18)

	void UpdateQuestProgress(int64_t UpdateQuestId, char QuestState); // Function DFMGameHud.ContractPointIconViewController.UpdateQuestProgress // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CustomPolygonWidget
// Size: 0x228 (Inherited: 0x168)
class UCustomPolygonWidget : public UWidget {
public:

	struct FSlateBrush Brush; // 0x168(0x90)
	struct UMaterialInterface* Material; // 0x1f8(0x08)
	struct TArray<struct FVector2D> Points; // 0x200(0x10)
	bool UseMat; // 0x210(0x01)
	char pad_211[0x17]; // 0x211(0x17)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DamageHintStatWidget
// Size: 0x2a8 (Inherited: 0x298)
class UDamageHintStatWidget : public UUserWidget {
public:

	struct UTextBlock* TitleText; // 0x298(0x08)
	struct URichTextBlock* DataText; // 0x2a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DamageHintPopupWidget
// Size: 0x2a0 (Inherited: 0x298)
class UDamageHintPopupWidget : public UUserWidget {
public:

	struct URichTextBlock* DamageHintText; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DamageHudView
// Size: 0x3f0 (Inherited: 0x388)
class UDamageHudView : public UBaseUIView {
public:

	struct UCanvasPanel* RootCanvas; // 0x388(0x08)
	struct UClass* ViewTextClass; // 0x390(0x08)
	struct TArray<struct FDamageHudAnimData> AnimConfigData; // 0x398(0x10)
	bool bUseProcdualAnim; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	int32_t MaxShowTxtNum; // 0x3ac(0x04)
	struct TArray<struct UDamageHudViewTextItem*> AllUIItems; // 0x3b0(0x10)
	char pad_3C0[0x30]; // 0x3c0(0x30)

	void OnReceiveDamage(struct AActor* Taker, struct FVector& WorldPos, float DamageValue, float ArmorReduceDamageValue, enum class EDamageShowType DamageShowType, enum class ECharacterPart HitPart); // Function DFMGameHud.DamageHudView.OnReceiveDamage // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DamageHudViewTextItem
// Size: 0x3d8 (Inherited: 0x388)
class UDamageHudViewTextItem : public UBaseUIView {
public:

	struct UTextBlock* ValueTxt; // 0x388(0x08)
	char pad_390[0x30]; // 0x390(0x30)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x3c0(0x10)
	struct UUMGSequencePlayer* SequencePlayer; // 0x3d0(0x08)

	void BPSetStyle(int32_t ColorType); // Function DFMGameHud.DamageHudViewTextItem.BPSetStyle // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DeadBodyIconViewController
// Size: 0x2a0 (Inherited: 0x290)
class UDeadBodyIconViewController : public UMapIconViewController {
public:

	struct FName BodyUin; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DeathCloseEyeScreenEffectHUD
// Size: 0x3b0 (Inherited: 0x388)
class UDeathCloseEyeScreenEffectHUD : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	float CloseEyeBeginDelay; // 0x390(0x04)
	float CloseEyeBlendInTime; // 0x394(0x04)
	float CloseEyeDurationTime; // 0x398(0x04)
	float CloseEyeBlendOutTime; // 0x39c(0x04)
	struct FName BlurEffectName; // 0x3a0(0x08)
	char pad_3A8[0x8]; // 0x3a8(0x08)

	void RemoveBlurEffect(); // Function DFMGameHud.DeathCloseEyeScreenEffectHUD.RemoveBlurEffect // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DeathDamageInfoDetailItem
// Size: 0x2b8 (Inherited: 0x298)
class UDeathDamageInfoDetailItem : public UUserWidget {
public:

	struct UTextBlock* FirstTextBlock; // 0x298(0x08)
	struct UTextBlock* SecondTextBlock; // 0x2a0(0x08)
	struct UTextBlock* ExtraInfoTextBlock; // 0x2a8(0x08)
	struct UCanvasPanel* LastDamagePanel; // 0x2b0(0x08)

	void CallBPSetType(bool bLastDamage); // Function DFMGameHud.DeathDamageInfoDetailItem.CallBPSetType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DeathDamageInfoPanel
// Size: 0x550 (Inherited: 0x388)
class UDeathDamageInfoPanel : public UBaseUIView {
public:

	struct UButton* CloseBtn; // 0x388(0x08)
	struct URichTextBlock* CloseRemainTimeTips; // 0x390(0x08)
	struct UTextBlock* CloseRemainTimeTxt; // 0x398(0x08)
	struct UDFScrollBox* DamageInfosScrollBox; // 0x3a0(0x08)
	char pad_3A8[0x1a8]; // 0x3a8(0x1a8)

	int32_t OnDamageInfosScrollBoxGetItemCount(); // Function DFMGameHud.DeathDamageInfoPanel.OnDamageInfosScrollBoxGetItemCount // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DeathDamageInfoViewNew
// Size: 0x558 (Inherited: 0x550)
class UDeathDamageInfoViewNew : public ULuaUIBaseView {
public:

	struct UDeathDamageInfoViewNew* WBP_DeathDamageInfoViewNew; // 0x550(0x08)

	void OpenDeathInfoView(); // Function DFMGameHud.DeathDamageInfoViewNew.OpenDeathInfoView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DeathDamageInfoCharacterBodyViewNew
// Size: 0x550 (Inherited: 0x550)
class UDeathDamageInfoCharacterBodyViewNew : public ULuaUIBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DeathDamageInfoDamageDetailNew
// Size: 0x550 (Inherited: 0x550)
class UDeathDamageInfoDamageDetailNew : public ULuaUIBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DeathDamageInfoDetailListView
// Size: 0x550 (Inherited: 0x550)
class UDeathDamageInfoDetailListView : public ULuaUIBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DeployPointsPanel
// Size: 0x688 (Inherited: 0x5a8)
class UDeployPointsPanel : public ULuaUIHudBaseView {
public:

	struct TMap<struct FName, struct FMarkerPool> MarkerUsingPool; // 0x5a8(0x50)
	struct TMap<struct FName, struct FMarkerPool> MarkerNotUsePool; // 0x5f8(0x50)
	char pad_648[0x8]; // 0x648(0x08)
	float AimCheckDistance; // 0x650(0x04)
	float AimCheckDistanceWhenZooming; // 0x654(0x04)
	float AimRadialDistance; // 0x658(0x04)
	float UpdateCharacterInterval; // 0x65c(0x04)
	float LowFrequencyUpdateInterval; // 0x660(0x04)
	float MiddleFrequencyUpdateInterval; // 0x664(0x04)
	struct TArray<struct ACHARACTER*> OutCharacterArray; // 0x668(0x10)
	char pad_678[0x10]; // 0x678(0x10)

	void UnInitView(); // Function DFMGameHud.DeployPointsPanel.UnInitView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFCodedLockView
// Size: 0x430 (Inherited: 0x388)
class UDFCodedLockView : public UBaseUIView {
public:

	struct UDFTextBlock* DFTextBlock_Tips; // 0x388(0x08)
	struct UDFHDKeyIconBoxTextWidget* WBP_CommonKeyIconBoxText; // 0x390(0x08)
	struct UDFTipsAnchor* wtTipsAnchor; // 0x398(0x08)
	struct UUserWidget* wtCommonCheckInstruction; // 0x3a0(0x08)
	struct UWidgetAnimation* Anima_in; // 0x3a8(0x08)
	struct UWidgetAnimation* Anima_out; // 0x3b0(0x08)
	struct UWidgetAnimation* Anima_wrong; // 0x3b8(0x08)
	struct AInteractor_CodedLock* CodedLock; // 0x3c0(0x08)
	struct AInventoryPickup_OpenBox* CachedSafeBox; // 0x3c8(0x08)
	char pad_3D0[0x8]; // 0x3d0(0x08)
	struct TArray<int32_t> PwdDigits; // 0x3d8(0x10)
	char pad_3E8[0x4]; // 0x3e8(0x04)
	float ErrorCooldownTime; // 0x3ec(0x04)
	struct FName HudName; // 0x3f0(0x08)
	char pad_3F8[0x38]; // 0x3f8(0x38)

	void OnNumBtnClick(int32_t Num); // Function DFMGameHud.DFCodedLockView.OnNumBtnClick // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFCommonCancelBtnView
// Size: 0x390 (Inherited: 0x388)
class UDFCommonCancelBtnView : public UBaseUIView {
public:

	struct UMobileDraggableButton* CancelButton; // 0x388(0x08)

	void OnCancelButtonClk(); // Function DFMGameHud.DFCommonCancelBtnView.OnCancelButtonClk // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFCommonHUDScreenMutex
// Size: 0x98 (Inherited: 0x30)
class UDFCommonHUDScreenMutex : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnMutexChanged[0x10]; // 0x30(0x10)
	struct FName MutexName; // 0x40(0x08)
	struct UDataTableSystemManagerBase* MutexRegisterTableManager; // 0x48(0x08)
	struct FMutexQueueItem CurrentHolder; // 0x50(0x30)
	struct TArray<struct FMutexQueueItem> MutexWaitingQueue; // 0x80(0x10)
	uint64_t LocalPlayerUin; // 0x90(0x08)

	void TickMutex(float DeltaTime); // Function DFMGameHud.DFCommonHUDScreenMutex.TickMutex // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HUDMutexHDEventTipsDataTableManager
// Size: 0x40 (Inherited: 0x38)
class UHUDMutexHDEventTipsDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HUDMutexMiniMapBottomDataTableManager
// Size: 0x40 (Inherited: 0x38)
class UHUDMutexMiniMapBottomDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFCommonLineWidget
// Size: 0x2e0 (Inherited: 0x298)
class UDFCommonLineWidget : public UUserWidget {
public:

	struct UCanvasPanel* MainRoot; // 0x298(0x08)
	struct UHorizontalBox* ArrowRoot; // 0x2a0(0x08)
	struct UCanvasPanel* MovableRoot; // 0x2a8(0x08)
	struct UImage* Arrow; // 0x2b0(0x08)
	float LineWidth; // 0x2b8(0x04)
	float LineOffsetToStopPoint; // 0x2bc(0x04)
	/*struct FDelegate*/char OnGetStartPosition[0x10]; // 0x2c0(0x10)
	/*struct FDelegate*/char OnGetStopPosition[0x10]; // 0x2d0(0x10)

	void UpdatePosition(); // Function DFMGameHud.DFCommonLineWidget.UpdatePosition // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFCountdownView
// Size: 0x440 (Inherited: 0x388)
class UDFCountdownView : public UBaseUIView {
public:

	char pad_388[0x30]; // 0x388(0x30)
	struct UCanvasPanel* Event_CanvasPanel; // 0x3b8(0x08)
	struct UCanvasPanel* TenSecondsExit_CanvasPanel; // 0x3c0(0x08)
	struct UWidgetAnimation* Anim_FinalCutDownNum_loop; // 0x3c8(0x08)
	struct UWidgetAnimation* Anim_FinalCutDown_in; // 0x3d0(0x08)
	struct UWidgetAnimation* Anim_FinalCutDown_out; // 0x3d8(0x08)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct UTextBlock* Event_TimeText; // 0x3e8(0x08)
	struct UTextBlock* TenSecondsExit_TimeText; // 0x3f0(0x08)
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct UTextBlock* Event_TitleText; // 0x400(0x08)
	struct UTextBlock* TenSecondsExit_TitleText; // 0x408(0x08)
	char pad_410[0x18]; // 0x410(0x18)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x428(0x08)
	struct FName MutexRegName; // 0x430(0x08)
	bool bGotMutex; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)

	void UpdateColorView(int32_t InCurCountdownTime); // Function DFMGameHud.DFCountdownView.UpdateColorView // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFFixedWeaponBarHUD
// Size: 0x3f8 (Inherited: 0x2d8)
class UDFFixedWeaponBarHUD : public UDFUserWidgetBase {
public:

	struct UDFProgressBar* AmmoProcessBarWidget; // 0x2d8(0x08)
	struct UDFRichTextBlock* AmmoNumWidget; // 0x2e0(0x08)
	struct UDFProgressBar* OverHeatProcessBarWidget; // 0x2e8(0x08)
	struct UDFRadialImage* ProcessTipsBarWidget; // 0x2f0(0x08)
	struct UUserWidget* ProcessTipWidget; // 0x2f8(0x08)
	struct UWidgetAnimation* CoolDownInAnim; // 0x300(0x08)
	struct UWidgetAnimation* CoolDownOutAnim; // 0x308(0x08)
	struct UWidgetAnimation* ChangeclipInAnim; // 0x310(0x08)
	struct UWidgetAnimation* ChangeclipoutAnim; // 0x318(0x08)
	struct TMap<int32_t, struct FLinearColor> OverHeatMap; // 0x320(0x50)
	struct TMap<float, int32_t> OverHeatLevelMap; // 0x370(0x50)
	int32_t CoolDownLevel; // 0x3c0(0x04)
	float CoolDownOverHeat; // 0x3c4(0x04)
	char pad_3C8[0x10]; // 0x3c8(0x10)
	struct TWeakObjectPtr<struct ADFMSceneWeapon> SenceWeapon; // 0x3d8(0x08)
	struct TWeakObjectPtr<struct UDFMFixedWeaponCommonView> CommonView; // 0x3e0(0x08)
	bool IsOverHeat; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UFunction* Func_SetType; // 0x3f0(0x08)

	void SetLevelColor(int32_t InLevel); // Function DFMGameHud.DFFixedWeaponBarHUD.SetLevelColor // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDActionCommonProgressBar
// Size: 0x2c8 (Inherited: 0x298)
class UDFHDActionCommonProgressBar : public UUserWidget {
public:

	struct UTextBlock* Action; // 0x298(0x08)
	struct FName ActionName; // 0x2a0(0x08)
	struct UTextBlock* ElapseTimeText; // 0x2a8(0x08)
	struct FName ElapseTimeTextName; // 0x2b0(0x08)
	struct UProgressBar* Bar; // 0x2b8(0x08)
	struct FName BarName; // 0x2c0(0x08)

	void SetActionName(struct FText InActionName); // Function DFMGameHud.DFHDActionCommonProgressBar.SetActionName // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDActionTipsView
// Size: 0x3d8 (Inherited: 0x388)
class UDFHDActionTipsView : public UBaseUIView {
public:

	struct UHDKeyIconBoxWidget* WBP_CommonKeyIconBox; // 0x388(0x08)
	struct UTextBlock* TipsText; // 0x390(0x08)
	struct UWidgetAnimation* Anim_Out; // 0x398(0x08)
	float KeyIconHeight; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct FTimerHandle AnimOutEndTimer; // 0x3a8(0x08)
	struct FName CurrShowActionOrAxisName; // 0x3b0(0x08)
	struct FName CurWantShowLongPressProgActionOrAxisName; // 0x3b8(0x08)
	struct TArray<struct FHDActionTips> ActionTipsStack; // 0x3c0(0x10)
	int32_t NextShowAnimType; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)

	void OnDFHDActionTipsUpdatePressedProgress(struct FName ActionOrAxisName, float Perc); // Function DFMGameHud.DFHDActionTipsView.OnDFHDActionTipsUpdatePressedProgress // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDBloodBarBase
// Size: 0x298 (Inherited: 0x298)
class UDFHDBloodBarBase : public UUserWidget {
public:


	void BPSetStyle(int32_t BloodColorType, bool bHeal); // Function DFMGameHud.DFHDBloodBarBase.BPSetStyle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDGMAimingDebugView
// Size: 0x5e8 (Inherited: 0x550)
class UDFHDGMAimingDebugView : public ULuaUIBaseView {
public:

	struct UWidget* OffsetPaintArea; // 0x550(0x08)
	struct UTextBlock* MaxDelta; // 0x558(0x08)
	bool bRecordNonZero; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float RecordPrecision; // 0x564(0x04)
	int32_t OffsetRecordFrames; // 0x568(0x04)
	char pad_56C[0x38]; // 0x56c(0x38)
	float OffsetLineThickness; // 0x5a4(0x04)
	char pad_5A8[0x40]; // 0x5a8(0x40)

	void ResetRecord(); // Function DFMGameHud.DFHDGMAimingDebugView.ResetRecord // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDInteractorExposeItem_Detail
// Size: 0x2a0 (Inherited: 0x298)
class UDFHDInteractorExposeItem_Detail : public UUserWidget {
public:

	struct AActor* CachedActor; // 0x298(0x08)

	void BP_StopInAni(); // Function DFMGameHud.DFHDInteractorExposeItem_Detail.BP_StopInAni // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDInteractorMarkerView
// Size: 0x410 (Inherited: 0x388)
class UDFHDInteractorMarkerView : public UBaseUIView {
public:

	struct UUserWidget* WBP_InteractTips_Marker_PC; // 0x388(0x08)
	struct UHDKeyIconBoxWidget* WBP_CommonKeyIconBox; // 0x390(0x08)
	struct URichTextBlock* OperationText; // 0x398(0x08)
	struct UHorizontalBox* ArrowRoot; // 0x3a0(0x08)
	struct FName ArrowRootName; // 0x3a8(0x08)
	struct UTextBlock* DistTextBlock; // 0x3b0(0x08)
	struct FName DistTextBlockName; // 0x3b8(0x08)
	float ArrowLineLengthScale; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct UWidgetAnimation* Anim_In; // 0x3c8(0x08)
	struct UWidgetAnimation* Anim_Out; // 0x3d0(0x08)
	struct ADFMPlayerController* LocalPlayerController; // 0x3d8(0x08)
	struct ADFMCharacter* FocusDFMCharacter; // 0x3e0(0x08)
	struct ADFMMarkerManager* MarkerManager; // 0x3e8(0x08)
	char pad_3F0[0x18]; // 0x3f0(0x18)
	bool bThisViewShouldShow_NOTWantToUseAbusedGameHUDSate; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)

	void UpdateUI(struct FString Name, int32_t Distance, int32_t KeyTipsType, struct FVector2D MarkerPosition); // Function DFMGameHud.DFHDInteractorMarkerView.UpdateUI // (Final|Native|Private|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDInteractorMissionItem
// Size: 0x298 (Inherited: 0x298)
class UDFHDInteractorMissionItem : public UUserWidget {
public:


	void BP_ShowMissionType(int32_t InMissionType); // Function DFMGameHud.DFHDInteractorMissionItem.BP_ShowMissionType // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDInteractorMissionItem_Detail
// Size: 0x2b0 (Inherited: 0x298)
class UDFHDInteractorMissionItem_Detail : public UUserWidget {
public:

	struct UTextBlock* DescText; // 0x298(0x08)
	struct FName DescTextName; // 0x2a0(0x08)
	struct AActor* CachedActor; // 0x2a8(0x08)

	void BP_StopInAni(); // Function DFMGameHud.DFHDInteractorMissionItem_Detail.BP_StopInAni // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDInteractorNameNumItem
// Size: 0x2e8 (Inherited: 0x298)
class UDFHDInteractorNameNumItem : public UUserWidget {
public:

	struct UTextBlock* Name; // 0x298(0x08)
	struct FName NameName; // 0x2a0(0x08)
	struct UTextBlock* Num; // 0x2a8(0x08)
	struct FName NumName; // 0x2b0(0x08)
	struct TArray<struct FLinearColor> QualityColorArray; // 0x2b8(0x10)
	struct FLinearColor NotSearched; // 0x2c8(0x10)
	struct FLinearColor AlreadySearched; // 0x2d8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDInteractorPanelItem
// Size: 0x608 (Inherited: 0x298)
class UDFHDInteractorPanelItem : public UUserWidget {
public:

	struct UWidget* SimpleView; // 0x298(0x08)
	struct FName SimpleViewName; // 0x2a0(0x08)
	struct UDFHDInteractorMissionItem* MissionItem; // 0x2a8(0x08)
	struct FName MissionItemName; // 0x2b0(0x08)
	struct UDFHDInteractorZoomItem* ZoomItem1; // 0x2b8(0x08)
	struct FName ZoomItem1Name; // 0x2c0(0x08)
	struct UDFHDInteractorZoomItem* ZoomItem2; // 0x2c8(0x08)
	struct FName ZoomItem2Name; // 0x2d0(0x08)
	struct UUserWidget* InteractDistMarker; // 0x2d8(0x08)
	struct FName InteractDistMarkerName; // 0x2e0(0x08)
	struct UHorizontalBox* ArrowMarker; // 0x2e8(0x08)
	struct FName ArrowMarkerName; // 0x2f0(0x08)
	struct UDFTextBlock* DistText; // 0x2f8(0x08)
	struct FName DistTextName; // 0x300(0x08)
	struct UImage* LockIcon; // 0x308(0x08)
	struct FName LockIconName; // 0x310(0x08)
	struct USizeBox* ItemIconSizeBox; // 0x318(0x08)
	struct FName ItemIconSizeBoxName; // 0x320(0x08)
	struct UImage* ItemIcon; // 0x328(0x08)
	struct FName ItemIconName; // 0x330(0x08)
	struct UDFHDInteractorNameNumItem* NameNumItem; // 0x338(0x08)
	struct FName NameNumItemName; // 0x340(0x08)
	struct UWidget* DetailView; // 0x348(0x08)
	struct FName DetailViewName; // 0x350(0x08)
	struct UDFHDInteractorMissionItem_Detail* MissionItem_Detail; // 0x358(0x08)
	struct FName MissionItemName_Detail; // 0x360(0x08)
	struct UDFHDInteractorExposeItem_Detail* ExposeItem_Detail; // 0x368(0x08)
	struct FName ExposeItemName_Detail; // 0x370(0x08)
	struct UDFMCommonQuality* QualityItem; // 0x378(0x08)
	struct FName QualityItemName; // 0x380(0x08)
	struct UDFMCommonIconImage* IconImageItem; // 0x388(0x08)
	struct FName IconImageItemName; // 0x390(0x08)
	struct UDFHDInteractorSpaceItem* SpaceItem; // 0x398(0x08)
	struct FName SpaceItemName; // 0x3a0(0x08)
	struct UTextBlock* ItemNameText; // 0x3a8(0x08)
	struct FName ItemNameTextName; // 0x3b0(0x08)
	struct UTextBlock* ItemNumText; // 0x3b8(0x08)
	struct FName ItemNumTextName; // 0x3c0(0x08)
	struct UTextBlock* ItemDescText; // 0x3c8(0x08)
	struct FName ItemDescTextName; // 0x3d0(0x08)
	struct UClass* DescTextBP; // 0x3d8(0x08)
	struct UDFHDInteractorPanelItem_DescText* DescText; // 0x3e0(0x08)
	struct FName DescTextName; // 0x3e8(0x08)
	struct UPanelWidget* DescTextParent; // 0x3f0(0x08)
	struct FName DescTextParentName; // 0x3f8(0x08)
	struct UDFHDInteractorZoomItem* ZoomItem1_Detail; // 0x400(0x08)
	struct FName ZoomItem1Name_Detail; // 0x408(0x08)
	struct UDFHDInteractorZoomItem* ZoomItem2_Detail; // 0x410(0x08)
	struct FName ZoomItem2Name_Detail; // 0x418(0x08)
	struct UDFHDInteractorZoomItem* ZoomItemMark_Detail; // 0x420(0x08)
	struct FName ZoomItemMarkName_Detail; // 0x428(0x08)
	struct UVerticalBox* DetailVerticalBox; // 0x430(0x08)
	struct FName DetailVerticalBoxName; // 0x438(0x08)
	float DetailVerticalBoxY; // 0x440(0x04)
	float DetailVerticalBoxYWithZoom2; // 0x444(0x04)
	struct UImage* WhiteDot; // 0x448(0x08)
	struct FName WhiteDotName; // 0x450(0x08)
	struct FDFHDInteractHUDContext HUDContext; // 0x458(0x150)
	struct FInteractableProxy CachedHUDInteractableProxy; // 0x5a8(0x10)
	struct FInteractableProxy CachedWhiteDotInteractableProxy; // 0x5b8(0x10)
	int32_t ShowType; // 0x5c8(0x04)
	char pad_5CC[0xc]; // 0x5cc(0x0c)
	struct AActor* CurrentWeaponForIcon; // 0x5d8(0x08)
	struct UGPModularWeaponDesc* WeaponDesc; // 0x5e0(0x08)
	char pad_5E8[0x8]; // 0x5e8(0x08)
	struct AActor* CurrentDetailWeaponForIcon; // 0x5f0(0x08)
	struct UGPModularWeaponDesc* DetailWeaponDesc; // 0x5f8(0x08)
	char pad_600[0x8]; // 0x600(0x08)

	void OnSwitchAniEnd(); // Function DFMGameHud.DFHDInteractorPanelItem.OnSwitchAniEnd // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDInteractorPanelItem_DescText
// Size: 0x5b0 (Inherited: 0x5a8)
class UDFHDInteractorPanelItem_DescText : public ULuaUIHudBaseView {
public:

	struct UDFHDInteractorPanelItem* CachedPanelItem; // 0x5a8(0x08)

	void SetLongWeapon(bool InbLong); // Function DFMGameHud.DFHDInteractorPanelItem_DescText.SetLongWeapon // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDInteractorSpaceItem
// Size: 0x298 (Inherited: 0x298)
class UDFHDInteractorSpaceItem : public UUserWidget {
public:


	void BP_ShowGridLayout(int32_t InWidth, int32_t InHeight, bool InbBagIsEnough); // Function DFMGameHud.DFHDInteractorSpaceItem.BP_ShowGridLayout // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDInteractorView_CarryBody
// Size: 0x388 (Inherited: 0x388)
class UDFHDInteractorView_CarryBody : public UBaseUIView {
public:


	void OnRefreshCarryBodyPanel(int32_t Type); // Function DFMGameHud.DFHDInteractorView_CarryBody.OnRefreshCarryBodyPanel // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDInteractorZoomItem
// Size: 0x2d8 (Inherited: 0x298)
class UDFHDInteractorZoomItem : public UUserWidget {
public:

	struct UTextBlock* NeedText; // 0x298(0x08)
	struct FName NeedTextName; // 0x2a0(0x08)
	struct UHDKeyIconBoxWidget* KeyIcon; // 0x2a8(0x08)
	struct FName KeyIconName; // 0x2b0(0x08)
	struct UDFRichTextBlock* ZoomText; // 0x2b8(0x08)
	struct FName ZoomTextName; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct UHDKeyIconBoxWidget* KeyIconBox; // 0x2d0(0x08)

	void BP_PlayPressAniWithSpeed(int32_t InState); // Function DFMGameHud.DFHDInteractorZoomItem.BP_PlayPressAniWithSpeed // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDKeyIconBoxTextWidget
// Size: 0x558 (Inherited: 0x550)
class UDFHDKeyIconBoxTextWidget : public ULuaUIBaseView {
public:

	struct UHDKeyIconBoxWidget* WBP_CommonKeyIconBox; // 0x550(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDPerformanceStatus
// Size: 0x4b8 (Inherited: 0x388)
class UDFHDPerformanceStatus : public UBaseUIView {
public:

	struct UDFCanvasPanel* DFCanvasPanel_Settable; // 0x388(0x08)
	struct UDFRichTextBlock* _wtTemperature; // 0x390(0x08)
	struct UTextBlock* _wtFPSText; // 0x398(0x08)
	struct UTextBlock* _wtPingText; // 0x3a0(0x08)
	struct UTextBlock* _wtLossText_2; // 0x3a8(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_Unsettable; // 0x3b0(0x08)
	struct UDFImage* wtSignalImg; // 0x3b8(0x08)
	float UpdateInterval_Quick; // 0x3c0(0x04)
	float UpdateInterval_Slow; // 0x3c4(0x04)
	float BadNetTips_Ping_Warning; // 0x3c8(0x04)
	float BadNetTips_Ping_Poor; // 0x3cc(0x04)
	struct FLinearColor BadNetTipsClr_Warning; // 0x3d0(0x10)
	struct FLinearColor BadNetTipsClr_Poor; // 0x3e0(0x10)
	struct FText Text_Temperature; // 0x3f0(0x18)
	struct FText Text_TemperatureNormal; // 0x408(0x18)
	struct FText Text_TemperatureOverheat; // 0x420(0x18)
	struct FText Text_FrameRate; // 0x438(0x18)
	struct FText Text_Ping; // 0x450(0x18)
	struct FText Text_Loss; // 0x468(0x18)
	float TemperatureHideThreadhold; // 0x480(0x04)
	float LastUpdatePast_Quick; // 0x484(0x04)
	float LastUpdatePast_Slow; // 0x488(0x04)
	char pad_48C[0x2c]; // 0x48c(0x2c)

	void UpdateTemperature(); // Function DFMGameHud.DFHDPerformanceStatus.UpdateTemperature // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDSettingsInputPanel
// Size: 0xb98 (Inherited: 0x550)
class UDFHDSettingsInputPanel : public ULuaUIBaseView {
public:

	struct UBaseKeySettingManager* KeySettingManager; // 0x550(0x08)
	bool bSupportModifierKeys; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	/*struct FDelegate*/char OnEndKeySelecting[0x10]; // 0x55c(0x10)
	/*struct FDelegate*/char NotifyUpdateHoveringRow[0x10]; // 0x56c(0x10)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct TArray<struct FKeyEvent> SelectingDownKeys; // 0x580(0x10)
	struct FKey SelectedKey; // 0x590(0x18)
	struct TArray<bool> SelectedHasModifierKeys; // 0x5a8(0x10)
	struct FPointerEvent SelectingDownMouseBtn; // 0x5b8(0x70)
	bool bIsSelectingKey; // 0x628(0x01)
	char pad_629[0x7]; // 0x629(0x07)
	struct FKeyMappingsDataTableRow SelectingSettingTableRow; // 0x630(0x138)
	int32_t SelectingKeySN; // 0x768(0x04)
	bool bIsHoveringKey; // 0x76c(0x01)
	char pad_76D[0x3]; // 0x76d(0x03)
	struct FKeyMappingsDataTableRow HoveringSettingTableRow; // 0x770(0x138)
	int32_t HoveringKeySN; // 0x8a8(0x04)
	char pad_8AC[0x4]; // 0x8ac(0x04)
	struct FKeyMappingsDataTableRow ConflictImportantRow; // 0x8b0(0x138)
	struct TArray<struct FKeyMappingsDataTableRow> ConflictRows; // 0x9e8(0x10)
	int32_t ConflictRowKeySN; // 0x9f8(0x04)
	char pad_9FC[0x4]; // 0x9fc(0x04)
	struct FKeyMappingsDataTableRow CachedRow; // 0xa00(0x138)
	bool bForBHD; // 0xb38(0x01)
	char pad_B39[0x7]; // 0xb39(0x07)
	struct TArray<int32_t> KeyFunctionTypeListInThisPanel; // 0xb40(0x10)
	struct FVector2D LastMouseLocation; // 0xb50(0x08)
	struct FTimerHandle CheckMouseMovementTimerHandle; // 0xb58(0x08)
	float MouseMovementCheckInterval; // 0xb60(0x04)
	struct FVector2D MouseMovementThresholdPerSecond; // 0xb64(0x08)
	struct FVector2D AccMouseMovement; // 0xb6c(0x08)
	float AccMouseMovementTrigger; // 0xb74(0x04)
	struct FKey SelectedMouseAxis; // 0xb78(0x18)
	bool IsPositiveInSelectedAxis; // 0xb90(0x01)
	char pad_B91[0x7]; // 0xb91(0x07)

	void UnbindHoveringKey(); // Function DFMGameHud.DFHDSettingsInputPanel.UnbindHoveringKey // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDSettingsVideoPanel
// Size: 0x550 (Inherited: 0x550)
class UDFHDSettingsVideoPanel : public ULuaUIBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDSkillItem
// Size: 0x3d0 (Inherited: 0x388)
class UDFHDSkillItem : public UBaseUIView {
public:

	struct UGPSkillEntity* currentSkil; // 0x388(0x08)
	struct UUserWidget* WBP_ArmsHolding; // 0x390(0x08)
	struct UUserWidget* WBP_ArmsLoading; // 0x398(0x08)
	struct UUserWidget* WBP_ArmsLoadingFinish; // 0x3a0(0x08)
	struct UUserWidget* WBP_ArmsStatus_Disable; // 0x3a8(0x08)
	struct UTextBlock* CooldownText; // 0x3b0(0x08)
	struct UImage* CooldownProcess; // 0x3b8(0x08)
	struct UUserWidget* KeyIcon; // 0x3c0(0x08)
	char pad_3C8[0x8]; // 0x3c8(0x08)

	void OnSkillButtonReleased(); // Function DFMGameHud.DFHDSkillItem.OnSkillButtonReleased // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDTeamPlayerInfoView
// Size: 0x390 (Inherited: 0x388)
class UDFHDTeamPlayerInfoView : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDVehicleSkillButtonWidget
// Size: 0x3a0 (Inherited: 0x298)
class UDFHDVehicleSkillButtonWidget : public UUserWidget {
public:

	struct UWidgetAnimation* Anim_CoolDownFinished; // 0x298(0x08)
	struct UWidget* SkillCountRoot; // 0x2a0(0x08)
	struct UTextBlock* CurrentSkilCountText; // 0x2a8(0x08)
	struct UTextBlock* MaxSkillCountText; // 0x2b0(0x08)
	struct UTextBlock* TimeText; // 0x2b8(0x08)
	struct UUserWidget* WaitIconWidget; // 0x2c0(0x08)
	struct UDFMImage* SkillIcon; // 0x2c8(0x08)
	char pad_2D0[0x90]; // 0x2d0(0x90)
	struct UWidget* KeyWidget; // 0x360(0x08)
	struct UWidget* DisableWidget; // 0x368(0x08)
	struct UDFProgressBar* CoolDownProgressBar; // 0x370(0x08)
	struct UWidget* RechargeRootWidget; // 0x378(0x08)
	struct UDFProgressBar* RechargeProgressBar; // 0x380(0x08)
	struct UDFProgressBar* RechargeIconProgressBar; // 0x388(0x08)
	struct UDFMVehicleSkillInstance* OwnVehicleSkillInstance; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)

	void OnTickDelegate(); // Function DFMGameHud.DFHDVehicleSkillButtonWidget.OnTickDelegate // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHitScreenEffectWithDir
// Size: 0x2a8 (Inherited: 0x298)
class UDFHitScreenEffectWithDir : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UClass* HitEffectDirClass; // 0x2a0(0x08)

	void BP_OnActive(); // Function DFMGameHud.DFHitScreenEffectWithDir.BP_OnActive // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFInteractorExposeTipsItem
// Size: 0x550 (Inherited: 0x550)
class UDFInteractorExposeTipsItem : public ULuaUIBaseView {
public:


	void BP_PlayAni(int32_t InAniType, bool InbPlay); // Function DFMGameHud.DFInteractorExposeTipsItem.BP_PlayAni // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFInteractorMissionTipsItem
// Size: 0x550 (Inherited: 0x550)
class UDFInteractorMissionTipsItem : public ULuaUIBaseView {
public:


	void BP_SetMissionType(int32_t InType); // Function DFMGameHud.DFInteractorMissionTipsItem.BP_SetMissionType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFInteractorPCInfoView
// Size: 0x438 (Inherited: 0x388)
class UDFInteractorPCInfoView : public UBaseUIView {
public:

	struct UButton* CloseBtn; // 0x388(0x08)
	struct UDFPCMorseCodeView* MorseCodeView; // 0x390(0x08)
	struct FName MorseCodeViewName; // 0x398(0x08)
	struct UDFPCOperationsView* OperationsView; // 0x3a0(0x08)
	struct FName OperationsViewName; // 0x3a8(0x08)
	float AutoDuration; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct AInteractor_HackPC* CachedPC; // 0x3b8(0x08)
	char pad_3C0[0x4]; // 0x3c0(0x04)
	float ForceRefreshInterval; // 0x3c4(0x04)
	char pad_3C8[0x40]; // 0x3c8(0x40)
	struct UDFHDKeyIconBoxTextWidget* ExitKeyIconBoxTextWidget; // 0x408(0x08)
	struct FName ExitKeyIconBoxTextWidgetName; // 0x410(0x08)
	bool bUseGameHudStateChanged; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	bool bOpenDelayDestroy; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float DelayDestroyWaitTime; // 0x424(0x04)
	char pad_428[0x8]; // 0x428(0x08)
	bool bIsReadyClear; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)

	void OnPCMorseCodeSuccess(bool bSuccess, struct AActor* InHackPC); // Function DFMGameHud.DFInteractorPCInfoView.OnPCMorseCodeSuccess // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFInteractorWishTipsItem
// Size: 0x550 (Inherited: 0x550)
class UDFInteractorWishTipsItem : public ULuaUIBaseView {
public:


	void BP_PlayAni(int32_t InAniType, bool InbPlay); // Function DFMGameHud.DFInteractorWishTipsItem.BP_PlayAni // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFKillerInfoCardViewKeyTips
// Size: 0x3a8 (Inherited: 0x388)
class UDFKillerInfoCardViewKeyTips : public UBaseUIView {
public:

	struct UDFHDKeyIconBoxTextWidget* KeyIconBoxReport; // 0x388(0x08)
	struct UDFHDKeyIconBoxTextWidget* KeyIconBoxSkip; // 0x390(0x08)
	struct FName KeyIconBoxReport_Name; // 0x398(0x08)
	struct FName KeyIconBoxSkip_Name; // 0x3a0(0x08)

	void InitSkip(struct FName Name); // Function DFMGameHud.DFKillerInfoCardViewKeyTips.InitSkip // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMAudioDebugView
// Size: 0x428 (Inherited: 0x388)
class UDFMAudioDebugView : public UBaseUIView {
public:

	struct AActor* CurrentSelectedActor; // 0x388(0x08)
	struct TMap<struct FString, struct ACHARACTER*> CharacterNameMap; // 0x390(0x50)
	struct FString CurrentSelectedActorName; // 0x3e0(0x10)
	struct FString CurrentFilterKeyWorldName; // 0x3f0(0x10)
	struct TArray<struct ACHARACTER*> NearByCharacterArray; // 0x400(0x10)
	struct URichTextBlock* EventHistoryTextBlock; // 0x410(0x08)
	struct UComboBoxString* CharacterComboBox; // 0x418(0x08)
	float NearbyCharacterCheckDistance; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)

	void UpdateDropdownList(); // Function DFMGameHud.DFMAudioDebugView.UpdateDropdownList // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.FirePointWidget
// Size: 0x2a8 (Inherited: 0x298)
class UFirePointWidget : public UUserWidget {
public:

	struct UImage* PointImage; // 0x298(0x08)
	struct UTextBlock* FirePriorityText; // 0x2a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMLoopFirePriorityDebugView
// Size: 0x638 (Inherited: 0x388)
class UDFMLoopFirePriorityDebugView : public UBaseUIView {
public:

	char pad_388[0xf0]; // 0x388(0xf0)
	struct UClass* DefaultFirePointWidgetClass; // 0x478(0x08)
	struct FLinearColor SelfPointColor; // 0x480(0x10)
	struct FLinearColor TeamPointColor; // 0x490(0x10)
	struct FLinearColor EnemyPointColor; // 0x4a0(0x10)
	struct FLinearColor P0Color; // 0x4b0(0x10)
	struct FLinearColor P1Color; // 0x4c0(0x10)
	struct FLinearColor P2Color; // 0x4d0(0x10)
	float radius; // 0x4e0(0x04)
	int32_t FirePointMaxNum; // 0x4e4(0x04)
	struct UCanvasPanel* FirePointWidgetCanvas; // 0x4e8(0x08)
	struct TArray<struct UFirePointWidget*> FirePointArray; // 0x4f0(0x10)
	struct UTextBlock* LogText; // 0x500(0x08)
	char pad_508[0xc0]; // 0x508(0xc0)
	struct UComboBoxString* ComboBoxString_Quality; // 0x5c8(0x08)
	struct USpinBox* SpinBox_P0Num; // 0x5d0(0x08)
	struct USpinBox* SpinBox_P1Num; // 0x5d8(0x08)
	struct USpinBox* SpinBox_FrontAngle; // 0x5e0(0x08)
	struct USpinBox* SpinBox_CircleBorder1; // 0x5e8(0x08)
	struct USpinBox* SpinBox_CircleBorder2; // 0x5f0(0x08)
	struct USpinBox* SpinBox_FNum; // 0x5f8(0x08)
	struct USpinBox* SpinBox_LNum; // 0x600(0x08)
	struct USpinBox* SpinBox_RNum; // 0x608(0x08)
	struct USpinBox* SpinBox_BNum; // 0x610(0x08)
	struct USpinBox* SpinBox_C1Num; // 0x618(0x08)
	struct USpinBox* SpinBox_C2Num; // 0x620(0x08)
	struct USpinBox* SpinBox_C3Num; // 0x628(0x08)
	struct UTextBlock* TextBlock_ConfigLog; // 0x630(0x08)

	void RefreshManagerConfig(); // Function DFMGameHud.DFMLoopFirePriorityDebugView.RefreshManagerConfig // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMAudioHDRDebugViewerItem
// Size: 0x320 (Inherited: 0x298)
class UDFMAudioHDRDebugViewerItem : public UUserWidget {
public:

	int32_t NumChannels; // 0x298(0x04)
	float MaxStateValue; // 0x29c(0x04)
	bool bBusActive; // 0x2a0(0x01)
	bool bCallBackBusActive; // 0x2a1(0x01)
	enum class EBusStateEnum StateEnum; // 0x2a2(0x01)
	char pad_2A3[0x1]; // 0x2a3(0x01)
	float ConfirmWaitTimeLeft; // 0x2a4(0x04)
	float TargetBusPriority; // 0x2a8(0x04)
	float CurrentBusPriority; // 0x2ac(0x04)
	float CurrentFadeInTime; // 0x2b0(0x04)
	float FadeInDelta; // 0x2b4(0x04)
	struct FString BusName; // 0x2b8(0x10)
	struct FString BusRTPCName; // 0x2c8(0x10)
	float StateThreshold; // 0x2d8(0x04)
	float StateConfirmTime; // 0x2dc(0x04)
	float InBusTime; // 0x2e0(0x04)
	float OutBusTime; // 0x2e4(0x04)
	float DefaultBusPriority; // 0x2e8(0x04)
	bool bEnableBusHDR; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct FLinearColor ActiveColor; // 0x2f0(0x10)
	struct FLinearColor InactiveColor; // 0x300(0x10)
	struct FLinearColor DisableColor; // 0x310(0x10)

	void UpdateView(); // Function DFMGameHud.DFMAudioHDRDebugViewerItem.UpdateView // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMAudioHDRDebugViewer
// Size: 0x300 (Inherited: 0x298)
class UDFMAudioHDRDebugViewer : public UUserWidget {
public:

	struct UClass* ItemWidgetClass; // 0x298(0x08)
	struct TMap<struct FString, struct UDFMAudioHDRDebugViewerItem*> BusWidgetItemMap; // 0x2a0(0x50)
	struct UVerticalBox* ItemList; // 0x2f0(0x08)
	char pad_2F8[0x8]; // 0x2f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMAudioPriorityDebugViewerItem
// Size: 0x368 (Inherited: 0x298)
class UDFMAudioPriorityDebugViewerItem : public UUserWidget {
public:

	struct FString EventName; // 0x298(0x10)
	char pad_2A8[0x58]; // 0x2a8(0x58)
	struct UTextBlock* NameText; // 0x300(0x08)
	struct UTextBlock* PriorityText; // 0x308(0x08)
	struct UTextBlock* LocationPriorityText; // 0x310(0x08)
	struct UTextBlock* FireDirPriorityText; // 0x318(0x08)
	struct UTextBlock* DistancePriorityText; // 0x320(0x08)
	struct UTextBlock* ReasonForNotPlayText; // 0x328(0x08)
	struct UTextBlock* AreaText; // 0x330(0x08)
	float TextLastTime; // 0x338(0x04)
	struct FLinearColor PlayColor; // 0x33c(0x10)
	struct FLinearColor NotPlayColor; // 0x34c(0x10)
	struct FVector2D CustomMarkerCircleScale; // 0x35c(0x08)
	char pad_364[0x4]; // 0x364(0x04)

	void OnTimeOut(); // Function DFMGameHud.DFMAudioPriorityDebugViewerItem.OnTimeOut // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMAudioPriorityDebugViewer
// Size: 0x358 (Inherited: 0x298)
class UDFMAudioPriorityDebugViewer : public UUserWidget {
public:

	struct TArray<struct FString> CurrentSelectedWeaponAudioTypes; // 0x298(0x10)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct UDFMAudioPriorityDebugViewerItem*> ActorPriorityItemMap; // 0x2a8(0x50)
	struct TMap<struct FString, struct FAudioTypeDebugArrayStruct> SelectionTypeMap; // 0x2f8(0x50)
	struct UClass* ItemClass; // 0x348(0x08)
	struct UCanvasPanel* ViewerPanel; // 0x350(0x08)

	void OnShowPriorityTypeChanged(struct FString SelectedType); // Function DFMGameHud.DFMAudioPriorityDebugViewer.OnShowPriorityTypeChanged // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMAudioTestEmitter
// Size: 0x448 (Inherited: 0x378)
class ADFMAudioTestEmitter : public AActor {
public:

	struct FString EmitterName; // 0x378(0x10)
	struct FString EmitterAudioType; // 0x388(0x10)
	struct FString PlayMode; // 0x398(0x10)
	float LoopInterval; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct FString MoveMode; // 0x3b0(0x10)
	float MoveSpeed; // 0x3c0(0x04)
	float CircularMoveRadius; // 0x3c4(0x04)
	bool bIsLoopPlaying; // 0x3c8(0x01)
	bool bIsMoving; // 0x3c9(0x01)
	char pad_3CA[0x6]; // 0x3ca(0x06)
	struct UGPAudioEventAsset* EventToPlay; // 0x3d0(0x08)
	bool bUseEventName; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct FString SpecificEventName; // 0x3e0(0x10)
	char pad_3F0[0x10]; // 0x3f0(0x10)
	struct UTextRenderComponent* NameTextComp; // 0x400(0x08)
	struct UStaticMeshComponent* AudioMeshComp; // 0x408(0x08)
	struct UStaticMeshComponent* OutlineComp; // 0x410(0x08)
	struct UGameAkComponent* GameAkComp; // 0x418(0x08)
	struct UMaterialInterface* OutLineGreen; // 0x420(0x08)
	struct UMaterialInterface* OutLineRed; // 0x428(0x08)
	struct UMaterialInstanceDynamic* OutLineGreenInsDynamic; // 0x430(0x08)
	struct UMaterialInstanceDynamic* OutLineRedInsDynamic; // 0x438(0x08)
	bool bShowOutline; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)

	void UpdatePlayMode(struct FString InPlayMode); // Function DFMGameHud.DFMAudioTestEmitter.UpdatePlayMode // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMAudioTestMaster
// Size: 0x548 (Inherited: 0x388)
class UDFMAudioTestMaster : public UBaseUIView {
public:

	struct ADFMAudioTestEmitter* CurrentSelectedEmitter; // 0x388(0x08)
	struct FString CurrentSelectedEmitterName; // 0x390(0x10)
	struct FString CurrentTypedName; // 0x3a0(0x10)
	struct FString CurrentSelectedAudioType; // 0x3b0(0x10)
	struct FString CurrentSelectedPlayMode; // 0x3c0(0x10)
	float CurrentLoopInterval; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct FString CurrentSelectedMoveMode; // 0x3d8(0x10)
	float CurrentMoveSpeed; // 0x3e8(0x04)
	float CurrentCircularMoveRadius; // 0x3ec(0x04)
	bool bUseEventName; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FString SpecificEventName; // 0x3f8(0x10)
	bool bCurrentIsFindingLocation; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct TArray<struct UGPAudioEventAsset*> LoadedAssetsCache; // 0x410(0x10)
	struct UComboBoxString* SelectEmitterCombo; // 0x420(0x08)
	struct UEditableTextBox* EmitterNameEditBox; // 0x428(0x08)
	struct UDFMAudioHDRDebugViewer* Debug_AudioHDRViewer; // 0x430(0x08)
	struct UDFMAudioPriorityDebugViewer* Debug_AudioPriorityDebugViewer; // 0x438(0x08)
	struct TMap<struct FString, struct ADFMAudioTestEmitter*> EmitterNameMap; // 0x440(0x50)
	int32_t DefaultNameCountNum; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct TMap<struct FString, struct FString> MenuBtnPanelMap; // 0x498(0x50)
	bool bShowGameAkDistance; // 0x4e8(0x01)
	bool bOnlyShowCharacter; // 0x4e9(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	float GameAkCheckDistanceM; // 0x4ec(0x04)
	struct TMap<struct FString, struct FSoftObjectPath> TypeAssetsMap; // 0x4f0(0x50)
	struct UClass* TestEmitterClass; // 0x540(0x08)

	void UpdateSelectedEmitterInfoView(); // Function DFMGameHud.DFMAudioTestMaster.UpdateSelectedEmitterInfoView // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMBaseUserWidget
// Size: 0x300 (Inherited: 0x298)
class UDFMBaseUserWidget : public UUserWidget {
public:

	struct TMap<struct FName, struct UWidgetAnimation*> AnimationsMap; // 0x298(0x50)
	char pad_2E8[0x10]; // 0x2e8(0x10)
	bool bAutoCollectAnimations; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)

	void Visible(); // Function DFMGameHud.DFMBaseUserWidget.Visible // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMBloodStripController
// Size: 0xc0 (Inherited: 0xb0)
class UDFMBloodStripController : public UBaseUIController {
public:

	struct UDFMBloodStripView* BloodStripView; // 0xb0(0x08)
	struct AActor* BindingBossActor; // 0xb8(0x08)

	void OnVehicleHealthUpdate(struct UDFMVehicleHealthComponent* TargetComponent, float NormalizedHpPercent); // Function DFMGameHud.DFMBloodStripController.OnVehicleHealthUpdate // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMBloodStripView
// Size: 0x398 (Inherited: 0x388)
class UDFMBloodStripView : public UBaseUIView {
public:

	struct UCanvasPanel* BloodStripPanel; // 0x388(0x08)
	struct UTextBlock* DescriptionText; // 0x390(0x08)

	void UpdateHpPercent(float Percent); // Function DFMGameHud.DFMBloodStripView.UpdateHpPercent // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMBowCrossHairBPView
// Size: 0x3d8 (Inherited: 0x3b8)
class UDFMBowCrossHairBPView : public UMobileGamePadView {
public:

	float TotalChargeTime; // 0x3b8(0x04)
	bool bIsCharging; // 0x3bc(0x01)
	char pad_3BD[0x1b]; // 0x3bd(0x1b)

	void OnSwitchZoomState(bool bFlag); // Function DFMGameHud.DFMBowCrossHairBPView.OnSwitchZoomState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCCTVView
// Size: 0x398 (Inherited: 0x388)
class UDFMCCTVView : public UBaseUIView {
public:

	struct FVector HeadExtent; // 0x388(0x0c)
	char pad_394[0x4]; // 0x394(0x04)

	void UpdateMonitorInfo(struct TArray<struct FViewCharacterInfo>& ViewCharacterInfos, struct FText& AreaName); // Function DFMGameHud.DFMCCTVView.UpdateMonitorInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonActionButtonView
// Size: 0x328 (Inherited: 0x298)
class UDFMCommonActionButtonView : public UUserWidget {
public:

	struct UImage* Image_Icon; // 0x298(0x08)
	struct UImage* Image_FX; // 0x2a0(0x08)
	struct UImage* Image_PressedCircle; // 0x2a8(0x08)
	struct UImage* Image_Background; // 0x2b0(0x08)
	struct UImage* Image_CircleBackground; // 0x2b8(0x08)
	struct UTextBlock* ActionName; // 0x2c0(0x08)
	bool bNeedFX; // 0x2c8(0x01)
	bool bUseDefaultIcon; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct UPaperSprite* DefaultIconImage; // 0x2d0(0x08)
	int32_t BackgroundImageType; // 0x2d8(0x04)
	struct FLinearColor PressedColor; // 0x2dc(0x10)
	struct FLinearColor NormalColor; // 0x2ec(0x10)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct TArray<struct FLinearColor> BackgroundImageColors; // 0x300(0x10)
	struct TArray<struct FLinearColor> CircleBackgroundColors; // 0x310(0x10)
	struct UButton* OwnerButton; // 0x320(0x08)

	void SetText(struct FText InText); // Function DFMGameHud.DFMCommonActionButtonView.SetText // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonBannerController
// Size: 0xc0 (Inherited: 0xb0)
class UDFMCommonBannerController : public UBaseUIController {
public:

	struct UDFMCommonBannerView* BannerView; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)

	void HideBanner(); // Function DFMGameHud.DFMCommonBannerController.HideBanner // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonBannerView
// Size: 0x390 (Inherited: 0x388)
class UDFMCommonBannerView : public UBaseUIView {
public:

	struct UDFRichTextBlock* BannerText; // 0x388(0x08)

	void SetBannerText(struct FText Text); // Function DFMGameHud.DFMCommonBannerView.SetBannerText // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonButtonIcon
// Size: 0x560 (Inherited: 0x550)
class UDFMCommonButtonIcon : public ULuaUIBaseView {
public:

	struct UDFCheckBox* Checkbox; // 0x550(0x08)
	char pad_558[0x8]; // 0x558(0x08)

	void BP_SetSelected(bool InSelected); // Function DFMGameHud.DFMCommonButtonIcon.BP_SetSelected // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonButtonInstruction
// Size: 0x558 (Inherited: 0x550)
class UDFMCommonButtonInstruction : public ULuaUIBaseView {
public:

	struct UCheckbox* Checkbox; // 0x550(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonButtonV2S1
// Size: 0x558 (Inherited: 0x550)
class UDFMCommonButtonV2S1 : public ULuaUIBaseView {
public:

	struct UButton* Button_Common; // 0x550(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonButtonV2S2
// Size: 0x558 (Inherited: 0x550)
class UDFMCommonButtonV2S2 : public ULuaUIBaseView {
public:

	struct UButton* Button_Common; // 0x550(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonButtonV3S1
// Size: 0x558 (Inherited: 0x550)
class UDFMCommonButtonV3S1 : public ULuaUIBaseView {
public:

	struct UButton* Button_Common; // 0x550(0x08)

	void BP_InitWidget(bool InShowIcon); // Function DFMGameHud.DFMCommonButtonV3S1.BP_InitWidget // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonCountdownView
// Size: 0x3f0 (Inherited: 0x388)
class UDFMCommonCountdownView : public UBaseUIView {
public:

	char pad_388[0x40]; // 0x388(0x40)
	struct UTextBlock* Event_TimeText; // 0x3c8(0x08)
	char pad_3D0[0x8]; // 0x3d0(0x08)
	struct UTextBlock* Event_TitleText; // 0x3d8(0x08)
	char pad_3E0[0x10]; // 0x3e0(0x10)

	void ShowCommonCountdown(struct FSOLCommonCountdownItem& CommonCountdownItem); // Function DFMGameHud.DFMCommonCountdownView.ShowCommonCountdown // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonKeyTipsView
// Size: 0x3c0 (Inherited: 0x388)
class UDFMCommonKeyTipsView : public UBaseUIView {
public:

	struct UUserWidget* WBP_ControllerKeyItem_Eexpression; // 0x388(0x08)
	struct UUserWidget* WBP_ControllerKeyItem_Bag; // 0x390(0x08)
	struct UUserWidget* WBP_ControllerKeyItem_Range; // 0x398(0x08)
	struct UUserWidget* WBP_ControllerKeyItem_AnalysisPanel; // 0x3a0(0x08)
	struct UUserWidget* WBP_ControllerKeyItem_Breath; // 0x3a8(0x08)
	struct UUserWidget* WBP_ControllerKeyItem_SwitchScope; // 0x3b0(0x08)
	struct UUserWidget* WBP_ControllerKeyItem_RangeFinder; // 0x3b8(0x08)

	void OnZoomStateChanged(bool ZoomState); // Function DFMGameHud.DFMCommonKeyTipsView.OnZoomStateChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonQTEButtonView
// Size: 0x298 (Inherited: 0x298)
class UDFMCommonQTEButtonView : public UUserWidget {
public:


	void PlayOutAnim(); // Function DFMGameHud.DFMCommonQTEButtonView.PlayOutAnim // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonIconImage
// Size: 0x558 (Inherited: 0x550)
class UDFMCommonIconImage : public ULuaUIBaseView {
public:

	struct UImage* wtMainIcon; // 0x550(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommonQuality
// Size: 0x560 (Inherited: 0x550)
class UDFMCommonQuality : public ULuaUIBaseView {
public:

	struct UImage* wtBottomLine; // 0x550(0x08)
	struct UImage* wtArrowIcon_2; // 0x558(0x08)

	void BP_SetQualityByType(int32_t InType); // Function DFMGameHud.DFMCommonQuality.BP_SetQualityByType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCountDownHUDView
// Size: 0x3f0 (Inherited: 0x390)
class UDFMCountDownHUDView : public UCommonHUDView {
public:

	int32_t FinalCountDownTime; // 0x390(0x04)
	int32_t EmergencyCountDownTime; // 0x394(0x04)
	int32_t SuperEmergencyCountDownTime; // 0x398(0x04)
	float FadeOutAnimTime; // 0x39c(0x04)
	struct UCanvasPanel* Event_CanvasPanel; // 0x3a0(0x08)
	struct UTextBlock* Event_TitleText; // 0x3a8(0x08)
	struct UTextBlock* Event_TimeText; // 0x3b0(0x08)
	struct UCanvasPanel* TenSecondsExit_CanvasPanel; // 0x3b8(0x08)
	struct UTextBlock* TenSecondsExit_TitleText; // 0x3c0(0x08)
	struct UTextBlock* TenSecondsExit_TimeText; // 0x3c8(0x08)
	char pad_3D0[0x1]; // 0x3d0(0x01)
	bool bWaitingExit; // 0x3d1(0x01)
	char pad_3D2[0x1e]; // 0x3d2(0x1e)

	void DoOneCountDown(int32_t TimeSeconds, bool InUseTenSecondsType, bool bPlayAudio); // Function DFMGameHud.DFMCountDownHUDView.DoOneCountDown // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCrossHairBPView
// Size: 0x3b8 (Inherited: 0x3b8)
class UDFMCrossHairBPView : public UMobileGamePadView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCrossHairBPItemBase
// Size: 0x2a0 (Inherited: 0x298)
class UDFMCrossHairBPItemBase : public UUserWidget {
public:

	float MinSpreadRadius; // 0x298(0x04)
	bool bScaleMinSpread; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCrossHairFeedback
// Size: 0x4c8 (Inherited: 0x3b8)
class UDFMCrossHairFeedback : public UMobileGamePadView {
public:

	float ShowInterval; // 0x3b8(0x04)
	enum class ECrosshairFeedbackTypes FeedbackType; // 0x3bc(0x01)
	bool IsDuringHitFeedBack; // 0x3bd(0x01)
	char pad_3BE[0x6]; // 0x3be(0x06)
	float AngleMin; // 0x3c4(0x04)
	float AngleMax; // 0x3c8(0x04)
	bool IsNeedMovePosition; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	float RollBackTime; // 0x3d0(0x04)
	float ReplaceTime; // 0x3d4(0x04)
	float ReplaceTimeForKill; // 0x3d8(0x04)
	float StartRollBackTime; // 0x3dc(0x04)
	char pad_3E0[0xc]; // 0x3e0(0x0c)
	float DelayTime; // 0x3ec(0x04)
	char pad_3F0[0x8]; // 0x3f0(0x08)
	struct AGPCharacter* OldCharacter; // 0x3f8(0x08)
	char pad_400[0x8]; // 0x400(0x08)
	struct UCanvasPanel* FeedBackPanel; // 0x408(0x08)
	char pad_410[0x8]; // 0x410(0x08)
	float ZoomInSwitchPlaceTypePercent; // 0x418(0x04)
	float ZoomOutSwitchPlaceTypePercent; // 0x41c(0x04)
	enum class EFeedbackAnimType FeedbackAnimType; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct TMap<enum class EFeedbackAnimType, struct FDFMCrossHairFeedbackWidgetAnimationConfig> FeedbackAnimMap; // 0x428(0x50)
	struct TMap<enum class EFeedbackAnimType, struct FString> FeedbackAudioMap; // 0x478(0x50)

	void PlayFeedbackAnimation(enum class EFeedbackAnimType AnimType); // Function DFMGameHud.DFMCrossHairFeedback.PlayFeedbackAnimation // (Native|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCrossHairViewDebugger
// Size: 0x3d8 (Inherited: 0x3b8)
class UDFMCrossHairViewDebugger : public UMobileGamePadView {
public:

	struct UCanvasPanel* Container; // 0x3b8(0x08)
	struct UImage* Dot; // 0x3c0(0x08)
	char pad_3C8[0x10]; // 0x3c8(0x10)

	void OnHitScreenPosition(struct FVector2D& Position); // Function DFMGameHud.DFMCrossHairViewDebugger.OnHitScreenPosition // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCrossHairViewNew
// Size: 0x4d8 (Inherited: 0x3b8)
class UDFMCrossHairViewNew : public UMobileGamePadView {
public:

	struct UCanvasPanel* CanvasPanel_1; // 0x3b8(0x08)
	struct TMap<struct FSoftObjectPath, struct FCrossHairAssetInfo> CacheAssetMap; // 0x3c0(0x50)
	struct USmoothCrosshairViewProxy* CrosshairViewProxy; // 0x410(0x08)
	struct UImage* ImgCrosshair; // 0x418(0x08)
	float LerpSpeed; // 0x420(0x04)
	float CenterMinHideDuration; // 0x424(0x04)
	bool bShouldChangeColor; // 0x428(0x01)
	char pad_429[0x4f]; // 0x429(0x4f)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x478(0x10)
	struct TArray<struct UPrimitiveComponent*> CompsToIgnore; // 0x488(0x10)
	char pad_498[0x8]; // 0x498(0x08)
	struct UWeaponHudModel* HudModel; // 0x4a0(0x08)
	struct ADFMCharacter* CacheCharacter; // 0x4a8(0x08)
	struct UWeaponFuncComponentCrosshair* FuncCrosshair; // 0x4b0(0x08)
	char pad_4B8[0x20]; // 0x4b8(0x20)

	void OnWeaponZoom(bool bZoom); // Function DFMGameHud.DFMCrossHairViewNew.OnWeaponZoom // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCruiseMissileView
// Size: 0x410 (Inherited: 0x388)
class UDFMCruiseMissileView : public UBaseUIView {
public:

	float LerpHeight; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	float LerpDistance; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	float CurrentEnergy; // 0x398(0x04)
	struct FVector Velocity; // 0x39c(0x0c)
	bool bIsSecondaryAccelerated; // 0x3a8(0x01)
	bool bIsAimingVehicle; // 0x3a9(0x01)
	char pad_3AA[0x6]; // 0x3aa(0x06)
	struct TMap<struct AActor*, struct UWidget*> MarkersMap; // 0x3b0(0x50)
	char pad_400[0x8]; // 0x400(0x08)
	struct UWidgetAnimation* FadeOutAnim; // 0x408(0x08)

	void UpdateUI(); // Function DFMGameHud.DFMCruiseMissileView.UpdateUI // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCustomLayoutDragBtnChildInterface
// Size: 0x30 (Inherited: 0x30)
class UDFMCustomLayoutDragBtnChildInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCustomLayoutDragBtnForbid
// Size: 0x2e8 (Inherited: 0x2e0)
class UDFMCustomLayoutDragBtnForbid : public UImage {
public:

	char pad_2E0[0x8]; // 0x2e0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCustomLayoutStackDataCenter
// Size: 0x60 (Inherited: 0x30)
class UDFMCustomLayoutStackDataCenter : public UObject {
public:

	struct TArray<struct UDFMCustomLayoutStack*> RevokeStack; // 0x30(0x10)
	struct TArray<struct UDFMCustomLayoutStack*> RestoreStack; // 0x40(0x10)
	int32_t CurrentFirstIndex; // 0x50(0x04)
	int32_t CurrentNum; // 0x54(0x04)
	int32_t MaxCount; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)

	void PushOldData(); // Function DFMGameHud.DFMCustomLayoutStackDataCenter.PushOldData // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMDisplayQualityController
// Size: 0x3c8 (Inherited: 0x378)
class ADFMDisplayQualityController : public AActor {
public:

	/*struct TMap<struct FString, struct TSoftObjectPtr<APostProcessVolume>>*/char PostEffectVolumeMap[0x50]; // 0x378(0x50)

	void UpdateDisplayStyle(); // Function DFMGameHud.DFMDisplayQualityController.UpdateDisplayStyle // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMBombCountdownView
// Size: 0x3b8 (Inherited: 0x388)
class UDFMBombCountdownView : public UBaseUIView {
public:

	struct AInteractor_TimeBomb* TimeBombA; // 0x388(0x08)
	struct AInteractor_TimeBomb* TimeBombB; // 0x390(0x08)
	struct FName TimeBombATag; // 0x398(0x08)
	struct FName TimeBombBTag; // 0x3a0(0x08)
	struct UTextBlock* TimeText; // 0x3a8(0x08)
	char pad_3B0[0x8]; // 0x3b0(0x08)

	void OnTimeBombBCutWire(struct FBombWireInfo& WireInfo); // Function DFMGameHud.DFMBombCountdownView.OnTimeBombBCutWire // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMDisposalBombView
// Size: 0x448 (Inherited: 0x3b8)
class UDFMDisposalBombView : public UMobileGamePadView {
public:

	int32_t PunishTime; // 0x3b8(0x04)
	struct FName TimeBombATag; // 0x3bc(0x08)
	struct FName TimeBombBTag; // 0x3c4(0x08)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UTextBlock* TimeTextSec; // 0x3d0(0x08)
	struct UTextBlock* TimeTextMilsec; // 0x3d8(0x08)
	struct TMap<struct FName, struct AInteractor_TimeBomb*> TimeBombs; // 0x3e0(0x50)
	struct FName ThisBombTag; // 0x430(0x08)
	char pad_438[0x10]; // 0x438(0x10)

	void UpdateBombProgress(struct AInteractor_TimeBomb* inTimeBomb); // Function DFMGameHud.DFMDisposalBombView.UpdateBombProgress // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMDPICustomScalingRule
// Size: 0x2b8 (Inherited: 0x30)
class UDFMDPICustomScalingRule : public UDPICustomScalingRule {
public:

	struct FRuntimeFloatCurve WideScreenCurve; // 0x30(0xa0)
	struct FRuntimeFloatCurve HighScreenCurve; // 0xd0(0xa0)
	struct FRuntimeFloatCurve WideScreenCurve_PC; // 0x170(0xa0)
	struct FRuntimeFloatCurve HighScreenCurve_PC; // 0x210(0xa0)
	float HighWideThreshold; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMFixedWeaponMainView
// Size: 0x448 (Inherited: 0x388)
class UDFMFixedWeaponMainView : public UBaseUIView {
public:

	struct TWeakObjectPtr<struct ADFMSceneWeapon> SenceWeapon; // 0x388(0x08)
	struct UCanvasPanel* MainPanel; // 0x390(0x08)
	struct UDFMFixedWeaponCommonView* CurrentFixedWeaponCommonView; // 0x398(0x08)
	/*struct TMap<enum class ESceneWeaponType, struct TSoftClassPtr<UObject>>*/char FixedWeaponHudClassMap[0x50]; // 0x3a0(0x50)
	/*struct TSet<struct UDFMFixedWeaponCommonView*>*/char LoadedFixedWeaponHudClass[0x50]; // 0x3f0(0x50)
	char pad_440[0x8]; // 0x440(0x08)

	void OnLoadComplete(struct FSoftObjectPath& Path); // Function DFMGameHud.DFMFixedWeaponMainView.OnLoadComplete // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMFixedWeaponState
// Size: 0x4b0 (Inherited: 0x388)
class UDFMFixedWeaponState : public UBaseUIView {
public:

	struct UImage* WeaponIcon; // 0x388(0x08)
	struct TMap<enum class ESceneWeaponType, struct UObject*> WeaponIconMap; // 0x390(0x50)
	struct TMap<enum class ESceneWeaponType, struct UObject*> LowHealthWeaponIconMap; // 0x3e0(0x50)
	enum class ESceneWeaponType CurrentWeaponType; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	struct TWeakObjectPtr<struct ADFMSceneWeapon> SceneWeapon; // 0x434(0x08)
	char pad_43C[0x14]; // 0x43c(0x14)
	struct UTextBlock* AmmoCountText; // 0x450(0x08)
	struct UImage* ProgressIcon; // 0x458(0x08)
	struct UTextBlock* CharacterHealthNum; // 0x460(0x08)
	struct UTextBlock* FixedWeaponBloodNum; // 0x468(0x08)
	struct UProgressBar* FixedWeaponProgressBar; // 0x470(0x08)
	float LowWeaponBloodRatio; // 0x478(0x04)
	struct FLinearColor NormalWeaponBloodProgressColor; // 0x47c(0x10)
	struct FLinearColor LowWeaponBloodProgressColor; // 0x48c(0x10)
	char pad_49C[0x14]; // 0x49c(0x14)

	void BP_UpdateWeaponHealthPrecent(float InHealthPrecent, float InMaxHealth, float InCurrentHealth); // Function DFMGameHud.DFMFixedWeaponState.BP_UpdateWeaponHealthPrecent // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGameChatHUDView
// Size: 0x3a0 (Inherited: 0x388)
class UDFMGameChatHUDView : public UBaseUIView {
public:

	struct UScrollGridBox* ChatMsgScrollGridBox; // 0x388(0x08)
	struct UTextBlock* FakeMsg; // 0x390(0x08)
	struct UDFMGameChat* DFMGameChatIns; // 0x398(0x08)

	void OnReceiveMsgs(struct TArray<struct FString> Arr); // Function DFMGameHud.DFMGameChatHUDView.OnReceiveMsgs // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGameChatTextWidget
// Size: 0x390 (Inherited: 0x388)
class UDFMGameChatTextWidget : public UBaseUIView {
public:

	struct UTextBlock* MsgText; // 0x388(0x08)

	void SetText(struct FString Msg); // Function DFMGameHud.DFMGameChatTextWidget.SetText // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGameHudDelegates
// Size: 0x638 (Inherited: 0x38)
class UDFMGameHudDelegates : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnGameSendSearchGUID[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnGameShareCustomLayoutInfo[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnHandleMouseButtonDownEvent[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnHandleMouseButtonUpEvent[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char OnHandlePostProcessMouseButtonUpEvent[0x10]; // 0x78(0x10)
	/*struct FMulticastInlineDelegate*/char OnHandleMouseMoveEvent[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char OnHandleKeyDownEvent[0x10]; // 0x98(0x10)
	/*struct FMulticastInlineDelegate*/char OnHandleKeyUpEvent[0x10]; // 0xa8(0x10)
	/*struct FMulticastInlineDelegate*/char OnGameInventoryReqPickItem[0x10]; // 0xb8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployPointPanelUpdateRebornPointSelectStatus[0x10]; // 0xc8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployMarkerBaseWidgetDoubleClick[0x10]; // 0xd8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployMarkerShakeInRedeployCD[0x10]; // 0xe8(0x10)
	/*struct FMulticastInlineDelegate*/char OnHandleSettlementHUD[0x10]; // 0xf8(0x10)
	/*struct FMulticastInlineDelegate*/char OnKillBroadcastRangeChanged[0x10]; // 0x108(0x10)
	/*struct FMulticastInlineDelegate*/char OnWarfareLoadingSkipped[0x10]; // 0x118(0x10)
	/*struct FMulticastInlineDelegate*/char OnTryTrackMapTarget[0x10]; // 0x128(0x10)
	/*struct FMulticastInlineDelegate*/char OnTrackMapTargetSucceed[0x10]; // 0x138(0x10)
	/*struct FMulticastInlineDelegate*/char OnSelectMapTarget[0x10]; // 0x148(0x10)
	/*struct FMulticastInlineDelegate*/char OnTrackMapTarget[0x10]; // 0x158(0x10)
	char pad_168[0x10]; // 0x168(0x10)
	/*struct FMulticastInlineDelegate*/char OnBigMapShowDetailIcon[0x10]; // 0x178(0x10)
	/*struct FMulticastInlineDelegate*/char OnAllMapIconCreatedCompeted[0x10]; // 0x188(0x10)
	/*struct FMulticastInlineDelegate*/char OnMapCurrentScaleChanged[0x10]; // 0x198(0x10)
	/*struct FMulticastInlineDelegate*/char OnMiniMapClipUpdate[0x10]; // 0x1a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnMiniMapAddExitIcon[0x10]; // 0x1b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnCampScoreChange[0x10]; // 0x1c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlayerStatsChange[0x10]; // 0x1d8(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlayerNameHUDViewInitialized[0x10]; // 0x1e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnMVPChange[0x10]; // 0x1f8(0x10)
	/*struct FMulticastInlineDelegate*/char OnOverlapCapPointBegin[0x10]; // 0x208(0x10)
	/*struct FMulticastInlineDelegate*/char OnOverlapCapPointEnd[0x10]; // 0x218(0x10)
	/*struct FMulticastInlineDelegate*/char OnCapturePointHUDConstruct[0x10]; // 0x228(0x10)
	/*struct FDelegate*/char AddMarkWidget[0x10]; // 0x238(0x10)
	/*struct FDelegate*/char RemoveMarkWidget[0x10]; // 0x248(0x10)
	/*struct FDelegate*/char AddRedeployMarkWidget[0x10]; // 0x258(0x10)
	/*struct FDelegate*/char RemoveRedeployMarkWidget[0x10]; // 0x268(0x10)
	/*struct FMulticastInlineDelegate*/char RemoveRedeployMarkWidgetByNetGuid[0x10]; // 0x278(0x10)
	/*struct FMulticastInlineDelegate*/char RedeployPointSelected[0x10]; // 0x288(0x10)
	/*struct FMulticastInlineDelegate*/char RedeployPointFocusOn[0x10]; // 0x298(0x10)
	/*struct FMulticastInlineDelegate*/char RedeployPointPanelUpdateRebornPointSelectStatus[0x10]; // 0x2a8(0x10)
	/*struct FMulticastInlineDelegate*/char RedeployVehicleSelected[0x10]; // 0x2b8(0x10)
	/*struct FMulticastInlineDelegate*/char RedeployViewWidgetOnClick[0x10]; // 0x2c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployHeroItemViewClick[0x10]; // 0x2d8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployHeroItemViewHover[0x10]; // 0x2e8(0x10)
	/*struct FMulticastInlineDelegate*/char RedeployLock[0x10]; // 0x2f8(0x10)
	/*struct FMulticastInlineDelegate*/char OnWeaponStoreHudOnHide[0x10]; // 0x308(0x10)
	/*struct FMulticastInlineDelegate*/char OnWeaponPresetStoreHudOnHide[0x10]; // 0x318(0x10)
	/*struct FMulticastInlineDelegate*/char OnRequestRebornResultReturn[0x10]; // 0x328(0x10)
	/*struct FMulticastInlineDelegate*/char OnRequestRebornFinished[0x10]; // 0x338(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployBtnClick[0x10]; // 0x348(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployPreloadLevelStateChanged[0x10]; // 0x358(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployViewOpenAnimFinished[0x10]; // 0x368(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeploySelectPointTweenPlayOver[0x10]; // 0x378(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployViewOnHide[0x10]; // 0x388(0x10)
	/*struct FMulticastInlineDelegate*/char OnReturnOneHubVehicleSpawner[0x10]; // 0x398(0x10)
	/*struct FMulticastInlineDelegate*/char OnReturnVehicleSpawnerStatesRefreshUI[0x10]; // 0x3a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnReturnAliveVehicleCountChange[0x10]; // 0x3b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnCurrentHubAndVehicleSpawnerNotAvailable[0x10]; // 0x3c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnReturnAllActorInfo[0x10]; // 0x3d8(0x10)
	/*struct FMulticastInlineDelegate*/char OnReturnAllTeamPlayerInfo[0x10]; // 0x3e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnReturnAllNormalPlayerInfo[0x10]; // 0x3f8(0x10)
	/*struct FMulticastInlineDelegate*/char OnReturnAllVehicleInfo[0x10]; // 0x408(0x10)
	/*struct FMulticastInlineDelegate*/char OnReturnAllRebornFlagInfo[0x10]; // 0x418(0x10)
	/*struct FMulticastInlineDelegate*/char OnReturnAllStaticPointInfo[0x10]; // 0x428(0x10)
	/*struct FMulticastInlineDelegate*/char OnSelectSpawnAreaHubVehicleSteeringWheel[0x10]; // 0x438(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployPackageViewHoverMainWeapon[0x10]; // 0x448(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployPackageViewHoverSecondaryWeapon[0x10]; // 0x458(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployPackageViewHoverMeleeWeapon[0x10]; // 0x468(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployPackageViewHoverArmItem[0x10]; // 0x478(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployPackageViewHoverArmItem2[0x10]; // 0x488(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployPointHover[0x10]; // 0x498(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployChooseItemBaseViewHoverBroadCastInt32[0x10]; // 0x4a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployChooseItemBaseViewHoverBroadCastUint64[0x10]; // 0x4b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployChooseItemBaseViewClickedBroadCastInt32[0x10]; // 0x4c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployChooseItemBaseViewClickedBroadCastUint64[0x10]; // 0x4d8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployChooseItemBaseViewRightClickedBroadCastInt32[0x10]; // 0x4e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployChooseItemBaseViewRightClickedBroadCastUint64[0x10]; // 0x4f8(0x10)
	/*struct FMulticastInlineDelegate*/char OnShowRedeployStoreBaseHudViewPassInitParam[0x10]; // 0x508(0x10)
	/*struct FMulticastInlineDelegate*/char OnShowRedeployWeaponPresetStoreBaseHudViewPassInitParam[0x10]; // 0x518(0x10)
	/*struct FMulticastInlineDelegate*/char OnArmItemHudViewClickArmItem[0x10]; // 0x528(0x10)
	/*struct FMulticastInlineDelegate*/char OnClickPackageWeaponItem[0x10]; // 0x538(0x10)
	/*struct FMulticastInlineDelegate*/char OnClickWeaponStoreItem[0x10]; // 0x548(0x10)
	/*struct FMulticastInlineDelegate*/char OnClickWeaponPresetItem[0x10]; // 0x558(0x10)
	/*struct FMulticastInlineDelegate*/char OnRedeployVehicleItemStatusChanged[0x10]; // 0x568(0x10)
	/*struct FMulticastInlineDelegate*/char OnCurrentWeaponsChanged[0x10]; // 0x578(0x10)
	/*struct FMulticastInlineDelegate*/char TrySwitchWeapon[0x10]; // 0x588(0x10)
	/*struct FMulticastInlineDelegate*/char OnItemDetailPanelClose[0x10]; // 0x598(0x10)
	/*struct FMulticastInlineDelegate*/char OnCommonBtnSelected[0x10]; // 0x5a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnSOLRemainTimeDelayShow[0x10]; // 0x5b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnOpenSystemSettingMainView[0x10]; // 0x5c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnHoverMapTarget[0x10]; // 0x5d8(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnHoverMapTarget[0x10]; // 0x5e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnSpectateShowHUD[0x10]; // 0x5f8(0x10)
	/*struct FMulticastInlineDelegate*/char OnSpectateHideHUD[0x10]; // 0x608(0x10)
	/*struct FMulticastInlineDelegate*/char OnWishBtnSelected[0x10]; // 0x618(0x10)
	/*struct FMulticastInlineDelegate*/char OnBigMapClose[0x10]; // 0x628(0x10)

	void TryTrackDoorFromLua(bool bInTrack, struct FString DoorName, struct FVector& WorldLocation); // Function DFMGameHud.DFMGameHudDelegates.TryTrackDoorFromLua // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGMActivityDebugView
// Size: 0x3a8 (Inherited: 0x388)
class UDFMGMActivityDebugView : public UBaseUIView {
public:

	struct URichTextBlock* RichTextBlock_CurActivityObjItemInfo; // 0x388(0x08)
	struct URichTextBlock* RichTextBlock_ActivityChangeHistory; // 0x390(0x08)
	struct UDFMPlayerActivityComponent* PlayerActivityComponent; // 0x398(0x08)
	float TickInterval; // 0x3a0(0x04)
	float TickCountDown; // 0x3a4(0x04)

	void OnUpdateGMView(); // Function DFMGameHud.DFMGMActivityDebugView.OnUpdateGMView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGMAIInfoView
// Size: 0x3c8 (Inherited: 0x3b8)
class UDFMGMAIInfoView : public UMobileGamePadView {
public:

	struct UTextBlock* AIBag; // 0x3b8(0x08)
	struct UTextBlock* AIDeadBag; // 0x3c0(0x08)

	void RefreshTestAI(struct FString NpcName, int32_t NpcDiffculty); // Function DFMGameHud.DFMGMAIInfoView.RefreshTestAI // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGMButtonView
// Size: 0x3b8 (Inherited: 0x3b8)
class UDFMGMButtonView : public UMobileGamePadView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGMConsoleInputView
// Size: 0x3a8 (Inherited: 0x388)
class UDFMGMConsoleInputView : public UBaseUIView {
public:

	struct TArray<struct FString> HistoryStrings; // 0x388(0x10)
	struct FString CurrentConsoleInputString; // 0x398(0x10)

	struct FString GetHistroyString(); // Function DFMGameHud.DFMGMConsoleInputView.GetHistroyString // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGMFootStepDebugView
// Size: 0x3a0 (Inherited: 0x388)
class UDFMGMFootStepDebugView : public UBaseUIView {
public:

	struct UTextBlock* MaterialText; // 0x388(0x08)
	struct UTextBlock* AudioTagText; // 0x390(0x08)
	struct UTextBlock* WetnessText; // 0x398(0x08)

	void PerformMaterialTrace(); // Function DFMGameHud.DFMGMFootStepDebugView.PerformMaterialTrace // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGMInputManagerDebugView
// Size: 0x4b8 (Inherited: 0x388)
class UDFMGMInputManagerDebugView : public UBaseUIView {
public:

	struct UGPInputManager* InputManager; // 0x388(0x08)
	struct UDFHDDisplayInputActionManager* DisplayInputActionManager; // 0x390(0x08)
	char pad_398[0x20]; // 0x398(0x20)
	struct UTextBlock* InputManagerValid; // 0x3b8(0x08)
	struct URichTextBlock* InputActionInfo; // 0x3c0(0x08)
	struct URichTextBlock* InputAxisInfo; // 0x3c8(0x08)
	struct URichTextBlock* InputActionHistoryInfo; // 0x3d0(0x08)
	struct URichTextBlock* InputAxisDisable; // 0x3d8(0x08)
	struct URichTextBlock* InputActionDisable; // 0x3e0(0x08)
	struct URichTextBlock* CurValidDisplayInputAction; // 0x3e8(0x08)
	struct UTextBlock* StaminaValue; // 0x3f0(0x08)
	struct UTextBlock* ChangeValue; // 0x3f8(0x08)
	struct UTextBlock* ChangeValuePerSecond; // 0x400(0x08)
	struct UTextBlock* CanRecover; // 0x408(0x08)
	struct UTextBlock* RecoverCD; // 0x410(0x08)
	struct UTextBlock* RecoverRate; // 0x418(0x08)
	struct UTextBlock* SprintChangeRate; // 0x420(0x08)
	struct UTextBlock* StandRun; // 0x428(0x08)
	struct UTextBlock* StandardDeltaAngleX; // 0x430(0x08)
	struct UTextBlock* StandardDeltaAngleY; // 0x438(0x08)
	struct UTextBlock* WorldVelocity; // 0x440(0x08)
	struct UTextBlock* LocalVelocity; // 0x448(0x08)
	struct UTextBlock* VelocityValue; // 0x450(0x08)
	struct UTextBlock* CurrentAccel; // 0x458(0x08)
	struct UTextBlock* CurrentAccelValue; // 0x460(0x08)
	struct UTextBlock* MaxAccelValue; // 0x468(0x08)
	struct UTextBlock* VaultClimbVelocityValue; // 0x470(0x08)
	struct UTextBlock* VaultClimbHorizontalVelocityValue; // 0x478(0x08)
	struct UTextBlock* VelocityHorizontalValue; // 0x480(0x08)
	struct UTextBlock* AnimSpeedValue; // 0x488(0x08)
	struct UTextBlock* VaultStartSpeedValue; // 0x490(0x08)
	struct UTextBlock* VaultInKeepSpeedRateScaleValue; // 0x498(0x08)
	struct UTextBlock* LerpAnimSpeedValue; // 0x4a0(0x08)
	float Gyro_HorizontalRate; // 0x4a8(0x04)
	float Gyro_VerticalRate; // 0x4ac(0x04)
	bool bWeaponCanSprint; // 0x4b0(0x01)
	bool bMovementCanSprint; // 0x4b1(0x01)
	bool bRoleLoadCanSprint; // 0x4b2(0x01)
	bool bBasePoseCanSprint; // 0x4b3(0x01)
	bool bHasSilentWalkInput; // 0x4b4(0x01)
	bool bSprintFiringInterval; // 0x4b5(0x01)
	bool bHasInterruptReason; // 0x4b6(0x01)
	char pad_4B7[0x1]; // 0x4b7(0x01)

	void UpdateSprintInfo(); // Function DFMGameHud.DFMGMInputManagerDebugView.UpdateSprintInfo // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGMRecordDebugViewItem
// Size: 0x2c0 (Inherited: 0x298)
class UDFMGMRecordDebugViewItem : public UUserWidget {
public:

	struct FName HudName; // 0x298(0x08)
	struct UDFMGMRecordDebugView* ParentSetting; // 0x2a0(0x08)
	struct UTextBlock* HudNameText; // 0x2a8(0x08)
	struct UTextBlock* HudNameTextDesc; // 0x2b0(0x08)
	struct UCheckbox* HudCheckBox; // 0x2b8(0x08)

	void OnCheckBoxStatusChanged(bool bIsChecked); // Function DFMGameHud.DFMGMRecordDebugViewItem.OnCheckBoxStatusChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RecordDebugSettings
// Size: 0x170 (Inherited: 0x30)
class URecordDebugSettings : public UObject {
public:

	struct TMap<struct FName, bool> HudMap; // 0x30(0x50)
	struct TMap<struct FName, bool> LuaHudMap; // 0x80(0x50)
	struct TMap<struct FName, bool> TempHudMap; // 0xd0(0x50)
	struct TMap<struct FName, bool> TempLuaHudMap; // 0x120(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGMRecordDebugView
// Size: 0x5f0 (Inherited: 0x388)
class UDFMGMRecordDebugView : public UBaseUIView {
public:

	char pad_388[0x20]; // 0x388(0x20)
	struct TArray<struct FName> InputPresetNames; // 0x3a8(0x10)
	char pad_3B8[0x50]; // 0x3b8(0x50)
	struct TArray<struct UDFMGMRecordDebugViewItem*> CreatedHudArray; // 0x408(0x10)
	struct FVector2D offset; // 0x418(0x08)
	bool bApplyOffset; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UClass* HudItemWidgetClass; // 0x428(0x08)
	struct TArray<struct FName> IgnoredHudItemWidget; // 0x430(0x10)
	struct UVerticalBox* HudVerticalBox; // 0x440(0x08)
	struct TMap<struct FName, bool> HudMap; // 0x448(0x50)
	struct TMap<struct FName, bool> LuaHudMap; // 0x498(0x50)
	struct TMap<struct FName, bool> TempHudMap; // 0x4e8(0x50)
	struct TMap<struct FName, bool> TempLuaHudMap; // 0x538(0x50)
	struct TMap<struct FName, bool> SortedHudMap; // 0x588(0x50)
	char pad_5D8[0x18]; // 0x5d8(0x18)

	void UpdateInputPresets(struct FText InText); // Function DFMGameHud.DFMGMRecordDebugView.UpdateInputPresets // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMGMTrackCameraHudView
// Size: 0x490 (Inherited: 0x388)
class UDFMGMTrackCameraHudView : public UBaseUIView {
public:

	struct UComboBoxString* CharacterComboBox; // 0x388(0x08)
	struct UComboBoxString* CharacterSocketComboBox; // 0x390(0x08)
	struct UComboBoxString* WeaponSocketComboBox; // 0x398(0x08)
	struct UComboBoxString* FocusCharacterSocketComboBox; // 0x3a0(0x08)
	struct TMap<struct FString, struct ACHARACTER*> CharacterNameMap; // 0x3a8(0x50)
	struct TMap<struct FString, struct UMeshComponent*> WeaponSocketNameMap; // 0x3f8(0x50)
	struct FString CurrentTargetString; // 0x448(0x10)
	struct FString CurrentCharacterSocketString; // 0x458(0x10)
	struct FString CurrentWeaponSocketString; // 0x468(0x10)
	struct FString CurrentFocusSocketString; // 0x478(0x10)
	bool bEnableCharacterSocketFollow; // 0x488(0x01)
	bool bEnableWeaponSocketFollow; // 0x489(0x01)
	bool bEnableFocusCharacterSocket; // 0x48a(0x01)
	char pad_48B[0x5]; // 0x48b(0x05)

	void UpdateWeaponSocketDropdownList(); // Function DFMGameHud.DFMGMTrackCameraHudView.UpdateWeaponSocketDropdownList // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ArtCommon
// Size: 0x2b8 (Inherited: 0x298)
class UArtCommon : public UUserWidget {
public:

	struct UDFImage* DFImage_Art; // 0x298(0x08)
	int32_t Number; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct TArray<struct UPaperSprite*> ImageArray; // 0x2a8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHDWeaponHudView
// Size: 0x720 (Inherited: 0x388)
class UDFMHDWeaponHudView : public UBaseUIView {
public:

	struct UWeaponHudController* HudController; // 0x388(0x08)
	struct AWeaponBase* CurActiveWeaponV; // 0x390(0x08)
	enum class ECurActiveWeaponType CurActiveWeaponTypeV; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	int32_t BulletLevelCount; // 0x39c(0x04)
	char pad_3A0[0x10]; // 0x3a0(0x10)
	struct TMap<struct FSoftObjectPath, struct UPaperSprite*> LoadedTextures; // 0x3b0(0x50)
	struct TArray<struct FLinearColor> AmmoLevel; // 0x400(0x10)
	struct FLinearColor LowAmmoColor; // 0x410(0x10)
	char pad_420[0x8]; // 0x420(0x08)
	struct AActor* FocusActor; // 0x428(0x08)
	struct AWeaponBase* BindFirstWeapon; // 0x430(0x08)
	struct AWeaponBase* BindSecondWeapon; // 0x438(0x08)
	struct AWeaponBase* BindThirdWeapon; // 0x440(0x08)
	struct AWeaponBase* BindFourthWeapon; // 0x448(0x08)
	struct AWeaponBase* CurActiveWeapon; // 0x450(0x08)
	struct AWeaponBase* PreActiveWeapon; // 0x458(0x08)
	struct TArray<enum class GameHUDSate> InvisibleFocusHUDState; // 0x460(0x10)
	struct UCanvasPanel* FireModePanel; // 0x470(0x08)
	struct UButton* PistolSwitchWeaponBtn; // 0x478(0x08)
	struct UButton* MeleeSwitchWeaponBtn; // 0x480(0x08)
	struct UButton* SwitchWeaponBtn; // 0x488(0x08)
	struct UUserWidget* WeaponWidget; // 0x490(0x08)
	struct UDFMImage* WeaponPic; // 0x498(0x08)
	struct UWidgetAnimation* FirstWeaponChangeAnim; // 0x4a0(0x08)
	struct UUserWidget* SubWeaponWidget; // 0x4a8(0x08)
	struct UDFMImage* SecondWeaponPic; // 0x4b0(0x08)
	struct UWidgetAnimation* SecondWeaponChangeAnim; // 0x4b8(0x08)
	struct UUserWidget* MeleeWeaponWidget; // 0x4c0(0x08)
	struct UDFMImage* MeleeWeaponPic; // 0x4c8(0x08)
	struct UWidgetAnimation* ThirdWeaponChangeAnim; // 0x4d0(0x08)
	struct UUserWidget* PistolWeaponWidget; // 0x4d8(0x08)
	struct UDFMImage* PistolWeaponPic; // 0x4e0(0x08)
	struct UWidgetAnimation* FourthWeaponChangeAnim; // 0x4e8(0x08)
	bool bEnableWeaponIconWidgetAnimation; // 0x4f0(0x01)
	bool bEnableWeaponSwitchAnim; // 0x4f1(0x01)
	bool bHasPlayedWeaponSwitchAnim; // 0x4f2(0x01)
	char pad_4F3[0x5]; // 0x4f3(0x05)
	struct UUserWidget* WeaponWidget_Change; // 0x4f8(0x08)
	struct UDFMImage* WeaponPic_Change; // 0x500(0x08)
	struct UUserWidget* SubWeaponWidget_Change; // 0x508(0x08)
	struct UDFMImage* SubWeaponPic_Change; // 0x510(0x08)
	struct UCanvasPanel* CanvasPanel_WeaponChange; // 0x518(0x08)
	struct UCanvasPanel* CanvasPanel_SubWeaponChange; // 0x520(0x08)
	struct FVector2D IconOffsetModify; // 0x528(0x08)
	struct FVector2D IconOffsetModifyDownPosition; // 0x530(0x08)
	struct FVector2D IconOffsetModifyDownTranslation; // 0x538(0x08)
	struct UUserWidget* SwapWidgetDownCache; // 0x540(0x08)
	struct UDFMImage* SwapPicDownCache; // 0x548(0x08)
	struct UArtCommon* WBP_ArtAmmo_2; // 0x550(0x08)
	struct UArtCommon* WBP_ArtAmmo_3; // 0x558(0x08)
	struct UArtCommon* WBP_ArtAmmo_4; // 0x560(0x08)
	struct UArtCommon* WBP_ArtCarriedAmmo_2; // 0x568(0x08)
	struct UArtCommon* WBP_ArtCarriedAmmo_3; // 0x570(0x08)
	struct UArtCommon* WBP_ArtCarriedAmmo_4; // 0x578(0x08)
	struct UCanvasPanel* AmmoPanel; // 0x580(0x08)
	struct UImage* AmmoLevelImg; // 0x588(0x08)
	struct UDFBorder* AmmoQualityBorder; // 0x590(0x08)
	struct UDFTextBlock* AmmoQualityText; // 0x598(0x08)
	struct UTextBlock* WeaponName; // 0x5a0(0x08)
	struct UHDKeyIconBoxWidget* KeyIconBox; // 0x5a8(0x08)
	struct UHDKeyIconBoxWidget* keyIconBoxMelee; // 0x5b0(0x08)
	struct UHDKeyIconBoxWidget* keyIconBoxPistol; // 0x5b8(0x08)
	struct UButton* FlashFuncToolBar; // 0x5c0(0x08)
	struct UCanvasPanel* FlashFuncPanel; // 0x5c8(0x08)
	struct UUserWidget* PowerFlash; // 0x5d0(0x08)
	struct UVerticalBox* WeaponOperationHint; // 0x5d8(0x08)
	struct UButton* WeaponFuncToolbar; // 0x5e0(0x08)
	struct UUserWidget* TacticalEquipsImage; // 0x5e8(0x08)
	struct UUserWidget* FlashLightImage; // 0x5f0(0x08)
	struct UUserWidget* LaserImage; // 0x5f8(0x08)
	struct UUserWidget* AimingRatio; // 0x600(0x08)
	struct UButton* DragBtnChangeSight; // 0x608(0x08)
	struct UCanvasPanel* CanvasPanel_Ability; // 0x610(0x08)
	struct UCanvasPanel* RootPanel; // 0x618(0x08)
	struct UButton* Button_264; // 0x620(0x08)
	struct UWidgetAnimation* GAnimSperadWeaponBar_out; // 0x628(0x08)
	struct FTimerHandle AccessoryAnimTimerHandle; // 0x630(0x08)
	struct UWidgetAnimation* Anim_AccessoryInformation_Show; // 0x638(0x08)
	struct UWidgetAnimation* Anim_AccessoryInformation_Hide; // 0x640(0x08)
	struct FLinearColor NormalGunColor_PC; // 0x648(0x10)
	struct FVector2D WatchFightOffset; // 0x658(0x08)
	struct FName Weapon_Tactical_Gear_Switch; // 0x660(0x08)
	struct FName UI_PowerFlash_Open; // 0x668(0x08)
	struct FName WeaponZoomOutTweenName; // 0x670(0x08)
	struct FName WeaponZoomInTweenName; // 0x678(0x08)
	int32_t CacheZoomRateIndex; // 0x680(0x04)
	bool bHasSetCA0; // 0x684(0x01)
	bool bHasSetCA9; // 0x685(0x01)
	bool bHasSetCA99; // 0x686(0x01)
	bool bHasSetLA0; // 0x687(0x01)
	bool bHasSetLA9; // 0x688(0x01)
	bool bHasSetLA99; // 0x689(0x01)
	bool bHasSetA0; // 0x68a(0x01)
	bool bHasSetA9; // 0x68b(0x01)
	bool bHasSetA99; // 0x68c(0x01)
	char pad_68D[0x3]; // 0x68d(0x03)
	struct FText TextEmpty; // 0x690(0x18)
	struct FText TextZero1; // 0x6a8(0x18)
	struct FText TextZero2; // 0x6c0(0x18)
	struct FText TextZero3; // 0x6d8(0x18)
	struct UFunction* Func_AimingRatio_BP_SetText; // 0x6f0(0x08)
	struct UFunction* Func_AimingRatio_SetSelected; // 0x6f8(0x08)
	struct UFunction* Func_TacticalEquipsImage_BP_SetThumbnial; // 0x700(0x08)
	struct UFunction* Func_PowerFlash_BP_SetText; // 0x708(0x08)
	struct UFunction* Func_PowerFlash_BP_SetType; // 0x710(0x08)
	enum class ESlateVisibility LastRootPanelVisibility; // 0x718(0x01)
	bool bIsOB; // 0x719(0x01)
	bool bPendingHandleKillReconnect; // 0x71a(0x01)
	char pad_71B[0x5]; // 0x71b(0x05)

	void UpdateScopeView(bool bShowZoomRateTip); // Function DFMGameHud.DFMHDWeaponHudView.UpdateScopeView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHitMarkView
// Size: 0x3e0 (Inherited: 0x3b8)
class UDFMHitMarkView : public UMobileGamePadView {
public:

	struct UDFMCrossHairFeedback* DamageCrossHairFeedBack; // 0x3b8(0x08)
	struct UDFMCrossHairFeedback* KillCrossHairFeedBack; // 0x3c0(0x08)
	struct UDFMCrossHairFeedback* VehicleCrossHairFeedBack; // 0x3c8(0x08)
	char pad_3D0[0x8]; // 0x3d0(0x08)
	struct UDFMCrossHairFeedback* CurrentView; // 0x3d8(0x08)

	void OnMakeHitFeedBack(enum class EHitEventType InHitEventType, enum class ECharacterPart HitPart, struct AGPCharacter* Taker, int32_t ArmorLevel); // Function DFMGameHud.DFMHitMarkView.OnMakeHitFeedBack // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHitViewInterface
// Size: 0x30 (Inherited: 0x30)
class UDFMHitViewInterface : public UInterface {
public:


	void OnShowLoopHitEffect(bool bLoop); // Function DFMGameHud.DFMHitViewInterface.OnShowLoopHitEffect // (Native|Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHUD
// Size: 0x718 (Inherited: 0x6d8)
class ADFMHUD : public ABaseHUD {
public:

	struct FName DFMUIDataTable_Name; // 0x6d8(0x08)
	struct UDataTable* DFMUIDataTable; // 0x6e0(0x08)
	struct FString LuaHudTableName; // 0x6e8(0x10)
	struct FString LuaBaseHudTableName; // 0x6f8(0x10)
	struct UDFCommonHUDScreenMutex* HUDScreenMutex_HDEventTips; // 0x708(0x08)
	struct UDFCommonHUDScreenMutex* HUDScreenMutex_MiniMapBottom; // 0x710(0x08)

	void OnWeaponPanelCreated(struct FString FunctionName, struct UBaseUIView* View); // Function DFMGameHud.DFMHUD.OnWeaponPanelCreated // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHUDBleedingView
// Size: 0x390 (Inherited: 0x388)
class UDFMHUDBleedingView : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHUDBloodStainView
// Size: 0x3e8 (Inherited: 0x388)
class UDFMHUDBloodStainView : public UBaseUIView {
public:

	struct UImage* BloodMask; // 0x388(0x08)
	struct UImage* NearDeath_BloodMask; // 0x390(0x08)
	struct UOverlay* Overlay_1; // 0x398(0x08)
	float ShowBloodStainPercent; // 0x3a0(0x04)
	float DeathFadeDelayTime; // 0x3a4(0x04)
	float DeathFadeDurationTime; // 0x3a8(0x04)
	float DeathFadePercent; // 0x3ac(0x04)
	struct UCurveVector* EffectGHostCurve; // 0x3b0(0x08)
	char pad_3B8[0x30]; // 0x3b8(0x30)

	void OnClientBuffEffectPain(struct AGPCharacter* CHARACTER, bool Enable); // Function DFMGameHud.DFMHUDBloodStainView.OnClientBuffEffectPain // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHudHelper
// Size: 0x30 (Inherited: 0x30)
class UDFMHudHelper : public UObject {
public:


	void STATIC_TriggerUIClickAudio(struct UObject* WorldContext); // Function DFMGameHud.DFMHudHelper.TriggerUIClickAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHUDHitBaseView
// Size: 0x458 (Inherited: 0x388)
class UDFMHUDHitBaseView : public UBaseUIView {
public:

	char pad_388[0x10]; // 0x388(0x10)
	struct FRuntimeFloatCurve ViewCurve; // 0x398(0xa0)
	bool bStartLevel; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	float Level1; // 0x43c(0x04)
	float Level2; // 0x440(0x04)
	float Level3; // 0x444(0x04)
	float PainDisplayTime; // 0x448(0x04)
	float PainHideTime; // 0x44c(0x04)
	struct UWidgetAnimation* CacheAnim; // 0x450(0x08)

	void NativePlayLoopAnimation(struct UWidgetAnimation* InAnim, bool bLoop); // Function DFMGameHud.DFMHUDHitBaseView.NativePlayLoopAnimation // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHUDHitDirView
// Size: 0x3f8 (Inherited: 0x388)
class UDFMHUDHitDirView : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct UOverlay* Overlay_1; // 0x390(0x08)
	struct FSoftClassPath HitDirClass; // 0x398(0x18)
	int32_t MaxHitDirInstance; // 0x3b0(0x04)
	float HitShowTime; // 0x3b4(0x04)
	struct TArray<struct UDFMHUDHitDirViewItem*> AllHitDirViews; // 0x3b8(0x10)
	struct UDFMHUDHitDirViewItem* HitDirViewItem_1; // 0x3c8(0x08)
	struct UDFMHUDHitDirViewItem* HitDirViewItem_2; // 0x3d0(0x08)
	struct UDFMHUDHitDirViewItem* HitDirViewItem_3; // 0x3d8(0x08)
	struct UDFMHUDHitDirViewItem* HitDirViewItem_4; // 0x3e0(0x08)
	struct UDFMHUDHitDirViewItem* HitDirViewItem_5; // 0x3e8(0x08)
	struct AGPCharacter* CacheChar; // 0x3f0(0x08)

	void OnVehicleHealthDamaged(float Damage, struct FTakeHitInfo& TakeHitInfo); // Function DFMGameHud.DFMHUDHitDirView.OnVehicleHealthDamaged // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHUDHitDirViewItem
// Size: 0x3d8 (Inherited: 0x388)
class UDFMHUDHitDirViewItem : public UBaseUIView {
public:

	bool CurrentIsActive; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	float StartTimestamp; // 0x38c(0x04)
	float startFadeTime; // 0x390(0x04)
	float endFadeTime; // 0x394(0x04)
	float BaseDirOffset; // 0x398(0x04)
	float StayTime; // 0x39c(0x04)
	char pad_3A0[0x30]; // 0x3a0(0x30)
	struct AGPPlayerController* DFMPC; // 0x3d0(0x08)

	void ShowHitDir(float Damage, float ShowTime, struct FVector sourceLoc); // Function DFMGameHud.DFMHUDHitDirViewItem.ShowHitDir // (Final|Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHUDHitDirViewItemV2
// Size: 0x3e0 (Inherited: 0x388)
class UDFMHUDHitDirViewItemV2 : public UBaseUIView {
public:

	bool CurrentIsActive; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	float StartTimestamp; // 0x38c(0x04)
	float startFadeTime; // 0x390(0x04)
	float endFadeTime; // 0x394(0x04)
	float BaseDirOffset; // 0x398(0x04)
	float StayTime; // 0x39c(0x04)
	char pad_3A0[0x4]; // 0x3a0(0x04)
	struct TWeakObjectPtr<struct AActor> TargetActor; // 0x3a4(0x08)
	char pad_3AC[0x2c]; // 0x3ac(0x2c)
	struct AGPPlayerController* DFMPC; // 0x3d8(0x08)

	void ShowHitDir(float Damage, float ShowTime, struct FVector sourceLoc, struct AActor* Target); // Function DFMGameHud.DFMHUDHitDirViewItemV2.ShowHitDir // (Final|Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHUDHitDirViewV2
// Size: 0x410 (Inherited: 0x388)
class UDFMHUDHitDirViewV2 : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct UOverlay* Overlay_1; // 0x390(0x08)
	struct FSoftClassPath HitDirClass; // 0x398(0x18)
	int32_t MaxHitDirInstance; // 0x3b0(0x04)
	float HitShowTime; // 0x3b4(0x04)
	struct UCurveFloat* DamagePrecentCurve; // 0x3b8(0x08)
	struct UCurveFloat* VehicleDamagePrecentCurve; // 0x3c0(0x08)
	struct TArray<struct UDFMHUDHitDirViewItemV2*> AllHitDirViews; // 0x3c8(0x10)
	struct UDFMHUDHitDirViewItemV2* HitDirViewItem_1; // 0x3d8(0x08)
	struct UDFMHUDHitDirViewItemV2* HitDirViewItem_2; // 0x3e0(0x08)
	struct UDFMHUDHitDirViewItemV2* HitDirViewItem_3; // 0x3e8(0x08)
	struct UDFMHUDHitDirViewItemV2* HitDirViewItem_4; // 0x3f0(0x08)
	struct UDFMHUDHitDirViewItemV2* HitDirViewItem_5; // 0x3f8(0x08)
	struct AGPCharacter* CacheChar; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)

	void OnVehicleHealthDamaged(float DamagePrecent, struct FTakeHitInfo& TakeHitInfo); // Function DFMGameHud.DFMHUDHitDirViewV2.OnVehicleHealthDamaged // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHUDHitFeedBack
// Size: 0x420 (Inherited: 0x388)
class UDFMHUDHitFeedBack : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct UCanvasPanel* FeedBackTips; // 0x390(0x08)
	struct UImage* TipsIcon; // 0x398(0x08)
	struct UCanvasPanel* Canvas_HitBroke; // 0x3a0(0x08)
	float RollBackTime; // 0x3a8(0x04)
	float StartRollBackTime; // 0x3ac(0x04)
	char pad_3B0[0x10]; // 0x3b0(0x10)
	float AngleMin; // 0x3c0(0x04)
	float AngleMax; // 0x3c4(0x04)
	bool IsDuringHitFeedBack; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct TMap<enum class EFeedbackTipsAnimType, struct FDFMFeedbackWidgetAnimationConfig> FeedbackWidgetAnimationConfig; // 0x3d0(0x50)

	void PlayFeedbackTipsAnimation(enum class EFeedbackTipsAnimType InHitEventType, int32_t Level); // Function DFMGameHud.DFMHUDHitFeedBack.PlayFeedbackTipsAnimation // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHUDHitView
// Size: 0x530 (Inherited: 0x388)
class UDFMHUDHitView : public UBaseUIView {
public:

	float ViewScale; // 0x388(0x04)
	float ViewDyingPercent; // 0x38c(0x04)
	struct TArray<struct FHitViewConf> HitViewConf; // 0x390(0x10)
	struct FSoftClassPath BaseHitView; // 0x3a0(0x18)
	struct TMap<enum class EHitEventType, struct FHitPostProcessEffect> HitPostProcessEffectConfig; // 0x3b8(0x50)
	char pad_408[0x38]; // 0x408(0x38)
	struct UMaterialInstanceDynamic* CurrentPostProessEffectInstance; // 0x440(0x08)
	struct UMaterialInstanceDynamic* CurrentSuppressEffectInstance; // 0x448(0x08)
	char pad_450[0x48]; // 0x450(0x48)
	struct FHitSuppressByBulletEffect SuppressByBulletEffect; // 0x498(0x70)
	char pad_508[0x8]; // 0x508(0x08)
	struct AGPCharacter* CacheChar; // 0x510(0x08)
	char pad_518[0x10]; // 0x518(0x10)
	struct UDFMHUDHitDirViewV2* HitDirView; // 0x528(0x08)

	void PlayLoopHitView(struct UObject* obj, bool Loop); // Function DFMGameHud.DFMHUDHitView.PlayLoopHitView // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHudLevelSubsystem
// Size: 0x3f8 (Inherited: 0x378)
class ADFMHudLevelSubsystem : public ALevelSubsystem {
public:

	struct UClass* EdgeTrackingBigMapWidgetClass; // 0x378(0x08)
	struct UClass* EdgeTrackingMiniMapWidgetClass; // 0x380(0x08)
	struct UClass* EvacuteTimeWidgetClass; // 0x388(0x08)
	struct UClass* MapItemRippleClass; // 0x390(0x08)
	struct UClass* MapItemRangeClass; // 0x398(0x08)
	struct UClass* SelectedFrameClass; // 0x3a0(0x08)
	struct UClass* FlaggedFrameWidgetClass; // 0x3a8(0x08)
	struct UClass* AnimTrackingWidgetClass; // 0x3b0(0x08)
	struct UClass* BattlefieldFlaggedFrameWidgetClass; // 0x3b8(0x08)
	struct UClass* MapItemProgressWidgetClass; // 0x3c0(0x08)
	struct UClass* BlackScreenWidgetClass; // 0x3c8(0x08)
	struct UUserWidget* BlackScreenWidget; // 0x3d0(0x08)
	struct TArray<struct UAdjustableMapItemBase*> BigMapRangeHUDViewArray; // 0x3d8(0x10)
	struct TArray<struct UAdjustableMapItemBase*> MiniMapRangeHUDViewArray; // 0x3e8(0x10)

	void OnTriggerUIAudio(struct FName& UIAudioName); // Function DFMGameHud.DFMHudLevelSubsystem.OnTriggerUIAudio // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHudMvcFieldBase
// Size: 0x30 (Inherited: 0x30)
class UDFMHudMvcFieldBase : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHudMvcViewBase
// Size: 0x310 (Inherited: 0x298)
class UDFMHudMvcViewBase : public UUserWidget {
public:

	struct UDFMHudMvcFieldBase* HudMvcField; // 0x298(0x08)
	struct UDFMHudMvcLogicBase* HudMvcLogic; // 0x2a0(0x08)
	struct TMap<struct FName, struct UWidgetAnimation*> AnimationsMap; // 0x2a8(0x50)
	char pad_2F8[0x10]; // 0x2f8(0x10)
	bool bEnableTimerTick; // 0x308(0x01)
	bool bAutoCollectAnimations; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)

	void Visible(); // Function DFMGameHud.DFMHudMvcViewBase.Visible // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHudMvcLogicBase
// Size: 0x48 (Inherited: 0x30)
class UDFMHudMvcLogicBase : public UObject {
public:

	struct UDFMHudMvcFieldBase* HudMvcField; // 0x30(0x08)
	struct TArray<struct UDFMHudMvcViewBase*> HudMvcViews; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHudMvcConfigInstance
// Size: 0x40 (Inherited: 0x30)
class UDFMHudMvcConfigInstance : public UObject {
public:

	struct UDFMHudMvcFieldBase* FieldInstance; // 0x30(0x08)
	struct UDFMHudMvcLogicBase* LogicInstance; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMHudMvcLevelSubsystem
// Size: 0x438 (Inherited: 0x378)
class ADFMHudMvcLevelSubsystem : public ALevelSubsystem {
public:

	struct TMap<enum class EHudModuleType, struct FDFMHudMvcConfig> HudMvcConfigMap; // 0x378(0x50)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct TMap<enum class EHudModuleType, struct UDFMHudMvcConfigInstance*> HudMvcConfigInstanceMap; // 0x3d0(0x50)
	struct FTimerHandle HudMvcLogicTickTimerHandle; // 0x420(0x08)
	char pad_428[0x10]; // 0x428(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorButton
// Size: 0x438 (Inherited: 0x298)
class UDFMInteractorButton : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UImage* EnableImage; // 0x2a0(0x08)
	struct UImage* EnableImage_2; // 0x2a8(0x08)
	struct UImage* Quality; // 0x2b0(0x08)
	struct UImage* ExImage; // 0x2b8(0x08)
	struct UButton* ItemDetailButton; // 0x2c0(0x08)
	struct UButton* ItemOperatorButton; // 0x2c8(0x08)
	struct UDFRichTextBlock* TitleText; // 0x2d0(0x08)
	struct UImage* Image_Base; // 0x2d8(0x08)
	struct UPaperSprite* EnableBG; // 0x2e0(0x08)
	struct UPaperSprite* DisableBG; // 0x2e8(0x08)
	struct TWeakObjectPtr<struct UInteractExecutor> CurrExecutor; // 0x2f0(0x08)
	struct FPotentialInteractorInfo CurrInteractableInfo; // 0x2f8(0x40)
	struct TMap<int32_t, struct FLinearColor> QualityColorMap; // 0x338(0x50)
	struct UDFMInteractorPanel* CachedDFMInteractorPanel; // 0x388(0x08)
	char pad_390[0x20]; // 0x390(0x20)
	struct FInteractableProxy LastInteractableProxy; // 0x3b0(0x10)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x3c0(0x50)
	struct UWidgetAnimation* AnimaIn; // 0x410(0x08)
	struct UWidgetAnimation* AnimaOut; // 0x418(0x08)
	char pad_420[0x18]; // 0x420(0x18)

	void OnItemOperatorButtonClick(); // Function DFMGameHud.DFMInteractorButton.OnItemOperatorButtonClick // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorButton_SingleItem
// Size: 0x468 (Inherited: 0x298)
class UDFMInteractorButton_SingleItem : public UUserWidget {
public:

	struct UImage* EnableImage; // 0x298(0x08)
	struct UButton* ItemDetailButton; // 0x2a0(0x08)
	struct UButton* ItemOperatorButton_Object; // 0x2a8(0x08)
	struct UTextBlock* TitleText; // 0x2b0(0x08)
	struct UUserWidget* WBP_SlotCompQuality; // 0x2b8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2c0(0x08)
	struct UDFInteractorExposeTipsItem* ExposeTipsItem; // 0x2c8(0x08)
	struct FSoftClassPath ExposeTipsPath; // 0x2d0(0x18)
	struct UDFInteractorWishTipsItem* WishTipsItem; // 0x2e8(0x08)
	struct FSoftClassPath WishTipsPath; // 0x2f0(0x18)
	struct UDFInteractorMissionTipsItem* MissionTipsItem; // 0x308(0x08)
	struct FSoftClassPath MissionTipsPath; // 0x310(0x18)
	struct UImage* Quality; // 0x328(0x08)
	struct UDFMImage* wtMainIcon; // 0x330(0x08)
	struct UImage* wtGridImg; // 0x338(0x08)
	struct UPaperSprite* EnableBG; // 0x340(0x08)
	struct UPaperSprite* DisableBG; // 0x348(0x08)
	struct UUserWidget* ContainerPreview; // 0x350(0x08)
	struct UMaterialInstanceDynamic* GridMID; // 0x358(0x08)
	struct TWeakObjectPtr<struct UInteractExecutor> CurrExecutor; // 0x360(0x08)
	struct FPotentialInteractorInfo CurrInteractableInfo; // 0x368(0x40)
	char pad_3A8[0x38]; // 0x3a8(0x38)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x3e0(0x50)
	struct UWidgetAnimation* AnimaIn; // 0x430(0x08)
	struct UWidgetAnimation* AnimaOut; // 0x438(0x08)
	char pad_440[0x10]; // 0x440(0x10)
	struct AInventoryPickup* UsingWeaponDescPickup; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)
	struct UDFMInteractorPanel* CachedDFMInteractorPanel; // 0x460(0x08)

	void OnWishTipsLoadComplete(struct FSoftObjectPath& InPath); // Function DFMGameHud.DFMInteractorButton_SingleItem.OnWishTipsLoadComplete // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorRadioInfoItem
// Size: 0x3a0 (Inherited: 0x388)
class UDFMInteractorRadioInfoItem : public UBaseUIView {
public:

	struct UImage* Icon; // 0x388(0x08)
	struct UTextBlock* Desc; // 0x390(0x08)
	struct URichTextBlock* Info; // 0x398(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorRadioInfoView
// Size: 0x600 (Inherited: 0x388)
class UDFMInteractorRadioInfoView : public UBaseUIView {
public:

	struct UImage* MapBaseImg; // 0x388(0x08)
	struct UMaterialInstanceDynamic* MapTextureMID; // 0x390(0x08)
	struct UCanvasPanel* BigMapPanel; // 0x398(0x08)
	struct UScaleBox* BigMapCanvas; // 0x3a0(0x08)
	struct UButton* CloseBtn; // 0x3a8(0x08)
	struct TArray<struct UImage*> ExitIconArray; // 0x3b0(0x10)
	struct TArray<struct FName> ExitIconNameArray; // 0x3c0(0x10)
	struct TArray<struct UDFMInteractorRadioInfoItem*> InfoItemArray; // 0x3d0(0x10)
	struct TArray<struct FName> InfoItemNameArray; // 0x3e0(0x10)
	struct TArray<struct UCanvasPanel*> TeamPanelArray; // 0x3f0(0x10)
	struct TArray<struct FName> TeamPanelNameArray; // 0x400(0x10)
	struct TArray<struct UImage*> TeamIconArray; // 0x410(0x10)
	struct TArray<struct FName> TeamIconNameArray; // 0x420(0x10)
	struct TArray<struct UImage*> TeamArrowArray; // 0x430(0x10)
	struct TArray<struct FName> TeamArrowNameArray; // 0x440(0x10)
	struct TArray<struct UImage*> TeamBigArrowArray; // 0x450(0x10)
	struct TArray<struct FName> TeamBigArrowNameArray; // 0x460(0x10)
	struct UWidgetAnimation* AnimaIn; // 0x470(0x08)
	struct UWidgetAnimation* AnimaOut; // 0x478(0x08)
	struct UWidgetAnimation* AnimaGetInfoIn; // 0x480(0x08)
	struct UWidgetAnimation* AnimaInfoIn; // 0x488(0x08)
	struct UWidgetAnimation* AnimaInfoLoop; // 0x490(0x08)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x498(0x50)
	struct UButton* InfoBtn; // 0x4e8(0x08)
	struct UCanvasPanel* InfoPanel; // 0x4f0(0x08)
	char pad_4F8[0x1]; // 0x4f8(0x01)
	bool bHasSetMap; // 0x4f9(0x01)
	char pad_4FA[0x6]; // 0x4fa(0x06)
	struct AInteractor_Radio* CachedRadio; // 0x500(0x08)
	struct FVector2D MapSize; // 0x508(0x08)
	float CurrentScale; // 0x510(0x04)
	struct FVector2D CurrentMapUVPos; // 0x514(0x08)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct UMobilePlayerInput* PlayerInput; // 0x520(0x08)
	char pad_528[0xc]; // 0x528(0x0c)
	float OutTouchDis; // 0x534(0x04)
	bool bTouchOut; // 0x538(0x01)
	char pad_539[0x23]; // 0x539(0x23)
	float FingerLengthValue; // 0x55c(0x04)
	struct FVector WorldCenter; // 0x560(0x0c)
	struct FVector WorldExtent; // 0x56c(0x0c)
	struct UCurveFloat* BigMapZoomCurve; // 0x578(0x08)
	struct FVector UVSwapAndReserve; // 0x580(0x0c)
	char pad_58C[0x18]; // 0x58c(0x18)
	struct FVector2D CurrentScaleAnchor; // 0x5a4(0x08)
	float CurrentNormalizedScale; // 0x5ac(0x04)
	char pad_5B0[0x8]; // 0x5b0(0x08)
	struct TArray<struct APlayerExitBase*> CachedUnExploredExitArray; // 0x5b8(0x10)
	struct TArray<struct APlayerExitBase*> SelectedArray; // 0x5c8(0x10)
	char pad_5D8[0x10]; // 0x5d8(0x10)
	float FadeInKeepTime; // 0x5e8(0x04)
	float GetInfoFadeInKeepTime; // 0x5ec(0x04)
	float InfoFadeInKeepTime; // 0x5f0(0x04)
	float FadeOutKeepTime; // 0x5f4(0x04)
	float InfoLoopKeepTime; // 0x5f8(0x04)
	char pad_5FC[0x4]; // 0x5fc(0x04)

	void OnUseRadio(struct TArray<struct APlayerExitBase*>& InExitArray, struct TArray<struct APlayerExitBase*>& InSelectedArray, struct AActor* InRadio); // Function DFMGameHud.DFMInteractorRadioInfoView.OnUseRadio // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorUtil
// Size: 0x30 (Inherited: 0x30)
class UDFMInteractorUtil : public UObject {
public:


	void STATIC_TryInteractKeyDwon(); // Function DFMGameHud.DFMInteractorUtil.TryInteractKeyDwon // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView
// Size: 0x728 (Inherited: 0x388)
class UDFMInteractorView : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct TArray<struct FItemBaseViewInfo> ItemBaseViewsInfo; // 0x390(0x10)
	char pad_3A0[0x8]; // 0x3a0(0x08)
	struct UDFMInteractorView_Rescue* Interact_Rescue; // 0x3a8(0x08)
	bool bShouldShowControlledByLua; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	float AllowMergeMaxDistSquare; // 0x3b4(0x04)
	/*struct TMap<struct FGameplayTag, struct TSoftClassPtr<UObject>>*/char ItemSoftClassMap[0x50]; // 0x3b8(0x50)
	struct TArray<struct FItemBaseSoftClassInfo> ItemBasesSoftClassInfo; // 0x408(0x10)
	/*struct TMap<struct FGameplayTag, struct TSoftClassPtr<UObject>>*/char SubViewSoftClassMap[0x50]; // 0x418(0x50)
	struct FVector WidgetOffset; // 0x468(0x0c)
	char pad_474[0x4]; // 0x474(0x04)
	struct TArray<float> EdgePadding; // 0x478(0x10)
	struct FVector2D ScreenOffset; // 0x488(0x08)
	struct TMap<struct FSoftObjectPath, uint64_t> LoadHandleMap; // 0x490(0x50)
	struct TMap<int32_t, struct FGameplayTag> AsyncLoadingMap; // 0x4e0(0x50)
	struct TArray<struct UDFMInteractorView_ItemBase*> AllItems; // 0x530(0x10)
	struct TMap<struct FGameplayTag, struct UDFMInteractorView_ItemBase*> ItemsMap; // 0x540(0x50)
	struct UCanvasPanel* RootCanvas; // 0x590(0x08)
	struct UCanvasPanel* Canvas; // 0x598(0x08)
	struct TMap<struct FGameplayTag, struct UDFMInteractorView_SubViewBase*> SubViewMap; // 0x5a0(0x50)
	char pad_5F0[0x8]; // 0x5f0(0x08)
	struct UDFMInteractorView_WhiteDot* WhiteDot0; // 0x5f8(0x08)
	struct UDFMInteractorView_WhiteDot* WhiteDot1; // 0x600(0x08)
	struct UDFMInteractorView_WhiteDot* WhiteDot2; // 0x608(0x08)
	struct TArray<struct UDFMInteractorView_WhiteDot*> WhiteDotWidgets; // 0x610(0x10)
	struct TArray<struct UDFMInteractorView_WhiteDot*> UsingWhiteDotWidgets; // 0x620(0x10)
	struct TMap<struct FInteractableProxy, struct UDFMInteractorView_WhiteDot*> MapInteractableProxy2WhiteDotWidget; // 0x630(0x50)
	struct UTextBlock* WhiteDotDistance_1; // 0x680(0x08)
	struct UTextBlock* WhiteDotDistance_2; // 0x688(0x08)
	struct UTextBlock* WhiteDotDistance_3; // 0x690(0x08)
	struct TArray<struct UTextBlock*> WhiteDotDistanceArray; // 0x698(0x10)
	bool bGMWhiteDotDistance; // 0x6a8(0x01)
	char pad_6A9[0x7]; // 0x6a9(0x07)
	struct TArray<struct FPotentialInteractorInfo> CurrentPotentialInteractors; // 0x6b0(0x10)
	struct UInteractorPanelBase* InteractorPanel; // 0x6c0(0x08)
	struct FGameplayTagContainer LootingTagContainer; // 0x6c8(0x20)
	struct FPotentialInteractorInfo RescueInteractorInfo; // 0x6e8(0x40)

	void UpdateScreenPositionByInteractableProxy(struct AGPPlayerController* Controller, struct UDFMInteractorView_WhiteDot* WhiteDotWidget, struct FInteractableProxy InInteractableProxy, bool bEdgeTracking); // Function DFMGameHud.DFMInteractorView.UpdateScreenPositionByInteractableProxy // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView_InteractBase
// Size: 0x388 (Inherited: 0x388)
class UDFMInteractorView_InteractBase : public UBaseUIView {
public:


	void OnInteractKeyDown(int32_t Type); // Function DFMGameHud.DFMInteractorView_InteractBase.OnInteractKeyDown // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView_ItemBaseSub
// Size: 0x378 (Inherited: 0x298)
class UDFMInteractorView_ItemBaseSub : public UUserWidget {
public:

	/*struct FMulticastInlineDelegate*/char OnOperatorBtnClick[0x10]; // 0x298(0x10)
	/*struct FMulticastInlineDelegate*/char OnDetailBtnClick[0x10]; // 0x2a8(0x10)
	struct UTextBlock* TitleText; // 0x2b8(0x08)
	struct UImage* ExImage; // 0x2c0(0x08)
	struct UImage* EnableImage; // 0x2c8(0x08)
	struct UImage* Quality; // 0x2d0(0x08)
	/*struct TSoftObjectPtr<UObject>*/char EnableSoftIcon[0x28]; // 0x2d8(0x28)
	/*struct TSoftObjectPtr<UObject>*/char UnableSoftIcon[0x28]; // 0x300(0x28)
	struct FInteractableInfo CurrInteractableInfo; // 0x328(0x30)
	struct AActor* CurrActor; // 0x358(0x08)
	struct UButton* ItemOperatorButton; // 0x360(0x08)
	struct UButton* ItemDetailButton; // 0x368(0x08)
	char pad_370[0x8]; // 0x370(0x08)

	void UpdateInteractableInfo(struct AActor* inActor, struct FInteractableInfo& InInfo, bool ShowBtn); // Function DFMGameHud.DFMInteractorView_ItemBaseSub.UpdateInteractableInfo // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView_RescueFlag
// Size: 0x2e0 (Inherited: 0x298)
class UDFMInteractorView_RescueFlag : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct AGPCharacterBase* CHARACTER; // 0x2a0(0x08)
	float Distance; // 0x2a8(0x04)
	struct FVector2D Direction; // 0x2ac(0x08)
	bool MeterShowLeftSide; // 0x2b4(0x01)
	bool bOffScreen; // 0x2b5(0x01)
	char pad_2B6[0x2]; // 0x2b6(0x02)
	int32_t PlayerNum; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UTextBlock* Text_PlayerNum; // 0x2c0(0x08)
	char pad_2C8[0x18]; // 0x2c8(0x18)

	void BP_Tick(float DeltaTime); // Function DFMGameHud.DFMInteractorView_RescueFlag.BP_Tick // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractor_CanvasPanel
// Size: 0x1a8 (Inherited: 0x198)
class UDFMInteractor_CanvasPanel : public UCanvasPanel {
public:

	struct FGameplayTag OperatorTag; // 0x198(0x08)
	char pad_1A0[0x8]; // 0x1a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView_WhiteDot
// Size: 0x358 (Inherited: 0x298)
class UDFMInteractorView_WhiteDot : public UUserWidget {
public:

	struct FInteractableProxy InteractableProxy; // 0x298(0x10)
	struct UDFMInteractorView* Parent; // 0x2a8(0x08)
	struct UCanvasPanel* ArrowRotation; // 0x2b0(0x08)
	bool bUpdateLocationThisFrame; // 0x2b8(0x01)
	enum class EWhiteDotAnimaStatus AnimaStatus; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x2c0(0x50)
	float FadeInSpeed; // 0x310(0x04)
	float FadeOutSpeed; // 0x314(0x04)
	struct UWidgetAnimation* AnimSmallToMedium; // 0x318(0x08)
	struct UWidgetAnimation* AnimMediumToSmall; // 0x320(0x08)
	struct UWidgetAnimation* AnimLoop; // 0x328(0x08)
	struct UWidgetAnimation* AnimaLootFailed; // 0x330(0x08)
	struct UWidgetAnimation* AnimaMediumToTiny; // 0x338(0x08)
	char pad_340[0x18]; // 0x340(0x18)

	void RecoveryMedium(); // Function DFMGameHud.DFMInteractorView_WhiteDot.RecoveryMedium // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMLongPressButton
// Size: 0x4e0 (Inherited: 0x4b0)
class UDFMLongPressButton : public UButton {
public:

	/*struct FMulticastInlineDelegate*/char OnButtonMouseMove[0x10]; // 0x4b0(0x10)
	/*struct FMulticastInlineDelegate*/char OnActiveReleased[0x10]; // 0x4c0(0x10)
	char pad_4D0[0x10]; // 0x4d0(0x10)

	void ActiveRelease(); // Function DFMGameHud.DFMLongPressButton.ActiveRelease // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMediaImage
// Size: 0x370 (Inherited: 0x2e0)
class UDFMMediaImage : public UImage {
public:

	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x2e8(0x08)
	struct UMediaSource* MediaSource; // 0x2f0(0x08)
	struct FName AudioEventName; // 0x2f8(0x08)
	struct UDFMUIAudioPlayer* AudioPlayer; // 0x300(0x08)
	char pad_308[0x68]; // 0x308(0x68)

	void PlayMedia(); // Function DFMGameHud.DFMMediaImage.PlayMedia // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMeleeWeaponSelectItemView
// Size: 0x2c8 (Inherited: 0x298)
class UDFMMeleeWeaponSelectItemView : public UUserWidget {
public:

	char WeaponIndex; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct UButton* MeleeItemBtn; // 0x2a0(0x08)
	struct UImage* MeleeItemImg; // 0x2a8(0x08)
	uint64_t WeaponGId; // 0x2b0(0x08)
	char pad_2B8[0x10]; // 0x2b8(0x10)

	void OnClickedEvent(); // Function DFMGameHud.DFMMeleeWeaponSelectItemView.OnClickedEvent // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMidKeyTipsView
// Size: 0x3a0 (Inherited: 0x388)
class UDFMMidKeyTipsView : public UBaseUIView {
public:

	float ShowTime; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct UUserWidget* WBP_ControllerKeyItem_NotifyTeammates; // 0x390(0x08)
	struct FTimerHandle Handle; // 0x398(0x08)

	void EndShow(); // Function DFMGameHud.DFMMidKeyTipsView.EndShow // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileArmdedForceItemView
// Size: 0x680 (Inherited: 0x5a8)
class UDFMMobileArmdedForceItemView : public ULuaUIHudBaseView {
public:

	struct FName TextName; // 0x5a8(0x08)
	bool InvalidateEveryTick; // 0x5b0(0x01)
	char pad_5B1[0x1f]; // 0x5b1(0x1f)
	struct UTextBlock* CDText; // 0x5d0(0x08)
	struct UImage* NumPanel; // 0x5d8(0x08)
	struct UTextBlock* NumText; // 0x5e0(0x08)
	struct UTextBlock* AmmoNumText; // 0x5e8(0x08)
	struct UImage* ProgressImage1; // 0x5f0(0x08)
	struct UImage* ProgressImage2; // 0x5f8(0x08)
	struct UImage* IconImage; // 0x600(0x08)
	struct UImage* NumBackImage; // 0x608(0x08)
	struct UImage* ImgCooldownProcess; // 0x610(0x08)
	struct UProgressBar* CooldownProcess; // 0x618(0x08)
	struct FName ProgressParameterName; // 0x620(0x08)
	int32_t iUsingType; // 0x628(0x04)
	int32_t bCharging; // 0x62c(0x04)
	int32_t bCoding; // 0x630(0x04)
	int32_t iArmType; // 0x634(0x04)
	int32_t bIsItem; // 0x638(0x04)
	int32_t EnumType; // 0x63c(0x04)
	int32_t iAmmoNum; // 0x640(0x04)
	int32_t iSlotNum; // 0x644(0x04)
	int32_t iMaxNum; // 0x648(0x04)
	int32_t iShowNum; // 0x64c(0x04)
	int32_t iPercentNg; // 0x650(0x04)
	char pad_654[0x4]; // 0x654(0x04)
	struct UWidget* KeyBox; // 0x658(0x08)
	struct TArray<enum class EDFMGamePlayMode> InVisibleMode; // 0x660(0x10)
	float timerRate; // 0x670(0x04)
	char pad_674[0xc]; // 0x674(0x0c)

	void SetUsingType(int32_t Type); // Function DFMGameHud.DFMMobileArmdedForceItemView.SetUsingType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileArmdedForceItemViewPC
// Size: 0x678 (Inherited: 0x5a8)
class UDFMMobileArmdedForceItemViewPC : public ULuaUIHudBaseView {
public:

	struct FName TextName; // 0x5a8(0x08)
	bool InvalidateEveryTick; // 0x5b0(0x01)
	char pad_5B1[0x27]; // 0x5b1(0x27)
	struct UTextBlock* CDText; // 0x5d8(0x08)
	struct UImage* NumPanel; // 0x5e0(0x08)
	struct UTextBlock* NumText; // 0x5e8(0x08)
	struct UTextBlock* MaxNumText; // 0x5f0(0x08)
	struct UImage* ProgressImage1; // 0x5f8(0x08)
	struct UImage* ProgressImage2; // 0x600(0x08)
	struct UImage* IconImage; // 0x608(0x08)
	struct UImage* NumBackImage; // 0x610(0x08)
	struct UImage* LineImage; // 0x618(0x08)
	struct FName ProgressParameterName; // 0x620(0x08)
	float ProgressParameterValueA; // 0x628(0x04)
	float ProgressParameterValueB; // 0x62c(0x04)
	struct UWidget* KeyBox; // 0x630(0x08)
	struct TArray<enum class EDFMGamePlayMode> InVisibleMode; // 0x638(0x10)
	int32_t iUsingType; // 0x648(0x04)
	int32_t bCharging; // 0x64c(0x04)
	int32_t bCoding; // 0x650(0x04)
	int32_t iArmType; // 0x654(0x04)
	int32_t bIsItem; // 0x658(0x04)
	int32_t EnumType; // 0x65c(0x04)
	int32_t iAmmoNum; // 0x660(0x04)
	int32_t iSlotNum; // 0x664(0x04)
	int32_t iMaxNum; // 0x668(0x04)
	int32_t iShowNum; // 0x66c(0x04)
	int32_t iPercentNg; // 0x670(0x04)
	char pad_674[0x4]; // 0x674(0x04)

	void SetUsingType(int32_t Type); // Function DFMGameHud.DFMMobileArmdedForceItemViewPC.SetUsingType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileChargeGunCrosshairView
// Size: 0x398 (Inherited: 0x388)
class UDFMMobileChargeGunCrosshairView : public UBaseUIView {
public:

	char pad_388[0x10]; // 0x388(0x10)

	void OnSwitchZoomState(bool bFlag); // Function DFMGameHud.DFMMobileChargeGunCrosshairView.OnSwitchZoomState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCircleUserWidget
// Size: 0x2a0 (Inherited: 0x298)
class UDFMMobileCircleUserWidget : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)

	bool CheckIfInCircle(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function DFMGameHud.DFMMobileCircleUserWidget.CheckIfInCircle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCustomLayoutAttachPanel
// Size: 0x5d0 (Inherited: 0x550)
class UDFMMobileCustomLayoutAttachPanel : public ULuaUIBaseView {
public:

	struct UDFMMobileCustomLayoutDraggableButton* CurAttachDragBtn; // 0x550(0x08)
	struct UButton* MoveUpBtn; // 0x558(0x08)
	struct UButton* MoveDownBtn; // 0x560(0x08)
	struct UButton* MoveLeftBtn; // 0x568(0x08)
	struct UButton* MoveRightBtn; // 0x570(0x08)
	struct UImage* ExtendBoxImg; // 0x578(0x08)
	struct UCanvasPanel* EditCanvasPanel; // 0x580(0x08)
	struct UTextBlock* BtnNameText; // 0x588(0x08)
	/*struct FMulticastInlineDelegate*/char OnLayoutChange[0x10]; // 0x590(0x10)
	bool bLeftFireShow; // 0x5a0(0x01)
	bool bRightFireShow; // 0x5a1(0x01)
	char pad_5A2[0x6]; // 0x5a2(0x06)
	/*struct FMulticastInlineDelegate*/char OnSelectDragBtn[0x10]; // 0x5a8(0x10)
	float ShowEditPanelMaxTime; // 0x5b8(0x04)
	float PressBtnTimeStamp; // 0x5bc(0x04)
	float OldRunAreaSlotY; // 0x5c0(0x04)
	struct FVector2D EditorAbsolutePos; // 0x5c4(0x08)
	char pad_5CC[0x4]; // 0x5cc(0x04)

	void SaveBtnSteerChange(); // Function DFMGameHud.DFMMobileCustomLayoutAttachPanel.SaveBtnSteerChange // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCustomLayoutBPLibrary
// Size: 0x30 (Inherited: 0x30)
class UDFMMobileCustomLayoutBPLibrary : public UObject {
public:


	void STATIC_ShareCustomLayoutInfo(struct UObject* WorldContextObject, struct FString CustomLayoutName); // Function DFMGameHud.DFMMobileCustomLayoutBPLibrary.ShareCustomLayoutInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCustomLayoutDragBtnAppearance
// Size: 0x2e8 (Inherited: 0x2e0)
class UDFMMobileCustomLayoutDragBtnAppearance : public UImage {
public:

	char pad_2E0[0x8]; // 0x2e0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCustomLayoutDragBtnExtendPanel
// Size: 0x1a0 (Inherited: 0x198)
class UDFMMobileCustomLayoutDragBtnExtendPanel : public UCanvasPanel {
public:

	char pad_198[0x8]; // 0x198(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCustomLayoutDraggableButton
// Size: 0x5e8 (Inherited: 0x4c0)
class UDFMMobileCustomLayoutDraggableButton : public UMobileDraggableButton {
public:

	struct TArray<struct UWidget*> WidgetsMouseDown; // 0x4c0(0x10)
	/*struct FMulticastInlineDelegate*/char OnMouseDraggableButtonDown[0x10]; // 0x4d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnMouseDraggableButtonUp[0x10]; // 0x4e0(0x10)
	/*struct FMulticastInlineDelegate*/char OnMouseDraggableButtonMoved[0x10]; // 0x4f0(0x10)
	/*struct FMulticastInlineDelegate*/char OnLayoutDraggableButtonDown[0x10]; // 0x500(0x10)
	/*struct FMulticastInlineDelegate*/char OnLayoutDraggableButtonUp[0x10]; // 0x510(0x10)
	/*struct FMulticastInlineDelegate*/char OnLayoutDraggableButtonMove[0x10]; // 0x520(0x10)
	/*struct FMulticastInlineDelegate*/char OnPositionChange[0x10]; // 0x530(0x10)
	/*struct FMulticastInlineDelegate*/char OnLayoutSteerChange[0x10]; // 0x540(0x10)
	/*struct FMulticastInlineDelegate*/char OnDraggableButtonScaleChange[0x10]; // 0x550(0x10)
	/*struct FMulticastInlineDelegate*/char OnFetchCustomLayoutAppearance[0x10]; // 0x560(0x10)
	bool bIsForbidable; // 0x570(0x01)
	bool bIsForbid; // 0x571(0x01)
	bool bIsSteer; // 0x572(0x01)
	bool bOwnSteer; // 0x573(0x01)
	bool bIsSizeScale; // 0x574(0x01)
	bool bInCustomPanel; // 0x575(0x01)
	bool bAutoLayout; // 0x576(0x01)
	bool bAssemble; // 0x577(0x01)
	bool LimitYMove; // 0x578(0x01)
	bool LimitXMove; // 0x579(0x01)
	bool LimitScale; // 0x57a(0x01)
	bool LimitRenderOpacity; // 0x57b(0x01)
	int32_t AnchorIndex; // 0x57c(0x04)
	float Scale; // 0x580(0x04)
	float LastFrameScale; // 0x584(0x04)
	struct FVector2D StandardSize; // 0x588(0x08)
	struct FText DragBtnName; // 0x590(0x18)
	struct FString TargetLayoutName; // 0x5a8(0x10)
	struct FString Key; // 0x5b8(0x10)
	float SprintAreaSize; // 0x5c8(0x04)
	struct FVector2D CachedPressOffset; // 0x5cc(0x08)
	enum class ESlateVisibility LastVisibility; // 0x5d4(0x01)
	char pad_5D5[0x3]; // 0x5d5(0x03)
	struct TWeakObjectPtr<struct UDFMMobileCustomLayoutAttachPanel> AttachPanel; // 0x5d8(0x08)
	struct FVector2D FrameMoveDelta; // 0x5e0(0x08)

	void SetSprintAreaSize(float RunSize); // Function DFMGameHud.DFMMobileCustomLayoutDraggableButton.SetSprintAreaSize // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCustomLayoutView
// Size: 0x590 (Inherited: 0x550)
class UDFMMobileCustomLayoutView : public ULuaUIBaseView {
public:

	bool bIsVehicleLayout; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct UDFMMobileCustomLayoutDraggableButton* DefaultEditButton; // 0x558(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* CurrentEditBtn; // 0x560(0x08)
	struct UDFMMobileCustomLayoutAttachPanel* AttachPanel; // 0x568(0x08)
	struct UDFMCustomLayoutStackDataCenter* StackMgr; // 0x570(0x08)
	struct TArray<struct UDFMMobileCustomLayoutDraggableButton*> AllDragBtns; // 0x578(0x10)
	enum class EFunctionBtnRotationMode FunctionBtnRotationMode; // 0x588(0x01)
	char pad_589[0x7]; // 0x589(0x07)

	void ShareCustomLayout(struct FString LayoutName); // Function DFMGameHud.DFMMobileCustomLayoutView.ShareCustomLayout // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCustomShapeButton
// Size: 0x4c0 (Inherited: 0x4b0)
class UDFMMobileCustomShapeButton : public UButton {
public:

	struct UTexture2D* AdvancedHitTexture; // 0x4b0(0x08)
	int32_t AdvancedHitAlpha; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)

	void SetAdvancedHitTexture(struct UTexture2D* InTexture); // Function DFMGameHud.DFMMobileCustomShapeButton.SetAdvancedHitTexture // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileEBGView
// Size: 0x3e8 (Inherited: 0x3b8)
class UDFMMobileEBGView : public UMobileGamePadView {
public:

	struct UTextBlock* Text_TeamMateInfo; // 0x3b8(0x08)
	struct UTextBlock* Text_CountDown; // 0x3c0(0x08)
	struct UTextBlock* Text_PlayerStart; // 0x3c8(0x08)
	struct UImage* Image_PlayerStart; // 0x3d0(0x08)
	char pad_3D8[0x10]; // 0x3d8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMWeaponFireIconImage
// Size: 0x350 (Inherited: 0x2e0)
class UDFMWeaponFireIconImage : public UImage {
public:

	struct TArray<struct FFireIconInfo> FireIconConfigList; // 0x2e0(0x10)
	struct TMap<struct FName, struct UObject*> FireIconByItemId; // 0x2f0(0x50)
	char pad_340[0x10]; // 0x340(0x10)

	void SetWeapon(struct AWeaponBase* Weapon, struct AGPCharacterBase* WeaponOwner); // Function DFMGameHud.DFMWeaponFireIconImage.SetWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileForbidMoveCtrlWidget
// Size: 0x298 (Inherited: 0x298)
class UDFMMobileForbidMoveCtrlWidget : public UUserWidget {
public:


	void OnWidgetVisibilityChange(bool IsVisible); // Function DFMGameHud.DFMMobileForbidMoveCtrlWidget.OnWidgetVisibilityChange // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileGMAiDifficultyView
// Size: 0x990 (Inherited: 0x3b8)
class UDFMMobileGMAiDifficultyView : public UMobileGamePadView {
public:

	int32_t GlobalDifficulty; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct TArray<struct FName> AiNames; // 0x3c0(0x10)
	struct TArray<int32_t> AllDifficultyLevel; // 0x3d0(0x10)
	struct FAiDifficultyDebugData CurrAiDebugInfo; // 0x3e0(0x5b0)

	void RefreshAllInfo(); // Function DFMGameHud.DFMMobileGMAiDifficultyView.RefreshAllInfo // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileGMAttributeItem
// Size: 0x398 (Inherited: 0x388)
class UDFMMobileGMAttributeItem : public UBaseUIView {
public:

	struct URichTextBlock* NameText; // 0x388(0x08)
	struct URichTextBlock* ValueText; // 0x390(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileGMAttributeView
// Size: 0x418 (Inherited: 0x3b8)
class UDFMMobileGMAttributeView : public UMobileGamePadView {
public:

	struct UScrollBox* ScrollBox1; // 0x3b8(0x08)
	struct TMap<struct FString, struct UDFMMobileGMAttributeItem*> RichTextMap; // 0x3c0(0x50)
	char pad_410[0x8]; // 0x410(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileGMCharacterLogView
// Size: 0x3f8 (Inherited: 0x3b8)
class UDFMMobileGMCharacterLogView : public UMobileGamePadView {
public:

	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct URichTextBlock* RichTextBlock_196; // 0x3c0(0x08)
	struct UCanvasPanel* CanvasPanel_Father; // 0x3c8(0x08)
	struct UCanvasPanel* CanvasPanel_DouDou; // 0x3d0(0x08)
	struct UTextBlock* Text_StandardPixel; // 0x3d8(0x08)
	int32_t DebugFontSize; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct FGMMobileInputData> CurrentGMInputData; // 0x3e8(0x10)

	void UpdateDouDouInfo(struct FVector2D& TouchPoint, struct FVector2D& StandardPoint); // Function DFMGameHud.DFMMobileGMCharacterLogView.UpdateDouDouInfo // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileGMRotationConsoleView
// Size: 0x3b8 (Inherited: 0x3b8)
class UDFMMobileGMRotationConsoleView : public UMobileGamePadView {
public:


	struct FText ShowGyroDebugMsg(); // Function DFMGameHud.DFMMobileGMRotationConsoleView.ShowGyroDebugMsg // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileGMTeamInfoView
// Size: 0x3a8 (Inherited: 0x388)
class UDFMMobileGMTeamInfoView : public UBaseUIView {
public:

	struct UButton* CloseTeamDetailBtn; // 0x388(0x08)
	struct UScrollBox* TeamInfoScrollBox; // 0x390(0x08)
	struct UTextBlock* AiInfoText; // 0x398(0x08)
	bool bIsInited; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)

	void OnCloseTeamDetailBtnClicked(); // Function DFMGameHud.DFMMobileGMTeamInfoView.OnCloseTeamDetailBtnClicked // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileGMView
// Size: 0x408 (Inherited: 0x3b8)
class UDFMMobileGMView : public UMobileGamePadView {
public:

	char pad_3B8[0x28]; // 0x3b8(0x28)
	float TriggerAreaWidth; // 0x3e0(0x04)
	float TriggerAreaHeight; // 0x3e4(0x04)
	float TriggerCheckInterval; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	bool bShouldShowGMPanel; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct UComboBoxString* GiveWeaponCmd; // 0x3f8(0x08)
	struct UComboBoxString* GiveWeaponThrowableCmd; // 0x400(0x08)

	void ShowGMPanel(); // Function DFMGameHud.DFMMobileGMView.ShowGMPanel // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileHeavyMachineGunView
// Size: 0x3d8 (Inherited: 0x3b8)
class UDFMMobileHeavyMachineGunView : public UMobileGamePadView {
public:

	struct UButton* Button_Exit; // 0x3b8(0x08)
	struct UProgressBar* OverHeatProcessBar; // 0x3c0(0x08)
	struct UCanvasPanel* VehicleGunPanel; // 0x3c8(0x08)
	struct UCanvasPanel* OnLandGunPanel; // 0x3d0(0x08)

	void OnButtonExitClick(); // Function DFMGameHud.DFMMobileHeavyMachineGunView.OnButtonExitClick // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HelmetFaceMaskViewModel
// Size: 0x8c0 (Inherited: 0x3b8)
class UHelmetFaceMaskViewModel : public UMobileGamePadView {
public:

	struct UMaterialInstanceDynamic* HelmetMaskMatDy; // 0x3b8(0x08)
	char pad_3C0[0x18]; // 0x3c0(0x18)
	struct AGPCharacterBase* GPCharacter; // 0x3d8(0x08)
	struct TWeakObjectPtr<struct UCharacterEquipComponent> EquitComp; // 0x3e0(0x08)
	struct TWeakObjectPtr<struct UHelmetComponent> HelmetComp; // 0x3e8(0x08)
	struct TMap<struct FSoftObjectPath, struct UImage*> BorderImage; // 0x3f0(0x50)
	struct TMap<struct FSoftObjectPath, struct UImage*> SurfaceImage; // 0x440(0x50)
	struct TArray<struct UTexture2D*> DamageTextures; // 0x490(0x10)
	struct TMap<struct FSoftObjectPath, struct UTexture2D*> LoadedTextures; // 0x4a0(0x50)
	struct TMap<uint64_t, struct FLoadedCache> LoadedAssets; // 0x4f0(0x50)
	struct FSlateBrush Brush; // 0x540(0x90)
	struct UCanvasPanel* BgPanel; // 0x5d0(0x08)
	struct FHelmetFunctionRow HelmetFunctionRow; // 0x5d8(0x280)
	struct UGPAudioEventAsset* HelmetBreakAudioEventAsset; // 0x858(0x08)
	char pad_860[0x50]; // 0x860(0x50)
	struct UCurveFloat* DistanceCurve; // 0x8b0(0x08)
	char pad_8B8[0x8]; // 0x8b8(0x08)

	void UpdateHelmetMaskView_PC(uint64_t ItemID); // Function DFMGameHud.HelmetFaceMaskViewModel.UpdateHelmetMaskView_PC // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileItemPC
// Size: 0x398 (Inherited: 0x388)
class UDFMMobileItemPC : public UBaseUIView {
public:

	char pad_388[0x10]; // 0x388(0x10)

	void OuterTick(); // Function DFMGameHud.DFMMobileItemPC.OuterTick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileJoystickUserWidget
// Size: 0x5a0 (Inherited: 0x3b8)
class UDFMMobileJoystickUserWidget : public UMobileGamePadView {
public:

	char pad_3B8[0x8]; // 0x3b8(0x08)
	/*struct FMulticastInlineDelegate*/char OnJoystickTouchClicked[0x10]; // 0x3c0(0x10)
	/*struct FMulticastInlineDelegate*/char OnJoystickTouchPressed[0x10]; // 0x3d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnJoystickTouchReleased[0x10]; // 0x3e0(0x10)
	/*struct FMulticastInlineDelegate*/char OnJoystickTouchDoubleClicked[0x10]; // 0x3f0(0x10)
	/*struct FMulticastInlineDelegate*/char OnJoystickTouchMaxDraged[0x10]; // 0x400(0x10)
	/*struct FMulticastInlineDelegate*/char OnJoystickTouchNoMaxDraged[0x10]; // 0x410(0x10)
	struct UImage* JoystickImage; // 0x420(0x08)
	struct UImage* JoystickImageBG; // 0x428(0x08)
	struct UImage* JoystickImagePress; // 0x430(0x08)
	struct UImage* JoystickImageBGPress; // 0x438(0x08)
	struct UImage* JoystickImageBGRelease; // 0x440(0x08)
	float PressIntervalTime; // 0x448(0x04)
	float DoubleClickedIntervalTime; // 0x44c(0x04)
	bool bContinuePress; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	float TriggerRadiusMultiple; // 0x454(0x04)
	struct FSlateBrush JoystickBrush; // 0x458(0x90)
	struct FSlateBrush JoystickPressBrush; // 0x4e8(0x90)
	bool bMove; // 0x578(0x01)
	bool bPlayAnim; // 0x579(0x01)
	bool bUse; // 0x57a(0x01)
	char pad_57B[0x5]; // 0x57b(0x05)
	struct AGPPlayerController* CachePC; // 0x580(0x08)
	struct UMobilePlayerInput* CacheNZPCInput; // 0x588(0x08)
	char pad_590[0x10]; // 0x590(0x10)

	void OnTouchReleasedEvent(); // Function DFMGameHud.DFMMobileJoystickUserWidget.OnTouchReleasedEvent // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileMedkitButtonView
// Size: 0x490 (Inherited: 0x3b8)
class UDFMMobileMedkitButtonView : public UMobileGamePadView {
public:

	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x3b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x3c0(0x08)
	struct UTextBlock* CurNumText; // 0x3c8(0x08)
	struct UTextBlock* CurNameText; // 0x3d0(0x08)
	struct UUserWidget* H_Medkit_1002; // 0x3d8(0x08)
	struct UUserWidget* H_Medkit_1003; // 0x3e0(0x08)
	struct UUserWidget* H_Medkit_1004; // 0x3e8(0x08)
	struct UUserWidget* H_Medkit_1005; // 0x3f0(0x08)
	struct UUserWidget* H_Medkit_1006; // 0x3f8(0x08)
	struct UUserWidget* H_Medkit_1007; // 0x400(0x08)
	struct UCanvasPanel* ContainerPanel; // 0x408(0x08)
	struct TArray<struct UUserWidget*> Widgets; // 0x410(0x10)
	char pad_420[0x10]; // 0x420(0x10)
	struct TArray<struct UButtonClickProxy*> ClickProxys; // 0x430(0x10)
	struct TArray<struct UButton*> BtnUseItemList; // 0x440(0x10)
	struct TArray<struct UTextBlock*> NumUseItemList; // 0x450(0x10)
	struct TArray<struct UImage*> ImgUseItemList; // 0x460(0x10)
	struct TArray<struct AGPInventoryBase*> InventoryList; // 0x470(0x10)
	struct UInventoryItemBase* CurUseInventory; // 0x480(0x08)
	char pad_488[0x8]; // 0x488(0x08)

	void RefreshView(); // Function DFMGameHud.DFMMobileMedkitButtonView.RefreshView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileOpenSightButtonView
// Size: 0x3a0 (Inherited: 0x388)
class UDFMMobileOpenSightButtonView : public UBaseUIView {
public:

	struct UCheckbox* OpenSightBtn; // 0x388(0x08)
	struct UWidgetSwitcher* SightSwitch; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)

	void OnSightCheck(bool bIsChecked); // Function DFMGameHud.DFMMobileOpenSightButtonView.OnSightCheck // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileQuitButtonView
// Size: 0x390 (Inherited: 0x388)
class UDFMMobileQuitButtonView : public UBaseUIView {
public:

	struct UButton* BtnQuit; // 0x388(0x08)

	void OnClickQuitGame(); // Function DFMGameHud.DFMMobileQuitButtonView.OnClickQuitGame // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileRotationButtonView
// Size: 0x4f0 (Inherited: 0x3b8)
class UDFMMobileRotationButtonView : public UMobileGamePadView {
public:

	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct FLinearColor LowEnergyColor; // 0x3c0(0x10)
	int32_t LowAmmoAlertNum; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UCanvasPanel* BagCanvas; // 0x3d8(0x08)
	struct UWidget* BagIcon_1; // 0x3e0(0x08)
	struct UImage* BagIcon_Selected; // 0x3e8(0x08)
	struct UWidget* BagLvl_2; // 0x3f0(0x08)
	struct UWidget* BagLvl_3; // 0x3f8(0x08)
	struct UWidget* BagLvl_4; // 0x400(0x08)
	struct UButton* BtnReload; // 0x408(0x08)
	struct UButton* BtnBag; // 0x410(0x08)
	struct UButton* BtnFire; // 0x418(0x08)
	struct UButton* HighLevelFireBtn; // 0x420(0x08)
	struct USlider* Slider8X; // 0x428(0x08)
	struct UTextBlock* TextScopeHigh; // 0x430(0x08)
	struct UTextBlock* TextScopeLow; // 0x438(0x08)
	struct UCanvasPanel* CanvasPanel_ReloadWindow; // 0x440(0x08)
	struct UMobileDraggableButton* DragBtnReload; // 0x448(0x08)
	struct UMobileDraggableButton* DragBtnBag; // 0x450(0x08)
	struct UMobileDraggableButton* DragBtnFire2; // 0x458(0x08)
	struct UMobileDraggableButton* DragBtnSlider8X; // 0x460(0x08)
	struct UProgressBar* BagProgressBar; // 0x468(0x08)
	struct UImage* BagProgressBarEx; // 0x470(0x08)
	struct UWidgetSwitcher* WeaponSwitcher; // 0x478(0x08)
	struct UCanvasPanel* CanvasLeftBottom; // 0x480(0x08)
	struct UCanvasPanel* CanvasAndroidSimulatorDisable; // 0x488(0x08)
	struct UCanvasPanel* CanvasBottom; // 0x490(0x08)
	struct UCanvasPanel* CanvasRight; // 0x498(0x08)
	struct UCanvasPanel* CanvasRightBottom; // 0x4a0(0x08)
	struct UImage* FireButtonBullet0; // 0x4a8(0x08)
	struct UWidgetSwitcher* ReloadSwitcher; // 0x4b0(0x08)
	struct UWidgetSwitcher* BagSwitcher; // 0x4b8(0x08)
	struct UProgressBar* EnergyPro; // 0x4c0(0x08)
	struct UImage* EnergyPro_Selected; // 0x4c8(0x08)
	char pad_4D0[0x10]; // 0x4d0(0x10)
	struct AWeaponBase* CurWeapon; // 0x4e0(0x08)
	char pad_4E8[0x8]; // 0x4e8(0x08)

	void OnTopLeftFireDown(); // Function DFMGameHud.DFMMobileRotationButtonView.OnTopLeftFireDown // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileRunAreaDraggableButton
// Size: 0x520 (Inherited: 0x4c0)
class UDFMMobileRunAreaDraggableButton : public UMobileDraggableButton {
public:

	/*struct FMulticastInlineDelegate*/char OnRunAreaSizeChange[0x10]; // 0x4c0(0x10)
	struct UImage* Arrow; // 0x4d0(0x08)
	struct UImage* ArrowSelected; // 0x4d8(0x08)
	struct UCanvasPanel* MoveLineImage; // 0x4e0(0x08)
	struct TArray<struct UWidget*> WidgetsMouseDown; // 0x4e8(0x10)
	struct TArray<struct UWidget*> WidgetsMouseUp; // 0x4f8(0x10)
	struct UDFMMobileCustomLayoutDraggableButton* JoystickMoveButton; // 0x508(0x08)
	char pad_510[0x10]; // 0x510(0x10)

	void UpdatePosition(float OldScale, float NewScale); // Function DFMGameHud.DFMMobileRunAreaDraggableButton.UpdatePosition // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileSkillItemPC
// Size: 0x508 (Inherited: 0x388)
class UDFMMobileSkillItemPC : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	int32_t currentSkilEntityID; // 0x390(0x04)
	int32_t currentSkil; // 0x394(0x04)
	int32_t currentSkilID; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct FSkillUIInfo LastUIInfo; // 0x3a0(0x78)
	float ProgressParameterValueA; // 0x418(0x04)
	float ProgressParameterValueB; // 0x41c(0x04)
	struct FName ProgressParameterName; // 0x420(0x08)
	struct FText CountText; // 0x428(0x18)
	enum class ESkillUISlot UISlot; // 0x440(0x01)
	bool InvalidateEveryTick; // 0x441(0x01)
	char pad_442[0x6]; // 0x442(0x06)
	struct UImage* DisableIconImage; // 0x448(0x08)
	struct UImage* AbilityIconImage; // 0x450(0x08)
	struct UImage* CanUseImage; // 0x458(0x08)
	struct UTextBlock* CooldownText; // 0x460(0x08)
	struct UImage* CooldownProcess; // 0x468(0x08)
	struct UTextBlock* TipsText; // 0x470(0x08)
	struct UTextBlock* ShortNameText; // 0x478(0x08)
	struct UTextBlock* WeaponSlotNumText; // 0x480(0x08)
	struct UTextBlock* WeaponMaxSlotNumText; // 0x488(0x08)
	struct UImage* WeaponImageSlotNumText; // 0x490(0x08)
	struct UImage* BackImage; // 0x498(0x08)
	struct UImage* LineImage; // 0x4a0(0x08)
	struct UWidget* KeyBox; // 0x4a8(0x08)
	struct UUserWidget* WBP_ControllerButtonNotAvailable; // 0x4b0(0x08)
	struct UUserWidget* WBP_ControllerButtonSkillCar; // 0x4b8(0x08)
	char pad_4C0[0x10]; // 0x4c0(0x10)
	int32_t iAmmoNum; // 0x4d0(0x04)
	int32_t iSlotNum; // 0x4d4(0x04)
	int32_t iMaxNum; // 0x4d8(0x04)
	int32_t iShowNum; // 0x4dc(0x04)
	int32_t iPercentNg; // 0x4e0(0x04)
	int32_t iUsingType; // 0x4e4(0x04)
	int32_t bCharging; // 0x4e8(0x04)
	int32_t bCoding; // 0x4ec(0x04)
	int32_t iArmType; // 0x4f0(0x04)
	int32_t bIsItem; // 0x4f4(0x04)
	int32_t EnumType; // 0x4f8(0x04)
	int32_t bUIVisible; // 0x4fc(0x04)
	int32_t bOb; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)

	void SetUsingType(int32_t Type); // Function DFMGameHud.DFMMobileSkillItemPC.SetUsingType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileSkillItemWatch
// Size: 0x4e8 (Inherited: 0x388)
class UDFMMobileSkillItemWatch : public UBaseUIView {
public:

	int32_t currentSkil; // 0x388(0x04)
	int32_t currentSkilEntityID; // 0x38c(0x04)
	struct FSkillUIInfo LastUIInfo; // 0x390(0x78)
	int32_t bUIVisible; // 0x408(0x04)
	struct FName ProgressParameterName; // 0x40c(0x08)
	struct FName UseCDProgressParameterName; // 0x414(0x08)
	struct FVector2D UseCDProgressParameterValue; // 0x41c(0x08)
	bool InvalidateEveryTick; // 0x424(0x01)
	bool LastActivated; // 0x425(0x01)
	char pad_426[0x2]; // 0x426(0x02)
	struct UImage* AbilityIconImage; // 0x428(0x08)
	struct UImage* CanUseImage; // 0x430(0x08)
	struct UTextBlock* CooldownText; // 0x438(0x08)
	struct UDFRadialImage* CooldownProcess; // 0x440(0x08)
	struct UTextBlock* TipsText; // 0x448(0x08)
	struct UTextBlock* ShortNameText; // 0x450(0x08)
	struct UTextBlock* WeaponSlotNumText; // 0x458(0x08)
	struct UTextBlock* WeaponMaxSlotNumText; // 0x460(0x08)
	struct UImage* WeaponImageSlotNumText; // 0x468(0x08)
	struct UImage* BackImage; // 0x470(0x08)
	struct UImage* UseCDCooldownProcess; // 0x478(0x08)
	struct UProgressBar* CooldownProcessBar; // 0x480(0x08)
	enum class ESkillUISlot UISlot; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	int32_t iUsingType; // 0x48c(0x04)
	int32_t bCharging; // 0x490(0x04)
	int32_t bCoding; // 0x494(0x04)
	int32_t iArmType; // 0x498(0x04)
	int32_t bIsItem; // 0x49c(0x04)
	int32_t iNumType; // 0x4a0(0x04)
	enum class ESkillNumType EnumType; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	int32_t iAmmoNum; // 0x4a8(0x04)
	int32_t iSlotNum; // 0x4ac(0x04)
	int32_t iMaxNum; // 0x4b0(0x04)
	int32_t iShowNum; // 0x4b4(0x04)
	int32_t iPercentNg; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct UUserWidget* WBP_ControllerButtonNotAvailable; // 0x4c0(0x08)
	struct UUserWidget* WBP_ControllerButtonSkillCar; // 0x4c8(0x08)
	char pad_4D0[0x8]; // 0x4d0(0x08)
	float timerRate; // 0x4d8(0x04)
	char pad_4DC[0xc]; // 0x4dc(0x0c)

	void SetUsingType(int32_t Type); // Function DFMGameHud.DFMMobileSkillItemWatch.SetUsingType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SonicInfoWidget
// Size: 0x298 (Inherited: 0x298)
class USonicInfoWidget : public UUserWidget {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileSprintAreaDragButton
// Size: 0x518 (Inherited: 0x4c0)
class UDFMMobileSprintAreaDragButton : public UMobileDraggableButton {
public:

	struct UCanvasPanel* MoveLineImage; // 0x4c0(0x08)
	/*struct FMulticastInlineDelegate*/char OnSprintAreaSizeChange[0x10]; // 0x4c8(0x10)
	struct TArray<struct UWidget*> WidgetsMouseDown; // 0x4d8(0x10)
	struct TArray<struct UWidget*> WidgetsMouseUp; // 0x4e8(0x10)
	struct UDFMMobileCustomLayoutDraggableButton* JoystickMoveButton; // 0x4f8(0x08)
	struct UDFMMobileRunAreaDraggableButton* JoystickMoveRunAreaButton; // 0x500(0x08)
	char pad_508[0x10]; // 0x508(0x10)

	void UpdatePosition(float OldScale, float NewScale); // Function DFMGameHud.DFMMobileSprintAreaDragButton.UpdatePosition // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileStaminaView
// Size: 0x310 (Inherited: 0x298)
class UDFMMobileStaminaView : public UUserWidget {
public:

	struct UWidgetSwitcher* NormalLowStaminaSwitcher; // 0x298(0x08)
	struct UImage* WhiteImage; // 0x2a0(0x08)
	struct UImage* GreenImage; // 0x2a8(0x08)
	struct UImage* YellowImage; // 0x2b0(0x08)
	struct UImage* RedImage; // 0x2b8(0x08)
	struct FName ProgressParameterName; // 0x2c0(0x08)
	float FInterpSpeed; // 0x2c8(0x04)
	bool SelfTickLogic; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct UGPStaminaDataComponent* CurrentStaminaDataComponent; // 0x2d0(0x08)
	int32_t WhiteDelayFrame; // 0x2d8(0x04)
	char pad_2DC[0x34]; // 0x2dc(0x34)

	void TickLogic(float InDeltaTime); // Function DFMGameHud.DFMMobileStaminaView.TickLogic // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileSubtitleView
// Size: 0x390 (Inherited: 0x388)
class UDFMMobileSubtitleView : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)

	void ShowSubtitle(struct FText& SpeakerName, struct FText& SubtitleText); // Function DFMGameHud.DFMMobileSubtitleView.ShowSubtitle // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileSupportCrosshairView
// Size: 0x3a0 (Inherited: 0x388)
class UDFMMobileSupportCrosshairView : public UBaseUIView {
public:

	struct UImage* ImagePercent; // 0x388(0x08)
	float AnimTimeTemp; // 0x390(0x04)
	float animTime; // 0x394(0x04)
	bool bVisible; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)

	void OnSupportSelfCureVibileSignature(bool Visible, float animTime); // Function DFMGameHud.DFMMobileSupportCrosshairView.OnSupportSelfCureVibileSignature // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileSwitchPotView
// Size: 0x3b8 (Inherited: 0x3b8)
class UDFMMobileSwitchPotView : public UMobileGamePadView {
public:


	void SwitchPot(); // Function DFMGameHud.DFMMobileSwitchPotView.SwitchPot // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileTalentSensitiveView
// Size: 0x448 (Inherited: 0x3b8)
class UDFMMobileTalentSensitiveView : public UMobileGamePadView {
public:

	struct UCanvasPanel* RootCanvas; // 0x3b8(0x08)
	struct UDFMInteractorView_RescueFlag* Enemy_1; // 0x3c0(0x08)
	struct UDFMInteractorView_RescueFlag* Enemy_2; // 0x3c8(0x08)
	struct UDFMInteractorView_RescueFlag* Enemy_3; // 0x3d0(0x08)
	char pad_3D8[0x4c]; // 0x3d8(0x4c)
	struct FVector2D TargetOffset; // 0x424(0x08)
	struct FVector DistanceOffset; // 0x42c(0x0c)
	struct TArray<struct UDFMInteractorView_RescueFlag*> AllEnemyFlag; // 0x438(0x10)

	void OnEnterSensitiveAlert(); // Function DFMGameHud.DFMMobileTalentSensitiveView.OnEnterSensitiveAlert // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileTalentSensitiveNerve
// Size: 0x2b0 (Inherited: 0x298)
class UDFMMobileTalentSensitiveNerve : public UUserWidget {
public:

	struct UImage* Image_84; // 0x298(0x08)
	struct UTextBlock* TextBlock_122; // 0x2a0(0x08)
	struct UTextBlock* TextBlock; // 0x2a8(0x08)

	void SetState(int32_t State); // Function DFMGameHud.DFMMobileTalentSensitiveNerve.SetState // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileTalentSensitiveTarget
// Size: 0x2a0 (Inherited: 0x298)
class UDFMMobileTalentSensitiveTarget : public UUserWidget {
public:

	struct UTextBlock* TextBlock_122; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleChangeSeatButton
// Size: 0x350 (Inherited: 0x298)
class UDFMMobileVehicleChangeSeatButton : public UUserWidget {
public:

	/*struct TSoftObjectPtr<UObject>*/char DriverSeatImage[0x28]; // 0x298(0x28)
	/*struct TSoftObjectPtr<UObject>*/char WeaponSeatImage[0x28]; // 0x2c0(0x28)
	/*struct TSoftObjectPtr<UObject>*/char CommonSeatImage[0x28]; // 0x2e8(0x28)
	struct UButton* SelectedButton; // 0x310(0x08)
	struct AGPCharacter* OwnerCharacter; // 0x318(0x08)
	struct ADFMVehicleBase* OwnerVehicle; // 0x320(0x08)
	struct TArray<struct UDFMMobileVehicleSeatButton*> SeatButtonArray; // 0x328(0x10)
	struct TArray<struct UWidget*> SeatBoxArray; // 0x338(0x10)
	char pad_348[0x8]; // 0x348(0x08)

	void UnInit(); // Function DFMGameHud.DFMMobileVehicleChangeSeatButton.UnInit // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleSeatButton
// Size: 0x2c0 (Inherited: 0x298)
class UDFMMobileVehicleSeatButton : public UUserWidget {
public:

	struct UButton* SeatBtn; // 0x298(0x08)
	struct UImage* IconImage; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct AGPCharacter* OwnerCharacter; // 0x2b0(0x08)
	struct UDFMMobileVehicleChangeSeatButton* ParentWidget; // 0x2b8(0x08)

	void UnInit(); // Function DFMGameHud.DFMMobileVehicleSeatButton.UnInit // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleSwitchWeaponButton
// Size: 0x318 (Inherited: 0x298)
class UDFMMobileVehicleSwitchWeaponButton : public UUserWidget {
public:

	struct TArray<struct FVehicleWeaponColorInfo> OverHeatColorInfos; // 0x298(0x10)
	struct UButton* SwitchWeaponButton; // 0x2a8(0x08)
	struct UWidget* WeaponInfoWidget; // 0x2b0(0x08)
	struct UDFMImage* WeaponTypeIcon; // 0x2b8(0x08)
	struct UDFMImage* WeaponIcon; // 0x2c0(0x08)
	struct UUserWidget* AmmoInfoWidget; // 0x2c8(0x08)
	struct UTextBlock* AmmoNumText; // 0x2d0(0x08)
	struct UProgressBar* OverHeatProgressBar; // 0x2d8(0x08)
	struct UDFRadialImage* AmmoProgressBar; // 0x2e0(0x08)
	struct FDFMVehicleSwitchWeaponButtonInitParamter InitParamter; // 0x2e8(0x20)
	char pad_308[0x10]; // 0x308(0x10)

	void OnTickAmmoInfo(); // Function DFMGameHud.DFMMobileVehicleSwitchWeaponButton.OnTickAmmoInfo // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponExpandableButton
// Size: 0x408 (Inherited: 0x3b8)
class UDFMMobileWeaponExpandableButton : public UMobileGamePadView {
public:

	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct UButton* Button_1; // 0x3c0(0x08)
	enum class EExpandableButtonType ExpandableButtonType; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	int32_t GestureVerticalBegin; // 0x3cc(0x04)
	int32_t GestureDownPositionVertical; // 0x3d0(0x04)
	int32_t GestureVerticalAiming; // 0x3d4(0x04)
	char pad_3D8[0x30]; // 0x3d8(0x30)

	void SetCurrentSelectedItemId(uint64_t ItemID); // Function DFMGameHud.DFMMobileWeaponExpandableButton.SetCurrentSelectedItemId // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponHUDView
// Size: 0x590 (Inherited: 0x3b8)
class UDFMMobileWeaponHUDView : public UMobileGamePadView {
public:

	struct FWeaponBarProxy FirstWeaponBar; // 0x3b8(0x48)
	struct FWeaponBarProxy SecondWeaponBar; // 0x400(0x48)
	struct FWeaponBarProxy MeleeWeaponBar; // 0x448(0x48)
	struct FWeaponBarProxy PistolWeaponBar; // 0x490(0x48)
	struct UWeaponHudController* WeaponHudController; // 0x4d8(0x08)
	enum class EAnimPlayConfig AnimPlayConfig; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct TMap<struct FSoftObjectPath, struct UPaperSprite*> LoadedSprites; // 0x4e8(0x50)
	struct UButton* FireModeBtn_New; // 0x538(0x08)
	struct UTextBlock* FireModeText_New; // 0x540(0x08)
	bool bAllowRefreshModeInfo; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct UButton* BulletQualityBtn; // 0x550(0x08)
	struct UDFImage* AmmoQualityBg; // 0x558(0x08)
	struct UDFTextBlock* AmmoNameText; // 0x560(0x08)
	struct TArray<struct FLinearColor> AmmoLevel; // 0x568(0x10)
	char pad_578[0x18]; // 0x578(0x18)

	void UpdateCandidateWeaponList(); // Function DFMGameHud.DFMMobileWeaponHUDView.UpdateCandidateWeaponList // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponSwitchItemView
// Size: 0x3f0 (Inherited: 0x3b8)
class UDFMMobileWeaponSwitchItemView : public UMobileGamePadView {
public:

	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct AWeaponBase* CachedWeapon; // 0x3c0(0x08)
	struct UImage* ItemPic; // 0x3c8(0x08)
	struct UButton* ClickBtn; // 0x3d0(0x08)
	struct UTextBlock* AmmoCount; // 0x3d8(0x08)
	struct UTextBlock* CarriedAmmoCount; // 0x3e0(0x08)
	struct AGPCharacter* GPCharacter; // 0x3e8(0x08)

	void K2_SwitchWeaponCanSwitchFlag(bool bCanSwitch); // Function DFMGameHud.DFMMobileWeaponSwitchItemView.K2_SwitchWeaponCanSwitchFlag // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WeaponSwitchViewModel
// Size: 0x210 (Inherited: 0x30)
class UWeaponSwitchViewModel : public UObject {
public:

	struct AWeaponBase* CurActiveWeapon; // 0x30(0x08)
	struct AWeaponBase* FirstGun; // 0x38(0x08)
	struct AWeaponBase* FirstGunCache; // 0x40(0x08)
	struct AWeaponBase* SecondGun; // 0x48(0x08)
	struct AWeaponBase* CurAbilityItem; // 0x50(0x08)
	struct AWeaponBase* CurMeleeWeapon; // 0x58(0x08)
	struct AWeaponBase* CurThrowableWeapon; // 0x60(0x08)
	struct AWeaponBase* CurPVEWeapon; // 0x68(0x08)
	struct AWeaponBase* GunOccupiedByPVE; // 0x70(0x08)
	char pad_78[0x4]; // 0x78(0x04)
	int32_t ClipAmmoSize; // 0x7c(0x04)
	bool bCurWeaponEnableAmmoTip; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct AWeaponBase* PreActiveWeapon; // 0x88(0x08)
	struct AWeaponBase* PreMeleeWeapon; // 0x90(0x08)
	struct AWeaponBase* GunPreSpecialWeapon; // 0x98(0x08)
	int32_t AmmoCount; // 0xa0(0x04)
	int32_t CarriedAmmoCount; // 0xa4(0x04)
	int32_t AmmoCountSub; // 0xa8(0x04)
	int32_t CarriedAmmoCountSub; // 0xac(0x04)
	int32_t AmmoCountAbilityItem; // 0xb0(0x04)
	int32_t CarriedAmmoCountAbilityItem; // 0xb4(0x04)
	enum class ECurActiveWeaponType CurActiveWeaponType; // 0xb8(0x01)
	bool bPlayAmmoAddAnim; // 0xb9(0x01)
	bool bGunOrListChanged; // 0xba(0x01)
	bool bIsAllWeaponAmmoEmpty; // 0xbb(0x01)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct AGPCharacter* CurGPCharacter; // 0xc0(0x08)
	uint32_t FirstGunHash; // 0xc8(0x04)
	uint32_t SecondGunHash; // 0xcc(0x04)
	uint32_t CurMeleeWeaponHash; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct AWeaponBase*> WeaponList; // 0xd8(0x10)
	struct TArray<struct AWeaponBase*> GMWeaponList; // 0xe8(0x10)
	struct TArray<struct AWeaponBase*> PVEWeaponList; // 0xf8(0x10)
	enum class EGPWeaponFiringMode CurFireMode; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<enum class EGPWeaponFiringMode> SupportedFireModes; // 0x110(0x10)
	/*struct FMulticastInlineDelegate*/char OnDelegateActiveWeaponChanged[0x10]; // 0x120(0x10)
	/*struct FMulticastInlineDelegate*/char OnDelegateGunChanged[0x10]; // 0x130(0x10)
	/*struct FMulticastInlineDelegate*/char OnDelegateMeleeWeaponChanged[0x10]; // 0x140(0x10)
	/*struct FMulticastInlineDelegate*/char OnDelegateAmmoCountChanged[0x10]; // 0x150(0x10)
	/*struct FMulticastInlineDelegate*/char OnDelegateFireModeChanged[0x10]; // 0x160(0x10)
	/*struct FMulticastInlineDelegate*/char OnDelegateWeaponListChanged[0x10]; // 0x170(0x10)
	/*struct FMulticastInlineDelegate*/char OnDelegateGMWeaponListChanged[0x10]; // 0x180(0x10)
	/*struct FMulticastInlineDelegate*/char OnDelegateGunHashChanged[0x10]; // 0x190(0x10)
	/*struct FMulticastInlineDelegate*/char OnDelegateMeleeWeaponHashChanged[0x10]; // 0x1a0(0x10)
	/*struct FMulticastInlineDelegate*/char OnDelegateActiveWeaponTypeChanged[0x10]; // 0x1b0(0x10)
	bool isSpectMode; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	float DiscardTime; // 0x1c4(0x04)
	bool bSupportLaser; // 0x1c8(0x01)
	bool bSupportFlashLight; // 0x1c9(0x01)
	bool bSupportQuicklyAdapt; // 0x1ca(0x01)
	enum class EDFMGamePlayMode DFMGameMode; // 0x1cb(0x01)
	char pad_1CC[0x44]; // 0x1cc(0x44)

	void UpdateWeaponList(); // Function DFMGameHud.WeaponSwitchViewModel.UpdateWeaponList // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponThrowableView
// Size: 0x488 (Inherited: 0x3b8)
class UDFMMobileWeaponThrowableView : public UMobileGamePadView {
public:

	char pad_3B8[0x4]; // 0x3b8(0x04)
	struct TWeakObjectPtr<struct AWeaponBase> CacheActiveWeapon; // 0x3bc(0x08)
	struct TWeakObjectPtr<struct AWeaponBase> CacheLeftActiveWeapon; // 0x3c4(0x08)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UDFMMobileWeaponThrowableWarningItemView* WarningItemView1P; // 0x3d0(0x08)
	struct TArray<struct UDFMSkillThreatMarkerItemView*> Markers; // 0x3d8(0x10)
	struct UMobileDraggableButton* CancelButtonWidget; // 0x3e8(0x08)
	struct UCanvasPanel* CanvasPanelLocalPlayer; // 0x3f0(0x08)
	struct UCanvasPanel* CanvasPanelWarning; // 0x3f8(0x08)
	struct TWeakObjectPtr<struct AGPCharacter> LocalCharacter; // 0x400(0x08)
	char pad_408[0x10]; // 0x408(0x10)
	struct TArray<struct FMarkerViewData> ViewDataArray; // 0x418(0x10)
	struct TMap<struct AActor*, struct UDFMSkillThreatMarkerItemView*> ActorBindMap; // 0x428(0x50)
	char pad_478[0x10]; // 0x478(0x10)

	void OnWorldThrowableWeaponProjectileExplode(struct AActor* ProjectileActor); // Function DFMGameHud.DFMMobileWeaponThrowableView.OnWorldThrowableWeaponProjectileExplode // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponThrowableWarningItemView
// Size: 0x480 (Inherited: 0x3b8)
class UDFMMobileWeaponThrowableWarningItemView : public UMobileGamePadView {
public:

	struct UTextBlock* ProcessTextWidget; // 0x3b8(0x08)
	struct UImage* ArrowWidget; // 0x3c0(0x08)
	struct UImage* ThrowIcon; // 0x3c8(0x08)
	struct FSlateColor WarningItemColor1P; // 0x3d0(0x28)
	struct FSlateColor WarningItemColor3P; // 0x3f8(0x28)
	float ExtraWarningDistance; // 0x420(0x04)
	bool IsTimeTips; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	struct TWeakObjectPtr<struct AActor> BindProjectile; // 0x428(0x08)
	char pad_430[0x10]; // 0x430(0x10)
	float WarningItemArrowAngleAddition; // 0x440(0x04)
	float WarningItemOffsetMin; // 0x444(0x04)
	float WarningItemOffsetMax; // 0x448(0x04)
	float ScaleRatio; // 0x44c(0x04)
	struct FMargin WarningTipsOffset; // 0x450(0x10)
	char pad_460[0x18]; // 0x460(0x18)
	float LastSeconds; // 0x478(0x04)
	char pad_47C[0x2]; // 0x47c(0x02)
	bool IsFullDamage; // 0x47e(0x01)
	char pad_47F[0x1]; // 0x47f(0x01)

	void OnThrowActive(); // Function DFMGameHud.DFMMobileWeaponThrowableWarningItemView.OnThrowActive // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMonitorFade
// Size: 0x388 (Inherited: 0x388)
class UDFMMonitorFade : public UBaseUIView {
public:


	void OnLoadComplete(); // Function DFMGameHud.DFMMonitorFade.OnLoadComplete // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMovementTestView
// Size: 0x400 (Inherited: 0x3b8)
class UDFMMovementTestView : public UMobileGamePadView {
public:

	struct UComboBoxString* CharacterList; // 0x3b8(0x08)
	struct URichTextBlock* CharacterMovementInfo; // 0x3c0(0x08)
	bool isCreateFromHUD; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct AGPCharacter* CurrentTagedCharacter; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct TArray<struct FString> DropDownListItem; // 0x3e0(0x10)
	struct TArray<struct AGPCharacter*> AllCharacterList; // 0x3f0(0x10)

	void SetDrawCurrentMovementDebugCharacterCapsureEnable(bool Value); // Function DFMGameHud.DFMMovementTestView.SetDrawCurrentMovementDebugCharacterCapsureEnable // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMNPCDialogView
// Size: 0x388 (Inherited: 0x388)
class UDFMNPCDialogView : public UBaseUIView {
public:


	void SelectBranch(enum class EDialogJumpType JumpType, int64_t JumpId, bool ContinueJump, struct FString Args); // Function DFMGameHud.DFMNPCDialogView.SelectBranch // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMOverLoadSkillView
// Size: 0x5d0 (Inherited: 0x5a8)
class UDFMOverLoadSkillView : public ULuaUIHudBaseView {
public:

	struct UDFImage* DFImage_1; // 0x5a8(0x08)
	struct UDFRadialImage* Image_Progress; // 0x5b0(0x08)
	struct UImage* Image_Ten; // 0x5b8(0x08)
	struct UImage* Image_One; // 0x5c0(0x08)
	struct TWeakObjectPtr<struct AGPCharacter> LocalPlayer; // 0x5c8(0x08)

	void OverLoadSetProcess(float Angle, int32_t Time); // Function DFMGameHud.DFMOverLoadSkillView.OverLoadSetProcess // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMPoolUserWidget
// Size: 0x298 (Inherited: 0x298)
class UDFMPoolUserWidget : public UUserWidget {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMPVEQuestPanelView
// Size: 0x388 (Inherited: 0x388)
class UDFMPVEQuestPanelView : public UBaseUIView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMRescueMySelfItemView
// Size: 0x408 (Inherited: 0x388)
class UDFMRescueMySelfItemView : public UBaseUIView {
public:

	char pad_388[0x28]; // 0x388(0x28)
	struct UTextBlock* DistanceText; // 0x3b0(0x08)
	struct UTextBlock* PlayerNameText; // 0x3b8(0x08)
	struct UTextBlock* IsComingText; // 0x3c0(0x08)
	struct UTextBlock* TeamIndexText; // 0x3c8(0x08)
	struct UImage* PlayerBackIcon; // 0x3d0(0x08)
	struct UImage* PlayerArmForceIcon; // 0x3d8(0x08)
	struct UImage* DFImage; // 0x3e0(0x08)
	struct UWidgetAnimation* KnockDownltem_out; // 0x3e8(0x08)
	struct UWidgetAnimation* KnockDownltem_in; // 0x3f0(0x08)
	struct UWidgetAnimation* Anima_Respond; // 0x3f8(0x08)
	struct UWidgetAnimation* Anima_Respond_Out; // 0x400(0x08)

	void SetTeamIndexText(int32_t InTeamIndex); // Function DFMGameHud.DFMRescueMySelfItemView.SetTeamIndexText // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMRescueMySelfView
// Size: 0x480 (Inherited: 0x298)
class UDFMRescueMySelfView : public UUserWidget {
public:

	struct TMap<uint64_t, struct FNearMedicOrTeammateInfoObject> NearMedicOrTeammateInfoObjects; // 0x298(0x50)
	struct TMap<uint64_t, struct FNearMedicOrTeammateInfoObject> TheFourNearMedicOrTeammateInfoObjects; // 0x2e8(0x50)
	struct TArray<struct UDFMRescueMySelfItemView*> RescueMySelfItemViews; // 0x338(0x10)
	float SearchMedicMaxDistance; // 0x348(0x04)
	float SearchMedicDeltaTime; // 0x34c(0x04)
	bool FillTestData; // 0x350(0x01)
	enum class ECancelRescueMySelfType CurrentCancelRescueMySelfType; // 0x351(0x01)
	char pad_352[0x6]; // 0x352(0x06)
	struct FTimerHandle SearchMedicTimerHandle; // 0x358(0x08)
	struct FTimerHandle SOSSendTimerHandle; // 0x360(0x08)
	struct FTimerHandle PlayLoopAnimationTimerHandle; // 0x368(0x08)
	struct FTimerHandle OutAnimationEndTimerHandle; // 0x370(0x08)
	char pad_378[0x20]; // 0x378(0x20)
	struct ADFMCharacter* OwnerCharacter; // 0x398(0x08)
	int32_t CurrentImpendingDeathHealth; // 0x3a0(0x04)
	int32_t MaxImpendingDeathHealth; // 0x3a4(0x04)
	float CurrentImpendingDeathHealthPercent; // 0x3a8(0x04)
	float CurrentRescueTime; // 0x3ac(0x04)
	struct UClass* DFMRescueMySelfItemView; // 0x3b0(0x08)
	float SOS_CD; // 0x3b8(0x04)
	float GiveUpSelfCD; // 0x3bc(0x04)
	float SOS_ProgressBarRefreshInterval; // 0x3c0(0x04)
	int32_t SOS_Count; // 0x3c4(0x04)
	struct FString DistanceRichTextType; // 0x3c8(0x10)
	struct UDFProgressBar* DFProgressBar_1; // 0x3d8(0x08)
	struct UButton* DFButton; // 0x3e0(0x08)
	struct UTextBlock* ButtonText; // 0x3e8(0x08)
	struct URichTextBlock* DistanceRichText; // 0x3f0(0x08)
	struct UTextBlock* PlayerNameText; // 0x3f8(0x08)
	struct UTextBlock* RescueInfoText; // 0x400(0x08)
	struct UVerticalBox* KnockDownItemVerticalBox; // 0x408(0x08)
	struct UButton* SOS_Button; // 0x410(0x08)
	struct UHorizontalBox* NearestPlayInfoHorizontalBox; // 0x418(0x08)
	struct UImage* RescueListLine; // 0x420(0x08)
	struct UWidgetAnimation* WBP_TipsPro_KnockDown_in; // 0x428(0x08)
	struct UWidgetAnimation* WBP_TipsPro_KnockDown_loop; // 0x430(0x08)
	struct UWidgetAnimation* WBP_TipsPro_KnockDown_out; // 0x438(0x08)
	struct UWidgetAnimation* WBP_TipsPro_KnockDown_loop_in; // 0x440(0x08)
	struct UWidgetAnimation* Anima_Click; // 0x448(0x08)
	struct UWidgetAnimation* WBP_TipsPro_KnockDown_loop_out; // 0x450(0x08)
	struct UCanvasPanel* PCWaitingRescue; // 0x458(0x08)
	struct UCanvasPanel* PCGiveUpCountDown; // 0x460(0x08)
	struct UDFProgressBar* PCGiveUpProgressBar; // 0x468(0x08)
	char pad_470[0x10]; // 0x470(0x10)

	void UpdateImpendingProgressBar(); // Function DFMGameHud.DFMRescueMySelfView.UpdateImpendingProgressBar // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMSafeHouseInteractorView
// Size: 0x6e0 (Inherited: 0x550)
class UDFMSafeHouseInteractorView : public ULuaUIBaseView {
public:

	struct UCanvasPanel* RootCanvas; // 0x550(0x08)
	struct UCanvasPanel* WhiteDot_1; // 0x558(0x08)
	struct UCanvasPanel* WhiteDot_2; // 0x560(0x08)
	struct UCanvasPanel* WhiteDot_3; // 0x568(0x08)
	struct UDFMInteractorView_InteractList* Interact_List; // 0x570(0x08)
	struct TArray<struct UDFMInteractorView_ItemBase*> AllItems; // 0x578(0x10)
	struct TArray<struct UCanvasPanel*> WhiteDots; // 0x588(0x10)
	float AllowMergeMaxDistSquare; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct TMap<struct FGameplayTag, struct UClass*> ItemClassMap; // 0x5a0(0x50)
	struct TMap<struct FGameplayTag, struct UDFMInteractorView_ItemBase*> ItemsMap; // 0x5f0(0x50)
	struct TMap<struct FGameplayTag, struct UClass*> SubViewClassMap; // 0x640(0x50)
	struct TMap<struct FGameplayTag, struct UDFMInteractorView_SubViewBase*> SubViewMap; // 0x690(0x50)

	void OnUIEventFired(struct FDFMWidgetEvent& EvtParam); // Function DFMGameHud.DFMSafeHouseInteractorView.OnUIEventFired // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMScrollText
// Size: 0x3b8 (Inherited: 0x388)
class UDFMScrollText : public UBaseUIView {
public:

	char pad_388[0x10]; // 0x388(0x10)
	struct UScrollBox* ScrollTextBox; // 0x398(0x08)
	struct UTextBlock* LastScrollText; // 0x3a0(0x08)
	struct UTextBlock* CurScrollText; // 0x3a8(0x08)
	float ScrollSpeed; // 0x3b0(0x04)
	int32_t ItemSize; // 0x3b4(0x04)

	void SetLastScrollText(struct FText& InLastScrollText); // Function DFMGameHud.DFMScrollText.SetLastScrollText // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMSkillCommonTips
// Size: 0x3b8 (Inherited: 0x388)
class UDFMSkillCommonTips : public UBaseUIView {
public:

	struct FName MutexRegName; // 0x388(0x08)
	bool bGotMutex; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x398(0x08)
	struct TArray<int32_t> CurrentPlayList; // 0x3a0(0x10)
	char pad_3B0[0x8]; // 0x3b0(0x08)

	void Show_BPApi(); // Function DFMGameHud.DFMSkillCommonTips.Show_BPApi // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMSkillDetailView
// Size: 0x450 (Inherited: 0x388)
class UDFMSkillDetailView : public UBaseUIView {
public:

	struct UDFMSkillDetailViewItem* Ability; // 0x388(0x08)
	struct UDFMSkillDetailViewItem* AbilityPassive; // 0x390(0x08)
	struct UDFMSkillDetailViewItem* Prop1; // 0x398(0x08)
	struct UDFMSkillDetailViewItem* Prop2; // 0x3a0(0x08)
	struct TMap<int64_t, struct FSkillConfig> SkillConfigMap; // 0x3a8(0x50)
	struct TMap<int64_t, struct FHeroDataRow> SkillExpertMap; // 0x3f8(0x50)
	bool bCurrentShowing; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)

	void ShowSkillDetail(bool Up); // Function DFMGameHud.DFMSkillDetailView.ShowSkillDetail // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMSkillDetailViewItem
// Size: 0x298 (Inherited: 0x298)
class UDFMSkillDetailViewItem : public UUserWidget {
public:


	struct FName GetRowNameFromSkillId(int64_t SkillId); // Function DFMGameHud.DFMSkillDetailViewItem.GetRowNameFromSkillId // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMSkillDetailButton
// Size: 0x398 (Inherited: 0x388)
class UDFMSkillDetailButton : public UBaseUIView {
public:

	struct UUserWidget* WBP_CommonKeyIconBox_PressTalk; // 0x388(0x08)
	struct UTextBlock* DFTextBlock_PressTalk; // 0x390(0x08)

	void OnMicStateChange(int32_t ButtonType); // Function DFMGameHud.DFMSkillDetailButton.OnMicStateChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMSkillProcessBarActionView
// Size: 0x3f0 (Inherited: 0x388)
class UDFMSkillProcessBarActionView : public UBaseUIView {
public:

	struct FText FirefightingActionName; // 0x388(0x18)
	struct FText ZoyaSwarmsActionName; // 0x3a0(0x18)
	struct TWeakObjectPtr<struct ACHARACTER> DFMChar; // 0x3b8(0x08)
	int32_t ActionSkillID; // 0x3c0(0x04)
	float TotalTime; // 0x3c4(0x04)
	float StopTime; // 0x3c8(0x04)
	bool bUpdateBar; // 0x3cc(0x01)
	bool bIsCountDown; // 0x3cd(0x01)
	char pad_3CE[0x2]; // 0x3ce(0x02)
	struct UDFMActionCommonProgressBar* WBP_TipsPro_Mini; // 0x3d0(0x08)
	struct UDFHDActionCommonProgressBar* WBP_TipsPro_Mini_HD; // 0x3d8(0x08)
	char pad_3E0[0x10]; // 0x3e0(0x10)

	void OnShowSkillProcessBarAction(bool Show, float Time, struct FName Name, int32_t SkillId, int32_t Type); // Function DFMGameHud.DFMSkillProcessBarActionView.OnShowSkillProcessBarAction // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMSkillThreatMarkerItemView
// Size: 0x550 (Inherited: 0x3b8)
class UDFMSkillThreatMarkerItemView : public UMobileGamePadView {
public:

	struct UWidget* ArrowIcon; // 0x3b8(0x08)
	struct UImage* ThrowIcon; // 0x3c0(0x08)
	struct TWeakObjectPtr<struct AActor> BindActor; // 0x3c8(0x08)
	/*struct TScriptInterface<IGPSkillThreatMarkerInterface>*/char CachedMarker[0x10]; // 0x3d0(0x10)
	struct TWeakObjectPtr<struct AGPCharacter> LocalCharacter; // 0x3e0(0x08)
	char pad_3E8[0x4]; // 0x3e8(0x04)
	float WarningItemArrowAngleAddition; // 0x3ec(0x04)
	struct FVector2D BorderScale; // 0x3f0(0x08)
	float WarningItemOffsetMax; // 0x3f8(0x04)
	struct FMargin WarningTipsOffset; // 0x3fc(0x10)
	float BlockTraceIntervalPC; // 0x40c(0x04)
	float BlockTraceIntervalMobile; // 0x410(0x04)
	char pad_414[0xe4]; // 0x414(0xe4)
	struct TMap<struct FName, struct UWidgetAnimation*> AnimMap; // 0x4f8(0x50)
	char pad_548[0x8]; // 0x548(0x08)

	bool TickConditionalUpdate(float DeltaTime, struct FVector CharacterLoc); // Function DFMGameHud.DFMSkillThreatMarkerItemView.TickConditionalUpdate // (Final|Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMSmokeWallAddedView
// Size: 0x2e0 (Inherited: 0x298)
class UDFMSmokeWallAddedView : public UUserWidget {
public:

	struct UImage* BackgroundImage; // 0x298(0x08)
	struct FName AnimName_AnimIn; // 0x2a0(0x08)
	struct FName AnimName_AnimOut; // 0x2a8(0x08)
	float OutAnimTime; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x2b8(0x08)
	char pad_2C0[0x8]; // 0x2c0(0x08)
	struct FName RotationParamName; // 0x2c8(0x08)
	struct FName ShowMarginParamName; // 0x2d0(0x08)
	struct UUserWidget* ParentView; // 0x2d8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMSnoicDirView
// Size: 0x3c0 (Inherited: 0x388)
class UDFMSnoicDirView : public UBaseUIView {
public:

	struct UImage* IconImage; // 0x388(0x08)
	struct FName ProgressParameterName; // 0x390(0x08)
	float fUpdateRate; // 0x398(0x04)
	char pad_39C[0xc]; // 0x39c(0x0c)
	struct TWeakObjectPtr<struct AActor> SonicActorPtr; // 0x3a8(0x08)
	struct FVector LastUpdatePos; // 0x3b0(0x0c)
	bool HasUpdate; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)

	void UpdateSonicTarget(); // Function DFMGameHud.DFMSnoicDirView.UpdateSonicTarget // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMStingerMissleAimingMarkView
// Size: 0x3d0 (Inherited: 0x388)
class UDFMStingerMissleAimingMarkView : public UBaseUIView {
public:

	struct UTextBlock* DistanceTextBlock; // 0x388(0x08)
	struct UTextBlock* ReadyToFireTextBlock; // 0x390(0x08)
	struct FText DistanceText; // 0x398(0x18)
	struct FText LaserPointerReadyText; // 0x3b0(0x18)
	char pad_3C8[0x1]; // 0x3c8(0x01)
	bool bUseSoundStack; // 0x3c9(0x01)
	char pad_3CA[0x6]; // 0x3ca(0x06)

	void SetDis(int32_t Dis); // Function DFMGameHud.DFMStingerMissleAimingMarkView.SetDis // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMStingerMissleAimingView
// Size: 0x400 (Inherited: 0x388)
class UDFMStingerMissleAimingView : public UBaseUIView {
public:

	struct UDFMStingerMissleAimingMarkView* wgMark; // 0x388(0x08)
	struct UTextBlock* wgMarkTextBlock_2; // 0x390(0x08)
	struct UTextBlock* wgTextDistance; // 0x398(0x08)
	struct UTextBlock* wgTextName; // 0x3a0(0x08)
	struct UImage* wgProgress; // 0x3a8(0x08)
	struct TWeakObjectPtr<struct UWeaponFuncComponentStingerMissile> StingerMissile; // 0x3b0(0x08)
	char pad_3B8[0x4]; // 0x3b8(0x04)
	bool isShowing; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	int32_t curStyle; // 0x3c0(0x04)
	enum class EStingerMissileLockingState CurState; // 0x3c4(0x01)
	char pad_3C5[0x7]; // 0x3c5(0x07)
	bool bHasLockingObject; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	float lockProgressVal; // 0x3d0(0x04)
	float bLockProgressDirection; // 0x3d4(0x04)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	bool showAmmoTips; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FText DistanceText; // 0x3e8(0x18)

	void PlayLockingStateAudio(struct FStingMissileHudInfo& HudInfo); // Function DFMGameHud.DFMStingerMissleAimingView.PlayLockingStateAudio // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMSystemSettingHelper
// Size: 0x38 (Inherited: 0x38)
class UDFMSystemSettingHelper : public UEngineSubsystem {
public:


	void SprintTriggerSensitivityChangeBroadcast(); // Function DFMGameHud.DFMSystemSettingHelper.SprintTriggerSensitivityChangeBroadcast // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMTeamPlayerInfoView
// Size: 0x5a0 (Inherited: 0x388)
class UDFMTeamPlayerInfoView : public UBaseUIView {
public:

	char pad_388[0x2]; // 0x388(0x02)
	enum class EDFMGamePlayMode CurGamePlayMode; // 0x38a(0x01)
	char pad_38B[0x5]; // 0x38b(0x05)
	struct FTeamMemberInfo CoorTeamMemberInfo; // 0x390(0x40)
	char pad_3D0[0x1c]; // 0x3d0(0x1c)
	struct FMemberHealthInfo MemberHealthInfo; // 0x3ec(0x3c)
	char pad_428[0x28]; // 0x428(0x28)
	struct TMap<struct FName, struct FHeroDataInfo> HeroDataInfoMap; // 0x450(0x50)
	char pad_4A0[0x8]; // 0x4a0(0x08)
	struct UDFBorder* RaidMVPBorder; // 0x4a8(0x08)
	struct UDFBorder* RaidRankBorder; // 0x4b0(0x08)
	struct UTextBlock* RankText; // 0x4b8(0x08)
	struct UCanvasPanel* PlayerStatusCanvas; // 0x4c0(0x08)
	struct UImage* StateMaskImage; // 0x4c8(0x08)
	struct UTextBlock* ReviveCountDownText; // 0x4d0(0x08)
	struct UDFImage* PlayerStatusProgressBarImage; // 0x4d8(0x08)
	struct UDFImage* PlayerStatusProgressBarImage_Bg; // 0x4e0(0x08)
	struct UImage* PlayerStatusIcon; // 0x4e8(0x08)
	struct UDFRadialImage* PlayerStatusRadialImage; // 0x4f0(0x08)
	struct UImage* BaseColorImage; // 0x4f8(0x08)
	struct UTextBlock* PlayerNumberText; // 0x500(0x08)
	struct UDFImage* ArmedForceIcon; // 0x508(0x08)
	struct UCanvasPanel* TalkingCanvas; // 0x510(0x08)
	struct UImage* TalkingImage; // 0x518(0x08)
	struct UDFRadialImage* TalkingProgressBar; // 0x520(0x08)
	struct UImage* PlayerPlayStatusIcon; // 0x528(0x08)
	struct UTextBlock* PlayerNameText; // 0x530(0x08)
	struct UDFRadialImage* HealthProgressBar; // 0x538(0x08)
	struct UDFImage* DFImage_Bg; // 0x540(0x08)
	struct UDFHorizontalBox* NameHorizontalBox; // 0x548(0x08)
	struct UCanvasPanel* DamageCanvas; // 0x550(0x08)
	struct UDFRadialImage* DamageProgressBar; // 0x558(0x08)
	struct UTextBlock* DamageText; // 0x560(0x08)
	struct UHorizontalBox* LiveRemainHBox; // 0x568(0x08)
	struct UCanvasPanel* RPGNumCanvas; // 0x570(0x08)
	struct UTextBlock* RPGNums; // 0x578(0x08)
	struct UImage* UltraImg; // 0x580(0x08)
	struct FLinearColor FireIconColor; // 0x588(0x10)
	float LowTickTime; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)

	void UpdatePlayerInfo(int32_t InPlayerInnerIndex, bool InIsSelf, struct FTeamMemberInfo InTeamMemberInfo); // Function DFMGameHud.DFMTeamPlayerInfoView.UpdatePlayerInfo // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMTipsCommonButton
// Size: 0x350 (Inherited: 0x298)
class UDFMTipsCommonButton : public UUserWidget {
public:

	int32_t TipsColorType; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FText TipsActionName; // 0x2a0(0x18)
	struct FSoftObjectPath TipsIconPath; // 0x2b8(0x18)
	enum class ESTipsCommonButtonAnimType TipsAnimType; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UImage* Image_Icon_widget; // 0x2d8(0x08)
	struct UTextBlock* ActionName_widget; // 0x2e0(0x08)
	struct UImage* Image_PressedCircle_widget; // 0x2e8(0x08)
	struct UImage* Image_Background_widget; // 0x2f0(0x08)
	struct UImage* Image_CircleBackground_widget; // 0x2f8(0x08)
	struct UButton* OwnerButton; // 0x300(0x08)
	struct FLinearColor PressedColor; // 0x308(0x10)
	struct FLinearColor NormalColor; // 0x318(0x10)
	struct TArray<struct FLinearColor> BackgroundImageColors; // 0x328(0x10)
	struct TArray<struct FLinearColor> CircleBackgroundColors; // 0x338(0x10)
	int32_t BackgroundImageType; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)

	void SetTipsFullData(int32_t ColorType, struct FText ActionName, struct FSoftObjectPath IconPath, enum class ESTipsCommonButtonAnimType AnimType); // Function DFMGameHud.DFMTipsCommonButton.SetTipsFullData // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMTouchEventPanel
// Size: 0x310 (Inherited: 0x298)
class UDFMTouchEventPanel : public UUserWidget {
public:

	/*struct FMulticastInlineDelegate*/char TouchEvent_OnClicked[0x10]; // 0x298(0x10)
	/*struct FMulticastInlineDelegate*/char TouchEvent_OnFlick[0x10]; // 0x2a8(0x10)
	/*struct FMulticastInlineDelegate*/char TouchEvent_OnTouchMoved[0x10]; // 0x2b8(0x10)
	/*struct FMulticastInlineDelegate*/char TouchEvent_OnTouchStarted[0x10]; // 0x2c8(0x10)
	/*struct FMulticastInlineDelegate*/char TouchEvent_OnTouchEnded[0x10]; // 0x2d8(0x10)
	char pad_2E8[0x28]; // 0x2e8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMUserWidgetObjectPool
// Size: 0x30 (Inherited: 0x30)
class UDFMUserWidgetObjectPool : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMWeakNetAppearLevelSubsystem
// Size: 0x430 (Inherited: 0x378)
class ADFMWeakNetAppearLevelSubsystem : public ALevelSubsystem {
public:

	struct UClass* LoadingViewClass; // 0x378(0x08)
	struct UDFMBaseUIView* WaitingView; // 0x380(0x08)
	int32_t WaitingViewZOrder; // 0x388(0x04)
	float DefaultShowTime; // 0x38c(0x04)
	struct TMap<enum class EWeakNetWorkWaitFunctionID, struct FTimerHandle> WaitingFunctionMap; // 0x390(0x50)
	struct TMap<enum class EWeakNetWorkWaitFunctionID, struct FTimerHandle> ShowingFunctionMap; // 0x3e0(0x50)

	void ShowWaitingView(enum class EWeakNetWorkWaitFunctionID FunctionId); // Function DFMGameHud.DFMWeakNetAppearLevelSubsystem.ShowWaitingView // (Final|Native|Private|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMWeaponOverHeatView
// Size: 0x388 (Inherited: 0x298)
class UDFMWeaponOverHeatView : public UUserWidget {
public:

	struct UImage* processBar; // 0x298(0x08)
	struct UImage* bgIcon; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* DynamicProcessMat; // 0x2a8(0x08)
	struct TMap<int32_t, struct FLinearColor> OverHeatMap; // 0x2b0(0x50)
	struct TMap<float, int32_t> OverHeatLevelMap; // 0x300(0x50)
	int32_t CoolDownLevel; // 0x350(0x04)
	float CoolDownOverHeat; // 0x354(0x04)
	char pad_358[0x8]; // 0x358(0x08)
	struct UDFRadialImage* ProcessTipsBarWidget; // 0x360(0x08)
	struct UUserWidget* ProcessTipWidget; // 0x368(0x08)
	struct UWidgetAnimation* CoolDownInAnim; // 0x370(0x08)
	struct UWidgetAnimation* CoolDownOutAnim; // 0x378(0x08)
	char pad_380[0x8]; // 0x380(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMWeldingGunView
// Size: 0x3c0 (Inherited: 0x388)
class UDFMWeldingGunView : public UBaseUIView {
public:

	float HideTargetHealthTime; // 0x388(0x04)
	float FireCheckTime; // 0x38c(0x04)
	/*struct TScriptInterface<IGPWeaponDataComponentOverHeatInterface>*/char OverHeatInterface[0x10]; // 0x390(0x10)
	struct AActor* TargetActor; // 0x3a0(0x08)
	bool ShowTargetHealth; // 0x3a8(0x01)
	bool bFiring; // 0x3a9(0x01)
	bool bOverHeat; // 0x3aa(0x01)
	bool bTargetEnemy; // 0x3ab(0x01)
	float OverHeatPercent; // 0x3ac(0x04)
	float TargetHealthPercent; // 0x3b0(0x04)
	bool bNeedHide; // 0x3b4(0x01)
	char pad_3B5[0xb]; // 0x3b5(0x0b)

	void UpdateUI(); // Function DFMGameHud.DFMWeldingGunView.UpdateUI // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMWidgetUtil
// Size: 0x30 (Inherited: 0x30)
class UDFMWidgetUtil : public UObject {
public:


	void STATIC_Visible(struct UWidget* Widget); // Function DFMGameHud.DFMWidgetUtil.Visible // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFPakMachineView
// Size: 0x3a8 (Inherited: 0x388)
class UDFPakMachineView : public UBaseUIView {
public:

	struct UDFRadialImage* RadialImage; // 0x388(0x08)
	struct FName RadialImageName; // 0x390(0x08)
	struct UWidget* PanelWidget; // 0x398(0x08)
	struct FName PanelWidgetName; // 0x3a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFPCMorseCodeView
// Size: 0x2d8 (Inherited: 0x298)
class UDFPCMorseCodeView : public UUserWidget {
public:

	struct UDFPCPwdInputView* PwdInputView; // 0x298(0x08)
	struct UTextBlock* AutoPercent; // 0x2a0(0x08)
	struct UProgressBar* AutoBar; // 0x2a8(0x08)
	char pad_2B0[0x10]; // 0x2b0(0x10)
	struct TArray<int32_t> CachedPwdArray; // 0x2c0(0x10)
	float AlphaOfNotPwdNum; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)

	bool CheckIsPwdNum(int32_t InNum); // Function DFMGameHud.DFPCMorseCodeView.CheckIsPwdNum // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFPCOperationFireMissileItemView
// Size: 0x2a0 (Inherited: 0x298)
class UDFPCOperationFireMissileItemView : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)

	void OnFireBtnClick(); // Function DFMGameHud.DFPCOperationFireMissileItemView.OnFireBtnClick // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFPCOperationsView
// Size: 0x2e0 (Inherited: 0x298)
class UDFPCOperationsView : public UUserWidget {
public:

	struct UDFPCOperationDownloadView* DownloadView; // 0x298(0x08)
	struct FName DownloadViewName; // 0x2a0(0x08)
	struct UDFPCOperationOpenDoorView* OpenDoorView; // 0x2a8(0x08)
	struct FName OpenDoorViewName; // 0x2b0(0x08)
	struct UDFPCOperationFireMissileView* FireMissileView; // 0x2b8(0x08)
	struct FName FireMissileViewName; // 0x2c0(0x08)
	struct UDFPCOperationFireRocketView* FireRocketView; // 0x2c8(0x08)
	struct FName FireRocketViewName; // 0x2d0(0x08)
	struct AInteractor_HackPC* CachedPC; // 0x2d8(0x08)

	void BP_PlayShowNormalAni(); // Function DFMGameHud.DFPCOperationsView.BP_PlayShowNormalAni // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFPCPwdInputView
// Size: 0x300 (Inherited: 0x298)
class UDFPCPwdInputView : public UUserWidget {
public:

	struct TArray<int32_t> InputPwdArray; // 0x298(0x10)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct AInteractor_HackPC* CachedPC; // 0x2b0(0x08)
	struct TArray<int32_t> CachedPwdArray; // 0x2b8(0x10)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct UWidget* NumPanel; // 0x2d0(0x08)
	struct UWidget* LoadPanel; // 0x2d8(0x08)
	struct UProgressBar* LoadBar; // 0x2e0(0x08)
	float LoadDuration; // 0x2e8(0x04)
	char pad_2EC[0x8]; // 0x2ec(0x08)
	float ErrorDelayDuration; // 0x2f4(0x04)
	char pad_2F8[0x8]; // 0x2f8(0x08)

	void OnOKBtnClick(); // Function DFMGameHud.DFPCPwdInputView.OnOKBtnClick // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFScouterTipsView
// Size: 0x3b8 (Inherited: 0x388)
class UDFScouterTipsView : public UBaseUIView {
public:

	float ShowingDuration; // 0x388(0x04)
	float OutingAniAdditionalDuration; // 0x38c(0x04)
	char pad_390[0x10]; // 0x390(0x10)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x3a0(0x08)
	struct FName MutexRegName; // 0x3a8(0x08)
	bool bGotMutex; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)

	void SetScoutedNearestTips(); // Function DFMGameHud.DFScouterTipsView.SetScoutedNearestTips // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFScouterView
// Size: 0x3e8 (Inherited: 0x388)
class UDFScouterView : public UBaseUIView {
public:

	struct AInteractor_Scouter* CachedScouter; // 0x388(0x08)
	struct TArray<int32_t> ScouterStateArray; // 0x390(0x10)
	int32_t ScouterMaxNum; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct UTextBlock* BarPer; // 0x3a8(0x08)
	struct FName BarPerName; // 0x3b0(0x08)
	struct UProgressBar* Bar; // 0x3b8(0x08)
	struct FName BarName; // 0x3c0(0x08)
	char pad_3C8[0x4]; // 0x3c8(0x04)
	float BarDuration; // 0x3cc(0x04)
	char pad_3D0[0x15]; // 0x3d0(0x15)
	bool bUseGameHudStateChanged; // 0x3e5(0x01)
	char pad_3E6[0x2]; // 0x3e6(0x02)

	void StopScoutItemAni(int32_t Index); // Function DFMGameHud.DFScouterView.StopScoutItemAni // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFSimulate3DRetainerBox
// Size: 0x1b0 (Inherited: 0x1b0)
class UDFSimulate3DRetainerBox : public UDFRetainerBox {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFSimulate3DViewController
// Size: 0x98 (Inherited: 0x30)
class UDFSimulate3DViewController : public UObject {
public:

	float TanLimitX; // 0x30(0x04)
	float TanLimitY; // 0x34(0x04)
	float RetainerBoxSafeScale; // 0x38(0x04)
	float DistanceScaleMax; // 0x3c(0x04)
	float BaseDistance; // 0x40(0x04)
	bool bEnableLerp; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float LerpTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct URetainerBox* RetainerBox; // 0x50(0x08)
	struct UMaterialParameterCollection* MPCSimulate3D; // 0x58(0x08)
	struct UWidget* View3D; // 0x60(0x08)
	struct UDFBackgroundBlur* Blur3DWidget; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)
	bool bPeriodFirstTick; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FVector2D ViewportRenderSize; // 0x7c(0x08)
	struct FVector2D RealScrLoc; // 0x84(0x08)
	struct FVector2D CurScrLoc; // 0x8c(0x08)
	char pad_94[0x4]; // 0x94(0x04)

	void Tick3DView(float DeltaTime, struct FVector WorldLoc); // Function DFMGameHud.DFSimulate3DViewController.Tick3DView // (Final|Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFUnlockingView
// Size: 0x5c8 (Inherited: 0x388)
class UDFUnlockingView : public UBaseUIView {
public:

	struct AInteractor_SingleItemContainer* CachedSafeBox; // 0x388(0x08)
	struct TArray<int32_t> CylinderWidthArray; // 0x390(0x10)
	struct TArray<int32_t> CylinderStateArray; // 0x3a0(0x10)
	char pad_3B0[0x4]; // 0x3b0(0x04)
	float MinCatchWidth; // 0x3b4(0x04)
	float MiddleCatchWidth; // 0x3b8(0x04)
	float MaxCatchWidth; // 0x3bc(0x04)
	float LeftFirstCylinderCenterPer; // 0x3c0(0x04)
	float CylinderCenterInterval; // 0x3c4(0x04)
	struct TArray<float> SliderPerArray; // 0x3c8(0x10)
	float SliderSpeed; // 0x3d8(0x04)
	char pad_3DC[0x8]; // 0x3dc(0x08)
	float AutoBarSpeed; // 0x3e4(0x04)
	char pad_3E8[0x10]; // 0x3e8(0x10)
	bool bCanTickAfterInAniEnd; // 0x3f8(0x01)
	char pad_3F9[0x1b]; // 0x3f9(0x1b)
	bool bUseGameHudStateChanged; // 0x414(0x01)
	bool bIsReadyClear; // 0x415(0x01)
	char pad_416[0x2]; // 0x416(0x02)
	struct UButton* CloseBtn; // 0x418(0x08)
	struct UDFSlider* Slider; // 0x420(0x08)
	struct FName SliderName; // 0x428(0x08)
	struct UDFProgressBar* AutoBar; // 0x430(0x08)
	struct FName AutoBarName; // 0x438(0x08)
	struct UTextBlock* AutoPercent; // 0x440(0x08)
	struct UDFHDKeyIconBoxTextWidget* ExitKeyIconBoxTextWidget; // 0x448(0x08)
	struct FName ExitKeyIconBoxTextWidgetName; // 0x450(0x08)
	struct UDFHDKeyIconBoxTextWidget* CatchKeyIconBoxTextWidget; // 0x458(0x08)
	struct FName CatchKeyIconBoxTextWidgetName; // 0x460(0x08)
	struct UCanvasPanel* DFCanvasPanel_SpringPlug; // 0x468(0x08)
	struct UCanvasPanel* DFCanvasPanel_LockToolPanel; // 0x470(0x08)
	struct UClass* SpringPlugTemplate; // 0x478(0x08)
	struct UClass* SequenceTemplate; // 0x480(0x08)
	struct UClass* SequenceBoxTemplate; // 0x488(0x08)
	struct TMap<int32_t, struct UDFUnlockingView_SpringPlug*> SpringPlugMap; // 0x490(0x50)
	struct TMap<int32_t, struct UDFUnlockingView_Sequence*> SequenceMap; // 0x4e0(0x50)
	struct TMap<int32_t, struct UDFUnlockingView_SequenceBox*> SequenceBoxMap; // 0x530(0x50)
	float RefreshCylinderStateDelay_SprintPlug; // 0x580(0x04)
	float RefreshCylinderStateDelay_Sequence; // 0x584(0x04)
	float RefreshCylinderStateDelay_SequenceBox; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FTimerHandle TimerHandle_RefreshStateDelay_SprintPlug; // 0x590(0x08)
	struct FTimerHandle TimerHandle_RefreshStateDelay_Sequence; // 0x598(0x08)
	struct FTimerHandle TimerHandle_RefreshStateDelay_SequenceBox; // 0x5a0(0x08)
	float CatchSucAniDelay_Sequence; // 0x5a8(0x04)
	float CatchSucAniDelay_SequenceBox; // 0x5ac(0x04)
	float OnPlayCatchAniEndDelay; // 0x5b0(0x04)
	float OnPlayCatchAniOnAutoDelay; // 0x5b4(0x04)
	struct FTimerHandle TimerHandle_OnPlayCatchAniEndDelay; // 0x5b8(0x08)
	struct FTimerHandle TimerHandle_OnPlayCatchAniOnAutoDelay; // 0x5c0(0x08)

	void OnSafeBoxUnlockMiniGameCylinderRandomed(struct AActor* InSafeBox); // Function DFMGameHud.DFUnlockingView.OnSafeBoxUnlockMiniGameCylinderRandomed // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFUnlockingView_SpringPlug
// Size: 0x2a0 (Inherited: 0x298)
class UDFUnlockingView_SpringPlug : public UUserWidget {
public:

	struct FTimerHandle TimerHandle_CatchSucAniDelay_Sequence; // 0x298(0x08)

	void BP_StopAnim(); // Function DFMGameHud.DFUnlockingView_SpringPlug.BP_StopAnim // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFUnlockingView_Sequence
// Size: 0x2a0 (Inherited: 0x298)
class UDFUnlockingView_Sequence : public UUserWidget {
public:

	struct FTimerHandle TimerHandle_CatchSucAniDelay_SequenceBox; // 0x298(0x08)

	void BP_StopAnim(); // Function DFMGameHud.DFUnlockingView_Sequence.BP_StopAnim // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFUnlockingView_SequenceBox
// Size: 0x298 (Inherited: 0x298)
class UDFUnlockingView_SequenceBox : public UUserWidget {
public:


	void BP_StopAnim(); // Function DFMGameHud.DFUnlockingView_SequenceBox.BP_StopAnim // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFVehicleEmptyRootView
// Size: 0x5c8 (Inherited: 0x5a8)
class UDFVehicleEmptyRootView : public ULuaUIHudBaseView {
public:

	struct AGPCharacter* LocalCharacter; // 0x5a8(0x08)
	struct ADFMVehicleBase* OwnerVehicle; // 0x5b0(0x08)
	char pad_5B8[0x10]; // 0x5b8(0x10)

	void Refresh(); // Function DFMGameHud.DFVehicleEmptyRootView.Refresh // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DirectionBarHUDController
// Size: 0x188 (Inherited: 0xb0)
class UDirectionBarHUDController : public UBaseUIController {
public:

	struct UBorder* Border0; // 0xb0(0x08)
	struct UBorder* Border1; // 0xb8(0x08)
	struct UBorder* Border2; // 0xc0(0x08)
	struct UBorder* Border3; // 0xc8(0x08)
	struct UTextBlock* PointText0; // 0xd0(0x08)
	struct UTextBlock* PointText1; // 0xd8(0x08)
	struct UTextBlock* PointText2; // 0xe0(0x08)
	struct UTextBlock* PointText3; // 0xe8(0x08)
	struct UWidget* SafeWidget; // 0xf0(0x08)
	struct UImage* SafeImage; // 0xf8(0x08)
	struct UTextBlock* SafeTextBlock; // 0x100(0x08)
	struct UTextBlock* DistenceText; // 0x108(0x08)
	struct UImage* DirectionBar; // 0x110(0x08)
	struct UTextBlock* TextDirection; // 0x118(0x08)
	struct UMaterialInstanceDynamic* DirectionBarMaterial; // 0x120(0x08)
	struct UCanvasPanel* DirectionBarCanvasPanel; // 0x128(0x08)
	struct AGPPlayerController* PlayerOwner; // 0x130(0x08)
	/*struct TSet<struct APlayerExitBase*>*/char PlayerExits[0x50]; // 0x138(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DoorIconViewController
// Size: 0x310 (Inherited: 0x2c8)
class UDoorIconViewController : public USelectableMapIconController {
public:

	char pad_2C8[0x48]; // 0x2c8(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.EdgeTrackingWidget
// Size: 0x2b0 (Inherited: 0x298)
class UEdgeTrackingWidget : public UUserWidget {
public:

	struct UImage* DFMImage_Angle; // 0x298(0x08)
	struct UImage* DFMImage_Circle; // 0x2a0(0x08)
	bool bIsBigMap; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.EnemyMarkerSettingDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UEnemyMarkerSettingDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.EvacuteTimeWidget
// Size: 0x2d0 (Inherited: 0x298)
class UEvacuteTimeWidget : public UUserWidget {
public:

	struct UImage* DFMImage_BG; // 0x298(0x08)
	struct UTextBlock* DFTextBlock_Time; // 0x2a0(0x08)
	char pad_2A8[0x18]; // 0x2a8(0x18)
	int32_t ItemHovered_Position0; // 0x2c0(0x04)
	int32_t ItemHovered_Position1; // 0x2c4(0x04)
	int32_t ItemHovered_Position2; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)

	void PlayEndDestroyed(); // Function DFMGameHud.EvacuteTimeWidget.PlayEndDestroyed // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ExitConsumeItemHudController
// Size: 0xd8 (Inherited: 0xb0)
class UExitConsumeItemHudController : public UBaseUIController {
public:

	char pad_B0[0x18]; // 0xb0(0x18)
	struct UTextBlock* Text; // 0xc8(0x08)
	struct UButton* BtnConsume; // 0xd0(0x08)

	void OnReqShow(uint64_t InItemID, uint32_t InCount); // Function DFMGameHud.ExitConsumeItemHudController.OnReqShow // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ExitEscapingHudController
// Size: 0xf0 (Inherited: 0xb0)
class UExitEscapingHudController : public UBaseUIController {
public:

	char pad_B0[0x8]; // 0xb0(0x08)
	struct UDFMCountDownHUDView* CountDownHUDView; // 0xb8(0x08)
	struct APlayerExitBase* PlayerExit; // 0xc0(0x08)
	bool CurInExitOrNotice; // 0xc8(0x01)
	char pad_C9[0xf]; // 0xc9(0x0f)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0xd8(0x08)
	struct FName MutexRegName; // 0xe0(0x08)
	bool bGotMutex; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	void UpdateView(); // Function DFMGameHud.ExitEscapingHudController.UpdateView // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ExitHudView
// Size: 0x3c8 (Inherited: 0x388)
class UExitHudView : public UBaseUIView {
public:

	struct UUserWidget* StruggleButtonWidget; // 0x388(0x08)
	struct UUserWidget* HelpButtonWidget; // 0x390(0x08)
	struct UUserWidget* EscapeButtonWidget; // 0x398(0x08)
	struct UUserWidget* StruggleBarWidget; // 0x3a0(0x08)
	struct UUserWidget* HelpingProgressBarWidget; // 0x3a8(0x08)
	struct UWidgetSwitcher* ExitTipsWidgetSwitcher; // 0x3b0(0x08)
	struct UTextBlock* ExitConditionText; // 0x3b8(0x08)
	struct UTextBlock* ExitTimeText; // 0x3c0(0x08)

	void OnStartEscapeButtonClicked(); // Function DFMGameHud.ExitHudView.OnStartEscapeButtonClicked // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ExitMediaVideoHUDView
// Size: 0x390 (Inherited: 0x388)
class UExitMediaVideoHUDView : public UBaseUIView {
public:

	struct UDFCommonMediaView* MediaImage; // 0x388(0x08)

	void PlayMedia(struct FString VideoName); // Function DFMGameHud.ExitMediaVideoHUDView.PlayMedia // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ExitPaymentHUDView
// Size: 0x390 (Inherited: 0x388)
class UExitPaymentHUDView : public UBaseUIView {
public:

	struct UDFRichTextBlock* RichTextBlock; // 0x388(0x08)

	float BP_FadeOut(); // Function DFMGameHud.ExitPaymentHUDView.BP_FadeOut // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ExitPaymentHUDController
// Size: 0xc8 (Inherited: 0xb0)
class UExitPaymentHUDController : public UBaseUIController {
public:

	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0xb0(0x08)
	struct FName MutexRegName; // 0xb8(0x08)
	bool bGotMutex; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	void OnSOLExitPaymentUpdate(struct APlayerExitBase* PlayerExit, bool bShow); // Function DFMGameHud.ExitPaymentHUDController.OnSOLExitPaymentUpdate // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ExitRestrictionTipHUDView
// Size: 0x3c0 (Inherited: 0x388)
class UExitRestrictionTipHUDView : public UBaseUIView {
public:

	struct UDFRichTextBlock* TipText; // 0x388(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_EvacuationRestrictions_in; // 0x390(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_EvacuationRestrictions_out; // 0x398(0x08)
	bool bIsPlayingInAnim; // 0x3a0(0x01)
	bool bIsPlayingOutAnim; // 0x3a1(0x01)
	char pad_3A2[0x6]; // 0x3a2(0x06)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x3a8(0x08)
	struct FName MutexRegName; // 0x3b0(0x08)
	bool bGotMutex; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)

	void UpdateTipText(); // Function DFMGameHud.ExitRestrictionTipHUDView.UpdateTipText // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.FindCampView
// Size: 0x3d0 (Inherited: 0x388)
class UFindCampView : public UBaseUIView {
public:

	struct UTextBlock* FirstTextBlock; // 0x388(0x08)
	struct UTextBlock* SecondTextBlock; // 0x390(0x08)
	struct UImage* ColorImage; // 0x398(0x08)
	struct UImage* Image; // 0x3a0(0x08)
	struct TArray<struct FSoftObjectPath> POIIconArr; // 0x3a8(0x10)
	struct UWidgetAnimation* In_Anim; // 0x3b8(0x08)
	struct UWidgetAnimation* Out_Anim; // 0x3c0(0x08)
	char pad_3C8[0x8]; // 0x3c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.FlaggedFrameWidget
// Size: 0x2b0 (Inherited: 0x298)
class UFlaggedFrameWidget : public UUserWidget {
public:

	struct UImage* Image_FlaggedFrame; // 0x298(0x08)
	char pad_2A0[0x8]; // 0x2a0(0x08)
	float FadeOutTime; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)

	void OnFadeOutEnd(); // Function DFMGameHud.FlaggedFrameWidget.OnFadeOutEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.FlashDroneScreenEffectHUD
// Size: 0x390 (Inherited: 0x388)
class UFlashDroneScreenEffectHUD : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)

	void StopScreenAnim(); // Function DFMGameHud.FlashDroneScreenEffectHUD.StopScreenAnim // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.FlashLightButtonHUDView
// Size: 0x3f8 (Inherited: 0x3b8)
class UFlashLightButtonHUDView : public UMobileGamePadView {
public:

	struct UButton* FlashLightBtn; // 0x3b8(0x08)
	struct UMobileDraggableButton* DraggableFlashLightBtn; // 0x3c0(0x08)
	struct UImage* FlashLightImage; // 0x3c8(0x08)
	struct FLinearColor FlashLightPressedColor; // 0x3d0(0x10)
	struct FLinearColor FlashLightNormalColor; // 0x3e0(0x10)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	void OnFlashLightBtnClick(); // Function DFMGameHud.FlashLightButtonHUDView.OnFlashLightBtnClick // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.FrontEndLoadingManager
// Size: 0x98 (Inherited: 0x48)
class UFrontEndLoadingManager : public UDFMLoadingManager {
public:

	struct FMulticastSparseDelegate OnHUDLoadingFinished; // 0x48(0x01)
	struct FMulticastSparseDelegate OnBattlePrepare; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t FullyLoadPercentage; // 0x4c(0x04)
	float MoviePlayerPercent; // 0x50(0x04)
	float MoviePlayerTime; // 0x54(0x04)
	char pad_58[0x38]; // 0x58(0x38)
	struct ULoadingView* DelayLoadingView; // 0x90(0x08)

	void UnregisterDelegate(struct FString MapName); // Function DFMGameHud.FrontEndLoadingManager.UnregisterDelegate // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.GameMarkerPanel
// Size: 0x810 (Inherited: 0x388)
class UGameMarkerPanel : public UBaseUIView {
public:

	struct UCanvasPanel* MarkerCanvas; // 0x388(0x08)
	struct TMap<uint32_t, struct FGameMarkerPool> MarkerUsingPool; // 0x390(0x50)
	struct TMap<uint32_t, struct FGameMarkerPool> MarkerNotUsePool; // 0x3e0(0x50)
	struct TMap<uint32_t, struct UClass*> MarkerWidgetsMap; // 0x430(0x50)
	struct TMap<enum class EFriendlyCharacterMarkerType, struct UClass*> FriendlyCharacterMarkerWidgetsMap; // 0x480(0x50)
	struct TMap<enum class EEnemyCharacterMarkerType, struct UClass*> EnemyCharacterMarkerWidgetsMap; // 0x4d0(0x50)
	struct TMap<enum class ESceneWeaponMarkerType, struct UClass*> SceneWeaponMarkerWidgetsMap; // 0x520(0x50)
	struct TMap<enum class EVehicleMarkerType, struct UClass*> VehicleMarkerWidgetsMap; // 0x570(0x50)
	struct TMap<enum class ETacticalEquipmentMarkerType, struct UClass*> TacticalEquipmentMarkerWidgetsMap; // 0x5c0(0x50)
	struct TMap<enum class EBattleFieldGameModeMarkerType, struct UClass*> BattleFieldGameModeMarkerWidgetsMap; // 0x610(0x50)
	struct TMap<enum class ESOLGameModeMarkerType, struct UClass*> SOLGameModeMarkerWidgetsMap; // 0x660(0x50)
	struct TMap<enum class EQuestMarkerMarkerType, struct UClass*> ContractMarkerWidgetsMap; // 0x6b0(0x50)
	struct TMap<enum class EMapMarkerType, struct UClass*> MapMarkerWidgetsMap; // 0x700(0x50)
	struct TMap<enum class EMarkingMarkerType, struct UClass*> MarkingMarkerWidgetsMap; // 0x750(0x50)
	struct TMap<enum class EInteractorMarkerType, struct UClass*> InterActorMarkerWidgetsMap; // 0x7a0(0x50)
	float HighFrequencyUpdateInterval; // 0x7f0(0x04)
	float MiddleFrequencyUpdateInterval; // 0x7f4(0x04)
	float LowFrequencyUpdateInterval; // 0x7f8(0x04)
	char pad_7FC[0x14]; // 0x7fc(0x14)

	void RemoveWidgetFromUsingPool(uint32_t markerType, int32_t Index); // Function DFMGameHud.GameMarkerPanel.RemoveWidgetFromUsingPool // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.GiantTowerItemView
// Size: 0x498 (Inherited: 0x388)
class UGiantTowerItemView : public UBaseUIView {
public:

	char pad_388[0x10]; // 0x388(0x10)
	struct FLinearColor SameTeamColor; // 0x398(0x10)
	struct FLinearColor SameCampColor; // 0x3a8(0x10)
	struct FLinearColor SelfColor; // 0x3b8(0x10)
	struct FLinearColor EnemyColor; // 0x3c8(0x10)
	struct FSoftObjectPath TowerWeaponDestroyState; // 0x3d8(0x18)
	struct TMap<enum class ETieWeaponState, struct FLinearColor> TowerWeaponStateColor; // 0x3f0(0x50)
	struct TMap<enum class ESceneWeaponType, struct FSoftObjectPath> WeaponIconMap; // 0x440(0x50)
	struct UDFMImage* TowerWeaponImage; // 0x490(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.GiantTowerSeatButton
// Size: 0x3b0 (Inherited: 0x388)
class UGiantTowerSeatButton : public UBaseUIView {
public:

	struct ADFFixedWeaponPawn* CacheSceneWeapon; // 0x388(0x08)
	struct ADFMTieBreaker* OwnerGiantTower; // 0x390(0x08)
	struct UButton* SeatBtn; // 0x398(0x08)
	struct UDFMImage* SeatBaseImage; // 0x3a0(0x08)
	struct UDFMImage* SeatIconImage; // 0x3a8(0x08)

	void OnSeatButtonClicked(); // Function DFMGameHud.GiantTowerSeatButton.OnSeatButtonClicked // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.GiantTowerSeatView
// Size: 0x580 (Inherited: 0x388)
class UGiantTowerSeatView : public UBaseUIView {
public:

	struct ADFMTieBreaker* OwnerGiantTower; // 0x388(0x08)
	struct TArray<struct FGiantTowerSeatViewInfo> OwnerGiantTowerWeapons; // 0x390(0x10)
	char pad_3A0[0x8]; // 0x3a0(0x08)
	struct UButton* SeatPanelButton; // 0x3a8(0x08)
	struct UCanvasPanel* SeatPanel; // 0x3b0(0x08)
	struct TMap<enum class ESeatStateType, struct FLinearColor> SeatStateColorMap; // 0x3b8(0x50)
	struct TMap<enum class ESeatStateType, struct FLinearColor> SeatIconColorMap; // 0x408(0x50)
	struct TMap<enum class ESceneWeaponType, struct FSoftObjectPath> WeaponIconMap; // 0x458(0x50)
	struct TArray<struct FName> SeatIconArray; // 0x4a8(0x10)
	struct TMap<enum class ESeatStateType, struct UPaperSprite*> SeatStateIconMap; // 0x4b8(0x50)
	struct TArray<struct FName> SeatButtonArray; // 0x508(0x10)
	struct TMap<enum class ESeatStateType, struct FSoftObjectPath> SeatButtonStateIconMap; // 0x518(0x50)
	struct FSoftObjectPath DestroyIcon; // 0x568(0x18)

	void SetTowerWeaponSeatState(); // Function DFMGameHud.GiantTowerSeatView.SetTowerWeaponSeatState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.GiantTowerView
// Size: 0x420 (Inherited: 0x388)
class UGiantTowerView : public UBaseUIView {
public:

	struct ADFMTieBreaker* GiantTower; // 0x388(0x08)
	struct UDFMTieBreakerHealthComponent* GiantTowerhHealthComponent; // 0x390(0x08)
	struct TArray<struct UGiantTowerItemView*> GiantTowerItemViews; // 0x398(0x10)
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct UProgressBar* TowerHealthProgressBar; // 0x3b0(0x08)
	struct UScrollGridBox* TowerWeaponScrollGridBox; // 0x3b8(0x08)
	struct UDFMImage* TowerBaseImage_2; // 0x3c0(0x08)
	struct UDFMImage* TowerBaseImage_3; // 0x3c8(0x08)
	struct UDFMImage* TowerBaseCircleImage; // 0x3d0(0x08)
	struct UCanvasPanel* TowerWeaponCanvasPanel; // 0x3d8(0x08)
	struct FLinearColor OwnerCampColor; // 0x3e0(0x10)
	struct FLinearColor EnemyCampColor; // 0x3f0(0x10)
	struct FLinearColor CirCleOwnerCampColor; // 0x400(0x10)
	struct FLinearColor CircleEnemyCampColor; // 0x410(0x10)

	void OnTowerWeaponStateChanged(struct AActor* InDFMTieBreaker); // Function DFMGameHud.GiantTowerView.OnTowerWeaponStateChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.GPMarkerBubbleBox
// Size: 0x2b8 (Inherited: 0x298)
class UGPMarkerBubbleBox : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UDFImage* BubbleIconImage; // 0x2a0(0x08)
	struct UWidgetAnimation* BubbleBox_in; // 0x2a8(0x08)
	struct UWidgetAnimation* BubbleBox_loop; // 0x2b0(0x08)

	void BP_SetPveRpgNum(int32_t RpgNum); // Function DFMGameHud.GPMarkerBubbleBox.BP_SetPveRpgNum // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HDKeyIconBoxWidget
// Size: 0x5b8 (Inherited: 0x550)
class UHDKeyIconBoxWidget : public ULuaUIBaseView {
public:

	float KeyIconLeftPadding; // 0x550(0x04)
	float KeyIconHeight; // 0x554(0x04)
	struct FName DisplayInputActionName; // 0x558(0x08)
	struct FName ActionAxisName; // 0x560(0x08)
	float AxisScale; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct TArray<struct FName> KeyNames; // 0x570(0x10)
	enum class EKeyIconType KeyIconType; // 0x580(0x01)
	bool bRemoveUnusedKeyIconsOnShow; // 0x581(0x01)
	bool bNeedHold; // 0x582(0x01)
	char pad_583[0x5]; // 0x583(0x05)
	/*struct FMulticastInlineDelegate*/char InitByKeyNamesDlg[0x10]; // 0x588(0x10)
	/*struct FMulticastInlineDelegate*/char InitByActionOrAxisNameDlg[0x10]; // 0x598(0x10)
	/*struct FMulticastInlineDelegate*/char InitByDisplayInputActionNameDlg[0x10]; // 0x5a8(0x10)

	void BP_UpdateProgressBar(float Prog); // Function DFMGameHud.HDKeyIconBoxWidget.BP_UpdateProgressBar // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HDStatusProgressBar
// Size: 0x2a0 (Inherited: 0x298)
class UHDStatusProgressBar : public UUserWidget {
public:

	struct UMaterialInstanceDynamic* ProgressBar_Fore_DynamicMI; // 0x298(0x08)

	void UpdateProgressDown(float ProgressDown); // Function DFMGameHud.HDStatusProgressBar.UpdateProgressDown // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ItemLabelIconProxyView
// Size: 0x30 (Inherited: 0x30)
class UItemLabelIconProxyView : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HealthDetailPartItemHUDView
// Size: 0x3d0 (Inherited: 0x388)
class UHealthDetailPartItemHUDView : public UBaseUIView {
public:

	struct UTextBlock* PartNameText; // 0x388(0x08)
	struct UTextBlock* BloodValue; // 0x390(0x08)
	struct UBuffItemHUDView* BuffItem1; // 0x398(0x08)
	struct UBuffItemHUDView* BuffItem2; // 0x3a0(0x08)
	struct UBuffItemHUDView* BuffItem3; // 0x3a8(0x08)
	struct UBuffItemHUDView* BuffItem4; // 0x3b0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x3b8(0x08)
	struct TArray<struct UBuffItemHUDView*> BuffItemArray; // 0x3c0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BodyPartHealthHUDView
// Size: 0x3d0 (Inherited: 0x388)
class UBodyPartHealthHUDView : public UBaseUIView {
public:

	struct UTextBlock* PartNameText; // 0x388(0x08)
	struct UBuffItemHUDView* BuffItem1; // 0x390(0x08)
	struct UBuffItemHUDView* BuffItem2; // 0x398(0x08)
	struct UBuffItemHUDView* BuffItem3; // 0x3a0(0x08)
	struct UBuffItemHUDView* BuffItem4; // 0x3a8(0x08)
	struct UWidgetSwitcher* StateWidgetSwitcher; // 0x3b0(0x08)
	struct TArray<struct UBuffItemHUDView*> BuffItemArray; // 0x3b8(0x10)
	char pad_3C8[0x8]; // 0x3c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HealthDetailPartItemWithBloodHUDView
// Size: 0x3e0 (Inherited: 0x388)
class UHealthDetailPartItemWithBloodHUDView : public UBaseUIView {
public:

	struct UProgressBar* HealthBloodBar; // 0x388(0x08)
	struct UTextBlock* PartNameText; // 0x390(0x08)
	struct UTextBlock* BloodValue; // 0x398(0x08)
	struct UBuffItemHUDView* BuffItem1; // 0x3a0(0x08)
	struct UBuffItemHUDView* BuffItem2; // 0x3a8(0x08)
	struct UBuffItemHUDView* BuffItem3; // 0x3b0(0x08)
	struct UBuffItemHUDView* BuffItem4; // 0x3b8(0x08)
	struct UWidgetSwitcher* BloodBarBGWidgetSwitcher; // 0x3c0(0x08)
	bool IsSelected; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct TArray<struct UBuffItemHUDView*> BuffItemArray; // 0x3d0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HeroCardLuaBaseWidget
// Size: 0x550 (Inherited: 0x550)
class UHeroCardLuaBaseWidget : public ULuaUIBaseView {
public:


	void SetCardInfoPlayerName(struct FText& InPlayerName); // Function DFMGameHud.HeroCardLuaBaseWidget.SetCardInfoPlayerName // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HoldBreathIconView
// Size: 0x3b0 (Inherited: 0x388)
class UHoldBreathIconView : public UBaseUIView {
public:

	int32_t CacheProgressType; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct UWidgetAnimation* WBP_ControllerButtun_HoldBreath_Disable; // 0x390(0x08)
	struct UWidgetAnimation* WBP_ControllerButtun_HoldBreath_low; // 0x398(0x08)
	struct UWidgetAnimation* WBP_ControllerButtun_HoldBreath_PC_in; // 0x3a0(0x08)
	struct UWidgetAnimation* WBP_ControllerButtun_HoldBreath_PC_out; // 0x3a8(0x08)

	void SetType(int32_t Type); // Function DFMGameHud.HoldBreathIconView.SetType // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ImportantTipsController
// Size: 0xc0 (Inherited: 0xb0)
class UImportantTipsController : public UBaseUIController {
public:

	char pad_B0[0x4]; // 0xb0(0x04)
	float ShowSeconds; // 0xb4(0x04)
	struct UTextBlock* TextTime; // 0xb8(0x08)

	void HideView(); // Function DFMGameHud.ImportantTipsController.HideView // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InGameUpgradeTipsHUDView
// Size: 0x478 (Inherited: 0x388)
class UInGameUpgradeTipsHUDView : public UBaseUIView {
public:

	struct UTextBlock* Text_NumberTitle; // 0x388(0x08)
	struct UTextBlock* Text_Number; // 0x390(0x08)
	struct UTextBlock* Text_ContentTitle; // 0x398(0x08)
	struct UTextBlock* Text_Content; // 0x3a0(0x08)
	struct UUserWidget* WBP_Itemview_Image_widget; // 0x3a8(0x08)
	struct UDFMImage* ImageInItemView; // 0x3b0(0x08)
	struct TMap<enum class EUpgradeTipsType, float> TypesShowTime; // 0x3b8(0x50)
	struct TMap<enum class EUpgradeTipsType, struct FName> TypesShowAudio; // 0x408(0x50)
	struct UDFMInGameUpgradeComponent* InGameUpgradeComp; // 0x458(0x08)
	struct TArray<struct FUpgradeTipData> TipsQueue; // 0x460(0x10)
	bool bTipsShowing; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)

	void TEST_InGameUpgradeTipsShow(int32_t InUpgradeTipsType); // Function DFMGameHud.InGameUpgradeTipsHUDView.TEST_InGameUpgradeTipsShow // (Final|Exec|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InputMonitor
// Size: 0x50 (Inherited: 0x30)
class UInputMonitor : public UObject {
public:

	char pad_30[0x20]; // 0x30(0x20)

	void UnRegisterMouseButtonDown(); // Function DFMGameHud.InputMonitor.UnRegisterMouseButtonDown // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InstancedIconWidget
// Size: 0x508 (Inherited: 0x168)
class UInstancedIconWidget : public UWidget {
public:

	struct USlateVectorArtData* TrailMeshAsset; // 0x168(0x08)
	char pad_170[0x48]; // 0x170(0x48)
	struct FInstancedIconDataMgr IconDataMgr_UnderBase; // 0x1b8(0xd0)
	struct FInstancedIconDataMgr IconDataMgr_Base; // 0x288(0xd0)
	struct FInstancedIconDataMgr IconDataMgr_TeamMate; // 0x358(0xd0)
	struct FInstancedIconDataMgr IconDataMgr_LocalPlayer; // 0x428(0xd0)
	int32_t MaxIconCount_UnderBase; // 0x4f8(0x04)
	int32_t MaxIconCount_Base; // 0x4fc(0x04)
	int32_t MaxMateIconCount_TeamMate; // 0x500(0x04)
	int32_t MaxTeamMateIconCount_LocalPlayer; // 0x504(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InstancedSplineAreaWidget
// Size: 0x2b0 (Inherited: 0x168)
class UInstancedSplineAreaWidget : public UWidget {
public:

	struct USlateVectorArtData* LineMeshAsset; // 0x168(0x08)
	struct UMaterialInstanceDynamic* LineMaterial; // 0x170(0x08)
	int32_t MaxInstancedLineCount; // 0x178(0x04)
	char pad_17C[0x5]; // 0x17c(0x05)
	bool bDebug; // 0x181(0x01)
	char pad_182[0x2]; // 0x182(0x02)
	struct FVector2D DebugLoc; // 0x184(0x08)
	struct FLinearColor DebugColor; // 0x18c(0x10)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FVector4 LineUVInfo; // 0x1a0(0x10)
	struct FVector4 AreaUVInfo; // 0x1b0(0x10)
	float RangeScale; // 0x1c0(0x04)
	float DebugRotate; // 0x1c4(0x04)
	char pad_1C8[0x70]; // 0x1c8(0x70)
	struct TArray<struct FMapInstancedSplineAreaData> InstancedSplineAreaDataArr; // 0x238(0x10)
	struct TMap<struct FName, int32_t> InstancedSplineAreaMap; // 0x248(0x50)
	struct TArray<int32_t> DormantInstancedSplineAreaIndexArr; // 0x298(0x10)
	char pad_2A8[0x8]; // 0x2a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorDeliverQuestExecutor
// Size: 0xf0 (Inherited: 0xd0)
class UInteractorDeliverQuestExecutor : public UInteractExecutor {
public:

	struct FText DeliverProgressBarName; // 0xd0(0x18)
	struct AActor* CurInteractor; // 0xe8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorGotoAndDelayQuestExecutor
// Size: 0xd0 (Inherited: 0xd0)
class UInteractorGotoAndDelayQuestExecutor : public UInteractExecutor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorMobileRollButton
// Size: 0x4e8 (Inherited: 0x4b0)
class UInteractorMobileRollButton : public UButton {
public:

	/*struct FDelegate*/char CalcCenterDelegate[0x10]; // 0x4b0(0x10)
	struct FVector2D CalcCenter; // 0x4c0(0x08)
	/*struct FMulticastInlineDelegate*/char offset[0x10]; // 0x4c8(0x10)
	char pad_4D8[0x10]; // 0x4d8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.KillFeedBackNumView
// Size: 0x5b8 (Inherited: 0x5a8)
class UKillFeedBackNumView : public ULuaUIHudBaseView {
public:

	struct UWidgetAnimation* Anima_GlitchOut; // 0x5a8(0x08)
	struct UWidgetAnimation* Anima_LittleScore_Out; // 0x5b0(0x08)

	void OnKillFeedBackNumViewFadeOut(bool bIsLittleScore); // Function DFMGameHud.KillFeedBackNumView.OnKillFeedBackNumViewFadeOut // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.KillTipsHUDView
// Size: 0x470 (Inherited: 0x388)
class UKillTipsHUDView : public UBaseUIView {
public:

	struct UTextBlock* DamageText; // 0x388(0x08)
	struct UTextBlock* ArmorReduceDamage; // 0x390(0x08)
	struct UVerticalBox* DamageVerticalBox; // 0x398(0x08)
	struct UWidgetAnimation* DamageTextAnim; // 0x3a0(0x08)
	struct UKillTipsLoopListWidget* KillTipsLoopWidget; // 0x3a8(0x08)
	struct UKillTipWidgetView* NormalKillTipWidget; // 0x3b0(0x08)
	char pad_3B8[0xb8]; // 0x3b8(0xb8)

	void PlayAnim(enum class EKillTipWidgetType WidgetType); // Function DFMGameHud.KillTipsHUDView.PlayAnim // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.KillTipsLoopListWidget
// Size: 0x320 (Inherited: 0x298)
class UKillTipsLoopListWidget : public UUserWidget {
public:

	struct UClass* HeadShotWidgetClass; // 0x298(0x08)
	struct UClass* MultiKillWidgetClass; // 0x2a0(0x08)
	float DisplayTime; // 0x2a8(0x04)
	float MovingTime; // 0x2ac(0x04)
	float Timespan; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UCurveFloat* MovingCurve; // 0x2b8(0x08)
	struct UCanvasPanel* Container; // 0x2c0(0x08)
	struct TArray<struct FKillTipsItemPosInfo> PositionMap; // 0x2c8(0x10)
	struct TArray<struct UKillTipsLoopListItemWidget*> UIItems; // 0x2d8(0x10)
	struct UKillTipsLoopListItemWidget* LastItem; // 0x2e8(0x08)
	char pad_2F0[0x10]; // 0x2f0(0x10)
	struct TArray<struct UKillTipsLoopListItemWidget*> RecycleItems; // 0x300(0x10)
	struct TArray<struct UKillTipsLoopListItemWidget*> TempRemoveItems; // 0x310(0x10)

	void PushNewTips(struct FKillTipsViewData TipData); // Function DFMGameHud.KillTipsLoopListWidget.PushNewTips // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.KillTipWidgetView
// Size: 0x2a0 (Inherited: 0x298)
class UKillTipWidgetView : public UUserWidget {
public:

	struct UTextBlock* NameText; // 0x298(0x08)

	void BPShow(); // Function DFMGameHud.KillTipWidgetView.BPShow // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.LowHealthScreenEffectHUD
// Size: 0x3d0 (Inherited: 0x388)
class ULowHealthScreenEffectHUD : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x390(0x08)
	struct UWidget* UIMeshWidget_58; // 0x398(0x08)
	struct UWidget* UIMeshWidget; // 0x3a0(0x08)
	float DeductFadeTime; // 0x3a8(0x04)
	float AddFadeTime; // 0x3ac(0x04)
	struct AGPCharacter* GPCharacter; // 0x3b0(0x08)
	char pad_3B8[0x18]; // 0x3b8(0x18)

	void OnMatchOver(enum class EMatchOverReason& MatchOverReason); // Function DFMGameHud.LowHealthScreenEffectHUD.OnMatchOver // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.LowHealthScreenEffectController
// Size: 0x150 (Inherited: 0x148)
class ULowHealthScreenEffectController : public UScreenEffectControllerBase {
public:

	struct TWeakObjectPtr<struct UBaseUIView> CacheLowHealthScreenUI; // 0x148(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.LuaItemData
// Size: 0x38 (Inherited: 0x30)
class ULuaItemData : public UObject {
public:

	int32_t Idx; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.LuaHudHelperLibrary
// Size: 0x30 (Inherited: 0x30)
class ULuaHudHelperLibrary : public UObject {
public:


	void STATIC_SetPositionWithAlignment(struct UWidget* Widget, struct UWidget* AlignmentWidget, struct FVector2D AlignmentCoordinate); // Function DFMGameHud.LuaHudHelperLibrary.SetPositionWithAlignment // (Final|Native|Static|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MainBodyHUDView
// Size: 0x3b8 (Inherited: 0x388)
class UMainBodyHUDView : public UBaseUIView {
public:

	struct UUserWidget* HeadPart; // 0x388(0x08)
	struct UUserWidget* ThoraxPart; // 0x390(0x08)
	struct UUserWidget* LeftArmPart; // 0x398(0x08)
	struct UUserWidget* RightArmPart; // 0x3a0(0x08)
	struct UUserWidget* LeftLegPart; // 0x3a8(0x08)
	struct UUserWidget* RightLegPart; // 0x3b0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MapItemProgressWidget
// Size: 0x2b8 (Inherited: 0x298)
class UMapItemProgressWidget : public UUserWidget {
public:

	struct UImage* DFImage_Progress; // 0x298(0x08)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x2a0(0x08)
	char pad_2A8[0x10]; // 0x2a8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MapLocationNameViewController
// Size: 0x3e0 (Inherited: 0x290)
class UMapLocationNameViewController : public UMapIconViewController {
public:

	char pad_290[0x150]; // 0x290(0x150)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MapMarkerEngineerCarViewController
// Size: 0x2c0 (Inherited: 0x290)
class UMapMarkerEngineerCarViewController : public UMapIconViewController {
public:

	int32_t PlayerNum; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	uint64_t PlayerUin; // 0x298(0x08)
	bool bIsLocalPlayer; // 0x2a0(0x01)
	bool bOnVehicleOperate; // 0x2a1(0x01)
	char pad_2A2[0x6]; // 0x2a2(0x06)
	struct UMapItemHUDView* MapItemHUDView; // 0x2a8(0x08)
	struct AGPPlayerState* GPPlayerState; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void OnVehicleOperate(bool On, struct AActor* Actor, struct ACHARACTER* CHARACTER); // Function DFMGameHud.MapMarkerEngineerCarViewController.OnVehicleOperate // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MarkWindowHUDIconView_Decipher
// Size: 0x320 (Inherited: 0x298)
class UMarkWindowHUDIconView_Decipher : public UUserWidget {
public:

	struct UTextBlock* UpDistText; // 0x298(0x08)
	struct UTextBlock* DistText; // 0x2a0(0x08)
	struct UCanvasPanel* ArrowRotation; // 0x2a8(0x08)
	struct UImage* IconImage; // 0x2b0(0x08)
	float InitOffsetAngle; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UImage* Image_Base; // 0x2c0(0x08)
	struct UImage* Image_Process; // 0x2c8(0x08)
	bool bJumpMarkerMngTest; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct AActor* TrackedActor; // 0x2d8(0x08)
	struct FVector2D AnchorCenterOffset; // 0x2e0(0x08)
	char pad_2E8[0x18]; // 0x2e8(0x18)
	struct UMapInfoSystem* MapInfoSystem; // 0x300(0x08)
	struct AGPMarkerManager* MarkerMng; // 0x308(0x08)
	struct TArray<struct AActor*> ShowMarkerDeciphers; // 0x310(0x10)

	void OnDecipherMarkerTypeChanged(struct AActor* MarkedActor, uint64_t ActorID, enum class EMarkerCoordinatedType markerType); // Function DFMGameHud.MarkWindowHUDIconView_Decipher.OnDecipherMarkerTypeChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MarkWindowHUDView
// Size: 0x1270 (Inherited: 0x388)
class UMarkWindowHUDView : public UBaseUIView {
public:

	struct APlayerCameraManager* PlayerCamMgr; // 0x388(0x08)
	struct ADFMPlayerController* PlayerController; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)
	struct UDFMBattleFieldSystem* GPBattleFieldSystem; // 0x3a0(0x08)
	struct ADFMMarkerManager* MarkerManager; // 0x3a8(0x08)
	int32_t PreCreateNum_Common; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct TArray<struct USOLScreenMarkerCommon*> PreCreatedCommonMarkIconList; // 0x3b8(0x10)
	int32_t PreCreateNum_QuestTrackIcon; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct TArray<struct UMarkWindowHUDIconView*> PreCreatedQuestMarkIconList; // 0x3d0(0x10)
	struct TArray<struct UMarkWindowHUDIconView*> PreCreatedContractMarkIconList; // 0x3e0(0x10)
	int32_t PreCreateNum_Contract; // 0x3f0(0x04)
	int32_t PreCreateNum_Decipher; // 0x3f4(0x04)
	struct TArray<struct UMarkWindowHUDIconView_Decipher*> PreCreatedDecipherMarkIconList; // 0x3f8(0x10)
	struct UCanvasPanel* MarkPanel; // 0x408(0x08)
	struct UCanvasPanel* MarkPanelLayer0; // 0x410(0x08)
	struct UCanvasPanel* MarkPanelLayer1; // 0x418(0x08)
	float SafeRatio; // 0x420(0x04)
	float MaxIconSize; // 0x424(0x04)
	bool bEnable3DAim; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	float AimAngleThreshold; // 0x42c(0x04)
	struct FVector2D ScreenOffset; // 0x430(0x08)
	struct TArray<float> EdgePadding; // 0x438(0x10)
	struct UClass* SOLScreenMarkerCommonWidgetClass; // 0x448(0x08)
	struct UClass* QuestTrackIconWidget; // 0x450(0x08)
	struct UClass* ContractTrackIconWidget; // 0x458(0x08)
	char pad_460[0xa6c]; // 0x460(0xa6c)
	float LocalPlayerItemOpacity; // 0xecc(0x04)
	float TeammateItemOpacity; // 0xed0(0x04)
	float LocalCharAimingItemOpacity; // 0xed4(0x04)
	bool bEnableSmooth; // 0xed8(0x01)
	char pad_ED9[0x3]; // 0xed9(0x03)
	float SmoothAlpha; // 0xedc(0x04)
	struct TMap<struct UWidget*, struct FVector2D> IconItemSmoothScreenMap; // 0xee0(0x50)
	char pad_F30[0x60]; // 0xf30(0x60)
	struct TMap<struct FName, struct USOLScreenMarkerCommon*> SOLScreenMarkerCache; // 0xf90(0x50)
	struct TArray<struct USOLScreenMarkerCommon*> SOLScreenMarkerArr; // 0xfe0(0x10)
	char pad_FF0[0x50]; // 0xff0(0x50)
	struct TMap<struct FName, struct UMarkWindowHUDIconView*> QuestMarkWindowHUDMap; // 0x1040(0x50)
	struct TMap<struct FName, struct UUserWidget*> QuestScreenMarkerCache; // 0x1090(0x50)
	char pad_10E0[0x50]; // 0x10e0(0x50)
	struct TArray<struct UMarkWindowHUDIconView*> FreeQuestMarkIconList; // 0x1130(0x10)
	struct UClass* DecipherMarkerIconWidgetClass; // 0x1140(0x08)
	struct TMap<struct FName, struct UMarkWindowHUDIconView_Decipher*> DecipherMarkIconMap; // 0x1148(0x50)
	struct TArray<struct UMarkWindowHUDIconView_Decipher*> FreeDecipherMarkArr; // 0x1198(0x10)
	char pad_11A8[0x60]; // 0x11a8(0x60)
	bool bDebugDraw; // 0x1208(0x01)
	char pad_1209[0x5b]; // 0x1209(0x5b)
	bool bHideTeamMateSignWhenLocalMarked; // 0x1264(0x01)
	char pad_1265[0xb]; // 0x1265(0x0b)

	void UpdateAimMarkerToMarkerManeger(); // Function DFMGameHud.MarkWindowHUDView.UpdateAimMarkerToMarkerManeger // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MatchObserverMainItem
// Size: 0x2b0 (Inherited: 0x298)
class UMatchObserverMainItem : public UUserWidget {
public:

	struct UDFTextBlock* DFTextBlockNum; // 0x298(0x08)
	struct UDFTextBlock* DFTextBlockDesc; // 0x2a0(0x08)
	struct UDFImage* DFImageDelimiter; // 0x2a8(0x08)

	void UpdateItemInfo(struct FString Num, struct FString Desc); // Function DFMGameHud.MatchObserverMainItem.UpdateItemInfo // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MatchObserverMainView
// Size: 0x4b0 (Inherited: 0x388)
class UMatchObserverMainView : public UBaseUIView {
public:

	struct UDFCanvasPanel* CurrentTeamStatPanel; // 0x388(0x08)
	struct UDFTextBlock* TxtTeamName; // 0x390(0x08)
	struct UDFTextBlock* TxtTeamKillNums; // 0x398(0x08)
	struct UDFTextBlock* TxtTeamInventoryValue; // 0x3a0(0x08)
	struct UDFImage* ImgCurrentTeamColor; // 0x3a8(0x08)
	struct UDFCanvasPanel* CurrentPlayerStatPanel; // 0x3b0(0x08)
	struct UDFTextBlock* TxtPlayerKillNums; // 0x3b8(0x08)
	struct UDFTextBlock* TxtPlayerInventoryValue; // 0x3c0(0x08)
	struct UMatchObserverMainItem* TeamRemainNumsItem; // 0x3c8(0x08)
	struct UMatchObserverMainItem* PlayerRemainNumsItem; // 0x3d0(0x08)
	struct UDFCanvasPanel* PendingSpectatorPlayerPanel; // 0x3d8(0x08)
	struct UDFTextBlock* TxtPendingSpectatorPlayerName; // 0x3e0(0x08)
	struct UHDKeyIconBoxWidget* WBP_CommonKeyIconBox_LeftMouse; // 0x3e8(0x08)
	struct UUserWidget* TeamListPanel; // 0x3f0(0x08)
	struct UDFVerticalBox* TeamList; // 0x3f8(0x08)
	struct FText TeamRemainNumsDesc; // 0x400(0x18)
	struct FText PlayerRemainNumsDesc; // 0x418(0x18)
	float TickInterval; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UClass* OBTeamItemClass; // 0x438(0x08)
	char pad_440[0x18]; // 0x440(0x18)
	struct TMap<int32_t, struct UObserverTeamInfoItemView*> OBTeamItem; // 0x458(0x50)
	float TimeSinceLastTick; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)

	void UpdateObservingCheckBox(); // Function DFMGameHud.MatchObserverMainView.UpdateObservingCheckBox // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MiniManView
// Size: 0x530 (Inherited: 0x388)
class UMiniManView : public UBaseUIView {
public:

	struct USpineWidget* MiniMan; // 0x388(0x08)
	struct UGPAttributeSetHealth* AttributeSet; // 0x390(0x08)
	struct ADFMCharacter* DFMCharacter; // 0x398(0x08)
	struct UButton* ShowDetailBtn; // 0x3a0(0x08)
	struct UImage* SoundImg; // 0x3a8(0x08)
	struct TMap<enum class ESoundWaveSourceType, struct FSoundWaveInfo> SoundWaveInfoMap; // 0x3b0(0x50)
	float DeltaWaveValue; // 0x400(0x04)
	struct FLinearColor Color_1; // 0x404(0x10)
	struct FLinearColor Color_2; // 0x414(0x10)
	struct FLinearColor Color_3; // 0x424(0x10)
	struct FLinearColor Color_4; // 0x434(0x10)
	struct FLinearColor Color_5; // 0x444(0x10)
	struct FLinearColor Color_6; // 0x454(0x10)
	struct FLinearColor GlintColor; // 0x464(0x10)
	float MiniManTickingResetTime; // 0x474(0x04)
	float SpeedForColorChange; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct TMap<enum class ECharacterPart, struct FMinimanBodyPart> BodyParts; // 0x480(0x50)
	float TotalGlintTime; // 0x4d0(0x04)
	char pad_4D4[0x4c]; // 0x4d4(0x4c)
	struct FLinearColor CurrWaveColor; // 0x520(0x10)

	void UpdateBpCharacterPose(struct FString CharacterStateName); // Function DFMGameHud.MiniManView.UpdateBpCharacterPose // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MiniMapHUDView_Compasses
// Size: 0x2c0 (Inherited: 0x298)
class UMiniMapHUDView_Compasses : public UUserWidget {
public:

	struct UCanvasPanel* DFCanvasPanel_1; // 0x298(0x08)
	struct UTextBlock* DFTextBlock_North; // 0x2a0(0x08)
	struct UTextBlock* DFTextBlock_East; // 0x2a8(0x08)
	struct UTextBlock* DFTextBlock_South; // 0x2b0(0x08)
	struct UTextBlock* DFTextBlock_West; // 0x2b8(0x08)

	void BP_CompassesVisibleType(int32_t InType); // Function DFMGameHud.MiniMapHUDView_Compasses.BP_CompassesVisibleType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MiniMapHUDView_Dangerous
// Size: 0x2b8 (Inherited: 0x298)
class UMiniMapHUDView_Dangerous : public UUserWidget {
public:

	char pad_298[0x10]; // 0x298(0x10)
	struct UDFRadialImage* DFRadialImage_1; // 0x2a8(0x08)
	struct UGPTweenFloat* PercentTween; // 0x2b0(0x08)

	void SetHide(); // Function DFMGameHud.MiniMapHUDView_Dangerous.SetHide // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MiniMapHUDView_MapTips
// Size: 0x310 (Inherited: 0x298)
class UMiniMapHUDView_MapTips : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x2a0(0x50)
	struct UWidgetAnimation* AnimaIn; // 0x2f0(0x08)
	struct UWidgetAnimation* AnimaOut; // 0x2f8(0x08)
	float DefaultDisplayDuration; // 0x300(0x04)
	char pad_304[0xc]; // 0x304(0x0c)

	void SetHide(); // Function DFMGameHud.MiniMapHUDView_MapTips.SetHide // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MiniMapHUDView_TipsNonres_Alert
// Size: 0x300 (Inherited: 0x298)
class UMiniMapHUDView_TipsNonres_Alert : public UUserWidget {
public:

	struct FText DisplayText; // 0x298(0x18)
	float TextDuration; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UImage* Image_51; // 0x2b8(0x08)
	struct UImage* Image_FX; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_Display; // 0x2c8(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_AlertNormal_Raid_in; // 0x2d0(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_AlertNormal_Raid_out; // 0x2d8(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_AlertNormal_Raid_loop; // 0x2e0(0x08)
	char pad_2E8[0x18]; // 0x2e8(0x18)

	void OnTextDurationEnd(); // Function DFMGameHud.MiniMapHUDView_TipsNonres_Alert.OnTextDurationEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MissionSystemHudController
// Size: 0xb8 (Inherited: 0xb0)
class UMissionSystemHudController : public UBaseUIController {
public:

	char pad_B0[0x8]; // 0xb0(0x08)

	void UpdatePanel(struct FPlayerMissionInfo& MissionInfo); // Function DFMGameHud.MissionSystemHudController.UpdatePanel // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MissionSystemHudQuestMainNew
// Size: 0x438 (Inherited: 0x388)
class UMissionSystemHudQuestMainNew : public UBaseUIView {
public:

	char pad_388[0x18]; // 0x388(0x18)
	struct UTextBlock* TimeTextBlock; // 0x3a0(0x08)
	struct UPanelWidget* CanvasPanel_Hint; // 0x3a8(0x08)
	struct UTextBlock* TimeRemainText; // 0x3b0(0x08)
	struct UUserWidget* TimeRemainWidget; // 0x3b8(0x08)
	float CountTurnRedNum; // 0x3c0(0x04)
	char pad_3C4[0x14]; // 0x3c4(0x14)
	struct UClass* MarkerClass; // 0x3d8(0x08)
	float MarkerScale; // 0x3e0(0x04)
	char pad_3E4[0x54]; // 0x3e4(0x54)

	void UpdateMissionRewards(struct TArray<struct FMissionRewardsInfo>& rewards); // Function DFMGameHud.MissionSystemHudQuestMainNew.UpdateMissionRewards // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.NearbyPickupHUD
// Size: 0x3d8 (Inherited: 0x388)
class UNearbyPickupHUD : public UBaseUIView {
public:

	struct UClass* Item; // 0x388(0x08)
	struct UScrollBox* ItemRoot; // 0x390(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x398(0x08)
	struct UButton* CollapseBtn; // 0x3a0(0x08)
	struct UButton* ExpandBtn; // 0x3a8(0x08)
	struct APlayerController* NZPC; // 0x3b0(0x08)
	struct UInventoryManager* InventroyMananger; // 0x3b8(0x08)
	struct TArray<struct FInventoryItemInfo> LastNearByItems; // 0x3c0(0x10)
	char pad_3D0[0x8]; // 0x3d0(0x08)

	void PickTopRankItem(); // Function DFMGameHud.NearbyPickupHUD.PickTopRankItem // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.NearbyPickupItem
// Size: 0x8f8 (Inherited: 0x388)
class UNearbyPickupItem : public UBaseUIView {
public:

	struct UImage* Icon; // 0x388(0x08)
	struct UTextBlock* Name; // 0x390(0x08)
	struct UButton* Btn; // 0x398(0x08)
	struct UInventoryManager* InventroyMananger; // 0x3a0(0x08)
	char pad_3A8[0x550]; // 0x3a8(0x550)

	void PickItem(); // Function DFMGameHud.NearbyPickupItem.PickItem // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.NormalTipsController
// Size: 0xe0 (Inherited: 0xb0)
class UNormalTipsController : public UBaseUIController {
public:

	char pad_B0[0x4]; // 0xb0(0x04)
	float ShowSeconds; // 0xb4(0x04)
	float ShowInterval; // 0xb8(0x04)
	char pad_BC[0xc]; // 0xbc(0x0c)
	struct URichTextBlock* TextMsg; // 0xc8(0x08)
	char pad_D0[0x10]; // 0xd0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ObserverTeamInfoItemMandelBrickView
// Size: 0x298 (Inherited: 0x298)
class UObserverTeamInfoItemMandelBrickView : public UUserWidget {
public:


	void BP_SetType(enum class EBlueprintPlunderState MandelBrickType); // Function DFMGameHud.ObserverTeamInfoItemMandelBrickView.BP_SetType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ObserverTeamInfoItemView
// Size: 0x338 (Inherited: 0x298)
class UObserverTeamInfoItemView : public UUserWidget {
public:

	struct UDFCheckBox* ObservingCheckBox; // 0x298(0x08)
	struct UDFImage* ImgTeamColor; // 0x2a0(0x08)
	struct UDFTextBlock* TxtTeamName; // 0x2a8(0x08)
	struct UDFTextBlock* TxtKillNums; // 0x2b0(0x08)
	struct UDFTextBlock* TxtInventoryValue; // 0x2b8(0x08)
	struct UDFImage* ImgDestroyFlag; // 0x2c0(0x08)
	struct UObserverTeamInfoItemMandelBrickView* MandelBrickView; // 0x2c8(0x08)
	struct TMap<int32_t, struct FText> DividedNumberTextMap; // 0x2d0(0x50)
	int32_t CurTeamId; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct TArray<enum class EOBPlayerStatusType> TeamPlayerStatusInfo; // 0x328(0x10)

	void UpdateTeamInfo(int32_t TeamId, uint16_t KillNums, uint32_t InventoryValue, struct FLinearColor TeamColor, struct TArray<enum class EOBPlayerStatusType>& InPlayerStatusInfo); // Function DFMGameHud.ObserverTeamInfoItemView.UpdateTeamInfo // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerBuffAnimView
// Size: 0x3c0 (Inherited: 0x388)
class UPlayerBuffAnimView : public UBaseUIView {
public:

	struct UBuffItemHUDView* BuffIcon; // 0x388(0x08)
	struct UWidgetSwitcher* BuffTypeWS; // 0x390(0x08)
	struct UTextBlock* DeBuffTextBlock; // 0x398(0x08)
	struct UTextBlock* BuffTextBlock; // 0x3a0(0x08)
	bool bIsPlayingInAnim; // 0x3a8(0x01)
	char pad_3A9[0x17]; // 0x3a9(0x17)

	void PlayInAnim(); // Function DFMGameHud.PlayerBuffAnimView.PlayInAnim // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerDamageHudView
// Size: 0x3f0 (Inherited: 0x388)
class UPlayerDamageHudView : public UBaseUIView {
public:

	struct UProgressBar* HurtBaseBar; // 0x388(0x08)
	struct UTextBlock* HurtNumText; // 0x390(0x08)
	struct UTextBlock* OrderTextBlock; // 0x398(0x08)
	struct UImage* MVPImage; // 0x3a0(0x08)
	struct UImage* OrderTextBackImage; // 0x3a8(0x08)
	char pad_3B0[0x10]; // 0x3b0(0x10)
	struct TArray<struct FText> DamageRankArr; // 0x3c0(0x10)
	struct FLinearColor MVPColorType; // 0x3d0(0x10)
	struct FLinearColor RankTextColorType; // 0x3e0(0x10)

	void UpdateDamageView(int32_t CachedInnerIndex); // Function DFMGameHud.PlayerDamageHudView.UpdateDamageView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerHUDView
// Size: 0x680 (Inherited: 0x388)
class UPlayerHUDView : public UBaseUIView {
public:

	struct UMaterialInstanceDynamic* ImpendingDeathMID; // 0x388(0x08)
	char pad_390[0x10]; // 0x390(0x10)
	enum class EDFMGamePlayMode CurGamePlayMode; // 0x3a0(0x01)
	char pad_3A1[0x1f]; // 0x3a1(0x1f)
	struct TArray<struct FLinearColor> MemberColorArr; // 0x3c0(0x10)
	char pad_3D0[0x5]; // 0x3d0(0x05)
	bool bIsSelf; // 0x3d5(0x01)
	char pad_3D6[0x12]; // 0x3d6(0x12)
	struct FMemberHealthInfo MemberHealthInfo; // 0x3e8(0x3c)
	int32_t CachedInnerIndex; // 0x424(0x04)
	bool bIsLeader; // 0x428(0x01)
	char pad_429[0x1]; // 0x429(0x01)
	bool bIsMicOpen; // 0x42a(0x01)
	bool bIsSpeaking; // 0x42b(0x01)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UMaterialInstanceDynamic* ProgressBarMID; // 0x430(0x08)
	char pad_438[0x8]; // 0x438(0x08)
	struct UProgressBar* HealthProgressBar; // 0x440(0x08)
	struct UCanvasPanel* ArmourCanvas; // 0x448(0x08)
	struct UImage* ProgressBarImage; // 0x450(0x08)
	struct UImage* ColorImage; // 0x458(0x08)
	struct UTextBlock* PlayerNumberText; // 0x460(0x08)
	struct UTextBlock* PlayerNameText; // 0x468(0x08)
	struct UDFMCommonImage* TopCommonImg; // 0x470(0x08)
	struct UImage* AvatarImg; // 0x478(0x08)
	struct UImage* MVPImage; // 0x480(0x08)
	struct UImage* ImpendingDeathPercentImg; // 0x488(0x08)
	struct UDFMCommonImage* ImpendingDeathImage; // 0x490(0x08)
	struct UDFMCommonImage* RightTopImg; // 0x498(0x08)
	struct UDFMCommonImage* TalkingImage; // 0x4a0(0x08)
	struct UImage* Masking; // 0x4a8(0x08)
	struct UCanvasPanel* Progress; // 0x4b0(0x08)
	struct UProgressBar* TalkingProgressBar; // 0x4b8(0x08)
	struct UUserWidget* TeamStatusHurtBar; // 0x4c0(0x08)
	struct UDFVerticalBox* LiveRemainHBox; // 0x4c8(0x08)
	struct UImage* MVP_Raid; // 0x4d0(0x08)
	struct UCanvasPanel* RPGNumCanvas; // 0x4d8(0x08)
	struct UTextBlock* ReviveCountDownText; // 0x4e0(0x08)
	struct UWidgetAnimation* FiringAnim; // 0x4e8(0x08)
	char pad_4F0[0x3]; // 0x4f0(0x03)
	bool bIsClientOffline; // 0x4f3(0x01)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct TMap<enum class ETeammateState, struct FLinearColor> MaskColorType; // 0x4f8(0x50)
	struct TMap<enum class ETeammateState, struct FSoftObjectPath> IconType; // 0x548(0x50)
	struct TMap<enum class ETeammateState, struct FLinearColor> ImpendingDeathPercentColorType; // 0x598(0x50)
	struct TMap<int32_t, struct FSoftObjectPath> PlayerGamePlayStateIconType; // 0x5e8(0x50)
	float CurrentUpdateTickTimerDamage; // 0x638(0x04)
	float DesiredWidth; // 0x63c(0x04)
	float DesiredHeight; // 0x640(0x04)
	int32_t LeftChopCount; // 0x644(0x04)
	bool bIsLimitTick; // 0x648(0x01)
	char pad_649[0x3]; // 0x649(0x03)
	float LimitTickTime; // 0x64c(0x04)
	char pad_650[0x30]; // 0x650(0x30)

	void UpdatePlayerStatus(); // Function DFMGameHud.PlayerHUDView.UpdatePlayerStatus // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerReviveButton
// Size: 0x2d8 (Inherited: 0x298)
class UPlayerReviveButton : public UUserWidget {
public:

	struct UDFButton* DFButton_39; // 0x298(0x08)
	struct UWidgetAnimation* ReviveButtonLoopAnimation; // 0x2a0(0x08)
	char pad_2A8[0x20]; // 0x2a8(0x20)
	float AnimationLoopCD; // 0x2c8(0x04)
	char pad_2CC[0xc]; // 0x2cc(0x0c)

	void BP_SetState(enum class EPlayerReviveButtonState State, struct FText& Text); // Function DFMGameHud.PlayerReviveButton.BP_SetState // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerReviveHudView
// Size: 0x5b0 (Inherited: 0x388)
class UPlayerReviveHudView : public UBaseUIView {
public:

	char pad_388[0x14]; // 0x388(0x14)
	float GiveUp_CD; // 0x39c(0x04)
	float SOS_Button_CD; // 0x3a0(0x04)
	float SOS_SendChatCD; // 0x3a4(0x04)
	float MaxImpendingCountTime; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct UClass* DFMRescueMySelfItemView; // 0x3b0(0x08)
	int32_t Breakthrough_SOS_Count; // 0x3b8(0x04)
	float Breakthrough_SOS_CD; // 0x3bc(0x04)
	float Breakthrough_SearchMaxDistance; // 0x3c0(0x04)
	float Breakthrough_SearchDeltaTime; // 0x3c4(0x04)
	int32_t Breakthrough_GiveUpBuff; // 0x3c8(0x04)
	float DeltaImpendingCountTime; // 0x3cc(0x04)
	int32_t SOL_SOS_Count; // 0x3d0(0x04)
	float SOL_SOS_CD; // 0x3d4(0x04)
	float SOL_SearchMaxDistance; // 0x3d8(0x04)
	float SOL_SearchDeltaTime; // 0x3dc(0x04)
	struct UWidgetAnimation* CallForHelpAnimation; // 0x3e0(0x08)
	struct UPlayerReviveButton* Button_Buy_AllDied; // 0x3e8(0x08)
	struct UPlayerReviveButton* Button_Mayday; // 0x3f0(0x08)
	struct UPlayerReviveProgress* WBP_TipsPro_Life; // 0x3f8(0x08)
	struct UCanvasPanel* ReviveViewCanvasPanel; // 0x400(0x08)
	struct UCanvasPanel* BeRevivedViewCanvasPanel; // 0x408(0x08)
	struct UVerticalBox* KnockDownItemVerticalBox; // 0x410(0x08)
	struct UCanvasPanel* PCWaitingRescue; // 0x418(0x08)
	struct UCanvasPanel* PCGiveUpCountDown; // 0x420(0x08)
	struct UDFProgressBar* PCGiveUpProgressBar; // 0x428(0x08)
	struct UDFProgressBar* PCReviveProgressBar; // 0x430(0x08)
	struct UDFImage* RescuingClickDownImage; // 0x438(0x08)
	struct UDFImage* GiveUpClickDownImage; // 0x440(0x08)
	struct UTextBlock* RescueInfoText; // 0x448(0x08)
	char pad_450[0xc]; // 0x450(0x0c)
	float CountdownTotal; // 0x45c(0x04)
	float CallForHelpAnimLoopCD_PC; // 0x460(0x04)
	enum class EaseType ReviveProgressBarTweenType; // 0x464(0x01)
	enum class EaseType GiveUpProgressBarTweenType; // 0x465(0x01)
	char pad_466[0x52]; // 0x466(0x52)
	struct TArray<struct UDFMRescueMySelfItemView*> RescueMySelfItemViews; // 0x4b8(0x10)
	struct TArray<struct FNearMedicOrTeammateInfo> HasShowedNearMedicOrTeammateInfos; // 0x4c8(0x10)
	struct TMap<uint64_t, struct FNearMedicOrTeammateInfo> NearMedicOrTeammateInfoObjects; // 0x4d8(0x50)
	struct TMap<uint64_t, struct FNearMedicOrTeammateInfo> TheFourNearMedicOrTeammateInfoObjects; // 0x528(0x50)
	char pad_578[0x8]; // 0x578(0x08)
	struct UDFMActionCommonProgressBar* WBP_TipsPro_Mini; // 0x580(0x08)
	struct UDFHDActionCommonProgressBar* WBP_TipsPro_Mini_HD; // 0x588(0x08)
	char pad_590[0x8]; // 0x590(0x08)
	struct UGPTweenFloat* RevivePercentTween; // 0x598(0x08)
	struct UGPTweenFloat* GiveupPercentTween; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)

	void UpdateRescuingView_PC(); // Function DFMGameHud.PlayerReviveHudView.UpdateRescuingView_PC // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerReviveProgress
// Size: 0x2d8 (Inherited: 0x298)
class UPlayerReviveProgress : public UUserWidget {
public:

	struct UDFTextBlock* ResurrectStateText; // 0x298(0x08)
	struct UDFTextBlock* RemainResurrectTime; // 0x2a0(0x08)
	struct UDFProgressBar* AutoReviveProgress; // 0x2a8(0x08)
	struct UWidgetAnimation* AnimationIn; // 0x2b0(0x08)
	struct UWidgetAnimation* AnimationOut; // 0x2b8(0x08)
	char pad_2C0[0x10]; // 0x2c0(0x10)
	float InterpolationSpeed; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerSoundHudView
// Size: 0x5b0 (Inherited: 0x388)
class UPlayerSoundHudView : public UBaseUIView {
public:

	struct UImage* CharacterSoundItem; // 0x388(0x08)
	struct UImage* CharacterSoundItemSecond; // 0x390(0x08)
	struct UMaterialInstanceDynamic* CharacterSoundItemMID; // 0x398(0x08)
	float SoundLevelInterpSpeed; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	/*struct TSet<struct FName>*/char NoInterpParaNameSet[0x50]; // 0x3a8(0x50)
	struct TArray<struct FString> LevelAnimString; // 0x3f8(0x10)
	float LevelDownCDTime; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct TMap<int32_t, struct FCharacterSoundLevelParams> LevelParaMap; // 0x410(0x50)
	struct TMap<enum class ESoundVisualizationType, struct FLinearColor> WaveColorMap; // 0x460(0x50)
	struct FLinearColor DefaultWaveColor; // 0x4b0(0x10)
	struct AGPCharacter* LocalCharacter; // 0x4c0(0x08)
	char pad_4C8[0xe8]; // 0x4c8(0xe8)

	void OnMyMaxSoundLevelChanged(int32_t OldLevel, int32_t NewLevel, enum class ESoundVisualizationType OldType, enum class ESoundVisualizationType NewType); // Function DFMGameHud.PlayerSoundHudView.OnMyMaxSoundLevelChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerStaminaHudView
// Size: 0x478 (Inherited: 0x388)
class UPlayerStaminaHudView : public UBaseUIView {
public:

	struct UCanvasPanel* StaminaCanvasPanel; // 0x388(0x08)
	struct UButton* StaminaBar; // 0x390(0x08)
	struct UDFRadialImage* BaseBar_Back; // 0x398(0x08)
	struct UDFRadialImage* ExtraBar_Back; // 0x3a0(0x08)
	struct UDFRadialImage* BaseBar_Front; // 0x3a8(0x08)
	struct UDFRadialImage* ExtraBar_Front; // 0x3b0(0x08)
	float BaseStaminaMaxValue; // 0x3b8(0x04)
	float InterpSpeed; // 0x3bc(0x04)
	float RealValueInterpSpeed; // 0x3c0(0x04)
	float LowStaminaPercent; // 0x3c4(0x04)
	float StaminaChangeFlushStartThreshold; // 0x3c8(0x04)
	float StaminaChangeFlushEndThreshold; // 0x3cc(0x04)
	struct FLinearColor RecoverColor; // 0x3d0(0x10)
	struct FLinearColor ConsumeColor; // 0x3e0(0x10)
	struct FLinearColor BaseColor; // 0x3f0(0x10)
	struct FLinearColor LowStaminaColor; // 0x400(0x10)
	char pad_410[0x30]; // 0x410(0x30)
	struct UMaterialInstanceDynamic* FXMaterial; // 0x440(0x08)
	struct AGPCharacter* LocalCharacter; // 0x448(0x08)
	struct UGPStaminaDataComponent* StaminaComp; // 0x450(0x08)
	struct UWidgetAnimation* LowStaminaAnimation; // 0x458(0x08)
	char pad_460[0x18]; // 0x460(0x18)

	void PlayStaminaNotEnoughAnim(); // Function DFMGameHud.PlayerStaminaHudView.PlayStaminaNotEnoughAnim // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerStartViewController
// Size: 0x2e0 (Inherited: 0x290)
class UPlayerStartViewController : public UMapIconViewController {
public:

	struct FText Title; // 0x290(0x18)
	struct FSoftObjectPath ImagePath; // 0x2a8(0x18)
	struct FText Description; // 0x2c0(0x18)
	char pad_2D8[0x8]; // 0x2d8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.POIHUDTipsView
// Size: 0x3c0 (Inherited: 0x388)
class UPOIHUDTipsView : public UBaseUIView {
public:

	struct UFindCampView* FindCampViewHud; // 0x388(0x08)
	struct FName FindCampViewName; // 0x390(0x08)
	struct FTimerHandle HideTimerHandle; // 0x398(0x08)
	struct FTimerHandle OutAnimTimerHandle; // 0x3a0(0x08)
	float DelayHideDuration; // 0x3a8(0x04)
	struct FName IntoHighPOIAudio; // 0x3ac(0x08)
	struct FName IntoNormalPOIAudio; // 0x3b4(0x08)
	char pad_3BC[0x4]; // 0x3bc(0x04)

	void SetHud(struct FText TextFirst, struct FText TextSecond, struct FLinearColor Color, char POILevelInt); // Function DFMGameHud.POIHUDTipsView.SetHud // (Final|Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.POIProductViewController
// Size: 0x2b0 (Inherited: 0x290)
class UPOIProductViewController : public UMapIconViewController {
public:

	char pad_290[0x20]; // 0x290(0x20)

	void SOLIntroEventState(char EventStateUint); // Function DFMGameHud.POIProductViewController.SOLIntroEventState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PopupQuitGameHudView
// Size: 0x3a0 (Inherited: 0x388)
class UPopupQuitGameHudView : public UBaseUIView {
public:

	struct UButton* BtnResume; // 0x388(0x08)
	struct UButton* BtnQuit; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)

	void OnClickResumeGame(); // Function DFMGameHud.PopupQuitGameHudView.OnClickResumeGame // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PVETalentButtonView
// Size: 0x3f0 (Inherited: 0x3b8)
class UPVETalentButtonView : public UMobileGamePadView {
public:

	struct UPVETalentItemView* H_PVETalentItem; // 0x3b8(0x08)
	struct UTextBlock* Talent2Text; // 0x3c0(0x08)
	struct UButton* SprintMoveButton; // 0x3c8(0x08)
	struct UTextBlock* TextCD; // 0x3d0(0x08)
	struct UTextBlock* TextCnt; // 0x3d8(0x08)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	int32_t SkillEntityIndex; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)

	void SetAuraTalent(struct FTalentDataRow& TalentData); // Function DFMGameHud.PVETalentButtonView.SetAuraTalent // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PVETalentDetailView
// Size: 0x3a0 (Inherited: 0x388)
class UPVETalentDetailView : public UBaseUIView {
public:

	struct UTextBlock* TextType; // 0x388(0x08)
	struct UTextBlock* TextName; // 0x390(0x08)
	struct UTextBlock* TextBlock_2; // 0x398(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PVETalentItemView
// Size: 0x398 (Inherited: 0x388)
class UPVETalentItemView : public UBaseUIView {
public:

	struct UImage* Image_223; // 0x388(0x08)
	char pad_390[0x8]; // 0x390(0x08)

	void SetTalentData(struct FTalentDataRow& TalentData); // Function DFMGameHud.PVETalentItemView.SetTalentData // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.QuestObjectionIconViewController
// Size: 0x320 (Inherited: 0x2c8)
class UQuestObjectionIconViewController : public USelectableMapIconController {
public:

	struct FName QuestIDName; // 0x2c8(0x08)
	struct FName ObjectionIdName; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)
	struct FText QuestName; // 0x2e0(0x18)
	struct FText QuestObjectionDesc; // 0x2f8(0x18)
	char pad_310[0x10]; // 0x310(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.QuestObjectionRangeViewController
// Size: 0x2b0 (Inherited: 0x290)
class UQuestObjectionRangeViewController : public UMapIconViewController {
public:

	struct FName QuestIDName; // 0x290(0x08)
	struct FName ObjectionIdName; // 0x298(0x08)
	bool bEnableAdvancedTracking; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float ShowTrackingRangeDist; // 0x2a4(0x04)
	char pad_2A8[0x8]; // 0x2a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RaidBigMapHUDView_LevelBox
// Size: 0x308 (Inherited: 0x298)
class URaidBigMapHUDView_LevelBox : public UUserWidget {
public:

	struct UImage* StageBgImg; // 0x298(0x08)
	struct UTextBlock* StageNameText; // 0x2a0(0x08)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x2a8(0x50)
	struct UWidgetAnimation* Anim_In; // 0x2f8(0x08)
	struct UWidgetAnimation* Anim_Out; // 0x300(0x08)

	void InitRaidLevelBox(struct FText& StageName, struct FSoftObjectPath& BgObjectPath); // Function DFMGameHud.RaidBigMapHUDView_LevelBox.InitRaidLevelBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RaidBigMapHUDView_LiveTabBtn
// Size: 0x2a0 (Inherited: 0x298)
class URaidBigMapHUDView_LiveTabBtn : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)

	void BP_SetBtnType(int32_t InType); // Function DFMGameHud.RaidBigMapHUDView_LiveTabBtn.BP_SetBtnType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RaidBigMapHUDView_LiveTabList
// Size: 0x318 (Inherited: 0x298)
class URaidBigMapHUDView_LiveTabList : public UUserWidget {
public:

	struct URaidBigMapHUDView_LiveTabBtn* WBP_Map_LiveTabBtn_DataBoard; // 0x298(0x08)
	struct UButton* Btn_DataBoard; // 0x2a0(0x08)
	struct URaidBigMapHUDView_LiveTabBtn* WBP_Map_LiveTabBtn_Advantages; // 0x2a8(0x08)
	struct UButton* Btn_Advantages; // 0x2b0(0x08)
	struct TMap<enum class ERaidLiveTabType, struct URaidBigMapHUDView_LiveTabBtn*> LiveTabBtnMap; // 0x2b8(0x50)
	struct URaidBigMapHUDView_Main* RaidBigMapHUDView_Main; // 0x308(0x08)
	enum class ERaidLiveTabType CurLiveTabType; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)

	void OnButtonClick_DataBoard(); // Function DFMGameHud.RaidBigMapHUDView_LiveTabList.OnButtonClick_DataBoard // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RaidBigMapHUDView_SidePanel
// Size: 0x2d0 (Inherited: 0x298)
class URaidBigMapHUDView_SidePanel : public UUserWidget {
public:

	struct UButton* Button; // 0x298(0x08)
	struct UCanvasPanel* Panel; // 0x2a0(0x08)
	bool IsSidePanelFolded; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UScrollBox* BtnScrollBox; // 0x2b0(0x08)
	enum class ERaidLiveTabType CurLiveTabType; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct URaidBigMapHUDView_Main* RaidBigMapHUDView_Main; // 0x2c0(0x08)
	struct UClass* RaidSidePanelBoxClass; // 0x2c8(0x08)

	void OnButtonClick(); // Function DFMGameHud.RaidBigMapHUDView_SidePanel.OnButtonClick // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RaidBigMapHUDView_SidePanelBox
// Size: 0x2c0 (Inherited: 0x298)
class URaidBigMapHUDView_SidePanelBox : public UUserWidget {
public:

	struct UTextBlock* TitleText; // 0x298(0x08)
	struct UVerticalBox* BtnVerticalBox; // 0x2a0(0x08)
	struct URaidBigMapHUDView_Main* RaidBigMapHUDView_Main; // 0x2a8(0x08)
	struct UClass* RaidSidePanelBtnS1Class; // 0x2b0(0x08)
	struct UClass* RaidSidePanelBtnS2Class; // 0x2b8(0x08)

	void SetTitle(struct FText& Text); // Function DFMGameHud.RaidBigMapHUDView_SidePanelBox.SetTitle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RankSkillBase
// Size: 0x388 (Inherited: 0x388)
class URankSkillBase : public UBaseUIView {
public:


	void UpdateSkillStatus(enum class ESkillUIState InSkillUIState); // Function DFMGameHud.RankSkillBase.UpdateSkillStatus // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RemainTimeHUDView
// Size: 0x3e8 (Inherited: 0x388)
class URemainTimeHUDView : public UBaseUIView {
public:

	struct UHorizontalBox* HorizontalBox_1; // 0x388(0x08)
	struct UTextBlock* CountingTimeText; // 0x390(0x08)
	struct UCanvasPanel* UrgentTimeCanvasPanel; // 0x398(0x08)
	int32_t UrgentTimeRemain; // 0x3a0(0x04)
	char pad_3A4[0x10]; // 0x3a4(0x10)
	int32_t TickAccumulateCount; // 0x3b4(0x04)
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct FLinearColor UrgentTimeColor; // 0x3c0(0x10)
	struct FLinearColor NormalTimeColor; // 0x3d0(0x10)
	char pad_3E0[0x4]; // 0x3e0(0x04)
	bool bNeedShowWhenWatch; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)

	void OnSOLStartMatchInfoDelayShow(); // Function DFMGameHud.RemainTimeHUDView.OnSOLStartMatchInfoDelayShow // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RouletteHUDView
// Size: 0x3a8 (Inherited: 0x388)
class URouletteHUDView : public UBaseUIView {
public:

	struct UButton* CloseRouletteBtn; // 0x388(0x08)
	char pad_390[0x10]; // 0x390(0x10)
	struct UDataTable* RouletteDataTable; // 0x3a0(0x08)

	void RouletteTacticalActionOperate(enum class ERouletteActionType OperationType); // Function DFMGameHud.RouletteHUDView.RouletteTacticalActionOperate // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RouletteLayoutDataCenter
// Size: 0x30 (Inherited: 0x30)
class URouletteLayoutDataCenter : public UDFMGameSingletonAttribute {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SafeAreaScreenEffectHUD
// Size: 0x4d8 (Inherited: 0x388)
class USafeAreaScreenEffectHUD : public UBaseUIView {
public:

	bool bUseScreenEffectManager; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	struct FName LeaveSafeAreaScreenEffectInfoName; // 0x38c(0x08)
	char pad_394[0x4]; // 0x394(0x04)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char LeaveSafeAreaStartMI[0x28]; // 0x398(0x28)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char LeaveSafeAreaLoopMI[0x28]; // 0x3c0(0x28)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char LeaveSafeAreaEndMI[0x28]; // 0x3e8(0x28)
	struct AGPCharacter* GPCharacter; // 0x410(0x08)
	struct AGPPlayerCameraManager* PlayerCameraManager; // 0x418(0x08)
	struct UMaterialInstanceDynamic* LeaveSafeAreaStartDMI; // 0x420(0x08)
	struct UMaterialInstanceDynamic* LeaveSafeAreaEndDMI; // 0x428(0x08)
	struct UMaterialInstanceDynamic* LeaveSafeAreaLoopDMI; // 0x430(0x08)
	char pad_438[0x40]; // 0x438(0x40)
	float SafeAreaFadeInTime; // 0x478(0x04)
	float SafeAreaFadeOutTime; // 0x47c(0x04)
	float SafeAreaFadeDeltaTime; // 0x480(0x04)
	float CountDownRefreshDeltaTime; // 0x484(0x04)
	float GuideRefreshFrequency; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UTextBlock* HintText; // 0x490(0x08)
	struct UImage* ArrowImage; // 0x498(0x08)
	struct UTextBlock* countdown; // 0x4a0(0x08)
	struct UWidgetAnimation* NumbAnim; // 0x4a8(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_OutGamingArea_in; // 0x4b0(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_OutGamingArea_loop; // 0x4b8(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_OutGamingArea_out; // 0x4c0(0x08)
	struct FLinearColor ArrowImageColor; // 0x4c8(0x10)

	void RemoveSafeAreaPostProcess(struct UMaterialInstanceDynamic* MaterialDMI); // Function DFMGameHud.SafeAreaScreenEffectHUD.RemoveSafeAreaPostProcess // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SafeHouseInteractorView
// Size: 0x518 (Inherited: 0x388)
class USafeHouseInteractorView : public UBaseUIView {
public:

	struct UCanvasPanel* RootCanvas; // 0x388(0x08)
	struct UCanvasPanel* WhiteDot_1; // 0x390(0x08)
	struct UCanvasPanel* WhiteDot_2; // 0x398(0x08)
	struct UCanvasPanel* WhiteDot_3; // 0x3a0(0x08)
	struct UDFMInteractorView_InteractList* Interact_List; // 0x3a8(0x08)
	struct TArray<struct UDFMInteractorView_ItemBase*> AllItems; // 0x3b0(0x10)
	struct TArray<struct UCanvasPanel*> WhiteDots; // 0x3c0(0x10)
	float AllowMergeMaxDistSquare; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TMap<struct FGameplayTag, struct UClass*> ItemClassMap; // 0x3d8(0x50)
	struct TMap<struct FGameplayTag, struct UDFMInteractorView_ItemBase*> ItemsMap; // 0x428(0x50)
	struct TMap<struct FGameplayTag, struct UClass*> SubViewClassMap; // 0x478(0x50)
	struct TMap<struct FGameplayTag, struct UDFMInteractorView_SubViewBase*> SubViewMap; // 0x4c8(0x50)

	void OnUIEventFired(struct FDFMWidgetEvent& EvtParam); // Function DFMGameHud.SafeHouseInteractorView.OnUIEventFired // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ScoutMarkHUDView
// Size: 0x4c0 (Inherited: 0x388)
class UScoutMarkHUDView : public UBaseUIView {
public:

	struct UClass* MarkLineWidget; // 0x388(0x08)
	struct TMap<enum class ECharacterType, struct UClass*> WidgetConfigMap; // 0x390(0x50)
	struct UCanvasPanel* MarkPanel; // 0x3e0(0x08)
	struct FName MarkingAudioName; // 0x3e8(0x08)
	struct FName MarkSuccessAudioName; // 0x3f0(0x08)
	struct UGPMarkingComponent* MarkingComp; // 0x3f8(0x08)
	struct UDFMSniperMarkAimedEnemyComponent* SniperMarkEnemyComponent; // 0x400(0x08)
	char pad_408[0x10]; // 0x408(0x10)
	struct TMap<struct AActor*, struct UPlayerMarkerEnemyWidget*> MarkWidgetsCache; // 0x418(0x50)
	struct TMap<struct AActor*, struct UScoutMarkLineWidget*> MarkLineWidgetsCache; // 0x468(0x50)
	char pad_4B8[0x8]; // 0x4b8(0x08)

	void UpdateScoutMarker(struct FMarkCharacterInfo Info, struct UPlayerMarkerEnemyWidget* Widget); // Function DFMGameHud.ScoutMarkHUDView.UpdateScoutMarker // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ScoutMarkLineWidget
// Size: 0x2b8 (Inherited: 0x298)
class UScoutMarkLineWidget : public UUserWidget {
public:

	struct UCanvasPanel* LineCanvas; // 0x298(0x08)
	struct UImage* Line; // 0x2a0(0x08)
	struct UImage* TargetPoint; // 0x2a8(0x08)
	char pad_2B0[0x8]; // 0x2b0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ScreenEffectDebugView
// Size: 0x3e8 (Inherited: 0x3b8)
class UScreenEffectDebugView : public UMobileGamePadView {
public:

	struct URichTextBlock* RichTextBlockLog; // 0x3b8(0x08)
	struct UComboBoxString* Effect; // 0x3c0(0x08)
	struct UEditableTextBox* EffectName; // 0x3c8(0x08)
	char pad_3D0[0x18]; // 0x3d0(0x18)

	void UnLoadScreenEffects(); // Function DFMGameHud.ScreenEffectDebugView.UnLoadScreenEffects // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ScreenEffectMainView
// Size: 0x390 (Inherited: 0x388)
class UScreenEffectMainView : public UBaseUIView {
public:

	bool IsUnderBg; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ScreenUIEffect
// Size: 0x2c0 (Inherited: 0x2a8)
class UScreenUIEffect : public UScreenEffectBase {
public:

	struct UUserWidget* CacheSreenUI; // 0x2a8(0x08)
	char pad_2B0[0x10]; // 0x2b0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_BossInfo
// Size: 0x2b8 (Inherited: 0x298)
class USeamlessEntryHUDView_BossInfo : public UUserWidget {
public:

	struct UImage* Image_Portray; // 0x298(0x08)
	struct FSoftObjectPath PortrayPath; // 0x2a0(0x18)

	void BP_SetStyle(int32_t Style); // Function DFMGameHud.SeamlessEntryHUDView_BossInfo.BP_SetStyle // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_ChatPanel
// Size: 0x5a8 (Inherited: 0x5a8)
class USeamlessEntryHUDView_ChatPanel : public ULuaUIHudBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_EvacuationPoint
// Size: 0x2b0 (Inherited: 0x298)
class USeamlessEntryHUDView_EvacuationPoint : public UUserWidget {
public:

	struct UTextBlock* TextBlock_Number; // 0x298(0x08)
	char pad_2A0[0x10]; // 0x2a0(0x10)

	void AnimFadeInOut(bool In); // Function DFMGameHud.SeamlessEntryHUDView_EvacuationPoint.AnimFadeInOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_Instruction
// Size: 0x2c0 (Inherited: 0x298)
class USeamlessEntryHUDView_Instruction : public UUserWidget {
public:

	int32_t InstructionIndex; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UDFTextBlock* Title; // 0x2a0(0x08)
	struct UDFImage* DFMImage_174; // 0x2a8(0x08)
	struct UDFButton* Button; // 0x2b0(0x08)
	/*struct USeamlessEntryHUDView_InstructionList**/char InstructionList[0x8]; // 0x2b8(0x08)

	void SetInfo(/*int32_t InNumber, struct FSeamlessEntryHUDView_InstructionConfig& Info*/); // Function DFMGameHud.SeamlessEntryHUDView_Instruction.SetInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_InstructionDesc
// Size: 0x2a8 (Inherited: 0x298)
class USeamlessEntryHUDView_InstructionDesc : public UUserWidget {
public:

	struct UDFMImage* Icon; // 0x298(0x08)
	struct UDFMTextBlock* TextBlock; // 0x2a0(0x08)

	void SetInfo(/*struct FSeamlessEntryHUDView_InstructionDescConfig& Info*/); // Function DFMGameHud.SeamlessEntryHUDView_InstructionDesc.SetInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_InstructionDetail
// Size: 0x2d0 (Inherited: 0x298)
class USeamlessEntryHUDView_InstructionDetail : public UUserWidget {
public:

	struct UDFTextBlock* Number; // 0x298(0x08)
	struct UDFTextBlock* Title; // 0x2a0(0x08)
	/*struct USeamlessEntryHUDView_InstructionDesc**/char SeamlessEntryHUDView_InstructionDesc1[0x8]; // 0x2a8(0x08)
	/*struct USeamlessEntryHUDView_InstructionDesc**/char SeamlessEntryHUDView_InstructionDesc2[0x8]; // 0x2b0(0x08)
	/*struct USeamlessEntryHUDView_InstructionDesc**/char SeamlessEntryHUDView_InstructionDesc3[0x8]; // 0x2b8(0x08)
	/*struct TArray<struct USeamlessEntryHUDView_InstructionDesc*>*/char InstructionDescs[0x10]; // 0x2c0(0x10)

	void SetInfo(/*int32_t InNumber, struct FSeamlessEntryHUDView_InstructionConfig& Info*/); // Function DFMGameHud.SeamlessEntryHUDView_InstructionDetail.SetInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_InstructionList
// Size: 0x410 (Inherited: 0x388)
class USeamlessEntryHUDView_InstructionList : public UBaseUIView {
public:

	struct UDFTextBlock* ProgressTextBlock; // 0x388(0x08)
	/*struct TMap<enum class ESeamlessEntryMatchType, struct FSeamlessEntryHUDView_InstructionListConfig>*/char ConfigMap[0x50]; // 0x390(0x50)
	bool RotateEnable; // 0x3e0(0x01)
	bool ControlByUIState; // 0x3e1(0x01)
	char pad_3E2[0x6]; // 0x3e2(0x06)
	struct UWidgetAnimation* WBP_SeamlessEntry_GameplayInstructionsList_in; // 0x3e8(0x08)
	struct UWidgetAnimation* WBP_SeamlessEntry_GameplayInstructionsList_loop; // 0x3f0(0x08)
	struct UWidgetAnimation* WBP_SeamlessEntry_GameplayInstructionsList_out; // 0x3f8(0x08)
	char pad_400[0x10]; // 0x400(0x10)

	void SetProgressText(int32_t Progress); // Function DFMGameHud.SeamlessEntryHUDView_InstructionList.SetProgressText // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_MainKey
// Size: 0x5a8 (Inherited: 0x5a8)
class USeamlessEntryHUDView_MainKey : public ULuaUIHudBaseView {
public:


	void SetLegendViewToggleText(bool CurrentShow); // Function DFMGameHud.SeamlessEntryHUDView_MainKey.SetLegendViewToggleText // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_MapIntroduction
// Size: 0x2a8 (Inherited: 0x298)
class USeamlessEntryHUDView_MapIntroduction : public UUserWidget {
public:

	struct UTextBlock* TextBlock_Title; // 0x298(0x08)
	struct UTextBlock* TextBlock_Description; // 0x2a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_Media
// Size: 0x3b8 (Inherited: 0x388)
class USeamlessEntryHUDView_Media : public UBaseUIView {
public:

	struct UDFCommonMediaView* MediaImage; // 0x388(0x08)
	struct FString CurrentVideoName; // 0x390(0x10)
	char pad_3A0[0x18]; // 0x3a0(0x18)

	void PlayMedia(struct FString VideoName, bool PauseCutScene, bool bAutoHide); // Function DFMGameHud.SeamlessEntryHUDView_Media.PlayMedia // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_TaskList
// Size: 0x5a8 (Inherited: 0x5a8)
class USeamlessEntryHUDView_TaskList : public ULuaUIHudBaseView {
public:


	void AnimFadeInOut(bool In); // Function DFMGameHud.SeamlessEntryHUDView_TaskList.AnimFadeInOut // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_TipsBox
// Size: 0x340 (Inherited: 0x298)
class USeamlessEntryHUDView_TipsBox : public UUserWidget {
public:

	struct UUserWidget* WBP_DFCommonButtonClose; // 0x298(0x08)
	struct UDFButton* CloseButton; // 0x2a0(0x08)
	struct UDFMImage* IconImage; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_Title; // 0x2b0(0x08)
	struct UUserWidget* WBP_SeamlessEntry_Tips_Text_Top; // 0x2b8(0x08)
	struct UUserWidget* WBP_SeamlessEntry_Tips_List_Top; // 0x2c0(0x08)
	struct UUserWidget* WBP_SeamlessEntry_Tips_HighValue; // 0x2c8(0x08)
	struct UUserWidget* WBP_SeamlessEntry_BossInformation; // 0x2d0(0x08)
	struct UUserWidget* WBP_SeamlessEntry_Tips_Image; // 0x2d8(0x08)
	struct UDFImage* TipsImage; // 0x2e0(0x08)
	struct UVerticalBox* VerticalBox_TipsList; // 0x2e8(0x08)
	struct URichTextBlock* RichTextBlock_Display; // 0x2f0(0x08)
	struct UVerticalBox* VerticalBox_TipsList_Bottom; // 0x2f8(0x08)
	struct UMapIconViewController* CurrentIconViewController; // 0x300(0x08)
	struct UClass* MapTipsListClass; // 0x308(0x08)
	struct UClass* MapTipsClass_IconText; // 0x310(0x08)
	struct UClass* MapTipsClass_IconRichText; // 0x318(0x08)
	struct UClass* MapTipsClass_TimeRichText; // 0x320(0x08)
	struct USeamlessEntryHUDView_Main* SeamlessEntryHUDView_Main; // 0x328(0x08)
	struct UNamedSlot* NamedSlot_Lift; // 0x330(0x08)
	struct UNamedSlot* NamedSlot_Right; // 0x338(0x08)

	void SetTitleText(struct FText& TitleText); // Function DFMGameHud.SeamlessEntryHUDView_TipsBox.SetTitleText // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_TipsTask
// Size: 0x2a8 (Inherited: 0x298)
class USeamlessEntryHUDView_TipsTask : public UUserWidget {
public:

	struct UUserWidget* WBP_DFCommonButtonClose; // 0x298(0x08)
	struct UDFButton* CloseButton; // 0x2a0(0x08)

	void OnCloseButtonClicked(); // Function DFMGameHud.SeamlessEntryHUDView_TipsTask.OnCloseButtonClicked // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_Microphone
// Size: 0x5a8 (Inherited: 0x5a8)
class USeamlessEntryHUDView_Microphone : public ULuaUIHudBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_Speaker
// Size: 0x5a8 (Inherited: 0x5a8)
class USeamlessEntryHUDView_Speaker : public ULuaUIHudBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SelectedFrameWidget
// Size: 0x2a8 (Inherited: 0x298)
class USelectedFrameWidget : public UUserWidget {
public:

	struct UCanvasPanel* DFCanvasPanel_Default; // 0x298(0x08)
	struct UImage* Image_SelectedFrame; // 0x2a0(0x08)

	void BP_FadeOut(); // Function DFMGameHud.SelectedFrameWidget.BP_FadeOut // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SettlementHudController
// Size: 0x150 (Inherited: 0xb0)
class USettlementHudController : public UBaseUIController {
public:

	char pad_B0[0xa0]; // 0xb0(0xa0)

	void OnSpectateStatusChanged(bool bIsLiveSpectating); // Function DFMGameHud.SettlementHudController.OnSpectateStatusChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SettlementHudView
// Size: 0x3b0 (Inherited: 0x388)
class USettlementHudView : public UBaseUIView {
public:

	struct USettlementWatchFightNew* WatchFightNew; // 0x388(0x08)
	struct USettlementWatchFightHDNew* WatchFightHDNew; // 0x390(0x08)
	char pad_398[0x18]; // 0x398(0x18)

	void Witness(); // Function DFMGameHud.SettlementHudView.Witness // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SettlementWatchFight
// Size: 0x428 (Inherited: 0x388)
class USettlementWatchFight : public UBaseUIView {
public:

	struct UTextBlock* PlayerName_11; // 0x388(0x08)
	struct UTextBlock* PlayerName_12; // 0x390(0x08)
	struct UTextBlock* PlayerName_21; // 0x398(0x08)
	struct UTextBlock* PlayerName_22; // 0x3a0(0x08)
	struct UTextBlock* PlayerName_31; // 0x3a8(0x08)
	struct UTextBlock* PlayerName_32; // 0x3b0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_4; // 0x3b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_3; // 0x3c0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x3c8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x3d0(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x3d8(0x08)
	struct UTextBlock* RescueTips; // 0x3e0(0x08)
	struct UTextBlock* RescueTips_2; // 0x3e8(0x08)
	struct UProgressBar* DFProgressBar_111; // 0x3f0(0x08)
	char pad_3F8[0x30]; // 0x3f8(0x30)

	void UpdateTeamInfo(); // Function DFMGameHud.SettlementWatchFight.UpdateTeamInfo // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SettlementWaitWatchFightInFade
// Size: 0x388 (Inherited: 0x388)
class USettlementWaitWatchFightInFade : public UBaseUIView {
public:


	void PlayWaitAnimationEvent(bool bShow); // Function DFMGameHud.SettlementWaitWatchFightInFade.PlayWaitAnimationEvent // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SettlementWatchFightEyes
// Size: 0x388 (Inherited: 0x388)
class USettlementWatchFightEyes : public UBaseUIView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SettlementWatchFightFriendInfo
// Size: 0x3a8 (Inherited: 0x388)
class USettlementWatchFightFriendInfo : public UBaseUIView {
public:

	struct UClass* CharacterClass; // 0x388(0x08)
	struct ASettlementUIRTCharacter* UIRTActor; // 0x390(0x08)
	struct UImage* CharacterImg; // 0x398(0x08)
	struct UTextureRenderTarget2D* TextureTarget; // 0x3a0(0x08)

	void ShowCharacter(); // Function DFMGameHud.SettlementWatchFightFriendInfo.ShowCharacter // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SettlementUIRT
// Size: 0x7a0 (Inherited: 0x798)
class ASettlementUIRT : public ACHARACTER {
public:

	char pad_798[0x8]; // 0x798(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SettlementUIRTCharacter
// Size: 0x7d0 (Inherited: 0x798)
class ASettlementUIRTCharacter : public ACHARACTER {
public:

	struct USkeletalMeshComponent* TPPMeshHair; // 0x798(0x08)
	struct USkeletalMeshComponent* TPPMeshHead; // 0x7a0(0x08)
	struct USkeletalMeshComponent* TPPMeshLower; // 0x7a8(0x08)
	struct TArray<struct USkeletalMeshComponent*> AllMesh; // 0x7b0(0x10)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x7c0(0x08)
	char pad_7C8[0x8]; // 0x7c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SettlementWatchFightNew
// Size: 0x498 (Inherited: 0x388)
class USettlementWatchFightNew : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct UDFCommonTabWidget* DFTabGroupDroDownBox; // 0x390(0x08)
	struct UWidget* WBP_TipsNonres_WaitWatchFight; // 0x398(0x08)
	struct UCharacterBloodBase* wtCharacterBloodBar; // 0x3a0(0x08)
	struct UCharacterArmorStatusItem* wtHelmetStatusItem; // 0x3a8(0x08)
	struct UCharacterArmorStatusItem* wtBodyArmorStatusItem; // 0x3b0(0x08)
	struct UDFMMobileWeaponToolbarGun* wtWeaponToolbarGun; // 0x3b8(0x08)
	struct UHeroCardLuaBaseWidget* PlayerInfoCard; // 0x3c0(0x08)
	char pad_3C8[0x18]; // 0x3c8(0x18)
	bool bCanBeRescue; // 0x3e0(0x01)
	enum class EDFMGamePlayMode DFGameModeType; // 0x3e1(0x01)
	char pad_3E2[0x2]; // 0x3e2(0x02)
	int32_t RaidShowRescueType; // 0x3e4(0x04)
	char pad_3E8[0x20]; // 0x3e8(0x20)
	struct TWeakObjectPtr<struct ADFMCharacter> WatchCharacter; // 0x408(0x08)
	struct UWeaponHudModel* WeaponHudInfo; // 0x410(0x08)
	struct UDeathDamageInfoViewNew* WBP_DeathDamageInfoViewNew; // 0x418(0x08)
	struct UTextBlock* wtMedNumTxt; // 0x420(0x08)
	struct UDFImage* wtMedItemIcon; // 0x428(0x08)
	float SOS_CD; // 0x430(0x04)
	float SOS_Button_CD; // 0x434(0x04)
	struct UDFTextBlock* DFTextBlock; // 0x438(0x08)
	struct UDFTextBlock* DFTextBlock_78; // 0x440(0x08)
	struct UDFProgressBar* DFProgressBar_54; // 0x448(0x08)
	struct UDFVerticalBox* MaydayVerticalBox; // 0x450(0x08)
	struct UDFTextBlock* DFTextBlock117; // 0x458(0x08)
	struct UDFTextBlock* DFTextBlock118; // 0x460(0x08)
	struct UPlayerReviveButton* WBP_TipsPro_ReviveButton_Mayday; // 0x468(0x08)
	char pad_470[0x18]; // 0x470(0x18)
	struct UUserWidget* OpenDeadInfoBtn; // 0x488(0x08)
	char pad_490[0x8]; // 0x490(0x08)

	void UpdateTeamInfo(); // Function DFMGameHud.SettlementWatchFightNew.UpdateTeamInfo // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SettlementWatchFightHDNew
// Size: 0x438 (Inherited: 0x388)
class USettlementWatchFightHDNew : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct UWidget* WBP_TipsNonres_WaitWatchFight_Pc; // 0x390(0x08)
	struct UDFTextBlock* DFTextBlock; // 0x398(0x08)
	struct UDFTextBlock* DFTextBlock_78; // 0x3a0(0x08)
	struct UDFProgressBar* DFProgressBar_54; // 0x3a8(0x08)
	struct UDFTextBlock* DFTextBlock_159; // 0x3b0(0x08)
	struct ULuaUIBaseView* TopBarHD_InputSummary; // 0x3b8(0x08)
	struct UWidgetAnimation* CallForHelpAnimation_loop; // 0x3c0(0x08)
	struct UWidgetAnimation* CallForHelpAnimation_out; // 0x3c8(0x08)
	bool bCanBeRescue; // 0x3d0(0x01)
	enum class EDFMGamePlayMode DFGameModeType; // 0x3d1(0x01)
	char pad_3D2[0x2]; // 0x3d2(0x02)
	int32_t RaidShowRescueType; // 0x3d4(0x04)
	char pad_3D8[0x10]; // 0x3d8(0x10)
	struct UDeathDamageInfoPanel* WBP_SettlementInfoFailDetail2_PC; // 0x3e8(0x08)
	struct UDeathDamageInfoViewNew* WBP_DeathDamageInfoViewNew; // 0x3f0(0x08)
	struct UHeroCardLuaBaseWidget* PlayerInfoCard; // 0x3f8(0x08)
	char pad_400[0x30]; // 0x400(0x30)
	float CallForHelpLoopCD_PC; // 0x430(0x04)
	float SOS_SendChatCD; // 0x434(0x04)

	void UpdateTeamInfo(); // Function DFMGameHud.SettlementWatchFightHDNew.UpdateTeamInfo // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ShopBaseItemUIView
// Size: 0x328 (Inherited: 0x298)
class UShopBaseItemUIView : public UUserWidget {
public:

	struct FInGameMallConfigRow ItemConfigRow; // 0x298(0x88)
	int32_t CurrentItemIndex; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)

	void SetItem(struct FInGameMallConfigRow& InGameMallConfigRow, bool Display, int32_t ItemIndex); // Function DFMGameHud.ShopBaseItemUIView.SetItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ShopBaseUIView
// Size: 0x3d8 (Inherited: 0x388)
class UShopBaseUIView : public UBaseUIView {
public:

	struct UWidgetSwitcher* ScrollBoxSwitcher; // 0x388(0x08)
	struct UScrollGridBox* ItemScrollGridBox; // 0x390(0x08)
	struct UShopBaseItemUIView* SelectedItemView; // 0x398(0x08)
	struct TArray<struct UShopBaseItemUIView*> ItemUIViewArray; // 0x3a0(0x10)
	char pad_3B0[0x10]; // 0x3b0(0x10)
	int32_t SelectedPagePropTypes; // 0x3c0(0x04)
	int32_t SelectedLevel; // 0x3c4(0x04)
	int32_t HasSelectedSupplyItemIndex; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct AInteractorBase* ShopInteractor; // 0x3d0(0x08)

	void SetInteractor(struct AInteractorBase* Interactor); // Function DFMGameHud.ShopBaseUIView.SetInteractor // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ShopStationViewController
// Size: 0x2b0 (Inherited: 0x290)
class UShopStationViewController : public UMapIconViewController {
public:

	char pad_290[0x20]; // 0x290(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SkillEffectHUDView
// Size: 0x3e8 (Inherited: 0x388)
class USkillEffectHUDView : public UBaseUIView {
public:

	struct UCanvasPanel* MainPanel; // 0x388(0x08)
	struct UUserWidget* BeAimedAlert; // 0x390(0x08)
	struct TMap<int32_t, struct UUserWidget*> SkillEffectWidgetMap; // 0x398(0x50)

	void OnPerformSkillEffect(int32_t BuffId, bool bStart); // Function DFMGameHud.SkillEffectHUDView.OnPerformSkillEffect // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SkillMineDirView
// Size: 0x3b0 (Inherited: 0x388)
class USkillMineDirView : public UBaseUIView {
public:

	struct TArray<struct UDFMHUDHitDirViewItemV2*> AllMineDirViews; // 0x388(0x10)
	struct UDFMHUDHitDirViewItemV2* MineDirViewItem_1; // 0x398(0x08)
	struct UDFMHUDHitDirViewItemV2* MineDirViewItem_2; // 0x3a0(0x08)
	float ShowTimeForDirItem; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)

	void OnMineActivated(struct FVector ActivatedLocation, float InShowTimeForDirItem, struct AActor* Target); // Function DFMGameHud.SkillMineDirView.OnMineActivated // (Final|Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SneakingHUDWidget
// Size: 0x3c0 (Inherited: 0x388)
class USneakingHUDWidget : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	float LockStatusTime; // 0x390(0x04)
	char pad_394[0x14]; // 0x394(0x14)
	bool bNeedShow; // 0x3a8(0x01)
	bool bGotMutex; // 0x3a9(0x01)
	bool bIsBoundMutexChangedDlg; // 0x3aa(0x01)
	char pad_3AB[0x5]; // 0x3ab(0x05)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x3b0(0x08)
	struct FName MutexRegName; // 0x3b8(0x08)

	void Show_BPApi(); // Function DFMGameHud.SneakingHUDWidget.Show_BPApi // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SoftCoverScreenEffectHUD
// Size: 0x388 (Inherited: 0x388)
class USoftCoverScreenEffectHUD : public UBaseUIView {
public:


	void ProcessSoftCoverHUD(bool bShow); // Function DFMGameHud.SoftCoverScreenEffectHUD.ProcessSoftCoverHUD // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMap_MapFloorComponent_HD
// Size: 0x2b0 (Inherited: 0x298)
class USOLBigMap_MapFloorComponent_HD : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct USOLBigMap_MapFloor_HD* MapFloor; // 0x2a0(0x08)
	struct AMapFloorVolume* CurMapFloorVolume; // 0x2a8(0x08)

	void OnClick(); // Function DFMGameHud.SOLBigMap_MapFloorComponent_HD.OnClick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMap_MapFloor_HD
// Size: 0x318 (Inherited: 0x298)
class USOLBigMap_MapFloor_HD : public UUserWidget {
public:

	struct AMapMultiFloorVolume* CurMapMultiFloorVolume; // 0x298(0x08)
	struct UVerticalBox* VerticalBox_Floor; // 0x2a0(0x08)
	struct TMap<int32_t, struct USOLBigMap_MapFloorComponent_HD*> MapFloorComponentMap; // 0x2a8(0x50)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct UClass* MapFloorComponentClass; // 0x300(0x08)
	char pad_308[0x10]; // 0x308(0x10)

	void BP_SetUpDownType(int32_t Type); // Function DFMGameHud.SOLBigMap_MapFloor_HD.BP_SetUpDownType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMap_MapFloorComponent_Mobile
// Size: 0x2b8 (Inherited: 0x298)
class USOLBigMap_MapFloorComponent_Mobile : public UUserWidget {
public:

	struct UDFButton* Button_3; // 0x298(0x08)
	char pad_2A0[0x8]; // 0x2a0(0x08)
	struct USOLBigMap_MapFloor_Mobile* MapFloor; // 0x2a8(0x08)
	struct AMapFloorVolume* CurMapFloorVolume; // 0x2b0(0x08)

	void OnClick(); // Function DFMGameHud.SOLBigMap_MapFloorComponent_Mobile.OnClick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMap_MapFloor_Mobile
// Size: 0x308 (Inherited: 0x298)
class USOLBigMap_MapFloor_Mobile : public UUserWidget {
public:

	struct AMapMultiFloorVolume* CurMapMultiFloorVolume; // 0x298(0x08)
	struct UVerticalBox* VerticalBox_Floor; // 0x2a0(0x08)
	struct TMap<int32_t, struct USOLBigMap_MapFloorComponent_Mobile*> MapFloorComponentMap; // 0x2a8(0x50)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct UClass* MapFloorComponentClass; // 0x300(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMap_MapLocationComponent_HD
// Size: 0x2b0 (Inherited: 0x298)
class USOLBigMap_MapLocationComponent_HD : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UBigMapHUDView* SOLBigMap; // 0x2a0(0x08)
	struct AMapMultiFloorVolume* MapMultiFloorVolume; // 0x2a8(0x08)

	void BP_SetText(struct FText& InText); // Function DFMGameHud.SOLBigMap_MapLocationComponent_HD.BP_SetText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMap_MapLocation_HD
// Size: 0x370 (Inherited: 0x298)
class USOLBigMap_MapLocation_HD : public UUserWidget {
public:

	struct UBigMapHUDView* SOLBigMap; // 0x298(0x08)
	struct UDFVerticalBox* DFVerticalBox_Loc; // 0x2a0(0x08)
	struct USOLBigMap_MapLocationComponent_HD* WBP_Map_LocationComponents_AllMap; // 0x2a8(0x08)
	struct AMapMultiFloorVolume* CurMapMultiFloorVolume; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct UClass* MapLocationComponentClass; // 0x2c0(0x08)
	struct TMap<int32_t, struct USOLBigMap_MapLocationComponent_HD*> LocationComponentMap; // 0x2c8(0x50)
	struct TMap<struct AMapMultiFloorVolume*, int32_t> VolumeLocCompIndexMap; // 0x318(0x50)
	char pad_368[0x8]; // 0x368(0x08)

	void OnClick(); // Function DFMGameHud.SOLBigMap_MapLocation_HD.OnClick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMap_MapLocationComponent_Mobile
// Size: 0x2b0 (Inherited: 0x298)
class USOLBigMap_MapLocationComponent_Mobile : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UBigMapHUDView* SOLBigMap; // 0x2a0(0x08)
	struct AMapMultiFloorVolume* MapMultiFloorVolume; // 0x2a8(0x08)

	void BP_SetSelected(bool bInSelected); // Function DFMGameHud.SOLBigMap_MapLocationComponent_Mobile.BP_SetSelected // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMap_MapLocation_Mobile
// Size: 0x378 (Inherited: 0x298)
class USOLBigMap_MapLocation_Mobile : public UUserWidget {
public:

	struct UBigMapHUDView* SOLBigMap; // 0x298(0x08)
	struct UDFHorizontalBox* HorizontalBox_Floor; // 0x2a0(0x08)
	struct UDFTextBlock* DFTextBlock_LocName; // 0x2a8(0x08)
	struct USOLBigMap_MapLocationComponent_Mobile* WBP_Map_LocationComponents_AllMap; // 0x2b0(0x08)
	struct AMapMultiFloorVolume* CurMapMultiFloorVolume; // 0x2b8(0x08)
	char pad_2C0[0x8]; // 0x2c0(0x08)
	struct UClass* MapLocationComponentClass; // 0x2c8(0x08)
	struct TMap<int32_t, struct USOLBigMap_MapLocationComponent_Mobile*> LocationComponentMap; // 0x2d0(0x50)
	struct TMap<struct AMapMultiFloorVolume*, int32_t> VolumeLocCompIndexMap; // 0x320(0x50)
	char pad_370[0x8]; // 0x370(0x08)

	void OnClick(); // Function DFMGameHud.SOLBigMap_MapLocation_Mobile.OnClick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_ContractTipsBtn
// Size: 0x2d0 (Inherited: 0x298)
class USOLBigMapHUDView_ContractTipsBtn : public UUserWidget {
public:

	struct UDFCheckBox* Checkbox_2; // 0x298(0x08)
	struct UDFImage* DFImage_1; // 0x2a0(0x08)
	struct UTextBlock* DFTextBlock_Time; // 0x2a8(0x08)
	struct UDFImage* DFImage_2; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct USOLBigMapHUDView_Main* BigMapHUDView_Main; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)

	void OnCheckStateChanged(bool bIsChecked); // Function DFMGameHud.SOLBigMapHUDView_ContractTipsBtn.OnCheckStateChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_InfoSwitch
// Size: 0x2b0 (Inherited: 0x298)
class USOLBigMapHUDView_InfoSwitch : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct USOLBigMapHUDView_Main* BigMap; // 0x2a0(0x08)
	struct UDFCheckBox* CheckBoxSwitch; // 0x2a8(0x08)

	void OnCheckBoxSwitch(bool bIsChecked); // Function DFMGameHud.SOLBigMapHUDView_InfoSwitch.OnCheckBoxSwitch // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_LiveTabBtn
// Size: 0x2a0 (Inherited: 0x298)
class USOLBigMapHUDView_LiveTabBtn : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)

	void BP_SetBtnType(int32_t InType); // Function DFMGameHud.SOLBigMapHUDView_LiveTabBtn.BP_SetBtnType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_LiveTabList
// Size: 0x348 (Inherited: 0x298)
class USOLBigMapHUDView_LiveTabList : public UUserWidget {
public:

	struct USOLBigMapHUDView_LiveTabBtn* LiveTabBtn_Exit; // 0x298(0x08)
	struct UButton* Btn_Exit; // 0x2a0(0x08)
	struct USOLBigMapHUDView_LiveTabBtn* LiveTabBtn_Quest; // 0x2a8(0x08)
	struct UButton* Btn_Quest; // 0x2b0(0x08)
	struct USOLBigMapHUDView_LiveTabBtn* LiveTabBtn_Resource; // 0x2b8(0x08)
	struct UButton* Btn_Resource; // 0x2c0(0x08)
	struct USOLBigMapHUDView_LiveTabBtn* LiveTabBtn_Key; // 0x2c8(0x08)
	struct UButton* Btn_Key; // 0x2d0(0x08)
	struct USOLBigMapHUDView_LiveTabBtn* LiveTabBtn_Wish; // 0x2d8(0x08)
	struct UButton* Btn_Wish; // 0x2e0(0x08)
	struct TMap<enum class ESOLLiveTabType, struct USOLBigMapHUDView_LiveTabBtn*> LiveTabBtnMap; // 0x2e8(0x50)
	struct USOLBigMapHUDView_Main* SOLBigMapHUDView_Main; // 0x338(0x08)
	enum class ESOLLiveTabType CurLiveTabType; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)

	void OnButtonClick_Wish(); // Function DFMGameHud.SOLBigMapHUDView_LiveTabList.OnButtonClick_Wish // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_MapTipsList
// Size: 0x2d0 (Inherited: 0x298)
class USOLBigMapHUDView_MapTipsList : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct FMargin ZoreMargin; // 0x2a0(0x10)
	struct FMargin TopMargin; // 0x2b0(0x10)
	struct FMargin BottomMargin; // 0x2c0(0x10)

	void BP_SetTipsListType(int32_t InType); // Function DFMGameHud.SOLBigMapHUDView_MapTipsList.BP_SetTipsListType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_IconTextMapTips
// Size: 0x2b8 (Inherited: 0x298)
class USOLBigMapHUDView_IconTextMapTips : public UUserWidget {
public:

	struct USizeBox* SizeBox_1; // 0x298(0x08)
	struct UDFImage* Image_Icon; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_Display; // 0x2a8(0x08)
	int32_t WrapTextWidthWithIcon; // 0x2b0(0x04)
	int32_t WrapTextWidthWithoutIcon; // 0x2b4(0x04)

	void BP_SetIsRight(bool InIsRight); // Function DFMGameHud.SOLBigMapHUDView_IconTextMapTips.BP_SetIsRight // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_POIItemMapTips
// Size: 0x2a8 (Inherited: 0x298)
class USOLBigMapHUDView_POIItemMapTips : public UUserWidget {
public:

	struct UImage* Image_Selected; // 0x298(0x08)
	char pad_2A0[0x8]; // 0x2a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_POIItemListMapTips
// Size: 0x2d0 (Inherited: 0x298)
class USOLBigMapHUDView_POIItemListMapTips : public UUserWidget {
public:

	struct USOLBigMapHUDView_POIItemMapTips* WBP_Map_Tips_POIItem_1; // 0x298(0x08)
	struct USOLBigMapHUDView_POIItemMapTips* WBP_Map_Tips_POIItem_2; // 0x2a0(0x08)
	struct USOLBigMapHUDView_POIItemMapTips* WBP_Map_Tips_POIItem_3; // 0x2a8(0x08)
	struct USOLBigMapHUDView_POIItemMapTips* WBP_Map_Tips_POIItem_4; // 0x2b0(0x08)
	struct USOLBigMapHUDView_POIItemMapTips* WBP_Map_Tips_POIItem_5; // 0x2b8(0x08)
	struct TArray<struct USOLBigMapHUDView_POIItemMapTips*> POIItemArray; // 0x2c0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_TimeListMapTips
// Size: 0x2b8 (Inherited: 0x298)
class USOLBigMapHUDView_TimeListMapTips : public UUserWidget {
public:

	struct UImage* Image_Time; // 0x298(0x08)
	struct UTextBlock* TextBlock_Time; // 0x2a0(0x08)
	char pad_2A8[0x10]; // 0x2a8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_TimeRichTextMapTips
// Size: 0x2b0 (Inherited: 0x298)
class USOLBigMapHUDView_TimeRichTextMapTips : public UUserWidget {
public:

	struct UImage* Image_Time; // 0x298(0x08)
	struct UTextBlock* TextBlock_Time; // 0x2a0(0x08)
	struct UDFRichTextBlock* TextBlock_Display; // 0x2a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_LegendMapTips
// Size: 0x2a8 (Inherited: 0x298)
class USOLBigMapHUDView_LegendMapTips : public UUserWidget {
public:

	struct UDFMImage* DFMImage_Icon; // 0x298(0x08)
	struct UTextBlock* DFTextBlock_LegendName; // 0x2a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_LegendList
// Size: 0x2a0 (Inherited: 0x298)
class USOLBigMapHUDView_LegendList : public UUserWidget {
public:

	struct UScrollBox* DFScrollBox_1; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_PropsMapTips
// Size: 0x2b0 (Inherited: 0x298)
class USOLBigMapHUDView_PropsMapTips : public UUserWidget {
public:

	struct UDFMCommonIconImage* WBP_SlotCompIconImage; // 0x298(0x08)
	struct UDFMCommonQuality* WBP_SlotCompQuality; // 0x2a0(0x08)
	struct UImage* Image_71; // 0x2a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_ProductTypeMapTips
// Size: 0x2a8 (Inherited: 0x298)
class USOLBigMapHUDView_ProductTypeMapTips : public UUserWidget {
public:

	struct UImage* Image_Icon; // 0x298(0x08)
	struct UTextBlock* TextBlock_Display; // 0x2a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_POIBoxMapTips
// Size: 0x2e8 (Inherited: 0x298)
class USOLBigMapHUDView_POIBoxMapTips : public UUserWidget {
public:

	struct UVerticalBox* DFVerticalBox_POI; // 0x298(0x08)
	struct UTextBlock* DFTextBlock_Name; // 0x2a0(0x08)
	struct UImage* DFImage_Line_2; // 0x2a8(0x08)
	struct UImage* DFImage_Line; // 0x2b0(0x08)
	struct UDFScrollGridBox* DFScrollGridBox_Items; // 0x2b8(0x08)
	struct UVerticalBox* DFVerticalBox_POIProduct; // 0x2c0(0x08)
	struct UWrapBox* DFWrapBox_ProductType; // 0x2c8(0x08)
	char pad_2D0[0x10]; // 0x2d0(0x10)
	struct UClass* ProductTypeMapTipsClass; // 0x2e0(0x08)

	void OnProcessItemWidget(int32_t Position, struct UWidget* ItemWidget); // Function DFMGameHud.SOLBigMapHUDView_POIBoxMapTips.OnProcessItemWidget // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_BossMapTips
// Size: 0x2a8 (Inherited: 0x298)
class USOLBigMapHUDView_BossMapTips : public UUserWidget {
public:

	struct UTextBlock* TextBlock_Display; // 0x298(0x08)
	struct UImage* Image_Icon; // 0x2a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_ContractMapTips
// Size: 0x2b8 (Inherited: 0x298)
class USOLBigMapHUDView_ContractMapTips : public UUserWidget {
public:

	struct URichTextBlock* RichTextBlock_Desc; // 0x298(0x08)
	struct UTextBlock* DFTextBlock_Time; // 0x2a0(0x08)
	char pad_2A8[0x10]; // 0x2a8(0x10)

	void SetLimitTime(); // Function DFMGameHud.SOLBigMapHUDView_ContractMapTips.SetLimitTime // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_ContractTerminateBtnMapTips
// Size: 0x2a8 (Inherited: 0x298)
class USOLBigMapHUDView_ContractTerminateBtnMapTips : public UUserWidget {
public:

	struct UUserWidget* WBP_CommonButtonV3S1; // 0x298(0x08)
	struct UDFCommonButton* Button_Common; // 0x2a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_RichTextMapTips
// Size: 0x2a0 (Inherited: 0x298)
class USOLBigMapHUDView_RichTextMapTips : public UUserWidget {
public:

	struct URichTextBlock* RichTextBlock_Desc; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_IconRichTextMapTips
// Size: 0x2b8 (Inherited: 0x298)
class USOLBigMapHUDView_IconRichTextMapTips : public UUserWidget {
public:

	struct USizeBox* SizeBox_1; // 0x298(0x08)
	struct UDFImage* Image_Icon; // 0x2a0(0x08)
	struct UDFRichTextBlock* TextBlock_Display; // 0x2a8(0x08)
	int32_t WrapTextWidthWithIcon; // 0x2b0(0x04)
	int32_t WrapTextWidthWithoutIcon; // 0x2b4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_IteractBtnMapTips
// Size: 0x2b8 (Inherited: 0x298)
class USOLBigMapHUDView_IteractBtnMapTips : public UUserWidget {
public:

	struct UButton* ItemOperatorButton; // 0x298(0x08)
	struct UImage* Icon; // 0x2a0(0x08)
	struct UTextBlock* TitleText; // 0x2a8(0x08)
	struct TWeakObjectPtr<struct UMapIconViewController> IconViewControllerPtr; // 0x2b0(0x08)

	void OnItemOperatorButtonClick(); // Function DFMGameHud.SOLBigMapHUDView_IteractBtnMapTips.OnItemOperatorButtonClick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_IteractBtnListMapTips
// Size: 0x2b0 (Inherited: 0x298)
class USOLBigMapHUDView_IteractBtnListMapTips : public UUserWidget {
public:

	struct UVerticalBox* DFVerticalBox_Default; // 0x298(0x08)
	struct UClass* IteractBtnMapTipsClass; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)

	void OnFadeOutEnd(); // Function DFMGameHud.SOLBigMapHUDView_IteractBtnListMapTips.OnFadeOutEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_TitleTextMapTips
// Size: 0x2a0 (Inherited: 0x298)
class USOLBigMapHUDView_TitleTextMapTips : public UUserWidget {
public:

	struct UTextBlock* TextBlock_Title; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_ProgressMapTips
// Size: 0x2a8 (Inherited: 0x298)
class USOLBigMapHUDView_ProgressMapTips : public UUserWidget {
public:

	struct UTextBlock* TextBlock_Display; // 0x298(0x08)
	struct UDFProgressBar* ProgressBar; // 0x2a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_MarkTipsEvent
// Size: 0x2a8 (Inherited: 0x298)
class USOLBigMapHUDView_MarkTipsEvent : public UUserWidget {
public:

	struct UDFMImage* DFMImage_Icon; // 0x298(0x08)
	struct UTextBlock* TextBlock_Display; // 0x2a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_MarkTipsBtn
// Size: 0x398 (Inherited: 0x298)
class USOLBigMapHUDView_MarkTipsBtn : public UUserWidget {
public:

	struct UScrollBox* ScrollBox_Loop; // 0x298(0x08)
	char pad_2A0[0x8]; // 0x2a0(0x08)
	struct UClass* MarkTipsEventClass; // 0x2a8(0x08)
	struct TArray<struct USOLBigMapHUDView_MarkTipsEvent*> MarkTipsEvents; // 0x2b0(0x10)
	char pad_2C0[0x60]; // 0x2c0(0x60)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x320(0x50)
	struct UWidgetAnimation* Anim_In; // 0x370(0x08)
	struct UWidgetAnimation* Anim_Out; // 0x378(0x08)
	char pad_380[0x10]; // 0x380(0x10)
	float OffsetRate; // 0x390(0x04)
	float ScrollOffset; // 0x394(0x04)

	void OnScroll(); // Function DFMGameHud.SOLBigMapHUDView_MarkTipsBtn.OnScroll // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_MissionConditionBox
// Size: 0x2a0 (Inherited: 0x298)
class USOLBigMapHUDView_MissionConditionBox : public UUserWidget {
public:

	struct URichTextBlock* RichTextBlock_Desc; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_MissionTitle
// Size: 0x2c0 (Inherited: 0x298)
class USOLBigMapHUDView_MissionTitle : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UButton* DFButton_QuestItem; // 0x2a0(0x08)
	struct UDFTextBlock* DFTextBlock_QuestType; // 0x2a8(0x08)
	struct UDFTextBlock* DFTextBlock_QuestName; // 0x2b0(0x08)
	struct USOLBigMapHUDView_MultiBtnBox* MultiBtnBox; // 0x2b8(0x08)

	void UpdateSelect(bool bSelected); // Function DFMGameHud.SOLBigMapHUDView_MissionTitle.UpdateSelect // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_MultiBtnBox
// Size: 0x2e0 (Inherited: 0x298)
class USOLBigMapHUDView_MultiBtnBox : public UUserWidget {
public:

	struct USOLBigMapHUDView_MissionTitle* MissionTitle; // 0x298(0x08)
	struct UVerticalBox* VerticalBox_MissionBtnList; // 0x2a0(0x08)
	struct UVerticalBox* VerticalBox_MissionConditionBoxList; // 0x2a8(0x08)
	struct USOLBigMapHUDView_SidePanel* SidePanel; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct TArray<struct USOLBigMapHUDView_MissionBtn*> MissionBtnList; // 0x2c0(0x10)
	struct TArray<struct USOLBigMapHUDView_MissionConditionBox*> MissionConditionBoxList; // 0x2d0(0x10)

	void UpdateSelect(bool bSelected); // Function DFMGameHud.SOLBigMapHUDView_MultiBtnBox.UpdateSelect // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_SidePanel
// Size: 0x458 (Inherited: 0x298)
class USOLBigMapHUDView_SidePanel : public UUserWidget {
public:

	struct UButton* CloseBtn; // 0x298(0x08)
	struct UTextBlock* DFTextBlock_Name; // 0x2a0(0x08)
	struct USizeBox* DFSizeBox_2; // 0x2a8(0x08)
	struct UScrollBox* BtnScrollBox; // 0x2b0(0x08)
	struct USizeBox* SizeBox_WishItems; // 0x2b8(0x08)
	struct UDFScrollGridBox* DFScrollGridBox_WishItems; // 0x2c0(0x08)
	char pad_2C8[0x10]; // 0x2c8(0x10)
	struct USizeBox* DFSizeBox_NothingTips; // 0x2d8(0x08)
	struct USOLBigMapHUDView_TipsBox* TipsBox_HDContract; // 0x2e0(0x08)
	struct UBigMapHUDView* SOLBigMapHUDView_Main; // 0x2e8(0x08)
	char pad_2F0[0x8]; // 0x2f0(0x08)
	struct TArray<struct FSOLQuest> SeamlessEntryMap_QuestList; // 0x2f8(0x10)
	struct TArray<struct FSOLQuest> SeamlessEntryMap_SeasonQuestList; // 0x308(0x10)
	bool bUseDebugItems; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UClass* WishItemBtnClass; // 0x320(0x08)
	struct UClass* QuestAndResourceBoxClass; // 0x328(0x08)
	struct FMargin MultiBoxMargin; // 0x330(0x10)
	struct FMargin MultiBoxEndMargin; // 0x340(0x10)
	struct UClass* QuestBtnClass; // 0x350(0x08)
	struct UClass* QuestConditionClass; // 0x358(0x08)
	char pad_360[0x8]; // 0x360(0x08)
	struct TArray<struct USOLBigMapHUDView_MultiBtnBox*> AvailableMultiBtnBoxList; // 0x368(0x10)
	struct TArray<struct USOLBigMapHUDView_MultiBtnBox*> UsingMultiBtnBoxList; // 0x378(0x10)
	int32_t PreCreatedMultiBtnBoxNum; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<struct USOLBigMapHUDView_MissionBtn*> AvailableMissionBtnList; // 0x390(0x10)
	struct TArray<struct USOLBigMapHUDView_MissionBtn*> UsingMissionBtnList; // 0x3a0(0x10)
	int32_t PreCreatedMissionBtnNum; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct TArray<struct USOLBigMapHUDView_MissionConditionBox*> AvailableMissionConditionBoxList; // 0x3b8(0x10)
	struct TArray<struct USOLBigMapHUDView_MissionConditionBox*> UsingMissionConditionBoxList; // 0x3c8(0x10)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct TArray<struct FSOLQuest> CurQuestList; // 0x3e0(0x10)
	struct TMap<int32_t, bool> QuestSelectStateMap; // 0x3f0(0x50)
	struct TArray<struct USOLBigMapHUDView_MultiBtnBox*> MultiBtnBoxArray; // 0x440(0x10)
	bool bPreCreateWidgets; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)

	void UpdateContractTipsBox(); // Function DFMGameHud.SOLBigMapHUDView_SidePanel.UpdateContractTipsBox // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_TipsBox
// Size: 0x5d8 (Inherited: 0x388)
class USOLBigMapHUDView_TipsBox : public UBaseUIView {
public:

	struct UClass* MapTipsListClass; // 0x388(0x08)
	char pad_390[0x20]; // 0x390(0x20)
	struct UClass* MapTipsClass_IconText; // 0x3b0(0x08)
	char pad_3B8[0x20]; // 0x3b8(0x20)
	struct UClass* MapTipsClass_IconRichText; // 0x3d8(0x08)
	char pad_3E0[0x20]; // 0x3e0(0x20)
	struct UClass* MapTipsClass_TimeList; // 0x400(0x08)
	char pad_408[0x20]; // 0x408(0x20)
	struct UClass* MapTipsClass_TimeRichText; // 0x428(0x08)
	char pad_430[0x20]; // 0x430(0x20)
	struct UClass* MapTipsClass_TitleText; // 0x450(0x08)
	char pad_458[0x20]; // 0x458(0x20)
	struct UClass* MapTipsClass_Progress; // 0x478(0x08)
	char pad_480[0x20]; // 0x480(0x20)
	struct UClass* MapTipsClass_POIBox; // 0x4a0(0x08)
	struct UClass* MapTipsClass_Boss; // 0x4a8(0x08)
	struct UClass* MapTipsClass_ContractTerminateBtn; // 0x4b0(0x08)
	struct UClass* MapTipsClass_ContractVoteHUDView; // 0x4b8(0x08)
	struct TArray<struct UWidget*> AllMapTipsArray; // 0x4c0(0x10)
	bool bPreCreateWidgets; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	int32_t PreCreateNum; // 0x4d4(0x04)
	bool bUseNotReleasePOIBoxChildren; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct UTextBlock* TextBlock_Title; // 0x4e0(0x08)
	struct UVerticalBox* VerticalBox_TipsList; // 0x4e8(0x08)
	struct URichTextBlock* RichTextBlock_Display; // 0x4f0(0x08)
	struct UVerticalBox* VerticalBox_TipsList_Bottom; // 0x4f8(0x08)
	struct UButton* CloseBtn; // 0x500(0x08)
	struct UBigMapHUDView* BigMapHUDView_Main; // 0x508(0x08)
	struct USOLBigMapHUDView_SidePanel* SidePanel; // 0x510(0x08)
	struct USOLBigMapHUDView_CommonBtn* CurCommonBtn; // 0x518(0x08)
	struct UMapIconViewController* CurIconViewController; // 0x520(0x08)
	struct USOLBigMapHUDView_POIBoxMapTips* TempPOIBoxMapTips; // 0x528(0x08)
	struct UNamedSlot* NamedSlot_Lift; // 0x530(0x08)
	struct UNamedSlot* NamedSlot_Right; // 0x538(0x08)
	struct USOLBigMapHUDView_MapTipsList* TempTipsList; // 0x540(0x08)
	struct TArray<struct USOLBigMapHUDView_MapTipsList*> TopTipsListArr; // 0x548(0x10)
	struct TArray<struct USOLBigMapHUDView_MapTipsList*> BottomTipsListArr; // 0x558(0x10)
	struct USOLBigMapHUDView_BossMapTips* TempBossMapTips; // 0x568(0x08)
	struct USOLBigMapHUDView_BossMapTips* TempAdjutantMapTips; // 0x570(0x08)
	struct USOLBigMapHUDView_ContractTerminateBtnMapTips* TempContractTerminateBtnMapTips; // 0x578(0x08)
	struct USOLContractVoteHUDView* TempContractVoteMapTips; // 0x580(0x08)
	struct UTextBlock* TempTextBlock; // 0x588(0x08)
	struct USOLBigMapHUDView_IconTextMapTips* TempIconTextMapTips; // 0x590(0x08)
	struct USOLBigMapHUDView_TimeListMapTips* TempTimeListMapTips; // 0x598(0x08)
	struct USOLBigMapHUDView_IconRichTextMapTips* TempIconRichTextMapTips; // 0x5a0(0x08)
	struct USOLBigMapHUDView_TimeRichTextMapTips* TempTimeRichTextMapTips; // 0x5a8(0x08)
	struct USOLBigMapHUDView_TitleTextMapTips* TempTitleTextMapTips; // 0x5b0(0x08)
	struct USOLBigMapHUDView_ProgressMapTips* TempProgressMapTips; // 0x5b8(0x08)
	char pad_5C0[0xb]; // 0x5c0(0x0b)
	bool bHDInSidePanel; // 0x5cb(0x01)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	bool bHideAndThenShowActivated; // 0x5d0(0x01)
	char pad_5D1[0x7]; // 0x5d1(0x07)

	void OnSOLEventStateChanged(); // Function DFMGameHud.SOLBigMapHUDView_TipsBox.OnSOLEventStateChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBlueprintWeaponHudView
// Size: 0x3c8 (Inherited: 0x388)
class USOLBlueprintWeaponHudView : public UBaseUIView {
public:

	struct UTextBlock* StateText; // 0x388(0x08)
	struct UTextBlock* HintText; // 0x390(0x08)
	struct UTextBlock* HintText_2; // 0x398(0x08)
	struct UTextBlock* RewardsText; // 0x3a0(0x08)
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x3b0(0x08)
	struct FName MutexRegName; // 0x3b8(0x08)
	bool bGotMutex; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)

	void OnMutexChanged(struct FMutexQueueItem PreHolder, struct FMutexQueueItem CurHolder, enum class EMutexChangeReason ChangeReason); // Function DFMGameHud.SOLBlueprintWeaponHudView.OnMutexChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DangerItem
// Size: 0x298 (Inherited: 0x298)
class UDangerItem : public UUserWidget {
public:


	void BP_FadeOut(); // Function DFMGameHud.DangerItem.BP_FadeOut // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBlueprintWeaponHudView_HD
// Size: 0x3d8 (Inherited: 0x388)
class USOLBlueprintWeaponHudView_HD : public UBaseUIView {
public:

	struct UTextBlock* HintText; // 0x388(0x08)
	struct UTextBlock* RewardsText; // 0x390(0x08)
	struct UDangerItem* DangerItem1; // 0x398(0x08)
	struct UDangerItem* DangerItem2; // 0x3a0(0x08)
	struct UDangerItem* DangerItem3; // 0x3a8(0x08)
	char pad_3B0[0x2]; // 0x3b0(0x02)
	enum class EDangerLevelType CacheClientDangerLevel; // 0x3b2(0x01)
	char pad_3B3[0x5]; // 0x3b3(0x05)
	struct UGPTweenFloat* PercentTween; // 0x3b8(0x08)
	struct UDFCommonHUDScreenMutex* Mutex_MiniMapBottom; // 0x3c0(0x08)
	char pad_3C8[0x10]; // 0x3c8(0x10)

	void OnMutexChanged(struct FMutexQueueItem PreHolder, struct FMutexQueueItem CurHolder, enum class EMutexChangeReason ChangeReason); // Function DFMGameHud.SOLBlueprintWeaponHudView_HD.OnMutexChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBroadcastHUDView
// Size: 0x420 (Inherited: 0x388)
class USOLBroadcastHUDView : public UBaseUIView {
public:

	struct FText BannerText; // 0x388(0x18)
	struct UDFImage* DFImage_Icon; // 0x3a0(0x08)
	struct UDFTextBlock* DFTextBlock_BannerText; // 0x3a8(0x08)
	float StartShowItemTime; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct FSOLEventBannerDataItem CurShowDataItem; // 0x3b8(0x40)
	struct TArray<struct FSOLEventBannerDataItem> DataItemArray; // 0x3f8(0x10)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x408(0x08)
	struct FName MutexRegName; // 0x410(0x08)
	char pad_418[0x8]; // 0x418(0x08)

	void TickProcess(); // Function DFMGameHud.SOLBroadcastHUDView.TickProcess // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLCaptureGameView
// Size: 0x488 (Inherited: 0x388)
class USOLCaptureGameView : public UBaseUIView {
public:

	struct TArray<struct FSOLCaptureTextInfo> CaptureInfos; // 0x388(0x10)
	struct UCanvasPanel* CaptureOutPanel; // 0x398(0x08)
	struct UDFCanvasPanel* CapturingPanel; // 0x3a0(0x08)
	struct UImage* scrollBg; // 0x3a8(0x08)
	struct UClass* CaptureTextClassHard; // 0x3b0(0x08)
	struct TArray<float> InterpSpeeds; // 0x3b8(0x10)
	float CaptureDeviation; // 0x3c8(0x04)
	int32_t MaxCaptureErrorNum; // 0x3cc(0x04)
	float CaptureFailedTickDelay; // 0x3d0(0x04)
	float LimitTime; // 0x3d4(0x04)
	struct UTextBlock* TimeText; // 0x3d8(0x08)
	struct UProgressBar* AutoBar; // 0x3e0(0x08)
	struct UTextBlock* AutoPercent; // 0x3e8(0x08)
	struct UUserWidget* CommonButtonClose; // 0x3f0(0x08)
	struct UDFButton* CloseButton; // 0x3f8(0x08)
	struct UDFHDKeyIconBoxTextWidget* WBP_TopBarHD_InputSummary_Exit; // 0x400(0x08)
	struct UDFHDKeyIconBoxTextWidget* WBP_TopBarHD_InputSummary_Confirm; // 0x408(0x08)
	int32_t CurrentCaptureIdx; // 0x410(0x04)
	int32_t CurrentCaptureErrorTimes; // 0x414(0x04)
	float DelayTimer; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	float AutoDuration; // 0x420(0x04)
	char pad_424[0x8]; // 0x424(0x08)
	float ForceRefreshInterval; // 0x42c(0x04)
	char pad_430[0x20]; // 0x430(0x20)
	struct AActor* CachedSafeBox; // 0x450(0x08)
	float CapturingPanelDelayMoveTime; // 0x458(0x04)
	char pad_45C[0xc]; // 0x45c(0x0c)
	bool bUseGameHudStateChanged; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	bool bOpenDelayDestroy; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	float DelayDestroyWaitTime; // 0x474(0x04)
	char pad_478[0x8]; // 0x478(0x08)
	bool bIsReadyClear; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)

	void StartGame(); // Function DFMGameHud.SOLCaptureGameView.StartGame // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ContractAccessHUD_HandWearablesKey
// Size: 0x298 (Inherited: 0x298)
class UContractAccessHUD_HandWearablesKey : public UUserWidget {
public:


	void BP_ShowOrHideFKey(bool bShow); // Function DFMGameHud.ContractAccessHUD_HandWearablesKey.BP_ShowOrHideFKey // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLContractAccessHUD_HandWearableNew
// Size: 0x488 (Inherited: 0x388)
class USOLContractAccessHUD_HandWearableNew : public UBaseUIView {
public:

	struct UCanvasPanel* DFCanvas_Panel; // 0x388(0x08)
	struct UDFButton* Button_Close; // 0x390(0x08)
	struct UUserWidget* CommonButtonV2S1_Accept; // 0x398(0x08)
	struct UDFCommonButton* CommonButton_Accept; // 0x3a0(0x08)
	struct UTextBlock* DFTextBlock_ContractName; // 0x3a8(0x08)
	struct UCanvasPanel* CanvasPanel_Detail; // 0x3b0(0x08)
	struct UTextBlock* DFTextBlock_Loc; // 0x3b8(0x08)
	struct UTextBlock* DFTextBlock_Time; // 0x3c0(0x08)
	struct URichTextBlock* DFTextBlock_Reward; // 0x3c8(0x08)
	struct UCanvasPanel* CanvasPanel_Progress; // 0x3d0(0x08)
	struct UTextBlock* DFTextBlock_ProcessState; // 0x3d8(0x08)
	struct UTextBlock* DFTextBlock_Process; // 0x3e0(0x08)
	struct UDFRadialImage* DFRadialImage_Process; // 0x3e8(0x08)
	char pad_3F0[0x18]; // 0x3f0(0x18)
	struct FName UI_Operation_Accept; // 0x408(0x08)
	float ContractProgressTime; // 0x410(0x04)
	float ContractProgressTextTime; // 0x414(0x04)
	char pad_418[0x9]; // 0x418(0x09)
	bool FadeInClearFadeOutTimerHandle; // 0x421(0x01)
	char pad_422[0x16]; // 0x422(0x16)
	struct UGPTweenFloat* ProcessTweenFloat; // 0x438(0x08)
	struct FName ContractAccess_Exit; // 0x440(0x08)
	char pad_448[0x4]; // 0x448(0x04)
	struct FName ContractAccess_Accept; // 0x44c(0x08)
	char pad_454[0x4]; // 0x454(0x04)
	struct UClass* HandWearablesKeyWidgetClass; // 0x458(0x08)
	struct UContractAccessHUD_HandWearablesKey* HandWearablesKey; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)
	struct AInteractor_PureContractNPC* ClientNPC; // 0x470(0x08)
	struct UHUDStateManager* HUDStateManager; // 0x478(0x08)
	char pad_480[0x8]; // 0x480(0x08)

	void SOLContractAccept_Inner(); // Function DFMGameHud.SOLContractAccessHUD_HandWearableNew.SOLContractAccept_Inner // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLContractInfoHUDView
// Size: 0x3c8 (Inherited: 0x388)
class USOLContractInfoHUDView : public UBaseUIView {
public:

	struct UDFRetainerBox* DFRetainerBox_1; // 0x388(0x08)
	struct UDFCanvasPanel* InfoPanel; // 0x390(0x08)
	struct UDFBackgroundBlur* Blur3DWidget; // 0x398(0x08)
	struct UDFTextBlock* DFTextBlock_ContractName; // 0x3a0(0x08)
	struct USOLBigMapHUDView_IconTextMapTips* WBP_Contract_IconText_Pc; // 0x3a8(0x08)
	struct URichTextBlock* RichTextBlock_Des; // 0x3b0(0x08)
	struct FVector InfoPanelOffset; // 0x3b8(0x0c)
	int32_t ContractID; // 0x3c4(0x04)

	void UpdateInteractKeyPress(float Percent); // Function DFMGameHud.SOLContractInfoHUDView.UpdateInteractKeyPress // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLContractInfoHudController
// Size: 0x118 (Inherited: 0xb0)
class USOLContractInfoHudController : public UBaseUIController {
public:

	struct FPotentialInteractorInfo InteractorInfo; // 0xb0(0x40)
	struct AInteractor_PureContractNPC* ContractNPCCache; // 0xf0(0x08)
	struct USOLContractInfoHUDView* SOLContractInfoHUDView; // 0xf8(0x08)
	struct UDFSimulate3DViewController* DFSimulate3DViewController; // 0x100(0x08)
	bool bFadeInNextTickDelay; // 0x108(0x01)
	bool bInLongPressed; // 0x109(0x01)
	char pad_10A[0x2]; // 0x10a(0x02)
	float LongPressedTime; // 0x10c(0x04)
	float LongPressedCountUp; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)

	void OnSOLContractAccessUpdate(struct AInteractor_PureContractNPC* ContractNPC, bool bShow); // Function DFMGameHud.SOLContractInfoHudController.OnSOLContractAccessUpdate // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLContractProgressTipHUDView
// Size: 0x388 (Inherited: 0x388)
class USOLContractProgressTipHUDView : public UBaseUIView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLContractTipHUDView
// Size: 0x430 (Inherited: 0x388)
class USOLContractTipHUDView : public UBaseUIView {
public:

	struct TArray<struct FSOLQuestObjectiveTipData> ObjectiveTipDataArr; // 0x388(0x10)
	struct FString QuestSuccessAudioName; // 0x398(0x10)
	struct FString QuestFailAudioName; // 0x3a8(0x10)
	struct FString ObjectionUpdateAudioName; // 0x3b8(0x10)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct UTextBlock* TextStatus; // 0x3d0(0x08)
	bool bCanPlayAnim; // 0x3d8(0x01)
	bool HasPlayObjectiveBanner; // 0x3d9(0x01)
	char pad_3DA[0x16]; // 0x3da(0x16)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x3f0(0x08)
	struct FName MutexRegName_HDEventTips; // 0x3f8(0x08)
	bool bGotMutex_HDEventTips; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UDFCommonHUDScreenMutex* MiniMapBottomMutex; // 0x408(0x08)
	struct FName MutexRegName_MiniMapBottom; // 0x410(0x08)
	bool bGotMutex_MiniMapBottom; // 0x418(0x01)
	enum class ESOLQuestObjectionState LastUpdateObjectiveState; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	int64_t LastUpdateObjectiveID; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)

	void UpdateQuestProgress(int64_t UpdateQuestId, char QuestState); // Function DFMGameHud.SOLContractTipHUDView.UpdateQuestProgress // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLContractVoteHUDView
// Size: 0x3f8 (Inherited: 0x388)
class USOLContractVoteHUDView : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	int32_t LocalPlayerInnerTeamIndex; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FString VoteSponsorName; // 0x398(0x10)
	struct TArray<struct FString> TeammatesAvatarIcons; // 0x3a8(0x10)
	struct FContractData ContractData; // 0x3b8(0x40)

	void UpdateHUD(); // Function DFMGameHud.SOLContractVoteHUDView.UpdateHUD // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLEstimatedTimeItem
// Size: 0x2a0 (Inherited: 0x298)
class USOLEstimatedTimeItem : public UUserWidget {
public:

	struct UTextBlock* DFTextBlock_Time; // 0x298(0x08)

	void BP_ShowIconOnly(bool bIconOnly); // Function DFMGameHud.SOLEstimatedTimeItem.BP_ShowIconOnly // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLEstimatedTimeHudView
// Size: 0x400 (Inherited: 0x388)
class USOLEstimatedTimeHudView : public UBaseUIView {
public:

	struct UDFCanvasPanel* DFCanvasPanel_Default; // 0x388(0x08)
	struct UClass* EstimatedTimeItemClass; // 0x390(0x08)
	int32_t PositionY; // 0x398(0x04)
	int32_t PositionY_HD; // 0x39c(0x04)
	int32_t ItemSizeX; // 0x3a0(0x04)
	int32_t ItemDistanceX; // 0x3a4(0x04)
	bool bIgnoreCheckGotMutex; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct FSOLEventEstimatedTimeData CacheEstimatedTimeData; // 0x3b0(0x18)
	struct TArray<struct FEstimatedTimeItemData> ItemDataArr; // 0x3c8(0x10)
	char pad_3D8[0x10]; // 0x3d8(0x10)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x3e8(0x08)
	struct FName MutexRegName; // 0x3f0(0x08)
	bool bGotMutex; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)

	void ShowEventEstimatedTime(struct FSOLEventEstimatedTimeData& DataItem); // Function DFMGameHud.SOLEstimatedTimeHudView.ShowEventEstimatedTime // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLEvacuationEventHUDView
// Size: 0x398 (Inherited: 0x388)
class USOLEvacuationEventHUDView : public UBaseUIView {
public:

	struct UTextBlock* CountDownTimer; // 0x388(0x08)
	char pad_390[0x8]; // 0x390(0x08)

	void SetState(enum class ESOLEvacuationEventHUDViewState InState); // Function DFMGameHud.SOLEvacuationEventHUDView.SetState // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLEventBannerFlyIconHudView
// Size: 0x3d0 (Inherited: 0x388)
class USOLEventBannerFlyIconHudView : public UBaseUIView {
public:

	struct UImage* DFMImage_Icon; // 0x388(0x08)
	char pad_390[0x18]; // 0x390(0x18)
	enum class EaseType IconEaseType; // 0x3a8(0x01)
	enum class EaseType OpacityEaseType; // 0x3a9(0x01)
	char pad_3AA[0x2]; // 0x3aa(0x02)
	float MiniMapIconFadeInTime; // 0x3ac(0x04)
	char pad_3B0[0x8]; // 0x3b0(0x08)
	struct UGPTweenWidget* OpacityTweenWidget; // 0x3b8(0x08)
	float FlyIconViewPortLocationY; // 0x3c0(0x04)
	char pad_3C4[0xc]; // 0x3c4(0x0c)

	void OnMiniIconFadeIn(); // Function DFMGameHud.SOLEventBannerFlyIconHudView.OnMiniIconFadeIn // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLEventBannerHUDView
// Size: 0x428 (Inherited: 0x388)
class USOLEventBannerHUDView : public UBaseUIView {
public:

	struct UImage* DFMImage_Icon; // 0x388(0x08)
	struct FText BannerText; // 0x390(0x18)
	struct UWidgetAnimation* WBP_TipsNonres_SOLEvent_type0in; // 0x3a8(0x08)
	struct UWidgetAnimation* WBP_TipsNonres_SOLEvent_type1in; // 0x3b0(0x08)
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct FSOLEventBannerDataItem CurShowDataItem; // 0x3c0(0x40)
	struct TArray<struct FSOLEventBannerDataItem> DataItemArray; // 0x400(0x10)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x410(0x08)
	struct FName MutexRegName; // 0x418(0x08)
	char pad_420[0x8]; // 0x420(0x08)

	void TriggerSOLBlueprintWeaponHudInit(); // Function DFMGameHud.SOLEventBannerHUDView.TriggerSOLBlueprintWeaponHudInit // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLEventMarkerController
// Size: 0x2c0 (Inherited: 0x290)
class USOLEventMarkerController : public UMapIconViewController {
public:

	char pad_290[0x30]; // 0x290(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLEventProgressHudView
// Size: 0x410 (Inherited: 0x388)
class USOLEventProgressHudView : public UBaseUIView {
public:

	struct FSOLEventProgressDataItem ProgressDataItem; // 0x388(0x28)
	struct UDFTextBlock* DFTextBlock_Title; // 0x3b0(0x08)
	struct UDFRadialImage* DFRadialImage_Progress; // 0x3b8(0x08)
	struct UCanvasPanel* DFCanvasPanel_Tips; // 0x3c0(0x08)
	struct UDFTextBlock* DFTextBlock_Tips; // 0x3c8(0x08)
	struct UDFTextBlock* DFTextBlock_Time; // 0x3d0(0x08)
	char pad_3D8[0x20]; // 0x3d8(0x20)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x3f8(0x08)
	struct FName MutexRegName; // 0x400(0x08)
	bool bGotMutex; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)

	void ShowSOLEventProgress(struct FSOLEventProgressDataItem& EventProgressDataItem); // Function DFMGameHud.SOLEventProgressHudView.ShowSOLEventProgress // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLHealthMainView
// Size: 0x580 (Inherited: 0x550)
class USOLHealthMainView : public ULuaUIBaseView {
public:

	struct FLinearColor DefaultLineColor; // 0x550(0x10)
	struct FLinearColor SelectLineColor; // 0x560(0x10)
	char pad_570[0x10]; // 0x570(0x10)

	void SetLine(char Part, char State); // Function DFMGameHud.SOLHealthMainView.SetLine // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLIntroEventViewController
// Size: 0x2f0 (Inherited: 0x298)
class USOLIntroEventViewController : public UMapItemRangeViewController {
public:

	struct FText Title; // 0x298(0x18)
	struct FSoftObjectPath ImagePath; // 0x2b0(0x18)
	struct FText Description; // 0x2c8(0x18)
	float BigMapWorldRange; // 0x2e0(0x04)
	char pad_2E4[0xc]; // 0x2e4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MiniMap_ShieldedArea
// Size: 0x2b0 (Inherited: 0x298)
class UMiniMap_ShieldedArea : public UUserWidget {
public:

	char pad_298[0x10]; // 0x298(0x10)
	float FadeOutTime; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)

	void OnFadeOutEnd(); // Function DFMGameHud.MiniMap_ShieldedArea.OnFadeOutEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMap_ShieldedArea
// Size: 0x2b0 (Inherited: 0x298)
class USOLBigMap_ShieldedArea : public UUserWidget {
public:

	char pad_298[0x10]; // 0x298(0x10)
	float FadeOutTime; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)

	void OnFadeOutEnd(); // Function DFMGameHud.SOLBigMap_ShieldedArea.OnFadeOutEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLQuestInteractHUDView
// Size: 0x4c8 (Inherited: 0x388)
class USOLQuestInteractHUDView : public UBaseUIView {
public:

	struct UCanvasPanel* RootCanvas; // 0x388(0x08)
	struct UUserWidget* DeliverItemSlot; // 0x390(0x08)
	struct UButton* DeliverBtn; // 0x398(0x08)
	struct UVerticalBox* TimerVerticalBox; // 0x3a0(0x08)
	struct UCanvasPanel* ProgressBarCanvasPanel; // 0x3a8(0x08)
	struct UProgressBar* ObjectionProgressBar; // 0x3b0(0x08)
	struct UTextBlock* CountDownTimeText; // 0x3b8(0x08)
	struct UButton* CancelDeliverButton; // 0x3c0(0x08)
	char pad_3C8[0x18]; // 0x3c8(0x18)
	struct UAnimMontage* DeliverAnimMontageFPP; // 0x3e0(0x08)
	struct UAnimMontage* DeliverAnimMontageTPP; // 0x3e8(0x08)
	char pad_3F0[0x10]; // 0x3f0(0x10)
	struct TMap<struct FQuestFullID, struct FQuestObjectiveRow> QuestObjectionCache; // 0x400(0x50)
	struct TMap<struct FQuestFullID, struct FDeliverQuestPerformanceRow> DeliverQuestPerformanceCache; // 0x450(0x50)
	char pad_4A0[0x28]; // 0x4a0(0x28)

	void StopQuestAnimation(); // Function DFMGameHud.SOLQuestInteractHUDView.StopQuestAnimation // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLQuestManningView
// Size: 0x3b8 (Inherited: 0x388)
class USOLQuestManningView : public UBaseUIView {
public:

	struct UInteractorManningComponent* ManningComponent; // 0x388(0x08)
	char pad_390[0x8]; // 0x390(0x08)
	struct UDFRichTextBlock* ManningTitle; // 0x398(0x08)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x3a0(0x08)
	struct FName MutexRegName; // 0x3a8(0x08)
	bool bGotMutex; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)

	void OnMutexChanged(struct FMutexQueueItem PreHolder, struct FMutexQueueItem CurHolder, enum class EMutexChangeReason ChangeReason); // Function DFMGameHud.SOLQuestManningView.OnMutexChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLQuestMarkWindowView
// Size: 0x2a8 (Inherited: 0x298)
class USOLQuestMarkWindowView : public UUserWidget {
public:

	struct UWidgetSwitcher* MarkWS; // 0x298(0x08)
	bool bInside; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	int32_t MarkType; // 0x2a4(0x04)

	void BP_SetMarkType(); // Function DFMGameHud.SOLQuestMarkWindowView.BP_SetMarkType // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLQuestTipConditionBox
// Size: 0x2a0 (Inherited: 0x298)
class USOLQuestTipConditionBox : public UUserWidget {
public:

	struct URichTextBlock* RichTextBlock_Desc; // 0x298(0x08)

	void InitQuestCondition(struct FText& QuestConditionDes); // Function DFMGameHud.SOLQuestTipConditionBox.InitQuestCondition // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLQuestTipHUDView
// Size: 0x460 (Inherited: 0x388)
class USOLQuestTipHUDView : public UBaseUIView {
public:

	bool bCanPlayAnim; // 0x388(0x01)
	bool bCanPlayQuestTipHD; // 0x389(0x01)
	bool bCanInterrupt; // 0x38a(0x01)
	char pad_38B[0x15]; // 0x38b(0x15)
	struct TArray<struct FSOLQuestObjectiveTipData> ObjectiveTipDataArr; // 0x3a0(0x10)
	struct FSOLQuestObjectiveTipData LastShowObjectiveTipData; // 0x3b0(0xa8)
	bool bHasShowedInitQuest; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)

	void UpdateQuestProgress(int64_t UpdateQuestId, char QuestState); // Function DFMGameHud.SOLQuestTipHUDView.UpdateQuestProgress // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLScreenMarkerFlagged
// Size: 0x2b0 (Inherited: 0x298)
class USOLScreenMarkerFlagged : public UUserWidget {
public:

	char pad_298[0x10]; // 0x298(0x10)
	struct UImage* Image_148; // 0x2a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLScreenMarkerCommon
// Size: 0x348 (Inherited: 0x298)
class USOLScreenMarkerCommon : public UUserWidget {
public:

	struct UTextBlock* UpDistText; // 0x298(0x08)
	struct UTextBlock* DistText; // 0x2a0(0x08)
	struct UCanvasPanel* ArrowRotation; // 0x2a8(0x08)
	struct UImage* IconImage; // 0x2b0(0x08)
	float InitOffsetAngle; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct USOLScreenMarkerFlagged* ScreenMarkerFlagged; // 0x2c0(0x08)
	struct FVector2D AnchorCenterOffset; // 0x2c8(0x08)
	char pad_2D0[0x6c]; // 0x2d0(0x6c)
	struct FVector2D ScreenPos; // 0x33c(0x08)
	bool bIsLocalMarked; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)

	void BP_SetDistTextPosition(int32_t InPositionType); // Function DFMGameHud.SOLScreenMarkerCommon.BP_SetDistTextPosition // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLStartMatchEvacuationInfoHUDView
// Size: 0x418 (Inherited: 0x388)
class USOLStartMatchEvacuationInfoHUDView : public UBaseUIView {
public:

	struct UImage* Icon; // 0x388(0x08)
	struct UCanvasPanel* OtherPanel; // 0x390(0x08)
	struct UWidgetAnimation* AnimaAutoIn; // 0x398(0x08)
	struct UWidgetAnimation* AnimaTurnSmall; // 0x3a0(0x08)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x3a8(0x50)
	char pad_3F8[0x18]; // 0x3f8(0x18)
	struct APlayerExitBase* CachedExitBase; // 0x410(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLStartMatchInfoHUDView
// Size: 0x5d8 (Inherited: 0x388)
class USOLStartMatchInfoHUDView : public UBaseUIView {
public:

	struct UTextBlock* Duration; // 0x388(0x08)
	struct UTextBlock* DurationUrgent; // 0x390(0x08)
	struct UTextBlock* DurationProxy; // 0x398(0x08)
	struct UWidget* DurationBox; // 0x3a0(0x08)
	struct UWidget* DurationBoxUrgent_2; // 0x3a8(0x08)
	struct UWidget* CustomRootPanel; // 0x3b0(0x08)
	struct FName CustomRootPanelName; // 0x3b8(0x08)
	struct TArray<struct FName> EvacuationInfoNameArray; // 0x3c0(0x10)
	struct TArray<struct USOLStartMatchEvacuationInfoHUDView*> EvacuationInfoArray; // 0x3d0(0x10)
	struct UWidgetAnimation* AnimaStartFadeIn; // 0x3e0(0x08)
	struct UWidgetAnimation* AnimaStartFadeOut; // 0x3e8(0x08)
	struct UWidgetAnimation* AnimaEndFadeIn; // 0x3f0(0x08)
	struct UWidgetAnimation* AnimaEndFadeOut; // 0x3f8(0x08)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x400(0x50)
	bool bNeedShowWhenWatch; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct UWidget* StartView; // 0x458(0x08)
	struct UWidget* EndView; // 0x460(0x08)
	struct UTextBlock* EndDesc; // 0x468(0x08)
	struct UWidget* AnimaPanel; // 0x470(0x08)
	struct UWidget* Image_GreenLightFX; // 0x478(0x08)
	struct TArray<int32_t> UrgentTimeRemainArray; // 0x480(0x10)
	char pad_490[0x10]; // 0x490(0x10)
	float MatchStartFadeInTime; // 0x4a0(0x04)
	float MatchStartFadeOutTime; // 0x4a4(0x04)
	float WaitEvacuationLoadedAllTime; // 0x4a8(0x04)
	float EvacuationFadeInTime; // 0x4ac(0x04)
	float EvacuationFadeOutTime; // 0x4b0(0x04)
	float MatchUrgentFadeInTime; // 0x4b4(0x04)
	float MatchUrgentFadeOutTime; // 0x4b8(0x04)
	char pad_4BC[0x14]; // 0x4bc(0x14)
	struct UButton* MatchStartTestBtn; // 0x4d0(0x08)
	struct UButton* MatchUrgentTestBtn; // 0x4d8(0x08)
	struct FName FlyTimeBoxName; // 0x4e0(0x08)
	struct UHorizontalBox* FlyTimeBox; // 0x4e8(0x08)
	struct FName FlyTimeName; // 0x4f0(0x08)
	struct UTextBlock* FlyTimeText; // 0x4f8(0x08)
	struct TArray<struct FName> FlyExitIconNameArray; // 0x500(0x10)
	struct TArray<struct UImage*> FlyExitIconArray; // 0x510(0x10)
	char pad_520[0x10]; // 0x520(0x10)
	float StartFlyTimeBoxDuration; // 0x530(0x04)
	float UrgentFlyTimeBoxDuration; // 0x534(0x04)
	float FlyExitIconDuration; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct UGPTweenWidget* FlyTimeBoxTW; // 0x540(0x08)
	struct UGPTweenWidget* FlyExitIconTW; // 0x548(0x08)
	enum class EaseType FlyTimeBoxLocEaseType; // 0x550(0x01)
	enum class EaseType FlyTimeBoxFadeEaseType; // 0x551(0x01)
	enum class EaseType FlyExitIconLocEaseType; // 0x552(0x01)
	enum class EaseType FlyExitIconScaleEaseType; // 0x553(0x01)
	enum class EaseType FlyExitIconFadeEaseType; // 0x554(0x01)
	char pad_555[0x3]; // 0x555(0x03)
	float EarlyShowRemainTime; // 0x558(0x04)
	float EarlyShowExitIconTime; // 0x55c(0x04)
	char pad_560[0x10]; // 0x560(0x10)
	struct FVector2D FlyTimeBoxOffset; // 0x570(0x08)
	struct FVector2D FlyExitIconOffset; // 0x578(0x08)
	struct FVector2D StartFlyTimeBoxViewOffset; // 0x580(0x08)
	struct FVector2D UrgentFlyTimeBoxViewOffset; // 0x588(0x08)
	struct FVector2D FlyExitIconViewOffset; // 0x590(0x08)
	struct FVector2D ExitIconFlyBeginScale; // 0x598(0x08)
	struct FVector2D ExitIconFlyEndScale; // 0x5a0(0x08)
	float ExitIconFlyBeginOpacity; // 0x5a8(0x04)
	float ExitIconFlyEndOpacity; // 0x5ac(0x04)
	float TimeBoxFlyBeginOpacity; // 0x5b0(0x04)
	float TimeBoxFlyEndOpacity; // 0x5b4(0x04)
	bool bIsHideInFlyEnd; // 0x5b8(0x01)
	char pad_5B9[0x7]; // 0x5b9(0x07)
	struct UDFCommonHUDScreenMutex* HDEventTipsMutex; // 0x5c0(0x08)
	struct FName MutexRegName; // 0x5c8(0x08)
	bool bGotMutex; // 0x5d0(0x01)
	char pad_5D1[0x7]; // 0x5d1(0x07)

	void OnSOLStartMatchInfoShow(); // Function DFMGameHud.SOLStartMatchInfoHUDView.OnSOLStartMatchInfoShow // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLTimelineTipHUDView
// Size: 0x438 (Inherited: 0x388)
class USOLTimelineTipHUDView : public UBaseUIView {
public:

	struct UImage* IconMainImage; // 0x388(0x08)
	struct UImage* IconBaseImage; // 0x390(0x08)
	struct UTextBlock* CountDownText; // 0x398(0x08)
	struct UImage* ProgressBar; // 0x3a0(0x08)
	struct UTexture* GlowBar; // 0x3a8(0x08)
	char pad_3B0[0x60]; // 0x3b0(0x60)
	struct UPaperSprite* EventIcon; // 0x410(0x08)
	struct UObject* ReservedIcon; // 0x418(0x08)
	float AnimStartLength; // 0x420(0x04)
	char pad_424[0x14]; // 0x424(0x14)

	void SetStyle(int32_t Style); // Function DFMGameHud.SOLTimelineTipHUDView.SetStyle // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLWishItemMarkerController
// Size: 0x2a0 (Inherited: 0x290)
class USOLWishItemMarkerController : public UMapIconViewController {
public:

	float ImageSizeX; // 0x290(0x04)
	float WorldRange; // 0x294(0x04)
	char pad_298[0x8]; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SoundVisualizationPanel
// Size: 0x428 (Inherited: 0x388)
class USoundVisualizationPanel : public UBaseUIView {
public:

	struct UDFMMobileCustomLayoutDraggableButton* SoundRuler; // 0x388(0x08)
	struct USoundVisualizationArrow* WBP_LeftArrow; // 0x390(0x08)
	struct USoundVisualizationArrow* WBP_RightArrow; // 0x398(0x08)
	struct USoundVisualizationArrow* WBP_LeftBottomArrow; // 0x3a0(0x08)
	struct USoundVisualizationArrow* WBP_RightBottomArrow; // 0x3a8(0x08)
	struct USoundVisualizationArrow* WBP_LeftTopArrow; // 0x3b0(0x08)
	struct USoundVisualizationArrow* WBP_RightTopArrow; // 0x3b8(0x08)
	struct UCanvasPanel* SoundWidgetCanvas; // 0x3c0(0x08)
	struct FName LeftTopArrowAnimName; // 0x3c8(0x08)
	struct FName LeftMiddleArrowAnimName; // 0x3d0(0x08)
	struct FName LeftBottomArrowAnimName; // 0x3d8(0x08)
	struct FName RightTopArrowAnimName; // 0x3e0(0x08)
	struct FName RightMiddleArrowAnimName; // 0x3e8(0x08)
	struct FName RightBottomArrowAnimName; // 0x3f0(0x08)
	struct FLinearColor ArrowRedColor; // 0x3f8(0x10)
	struct UPaperSprite* ArrowNormalImage; // 0x408(0x08)
	struct UPaperSprite* FarArrowNormalImage; // 0x410(0x08)
	float SoundPanelOffset_OpenBag; // 0x418(0x04)
	char pad_41C[0xc]; // 0x41c(0x0c)

	void TryAttachToTopDirectionHud(); // Function DFMGameHud.SoundVisualizationPanel.TryAttachToTopDirectionHud // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.TeamHUDControllerBase
// Size: 0xc0 (Inherited: 0xb0)
class UTeamHUDControllerBase : public UBaseUIController {
public:

	struct UTeamInfoHUDView* TeamInfoHUDView; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.TeamInfoHUDView
// Size: 0x530 (Inherited: 0x388)
class UTeamInfoHUDView : public UBaseUIView {
public:

	struct UButton* ExpandBtn; // 0x388(0x08)
	struct UCheckbox* HurtCheckBtn; // 0x390(0x08)
	struct UCanvasPanel* InfoPanel; // 0x398(0x08)
	struct UScrollGridBox* TeammateScrollGridBox; // 0x3a0(0x08)
	struct TMap<uint64_t, struct UPlayerHUDView*> PlayerNameHUDViews; // 0x3a8(0x50)
	struct TMap<uint64_t, struct UDFHDPlayerNameTeammateHUDView*> PlayerNameHUDViews_PC; // 0x3f8(0x50)
	uint64_t WatchFightPlayerUin; // 0x448(0x08)
	bool bIsWatchingFight; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	struct FVector2D WatchFightOffset; // 0x454(0x08)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x460(0x50)
	struct UWidgetAnimation* MPKillMarkerView_In; // 0x4b0(0x08)
	struct UWidgetAnimation* MPKillMarkerView_Out; // 0x4b8(0x08)
	struct TArray<struct FTeamMemberInfo> TeamInfoArr; // 0x4c0(0x10)
	struct TArray<struct FTeamMemberInfo> TeammateInfoArr; // 0x4d0(0x10)
	char pad_4E0[0x8]; // 0x4e0(0x08)
	uint64_t TeamLeaderUin; // 0x4e8(0x08)
	char pad_4F0[0x8]; // 0x4f0(0x08)
	bool bIsWanted; // 0x4f8(0x01)
	char pad_4F9[0x1f]; // 0x4f9(0x1f)
	struct UButton* DamageCloseButton; // 0x518(0x08)
	struct FVector2D PCReDeployWidgetTranslation; // 0x520(0x08)
	struct FVector2D PCReDeployWidgetScale; // 0x528(0x08)

	void UpdateTeammateInfoIcon(int32_t HealthChangeAmount); // Function DFMGameHud.TeamInfoHUDView.UpdateTeammateInfoIcon // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.TeamInfoView
// Size: 0x490 (Inherited: 0x388)
class UTeamInfoView : public UBaseUIView {
public:

	struct TMap<uint64_t, struct UDFMTeamPlayerInfoView*> DFMTeamPlayerInfoViews; // 0x388(0x50)
	struct TArray<struct UDFHDPlayerNameTeammateHUDView*> TeamPlayerInfoViewArray; // 0x3d8(0x10)
	struct TArray<struct UDFHDPlayerNameTeammateHUDView*> DFHDTeamPlayerInfoViewArray; // 0x3e8(0x10)
	struct TArray<struct FTeamMemberInfo> TeamInfoArr; // 0x3f8(0x10)
	uint64_t TeamLeaderUin; // 0x408(0x08)
	char pad_410[0x10]; // 0x410(0x10)
	struct UVerticalBox* TeamInfoVerticalBox; // 0x420(0x08)
	struct UDFButton* DamageViewCloseButton; // 0x428(0x08)
	struct UButton* DamageViewOpenButton; // 0x430(0x08)
	struct UDFMCommonActionButtonView* DamageOpenButtonView; // 0x438(0x08)
	struct UDFHDPlayerNameTeammateHUDView* TeamStatusAvatarPC_1; // 0x440(0x08)
	struct UDFHDPlayerNameTeammateHUDView* TeamStatusAvatarPC_2; // 0x448(0x08)
	struct UDFHDPlayerNameTeammateHUDView* TeamStatusAvatarPC_3; // 0x450(0x08)
	uint64_t WatchFightPlayerUin; // 0x458(0x08)
	bool bIsWatchingFight; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	struct FVector2D WatchFightOffset; // 0x464(0x08)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UClass* TeamPlayerInfoView_Mobile; // 0x470(0x08)
	struct UClass* TeamPlayerInfoView_PC; // 0x478(0x08)
	struct FVector2D PCReDeployWidgetTranslation; // 0x480(0x08)
	struct FVector2D PCReDeployWidgetScale; // 0x488(0x08)

	void UpdateTeamInfoView(); // Function DFMGameHud.TeamInfoView.UpdateTeamInfoView // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.TelescopeHUDView
// Size: 0x3e0 (Inherited: 0x388)
class UTelescopeHUDView : public UBaseUIView {
public:

	struct USlider* LeftButton; // 0x388(0x08)
	struct UWidgetSwitcher* ScopeNumSwitcher; // 0x390(0x08)
	struct UButton* CancelButton; // 0x398(0x08)
	struct FString TelescopeZoomInAudioName; // 0x3a0(0x10)
	struct FString TelescopeDownAudioName; // 0x3b0(0x10)
	struct FString TelescopeZoomOutAudioName; // 0x3c0(0x10)
	struct FString TelescopeUpAudioName; // 0x3d0(0x10)

	void ShowAlarm(enum class ESlateVisibility EVisibility); // Function DFMGameHud.TelescopeHUDView.ShowAlarm // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.TopDirectionIndicatorHUD
// Size: 0x618 (Inherited: 0x388)
class UTopDirectionIndicatorHUD : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct TMap<struct ADFMCharacter*, float> AIAlertCache; // 0x390(0x50)
	struct TMap<struct ADFMCharacter*, float> PlayerAlertCache; // 0x3e0(0x50)
	float AIAlertProtectTime; // 0x430(0x04)
	float PlayerAlertTrackTime; // 0x434(0x04)
	char pad_438[0x8]; // 0x438(0x08)
	struct UImage* ScaleImage; // 0x440(0x08)
	struct UTextBlock* CenterNum; // 0x448(0x08)
	struct UArtCommon* ArtNum_2; // 0x450(0x08)
	struct UArtCommon* ArtNum_3; // 0x458(0x08)
	struct UArtCommon* ArtNum_4; // 0x460(0x08)
	struct UCanvasPanel* DirectonCanvas; // 0x468(0x08)
	struct USoundVisualizationPanel* VisualizationPanelWidget; // 0x470(0x08)
	struct TArray<struct UTopDirectionSoundWidget*> PendingUsingPool; // 0x478(0x10)
	float DefaultScaleImageOffset; // 0x488(0x04)
	struct FName ScaleImageOffsetParamName; // 0x48c(0x08)
	char pad_494[0x4]; // 0x494(0x04)
	struct TArray<struct FDirectionItem> DirectionItems; // 0x498(0x10)
	float SoundWidgetYOffset; // 0x4a8(0x04)
	float CancelExpansionCooldown; // 0x4ac(0x04)
	float ShowSoundAngleMax; // 0x4b0(0x04)
	float ShowLowArrowAngleMax; // 0x4b4(0x04)
	int32_t PendingUsingPoolMaxSize; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct UClass* DefaultSoundWidgetClass; // 0x4c0(0x08)
	struct TMap<enum class ESoundVisualizationType, struct UClass*> SoundWidgetsMap; // 0x4c8(0x50)
	struct TMap<struct AActor*, struct FSoundVisualizationItem> SoundWidgetCache; // 0x518(0x50)
	struct TMap<int32_t, struct FSoundVisualizationItem> NoRealActorSoundWidgetCache; // 0x568(0x50)
	struct AGPPlayerController* GPPlayerController; // 0x5b8(0x08)
	char pad_5C0[0x48]; // 0x5c0(0x48)
	struct UMaterialInstanceDynamic* ScaleImageMID; // 0x608(0x08)
	char pad_610[0x8]; // 0x610(0x08)

	void SetVisualizationPanelWidget(struct UUserWidget* InWidget); // Function DFMGameHud.TopDirectionIndicatorHUD.SetVisualizationPanelWidget // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SoundVisualizationArrow
// Size: 0x2f0 (Inherited: 0x298)
class USoundVisualizationArrow : public UUserWidget {
public:

	struct FUIAnimationController AnimationController; // 0x298(0x20)
	struct FLinearColor ArrowRedColor; // 0x2b8(0x10)
	struct UImage* image_bg01; // 0x2c8(0x08)
	struct UImage* image_bg02; // 0x2d0(0x08)
	struct UImage* FX_image_bg01; // 0x2d8(0x08)
	struct UImage* FX_image_bg02; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.TopDirectionSoundWidget
// Size: 0x550 (Inherited: 0x298)
class UTopDirectionSoundWidget : public UUserWidget {
public:

	struct UImage* SoundImage; // 0x298(0x08)
	struct UCanvasPanel* InnerCanvasPanel; // 0x2a0(0x08)
	struct UImage* UpArrow; // 0x2a8(0x08)
	struct UImage* DownArrow; // 0x2b0(0x08)
	struct UImage* TypeIcon; // 0x2b8(0x08)
	struct UImage* TypeIcon_bg; // 0x2c0(0x08)
	struct FLinearColor SoundImageRedColor; // 0x2c8(0x10)
	struct UPaperSprite* ArrowNormalImage; // 0x2d8(0x08)
	struct UPaperSprite* ArrowRedImage; // 0x2e0(0x08)
	struct TMap<enum class ESoundTypeIcon, struct UPaperSprite*> TypeIconMap; // 0x2e8(0x50)
	struct TMap<char, struct FName> InAnimNameMap; // 0x338(0x50)
	struct TMap<char, struct FName> OutAnimNameMap; // 0x388(0x50)
	char pad_3D8[0x4]; // 0x3d8(0x04)
	float FadeInAnimTime; // 0x3dc(0x04)
	float FadeOutAnimTime; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TMap<struct FName, struct FSoundWidgetAnimParams> AnimParams; // 0x3e8(0x50)
	struct TMap<struct FName, float> UpperParamMap; // 0x438(0x50)
	struct TMap<struct FName, float> MiddleParamMap; // 0x488(0x50)
	struct TMap<struct FName, float> LowerParamMap; // 0x4d8(0x50)
	struct UTopDirectionIndicatorHUD* TopDirectionIndicator; // 0x528(0x08)
	struct UMaterialInstanceDynamic* SoundImageMID; // 0x530(0x08)
	char pad_538[0x18]; // 0x538(0x18)

	void PlaySizeChangeAnim(char OldDistanceType, char NewDistanceType); // Function DFMGameHud.TopDirectionSoundWidget.PlaySizeChangeAnim // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WeaponAssemblyBPLibrary
// Size: 0x30 (Inherited: 0x30)
class UWeaponAssemblyBPLibrary : public UObject {
public:


	bool STATIC_UpdateGunID(struct AAssembleWeaponActor* Weapon, struct FText NewGunID, uint64_t PresetId); // Function DFMGameHud.WeaponAssemblyBPLibrary.UpdateGunID // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WeaponDebugHud_DamageValidateResultItem
// Size: 0x2a0 (Inherited: 0x298)
class UWeaponDebugHud_DamageValidateResultItem : public UUserWidget {
public:

	struct UTextBlock* Content; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WeaponDebugHud_DamageValidate
// Size: 0x3d8 (Inherited: 0x388)
class UWeaponDebugHud_DamageValidate : public UBaseUIView {
public:

	struct UTextBlock* ValidateEnableText; // 0x388(0x08)
	struct UCheckbox* CheatPenetrateCheckBox; // 0x390(0x08)
	struct UCheckbox* CheatWeaponFireCDCheckBox; // 0x398(0x08)
	struct UCheckbox* CheatMeleeFireRangeCheckBox; // 0x3a0(0x08)
	struct UDFScrollBox* ValidateScrollBox; // 0x3a8(0x08)
	struct UTextBlock* PingTxt; // 0x3b0(0x08)
	struct UTextBlock* RTTtxt; // 0x3b8(0x08)
	struct UTextBlock* SRTTtxt; // 0x3c0(0x08)
	struct UTextBlock* RequestHitTxt; // 0x3c8(0x08)
	struct UTextBlock* BlockHitTxt; // 0x3d0(0x08)

	void OnRecvPointHitFaild(struct FPointHitActionResult& PointHitActionResult); // Function DFMGameHud.WeaponDebugHud_DamageValidate.OnRecvPointHitFaild // (Final|Native|Private|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WeaponDebugSettings
// Size: 0x50 (Inherited: 0x30)
class UWeaponDebugSettings : public UObject {
public:

	bool bShowStandPresetOnly; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString NameFilterStr; // 0x38(0x10)
	bool bAddWeaponIntoBag; // 0x48(0x01)
	bool bRemoveWeaponBeforeAdd; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WeaponDebugLogView
// Size: 0x700 (Inherited: 0x3b8)
class UWeaponDebugLogView : public UMobileGamePadView {
public:

	char pad_3B8[0x288]; // 0x3b8(0x288)
	struct URichTextBlock* RichTextBlockLog; // 0x640(0x08)
	enum class EWeaponDebugType DebugType; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct UEditableTextBox* RichTextBlockLogFilterText; // 0x650(0x08)
	struct UEditableTextBox* StrToWeaponTextBox; // 0x658(0x08)
	struct UClass* DrawTransformClass; // 0x660(0x08)
	char pad_668[0x28]; // 0x668(0x28)
	struct UComboBoxString* GiveWeaponCmd; // 0x690(0x08)
	struct UComboBoxString* GiveWeaponThrowableCmd; // 0x698(0x08)
	struct UCheckbox* GiveWeaponShowOtherPresetCheckBox; // 0x6a0(0x08)
	struct UEditableTextBox* GiveWeaponNameFilter; // 0x6a8(0x08)
	struct UCheckbox* GiveWeaponAddAfterRemoveCheckBox; // 0x6b0(0x08)
	struct UCheckbox* GiveWeaponAddIntoBagCheckBox; // 0x6b8(0x08)
	char pad_6C0[0x10]; // 0x6c0(0x10)
	struct UComboBoxString* SelectWeaponCharacterListCmd; // 0x6d0(0x08)
	struct UComboBoxString* SelectWeaponListCmd; // 0x6d8(0x08)
	struct UButton* SelectWeaponClear; // 0x6e0(0x08)
	char pad_6E8[0x18]; // 0x6e8(0x18)

	void ShowDebugPanel(bool Show, enum class EWeaponDebugType ShowDebugType); // Function DFMGameHud.WeaponDebugLogView.ShowDebugPanel // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WeaponFireStatDebugLogView
// Size: 0x300 (Inherited: 0x298)
class UWeaponFireStatDebugLogView : public UUserWidget {
public:

	struct UTextBlock* FireToHitTxt; // 0x298(0x08)
	struct UTextBlock* FireToNotifyTxt; // 0x2a0(0x08)
	struct UTextBlock* AvgFireToHitTxt; // 0x2a8(0x08)
	struct UTextBlock* AvgFireToNotifyTxt; // 0x2b0(0x08)
	struct UTextBlock* MaxNetTickRateTxt; // 0x2b8(0x08)
	struct UTextBlock* MaxServerNetTickRateTxt; // 0x2c0(0x08)
	struct UTextBlock* PingTxt; // 0x2c8(0x08)
	struct UTextBlock* RTTtxt; // 0x2d0(0x08)
	struct UTextBlock* SRTTtxt; // 0x2d8(0x08)
	struct UTextBlock* RequestHitTxt; // 0x2e0(0x08)
	struct UTextBlock* BlockHitTxt; // 0x2e8(0x08)
	struct UTextBlock* TTKTxt; // 0x2f0(0x08)
	struct UTextBlock* TTDTxt; // 0x2f8(0x08)

	void ResetData(); // Function DFMGameHud.WeaponFireStatDebugLogView.ResetData // (Final|Native|Private|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WeaponHUDBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UWeaponHUDBlueprintLibrary : public UObject {
public:


	void STATIC_UseSceneWeapon(struct UObject* WorldContextObject, struct ACHARACTER* CharacterActor, struct AActor* WeaponActor); // Function DFMGameHud.WeaponHUDBlueprintLibrary.UseSceneWeapon // (Final|BlueprintCosmetic|Native|Static|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WeaponInputHUDComponent
// Size: 0x88 (Inherited: 0x30)
class UWeaponInputHUDComponent : public UHUDComponent {
public:

	struct TArray<struct UClass*> InputClass; // 0x30(0x10)
	struct TArray<struct UWeaponInputBase*> InputInterface; // 0x40(0x10)
	struct UWeaponInputBase* CurrentInput; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
	struct FWeaponInputDisableNotice DisableInputNotice; // 0x60(0x20)
	struct AHUD* MyHUD; // 0x80(0x08)

	void OnReload(); // Function DFMGameHud.WeaponInputHUDComponent.OnReload // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MapBaseHUDView
// Size: 0x770 (Inherited: 0x388)
class UMapBaseHUDView : public UBaseUIView {
public:

	struct UHUDStateManager* HUDStateManager; // 0x388(0x08)
	struct AGPPlayerState* ThisPlayerState; // 0x390(0x08)
	struct UMapInfoComponent* ThisMapInfoComponent; // 0x398(0x08)
	char pad_3A0[0x28]; // 0x3a0(0x28)
	struct TMap<struct UMapIconViewController*, struct UMapItemHUDView*> CustomMapIconCache; // 0x3c8(0x50)
	struct TArray<struct UMapIconViewController*> LoadingMapIconViewControllerArr; // 0x418(0x10)
	char pad_428[0x18]; // 0x428(0x18)
	struct TArray<struct FMapItemInfo> MapItemInfos; // 0x440(0x10)
	struct FVector WorldCenter; // 0x450(0x0c)
	struct FVector WorldExtent; // 0x45c(0x0c)
	struct UCurveFloat* BigMapZoomCurve; // 0x468(0x08)
	char pad_470[0x30]; // 0x470(0x30)
	struct FVector2D MapSize; // 0x4a0(0x08)
	float CurrentScale; // 0x4a8(0x04)
	struct FVector2D CurrentMapUVPos; // 0x4ac(0x08)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct UBaseUIController* MapUIController; // 0x4b8(0x08)
	char pad_4C0[0x8]; // 0x4c0(0x08)
	struct UCanvasPanel* PlayerAndMarkCanvasPanel; // 0x4c8(0x08)
	struct UClass* RevengeLocationWidget; // 0x4d0(0x08)
	struct UClass* TimeLineEventWidget; // 0x4d8(0x08)
	char pad_4E0[0x50]; // 0x4e0(0x50)
	struct TMap<struct FVector2D, struct FString> MapNamesStringInfo; // 0x530(0x50)
	struct TMap<struct FVector2D, struct UPaperSprite*> MapNamesInfo; // 0x580(0x50)
	struct UMaterialInstanceDynamic* MapTextureMID; // 0x5d0(0x08)
	struct UUIClipMapTexture* ClipMapTexture; // 0x5d8(0x08)
	struct FName ParamClipMapTex; // 0x5e0(0x08)
	char pad_5E8[0x58]; // 0x5e8(0x58)
	struct UImage* MapBase; // 0x640(0x08)
	int32_t CurrentMapType; // 0x648(0x04)
	char pad_64C[0x2c]; // 0x64c(0x2c)
	struct UTexture2D* EdgeMaskMapTexture; // 0x678(0x08)
	char pad_680[0x18]; // 0x680(0x18)
	bool bHasSetMap; // 0x698(0x01)
	char pad_699[0x1]; // 0x699(0x01)
	bool bIsBigMap; // 0x69a(0x01)
	char pad_69B[0x5]; // 0x69b(0x05)
	int32_t TeamId; // 0x6a0(0x04)
	char pad_6A4[0x4]; // 0x6a4(0x04)
	struct UUserWidget* MapView; // 0x6a8(0x08)
	struct TArray<struct FVector> MapHiddenInteractorLocArr; // 0x6b0(0x10)
	bool bIsMapContainerInfoChanged; // 0x6c0(0x01)
	char pad_6C1[0x7]; // 0x6c1(0x07)
	struct TArray<struct APlayerExitBase*> AllPlayerExits; // 0x6c8(0x10)
	/*struct TSet<struct AInteractorBase*>*/char AllExitTriggers[0x50]; // 0x6d8(0x50)
	char pad_728[0x2c]; // 0x728(0x2c)
	float UpdateClipMapInterval; // 0x754(0x04)
	char pad_758[0x4]; // 0x758(0x04)
	int32_t MaxItemCountOneFrame; // 0x75c(0x04)
	char pad_760[0x10]; // 0x760(0x10)

	void RemoveMapItem(struct UClass* WidgetClass, struct FName Key); // Function DFMGameHud.MapBaseHUDView.RemoveMapItem // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MapItemHUDView
// Size: 0x3f8 (Inherited: 0x388)
class UMapItemHUDView : public UBaseUIView {
public:

	struct UMapIconViewController* IconController; // 0x388(0x08)
	struct UMapBaseHUDView* MapHUDView; // 0x390(0x08)
	bool bNeedTick; // 0x398(0x01)
	bool bIsVisible; // 0x399(0x01)
	enum class ESlateVisibility DefaultIconVisibility; // 0x39a(0x01)
	char pad_39B[0x1]; // 0x39b(0x01)
	int32_t ZOrder; // 0x39c(0x04)
	char pad_3A0[0xc]; // 0x3a0(0x0c)
	bool bIsSelected; // 0x3ac(0x01)
	bool bIsTracking; // 0x3ad(0x01)
	bool bIsMarkedLocally; // 0x3ae(0x01)
	bool bIsSnapToBoundary; // 0x3af(0x01)
	struct USelectedFrameWidget* SelectedFrameWidgetPtr; // 0x3b0(0x08)
	struct UFlaggedFrameWidget* FlaggedFrameWidgetPtr; // 0x3b8(0x08)
	struct UEdgeTrackingWidget* EdgeTrackingWidgetPtr; // 0x3c0(0x08)
	struct UMapItemRangeHUDView* ItemRangeWidgetPtr; // 0x3c8(0x08)
	struct UEvacuteTimeWidget* EvacuteTimeWidgetPtr; // 0x3d0(0x08)
	struct UAnimTrackingWidget* AnimTrackingWidgetPtr; // 0x3d8(0x08)
	struct UMapItemProgressWidget* ItemProgressWidgetPtr; // 0x3e0(0x08)
	struct UMapItemRippleHUDView* RippleWidgetPtr; // 0x3e8(0x08)
	char pad_3F0[0x6]; // 0x3f0(0x06)
	bool bUseCacheRelativeTransformOptimize; // 0x3f6(0x01)
	char pad_3F7[0x1]; // 0x3f7(0x01)

	void TryMarkMapTarget(bool bAdd); // Function DFMGameHud.MapItemHUDView.TryMarkMapTarget // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MobileControlPadView
// Size: 0x400 (Inherited: 0x388)
class UMobileControlPadView : public UBaseUIView {
public:

	float TouchAreaOffset; // 0x388(0x04)
	struct FName TouchImageName; // 0x38c(0x08)
	struct FName RotationLimitImageName; // 0x394(0x08)
	bool bHasRotationLimit; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	struct AGPPlayerController* GPPlayerController; // 0x3a0(0x08)
	struct AGPCharacter* GPCharacter; // 0x3a8(0x08)
	struct UMobilePlayerInput* MobilePlayerInput; // 0x3b0(0x08)
	struct UGPInputManager* InputManager; // 0x3b8(0x08)
	struct UMobileGameHandle* GameHandle; // 0x3c0(0x08)
	struct UImage* TouchImage; // 0x3c8(0x08)
	struct UImage* RotationLimitImage; // 0x3d0(0x08)
	struct AGPCharacter* OldCharacter; // 0x3d8(0x08)
	char pad_3E0[0x20]; // 0x3e0(0x20)

	void SetFingerIndex(struct FPointerEvent& InTouchEvent); // Function DFMGameHud.MobileControlPadView.SetFingerIndex // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityLockerItemBase
// Size: 0x2a0 (Inherited: 0x298)
class UAbilityLockerItemBase : public UUserWidget {
public:

	struct UGPAbilityLockerDataBase* Data; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AIMsgWidgetBase
// Size: 0x2a0 (Inherited: 0x298)
class UAIMsgWidgetBase : public UUserWidget {
public:

	bool bCurrentCanRemove; // 0x298(0x01)
	bool bInFightStatus; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)

	void BPStartRemoveMsgWidget(bool bIsFight); // Function DFMGameHud.AIMsgWidgetBase.BPStartRemoveMsgWidget // (Native|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFControllerRouletteBase
// Size: 0x400 (Inherited: 0x388)
class UDFControllerRouletteBase : public UBaseUIView {
public:

	struct TArray<enum class GameHUDSate> UnfocusingGameHUDStates; // 0x388(0x10)
	float RouletteInnerRadius; // 0x398(0x04)
	float RouletteOuterRadius; // 0x39c(0x04)
	float LongPressTime; // 0x3a0(0x04)
	int32_t PressedMovePixelTolerance; // 0x3a4(0x04)
	float RouletteInnerMouseBlockRadius; // 0x3a8(0x04)
	float RouletteInnerRadius_HD; // 0x3ac(0x04)
	float RouletteOuterRadius_HD; // 0x3b0(0x04)
	float LongPressTime_HD; // 0x3b4(0x04)
	int32_t PressedMovePixelTolerance_HD; // 0x3b8(0x04)
	int32_t RouletteNum; // 0x3bc(0x04)
	float RouletteStartAngle; // 0x3c0(0x04)
	enum class EDFRouletteType RouletteType; // 0x3c4(0x01)
	char RouletteActivateType; // 0x3c5(0x01)
	char pad_3C6[0x2]; // 0x3c6(0x02)
	float DeltaPieceAngle; // 0x3c8(0x04)
	bool bWaitingPressedMove; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	struct FVector2D PressedStartPosition; // 0x3d0(0x08)
	bool bDragging; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	struct FVector2D CurPressedPosition; // 0x3dc(0x08)
	float RadiusFactor; // 0x3e4(0x04)
	int32_t RouletteIndex; // 0x3e8(0x04)
	struct FVector2D DynamicCenter; // 0x3ec(0x08)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct FTimerHandle LongPressTimerHandle; // 0x3f8(0x08)

	void UpdateDragOffset(); // Function DFMGameHud.DFControllerRouletteBase.UpdateDragOffset // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerBaseIconViewController
// Size: 0x350 (Inherited: 0x290)
class UPlayerBaseIconViewController : public UMapIconViewController {
public:

	char pad_290[0x8]; // 0x290(0x08)
	struct AGPPlayerState* LocalPS; // 0x298(0x08)
	struct AGPPlayerState* PlayerStateForThis; // 0x2a0(0x08)
	char pad_2A8[0x90]; // 0x2a8(0x90)
	struct AGPSceneActorReplicator* SceneActorReplicator; // 0x338(0x08)
	char pad_340[0x10]; // 0x340(0x10)

	void InGlitchVolumeChanged(struct AGPPlayerState* AGPPlayerState); // Function DFMGameHud.PlayerBaseIconViewController.InGlitchVolumeChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MiniGameViewBase
// Size: 0x2d0 (Inherited: 0x298)
class UMiniGameViewBase : public UUserWidget {
public:

	/*struct FMulticastInlineDelegate*/char OnPlayerCloseGame[0x10]; // 0x298(0x10)
	/*struct FMulticastInlineDelegate*/char OnGameQuit[0x10]; // 0x2a8(0x10)
	struct FRandomStream RandStream; // 0x2b8(0x08)
	bool bCanTick; // 0x2c0(0x01)
	char pad_2C1[0xf]; // 0x2c1(0x0f)

	void StartGame(int32_t InSeed); // Function DFMGameHud.MiniGameViewBase.StartGame // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterBloodHandleBase
// Size: 0x38 (Inherited: 0x30)
class UCharacterBloodHandleBase : public UObject {
public:

	struct TWeakObjectPtr<struct UCharacterBloodBase> CharacterBloodBase; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.GameMarkerBaseWidget
// Size: 0x588 (Inherited: 0x298)
class UGameMarkerBaseWidget : public UUserWidget {
public:

	struct UGPMarkerItemBase* MarkerItemPtr; // 0x298(0x08)
	struct FMarkInit MarkerInitData; // 0x2a0(0x150)
	struct AGPMarkerManager* MarkerManager; // 0x3f0(0x08)
	struct UGameMarkerPanel* MarkerPanel; // 0x3f8(0x08)
	struct UUserWidget* MarkingAnimWidget; // 0x400(0x08)
	struct UCanvasPanel* MarkerCanvasPanel; // 0x408(0x08)
	struct FName MarkerCanvasPanelName; // 0x410(0x08)
	bool bUsingMarkingAnimWidget; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct UClass* MarkingAnimWidgetClass_SOL; // 0x420(0x08)
	struct FName AnimName_Marking_SOL; // 0x428(0x08)
	struct FAnchorData MarkerAnchorData_SOL; // 0x430(0x28)
	struct FName MarkingSoundName_SOL; // 0x458(0x08)
	struct TMap<enum class EMarkerCampType, struct FMarkingAnimDataMap> CampMarkingAnimDataMap_BattleField; // 0x460(0x50)
	bool bPlayInAnim; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	struct FName AnimName_In; // 0x4b4(0x08)
	bool bPlayLoopAnim; // 0x4bc(0x01)
	char pad_4BD[0x3]; // 0x4bd(0x03)
	struct FName AnimName_Loop; // 0x4c0(0x08)
	bool bPlayOutAnim; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	struct FName AnimName_Out; // 0x4cc(0x08)
	float AnimOutTime; // 0x4d4(0x04)
	float AnimLoopStartDelayTime; // 0x4d8(0x04)
	float AnimLoopIntervalTime; // 0x4dc(0x04)
	float MarkingAnimTime; // 0x4e0(0x04)
	struct FVector2D InnerViewMargin; // 0x4e4(0x08)
	struct FVector2D OuterViewMargin; // 0x4ec(0x08)
	struct FVector2D AnchorCenterOffest; // 0x4f4(0x08)
	char pad_4FC[0x20]; // 0x4fc(0x20)
	float LerpHalfTime; // 0x51c(0x04)
	char pad_520[0x28]; // 0x520(0x28)
	struct UTextBlock* DistText; // 0x548(0x08)
	struct UTextBlock* DistTextTrace; // 0x550(0x08)
	struct UImage* Arrow; // 0x558(0x08)
	struct UGPMarkerBubbleBox* BubbleBox; // 0x560(0x08)
	struct FVector2D DistTextTraceOffset; // 0x568(0x08)
	float SettingOpacity; // 0x570(0x04)
	char pad_574[0xc]; // 0x574(0x0c)
	bool bEnableSmooth; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	float SmoothAlpha; // 0x584(0x04)

	void UpdateAimedCircleRadiusOpacity(); // Function DFMGameHud.GameMarkerBaseWidget.UpdateAimedCircleRadiusOpacity // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CrosshairViewProxy
// Size: 0x88 (Inherited: 0x30)
class UCrosshairViewProxy : public UObject {
public:

	struct FCrosshairState CurCrosshairState; // 0x30(0x30)
	struct UMaterialInstanceDynamic* Material; // 0x60(0x08)
	struct UUserWidget* UserWidget; // 0x68(0x08)
	struct TArray<struct UImage*> Images; // 0x70(0x10)
	enum class ECrosshairScaleMode ScaleMode; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)

	void InitStateFromMat(); // Function DFMGameHud.CrosshairViewProxy.InitStateFromMat // (Native|Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DamageHintHUDView
// Size: 0x4e0 (Inherited: 0x388)
class UDamageHintHUDView : public UBaseUIView {
public:

	struct UButton* GMBtn; // 0x388(0x08)
	struct UUserWidget* ClearDataBtn; // 0x390(0x08)
	struct UCanvasPanel* MainCanvas; // 0x398(0x08)
	struct UDamageHintStatWidget* HitCountStat; // 0x3a0(0x08)
	struct UDamageHintStatWidget* ShootCountStat; // 0x3a8(0x08)
	struct UDamageHintStatWidget* OnTargetRatioStat; // 0x3b0(0x08)
	struct UDamageHintStatWidget* PreArmourDamageStat; // 0x3b8(0x08)
	struct UDamageHintStatWidget* PostArmourDamageStat; // 0x3c0(0x08)
	struct UDamageHintStatWidget* ArmourEfficiencyStat; // 0x3c8(0x08)
	struct UDamageHintStatWidget* DamageRangeDecayStat; // 0x3d0(0x08)
	struct UDamageHintStatWidget* HeadDamageStat; // 0x3d8(0x08)
	struct UDamageHintStatWidget* BodyDamageStat; // 0x3e0(0x08)
	struct UDamageHintStatWidget* LeftArmDamageStat; // 0x3e8(0x08)
	struct UDamageHintStatWidget* RightArmDamageStat; // 0x3f0(0x08)
	struct UDamageHintStatWidget* LeftLegDamageStat; // 0x3f8(0x08)
	struct UDamageHintStatWidget* RightLegDamageStat; // 0x400(0x08)
	struct UClass* DamagePopupWidget; // 0x408(0x08)
	float DamagePopupDuration; // 0x410(0x04)
	float DamagePopupSpeed; // 0x414(0x04)
	struct TArray<struct UDamageHintPopupWidget*> PopUpItemArray; // 0x418(0x10)
	char pad_428[0x60]; // 0x428(0x60)
	struct ADFMCharacter* PlayerCharacter; // 0x488(0x08)
	char pad_490[0x50]; // 0x490(0x50)

	void UpdatePopupText(float Delta); // Function DFMGameHud.DamageHintHUDView.UpdatePopupText // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DeployPointBaseWidget
// Size: 0x7b0 (Inherited: 0x5a8)
class UDeployPointBaseWidget : public ULuaUIHudBaseView {
public:

	struct TWeakObjectPtr<struct AActor> TargetActor; // 0x5a8(0x08)
	struct TWeakObjectPtr<struct APlayerController> Controller; // 0x5b0(0x08)
	struct TArray<enum class EMarkFeature> Features; // 0x5b8(0x10)
	char pad_5C8[0x8]; // 0x5c8(0x08)
	struct FMatrix ProjectMat; // 0x5d0(0x40)
	struct FName LuaName; // 0x610(0x08)
	struct FVector2D MarkerCenter; // 0x618(0x08)
	struct FVector2D ScreenPos; // 0x620(0x08)
	struct FVector WidgetOffsetActorLoc; // 0x628(0x0c)
	struct FVector WidgetOffsetCharSocket; // 0x634(0x0c)
	struct FName SocketName; // 0x640(0x08)
	float MaxDistanceUseSocketLoc; // 0x648(0x04)
	char pad_64C[0x4]; // 0x64c(0x04)
	struct TArray<float> EdgePadding; // 0x650(0x10)
	bool bLimitedInEllipse; // 0x660(0x01)
	bool bOutScreen; // 0x661(0x01)
	char pad_662[0x2]; // 0x662(0x02)
	struct FVector2D OutScreenDir; // 0x664(0x08)
	struct FVector2D ScreenOffset; // 0x66c(0x08)
	float Distance; // 0x674(0x04)
	struct FVector NorDir2Actor; // 0x678(0x0c)
	bool bAimed; // 0x684(0x01)
	bool bAimedNotifyRefresh; // 0x685(0x01)
	char pad_686[0x2]; // 0x686(0x02)
	struct FVector2D AimOffset; // 0x688(0x08)
	float AimCircleRadius; // 0x690(0x04)
	float AimDistanceHip; // 0x694(0x04)
	float AimDistanceZoom; // 0x698(0x04)
	float CurrentScaleRatio; // 0x69c(0x04)
	float ScaleRatioChangeThreshold; // 0x6a0(0x04)
	bool bHasCoverBetween; // 0x6a4(0x01)
	char pad_6A5[0x3]; // 0x6a5(0x03)
	float Transparency; // 0x6a8(0x04)
	float TransparencyCoverBetween; // 0x6ac(0x04)
	bool bHidedByPanel; // 0x6b0(0x01)
	bool bNeedHideNextTick; // 0x6b1(0x01)
	char pad_6B2[0x2]; // 0x6b2(0x02)
	float CustomTickInterval; // 0x6b4(0x04)
	float AfterLastTick; // 0x6b8(0x04)
	bool bPlayInAnim; // 0x6bc(0x01)
	bool bPlayOutAnim; // 0x6bd(0x01)
	char pad_6BE[0x2]; // 0x6be(0x02)
	struct FName AnimName_In; // 0x6c0(0x08)
	struct FName AnimName_Out; // 0x6c8(0x08)
	float AnimOutTime; // 0x6d0(0x04)
	float RenderedNeedTime; // 0x6d4(0x04)
	char pad_6D8[0x68]; // 0x6d8(0x68)
	struct ACHARACTER* AimedCharacter; // 0x740(0x08)
	float RayTraceTickInterval; // 0x748(0x04)
	char pad_74C[0x1c]; // 0x74c(0x1c)
	struct AActor* RayHitActor; // 0x768(0x08)
	bool bIsCharacterAndGotHeadLoc; // 0x770(0x01)
	char pad_771[0x7]; // 0x771(0x07)
	struct USkeletalMeshComponent* CharacterSkeletalMeshComp; // 0x778(0x08)
	struct FVector2D ViewportSize; // 0x780(0x08)
	bool bAsyncRayTracing; // 0x788(0x01)
	bool bAsyncRayTracing_Cover; // 0x789(0x01)
	char pad_78A[0x16]; // 0x78a(0x16)
	struct FVector TargetActorLoc; // 0x7a0(0x0c)
	float TargetActorAngle; // 0x7ac(0x04)

	void UpdateWidget(float DeltaTime); // Function DFMGameHud.DeployPointBaseWidget.UpdateWidget // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorPanelBase
// Size: 0x348 (Inherited: 0x298)
class UInteractorPanelBase : public UUserWidget {
public:

	struct UDFMInteractorView* InteractorView; // 0x298(0x08)
	/*struct FMulticastInlineDelegate*/char OnInteractorsChanged[0x10]; // 0x2a0(0x10)
	struct TArray<struct FPotentialInteractorInfo> CurFilteredInteractorInfos; // 0x2b0(0x10)
	char pad_2C0[0x1]; // 0x2c0(0x01)
	bool bUseOptInProcessSingle; // 0x2c1(0x01)
	char pad_2C2[0x2]; // 0x2c2(0x02)
	float ProcessSingleInterval; // 0x2c4(0x04)
	bool bUseOptInUpdateInteractorData; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float UpdateInteractorDataInterval; // 0x2cc(0x04)
	char pad_2D0[0x8]; // 0x2d0(0x08)
	struct TArray<struct FInteractableProxy> InteractableProxiesToRemove; // 0x2d8(0x10)
	struct TArray<struct FInteractableProxy> InteractableProxiesStillExist; // 0x2e8(0x10)
	struct TArray<struct FInteractableProxy> NewAddInteractableProxies; // 0x2f8(0x10)
	struct FGameplayTagContainer CanInteractTagContainer; // 0x308(0x20)
	float AllowMergeMaxDistSquare; // 0x328(0x04)
	bool bCheckCannotInteractWhenWeaponNotIdle; // 0x32c(0x01)
	bool bCheckCurrentCanOperate; // 0x32d(0x01)
	char pad_32E[0x2]; // 0x32e(0x02)
	struct FGameplayTag DecipherDevicePickupTag; // 0x330(0x08)
	struct FGameplayTag DecipherDeviceSubmitTag; // 0x338(0x08)
	bool bCheckIgnoreAddPreStateIronGauze; // 0x340(0x01)
	enum class EInGameBattleClassType AcquireClassTypeIronGauze; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)

	void BP_CannotPlaceC4WhenChangeWeapon(struct AActor* InInteractor, struct FGameplayTag InTag); // Function DFMGameHud.InteractorPanelBase.BP_CannotPlaceC4WhenChangeWeapon // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDPlayerNameHUDView
// Size: 0x610 (Inherited: 0x388)
class UDFHDPlayerNameHUDView : public UBaseUIView {
public:

	struct FMemberHealthInfo MemberHealthInfo; // 0x388(0x3c)
	char pad_3C4[0xc]; // 0x3c4(0x0c)
	struct UImage* MVPImage; // 0x3d0(0x08)
	struct UImage* Image_Live1; // 0x3d8(0x08)
	struct UImage* Image_Live2; // 0x3e0(0x08)
	struct UImage* AvatarImgBckg; // 0x3e8(0x08)
	struct UImage* AvatarImg; // 0x3f0(0x08)
	struct UUserWidget* TeamStatusAvataricon; // 0x3f8(0x08)
	struct UProgressBar* StatusIconProgressBar; // 0x400(0x08)
	struct UTextBlock* LocalPlayerIndex; // 0x408(0x08)
	struct UTextBlock* LocalPlayerName; // 0x410(0x08)
	struct UImage* ArmForceIcon; // 0x418(0x08)
	struct UImage* Car; // 0x420(0x08)
	struct UCanvasPanel* TalkingCanvas; // 0x428(0x08)
	struct UProgressBar* TalkingProgressBar; // 0x430(0x08)
	struct UImage* CloseMicImg; // 0x438(0x08)
	struct UImage* DisconnectImg; // 0x440(0x08)
	struct UDFHorizontalBox* BloodAndArmorBarBox; // 0x448(0x08)
	struct UUserWidget* WBP_CharacterBloodBar_Pc; // 0x450(0x08)
	struct UTextBlock* wtHealthValue; // 0x458(0x08)
	struct UTextBlock* HealthValue_2; // 0x460(0x08)
	struct UTextBlock* ArmValue; // 0x468(0x08)
	struct UImage* ArmBarImage; // 0x470(0x08)
	struct UHDStatusProgressBar* HDStatusProgressBar_Health; // 0x478(0x08)
	struct UUserWidget* WBP_CharacterArmorBar_Pc; // 0x480(0x08)
	struct UCharacterArmorStatusItem* wtHelmetStatusItem; // 0x488(0x08)
	struct UCharacterArmorStatusItem* wtBodyArmorStatusItem; // 0x490(0x08)
	struct UTextBlock* wtArmorValueTxt; // 0x498(0x08)
	struct UHDStatusProgressBar* HDStatusProgressBar_Armor; // 0x4a0(0x08)
	struct UImage* FiringImg; // 0x4a8(0x08)
	struct UWidgetAnimation* FiringAnim; // 0x4b0(0x08)
	struct UImage* MedicalImg; // 0x4b8(0x08)
	struct UImage* ArmorImg; // 0x4c0(0x08)
	struct UMaterialInstanceDynamic* MedicalImgMID; // 0x4c8(0x08)
	struct UMaterialInstanceDynamic* ArmorImgMID; // 0x4d0(0x08)
	struct UWidgetAnimation* CallForHelpAnimation; // 0x4d8(0x08)
	struct UWidgetAnimation* Anim_SpeakWave; // 0x4e0(0x08)
	struct UImage* UltraImg; // 0x4e8(0x08)
	struct UCanvasPanel* UltraSkillCanvas; // 0x4f0(0x08)
	float LastTimeLowerTick; // 0x4f8(0x04)
	float LowerTickInterval; // 0x4fc(0x04)
	char pad_500[0x8]; // 0x500(0x08)
	struct UInventoryUseItemManager* UseItemManager; // 0x508(0x08)
	enum class EDFMGamePlayMode CurGamePlayMode; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	struct TWeakObjectPtr<struct ADFMPlayerState> DFMPSForThis; // 0x514(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> DFMCharacterForThis; // 0x51c(0x08)
	char pad_524[0x4]; // 0x524(0x04)
	struct FTeamMemberInfo CoorTeamMemberInfo; // 0x528(0x40)
	char pad_568[0x8]; // 0x568(0x08)
	bool bIsLocalPlayer; // 0x570(0x01)
	char pad_571[0x37]; // 0x571(0x37)
	float ArmourEachSection; // 0x5a8(0x04)
	float BloodBarPlayBkgAnimThreshold; // 0x5ac(0x04)
	float BloodBarChangeColorThreshold; // 0x5b0(0x04)
	float LowHPAnimBloodThreshold; // 0x5b4(0x04)
	float LowHPAnimArmorThreshold; // 0x5b8(0x04)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	struct UCurveFloat* BloodBarDynamicPart_DecreaseCurve; // 0x5c0(0x08)
	float BloodBarDynamicPart_HoldTime; // 0x5c8(0x04)
	float BloodBarDynamicPart_DecreaseTime; // 0x5cc(0x04)
	bool BloodBarDynamicPart_CurColorIsReduce; // 0x5d0(0x01)
	bool BloodBarDynamicPart_InDynamic; // 0x5d1(0x01)
	char pad_5D2[0x2]; // 0x5d2(0x02)
	float BloodBarDynamicPart_InDynamicTime; // 0x5d4(0x04)
	float BloodBarDynamicPart_HPReduceFrom; // 0x5d8(0x04)
	float BloodBarDynamicPart_HPReduceTo; // 0x5dc(0x04)
	float BloodBarDynamicPart_HPCur; // 0x5e0(0x04)
	float ArmorBarDynamicPart_ArmorCur; // 0x5e4(0x04)
	char pad_5E8[0xc]; // 0x5e8(0x0c)
	bool bShowTalkingCanvas; // 0x5f4(0x01)
	bool bIsMicOpen; // 0x5f5(0x01)
	bool bIsSpeaking; // 0x5f6(0x01)
	bool bIsMuted; // 0x5f7(0x01)
	bool bStateSetByGM; // 0x5f8(0x01)
	bool bPlayerNameCoveredByGM; // 0x5f9(0x01)
	bool bIsWatchingFight; // 0x5fa(0x01)
	char pad_5FB[0x9]; // 0x5fb(0x09)
	float CallForHelpCD; // 0x604(0x04)
	char pad_608[0x8]; // 0x608(0x08)

	void UpdatePlayerStateDynamic(float InDeltaTime); // Function DFMGameHud.DFHDPlayerNameHUDView.UpdatePlayerStateDynamic // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFVehicleBaseView
// Size: 0x570 (Inherited: 0x550)
class UDFVehicleBaseView : public ULuaUIBaseView {
public:

	struct AGPCharacter* LocalCharacter; // 0x550(0x08)
	struct ADFMVehicleBase* OwnerVehicle; // 0x558(0x08)
	char pad_560[0x10]; // 0x560(0x10)

	void Refresh(); // Function DFMGameHud.DFVehicleBaseView.Refresh // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFPlayerInfoCardView
// Size: 0x3c8 (Inherited: 0x388)
class UDFPlayerInfoCardView : public UBaseUIView {
public:

	uint64_t CurPlayerUin; // 0x388(0x08)
	struct FText CurPlayerName; // 0x390(0x18)
	struct UDFNamedSlot* PlayerInfoCardSlot; // 0x3a8(0x08)
	struct FName PlayerInfoCardSlot_Name; // 0x3b0(0x08)
	struct UHeroCardLuaBaseWidget* PlayerInfoCard; // 0x3b8(0x08)
	struct FName PlayerInfoCard_Name; // 0x3c0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMActionCommonProgressBar
// Size: 0x3f8 (Inherited: 0x388)
class UDFMActionCommonProgressBar : public UBaseUIView {
public:

	struct UMobileDraggableButton* DraggableProgressBar; // 0x388(0x08)
	struct UTextBlock* ProgressNum; // 0x390(0x08)
	struct UTextBlock* ActionName; // 0x398(0x08)
	struct UProgressBar* ProgressBar; // 0x3a0(0x08)
	struct UButton* CloseBtn; // 0x3a8(0x08)
	struct UCanvasPanel* RootCanvas; // 0x3b0(0x08)
	bool InvUpdatePercent; // 0x3b8(0x01)
	bool bCustomSetPercentText; // 0x3b9(0x01)
	char pad_3BA[0x3e]; // 0x3ba(0x3e)

	void UpdatePosition(); // Function DFMGameHud.DFMActionCommonProgressBar.UpdatePosition // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMBaseUIView
// Size: 0x3f8 (Inherited: 0x388)
class UDFMBaseUIView : public UBaseUIView {
public:

	struct TMap<struct FName, struct UWidgetAnimation*> AnimationsMap; // 0x388(0x50)
	char pad_3D8[0x10]; // 0x3d8(0x10)
	bool bIsShow; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	float OpenTime; // 0x3ec(0x04)
	float ShowTime; // 0x3f0(0x04)
	bool bAutoCollectAnimations; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)

	void Visible(); // Function DFMGameHud.DFMBaseUIView.Visible // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCustomLayoutStack
// Size: 0x48 (Inherited: 0x30)
class UDFMCustomLayoutStack : public UObject {
public:

	struct UDFMMobileCustomLayoutDraggableButton* DragBtn; // 0x30(0x08)
	struct TArray<struct UDFMCustomLayoutStack*> ChildStacks; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMFixedWeaponCommonView
// Size: 0x438 (Inherited: 0x388)
class UDFMFixedWeaponCommonView : public UBaseUIView {
public:

	struct UDFMWeaponOverHeatView* FixedWeapon_Overheat; // 0x388(0x08)
	struct UDFMFixedWeaponState* FixedWeapon_State; // 0x390(0x08)
	struct UCanvasPanel* MainPanel; // 0x398(0x08)
	struct TWeakObjectPtr<struct ADFMSceneWeapon> SenceWeapon; // 0x3a0(0x08)
	struct UButton* BtnExit; // 0x3a8(0x08)
	float LowHealth; // 0x3b0(0x04)
	char pad_3B4[0xc]; // 0x3b4(0x0c)
	struct UDFFixedWeaponBarHUD* FixedWeaponBarHUD; // 0x3c0(0x08)
	struct UUserWidget* BulletView; // 0x3c8(0x08)
	struct UUserWidget* ChangeclipView; // 0x3d0(0x08)
	struct UTextBlock* AmmoNumText; // 0x3d8(0x08)
	struct UImage* AmmoProgressImamge; // 0x3e0(0x08)
	struct UMaterialInstanceDynamic* AmmoProgressMID; // 0x3e8(0x08)
	char pad_3F0[0x10]; // 0x3f0(0x10)
	struct UDFRadialImage* ProcessTipsBarWidget; // 0x400(0x08)
	struct UUserWidget* ProcessTipWidget; // 0x408(0x08)
	struct UWidgetAnimation* CoolDownInAnim; // 0x410(0x08)
	struct UWidgetAnimation* CoolDownOutAnim; // 0x418(0x08)
	struct UWidgetAnimation* ChangeclipInAnim; // 0x420(0x08)
	struct UWidgetAnimation* ChangeclipoutAnim; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)

	void UpdateWeaponHealthPrecent(float InHealthPrecent, float InMaxHealth, float InCurrentHealth); // Function DFMGameHud.DFMFixedWeaponCommonView.UpdateWeaponHealthPrecent // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView_ItemBase
// Size: 0x5d0 (Inherited: 0x550)
class UDFMInteractorView_ItemBase : public ULuaUIBaseView {
public:

	char pad_550[0x8]; // 0x550(0x08)
	/*struct FMulticastInlineDelegate*/char OnEventFired[0x10]; // 0x558(0x10)
	/*struct FMulticastInlineDelegate*/char OnShowView[0x10]; // 0x568(0x10)
	struct FPotentialInteractorInfo CurrentInteractorInfo; // 0x578(0x40)
	struct TArray<struct UDFMInteractorView_ItemBaseSub*> ItemBaseSubWidgets; // 0x5b8(0x10)
	char pad_5C8[0x8]; // 0x5c8(0x08)

	void RefreshLayout(); // Function DFMGameHud.DFMInteractorView_ItemBase.RefreshLayout // (Native|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView_SubViewBase
// Size: 0x550 (Inherited: 0x550)
class UDFMInteractorView_SubViewBase : public ULuaUIBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorOperateSizeBox
// Size: 0x218 (Inherited: 0x1b8)
class UInteractorOperateSizeBox : public USizeBox {
public:

	struct FGameplayTag OperatorTag; // 0x1b8(0x08)
	bool bNeedProps; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct TArray<struct UInteractorSizeBoxExtraAppearance*> ExtraAppearances; // 0x1c8(0x10)
	struct FPotentialInteractorInfo CurrentInteractorInfo; // 0x1d8(0x40)

	void ButtonOnclick(); // Function DFMGameHud.InteractorOperateSizeBox.ButtonOnclick // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.LuaHudBaseView
// Size: 0x3a0 (Inherited: 0x388)
class ULuaHudBaseView : public UBaseUIView {
public:

	struct FString LuaPath; // 0x388(0x10)
	char pad_398[0x8]; // 0x398(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMWeaponBarBase
// Size: 0x2b8 (Inherited: 0x298)
class UDFMWeaponBarBase : public UUserWidget {
public:

	struct UWeaponHudModel* CurWeaponHudModel; // 0x298(0x08)
	/*struct FDelegate*/char OnWeaponClickedDelegate[0x10]; // 0x2a0(0x10)
	char pad_2B0[0x8]; // 0x2b0(0x08)

	void UpdateWeaponImage(); // Function DFMGameHud.DFMWeaponBarBase.UpdateWeaponImage // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMRightKeyTipsView
// Size: 0x388 (Inherited: 0x388)
class UDFMRightKeyTipsView : public UBaseUIView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFPCOperationItemView
// Size: 0x2a8 (Inherited: 0x298)
class UDFPCOperationItemView : public UUserWidget {
public:

	struct AInteractor_HackPC* CachedPC; // 0x298(0x08)
	struct UDFInteractorPCInfoView* CachedPCInfoView; // 0x2a0(0x08)

	void BP_PlayShowAni(); // Function DFMGameHud.DFPCOperationItemView.BP_PlayShowAni // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ExitHudDisplayView
// Size: 0x390 (Inherited: 0x388)
class UExitHudDisplayView : public UBaseUIView {
public:

	char pad_388[0x8]; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.KillTipsLoopListItemWidget
// Size: 0x2e0 (Inherited: 0x298)
class UKillTipsLoopListItemWidget : public UUserWidget {
public:

	struct UCurveFloat* MovingCurve; // 0x298(0x08)
	bool bIsFinsh; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float DisplayTime; // 0x2a4(0x04)
	float CurTimer; // 0x2a8(0x04)
	char pad_2AC[0x34]; // 0x2ac(0x34)

	void SetHidden(); // Function DFMGameHud.KillTipsLoopListItemWidget.SetHidden // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorSizeBoxExtraAppearance
// Size: 0x30 (Inherited: 0x30)
class UInteractorSizeBoxExtraAppearance : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.LoadingViewBase
// Size: 0x2c0 (Inherited: 0x298)
class ULoadingViewBase : public UUserWidget {
public:

	/*struct FMulticastInlineDelegate*/char OnLoadingViewOnShow[0x10]; // 0x298(0x10)
	/*struct FMulticastInlineDelegate*/char OnLoadingViewDelayClose[0x10]; // 0x2a8(0x10)
	float TypeWriterSpeed; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)

	void SetPreShow(bool IsPreShow); // Function DFMGameHud.LoadingViewBase.SetPreShow // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MapBaseHUDController
// Size: 0x2e0 (Inherited: 0xb0)
class UMapBaseHUDController : public UBaseUIController {
public:

	char pad_B0[0x58]; // 0xb0(0x58)
	struct TArray<struct FMapItemInfo> MapItemInfos; // 0x108(0x10)
	struct FVector UVSwapAndReserve; // 0x118(0x0c)
	struct FVector WorldCenter; // 0x124(0x0c)
	struct FVector WorldExtent; // 0x130(0x0c)
	char pad_13C[0x1c]; // 0x13c(0x1c)
	struct TMap<int64_t, struct UPlayerBaseIconViewController*> NewPlayerIconViewControllerMap; // 0x158(0x50)
	struct TMap<int64_t, struct UPlayerDeathBaseIconController*> PlayerDeathViewControllerMap; // 0x1a8(0x50)
	struct TMap<struct UMapIconViewController*, struct UMapItemHUDView*> CustomMapIconCache; // 0x1f8(0x50)
	char pad_248[0x10]; // 0x248(0x10)
	struct UMapBaseHUDView* MapHUDView; // 0x258(0x08)
	int32_t IconIndex; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TArray<struct UCommonIconMapItemHUDController*> AvailableMarkEnemyControllerArr; // 0x268(0x10)
	struct TArray<struct UCommonIconMapItemHUDController*> UsingMarkEnemyControllerArr; // 0x278(0x10)
	struct TMap<uint64_t, struct FTimerHandle> CommonIconTimeHandleMap; // 0x288(0x50)
	struct UGPBattleFieldSystem* DFMBattleFieldSystem; // 0x2d8(0x08)

	void OnUnregisterActor(struct AActor* ChangedActor); // Function DFMGameHud.MapBaseHUDController.OnUnregisterActor // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MarkWindowHUDIconView
// Size: 0x2e8 (Inherited: 0x298)
class UMarkWindowHUDIconView : public UUserWidget {
public:

	int32_t CurrentTrackNum; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	bool bLocalPlayerMarked; // 0x2a0(0x01)
	char pad_2A1[0x2]; // 0x2a1(0x02)
	bool bIsInit; // 0x2a3(0x01)
	bool bIsOutScreen; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	float ArrowAngle; // 0x2a8(0x04)
	int32_t Distance; // 0x2ac(0x04)
	struct FVector2D AnchorCenterOffest; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct UCanvasPanel* ArrowRotationPanel; // 0x2c0(0x08)
	struct UTextBlock* DistTextWidget; // 0x2c8(0x08)
	struct UImage* MarkImg; // 0x2d0(0x08)
	float UpdateInterval; // 0x2d8(0x04)
	char pad_2DC[0xc]; // 0x2dc(0x0c)

	void InitIconImage(struct FSoftObjectPath& ImagePath, float InMaxIconSize, struct FLinearColor Color); // Function DFMGameHud.MarkWindowHUDIconView.InitIconImage // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerInfoHUDView
// Size: 0x4c8 (Inherited: 0x388)
class UPlayerInfoHUDView : public UBaseUIView {
public:

	struct UGPAttributeSetHealth* AttributeSet; // 0x388(0x08)
	struct UDFMHealthDataComponent* HealthData; // 0x390(0x08)
	struct UMiniManView* MiniManView; // 0x398(0x08)
	struct UPlayerBuffAnimView* MiniManNewBuffer; // 0x3a0(0x08)
	struct UButton* BTN_QuickHeal; // 0x3a8(0x08)
	struct UDFMTouchEventPanel* TouchPanel; // 0x3b0(0x08)
	struct UImage* StaminaHudImage; // 0x3b8(0x08)
	struct UScrollGridBox* Scroll_Grid_Box; // 0x3c0(0x08)
	float ChangeColorDeltaTime; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UGPStaminaDataComponent* CurrentStaminaDataComponent; // 0x3d0(0x08)
	struct FLinearColor StaminaLowColor; // 0x3d8(0x10)
	struct FLinearColor StaminaColorCQB; // 0x3e8(0x10)
	struct FLinearColor StaminaColor; // 0x3f8(0x10)
	float ElapsedTime; // 0x408(0x04)
	bool IsInTreatment; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	float LastHeadHealth; // 0x410(0x04)
	float LastThoraxHealth; // 0x414(0x04)
	float LastRightArmHealth; // 0x418(0x04)
	float LastLeftArmHealth; // 0x41c(0x04)
	float LastRightLegHealth; // 0x420(0x04)
	float LastLeftLegHealth; // 0x424(0x04)
	struct TArray<struct UBuffItemHUDView*> CharacterBuffItemArray; // 0x428(0x10)
	struct TArray<struct FBuffInfo4UI> CharacterBuffInfo; // 0x438(0x10)
	char pad_448[0x10]; // 0x448(0x10)
	struct ADFMCharacter* DFMCharacter; // 0x458(0x08)
	struct ADFMPlayerState* DFMPlayerState; // 0x460(0x08)
	char pad_468[0x60]; // 0x468(0x60)

	void UpdateStaminaHud(); // Function DFMGameHud.PlayerInfoHUDView.UpdateStaminaHud // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RouletteButton
// Size: 0x3a8 (Inherited: 0x388)
class URouletteButton : public UBaseUIView {
public:

	struct UImage* Image_434; // 0x388(0x08)
	struct UButton* Button_244; // 0x390(0x08)
	struct UOverlay* Overlay_1; // 0x398(0x08)
	enum class ERouletteActionType RouletteActionType; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ScoutMarkWidgetBase
// Size: 0x2a0 (Inherited: 0x298)
class UScoutMarkWidgetBase : public UUserWidget {
public:

	struct FVector2D HeadOffset; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_CommonBtn
// Size: 0x2d0 (Inherited: 0x298)
class USOLBigMapHUDView_CommonBtn : public UUserWidget {
public:

	struct UButton* Button_Marker; // 0x298(0x08)
	struct UTextBlock* DisplayTextBlock; // 0x2a0(0x08)
	struct UDFMCommonImage* Image_Marker; // 0x2a8(0x08)
	struct UWidget* Image_Base; // 0x2b0(0x08)
	bool bEnableHideLine; // 0x2b8(0x01)
	char pad_2B9[0x2]; // 0x2b9(0x02)
	bool bIsSelected; // 0x2bb(0x01)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UMapIconViewController* CurMapIconController; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)

	void OnSelectMapTarget(char MapSignTypeInt, struct FName& TargetName, struct UMapIconViewController* IconViewController); // Function DFMGameHud.SOLBigMapHUDView_CommonBtn.OnSelectMapTarget // (Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WeaponInputBase
// Size: 0x30 (Inherited: 0x30)
class UWeaponInputBase : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BigMapHUDView
// Size: 0x940 (Inherited: 0x770)
class UBigMapHUDView : public UMapBaseHUDView {
public:

	char pad_770[0x10]; // 0x770(0x10)
	struct UGPAudioEventAsset* MarkSoundEvent; // 0x780(0x08)
	char pad_788[0x20]; // 0x788(0x20)
	struct UScaleBox* BigMapCanvas; // 0x7a8(0x08)
	struct UCanvasPanel* BigMapPanel; // 0x7b0(0x08)
	struct UMobilePlayerInput* PlayerInput; // 0x7b8(0x08)
	struct UPlayerBaseItemView* PlayerMapItemBase; // 0x7c0(0x08)
	char pad_7C8[0x8]; // 0x7c8(0x08)
	struct UButton* CloseBtn; // 0x7d0(0x08)
	struct UButton* ScaleUpBtn; // 0x7d8(0x08)
	struct UButton* ScaleDownBtn; // 0x7e0(0x08)
	struct UButton* SignSelfBtn; // 0x7e8(0x08)
	struct UButton* MyPositionBtn; // 0x7f0(0x08)
	struct USlider* ScaleSlider; // 0x7f8(0x08)
	struct UDFCommonAddDecSlider* CommonAddDecSlider; // 0x800(0x08)
	char pad_808[0x1]; // 0x808(0x01)
	bool bSetCommonAddDecSlider; // 0x809(0x01)
	char pad_80A[0x2]; // 0x80a(0x02)
	float CurrentNormalizedScale; // 0x80c(0x04)
	float LastNormalizedScale; // 0x810(0x04)
	struct FVector2D CurrentScaleAnchor; // 0x814(0x08)
	float FingerLengthValue; // 0x81c(0x04)
	char pad_820[0x24]; // 0x820(0x24)
	bool preShouldDraw; // 0x844(0x01)
	bool preShouldDrawIcon; // 0x845(0x01)
	char pad_846[0x2]; // 0x846(0x02)
	float OutTouchDis; // 0x848(0x04)
	bool bTouchOut; // 0x84c(0x01)
	char pad_84D[0x27]; // 0x84d(0x27)
	bool bUseSmoothScale; // 0x874(0x01)
	char pad_875[0x3]; // 0x875(0x03)
	float SmoothScaleTime; // 0x878(0x04)
	bool bIsInSmoothScale; // 0x87c(0x01)
	char pad_87D[0x3]; // 0x87d(0x03)
	float TimeToSmoothScale; // 0x880(0x04)
	float TimeToSmoothScaleUsed; // 0x884(0x04)
	float ExpectNormalizedScale; // 0x888(0x04)
	float SmoothFromNormalizedScale; // 0x88c(0x04)
	char pad_890[0x68]; // 0x890(0x68)
	struct UButton* SendDetectorBtn; // 0x8f8(0x08)
	struct UButton* ClearDetectorBtn; // 0x900(0x08)
	char pad_908[0x8]; // 0x908(0x08)
	struct FName UIAudio_MapClose; // 0x910(0x08)
	char pad_918[0x8]; // 0x918(0x08)
	float ChangeScaleSensity; // 0x920(0x04)
	char pad_924[0x4]; // 0x924(0x04)
	struct TArray<struct AMapMultiFloorVolume*> MultiFloorVolumeArr; // 0x928(0x10)
	struct USOLBigMapHUDView_ContractTipsBtn* WBP_Map_ContractTipsBtn; // 0x938(0x08)

	void UpdateTLogData(enum class EBigMapOperateType OperateType, int32_t AccNum); // Function DFMGameHud.BigMapHUDView.UpdateTLogData // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MiniMapHUDView
// Size: 0xc38 (Inherited: 0x770)
class UMiniMapHUDView : public UMapBaseHUDView {
public:

	char pad_770[0x40]; // 0x770(0x40)
	struct UCanvasPanel* MiniMapPanel; // 0x7b0(0x08)
	struct UButton* Btn; // 0x7b8(0x08)
	float SnapToBoundarySafeRatio; // 0x7c0(0x04)
	char pad_7C4[0xc]; // 0x7c4(0x0c)
	struct TArray<float> ZoomRateArr; // 0x7d0(0x10)
	char pad_7E0[0xc]; // 0x7e0(0x0c)
	float DistanceForUpdate; // 0x7ec(0x04)
	char pad_7F0[0x10]; // 0x7f0(0x10)
	float ForceDrawTileBasedMapTime; // 0x800(0x04)
	float DFHDMiniMapIconScale; // 0x804(0x04)
	struct ADFMHudLevelSubsystem* HudLevelSubsystem; // 0x808(0x08)
	char pad_810[0x20]; // 0x810(0x20)
	/*struct TSet<struct UMapItemHUDView*>*/char InvisibleItemSet[0x50]; // 0x830(0x50)
	struct UCanvasPanel* IconLayer_Lowest; // 0x880(0x08)
	struct UCanvasPanel* IconLayer_Base; // 0x888(0x08)
	struct UCanvasPanel* IconLayer_Line; // 0x890(0x08)
	bool bEnableIndicate; // 0x898(0x01)
	char pad_899[0x3]; // 0x899(0x03)
	float IndicatorDuration_Hide; // 0x89c(0x04)
	float IndicatorDuration_Sneaking; // 0x8a0(0x04)
	float IndicatorDuration_Alert; // 0x8a4(0x04)
	float IndicatorDuration_Fight; // 0x8a8(0x04)
	char pad_8AC[0x4]; // 0x8ac(0x04)
	struct UMiniMapHUDView_MapTips* WBP_MiniMap_Tips_Top; // 0x8b0(0x08)
	struct UMiniMapHUDView_MapTips* WBP_MiniMap_Tips_Middle; // 0x8b8(0x08)
	char pad_8C0[0x68]; // 0x8c0(0x68)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x928(0x50)
	struct UWidgetAnimation* Anima_in; // 0x978(0x08)
	struct UWidgetAnimation* Anima_Loop; // 0x980(0x08)
	struct UWidgetAnimation* Anima_out; // 0x988(0x08)
	char pad_990[0x20]; // 0x990(0x20)
	struct UDFMMobileCustomLayoutDraggableButton* DraggableButton; // 0x9b0(0x08)
	struct TMap<struct FString, struct UMapItemHUDView*> ExitMapItemMap; // 0x9b8(0x50)
	/*struct TSet<struct UMapItemHUDView*>*/char HasLoadedExitItems[0x50]; // 0xa08(0x50)
	struct FName UIAudio_MapOpen; // 0xa58(0x08)
	char pad_A60[0x10]; // 0xa60(0x10)
	struct UInstancedIconWidget* InstancedIconWidget; // 0xa70(0x08)
	struct FName InstancedIconWidgetName; // 0xa78(0x08)
	char pad_A80[0x7c]; // 0xa80(0x7c)
	int32_t MaxNumInstancedIcon; // 0xafc(0x04)
	char pad_B00[0x8]; // 0xb00(0x08)
	struct UClientSolSetting* ClientSetting; // 0xb08(0x08)
	struct UMiniMapHUDView_Compasses* MiniMapCompasses; // 0xb10(0x08)
	char pad_B18[0x18]; // 0xb18(0x18)
	struct UTexture2D* SplineAreaAtlas; // 0xb30(0x08)
	struct UInstancedSplineAreaWidget* InstancedSplineAreaWidget; // 0xb38(0x08)
	char pad_B40[0x4]; // 0xb40(0x04)
	struct FName InstancedSplineAreaWidgetName; // 0xb44(0x08)
	char pad_B4C[0x8]; // 0xb4c(0x08)
	struct FLinearColor OutGlitchEffectParam; // 0xb54(0x10)
	struct FLinearColor InGlitchEffectParam; // 0xb64(0x10)
	char pad_B74[0x1c]; // 0xb74(0x1c)
	struct UMiniMap_ShieldedArea* MiniMap_ShieldedArea; // 0xb90(0x08)
	char pad_B98[0x8]; // 0xb98(0x08)
	struct TMap<int32_t, int32_t> SOLLevelMap; // 0xba0(0x50)
	struct UCanvasPanel* CanvasPanel_SOLLevel; // 0xbf0(0x08)
	struct UTextBlock* TextBlock_SOLLevel; // 0xbf8(0x08)
	char pad_C00[0x8]; // 0xc00(0x08)
	struct USOLTimeLineComponnet* TimeLineEventComponent; // 0xc08(0x08)
	struct UMapInfoSystem* MapInfoSystem; // 0xc10(0x08)
	struct TArray<struct UMapLocationNameViewController*> MapLocationNameViewControllers; // 0xc18(0x10)
	struct AActor* BaseCharacter; // 0xc28(0x08)
	struct UDFMBattleFieldSystem* BattleFieldSystem; // 0xc30(0x08)

	void UpdateBattleFieldCurMapScale(); // Function DFMGameHud.MiniMapHUDView.UpdateBattleFieldCurMapScale // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityDetectorMapItemHUDView
// Size: 0x3f8 (Inherited: 0x3f8)
class UAbilityDetectorMapItemHUDView : public UMapItemHUDView {
public:


	void UpdateMarkerType(enum class EGPQuestActionMarkerType Type); // Function DFMGameHud.AbilityDetectorMapItemHUDView.UpdateMarkerType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityRobotMapItemHUDView
// Size: 0x428 (Inherited: 0x3f8)
class UAbilityRobotMapItemHUDView : public UMapItemHUDView {
public:

	struct UCanvasPanel* DFCanvasPanel_Default; // 0x3f8(0x08)
	struct UImage* DFMImage_Icon; // 0x400(0x08)
	char pad_408[0x20]; // 0x408(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AdjustableMapItemBase
// Size: 0x420 (Inherited: 0x3f8)
class UAdjustableMapItemBase : public UMapItemHUDView {
public:

	char pad_3F8[0x28]; // 0x3f8(0x28)

	void OnMiniMapClipUpdate(struct FVector2D& MiniMapCenterAbsolutePos, float& MiniMapPixelRadius); // Function DFMGameHud.AdjustableMapItemBase.OnMiniMapClipUpdate // (Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AlliesIconHUDView
// Size: 0x400 (Inherited: 0x3f8)
class UAlliesIconHUDView : public UMapItemHUDView {
public:

	struct UWidgetSwitcher* AllySwitcher; // 0x3f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BattlefieldPlayerDeathItemView
// Size: 0x408 (Inherited: 0x3f8)
class UBattlefieldPlayerDeathItemView : public UMapItemHUDView {
public:

	struct UCanvasPanel* DFCanvasPanel_Default; // 0x3f8(0x08)
	struct UImage* BaseImg; // 0x400(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerBaseItemView
// Size: 0x450 (Inherited: 0x3f8)
class UPlayerBaseItemView : public UMapItemHUDView {
public:

	struct UImage* ViewAngleImg; // 0x3f8(0x08)
	struct UImage* PublicItem; // 0x400(0x08)
	struct UImage* ArrowImg; // 0x408(0x08)
	struct UTextBlock* PlayerNum; // 0x410(0x08)
	struct UImage* AbilityImg; // 0x418(0x08)
	char pad_420[0x8]; // 0x420(0x08)
	float AdditionIconRotateAngle; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UPlayerBaseIconViewController* PlayerIconCtrl; // 0x430(0x08)
	char pad_438[0x18]; // 0x438(0x18)

	void BP_LocalCharacterShowIn(); // Function DFMGameHud.PlayerBaseItemView.BP_LocalCharacterShowIn // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BigMapQuestTipHUDView
// Size: 0x460 (Inherited: 0x3f8)
class UBigMapQuestTipHUDView : public UMapItemHUDView {
public:

	struct UTextBlock* QuestNameText; // 0x3f8(0x08)
	struct UButton* CheckButton; // 0x400(0x08)
	int64_t QuestID; // 0x408(0x08)
	struct FName QuestIDName; // 0x410(0x08)
	int64_t QuestObjectionID; // 0x418(0x08)
	float ObjectionTimeLimit; // 0x420(0x04)
	enum class ESOLQuestState QuestState; // 0x424(0x01)
	enum class ESOLQuestObjectionState QuestObjState; // 0x425(0x01)
	bool bCurrentTracked; // 0x426(0x01)
	bool bHasComplete; // 0x427(0x01)
	bool bHasInited; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct USOLPlayerQuestComponent* PlayerQuestComponent; // 0x430(0x08)
	struct FBigMapQuestTipData BigMapQuestTipData; // 0x438(0x28)

	void OnQuestUpdate(int64_t UpdateQuestId, char ObjType); // Function DFMGameHud.BigMapQuestTipHUDView.OnQuestUpdate // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ImageMapItemHUDView
// Size: 0x470 (Inherited: 0x3f8)
class UImageMapItemHUDView : public UMapItemHUDView {
public:

	struct UCanvasPanel* DFCanvasPanel_Default; // 0x3f8(0x08)
	struct UImage* DFMImage_Icon; // 0x400(0x08)
	char pad_408[0x38]; // 0x408(0x38)
	struct UDFMCommonHover* WBP_CommonHoverBase; // 0x440(0x08)
	char pad_448[0x8]; // 0x448(0x08)
	struct UMapItemRangeViewController* QuestObjRangeController; // 0x450(0x08)
	char pad_458[0x18]; // 0x458(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CommonIconMapItemHUDView
// Size: 0x440 (Inherited: 0x3f8)
class UCommonIconMapItemHUDView : public UMapItemHUDView {
public:

	struct UImage* PublicItemIcon; // 0x3f8(0x08)
	char pad_400[0x28]; // 0x400(0x28)
	struct UCommonIconMapItemHUDController* CommonIconController; // 0x428(0x08)
	struct FVector2D EnemyRedPointImgSize; // 0x430(0x08)
	float IdentifyScaleInMiniMap; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CommonMiniMapItemHUDView
// Size: 0x400 (Inherited: 0x3f8)
class UCommonMiniMapItemHUDView : public UMapItemHUDView {
public:

	char pad_3F8[0x8]; // 0x3f8(0x08)

	void SetMarkerTrackItem(struct TArray<int32_t>& TeammateIndexArr, bool bHasSelf); // Function DFMGameHud.CommonMiniMapItemHUDView.SetMarkerTrackItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MapItemRippleHUDView
// Size: 0x430 (Inherited: 0x3f8)
class UMapItemRippleHUDView : public UMapItemHUDView {
public:

	struct UCanvasPanel* DFCanvasPanel_Default; // 0x3f8(0x08)
	struct UImage* DFMImage_InnerCircle; // 0x400(0x08)
	struct UImage* DFMImage_OuterCircle; // 0x408(0x08)
	struct UImage* DFImagefx; // 0x410(0x08)
	char pad_418[0x10]; // 0x418(0x10)
	float RippleAnimationTime; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)

	void PlayRippleAnimationInner(); // Function DFMGameHud.MapItemRippleHUDView.PlayRippleAnimationInner // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MapLineHUDView
// Size: 0x400 (Inherited: 0x3f8)
class UMapLineHUDView : public UMapItemHUDView {
public:

	struct UImage* ImagePlayerLine; // 0x3f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MapPlayer2SignLineView
// Size: 0x468 (Inherited: 0x3f8)
class UMapPlayer2SignLineView : public UMapItemHUDView {
public:

	struct UMaterialInterface* MiniMapSDFLineMat; // 0x3f8(0x08)
	struct UMaterialInstanceDynamic* MiniMapSDFLineMatInst; // 0x400(0x08)
	char pad_408[0x40]; // 0x408(0x40)
	float BigMapLineAlpha; // 0x448(0x04)
	float MiniMapLineAlpha; // 0x44c(0x04)
	float BigMapLineWidth; // 0x450(0x04)
	float MiniMapLineWidth; // 0x454(0x04)
	bool bUseNewMethod; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	float NewMethodBigMapLineWidth; // 0x45c(0x04)
	struct UImage* ImagePlayerLine; // 0x460(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MissionMapItemHUDView
// Size: 0x3f8 (Inherited: 0x3f8)
class UMissionMapItemHUDView : public UMapItemHUDView {
public:


	void UpdateMarkerType(enum class EGPQuestActionMarkerType Type); // Function DFMGameHud.MissionMapItemHUDView.UpdateMarkerType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkingBaseItemView
// Size: 0x3f8 (Inherited: 0x3f8)
class UPlayerMarkingBaseItemView : public UMapItemHUDView {
public:


	void GetAnimation(); // Function DFMGameHud.PlayerMarkingBaseItemView.GetAnimation // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterSummonsMapItemHUDView
// Size: 0x438 (Inherited: 0x3f8)
class UCharacterSummonsMapItemHUDView : public UMapItemHUDView {
public:

	struct UMapItemHUDView* WBP_MapMarkerBase; // 0x3f8(0x08)
	struct UCanvasPanel* ViewAnglePanel; // 0x400(0x08)
	struct UImage* ImpendingDeathProgress; // 0x408(0x08)
	struct UMaterialInstanceDynamic* ImpendingDeathMID; // 0x410(0x08)
	struct UWidget* ArrowRotation; // 0x418(0x08)
	char pad_420[0x8]; // 0x420(0x08)
	struct UMapMarkerEngineerCarViewController* MapMarkerEngineerCarViewController; // 0x428(0x08)
	enum class ESlateVisibility WaveEffectVisibility; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)

	void BP_HandlePlayerStatusChanged(enum class EMapPlayerIconState InState); // Function DFMGameHud.CharacterSummonsMapItemHUDView.BP_HandlePlayerStatusChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AILabCharacterMapIconHUDView
// Size: 0x410 (Inherited: 0x3f8)
class UAILabCharacterMapIconHUDView : public UMapItemHUDView {
public:

	struct UDFTextBlock* Desc; // 0x3f8(0x08)
	struct UImage* HeadIcon; // 0x400(0x08)
	struct UAILabCharacterIconViewController* AILabCharacterIconViewController; // 0x408(0x08)

	void OnAILabCharacterInfoChange(); // Function DFMGameHud.AILabCharacterMapIconHUDView.OnAILabCharacterInfoChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLEventMarkerHUDView
// Size: 0x438 (Inherited: 0x3f8)
class USOLEventMarkerHUDView : public UMapItemHUDView {
public:

	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct UCanvasPanel* DFCanvasPanel_Default; // 0x400(0x08)
	struct UCanvasPanel* ArrowRotation; // 0x408(0x08)
	struct UImage* PublicItem; // 0x410(0x08)
	struct UImage* Image_EdgeTracking; // 0x418(0x08)
	char pad_420[0xc]; // 0x420(0x0c)
	float OriginalSize; // 0x42c(0x04)
	float RippleIntervalTime; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)

	void UpdateView(); // Function DFMGameHud.SOLEventMarkerHUDView.UpdateView // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLEventRangeHUDView
// Size: 0x400 (Inherited: 0x3f8)
class USOLEventRangeHUDView : public UMapItemHUDView {
public:

	struct UCustomPolygonWidget* CustomPolygon; // 0x3f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLPlayerDeathItemHudView
// Size: 0x428 (Inherited: 0x3f8)
class USOLPlayerDeathItemHudView : public UMapItemHUDView {
public:

	struct UCanvasPanel* DFCanvasPanel_Default; // 0x3f8(0x08)
	struct UImage* BaseImg; // 0x400(0x08)
	struct UImage* ImpendingDeathProgress; // 0x408(0x08)
	struct UMaterialInstanceDynamic* ImpendingDeathMID; // 0x410(0x08)
	char pad_418[0x8]; // 0x418(0x08)
	struct AGPSceneActorReplicator* SceneActorReplicator; // 0x420(0x08)

	void BP_SetDeathType(int32_t InDeathType); // Function DFMGameHud.SOLPlayerDeathItemHudView.BP_SetDeathType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLWishItemMarkerHUDView
// Size: 0x3f8 (Inherited: 0x3f8)
class USOLWishItemMarkerHUDView : public UMapItemHUDView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.TextMapItemHUDView
// Size: 0x408 (Inherited: 0x3f8)
class UTextMapItemHUDView : public UMapItemHUDView {
public:

	struct UTextBlock* LocationText; // 0x3f8(0x08)
	bool bSynchronizeText; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.TimeLineEventMapHUDView
// Size: 0x418 (Inherited: 0x3f8)
class UTimeLineEventMapHUDView : public UMapItemHUDView {
public:

	char pad_3F8[0x2]; // 0x3f8(0x02)
	bool bInAnim; // 0x3fa(0x01)
	char pad_3FB[0x5]; // 0x3fb(0x05)
	struct UImage* EventIcon; // 0x400(0x08)
	struct UImage* RangeIcon; // 0x408(0x08)
	struct UCanvasPanel* MiniMapArrowCanvas; // 0x410(0x08)

	void SetRangeEffect(float RangeRadius, bool bShowEventIcon); // Function DFMGameHud.TimeLineEventMapHUDView.SetRangeEffect // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityEngineerVehicleHudView
// Size: 0x408 (Inherited: 0x400)
class UAbilityEngineerVehicleHudView : public UMobileControlPadView {
public:

	struct TWeakObjectPtr<struct AActor> OwnerVehicle; // 0x400(0x08)

	void OnOwnerOperaterBeDamaged(float Damage, struct FTakeHitInfo& TakeHitInfo); // Function DFMGameHud.AbilityEngineerVehicleHudView.OnOwnerOperaterBeDamaged // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponViewBase
// Size: 0x410 (Inherited: 0x400)
class UDFMMobileWeaponViewBase : public UMobileControlPadView {
public:

	struct UWeaponHudModel* CurWeaponHudModel; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)

	void OnAmmoCountChanged(); // Function DFMGameHud.DFMMobileWeaponViewBase.OnAmmoCountChanged // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMAssassinateButtonView
// Size: 0x410 (Inherited: 0x400)
class UDFMAssassinateButtonView : public UMobileControlPadView {
public:

	float CurHoldOnTime; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)
	struct UDFMMobileCustomLayoutDraggableButton* DragBtnActionType1; // 0x408(0x08)

	void UpdateViewStatus(bool bShow); // Function DFMGameHud.DFMAssassinateButtonView.UpdateViewStatus // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCommercializationButtonView
// Size: 0x438 (Inherited: 0x400)
class UDFMCommercializationButtonView : public UMobileControlPadView {
public:

	struct UDFImage* ButtonImage; // 0x400(0x08)
	struct UDFImage* FourArrows; // 0x408(0x08)
	struct UDFImage* MoveIcon; // 0x410(0x08)
	struct UDFRadialImage* CooldownProgress; // 0x418(0x08)
	float IconRadius; // 0x420(0x04)
	float OpacityNormal; // 0x424(0x04)
	float OpacityActivated; // 0x428(0x04)
	char pad_42C[0xc]; // 0x42c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMedicalSyringeButtonView
// Size: 0x418 (Inherited: 0x400)
class UDFMMedicalSyringeButtonView : public UMobileControlPadView {
public:

	/*struct FDelegate*/char OnClickMedicalButtonView[0x10]; // 0x400(0x10)
	struct UButton* QTEBtn; // 0x410(0x08)

	void UpdateViewStatus(bool bShow); // Function DFMGameHud.DFMMedicalSyringeButtonView.UpdateViewStatus // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileBowControlView
// Size: 0x408 (Inherited: 0x400)
class UDFMMobileBowControlView : public UMobileControlPadView {
public:

	enum class EBowControlType ControlType; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)

	void OnButtonClicked(); // Function DFMGameHud.DFMMobileBowControlView.OnButtonClicked // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCarryBodyButtonView
// Size: 0x4e0 (Inherited: 0x400)
class UDFMMobileCarryBodyButtonView : public UMobileControlPadView {
public:

	struct UMobileDraggableButton* CarryBodyBtn; // 0x400(0x08)
	struct UDFMTipsCommonButton* CarryBodyIcon; // 0x408(0x08)
	struct UPaperSprite* CarryBodyImage; // 0x410(0x08)
	struct UPaperSprite* DropBodyImage; // 0x418(0x08)
	struct UPaperSprite* CarryBoxImage; // 0x420(0x08)
	struct UPaperSprite* DropBoxImage; // 0x428(0x08)
	struct UPaperSprite* PullOutArrowImage; // 0x430(0x08)
	struct UPaperSprite* FireFringImage; // 0x438(0x08)
	struct UPaperSprite* ZoyaSwarmsImage; // 0x440(0x08)
	struct FText CarryBodyText; // 0x448(0x18)
	struct FText CarryBoxText; // 0x460(0x18)
	struct FText DropBodyText; // 0x478(0x18)
	struct FText PullOutArrowText; // 0x490(0x18)
	struct FText FireFringText; // 0x4a8(0x18)
	struct FText ZoyaSwarmsText; // 0x4c0(0x18)
	char pad_4D8[0x8]; // 0x4d8(0x08)

	void UpdateViewType(); // Function DFMGameHud.DFMMobileCarryBodyButtonView.UpdateViewType // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCrouchButtonView
// Size: 0x420 (Inherited: 0x400)
class UDFMMobileCrouchButtonView : public UMobileControlPadView {
public:

	struct UMobileDraggableButton* DragBtnCrouch; // 0x400(0x08)
	struct UDFMCommonActionButtonView* CommonView; // 0x408(0x08)
	struct UPaperSprite* CrouchImageIcon; // 0x410(0x08)
	struct UPaperSprite* SlidingTackleImageIcon; // 0x418(0x08)

	void UpdateCrouchImage(int32_t Flag); // Function DFMGameHud.DFMMobileCrouchButtonView.UpdateCrouchImage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileSkillItem
// Size: 0x580 (Inherited: 0x400)
class UDFMMobileSkillItem : public UMobileControlPadView {
public:

	int32_t currentSkil; // 0x400(0x04)
	int32_t currentSkilEntityID; // 0x404(0x04)
	int32_t currentSkilID; // 0x408(0x04)
	bool bPlayOutAim; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	struct FTimerHandle OutAnimHandler; // 0x410(0x08)
	struct FSkillUIInfo LastUIInfo; // 0x418(0x78)
	int32_t bUIVisible; // 0x490(0x04)
	enum class EMobileControlButtonType MobileControlButtonType; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	struct FName ProgressParameterName; // 0x498(0x08)
	struct FName UseCDProgressParameterName; // 0x4a0(0x08)
	struct FVector2D UseCDProgressParameterValue; // 0x4a8(0x08)
	bool InvalidateEveryTick; // 0x4b0(0x01)
	bool LastActivated; // 0x4b1(0x01)
	char pad_4B2[0x6]; // 0x4b2(0x06)
	struct UDFMTipsCommonButton* CommonBtn; // 0x4b8(0x08)
	struct UImage* AbilityIconImage; // 0x4c0(0x08)
	struct UImage* CanUseImage; // 0x4c8(0x08)
	struct UTextBlock* CooldownText; // 0x4d0(0x08)
	struct UDFRadialImage* CooldownProcess; // 0x4d8(0x08)
	struct UTextBlock* TipsText; // 0x4e0(0x08)
	struct UTextBlock* ShortNameText; // 0x4e8(0x08)
	struct UTextBlock* WeaponSlotNumText; // 0x4f0(0x08)
	struct UTextBlock* WeaponMaxSlotNumText; // 0x4f8(0x08)
	struct UImage* WeaponImageSlotNumText; // 0x500(0x08)
	struct UImage* BackImage; // 0x508(0x08)
	struct UImage* UseCDCooldownProcess; // 0x510(0x08)
	struct UProgressBar* CooldownProcessBar; // 0x518(0x08)
	enum class ESkillUISlot UISlot; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	int32_t iUsingType; // 0x524(0x04)
	int32_t bCharging; // 0x528(0x04)
	int32_t bCoding; // 0x52c(0x04)
	int32_t iArmType; // 0x530(0x04)
	int32_t bIsItem; // 0x534(0x04)
	int32_t iNumType; // 0x538(0x04)
	enum class ESkillNumType EnumType; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	int32_t iAmmoNum; // 0x540(0x04)
	int32_t iSlotNum; // 0x544(0x04)
	int32_t iMaxNum; // 0x548(0x04)
	int32_t iShowNum; // 0x54c(0x04)
	int32_t iPercentNg; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct UUserWidget* WBP_ControllerButtonNotAvailable; // 0x558(0x08)
	struct UUserWidget* WBP_ControllerButtonSkillCar; // 0x560(0x08)
	char pad_568[0x8]; // 0x568(0x08)
	float timerRate; // 0x570(0x04)
	char pad_574[0xc]; // 0x574(0x0c)

	void UpdateItemVisible(bool entityVisible); // Function DFMGameHud.DFMMobileSkillItem.UpdateItemVisible // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileEyeButtonView
// Size: 0x438 (Inherited: 0x400)
class UDFMMobileEyeButtonView : public UMobileControlPadView {
public:

	struct UMobileDraggableButton* EyeMoveBtn; // 0x400(0x08)
	struct UImage* BigBackground; // 0x408(0x08)
	struct UImage* DirectionImage; // 0x410(0x08)
	struct UImage* Arrows; // 0x418(0x08)
	struct UDFMCommonActionButtonView* CommonView; // 0x420(0x08)
	float ShowDirectionImageSize; // 0x428(0x04)
	float EyeCanvasPanelRadius; // 0x42c(0x04)
	char pad_430[0x8]; // 0x430(0x08)

	void OnEyeBtnPressMoved(struct FVector2D BeginLocation, struct FVector2D Location); // Function DFMGameHud.DFMMobileEyeButtonView.OnEyeBtnPressMoved // (Final|Native|Protected|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileJumpButtonView
// Size: 0x430 (Inherited: 0x400)
class UDFMMobileJumpButtonView : public UMobileControlPadView {
public:

	struct UMobileDraggableButton* DragBtnJump; // 0x400(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x408(0x08)
	struct UDFMCommonActionButtonView* CommonView; // 0x410(0x08)
	struct UPaperSprite* JumpImageIcon; // 0x418(0x08)
	struct UPaperSprite* ParachuteImageIcon; // 0x420(0x08)
	struct UPaperSprite* CancelParachuteImageIcon; // 0x428(0x08)

	void UpdateJumpImage(int32_t Flag); // Function DFMGameHud.DFMMobileJumpButtonView.UpdateJumpImage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileMarkingButtonView
// Size: 0x4b8 (Inherited: 0x400)
class UDFMMobileMarkingButtonView : public UMobileControlPadView {
public:

	struct UCanvasPanel* MarkingCanvasPanel; // 0x400(0x08)
	struct UButton* DragBtnMark; // 0x408(0x08)
	struct UDFMCommonActionButtonView* CommonView; // 0x410(0x08)
	struct UImage* BigBackground; // 0x418(0x08)
	struct UImage* Arrows; // 0x420(0x08)
	struct UDFRadialImage* ProgressImage; // 0x428(0x08)
	struct UImage* DirectionImage; // 0x430(0x08)
	struct UImage* TouchPointImage; // 0x438(0x08)
	struct UPaperSprite* CancelImage; // 0x440(0x08)
	struct UPaperSprite* NormalImage; // 0x448(0x08)
	struct UPaperSprite* RespondImage; // 0x450(0x08)
	struct UPaperSprite* HasRespondedImage; // 0x458(0x08)
	struct TMap<enum class EMarkingLocationType, struct UPaperSprite*> LocationTypeIconMap; // 0x460(0x50)
	char pad_4B0[0x8]; // 0x4b0(0x08)

	void SetBtnIconImage(int32_t InBtnType); // Function DFMGameHud.DFMMobileMarkingButtonView.SetBtnIconImage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileMovementButtonView_New
// Size: 0x5d0 (Inherited: 0x400)
class UDFMMobileMovementButtonView_New : public UMobileControlPadView {
public:

	struct UCanvasPanel* MovingCanvasPanel; // 0x400(0x08)
	struct UMobileDraggableButton* JoystickMoveButton; // 0x408(0x08)
	struct UMobileDraggableButton* JoystickMoveRunAreaBtn; // 0x410(0x08)
	struct UImage* SprintPanelOnJoystickMoveButton; // 0x418(0x08)
	struct UImage* JoystickMoveDouDou; // 0x420(0x08)
	struct UImage* JoystickMoveDirectionImage; // 0x428(0x08)
	struct UImage* JoystickMoveDouDouArea; // 0x430(0x08)
	struct UImage* JoystickMoveSilenceArea; // 0x438(0x08)
	struct UImage* JoystickMoveRunArea; // 0x440(0x08)
	bool bIsCQB; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct UImage* SprintHoveredImage; // 0x450(0x08)
	struct UImage* SprintImageBackground; // 0x458(0x08)
	struct UImage* SprintImage; // 0x460(0x08)
	struct UImage* ArrowImage1; // 0x468(0x08)
	struct UImage* ArrowImage2; // 0x470(0x08)
	struct UImage* ArrowImage3; // 0x478(0x08)
	struct UPaperSprite* MoveDouDouAreaLockNormal; // 0x480(0x08)
	struct UPaperSprite* MoveDouDouAreaLockRed; // 0x488(0x08)
	struct UPaperSprite* MoveDouDouAreaStatic; // 0x490(0x08)
	struct UPaperSprite* MoveDouDouNormal; // 0x498(0x08)
	struct UPaperSprite* MoveDouDouGreen; // 0x4a0(0x08)
	struct UPaperSprite* MoveDouDouRed; // 0x4a8(0x08)
	struct UPaperSprite* LockImageRed; // 0x4b0(0x08)
	struct UPaperSprite* LockImageNormal; // 0x4b8(0x08)
	struct UPaperSprite* SprintUIAnimRed; // 0x4c0(0x08)
	struct UPaperSprite* SprintUIAnimGreen; // 0x4c8(0x08)
	struct UPaperSprite* SprintHoveredImageRed; // 0x4d0(0x08)
	struct UPaperSprite* SprintHoveredImageGreen; // 0x4d8(0x08)
	struct UPaperSprite* SprintImageBackgroundRed; // 0x4e0(0x08)
	struct UPaperSprite* SprintImageBackgroundGreen; // 0x4e8(0x08)
	struct UPaperSprite* SprintImageNormal; // 0x4f0(0x08)
	struct UPaperSprite* SprintToProne; // 0x4f8(0x08)
	struct UPaperSprite* SprintOverLoad; // 0x500(0x08)
	struct UPaperSprite* ArrowRed; // 0x508(0x08)
	struct UPaperSprite* ArrowGreen; // 0x510(0x08)
	struct UPaperSprite* DirectionImageRed; // 0x518(0x08)
	struct UPaperSprite* DirectionImageGreen; // 0x520(0x08)
	struct UPaperSprite* MoveDouDouAreaSprint; // 0x528(0x08)
	struct UGPSprintComponent* CurrentSprintComponent; // 0x530(0x08)
	bool bShowProneToSprint; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	struct FLinearColor StaminaLowColor; // 0x53c(0x10)
	struct FLinearColor StaminaColorCQB; // 0x54c(0x10)
	struct FLinearColor StaminaColor; // 0x55c(0x10)
	float DirectionImageShowSize; // 0x56c(0x04)
	float SilentWalkTriggerSize; // 0x570(0x04)
	float PhysicalScaleMin; // 0x574(0x04)
	float PhysicalScaleMax; // 0x578(0x04)
	float MoveDouDouHighRenderOpacity; // 0x57c(0x04)
	float MoveDouDouLowRenderOpacity; // 0x580(0x04)
	bool bLockMove; // 0x584(0x01)
	bool bHoveredSprintMoveButton; // 0x585(0x01)
	char pad_586[0x2]; // 0x586(0x02)
	struct FName AnimName_ArrowAnim; // 0x588(0x08)
	struct FName AnimName_RunAnim; // 0x590(0x08)
	char pad_598[0x38]; // 0x598(0x38)

	void UpdateLockMoveButtonStatus(bool bShow); // Function DFMGameHud.DFMMobileMovementButtonView_New.UpdateLockMoveButtonStatus // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobilePeekButtonView
// Size: 0x440 (Inherited: 0x400)
class UDFMMobilePeekButtonView : public UMobileControlPadView {
public:

	struct UMobileDraggableButton* DragBtnLeftPeek; // 0x400(0x08)
	struct UMobileDraggableButton* DragBtnRightPeek; // 0x408(0x08)
	struct UDFMCommonActionButtonView* CommonView_Left; // 0x410(0x08)
	struct UDFMCommonActionButtonView* CommonView_Right; // 0x418(0x08)
	struct UImage* TouchImage_LeftPeek; // 0x420(0x08)
	struct UImage* TouchImage_RightPeek; // 0x428(0x08)
	char pad_430[0xc]; // 0x430(0x0c)
	bool CachebCanLeanPeek; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)

	void SetRightPeekFingerIndex(struct FPointerEvent& InTouchEvent); // Function DFMGameHud.DFMMobilePeekButtonView.SetRightPeekFingerIndex // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileProneButtonView
// Size: 0x410 (Inherited: 0x400)
class UDFMMobileProneButtonView : public UMobileControlPadView {
public:

	struct UMobileDraggableButton* DragBtnProne; // 0x400(0x08)
	struct UDFMCommonActionButtonView* CommonView; // 0x408(0x08)

	void RefreshButtonStatus(); // Function DFMGameHud.DFMMobileProneButtonView.RefreshButtonStatus // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileRangeScopeView
// Size: 0x4f0 (Inherited: 0x400)
class UDFMMobileRangeScopeView : public UMobileControlPadView {
public:

	int32_t CurIndex; // 0x400(0x04)
	int32_t NextIndex; // 0x404(0x04)
	bool bEnableAnim; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UDFMMobileCustomLayoutDraggableButton* MultiplierBtn; // 0x410(0x08)
	int32_t CacheZoomRateIndex; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct UGPInputChangeScopeLogic* InputLogic; // 0x420(0x08)
	struct TArray<struct FScopeInfoItem> AllScopeInfoItems; // 0x428(0x10)
	struct TArray<struct FScopeInfoItem> ValidScopeInfoItems; // 0x438(0x10)
	int32_t CurZoomRateIndex; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FSoftObjectPath SideScopeImage; // 0x450(0x18)
	struct FSoftObjectPath MainScopeWithoutTopImage; // 0x468(0x18)
	struct FSoftObjectPath MainScopeWithTopImage; // 0x480(0x18)
	struct FSoftObjectPath TopScopeImage; // 0x498(0x18)
	struct FSoftObjectPath SlopingScopeImage; // 0x4b0(0x18)
	struct UDFImage* Image_Icon; // 0x4c8(0x08)
	struct TArray<float> OnlySideAimingZoomRates; // 0x4d0(0x10)
	int32_t OnlySideAimingCurIndex; // 0x4e0(0x04)
	int32_t OnlySideAimingNextIndex; // 0x4e4(0x04)
	bool bIsOnlySideAiming; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)

	void UpdateView(); // Function DFMGameHud.DFMMobileRangeScopeView.UpdateView // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileSilentWalkButtonView
// Size: 0x490 (Inherited: 0x400)
class UDFMMobileSilentWalkButtonView : public UMobileControlPadView {
public:

	struct UCanvasPanel* SilentWalkCanvas; // 0x400(0x08)
	struct UImage* BigBackground; // 0x408(0x08)
	struct UImage* BackgroundArrow; // 0x410(0x08)
	struct UImage* DirectionImage; // 0x418(0x08)
	struct UDFMCommonActionButtonView* CommonView; // 0x420(0x08)
	float DefaultStartMoveTimeNeed; // 0x428(0x04)
	float DirectionImageShowSize; // 0x42c(0x04)
	char pad_430[0x60]; // 0x430(0x60)

	void OnSilentWalkModeChange(); // Function DFMGameHud.DFMMobileSilentWalkButtonView.OnSilentWalkModeChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileSkillView
// Size: 0x4d8 (Inherited: 0x400)
class UDFMMobileSkillView : public UMobileControlPadView {
public:

	bool bUseInput; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct TArray<enum class EDFMGamePlayMode> InVisibleMode; // 0x408(0x10)
	struct UButton* SkillItem_ButtonSlot_Left; // 0x418(0x08)
	struct TMap<enum class ESkillUISlot, struct UDFMMobileSkillItem*> AllSkills; // 0x420(0x50)
	struct UDFMMobileSkillItem* SkillItem_Pressed; // 0x470(0x08)
	char pad_478[0x10]; // 0x478(0x10)
	struct TMap<int32_t, struct UDFMMobileSkillItem*> SkillFingerMap; // 0x488(0x50)

	void UseSkill(struct UDFMMobileSkillItem* Widget, bool Pressed, int32_t InFigerIndex); // Function DFMGameHud.DFMMobileSkillView.UseSkill // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileSonicView
// Size: 0x460 (Inherited: 0x400)
class UDFMMobileSonicView : public UMobileControlPadView {
public:

	int32_t Actiavted; // 0x400(0x04)
	char pad_404[0xc]; // 0x404(0x0c)
	struct TMap<struct FName, struct FSonicInfoData> SonicInfoDataMap; // 0x410(0x50)

	void UpdateSonicWidget(struct USonicInfoWidget* SonicWidget, struct FBuffDetectorUpdateData UpdateData); // Function DFMGameHud.DFMMobileSonicView.UpdateSonicWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileSuperSprintButtonView
// Size: 0x428 (Inherited: 0x400)
class UDFMMobileSuperSprintButtonView : public UMobileControlPadView {
public:

	struct UMobileDraggableButton* DragBtnHoldRun; // 0x400(0x08)
	struct UWidgetAnimation* WBP_ControllerButtonHoldRun_in; // 0x408(0x08)
	struct UWidgetAnimation* WBP_ControllerButtonHoldRun_out; // 0x410(0x08)
	char pad_418[0x4]; // 0x418(0x04)
	struct TWeakObjectPtr<struct AGPCharacter> CHARACTER; // 0x41c(0x08)
	char pad_424[0x4]; // 0x424(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleSkillButton
// Size: 0x820 (Inherited: 0x400)
class UDFMMobileVehicleSkillButton : public UMobileControlPadView {
public:

	enum class EMobileControlButtonType ControlButtonType; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UDFMCommonActionButtonView* IconRoot; // 0x408(0x08)
	struct UUserWidget* CountRoot; // 0x410(0x08)
	struct UUserWidget* LoadingRoot; // 0x418(0x08)
	struct UDFRadialImage* LoadingProgress; // 0x420(0x08)
	struct UTextBlock* LoadingText; // 0x428(0x08)
	struct UTextBlock* Count; // 0x430(0x08)
	struct UTextBlock* SkillName; // 0x438(0x08)
	struct UWidget* LightIconWidget; // 0x440(0x08)
	struct UWidget* DisabledIconWidget; // 0x448(0x08)
	struct UPaperSprite* DefaultIconImage; // 0x450(0x08)
	char pad_458[0x3b0]; // 0x458(0x3b0)
	struct UDFMVehicleSkillInstance* SKillInstance; // 0x808(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* SkillBtn; // 0x810(0x08)
	struct AGPCharacter* SkillUser; // 0x818(0x08)

	void OnUseSkill(); // Function DFMGameHud.DFMMobileVehicleSkillButton.OnUseSkill // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleWeaponButton
// Size: 0x448 (Inherited: 0x400)
class UDFMMobileVehicleWeaponButton : public UMobileControlPadView {
public:

	struct UDFMCommonActionButtonView* IconRoot; // 0x400(0x08)
	struct UUserWidget* CountRoot; // 0x408(0x08)
	struct UUserWidget* LoadingRoot; // 0x410(0x08)
	struct UDFRadialImage* LoadingProgress; // 0x418(0x08)
	struct UTextBlock* LoadingText; // 0x420(0x08)
	struct UTextBlock* Count; // 0x428(0x08)
	struct UTextBlock* WeaponName; // 0x430(0x08)
	struct UPaperSprite* DefaultIconImage; // 0x438(0x08)
	char pad_440[0x8]; // 0x440(0x08)

	void SetButtonTargetLayout(struct FString TargetLayout, struct UDFMMobileCustomLayoutDraggableButton* targetButton); // Function DFMGameHud.DFMMobileVehicleWeaponButton.SetButtonTargetLayout // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileXPPChangeView
// Size: 0x430 (Inherited: 0x400)
class UDFMMobileXPPChangeView : public UMobileControlPadView {
public:

	struct UDFMMobileCustomLayoutDraggableButton* DragBtnXPP; // 0x400(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x408(0x08)
	struct UDFMCommonActionButtonView* CommonView; // 0x410(0x08)
	struct UPaperSprite* FPPImage; // 0x418(0x08)
	struct UPaperSprite* TPPImage; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)

	void SetXPPButtonTargetLayout(struct FString TargetLayout); // Function DFMGameHud.DFMMobileXPPChangeView.SetXPPButtonTargetLayout // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMNetworkStatusView
// Size: 0x4d8 (Inherited: 0x400)
class UDFMNetworkStatusView : public UMobileControlPadView {
public:

	bool bIsLowSignal; // 0x400(0x01)
	bool bIsLowPower; // 0x401(0x01)
	bool bIsWiFiActive; // 0x402(0x01)
	char pad_403[0x5]; // 0x403(0x05)
	/*struct TSoftObjectPtr<UPaperSprite>*/char RefImage[0x28]; // 0x408(0x28)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char SignalIcons[0x10]; // 0x430(0x10)
	struct FName NormalSignalTextStyle; // 0x440(0x08)
	struct FName LowSignalTextStyle; // 0x448(0x08)
	struct FLinearColor LowPowerColor; // 0x450(0x10)
	struct FLinearColor HighPowerColor; // 0x460(0x10)
	struct UImage* wtSignalImg; // 0x470(0x08)
	struct UTextBlock* wtLatencyText; // 0x478(0x08)
	struct UTextBlock* wtMatchInfoText; // 0x480(0x08)
	struct UTextBlock* wtPingTypeText; // 0x488(0x08)
	struct UCanvasPanel* DFCanvasPanel_1; // 0x490(0x08)
	struct UProgressBar* wtBatteryBar; // 0x498(0x08)
	struct UImage* wtBatteryImg; // 0x4a0(0x08)
	float WiFiDetectTime; // 0x4a8(0x04)
	bool EnableHighRefreshRTTTime; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	float RefreshRTTTimeCountHigh; // 0x4b0(0x04)
	float RefreshRTTTimeCountLow; // 0x4b4(0x04)
	char pad_4B8[0x20]; // 0x4b8(0x20)

	void RefreshRTTView(float Value); // Function DFMGameHud.DFMNetworkStatusView.RefreshRTTView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMParachuteView
// Size: 0x450 (Inherited: 0x400)
class UDFMParachuteView : public UMobileControlPadView {
public:

	struct UMobileDraggableButton* ParachuteButton; // 0x400(0x08)
	struct UDFMTipsCommonButton* ParachuteIcon; // 0x408(0x08)
	struct UPaperSprite* OpenImage; // 0x410(0x08)
	struct UPaperSprite* CloseImage; // 0x418(0x08)
	struct FText OpenParachuteText; // 0x420(0x18)
	struct FText CloseParachuteText; // 0x438(0x18)

	void UpdateViewStatus(bool bShow, bool bShowCancel, bool bShowWarning); // Function DFMGameHud.DFMParachuteView.UpdateViewStatus // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMWeaponInspectButtonView
// Size: 0x408 (Inherited: 0x400)
class UDFMWeaponInspectButtonView : public UMobileControlPadView {
public:

	struct UMobileDraggableButton* WeaponInspectButton; // 0x400(0x08)

	void OnButtonClicked(); // Function DFMGameHud.DFMWeaponInspectButtonView.OnButtonClicked // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMWeaponQuicklySwitchButtonView
// Size: 0x430 (Inherited: 0x400)
class UDFMWeaponQuicklySwitchButtonView : public UMobileControlPadView {
public:

	char pad_400[0x8]; // 0x400(0x08)
	struct UMobileDraggableButton* WeaponQuicklySwitchButton; // 0x408(0x08)
	struct ADFMGameState* DFMGameState; // 0x410(0x08)
	char pad_418[0x18]; // 0x418(0x18)

	void OnNotifyActiveWeaponChanged(struct AWeaponBase* PreWeapon, struct AWeaponBase* NewWeapon); // Function DFMGameHud.DFMWeaponQuicklySwitchButtonView.OnNotifyActiveWeaponChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMZiplineButtonView
// Size: 0x420 (Inherited: 0x400)
class UDFMZiplineButtonView : public UMobileControlPadView {
public:

	struct UButton* ZiplineBtn; // 0x400(0x08)
	struct UDFMTipsCommonButton* ZiplineIcon; // 0x408(0x08)
	struct UPaperSprite* GetOnIconImage; // 0x410(0x08)
	struct UPaperSprite* GetOffIconImage; // 0x418(0x08)

	void UpdateViewStatus(bool bShow, bool bShowCancelZipline); // Function DFMGameHud.DFMZiplineButtonView.UpdateViewStatus // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.IntroZiplineButtonView
// Size: 0x410 (Inherited: 0x400)
class UIntroZiplineButtonView : public UMobileControlPadView {
public:

	struct UButton* ZiplineBtn; // 0x400(0x08)
	struct UDFMCommonActionButtonView* ZiplineIcon; // 0x408(0x08)

	void OnBtnClicked(); // Function DFMGameHud.IntroZiplineButtonView.OnBtnClicked // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MobileBowCancelChargeControlView
// Size: 0x400 (Inherited: 0x400)
class UMobileBowCancelChargeControlView : public UMobileControlPadView {
public:


	void OnButtonClicked(); // Function DFMGameHud.MobileBowCancelChargeControlView.OnButtonClicked // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.TelescopeButtonHUD
// Size: 0x430 (Inherited: 0x400)
class UTelescopeButtonHUD : public UMobileControlPadView {
public:

	struct UMobileDraggableButton* TelescopeMoveBtn; // 0x400(0x08)
	struct UImage* TelescopeImage; // 0x408(0x08)
	struct FLinearColor PressedColor; // 0x410(0x10)
	struct FLinearColor NormalColor; // 0x420(0x10)

	void OnTelescopeButtonClicked(); // Function DFMGameHud.TelescopeButtonHUD.OnTelescopeButtonClicked // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityLockerCommonItem
// Size: 0x2e0 (Inherited: 0x2a0)
class UAbilityLockerCommonItem : public UAbilityLockerItemBase {
public:

	struct UWidgetAnimation* StartLock; // 0x2a0(0x08)
	struct UWidgetAnimation* LockEnd; // 0x2a8(0x08)
	struct UUserWidget* WBP_SpecialAiming_mark; // 0x2b0(0x08)
	struct AActor* Target; // 0x2b8(0x08)
	char pad_2C0[0x10]; // 0x2c0(0x10)
	struct UGPAbilityCommonLockerData* LockerData; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityLockerLaserPointerItem
// Size: 0x2e0 (Inherited: 0x2a0)
class UAbilityLockerLaserPointerItem : public UAbilityLockerItemBase {
public:

	struct UWidgetAnimation* StartLock; // 0x2a0(0x08)
	struct UWidgetAnimation* LockEnd; // 0x2a8(0x08)
	struct UUserWidget* WBP_SpecialAiming_mark; // 0x2b0(0x08)
	struct AActor* Target; // 0x2b8(0x08)
	char pad_2C0[0x10]; // 0x2c0(0x10)
	struct UGPAbilityLaserPointerLockerData* LockerData; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AIMsgMarkWidget
// Size: 0x2b0 (Inherited: 0x2a0)
class UAIMsgMarkWidget : public UAIMsgWidgetBase {
public:

	struct UCanvasPanel* ArrowRotation; // 0x2a0(0x08)
	struct UImage* Exclamation; // 0x2a8(0x08)

	void UpdateMsgMarkColor(enum class EAIMsgType AIMsgType); // Function DFMGameHud.AIMsgMarkWidget.UpdateMsgMarkColor // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AIMsgVisionDirWidget
// Size: 0x2a0 (Inherited: 0x2a0)
class UAIMsgVisionDirWidget : public UAIMsgWidgetBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AmmoRouletteHDHUDView
// Size: 0x510 (Inherited: 0x400)
class UAmmoRouletteHDHUDView : public UDFControllerRouletteBase {
public:

	struct UDFMWeaponDataComponentAmmo_Item* DCAmmo_Item; // 0x400(0x08)
	struct TArray<struct FInventoryItemInfo> AmmoSortedList; // 0x408(0x10)
	struct UReloadRouletteItemView* WBP_ReloadRouletteItem_New_1; // 0x418(0x08)
	struct UReloadRouletteItemView* WBP_ReloadRouletteItem_New_2; // 0x420(0x08)
	struct UReloadRouletteItemView* WBP_ReloadRouletteItem_New_3; // 0x428(0x08)
	struct UReloadRouletteItemView* WBP_ReloadRouletteItem_New_4; // 0x430(0x08)
	struct UReloadRouletteItemView* WBP_ReloadRouletteItem_New_5; // 0x438(0x08)
	struct UUserWidget* WBP_ReloadRouletteText_New_1; // 0x440(0x08)
	struct UUserWidget* WBP_ReloadRouletteText_New_2; // 0x448(0x08)
	struct UUserWidget* WBP_ReloadRouletteText_New_3; // 0x450(0x08)
	struct UUserWidget* WBP_ReloadRouletteText_New_4; // 0x458(0x08)
	struct UUserWidget* WBP_ReloadRouletteText_New_5; // 0x460(0x08)
	struct UTextBlock* wtCenterText; // 0x468(0x08)
	struct UImage* SelectedImg; // 0x470(0x08)
	struct UImage* SliderImg; // 0x478(0x08)
	struct UImage* TouchPoint; // 0x480(0x08)
	struct UImage* DebugTouchPoint; // 0x488(0x08)
	bool bEnableDebugPoint; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct UGPInputReloadLogic* ReloadLogic; // 0x498(0x08)
	bool bPressedCancelRouletteInCurPressing; // 0x4a0(0x01)
	bool bUseRadiusRatio; // 0x4a1(0x01)
	char pad_4A2[0x2]; // 0x4a2(0x02)
	float ForbidRadiusRatio; // 0x4a4(0x04)
	float InnerRadiusRatio; // 0x4a8(0x04)
	float OuterRadiusRatio; // 0x4ac(0x04)
	int32_t LastRouletteIndex; // 0x4b0(0x04)
	int32_t LastSortedAmmoIndex; // 0x4b4(0x04)
	struct TArray<struct UUserWidget*> ReloadRouletteTextItems; // 0x4b8(0x10)
	struct TArray<struct UTextBlock*> ReloadRouletteTexts; // 0x4c8(0x10)
	struct TArray<struct UDFMImage*> ReloadRouletteImages; // 0x4d8(0x10)
	struct TArray<struct UReloadRouletteItemView*> ReloadRouletteItems; // 0x4e8(0x10)
	struct FText AmmoInfoText; // 0x4f8(0x18)

	void SetPendingAmmoType(); // Function DFMGameHud.AmmoRouletteHDHUDView.SetPendingAmmoType // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFCommercializationRoulette
// Size: 0x448 (Inherited: 0x400)
class UDFCommercializationRoulette : public UDFControllerRouletteBase {
public:

	struct UCommonRouletteView* CommonRoulette; // 0x400(0x08)
	struct UCommonRouletteInfoView* CommonRouletteInfoHD; // 0x408(0x08)
	struct UCommonRouletteInfoView* CommonRouletteInfoMobile; // 0x410(0x08)
	struct TArray<struct FItemData> Items; // 0x418(0x10)
	struct FText CancelRouletteText; // 0x428(0x18)
	char pad_440[0x8]; // 0x440(0x08)

	void OnPlayerHeroIdChanged(uint64_t Uin, uint64_t HeroID); // Function DFMGameHud.DFCommercializationRoulette.OnPlayerHeroIdChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MarkingRouletteHUDView
// Size: 0x4a0 (Inherited: 0x400)
class UMarkingRouletteHUDView : public UDFControllerRouletteBase {
public:

	struct UCommonRouletteView* WBP_CommonRoulette; // 0x400(0x08)
	struct UCommonRouletteInfoView* WBP_CommonRouletteInfo; // 0x408(0x08)
	struct TArray<struct FSoftObjectPath> MarkIconImages; // 0x410(0x10)
	struct TMap<enum class EMarkingLocationType, struct FText> NameTextMap; // 0x420(0x50)
	float IconOpacitySelected; // 0x470(0x04)
	float IconOpacityUnselected; // 0x474(0x04)
	struct TArray<struct UCommonRouletteItemInnerContentView*> CommonRouletteContentViews; // 0x478(0x10)
	char pad_488[0x8]; // 0x488(0x08)
	struct UGPInputMarkingLogic* MarkingLogic; // 0x490(0x08)
	enum class EMarkingLocationType SelectedType; // 0x498(0x01)
	bool bPressedCancelRouletteInCurPressing; // 0x499(0x01)
	char pad_49A[0x2]; // 0x49a(0x02)
	float CachedSettingOpacity; // 0x49c(0x04)

	void OnMarkingBtnUp(); // Function DFMGameHud.MarkingRouletteHUDView.OnMarkingBtnUp // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ScopeRouletteView
// Size: 0x508 (Inherited: 0x400)
class UScopeRouletteView : public UDFControllerRouletteBase {
public:

	bool bPressedCancelRouletteInCurPressing; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	int32_t CacheZoomRateIndex; // 0x404(0x04)
	struct UWeaponHudController* HudController; // 0x408(0x08)
	bool bUseRadiusRatio; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float ForbidRadiusRatio; // 0x414(0x04)
	float InnerRadiusRatio; // 0x418(0x04)
	float OuterRadiusRatio; // 0x41c(0x04)
	struct UCommonRouletteView* WBP_CommonRoulette; // 0x420(0x08)
	struct UCommonRouletteInfoView* WBP_CommonRouletteInfo; // 0x428(0x08)
	int32_t RouletteSize; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UDFTextBlock* ScopeName; // 0x438(0x08)
	struct UImage* DebugTouchPoint; // 0x440(0x08)
	bool bEnableDebugPoint; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct UGPInputChangeScopeLogic* InputLogic; // 0x450(0x08)
	int32_t CacheRouletteIndex; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct TArray<struct FScopeInfoItem> ScopeInfoItems; // 0x460(0x10)
	struct TArray<struct FSoftObjectPath> ItemImages; // 0x470(0x10)
	struct TArray<struct FText> ItemTexts; // 0x480(0x10)
	struct FSoftObjectPath SideScopeImage; // 0x490(0x18)
	struct FSoftObjectPath MainScopeWithoutTopImage; // 0x4a8(0x18)
	struct FSoftObjectPath MainScopeWithTopImage; // 0x4c0(0x18)
	struct FSoftObjectPath TopScopeImage; // 0x4d8(0x18)
	struct FSoftObjectPath SlopingScopeImage; // 0x4f0(0x18)

	void SwitchToScope(/*struct TScriptInterface<IRangeScopeInterface> NewCurScope, int32_t ScopeZoomRateIndex, int32_t GlobalZoomRateIndex*/); // Function DFMGameHud.ScopeRouletteView.SwitchToScope // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerDeathBaseIconController
// Size: 0x350 (Inherited: 0x350)
class UPlayerDeathBaseIconController : public UPlayerBaseIconViewController {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BattlefieldPlayerIconViewController
// Size: 0x470 (Inherited: 0x350)
class UBattlefieldPlayerIconViewController : public UPlayerBaseIconViewController {
public:

	char pad_350[0x120]; // 0x350(0x120)

	void OnPlayerArmedForceChanged(); // Function DFMGameHud.BattlefieldPlayerIconViewController.OnPlayerArmedForceChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.OBPlayerViewController
// Size: 0x350 (Inherited: 0x350)
class UOBPlayerViewController : public UPlayerBaseIconViewController {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLPlayerIconViewController
// Size: 0x480 (Inherited: 0x350)
class USOLPlayerIconViewController : public UPlayerBaseIconViewController {
public:

	char pad_350[0x130]; // 0x350(0x130)

	void OnBlueprintPlunderInfoUpdate(struct FBlueprintPlunderInfo& BlueprintPlunderInfo); // Function DFMGameHud.SOLPlayerIconViewController.OnBlueprintPlunderInfoUpdate // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CaptureGameView
// Size: 0x338 (Inherited: 0x2d0)
class UCaptureGameView : public UMiniGameViewBase {
public:

	struct TArray<struct FCaptureTextInfo> CaptureInfos; // 0x2d0(0x10)
	struct UCanvasPanel* CaptureOutPanel; // 0x2e0(0x08)
	struct FSoftClassPath CaptureTextClass; // 0x2e8(0x18)
	struct TArray<float> InterpSpeeds; // 0x300(0x10)
	float CaptureDeviation; // 0x310(0x04)
	int32_t MaxCaptureErrorNum; // 0x314(0x04)
	float CaptureFailedTickDelay; // 0x318(0x04)
	float LimitTime; // 0x31c(0x04)
	struct UTextBlock* TimeText; // 0x320(0x08)
	int32_t CurrentCaptureIdx; // 0x328(0x04)
	int32_t CurrentCaptureErrorTimes; // 0x32c(0x04)
	float DelayTimer; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)

	bool DoCapture(); // Function DFMGameHud.CaptureGameView.DoCapture // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ParkourGameView
// Size: 0x388 (Inherited: 0x2d0)
class UParkourGameView : public UMiniGameViewBase {
public:

	struct UCanvasPanel* Road; // 0x2d0(0x08)
	struct UCanvasPanel* RoadArea1; // 0x2d8(0x08)
	struct UCanvasPanel* RoadArea2; // 0x2e0(0x08)
	struct UCanvasPanel* SuccessPanel; // 0x2e8(0x08)
	struct UCanvasPanel* FailedPanel; // 0x2f0(0x08)
	struct UImage* CHARACTER; // 0x2f8(0x08)
	/*struct TSoftClassPtr<UObject>*/char ObstacleWidget[0x28]; // 0x300(0x28)
	/*struct TSoftClassPtr<UObject>*/char RoadWidget[0x28]; // 0x328(0x28)
	float InterpSpeed; // 0x350(0x04)
	float CharacterMoveSpeed; // 0x354(0x04)
	int32_t CreateTimes; // 0x358(0x04)
	bool bAttachTop; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	struct FSoftObjectPath ObstacleTablePath; // 0x360(0x18)
	bool bCreateObstacleOneFirst; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	float ChangeWidth; // 0x37c(0x04)
	int32_t CurrentCreateTimes; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BattleFieldCharacterBloodBadHurItem
// Size: 0x38 (Inherited: 0x38)
class UBattleFieldCharacterBloodBadHurItem : public UCharacterBloodHandleBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterBloodBarHudItem
// Size: 0x38 (Inherited: 0x38)
class UCharacterBloodBarHudItem : public UCharacterBloodHandleBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CountDownReleaseMarkerWidget
// Size: 0x5b0 (Inherited: 0x588)
class UCountDownReleaseMarkerWidget : public UGameMarkerBaseWidget {
public:

	struct UDFMCountDownReleaseMarkerItem* CountDownReleaseMarkerItem; // 0x588(0x08)
	struct AInteractor_DoorBase* DoorBase; // 0x590(0x08)
	struct UTextBlock* DownCountDownText; // 0x598(0x08)
	struct UTextBlock* SideCountDownText; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DoorMarkerWidget
// Size: 0x5b0 (Inherited: 0x588)
class UDoorMarkerWidget : public UGameMarkerBaseWidget {
public:

	struct UTextBlock* DistanceText; // 0x588(0x08)
	struct UImage* IconImage; // 0x590(0x08)
	struct AInteractor_DoorBase* DoorBase; // 0x598(0x08)
	struct UDFMDoorMarkerItem* DoorMarkerItem; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.EngineerSonicTrapTriggerMarkWidget
// Size: 0x5e0 (Inherited: 0x588)
class UEngineerSonicTrapTriggerMarkWidget : public UGameMarkerBaseWidget {
public:

	struct UImage* IconImage; // 0x588(0x08)
	struct UImage* Image_SpreadFX; // 0x590(0x08)
	struct UImage* Image_SpreadFX_3; // 0x598(0x08)
	struct FVector2D DistTextTraceOffsetDefault; // 0x5a0(0x08)
	struct FVector2D ArrowOffsetNormal; // 0x5a8(0x08)
	struct FVector2D ArrowPivotNormal; // 0x5b0(0x08)
	struct UGPEngineerSonicTrapTriggerMarkItem* PlayerItemMarkerItem; // 0x5b8(0x08)
	char pad_5C0[0x20]; // 0x5c0(0x20)

	void BP_UpdateStyle(float Opacity, float size); // Function DFMGameHud.EngineerSonicTrapTriggerMarkWidget.BP_UpdateStyle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.GPMapMarkerWidget
// Size: 0x5b0 (Inherited: 0x588)
class UGPMapMarkerWidget : public UGameMarkerBaseWidget {
public:

	char pad_588[0x20]; // 0x588(0x20)
	struct UImage* IconImage; // 0x5a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.GPQuestMarkerWidget
// Size: 0x5f0 (Inherited: 0x588)
class UGPQuestMarkerWidget : public UGameMarkerBaseWidget {
public:

	struct UGPQuestMarkerItem* QuestMarkerItem; // 0x588(0x08)
	struct UInteractorManningComponent* InteractorManningComponent; // 0x590(0x08)
	char pad_598[0x20]; // 0x598(0x20)
	struct UImage* MarkImg; // 0x5b8(0x08)
	struct UTextBlock* DownCountDownText; // 0x5c0(0x08)
	struct UTextBlock* SideCountDownText; // 0x5c8(0x08)
	struct URadialImage* Image_ProcessBar; // 0x5d0(0x08)
	struct URadialImage* Image_ProcessBar_BG; // 0x5d8(0x08)
	char pad_5E0[0x10]; // 0x5e0(0x10)

	void BP_ShowQuestMarkerRight(bool bShowRight); // Function DFMGameHud.GPQuestMarkerWidget.BP_ShowQuestMarkerRight // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InterActorMarkerWidget
// Size: 0x6c0 (Inherited: 0x588)
class UInterActorMarkerWidget : public UGameMarkerBaseWidget {
public:

	struct UDFRadialImage* HealthBar; // 0x588(0x08)
	struct UDFImage* CoolDownProgressBar; // 0x590(0x08)
	struct UImage* CooldownProgressBarBg; // 0x598(0x08)
	struct UImage* IconImage; // 0x5a0(0x08)
	struct UDFImage* HealthBarBg; // 0x5a8(0x08)
	struct UTextBlock* NameInfoText; // 0x5b0(0x08)
	struct TMap<enum class EInteractorMarkerType, struct FMarkerUIInfo> InteractorMarkerTypeIconMap; // 0x5b8(0x50)
	struct FLinearColor NeutralColor; // 0x608(0x10)
	struct FLinearColor CampmateColor; // 0x618(0x10)
	struct FLinearColor TeammateColor; // 0x628(0x10)
	struct FLinearColor EnemyColor; // 0x638(0x10)
	char pad_648[0x8]; // 0x648(0x08)
	struct FMarkerUIInfo CurrentMarkerUIInfo; // 0x650(0x40)
	struct UGPInterActorMarkerItem* InterActorMarkerItem; // 0x690(0x08)
	char pad_698[0x28]; // 0x698(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.KillCamSelfMarker
// Size: 0x590 (Inherited: 0x588)
class UKillCamSelfMarker : public UGameMarkerBaseWidget {
public:

	struct UTextBlock* Text_PlayerName; // 0x588(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerFriendlyWidget
// Size: 0x740 (Inherited: 0x588)
class UPlayerMarkerFriendlyWidget : public UGameMarkerBaseWidget {
public:

	struct UImage* TeammateSN; // 0x588(0x08)
	struct UTextBlock* PlayerName; // 0x590(0x08)
	struct UImage* UnitIcon; // 0x598(0x08)
	struct UDFRadialImage* HealthProgressBar; // 0x5a0(0x08)
	struct UImage* HealthProgressBarBg; // 0x5a8(0x08)
	struct UDFBlurSlotReContainer* DFNamedSlotBlurPC1; // 0x5b0(0x08)
	struct UDFBlurSlotReContainer* DFNamedSlotBlurPC2; // 0x5b8(0x08)
	struct UUserWidget* WBP_ScreenMarkerMission_RippleS1; // 0x5c0(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x5c8(0x08)
	struct UDFBlurSlotReContainer* DFNamedSlot_BlurPC1_2; // 0x5d0(0x08)
	struct UDFBlurSlotReContainer* DFNamedSlot_BlurPC1; // 0x5d8(0x08)
	struct FLinearColor CampmateColor; // 0x5e0(0x10)
	struct FLinearColor TeammateColor; // 0x5f0(0x10)
	struct FVector ProneOffset; // 0x600(0x0c)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct TArray<struct UPaperSprite*> IconImageArray; // 0x610(0x10)
	struct UPaperSprite* BlueprintWeaponIconImage; // 0x620(0x08)
	struct FLinearColor BlueprintWeaponColor; // 0x628(0x10)
	struct FVector2D DistTextTraceOffsetDefault; // 0x638(0x08)
	struct FVector2D SmallIconOffset; // 0x640(0x08)
	struct FVector2D SmallIconScale; // 0x648(0x08)
	int32_t SmallIconId; // 0x650(0x04)
	float HealthPercentTime; // 0x654(0x04)
	char pad_658[0x4]; // 0x658(0x04)
	struct FVector2D DistTextWithoutNameTextPos; // 0x65c(0x08)
	struct FVector2D DistTextWithoutHeathBarPos; // 0x664(0x08)
	struct FVector2D DistTextWithoutHealthBarAndNamePos; // 0x66c(0x08)
	struct FVector2D NameTextWithoutHealthBarPos; // 0x674(0x08)
	struct FVector2D BubbleWithoutNameTextPos; // 0x67c(0x08)
	struct FVector2D BubbleWithoutDistPos; // 0x684(0x08)
	struct FVector2D BubbleWithoutHealthBarPos; // 0x68c(0x08)
	struct FVector2D BubbleWithoutHealthBarAndNamePos; // 0x694(0x08)
	struct FVector2D BubbleWithoutDistAndHealthBarPos; // 0x69c(0x08)
	struct FVector2D BubbleWithoutNameAndDistTextPos; // 0x6a4(0x08)
	struct FVector2D BubbleWithoutDistHealthBarAndNamePos; // 0x6ac(0x08)
	char pad_6B4[0x4]; // 0x6b4(0x04)
	struct ADFMPlayerState* MarkedCharacterPS; // 0x6b8(0x08)
	struct UDFMFriendMarkerItem* FriendMarkerItem; // 0x6c0(0x08)
	char pad_6C8[0x78]; // 0x6c8(0x78)

	void OnBFCharIsInRedeployChange(bool Change2IsInRedeploy, uint64_t InPlayerUin); // Function DFMGameHud.PlayerMarkerFriendlyWidget.OnBFCharIsInRedeployChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerDeathWidget
// Size: 0x7c0 (Inherited: 0x588)
class UPlayerMarkerDeathWidget : public UGameMarkerBaseWidget {
public:

	struct FLinearColor CampmateColor; // 0x588(0x10)
	struct FLinearColor TeammateColor; // 0x598(0x10)
	struct FLinearColor ProgressColorFirstDeath; // 0x5a8(0x10)
	struct FLinearColor ProgressColorPendingDeath; // 0x5b8(0x10)
	struct TMap<enum class ECharacterMarkerState, struct UPaperSprite*> IconMap; // 0x5c8(0x50)
	struct TArray<struct UPaperSprite*> CharacterIndexIcon; // 0x618(0x10)
	float TeammateSNDeadFontSize; // 0x628(0x04)
	struct FVector2D DistTextTraceOffsetDefault; // 0x62c(0x08)
	char pad_634[0x4]; // 0x634(0x04)
	struct UGPDeathMarkerItem* DeathMarkerItem; // 0x638(0x08)
	char pad_640[0x8c]; // 0x640(0x8c)
	float RescuePlayCDTime; // 0x6cc(0x04)
	struct UTextBlock* PlayerName; // 0x6d0(0x08)
	struct UImage* UnitIcon; // 0x6d8(0x08)
	struct UImage* UnitIcon_New_FX; // 0x6e0(0x08)
	struct UDFRadialImage* DeathProgress; // 0x6e8(0x08)
	struct UDFRadialImage* DeathProgress_New_FX; // 0x6f0(0x08)
	struct UImage* DFImage_FX_2; // 0x6f8(0x08)
	struct UImage* DFImage_FX; // 0x700(0x08)
	struct UWidgetAnimation* Cry_For_Help; // 0x708(0x08)
	struct UWidgetAnimation* Cry_For_Help_Loop; // 0x710(0x08)
	struct UWidgetAnimation* Cry_For_Help_GiveUp; // 0x718(0x08)
	struct TMap<enum class EImpendingDeathMarkerType, struct FLinearColor> ImpendingDeathMarkerColorMap; // 0x720(0x50)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char RescueAudioEventAsset[0x28]; // 0x770(0x28)
	float RescueAudioCD; // 0x798(0x04)
	char pad_79C[0xc]; // 0x79c(0x0c)
	struct UGPAudioEventAsset* CacheRescueAudioEventAsset; // 0x7a8(0x08)
	char pad_7B0[0x10]; // 0x7b0(0x10)

	void OnRescueLoopAnimEnd(); // Function DFMGameHud.PlayerMarkerDeathWidget.OnRescueLoopAnimEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerImpendingDeathWidget
// Size: 0x7f0 (Inherited: 0x588)
class UPlayerMarkerImpendingDeathWidget : public UGameMarkerBaseWidget {
public:

	struct FLinearColor CampmateColor; // 0x588(0x10)
	struct FLinearColor TeammateColor; // 0x598(0x10)
	struct FLinearColor ProgressColorFirstDeath; // 0x5a8(0x10)
	struct FLinearColor ProgressColorPendingDeath; // 0x5b8(0x10)
	struct TMap<enum class ECharacterMarkerState, struct UPaperSprite*> IconMap; // 0x5c8(0x50)
	struct TArray<struct UPaperSprite*> CharacterIndexIcon; // 0x618(0x10)
	float TeammateSNDeadFontSize; // 0x628(0x04)
	struct FVector2D DistTextTraceOffsetDefault; // 0x62c(0x08)
	char pad_634[0x4]; // 0x634(0x04)
	struct UGPImpendingDeathMarkerItem* ImpendingDeathMarkerItem; // 0x638(0x08)
	char pad_640[0x8c]; // 0x640(0x8c)
	float RescuePlayCDTime; // 0x6cc(0x04)
	char pad_6D0[0x10]; // 0x6d0(0x10)
	struct UTextBlock* PlayerName; // 0x6e0(0x08)
	struct UImage* UnitIcon; // 0x6e8(0x08)
	struct UImage* UnitIcon_New_FX; // 0x6f0(0x08)
	struct UDFRadialImage* DeathProgress; // 0x6f8(0x08)
	struct UDFRadialImage* DeathProgress_New_FX; // 0x700(0x08)
	struct UImage* DFImage_FX_2; // 0x708(0x08)
	struct UImage* DFImage_FX; // 0x710(0x08)
	struct UWidgetAnimation* Cry_For_Help; // 0x718(0x08)
	struct UWidgetAnimation* Cry_For_Help_Loop; // 0x720(0x08)
	struct UWidgetAnimation* Cry_For_Help_GiveUp; // 0x728(0x08)
	struct TMap<enum class EImpendingDeathMarkerType, struct FLinearColor> ImpendingDeathMarkerColorMap; // 0x730(0x50)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char RescueAudioEventAsset[0x28]; // 0x780(0x28)
	float RescueAudioCD; // 0x7a8(0x04)
	float CryForHelpAnimationCD; // 0x7ac(0x04)
	float FinalOpacityValue; // 0x7b0(0x04)
	float FinalScaleValue; // 0x7b4(0x04)
	float GiveUpAnimationTotalTimeHD; // 0x7b8(0x04)
	float GiveUpAnimationTotalTimeMoblie; // 0x7bc(0x04)
	enum class EaseType MarkerEaseType; // 0x7c0(0x01)
	char pad_7C1[0xf]; // 0x7c1(0x0f)
	struct UGPAudioEventAsset* CacheRescueAudioEventAsset; // 0x7d0(0x08)
	char pad_7D8[0x18]; // 0x7d8(0x18)

	void PlayCryForHelpAnimation(); // Function DFMGameHud.PlayerMarkerImpendingDeathWidget.PlayCryForHelpAnimation // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkingBaseWidget
// Size: 0x5a0 (Inherited: 0x588)
class UPlayerMarkingBaseWidget : public UGameMarkerBaseWidget {
public:

	struct UGPPlayerMarkerItemBase* PlayerMarkerItemBase; // 0x588(0x08)
	char pad_590[0x8]; // 0x590(0x08)
	struct FTimerHandle NormalLocationMarkVODelayTimerHandle; // 0x598(0x08)

	void OnMarkingDoubleClickDown(); // Function DFMGameHud.PlayerMarkingBaseWidget.OnMarkingDoubleClickDown // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerAIMakerWidget
// Size: 0x650 (Inherited: 0x588)
class UPlayerMarkerAIMakerWidget : public UGameMarkerBaseWidget {
public:

	struct UImage* IconImage; // 0x588(0x08)
	struct UTextBlock* DistanceText; // 0x590(0x08)
	struct TMap<enum class EGPCharacterFightStateType, struct FLinearColor> ColorMap; // 0x598(0x50)
	struct TMap<enum class EAICharacterTag, struct UPaperSprite*> AIMakerTypeIconMap; // 0x5e8(0x50)
	struct UPaperSprite* DefaultIconImage; // 0x638(0x08)
	struct UGPAIBaseMarkerItem* AIBaseMarkerItem; // 0x640(0x08)
	char pad_648[0x8]; // 0x648(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerAimedWidget
// Size: 0x750 (Inherited: 0x588)
class UPlayerMarkerAimedWidget : public UGameMarkerBaseWidget {
public:

	struct UImage* Image_107; // 0x588(0x08)
	struct UTextBlock* PlayerName; // 0x590(0x08)
	struct UUserWidget* ArmedForceImage; // 0x598(0x08)
	struct UUserWidget* AIArmedForceImage; // 0x5a0(0x08)
	struct UImage* UnitIcon; // 0x5a8(0x08)
	struct UUserWidget* HelmetIcon; // 0x5b0(0x08)
	struct UUserWidget* ArmorIcon; // 0x5b8(0x08)
	struct UDFRadialImage* HealthBar; // 0x5c0(0x08)
	struct UDFImage* HealthBarBg; // 0x5c8(0x08)
	struct UDFImage* SplitLineImage; // 0x5d0(0x08)
	struct UWidgetAnimation* MarkingAnimation; // 0x5d8(0x08)
	struct UPaperSprite* HelmetIconImg; // 0x5e0(0x08)
	struct UPaperSprite* NoneHelmetIconImg; // 0x5e8(0x08)
	struct UPaperSprite* ArmorIconImg; // 0x5f0(0x08)
	struct UPaperSprite* NoneArmorIconImg; // 0x5f8(0x08)
	struct UPaperSprite* NonAIImage; // 0x600(0x08)
	struct TArray<struct FLinearColor> LevelColorArray; // 0x608(0x10)
	struct TMap<enum class EAICharacterTag, struct UPaperSprite*> AIMakerTypeIconMap; // 0x618(0x50)
	struct FLinearColor EnemyColor; // 0x668(0x10)
	struct FLinearColor NormalColor; // 0x678(0x10)
	struct TMap<enum class EInGameBattleClassType, struct UPaperSprite*> BattleClassIconMap; // 0x688(0x50)
	struct UImage* ArmedForceIconWidget; // 0x6d8(0x08)
	struct UImage* ArmedForceBackGroundWidget; // 0x6e0(0x08)
	struct UImage* ArmedForceBackGroundCircle; // 0x6e8(0x08)
	struct UImage* HelmetIconWidget; // 0x6f0(0x08)
	struct UImage* ArmorIconWidget; // 0x6f8(0x08)
	struct UImage* HelmetBgImageWidget; // 0x700(0x08)
	struct UImage* ArmorBgImageWidget; // 0x708(0x08)
	char pad_710[0x8]; // 0x710(0x08)
	struct UGPCharacterMarkerItemBase* MarkerItem; // 0x718(0x08)
	char pad_720[0x30]; // 0x720(0x30)

	void OnMarkingAnimationFinished(); // Function DFMGameHud.PlayerMarkerAimedWidget.OnMarkingAnimationFinished // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerAIWarnWidget
// Size: 0x620 (Inherited: 0x588)
class UPlayerMarkerAIWarnWidget : public UGameMarkerBaseWidget {
public:

	struct UImage* WarnIcon; // 0x588(0x08)
	struct TMap<enum class EGPCharacterFightStateType, struct FLinearColor> ColorMap; // 0x590(0x50)
	bool bIsBattling; // 0x5e0(0x01)
	bool bIsSniper; // 0x5e1(0x01)
	char pad_5E2[0x6]; // 0x5e2(0x06)
	struct UPaperSprite* ExclamationImage; // 0x5e8(0x08)
	struct UPaperSprite* SniperImage; // 0x5f0(0x08)
	struct UGPAIWarnMarkerItem* AIWarnMarkerItem; // 0x5f8(0x08)
	struct TArray<bool> ShowAimed; // 0x600(0x10)
	struct TArray<bool> ShowScoutMarkPermanent; // 0x610(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerDetectorWidget
// Size: 0x5e0 (Inherited: 0x588)
class UPlayerMarkerDetectorWidget : public UGameMarkerBaseWidget {
public:

	char pad_588[0x8]; // 0x588(0x08)
	struct ADFMCharacter* TargetCharacter; // 0x590(0x08)
	struct ADFMCharacter* LocalChar; // 0x598(0x08)
	struct UGPDetectorMarkItem* EnemyEffectMarkerItem; // 0x5a0(0x08)
	struct TWeakObjectPtr<struct AGPCharacter> CurTarget; // 0x5a8(0x08)
	struct UImage* AvatarImg; // 0x5b0(0x08)
	struct UTextBlock* HealthTextBlock; // 0x5b8(0x08)
	struct UTextBlock* ArmorTextBlock; // 0x5c0(0x08)
	char pad_5C8[0x18]; // 0x5c8(0x18)

	void PlayIn(bool NewTarget); // Function DFMGameHud.PlayerMarkerDetectorWidget.PlayIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerEnemyEffectWidget
// Size: 0x5b0 (Inherited: 0x588)
class UPlayerMarkerEnemyEffectWidget : public UGameMarkerBaseWidget {
public:

	char pad_588[0x8]; // 0x588(0x08)
	struct ADFMCharacter* TargetCharacter; // 0x590(0x08)
	struct ADFMCharacter* LocalChar; // 0x598(0x08)
	struct UGPEnemyEffectMarkerItem* EnemyEffectMarkerItem; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerGunnerRobotWidget
// Size: 0x5e0 (Inherited: 0x588)
class UPlayerMarkerGunnerRobotWidget : public UGameMarkerBaseWidget {
public:

	struct UImage* IconImage; // 0x588(0x08)
	struct UImage* Image_SpreadFX; // 0x590(0x08)
	struct UImage* Image_SpreadFX_3; // 0x598(0x08)
	struct FVector2D DistTextTraceOffsetDefault; // 0x5a0(0x08)
	struct FVector2D ArrowOffsetNormal; // 0x5a8(0x08)
	struct FVector2D ArrowPivotNormal; // 0x5b0(0x08)
	struct UGPGunnerRobotMarkerItem* PlayerItemMarkerItem; // 0x5b8(0x08)
	char pad_5C0[0x20]; // 0x5c0(0x20)

	void BP_UpdateStyle(float Opacity, float size); // Function DFMGameHud.PlayerMarkerGunnerRobotWidget.BP_UpdateStyle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerLaserPointerWidget
// Size: 0x5d0 (Inherited: 0x588)
class UPlayerMarkerLaserPointerWidget : public UGameMarkerBaseWidget {
public:

	char pad_588[0x8]; // 0x588(0x08)
	struct ADFMCharacter* TargetCharacter; // 0x590(0x08)
	struct ADFMCharacter* LocalChar; // 0x598(0x08)
	struct UGPLaserPointerMarkItem* EnemyEffectMarkerItem; // 0x5a0(0x08)
	char pad_5A8[0x3]; // 0x5a8(0x03)
	bool bAnimPlayed; // 0x5ab(0x01)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct UWidgetAnimation* StartLock; // 0x5b0(0x08)
	struct UWidgetAnimation* LockEnd; // 0x5b8(0x08)
	struct UDFMStingerMissleAimingMarkView* WBP_SpecialAiming_mark; // 0x5c0(0x08)
	struct TWeakObjectPtr<struct UDFMAbilityLockerComponent> LockerComponent; // 0x5c8(0x08)

	void ShowMarker(); // Function DFMGameHud.PlayerMarkerLaserPointerWidget.ShowMarker // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerStingerMissleWidget
// Size: 0x5b0 (Inherited: 0x588)
class UPlayerMarkerStingerMissleWidget : public UGameMarkerBaseWidget {
public:

	char pad_588[0x8]; // 0x588(0x08)
	struct ADFMCharacter* TargetCharacter; // 0x590(0x08)
	struct ADFMCharacter* LocalChar; // 0x598(0x08)
	struct UGPStingerMisslMarkItem* EnemyEffectMarkerItem; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)

	void PlayIn(bool NewTarget); // Function DFMGameHud.PlayerMarkerStingerMissleWidget.PlayIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerSupportPackWidget
// Size: 0x5b0 (Inherited: 0x588)
class UPlayerMarkerSupportPackWidget : public UGameMarkerBaseWidget {
public:

	char pad_588[0x8]; // 0x588(0x08)
	struct ADFMCharacter* TargetCharacter; // 0x590(0x08)
	struct ADFMCharacter* LocalChar; // 0x598(0x08)
	struct UGPSupportPackMarkerItem* EnemyEffectMarkerItem; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)

	void PlayIn(bool NewTarget); // Function DFMGameHud.PlayerMarkerSupportPackWidget.PlayIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerSupportWeaponWidget
// Size: 0x5b0 (Inherited: 0x588)
class UPlayerMarkerSupportWeaponWidget : public UGameMarkerBaseWidget {
public:

	char pad_588[0x8]; // 0x588(0x08)
	struct ADFMCharacter* TargetCharacter; // 0x590(0x08)
	struct ADFMCharacter* LocalChar; // 0x598(0x08)
	struct UGPSupportWeaponMarkerItem* EnemyEffectMarkerItem; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)

	void PlayIn(bool NewTarget); // Function DFMGameHud.PlayerMarkerSupportWeaponWidget.PlayIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerSuppressionMineWidget
// Size: 0x5b0 (Inherited: 0x588)
class UPlayerMarkerSuppressionMineWidget : public UGameMarkerBaseWidget {
public:

	char pad_588[0x8]; // 0x588(0x08)
	struct ADFMCharacter* TargetCharacter; // 0x590(0x08)
	struct ADFMCharacter* LocalChar; // 0x598(0x08)
	struct UGPSuppressionMineMarkerItem* EnemyEffectMarkerItem; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)

	void PlayIn(); // Function DFMGameHud.PlayerMarkerSuppressionMineWidget.PlayIn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SceneWeaponMarkerWidget
// Size: 0x6b0 (Inherited: 0x588)
class USceneWeaponMarkerWidget : public UGameMarkerBaseWidget {
public:

	struct UDFRadialImage* HealthBar; // 0x588(0x08)
	struct UDFImage* CoolDownProgressBar; // 0x590(0x08)
	struct UImage* CooldownProgressBarBg; // 0x598(0x08)
	struct UImage* IconImage; // 0x5a0(0x08)
	struct UDFImage* HealthBarBg; // 0x5a8(0x08)
	struct UTextBlock* NameInfoText; // 0x5b0(0x08)
	struct UCurveFloat* MarkerScaleCurve; // 0x5b8(0x08)
	struct TMap<enum class ESceneWeaponMarkerType, struct FMarkerUIInfo> SceneWeaponMarkerIconMap; // 0x5c0(0x50)
	struct FLinearColor NeutralColor; // 0x610(0x10)
	struct FLinearColor CampmateColor; // 0x620(0x10)
	struct FLinearColor TeammateColor; // 0x630(0x10)
	struct FLinearColor EnemyColor; // 0x640(0x10)
	char pad_650[0x8]; // 0x650(0x08)
	struct FMarkerUIInfo CurrentMarkerUIInfo; // 0x658(0x40)
	struct UGPSceneWeaponMarkerItem* SceneWeaponMarkerItem; // 0x698(0x08)
	char pad_6A0[0x10]; // 0x6a0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.TacticalEquipmentMarkerWidget
// Size: 0x6d0 (Inherited: 0x588)
class UTacticalEquipmentMarkerWidget : public UGameMarkerBaseWidget {
public:

	struct UDFRadialImage* HealthBar; // 0x588(0x08)
	struct UDFImage* CoolDownProgressBar; // 0x590(0x08)
	struct UImage* CooldownProgressBarBg; // 0x598(0x08)
	struct UImage* IconImage; // 0x5a0(0x08)
	struct UDFImage* HealthBarBg; // 0x5a8(0x08)
	struct UTextBlock* NameInfoText; // 0x5b0(0x08)
	struct UCurveFloat* MarkerScaleCurve; // 0x5b8(0x08)
	struct TMap<enum class ETacticalEquipmentMarkerType, struct FMarkerUIInfo> TacticalEquipTypeIconMap; // 0x5c0(0x50)
	struct FLinearColor NeutralColor; // 0x610(0x10)
	struct FLinearColor CampmateColor; // 0x620(0x10)
	struct FLinearColor TeammateColor; // 0x630(0x10)
	struct FLinearColor EnemyColor; // 0x640(0x10)
	struct FLinearColor SelfColor; // 0x650(0x10)
	char pad_660[0x8]; // 0x660(0x08)
	struct FMarkerUIInfo CurrentMarkerUIInfo; // 0x668(0x40)
	struct UGPTacticalEquipmentMarkerItem* TacticalEquipMarkerItem; // 0x6a8(0x08)
	char pad_6B0[0x20]; // 0x6b0(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.VehicleMarkerWidget
// Size: 0x6f0 (Inherited: 0x588)
class UVehicleMarkerWidget : public UGameMarkerBaseWidget {
public:

	struct UTextBlock* DistanceText; // 0x588(0x08)
	struct UTextBlock* PassengerInfoText; // 0x590(0x08)
	struct UDFRadialImage* HealthBar; // 0x598(0x08)
	struct UImage* IconImage; // 0x5a0(0x08)
	struct UDFImage* HealthBarBg; // 0x5a8(0x08)
	struct FLinearColor NeutralColor; // 0x5b0(0x10)
	struct FLinearColor CampmateColor; // 0x5c0(0x10)
	struct FLinearColor TeammateColor; // 0x5d0(0x10)
	struct FLinearColor EnemyColor; // 0x5e0(0x10)
	struct TMap<enum class EAnimVehicleType, struct UPaperSprite*> VehicleTypeIconMap; // 0x5f0(0x50)
	struct FVector2D OneVehicleStartViewScale; // 0x640(0x08)
	float TotalMoveTime; // 0x648(0x04)
	enum class EaseType MarkerEaseType; // 0x64c(0x01)
	char pad_64D[0x3]; // 0x64d(0x03)
	struct FVector2D DistTextWithoutNameTextPos; // 0x650(0x08)
	struct FVector2D DistTextWithoutHeathBarPos; // 0x658(0x08)
	struct FVector2D DistTextWithoutHealthBarAndNamePos; // 0x660(0x08)
	struct FVector2D NameTextWithoutHealthBarPos; // 0x668(0x08)
	struct FVector2D BubbleWithoutNameTextPos; // 0x670(0x08)
	struct FVector2D BubbleWithoutDistPos; // 0x678(0x08)
	struct FVector2D BubbleWithoutHealthBarPos; // 0x680(0x08)
	struct FVector2D BubbleWithoutHealthBarAndNamePos; // 0x688(0x08)
	struct FVector2D BubbleWithoutDistAndHealthBarPos; // 0x690(0x08)
	struct FVector2D BubbleWithoutNameAndDistTextPos; // 0x698(0x08)
	struct FVector2D BubbleWithoutDistHealthBarAndNamePos; // 0x6a0(0x08)
	struct ADFMVehicleBase* VehicleBase; // 0x6a8(0x08)
	struct UDFMVehicleMarkerItem* VehicleMarkerItem; // 0x6b0(0x08)
	char pad_6B8[0x14]; // 0x6b8(0x14)
	struct FVector2D BeginPosition; // 0x6cc(0x08)
	char pad_6D4[0x1c]; // 0x6d4(0x1c)

	void UpdateDropAnim(float DeltaTime); // Function DFMGameHud.VehicleMarkerWidget.UpdateDropAnim // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SmoothCrosshairViewProxy
// Size: 0xc8 (Inherited: 0x88)
class USmoothCrosshairViewProxy : public UCrosshairViewProxy {
public:

	struct UCrosshairViewProxy* SubProxy; // 0x88(0x08)
	char pad_90[0x38]; // 0x90(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.NZCrosshairViewProxy
// Size: 0x88 (Inherited: 0x88)
class UNZCrosshairViewProxy : public UCrosshairViewProxy {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RectangleCrosshairViewProxy
// Size: 0xa0 (Inherited: 0x88)
class URectangleCrosshairViewProxy : public UCrosshairViewProxy {
public:

	struct FLinearColor OriSize; // 0x88(0x10)
	float OriGap; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)

	void UpdateSpread(float Spread); // Function DFMGameHud.RectangleCrosshairViewProxy.UpdateSpread // (Native|Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CircleCrosshairViewProxy
// Size: 0xa0 (Inherited: 0x88)
class UCircleCrosshairViewProxy : public UCrosshairViewProxy {
public:

	float OriRadius; // 0x88(0x04)
	float OriGap; // 0x8c(0x04)
	float OriSpread; // 0x90(0x04)
	float nElements; // 0x94(0x04)
	float factor; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)

	void UpdateSpread(float Spread); // Function DFMGameHud.CircleCrosshairViewProxy.UpdateSpread // (Native|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BPCrossHairViewProxy
// Size: 0xa8 (Inherited: 0x88)
class UBPCrossHairViewProxy : public UCrosshairViewProxy {
public:

	struct TArray<struct FCrosshairWidgetContext> CrossHairWidgets; // 0x88(0x10)
	struct UWidget* CenterWidget; // 0x98(0x08)
	char pad_A0[0x8]; // 0xa0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RangeTargetHUDView
// Size: 0x5e0 (Inherited: 0x4e0)
class URangeTargetHUDView : public UDamageHintHUDView {
public:

	struct UEditableTextBox* HPTextBox; // 0x4e0(0x08)
	struct UEditableTextBox* ArmorHPTextBox; // 0x4e8(0x08)
	struct UEditableTextBox* HeadDamagesReductionTextBox; // 0x4f0(0x08)
	struct UComboBoxString* ArmorLevelComboBox; // 0x4f8(0x08)
	struct UComboBoxString* HelmetLevelComboBox; // 0x500(0x08)
	struct UComboBoxString* DistanceComboBox; // 0x508(0x08)
	struct UComboBoxString* AISpeedComboBox; // 0x510(0x08)
	struct UComboBoxString* AIDirectionComboBox; // 0x518(0x08)
	struct UDamageHintStatWidget* TotalDamagePerSecStat; // 0x520(0x08)
	struct UDamageHintStatWidget* HeadShootRatioStat; // 0x528(0x08)
	struct UDamageHintStatWidget* TimeToKillStat; // 0x530(0x08)
	struct UDamageHintStatWidget* HitDistanceStat; // 0x538(0x08)
	struct UDamageHintStatWidget* HeadHitCountStat; // 0x540(0x08)
	struct UDamageHintStatWidget* UpperThoraxHitCountStat; // 0x548(0x08)
	struct UDamageHintStatWidget* ThoraxHitCountStat; // 0x550(0x08)
	struct UDamageHintStatWidget* UpperArmHitCountStat; // 0x558(0x08)
	struct UDamageHintStatWidget* ArmHitCountStat; // 0x560(0x08)
	struct UDamageHintStatWidget* UpperLegHitCountStat; // 0x568(0x08)
	struct UDamageHintStatWidget* LegHitCountStat; // 0x570(0x08)
	char pad_578[0x2c]; // 0x578(0x2c)
	float TotalDamageData; // 0x5a4(0x04)
	float TimeToKillData; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct ADFMWeapon* PreWeapon; // 0x5b0(0x08)
	int32_t PreWeaponAmmo; // 0x5b8(0x04)
	struct TWeakObjectPtr<struct APracticeRangeAIManager> AIManager; // 0x5bc(0x08)
	struct FRangeTargetInfo RangeTargetInfoCache; // 0x5c4(0x1c)

	void Update(float Delta); // Function DFMGameHud.RangeTargetHUDView.Update // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerEnemyWidget
// Size: 0x890 (Inherited: 0x7b0)
class UPlayerMarkerEnemyWidget : public UDeployPointBaseWidget {
public:

	struct UTextBlock* PlayerName; // 0x7b0(0x08)
	struct UImage* ScoutProgressBar; // 0x7b8(0x08)
	struct UImage* UnitIcon; // 0x7c0(0x08)
	struct UImage* ArmedForceIcon; // 0x7c8(0x08)
	struct UTextBlock* DistText; // 0x7d0(0x08)
	struct UImage* Arrow; // 0x7d8(0x08)
	struct UProgressBar* HealthBar; // 0x7e0(0x08)
	struct FLinearColor NormalColor; // 0x7e8(0x10)
	struct FLinearColor BattleColor; // 0x7f8(0x10)
	bool bIsBattling; // 0x808(0x01)
	char pad_809[0x3]; // 0x809(0x03)
	struct FVector ProneOffset; // 0x80c(0x0c)
	bool bIsMarking; // 0x818(0x01)
	bool bIsMarked; // 0x819(0x01)
	bool bHasFinishedMarking; // 0x81a(0x01)
	char pad_81B[0x1]; // 0x81b(0x01)
	float MarkingPercent; // 0x81c(0x04)
	bool bFromWeaponMark; // 0x820(0x01)
	char pad_821[0x7]; // 0x821(0x07)
	struct TArray<struct UPaperSprite*> IconImageArray; // 0x828(0x10)
	int32_t IconType; // 0x838(0x04)
	char pad_83C[0x4]; // 0x83c(0x04)
	struct TArray<bool> ShowAimed; // 0x840(0x10)
	struct TArray<bool> ShowScoutMarkPermanent; // 0x850(0x10)
	struct FString PlayerNameStr; // 0x860(0x10)
	char pad_870[0x20]; // 0x870(0x20)

	void UpdateVisibility(); // Function DFMGameHud.PlayerMarkerEnemyWidget.UpdateVisibility // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SafeHouseNPCMarker
// Size: 0x7b0 (Inherited: 0x7b0)
class USafeHouseNPCMarker : public UDeployPointBaseWidget {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDInteractorPanel
// Size: 0x750 (Inherited: 0x348)
class UDFHDInteractorPanel : public UInteractorPanelBase {
public:

	struct UDFHDInteractorPanelItem* CurrentHUDPanelItem; // 0x348(0x08)
	struct TArray<struct UDFHDInteractorPanelItem*> CachedPanelItemArray; // 0x350(0x10)
	struct TArray<struct FName> CachedPanelItemNameArray; // 0x360(0x10)
	struct FVector2D FixedPosOffset; // 0x370(0x08)
	char pad_378[0x10]; // 0x378(0x10)
	struct FDFHDInteractHUDContext HUDContext; // 0x388(0x150)
	struct FDFHDInteractHUDContext LastHUDContext; // 0x4d8(0x150)
	struct UDFHDActionCommonProgressBar* CommonProgressBar; // 0x628(0x08)
	char pad_630[0x10]; // 0x630(0x10)
	int32_t DFHDInteractorPanelItemDescCloseINT32; // 0x640(0x04)
	char pad_644[0xc]; // 0x644(0x0c)
	struct ADFMCharacter* CachedRescuedCharacter; // 0x650(0x08)
	struct FPotentialInteractorInfo CachedSecondInteractorInfo; // 0x658(0x40)
	struct TMap<struct FGameplayTag, int32_t> Tag2Priority; // 0x698(0x50)
	char pad_6E8[0x4]; // 0x6e8(0x04)
	float ReleaseDoorDuration; // 0x6ec(0x04)
	float OpenBagDuration; // 0x6f0(0x04)
	bool bOpenScreenPosOpt; // 0x6f4(0x01)
	char pad_6F5[0x3]; // 0x6f5(0x03)
	float ScreenPosOptMaxValue; // 0x6f8(0x04)
	char pad_6FC[0x4]; // 0x6fc(0x04)
	/*struct TSet<struct AActor*>*/char MarkingMarkerHideActors[0x50]; // 0x700(0x50)

	void TryCloseInteractDetail(); // Function DFMGameHud.DFHDInteractorPanel.TryCloseInteractDetail // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorPanel
// Size: 0x408 (Inherited: 0x348)
class UDFMInteractorPanel : public UInteractorPanelBase {
public:

	struct UDFMInteractorButton_SingleItem* InteractorButton_SingleItem; // 0x348(0x08)
	struct UDFMInteractorButton* InteractorButton0; // 0x350(0x08)
	struct UDFMInteractorButton* InteractorButton1; // 0x358(0x08)
	struct UDFMInteractorButton* InteractorButton2; // 0x360(0x08)
	struct TArray<struct UDFMInteractorButton*> InteractorButtonArr; // 0x368(0x10)
	char pad_378[0x8]; // 0x378(0x08)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0x380(0x50)
	struct UWidgetAnimation* AnimaPanelIn; // 0x3d0(0x08)
	struct UWidgetAnimation* AnimaPanelOut; // 0x3d8(0x08)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct TArray<struct FInteractableProxy> CachedOutlineInteractableProxies; // 0x3e8(0x10)
	struct TArray<struct FInteractableProxy> CachedLastOutlineInteractableProxies; // 0x3f8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDPlayerNameLocalPlayerHUDView
// Size: 0x630 (Inherited: 0x610)
class UDFHDPlayerNameLocalPlayerHUDView : public UDFHDPlayerNameHUDView {
public:

	struct UCanvasPanel* WtCanvasPanel_1; // 0x610(0x08)
	uint64_t WatchFightPlayerUin; // 0x618(0x08)
	struct FVector2D WatchFightOffset; // 0x620(0x08)
	enum class ESlateVisibility WtCanvasPanelVisibility; // 0x628(0x01)
	char pad_629[0x7]; // 0x629(0x07)

	void SetCanvasVisibility(bool bEnterFreeCamera); // Function DFMGameHud.DFHDPlayerNameLocalPlayerHUDView.SetCanvasVisibility // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDPlayerNameTeammateHUDView
// Size: 0x610 (Inherited: 0x610)
class UDFHDPlayerNameTeammateHUDView : public UDFHDPlayerNameHUDView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDVehicleBloodWidget
// Size: 0x5b0 (Inherited: 0x570)
class UDFHDVehicleBloodWidget : public UDFVehicleBaseView {
public:

	char pad_570[0x20]; // 0x570(0x20)
	float LowVehicleBloodRatio; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct UTextBlock* VehicleBloodNum; // 0x598(0x08)
	struct UProgressBar* VehicleBloodProgressBar; // 0x5a0(0x08)
	struct UWidgetAnimation* VehicleBloodBarHitAnimation; // 0x5a8(0x08)

	void OnVehicleDamage(struct UDFMVehicleHealthComponent* Component, float NormalizedHP); // Function DFMGameHud.DFHDVehicleBloodWidget.OnVehicleDamage // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDVehicleKeyTipsWidget
// Size: 0x5a0 (Inherited: 0x570)
class UDFHDVehicleKeyTipsWidget : public UDFVehicleBaseView {
public:

	struct UTextBlock* VehicleNameText; // 0x570(0x08)
	char pad_578[0x8]; // 0x578(0x08)
	struct TArray<struct UUserWidget*> SeatTipsItems; // 0x580(0x10)
	struct TArray<struct UUserWidget*> KeyTipsItems; // 0x590(0x10)

	void OnVehicleExtraPartInfosFinish(); // Function DFMGameHud.DFHDVehicleKeyTipsWidget.OnVehicleExtraPartInfosFinish // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFHDVehicleWeaponBarWidget
// Size: 0x798 (Inherited: 0x570)
class UDFHDVehicleWeaponBarWidget : public UDFVehicleBaseView {
public:

	struct TArray<struct FVehicleWeaponColorInfo> OverHeatColorInfos; // 0x570(0x10)
	/*struct TSoftClassPtr<UObject>*/char SkillButtonClass[0x28]; // 0x580(0x28)
	struct UWidget* WeaponRootWidget; // 0x5a8(0x08)
	struct UArtCommon* ArtCarriedAmmo_2; // 0x5b0(0x08)
	struct UArtCommon* ArtCarriedAmmo_3; // 0x5b8(0x08)
	struct UArtCommon* ArtCarriedAmmo_4; // 0x5c0(0x08)
	struct UCanvasPanel* AmmoWidget; // 0x5c8(0x08)
	struct UUserWidget* OverHeatWidget; // 0x5d0(0x08)
	struct UDFProgressBar* AmmoProgressBar; // 0x5d8(0x08)
	struct UDFProgressBar* OverHeatProgressBar; // 0x5e0(0x08)
	struct UCanvasPanel* WeaponPanel; // 0x5e8(0x08)
	struct UCanvasPanel* WeaponEmptyPanel; // 0x5f0(0x08)
	struct UTextBlock* WeaponNameText; // 0x5f8(0x08)
	struct UDFMImage* FirstWeaponIcon; // 0x600(0x08)
	struct UWidget* FirstWeaponInfoWidget; // 0x608(0x08)
	struct UDFMImage* FirstWeaponTypeIcon; // 0x610(0x08)
	char pad_618[0x90]; // 0x618(0x90)
	struct UWidget* CommonKeyIconWidget; // 0x6a8(0x08)
	struct UWidget* SecondWeaponBarWidget; // 0x6b0(0x08)
	struct UDFMImage* SecondWeaponIcon; // 0x6b8(0x08)
	struct UWidget* SecondWeaponInfoWidget; // 0x6c0(0x08)
	struct UDFMImage* SecondWeaponTypeIcon; // 0x6c8(0x08)
	char pad_6D0[0x90]; // 0x6d0(0x90)
	struct AWeaponBase* CurrentVehicleWeapon; // 0x760(0x08)
	char pad_768[0x8]; // 0x768(0x08)
	struct TArray<struct UDFHDVehicleSkillButtonWidget*> SkillButtonWidgets; // 0x770(0x10)
	char pad_780[0x18]; // 0x780(0x18)

	void OnVehicleExtraPartInfosFinish(); // Function DFMGameHud.DFHDVehicleWeaponBarWidget.OnVehicleExtraPartInfosFinish // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCommonVehicleStateWidget
// Size: 0x580 (Inherited: 0x570)
class UDFMMobileCommonVehicleStateWidget : public UDFVehicleBaseView {
public:

	struct UDFMMobileCustomLayoutDraggableButton* CurrentIconState; // 0x570(0x08)
	struct UDFImage* Icon; // 0x578(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleCrossHairView
// Size: 0x588 (Inherited: 0x570)
class UDFMMobileVehicleCrossHairView : public UDFVehicleBaseView {
public:

	bool NeedHideOutOfAmmo; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UImage* ReloadProgress; // 0x578(0x08)
	char pad_580[0x8]; // 0x580(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileHelicopterDriveView
// Size: 0x678 (Inherited: 0x570)
class UDFMMobileHelicopterDriveView : public UDFVehicleBaseView {
public:

	struct TWeakObjectPtr<struct ADFMHelicopter> CurrentHelicopter; // 0x570(0x08)
	struct TWeakObjectPtr<struct AGPCharacter> LocalPlayer; // 0x578(0x08)
	char pad_580[0x8]; // 0x580(0x08)
	struct FVector AimOffset; // 0x588(0x0c)
	float AimDistance; // 0x594(0x04)
	float SpeedScrollLength; // 0x598(0x04)
	float InitSpeedScrollOffset; // 0x59c(0x04)
	float HeightScrollLength; // 0x5a0(0x04)
	float InitHeightScrollOffset; // 0x5a4(0x04)
	float AmmoProgressMaterialMaxValue; // 0x5a8(0x04)
	bool bUpValue; // 0x5ac(0x01)
	bool bDownValue; // 0x5ad(0x01)
	char pad_5AE[0x2]; // 0x5ae(0x02)
	struct UUserWidget* FPPRoot; // 0x5b0(0x08)
	struct UUserWidget* AimRoot; // 0x5b8(0x08)
	struct UWidget* SecondAimRoot; // 0x5c0(0x08)
	struct UWidget* CurrentAimRoot; // 0x5c8(0x08)
	struct UCanvasPanel* CurrentAim; // 0x5d0(0x08)
	struct UDFMMobileVehicleBloodWidget* BloodBar; // 0x5d8(0x08)
	struct UCanvasPanel* DynamicAimWidget; // 0x5e0(0x08)
	struct UCanvasPanel* FixedAim; // 0x5e8(0x08)
	struct UCanvasPanel* SecondFixedAim; // 0x5f0(0x08)
	struct UTextBlock* FPPSpeed; // 0x5f8(0x08)
	struct UTextBlock* FPPHeight; // 0x600(0x08)
	struct UTextBlock* FPPRoll; // 0x608(0x08)
	struct UScrollBox* FPPSpeedScroll; // 0x610(0x08)
	struct UScrollBox* FPPHeightScroll; // 0x618(0x08)
	struct UCanvasPanel* FPPRollPanel; // 0x620(0x08)
	struct UScrollBox* FPPLeftPitchScroll; // 0x628(0x08)
	struct UScrollBox* FPPRightPitchScroll; // 0x630(0x08)
	struct UCanvasPanel* FPPScrollRoot; // 0x638(0x08)
	struct UPaperSprite* HelicopterIconImage; // 0x640(0x08)
	char pad_648[0x28]; // 0x648(0x28)
	struct UGPInputManager* CurrentInputManager; // 0x670(0x08)

	void RefreshCameraModeState(bool bNewFPP); // Function DFMGameHud.DFMMobileHelicopterDriveView.RefreshCameraModeState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleGunView
// Size: 0x5e0 (Inherited: 0x570)
class UDFMMobileVehicleGunView : public UDFVehicleBaseView {
public:

	struct TArray<struct FName> SpeicalCrossHairNames; // 0x570(0x10)
	struct UUserWidget* CrossHair; // 0x580(0x08)
	struct UUserWidget* CurrentWeaponInfo; // 0x588(0x08)
	struct UUserWidget* HeatTip; // 0x590(0x08)
	struct UImage* WeaponIcon; // 0x598(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* IconState; // 0x5a0(0x08)
	struct UCanvasPanel* SightRoot; // 0x5a8(0x08)
	struct TArray<struct UWidget*> CrossHairs; // 0x5b0(0x10)
	struct UUserWidget* AmmoProgressBarRoot; // 0x5c0(0x08)
	struct UDFRadialImage* AmmoProgressBarWidget; // 0x5c8(0x08)
	struct UDFMMobileVehicleCrossHairView* SpecialCrossHair; // 0x5d0(0x08)
	char pad_5D8[0x8]; // 0x5d8(0x08)

	void RefreshCameraModeState(bool bNewFPP); // Function DFMGameHud.DFMMobileVehicleGunView.RefreshCameraModeState // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleStateWidget
// Size: 0x590 (Inherited: 0x570)
class UDFMMobileVehicleStateWidget : public UDFVehicleBaseView {
public:

	struct UCanvasPanel* Body; // 0x570(0x08)
	bool IsNeedRotateBody; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct UDFMMobileVehicleLockView* VehicleLockView; // 0x580(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* CurrentIconState; // 0x588(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileTankDriveView
// Size: 0x690 (Inherited: 0x570)
class UDFMMobileTankDriveView : public UDFVehicleBaseView {
public:

	struct UCanvasPanel* aim; // 0x570(0x08)
	struct UCanvasPanel* FixedAimRoot; // 0x578(0x08)
	struct UImage* DynamicAim; // 0x580(0x08)
	struct UUserWidget* HeatRoot; // 0x588(0x08)
	struct UImage* AimAmmoProgress; // 0x590(0x08)
	struct UTextBlock* Speed; // 0x598(0x08)
	struct UProgressBar* SpeedProgressBar; // 0x5a0(0x08)
	struct UWidget* SpeedRoot; // 0x5a8(0x08)
	struct UTextBlock* SpeedText; // 0x5b0(0x08)
	struct UWidget* SpeedProgressIcon; // 0x5b8(0x08)
	struct UTextBlock* EndDist; // 0x5c0(0x08)
	struct UTextBlock* Pitch; // 0x5c8(0x08)
	struct UTextBlock* PitchText; // 0x5d0(0x08)
	struct UWidget* PitchProgressIcon; // 0x5d8(0x08)
	struct UWidget* PitchRoot; // 0x5e0(0x08)
	struct UCanvasPanel* AimLineRoot; // 0x5e8(0x08)
	struct UUserWidget* OpenMirror; // 0x5f0(0x08)
	float HeavyDamageEffectTime; // 0x5f8(0x04)
	char pad_5FC[0x4]; // 0x5fc(0x04)
	struct TArray<struct FName> HeavyDamageEffectNames; // 0x600(0x10)
	float TPPCrossHairOffsetRatio; // 0x610(0x04)
	char pad_614[0x4]; // 0x614(0x04)
	struct TArray<struct UWidget*> HeavyDamageEffects; // 0x618(0x10)
	struct UImage* ImageFXGlitch0; // 0x628(0x08)
	struct UImage* ImageFXGlitch1; // 0x630(0x08)
	struct UWidgetAnimation* HeavyDamageStartAnimation; // 0x638(0x08)
	struct UWidgetAnimation* HeavyDamageStopAnimation; // 0x640(0x08)
	char pad_648[0x48]; // 0x648(0x48)

	void RefreshCameraModeState(bool bNewFPP); // Function DFMGameHud.DFMMobileTankDriveView.RefreshCameraModeState // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleBaseMovement
// Size: 0x5a8 (Inherited: 0x570)
class UDFMMobileVehicleBaseMovement : public UDFVehicleBaseView {
public:

	struct AGPPlayerController* GPPlayerController; // 0x570(0x08)
	struct AGPCharacter* GPCharacter; // 0x578(0x08)
	struct UMobilePlayerInput* MobilePlayerInput; // 0x580(0x08)
	struct UGPInputManager* InputManager; // 0x588(0x08)
	struct UMobileGameHandle* GameHandle; // 0x590(0x08)
	struct AGPCharacter* OldCharacter; // 0x598(0x08)
	char pad_5A0[0x8]; // 0x5a0(0x08)

	void OnControllerUnPossessPawn(struct APlayerController* Controller); // Function DFMGameHud.DFMMobileVehicleBaseMovement.OnControllerUnPossessPawn // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleAmmoWidget
// Size: 0x5c8 (Inherited: 0x570)
class UDFMMobileVehicleAmmoWidget : public UDFVehicleBaseView {
public:

	struct UDFBorder* AimmoBorder; // 0x570(0x08)
	struct UTextBlock* AmmoNum; // 0x578(0x08)
	struct UImage* UnLimitedAmmoIcon; // 0x580(0x08)
	struct UWidget* AmmoSeparatorWidget; // 0x588(0x08)
	struct UDFTextBlock* AmmoNameText; // 0x590(0x08)
	struct UImage* AmmoProgressIcon; // 0x598(0x08)
	struct UCanvasPanel* VehicleOverHeatPanel; // 0x5a0(0x08)
	struct UUserWidget* VehicleOverHeat; // 0x5a8(0x08)
	struct UProgressBar* OverHeatProcessBar; // 0x5b0(0x08)
	char pad_5B8[0x10]; // 0x5b8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleBloodWidget
// Size: 0x5b0 (Inherited: 0x570)
class UDFMMobileVehicleBloodWidget : public UDFVehicleBaseView {
public:

	char pad_570[0x20]; // 0x570(0x20)
	struct UDFMMobileCustomLayoutDraggableButton* CurrentBloodBarState; // 0x590(0x08)
	float LowVehicleBloodRatio; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct UDFRadialImage* VehicleBloodProgressBar; // 0x5a0(0x08)
	struct UWidgetAnimation* VehicleBloodBarHitAnimation; // 0x5a8(0x08)

	void OnVehicleDamage(struct UDFMVehicleHealthComponent* Component, float NormalizedHP); // Function DFMGameHud.DFMMobileVehicleBloodWidget.OnVehicleDamage // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleCommonView
// Size: 0x588 (Inherited: 0x570)
class UDFMMobileVehicleCommonView : public UDFVehicleBaseView {
public:

	struct UDFMMobileCustomLayoutDraggableButton* LeaveButton; // 0x570(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* LeanOutButton; // 0x578(0x08)
	struct UDFMMobileVehicleChangeSeatButton* ChangeSeatButton; // 0x580(0x08)

	void StartLean(); // Function DFMGameHud.DFMMobileVehicleCommonView.StartLean // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleDriveView
// Size: 0x590 (Inherited: 0x570)
class UDFMMobileVehicleDriveView : public UDFVehicleBaseView {
public:

	struct UDFMMobileVehicleBaseMovement* MovementWidget; // 0x570(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* DragBtnTrumpet; // 0x578(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* DragBtnManualBreak; // 0x580(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* DragBtnReset; // 0x588(0x08)

	void TrumpetBtnReleased(); // Function DFMGameHud.DFMMobileVehicleDriveView.TrumpetBtnReleased // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleLockView
// Size: 0x6a8 (Inherited: 0x570)
class UDFMMobileVehicleLockView : public UDFVehicleBaseView {
public:

	bool bShowLaserPointerNotice; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UCanvasPanel* LockWarning; // 0x578(0x08)
	struct UTextBlock* LockText; // 0x580(0x08)
	struct UPaperSprite* LockedImage; // 0x588(0x08)
	struct UPaperSprite* LockingImage; // 0x590(0x08)
	struct FText LockingText; // 0x598(0x18)
	struct FText LockedText; // 0x5b0(0x18)
	struct FText UnderAttackText; // 0x5c8(0x18)
	struct FName LockingAudioName; // 0x5e0(0x08)
	struct FName LockedAudioName; // 0x5e8(0x08)
	struct FName MissileAttackAudioName; // 0x5f0(0x08)
	struct UImage* LockBgImag; // 0x5f8(0x08)
	struct UWidget* LockSkillTipWidget; // 0x600(0x08)
	struct TArray<struct UUserWidget*> VehicleLockerMarkers; // 0x608(0x10)
	struct TArray<bool> VehicleLockerMarkerVisibles; // 0x618(0x10)
	struct TArray<struct UWidgetAnimation*> VehicleLockerAnimationIns; // 0x628(0x10)
	struct TArray<struct UDFImage*> VehicleLockerProgress0; // 0x638(0x10)
	struct TArray<struct UDFImage*> VehicleLockerProgress1; // 0x648(0x10)
	struct TArray<struct UWidgetAnimation*> VehicleLockerAnimationOuts; // 0x658(0x10)
	char pad_668[0x8]; // 0x668(0x08)
	struct UWidgetAnimation* LockInAnim; // 0x670(0x08)
	struct UWidgetAnimation* LockOutAnim; // 0x678(0x08)
	struct UWidgetAnimation* LockLockedAnim; // 0x680(0x08)
	struct UWidgetAnimation* LockFireAnim; // 0x688(0x08)
	char pad_690[0x8]; // 0x690(0x08)
	int32_t iLockingAudioName; // 0x698(0x04)
	int32_t iLockedAudioName; // 0x69c(0x04)
	int32_t iMissileAttackAudioName; // 0x6a0(0x04)
	char pad_6A4[0x4]; // 0x6a4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleSkillPanel
// Size: 0x5d0 (Inherited: 0x570)
class UDFMMobileVehicleSkillPanel : public UDFVehicleBaseView {
public:

	struct TMap<struct FName, struct UDFMMobileVehicleSkillButton*> SkillButtonMap; // 0x570(0x50)
	struct TArray<struct UDFMMobileCustomLayoutDraggableButton*> CustomSkllBtns; // 0x5c0(0x10)

	void OnVehicleExtraPartInfosFinish(); // Function DFMGameHud.DFMMobileVehicleSkillPanel.OnVehicleExtraPartInfosFinish // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleSwitchWeaponWidget
// Size: 0x590 (Inherited: 0x570)
class UDFMMobileVehicleSwitchWeaponWidget : public UDFVehicleBaseView {
public:

	struct UDFTextBlock* AmmoNameText; // 0x570(0x08)
	struct UDFMMobileVehicleSwitchWeaponButton* FirstWeaponButtonWidget; // 0x578(0x08)
	struct UDFMMobileVehicleSwitchWeaponButton* SecondWeaponButtonWidget; // 0x580(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* CurrentVehicleWeaponBar; // 0x588(0x08)

	void OnUpdateWeaponList(); // Function DFMGameHud.DFMMobileVehicleSwitchWeaponWidget.OnUpdateWeaponList // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponVehicleButtonMovement
// Size: 0x580 (Inherited: 0x570)
class UDFMMobileWeaponVehicleButtonMovement : public UDFVehicleBaseView {
public:

	struct UDFMMobileVehicleFireLeftButtonView* VehicleFireLeftBtn; // 0x570(0x08)
	struct UDFMMobileVehicleFireRightButtonView* VehicleFireRightBtn; // 0x578(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMVehicleSupplyTipView
// Size: 0x590 (Inherited: 0x570)
class UDFMVehicleSupplyTipView : public UDFVehicleBaseView {
public:

	struct UTextBlock* ActionNameText; // 0x570(0x08)
	struct UTextBlock* ProgressNumText; // 0x578(0x08)
	struct UProgressBar* ProgressBarWidget; // 0x580(0x08)
	struct UWidget* CancelArea; // 0x588(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFVehicleSkillWidget
// Size: 0x578 (Inherited: 0x570)
class UDFVehicleSkillWidget : public UDFVehicleBaseView {
public:

	struct UDFMVehicleSkillInstance* OwnSkillInstance; // 0x570(0x08)

	void RefreshSkillKey(struct FString SkillKey); // Function DFMGameHud.DFVehicleSkillWidget.RefreshSkillKey // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFVehicleWeaponAimWidget
// Size: 0x5c8 (Inherited: 0x570)
class UDFVehicleWeaponAimWidget : public UDFVehicleBaseView {
public:

	struct UCanvasPanel* AimProgressWidget; // 0x570(0x08)
	struct UImage* DynamicAimImage; // 0x578(0x08)
	struct UCanvasPanel* FixedAimRootWidget; // 0x580(0x08)
	struct UUserWidget* HeatRootWidget; // 0x588(0x08)
	struct UImage* AimAmmoProgressImage; // 0x590(0x08)
	struct UCanvasPanel* AimLineRootPanel; // 0x598(0x08)
	struct UCanvasPanel* AimIconsPanel; // 0x5a0(0x08)
	char pad_5A8[0x20]; // 0x5a8(0x20)

	void RefreshCameraModeState(bool bNewFPP); // Function DFMGameHud.DFVehicleWeaponAimWidget.RefreshCameraModeState // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFVehicleWeaponMirrorWidget
// Size: 0x5e0 (Inherited: 0x570)
class UDFVehicleWeaponMirrorWidget : public UDFVehicleBaseView {
public:

	float SpeedProgressLength; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct UTextBlock* SpeedWidget; // 0x578(0x08)
	struct UProgressBar* SpeedProgressBarWidget; // 0x580(0x08)
	struct UWidget* SpeedRootWidget; // 0x588(0x08)
	struct UTextBlock* SpeedTextWidget; // 0x590(0x08)
	struct UWidget* SpeedProgressIconWidget; // 0x598(0x08)
	struct UTextBlock* EndDistWidget; // 0x5a0(0x08)
	struct UTextBlock* PitchWidget; // 0x5a8(0x08)
	struct UTextBlock* PitchTextWidget; // 0x5b0(0x08)
	struct UWidget* PitchProgressIconWidget; // 0x5b8(0x08)
	struct UWidget* PitchRootWidget; // 0x5c0(0x08)
	char pad_5C8[0x18]; // 0x5c8(0x18)

	void RefreshCameraModeState(bool bNewFPP); // Function DFMGameHud.DFVehicleWeaponMirrorWidget.RefreshCameraModeState // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFKillerInfoCardView
// Size: 0x600 (Inherited: 0x3c8)
class UDFKillerInfoCardView : public UDFPlayerInfoCardView {
public:

	/*struct TSoftObjectPtr<UMaterialInterface>*/char SkillUsedMaterial[0x28]; // 0x3c8(0x28)
	float SOLOnKilledShowTime; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct FTimerHandle SOLOnKilledShowTimerHandle; // 0x3f8(0x08)
	struct ADFMCharacter* LocalDFMCharacter; // 0x400(0x08)
	struct FKillInfo KilledKillInfo; // 0x408(0x148)
	enum class EDFMGamePlayMode CurDFMGamePlayMode; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct UClass* KeyTipsClass; // 0x558(0x08)
	struct UDFKillerInfoCardViewKeyTips* KeyTipsInstance; // 0x560(0x08)
	struct FName DisplayInputActionName_Report; // 0x568(0x08)
	char pad_570[0x4]; // 0x570(0x04)
	struct FName DisplayInputActionName_Skip; // 0x574(0x08)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct UCanvasPanel* RootCanvas; // 0x580(0x08)
	struct UDFTextBlock* EnemyVSMeKillText; // 0x588(0x08)
	struct UDFTextBlock* KillerWeaponName; // 0x590(0x08)
	struct UUserWidget* ItemViewImageWidget; // 0x598(0x08)
	struct UDFImage* WeaponRuntimeImage_InItemView; // 0x5a0(0x08)
	struct UDFImage* StaticIconImage; // 0x5a8(0x08)
	struct UUserWidget* ReportButtonWidget; // 0x5b0(0x08)
	struct UDFTextBlock* TestWarningText; // 0x5b8(0x08)
	struct FName RootCanvas_Name; // 0x5c0(0x08)
	struct FName EnemyVSMeKillText_Name; // 0x5c8(0x08)
	struct FName KillerWeaponName_Name; // 0x5d0(0x08)
	struct FName ItemViewImageWidget_Name; // 0x5d8(0x08)
	struct FName WeaponRuntimeImage_InItemView_Name; // 0x5e0(0x08)
	struct FName StaticIconImage_Name; // 0x5e8(0x08)
	struct FName ReportButtonWidget_Name; // 0x5f0(0x08)
	struct FName TestWarningText_Name; // 0x5f8(0x08)

	void SOL_RefreshView(struct FKillInfo KillInfo); // Function DFMGameHud.DFKillerInfoCardView.SOL_RefreshView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFRescuerInfoCardView
// Size: 0x3c8 (Inherited: 0x3c8)
class UDFRescuerInfoCardView : public UDFPlayerInfoCardView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMUASActionCommonProgressBar
// Size: 0x3f8 (Inherited: 0x3f8)
class UDFMUASActionCommonProgressBar : public UDFMActionCommonProgressBar {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMC102AdrenalineView
// Size: 0x408 (Inherited: 0x3f8)
class UDFMC102AdrenalineView : public UDFMBaseUIView {
public:

	char pad_3F8[0x8]; // 0x3f8(0x08)
	bool bHasPlayAnim; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)

	void BP_PlayHUDAnim(bool bStart); // Function DFMGameHud.DFMC102AdrenalineView.BP_PlayHUDAnim // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMC202BeCatTracingView
// Size: 0x458 (Inherited: 0x3f8)
class UDFMC202BeCatTracingView : public UDFMBaseUIView {
public:

	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FName StartBeTracingAudioName; // 0x400(0x08)
	struct FName BeTracingAudioRTPCName; // 0x408(0x08)
	struct FName BeTracingTipsAudioName_Near; // 0x410(0x08)
	struct FName BeTracingTipsAudioName_Mid; // 0x418(0x08)
	struct FName BeTracingTipsAudioName_Far; // 0x420(0x08)
	struct FName BeTracingPostEffectName_Near; // 0x428(0x08)
	struct FName BeTracingPostEffectName_Mid; // 0x430(0x08)
	struct FName BeTracingPostEffectName_Far; // 0x438(0x08)
	struct ADFMCharacter* CacheCharacter; // 0x440(0x08)
	char pad_448[0x10]; // 0x448(0x10)

	void SetTracingLevel(int32_t TracingLevel); // Function DFMGameHud.DFMC202BeCatTracingView.SetTracingLevel // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMC202CatSneakView
// Size: 0x408 (Inherited: 0x3f8)
class UDFMC202CatSneakView : public UDFMBaseUIView {
public:

	char pad_3F8[0x8]; // 0x3f8(0x08)
	bool bHasPlayAnim; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)

	void BP_PlayHUDAnim(bool bStart); // Function DFMGameHud.DFMC202CatSneakView.BP_PlayHUDAnim // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMC202CatTracingEnemyView
// Size: 0x420 (Inherited: 0x3f8)
class UDFMC202CatTracingEnemyView : public UDFMBaseUIView {
public:

	float HideAnimTime; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct ADFMCharacter* CacheCharacter; // 0x400(0x08)
	char pad_408[0x18]; // 0x408(0x18)

	void SetMarkEnemyCnt(int32_t EnemyCnt); // Function DFMGameHud.DFMC202CatTracingEnemyView.SetMarkEnemyCnt // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMUsingItemTipsHUDView
// Size: 0x528 (Inherited: 0x3f8)
class UDFMUsingItemTipsHUDView : public UDFMBaseUIView {
public:

	float TipsTickFrequency; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct FString CustomFadeInAnimationName; // 0x400(0x10)
	struct FString CustomFadeOutAnimationName; // 0x410(0x10)
	struct FString CustomCompleteAnimationName; // 0x420(0x10)
	struct UUserWidget* Widget_WBP_TipsPro_Common; // 0x430(0x08)
	struct UTextBlock* Widget_ItemNameText; // 0x438(0x08)
	struct UTextBlock* Widget_CountingTimeText; // 0x440(0x08)
	struct UProgressBar* Widget_CountingTimeProgressBar; // 0x448(0x08)
	struct UButton* Widget_CloseButton; // 0x450(0x08)
	struct TMap<struct FString, struct UWidgetAnimation*> WidgetAnimationMap; // 0x458(0x50)
	struct UWidgetAnimation* CustomFadeInAnimation; // 0x4a8(0x08)
	struct UWidgetAnimation* CustomFadeOutAnimation; // 0x4b0(0x08)
	struct UWidgetAnimation* CustomCompleteAnimation; // 0x4b8(0x08)
	char pad_4C0[0x34]; // 0x4c0(0x34)
	struct TWeakObjectPtr<struct UInventoryUseItemManager> UserItemMgr; // 0x4f4(0x08)
	char pad_4FC[0x2c]; // 0x4fc(0x2c)

	void PostOnGameHudStateChanged(); // Function DFMGameHud.DFMUsingItemTipsHUDView.PostOnGameHudStateChanged // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCustomLayoutForbidStack
// Size: 0x50 (Inherited: 0x48)
class UDFMCustomLayoutForbidStack : public UDFMCustomLayoutStack {
public:

	bool OldForbid; // 0x48(0x01)
	bool NewForbid; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCustomLayoutOffsetStack
// Size: 0x60 (Inherited: 0x48)
class UDFMCustomLayoutOffsetStack : public UDFMCustomLayoutStack {
public:

	struct FVector2D OldPosition; // 0x48(0x08)
	struct FVector2D NewPosition; // 0x50(0x08)
	int32_t OldAnchorIndex; // 0x58(0x04)
	int32_t NewAnchorIndex; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCustomLayoutOpacityStack
// Size: 0x50 (Inherited: 0x48)
class UDFMCustomLayoutOpacityStack : public UDFMCustomLayoutStack {
public:

	float OldOpacity; // 0x48(0x04)
	float NewOpacity; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCustomLayoutRunAreaStack
// Size: 0x50 (Inherited: 0x48)
class UDFMCustomLayoutRunAreaStack : public UDFMCustomLayoutStack {
public:

	float OldScale; // 0x48(0x04)
	float NewScale; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCustomLayoutScaleStack
// Size: 0x58 (Inherited: 0x48)
class UDFMCustomLayoutScaleStack : public UDFMCustomLayoutStack {
public:

	float OldScale; // 0x48(0x04)
	float NewScale; // 0x4c(0x04)
	float OldRunAreaSlotY; // 0x50(0x04)
	float NewRunAreaSlotY; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCustomLayoutSprintAreaStack
// Size: 0x50 (Inherited: 0x48)
class UDFMCustomLayoutSprintAreaStack : public UDFMCustomLayoutStack {
public:

	float OldScale; // 0x48(0x04)
	float NewScale; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMCustomLayoutSteerStack
// Size: 0x50 (Inherited: 0x48)
class UDFMCustomLayoutSteerStack : public UDFMCustomLayoutStack {
public:

	bool OldSteer; // 0x48(0x01)
	bool NewSteer; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.GiantTowerWeaponSeatView
// Size: 0x448 (Inherited: 0x438)
class UGiantTowerWeaponSeatView : public UDFMFixedWeaponCommonView {
public:

	struct UGiantTowerSeatView* GiantTowerSeat; // 0x438(0x08)
	char pad_440[0x8]; // 0x440(0x08)

	void OnWeaponAimClicked(); // Function DFMGameHud.GiantTowerWeaponSeatView.OnWeaponAimClicked // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView_InteractList
// Size: 0x5e8 (Inherited: 0x5d0)
class UDFMInteractorView_InteractList : public UDFMInteractorView_ItemBase {
public:

	struct AActor* CurrentInteractingObject; // 0x5d0(0x08)
	struct FInteractableProxy CurrentInteractingProxy; // 0x5d8(0x10)

	void ClickSingleItem(int32_t Index); // Function DFMGameHud.DFMInteractorView_InteractList.ClickSingleItem // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView_Rescue
// Size: 0x608 (Inherited: 0x5d0)
class UDFMInteractorView_Rescue : public UDFMInteractorView_ItemBase {
public:

	char pad_5D0[0x8]; // 0x5d0(0x08)
	struct UDFMActionCommonProgressBar* Bar; // 0x5d8(0x08)
	struct FName BarName; // 0x5e0(0x08)
	char pad_5E8[0x10]; // 0x5e8(0x10)
	struct UUserWidget* TipsBtn_Rescue; // 0x5f8(0x08)
	struct FName TipsBtn_RescueName; // 0x600(0x08)

	void OnShowRescueButton(); // Function DFMGameHud.DFMInteractorView_Rescue.OnShowRescueButton // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView_WeaponList
// Size: 0x5e0 (Inherited: 0x5d0)
class UDFMInteractorView_WeaponList : public UDFMInteractorView_ItemBase {
public:

	struct TArray<struct UInteractorOperateSizeBox*> OperatorSizeBoxChildren; // 0x5d0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView_Plunder
// Size: 0x550 (Inherited: 0x550)
class UDFMInteractorView_Plunder : public UDFMInteractorView_SubViewBase {
public:


	void UpdateCurrentRaceScore(float Score, float MaxScore); // Function DFMGameHud.DFMInteractorView_Plunder.UpdateCurrentRaceScore // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMInteractorView_ProgressBar
// Size: 0x5d0 (Inherited: 0x550)
class UDFMInteractorView_ProgressBar : public UDFMInteractorView_SubViewBase {
public:

	float LeftTime; // 0x550(0x04)
	struct FGameplayTag InteruptTag; // 0x554(0x08)
	struct FGameplayTag RepairInteruptTag; // 0x55c(0x08)
	char pad_564[0x4]; // 0x564(0x04)
	struct UDFMActionCommonProgressBar* InteractorProgressBar; // 0x568(0x08)
	char pad_570[0x8]; // 0x570(0x08)
	struct TMap<enum class EProgressType, struct FText> ProgressTextMap; // 0x578(0x50)
	char pad_5C8[0x8]; // 0x5c8(0x08)

	void ShowProgress(float InDuration); // Function DFMGameHud.DFMInteractorView_ProgressBar.ShowProgress // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorOperateSizeBox_AddAmmo
// Size: 0x238 (Inherited: 0x218)
class UInteractorOperateSizeBox_AddAmmo : public UInteractorOperateSizeBox {
public:

	/*struct TScriptInterface<IWeaponInterface>*/char Weapon[0x10]; // 0x218(0x10)
	struct FString AcquireWidgetSwitcherName; // 0x228(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.CharacterArmorView
// Size: 0x410 (Inherited: 0x3a0)
class UCharacterArmorView : public ULuaHudBaseView {
public:

	struct UProgressBar* HelmetBar; // 0x3a0(0x08)
	struct UProgressBar* BreastBar; // 0x3a8(0x08)
	struct TMap<enum class EEquipmentType, struct UProgressBar*> EquipBars; // 0x3b0(0x50)
	struct AActor* CacheChar; // 0x400(0x08)
	struct UCharacterEquipComponent* CacheEquipComp; // 0x408(0x08)

	void OnFocusPawnChanged(struct APawn* NewFocusPawan); // Function DFMGameHud.CharacterArmorView.OnFocusPawnChanged // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HealthDetailHUDView
// Size: 0x4f0 (Inherited: 0x3a0)
class UHealthDetailHUDView : public ULuaHudBaseView {
public:

	struct UHealthDetailPartItemWithBloodHUDView* FullHealthDetailView; // 0x3a0(0x08)
	struct UHealthDetailPartItemWithBloodHUDView* HeadDetailView; // 0x3a8(0x08)
	struct UHealthDetailPartItemWithBloodHUDView* ThoraxDetailView; // 0x3b0(0x08)
	struct UHealthDetailPartItemHUDView* StomachDetailView; // 0x3b8(0x08)
	struct UHealthDetailPartItemHUDView* LeftArmDetailView; // 0x3c0(0x08)
	struct UHealthDetailPartItemHUDView* RightArmDetailView; // 0x3c8(0x08)
	struct UHealthDetailPartItemHUDView* LeftLegDetailView; // 0x3d0(0x08)
	struct UHealthDetailPartItemHUDView* RightLegDetailView; // 0x3d8(0x08)
	struct UButton* CloseBtn; // 0x3e0(0x08)
	struct UMainBodyHUDView* FullBodyView; // 0x3e8(0x08)
	struct UBuffItemHUDView* CharacterBuffItem1; // 0x3f0(0x08)
	struct UBuffItemHUDView* CharacterBuffItem2; // 0x3f8(0x08)
	struct UBuffItemHUDView* CharacterBuffItem3; // 0x400(0x08)
	struct UBuffItemHUDView* CharacterBuffItem4; // 0x408(0x08)
	struct USizeBox* FoodHud; // 0x410(0x08)
	struct UButton* CloseWindowButton; // 0x418(0x08)
	struct UCanvasPanel* BuffTipCanvas; // 0x420(0x08)
	struct UBuffItemHUDView* BuffTipItem; // 0x428(0x08)
	struct UWidgetSwitcher* BuffTypeWS; // 0x430(0x08)
	struct UTextBlock* DeBuffNameText; // 0x438(0x08)
	struct UTextBlock* BuffNameText; // 0x440(0x08)
	struct UTextBlock* BuffTipText; // 0x448(0x08)
	struct UWrapBox* StatusLabelWrapBox; // 0x450(0x08)
	struct UOverlay* StatusLabelOverlay; // 0x458(0x08)
	struct UTextBlock* StatusLabelText; // 0x460(0x08)
	struct UButton* HideStatusLabelBtn; // 0x468(0x08)
	struct UClass* ItemLabelWidget; // 0x470(0x08)
	struct TArray<struct UBuffItemHUDView*> CharacterBuffItemArray; // 0x478(0x10)
	struct UGPAttributeSetHealth* AttributeSetHealth; // 0x488(0x08)
	struct ADFMCharacter* DFMCharacter; // 0x490(0x08)
	char pad_498[0x58]; // 0x498(0x58)

	void OnShowFoodButtonClick(); // Function DFMGameHud.HealthDetailHUDView.OnShowFoodButtonClick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BodyHealthDetailHUDView
// Size: 0x530 (Inherited: 0x3a0)
class UBodyHealthDetailHUDView : public ULuaHudBaseView {
public:

	struct UTextBlock* HealthText; // 0x3a0(0x08)
	struct UTextBlock* MaxHealthText; // 0x3a8(0x08)
	struct UBodyPartHealthHUDView* HeadDetailView; // 0x3b0(0x08)
	struct UBodyPartHealthHUDView* ThoraxDetailView; // 0x3b8(0x08)
	struct UBodyPartHealthHUDView* LeftArmDetailView; // 0x3c0(0x08)
	struct UBodyPartHealthHUDView* RightArmDetailView; // 0x3c8(0x08)
	struct UBodyPartHealthHUDView* LeftLegDetailView; // 0x3d0(0x08)
	struct UBodyPartHealthHUDView* RightLegDetailView; // 0x3d8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Head; // 0x3e0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Thorax; // 0x3e8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_LeftArm; // 0x3f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_RightArm; // 0x3f8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_LeftLeg; // 0x400(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_RightLeg; // 0x408(0x08)
	struct UUserWidget* CommonButton_V1_02; // 0x410(0x08)
	struct UButton* CloseBtn; // 0x418(0x08)
	struct UButton* FastUseBtn; // 0x420(0x08)
	struct UMainBodyHUDView* FullBodyView; // 0x428(0x08)
	struct UBuffItemHUDView* CharacterBuffItem1; // 0x430(0x08)
	struct UBuffItemHUDView* CharacterBuffItem2; // 0x438(0x08)
	struct UBuffItemHUDView* CharacterBuffItem3; // 0x440(0x08)
	struct UBuffItemHUDView* CharacterBuffItem4; // 0x448(0x08)
	struct USizeBox* FoodHud; // 0x450(0x08)
	struct UButton* CloseWindowButton; // 0x458(0x08)
	struct UCanvasPanel* BuffTipCanvas; // 0x460(0x08)
	struct UBuffItemHUDView* BuffTipItem; // 0x468(0x08)
	struct UWidgetSwitcher* BuffTypeWS; // 0x470(0x08)
	struct UTextBlock* DeBuffNameText; // 0x478(0x08)
	struct UTextBlock* BuffNameText; // 0x480(0x08)
	struct UTextBlock* BuffTipText; // 0x488(0x08)
	struct UWrapBox* StatusLabelWrapBox; // 0x490(0x08)
	struct UOverlay* StatusLabelOverlay; // 0x498(0x08)
	struct UTextBlock* StatusLabelText; // 0x4a0(0x08)
	struct UButton* HideStatusLabelBtn; // 0x4a8(0x08)
	struct UClass* ItemLabelWidget; // 0x4b0(0x08)
	struct TArray<struct UBuffItemHUDView*> CharacterBuffItemArray; // 0x4b8(0x10)
	struct UGPAttributeSetHealth* AttributeSetHealth; // 0x4c8(0x08)
	struct ADFMCharacter* DFMCharacter; // 0x4d0(0x08)
	char pad_4D8[0x58]; // 0x4d8(0x58)

	void OnShowFoodButtonClick(); // Function DFMGameHud.BodyHealthDetailHUDView.OnShowFoodButtonClick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HealthDetailItemLabelHUDView
// Size: 0x3e0 (Inherited: 0x3a0)
class UHealthDetailItemLabelHUDView : public ULuaHudBaseView {
public:

	struct UWidgetSwitcher* BuffSwitcher; // 0x3a0(0x08)
	struct UTextBlock* LabelName; // 0x3a8(0x08)
	struct UButton* BuffDescBtn; // 0x3b0(0x08)
	struct FString BuffDescString; // 0x3b8(0x10)
	struct UOverlay* DescOverlay; // 0x3c8(0x08)
	struct UTextBlock* DescTextBlock; // 0x3d0(0x08)
	struct UButton* HideDescLabelBtn; // 0x3d8(0x08)

	void OnBuffDescBtnClicked(); // Function DFMGameHud.HealthDetailItemLabelHUDView.OnBuffDescBtnClicked // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponToolbarGun
// Size: 0x4d0 (Inherited: 0x2b8)
class UDFMMobileWeaponToolbarGun : public UDFMWeaponBarBase {
public:

	struct FWeaponToolBarTypeHelper WeaponToolBarTypeHelper; // 0x2b8(0x100)
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct TMap<struct FSoftObjectPath, struct UPaperSprite*> LoadedSprites; // 0x3c0(0x50)
	struct UButton* WeaponBtn; // 0x410(0x08)
	struct UDFMImage* WeaponIcon; // 0x418(0x08)
	struct UWidgetAnimation* CountingLoopAnim; // 0x420(0x08)
	struct UWidgetAnimation* AddBulletAnim; // 0x428(0x08)
	struct UWidgetAnimation* BulletChangeAnim; // 0x430(0x08)
	struct UWidgetAnimation* WeaponSelectedAnim; // 0x438(0x08)
	struct UTextBlock* AmmoCountText; // 0x440(0x08)
	struct UTextBlock* CarriedAmmoCountText; // 0x448(0x08)
	struct UTextBlock* CarriedAmmoAddedCountText; // 0x450(0x08)
	struct TArray<struct FLinearColor> BulletColorByLevel; // 0x458(0x10)
	struct TMap<struct UWidgetAnimation*, struct FTimerHandle> WidgetAnimHandles; // 0x468(0x50)
	char pad_4B8[0x18]; // 0x4b8(0x18)

	void OnBipodDeployStatusChange(uint64_t WeaponGuid, bool bIsDeploy); // Function DFMGameHud.DFMMobileWeaponToolbarGun.OnBipodDeployStatusChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponToolbarKnife
// Size: 0x2e8 (Inherited: 0x2b8)
class UDFMMobileWeaponToolbarKnife : public UDFMWeaponBarBase {
public:

	struct UButton* WeaponBtn; // 0x2b8(0x08)
	struct UImage* WeaponSelectedIcon; // 0x2c0(0x08)
	struct UWidgetAnimation* WeaponSelectedAnim; // 0x2c8(0x08)
	struct UDFMImage* WeaponIcon; // 0x2d0(0x08)
	struct UCanvasPanel* CanvasPanel_56; // 0x2d8(0x08)
	char pad_2E0[0x8]; // 0x2e0(0x08)

	void BP_SetSelected(bool bSelected); // Function DFMGameHud.DFMMobileWeaponToolbarKnife.BP_SetSelected // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMRightKeyTipsSkillView
// Size: 0x3e8 (Inherited: 0x388)
class UDFMRightKeyTipsSkillView : public UDFMRightKeyTipsView {
public:

	struct TMap<int32_t, struct FRightKeyTipsSkillDataList> TipsDataMap; // 0x388(0x50)
	struct TArray<struct UUserWidget*> TipsDataWidgetList; // 0x3d8(0x10)

	void UpdateTipsData(int32_t SkillId, struct TArray<struct FRightKeyTipsSkillData>& NameList); // Function DFMGameHud.DFMRightKeyTipsSkillView.UpdateTipsData // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFPCOperationDownloadView
// Size: 0x2c0 (Inherited: 0x2a8)
class UDFPCOperationDownloadView : public UDFPCOperationItemView {
public:

	struct UDFMCommonQuality* Quality; // 0x2a8(0x08)
	struct UDFMCommonIconImage* Icon; // 0x2b0(0x08)
	struct UTextBlock* ItemName; // 0x2b8(0x08)

	void ShowIcon(struct AActor* inActor, struct FName InItemIDName); // Function DFMGameHud.DFPCOperationDownloadView.ShowIcon // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFPCOperationFireMissileView
// Size: 0x308 (Inherited: 0x2a8)
class UDFPCOperationFireMissileView : public UDFPCOperationItemView {
public:

	struct TArray<struct UDFPCOperationFireMissileItemView*> CachedFireMissileItemArray; // 0x2a8(0x10)
	struct TArray<struct FName> CachedFireMissileItemNameArray; // 0x2b8(0x10)
	struct TArray<struct UImage*> CachedPercentImageArray; // 0x2c8(0x10)
	struct TArray<struct FName> CachedPercentImageNameArray; // 0x2d8(0x10)
	struct FName DFCommonButtonWidgetName; // 0x2e8(0x08)
	struct FName DFCommonButtonName_Mobile; // 0x2f0(0x08)
	struct FName DFCommonButtonName_HD; // 0x2f8(0x08)
	struct UDFCommonButton* CachedDFCommonButton; // 0x300(0x08)

	void OnSomeoneItemFired(); // Function DFMGameHud.DFPCOperationFireMissileView.OnSomeoneItemFired // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFPCOperationFireRocketView
// Size: 0x2a8 (Inherited: 0x2a8)
class UDFPCOperationFireRocketView : public UDFPCOperationItemView {
public:


	void OnFireState(int32_t InState, bool b1P, struct AActor* InHackPC, int32_t HasClickState); // Function DFMGameHud.DFPCOperationFireRocketView.OnFireState // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFPCOperationOpenDoorView
// Size: 0x2a8 (Inherited: 0x2a8)
class UDFPCOperationOpenDoorView : public UDFPCOperationItemView {
public:


	void OnOpenState(int32_t InState, bool b1P, struct AActor* InHackPC); // Function DFMGameHud.DFPCOperationOpenDoorView.OnOpenState // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.UnopenExitHudView
// Size: 0x3a0 (Inherited: 0x390)
class UUnopenExitHudView : public UExitHudDisplayView {
public:

	struct UTextBlock* ExitNameText; // 0x390(0x08)
	struct UTextBlock* ExitOpenTimeText; // 0x398(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.HeadShotTipWidgetView
// Size: 0x2f0 (Inherited: 0x2e0)
class UHeadShotTipWidgetView : public UKillTipsLoopListItemWidget {
public:

	struct UTextBlock* NameText; // 0x2e0(0x08)
	struct UTextBlock* ExpText; // 0x2e8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.KillStreakTipWidgetView
// Size: 0x2f0 (Inherited: 0x2e0)
class UKillStreakTipWidgetView : public UKillTipsLoopListItemWidget {
public:

	struct UTextBlock* DescText; // 0x2e0(0x08)
	struct UTextBlock* ExpText; // 0x2e8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorAddAmmoAppearance
// Size: 0xa0 (Inherited: 0x30)
class UInteractorAddAmmoAppearance : public UInteractorSizeBoxExtraAppearance {
public:

	struct FString AddAmmoTipsStr; // 0x30(0x10)
	struct TMap<enum class EAddAmmoFailReason, struct FString> ErrorTipsMap; // 0x40(0x50)
	struct FString AcquireWidgetSwitcherName; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorSizeBoxAcquireItemAppearance
// Size: 0x60 (Inherited: 0x30)
class UInteractorSizeBoxAcquireItemAppearance : public UInteractorSizeBoxExtraAppearance {
public:

	struct FString AcquireWidgetSwitcherName; // 0x30(0x10)
	struct FString NoItemTips; // 0x40(0x10)
	float ShowDuration; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UInteractorOperateSizeBox* CachedSizeBox; // 0x58(0x08)

	void OnClickEvent(); // Function DFMGameHud.InteractorSizeBoxAcquireItemAppearance.OnClickEvent // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorSizeBoxCDAppearance
// Size: 0x40 (Inherited: 0x30)
class UInteractorSizeBoxCDAppearance : public UInteractorSizeBoxExtraAppearance {
public:

	struct FString CDTextName; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorSizeBoxGeneralSkillAppearance
// Size: 0x90 (Inherited: 0x30)
class UInteractorSizeBoxGeneralSkillAppearance : public UInteractorSizeBoxExtraAppearance {
public:

	struct FText TipText; // 0x30(0x18)
	struct FText NoSkillText; // 0x48(0x18)
	struct FText AllowInteractText; // 0x60(0x18)
	struct FString InteractTextName; // 0x78(0x10)
	struct UInteractorOperateSizeBox* CachedSizeBox; // 0x88(0x08)

	void OnClickEvent(); // Function DFMGameHud.InteractorSizeBoxGeneralSkillAppearance.OnClickEvent // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorSizeBoxOwnedAppearance
// Size: 0x70 (Inherited: 0x30)
class UInteractorSizeBoxOwnedAppearance : public UInteractorSizeBoxExtraAppearance {
public:

	struct FText UnvalidText; // 0x30(0x18)
	struct FText ValidText; // 0x48(0x18)
	struct UTextBlock* NameText; // 0x60(0x08)
	struct UButton* ClickBtn; // 0x68(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.InteractorSizeBoxRunOutAppearance
// Size: 0x70 (Inherited: 0x30)
class UInteractorSizeBoxRunOutAppearance : public UInteractorSizeBoxExtraAppearance {
public:

	struct FText RunOutText; // 0x30(0x18)
	struct FText AllowInteractText; // 0x48(0x18)
	struct FString InteractTextName; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.LoadingMovieView
// Size: 0x2e0 (Inherited: 0x2c0)
class ULoadingMovieView : public ULoadingViewBase {
public:

	struct UDFCommonMediaView* CommonMediaView; // 0x2c0(0x08)
	struct UCanvasPanel* PreShowCanvasPanel; // 0x2c8(0x08)
	struct FString PendingPlayMediaRowName; // 0x2d0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.LoadingView
// Size: 0x480 (Inherited: 0x2c0)
class ULoadingView : public ULoadingViewBase {
public:

	struct UProgressBar* LoadingProgressBar; // 0x2c0(0x08)
	struct UProgressBar* LoadingProgressBar_PCMaterial; // 0x2c8(0x08)
	struct UTextBlock* LoadingProgressText; // 0x2d0(0x08)
	struct UTextBlock* LoadingTip; // 0x2d8(0x08)
	struct UTextBlock* ModeNameText; // 0x2e0(0x08)
	struct UTextBlock* MapNameText; // 0x2e8(0x08)
	struct UTextBlock* ModeRuleText; // 0x2f0(0x08)
	struct UImage* BgImage; // 0x2f8(0x08)
	char pad_300[0x8]; // 0x300(0x08)
	/*struct FMulticastInlineDelegate*/char OnPercentageUpdated[0x10]; // 0x308(0x10)
	char pad_318[0x60]; // 0x318(0x60)
	struct ADFMPlayerController* PlayerOwner; // 0x378(0x08)
	struct UTexture2D* MapTexture; // 0x380(0x08)
	char pad_388[0xf8]; // 0x388(0xf8)

	bool ShouldShowGuideInfo(); // Function DFMGameHud.LoadingView.ShouldShowGuideInfo // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ModeLoadingView
// Size: 0x2f0 (Inherited: 0x2c0)
class UModeLoadingView : public ULoadingViewBase {
public:

	char pad_2C0[0x18]; // 0x2c0(0x18)
	struct UTextBlock* ProgressText; // 0x2d8(0x08)
	char pad_2E0[0x10]; // 0x2e0(0x10)

	void BP_UpdateWidget(float DeltaTime); // Function DFMGameHud.ModeLoadingView.BP_UpdateWidget // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WarfareLoadingView
// Size: 0x3f8 (Inherited: 0x2c0)
class UWarfareLoadingView : public ULoadingViewBase {
public:

	struct UDFCommonMediaView* CommonMediaView; // 0x2c0(0x08)
	struct UTextBlock* ModeNameText; // 0x2c8(0x08)
	struct UTextBlock* MapNameText; // 0x2d0(0x08)
	struct UTextBlock* LoadingProgressText; // 0x2d8(0x08)
	struct UUserWidget* CommonJumpOver; // 0x2e0(0x08)
	struct UDFButton* SkipButton; // 0x2e8(0x08)
	/*struct FMulticastInlineDelegate*/char OnPercentageUpdated[0x10]; // 0x2f0(0x10)
	struct FName DisplayInputActionName_Skip; // 0x300(0x08)
	char pad_308[0xf0]; // 0x308(0xf0)

	void OnSkipButtonClicked(); // Function DFMGameHud.WarfareLoadingView.OnSkipButtonClicked // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SafeHouseMapHUDController
// Size: 0x348 (Inherited: 0x2e0)
class USafeHouseMapHUDController : public UMapBaseHUDController {
public:

	struct TMap<struct FName, struct UMapIconViewController*> AllIconViewControllerArr; // 0x2e0(0x50)
	char pad_330[0x18]; // 0x330(0x18)

	void OnAsyncLoadMapLocationTable(struct FSoftObjectPath& SoftObjectPath); // Function DFMGameHud.SafeHouseMapHUDController.OnAsyncLoadMapLocationTable // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLMapHUDController
// Size: 0xc88 (Inherited: 0x2e0)
class USOLMapHUDController : public UMapBaseHUDController {
public:

	struct FName LastTryTrackTarget; // 0x2e0(0x08)
	int32_t TotalIconControllerClass; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	/*struct TSet<struct APlayerExitBase*>*/char PlayerExitBaseArrCache[0x50]; // 0x2f0(0x50)
	struct TMap<struct FName, struct UDFMExitIconHUDController*> ExitIconControllerCache; // 0x340(0x50)
	struct TMap<struct FName, struct UDFMEvacRefMapIconViewController*> EvacRefMapIconViewControllerCache; // 0x390(0x50)
	struct TMap<struct FName, struct UDoorIconViewController*> DoorIconControllerCache; // 0x3e0(0x50)
	struct TMap<struct FName, struct FMapLocationStruct> POILocationStructCacheMap; // 0x430(0x50)
	struct TMap<struct FName, struct UMapLocationNameViewController*> POINameViewControllerCache; // 0x480(0x50)
	struct TMap<struct FName, struct UShopStationViewController*> ShopStationViewControllerCache; // 0x4d0(0x50)
	struct TMap<struct FName, struct UPOIProductViewController*> POIProductViewControllerCache; // 0x520(0x50)
	struct TMap<struct FName, struct UBossLocationViewController*> BossLocationViewControllerCache; // 0x570(0x50)
	struct TMap<struct FName, struct UHighValueBoxViewController*> HighValueBoxViewControllerCache; // 0x5c0(0x50)
	/*struct TSet<struct UHighValueBoxViewController*>*/char HighValueBoxViewControllerCache_WithIntroEvent[0x50]; // 0x610(0x50)
	/*struct TSet<struct UHighValueBoxViewController*>*/char HighValueBoxViewControllerCache_WithoutIntroEvent[0x50]; // 0x660(0x50)
	struct TMap<struct FName, struct UZiplineMapIconViewController*> ZiplineViewControllerCache; // 0x6b0(0x50)
	struct TMap<struct FName, struct UScouterMapIconViewController*> ScouterViewControllerCache; // 0x700(0x50)
	struct TMap<struct FName, struct UIronGauzeMapIconViewController*> IronGauzeViewControllerCache; // 0x750(0x50)
	struct TArray<struct UMapIconViewController*> BossRelatedIconControllerArr; // 0x7a0(0x10)
	struct TArray<struct UMapIconViewController*> POIRelatedIconControllerArr; // 0x7b0(0x10)
	struct TArray<struct UMapIconViewController*> SupplyStationRelatedIconControllerArr; // 0x7c0(0x10)
	struct TArray<struct UMapIconViewController*> UnlockPointRelatedIconControllerArr; // 0x7d0(0x10)
	char pad_7E0[0x58]; // 0x7e0(0x58)
	struct TArray<struct USOLWishItemMarkerController*> WishItemMarkerControllerArr; // 0x838(0x10)
	struct TMap<struct FName, struct USOLWishItemMarkerController*> WishItemMarkerControllerCache; // 0x848(0x50)
	char pad_898[0x10]; // 0x898(0x10)
	/*struct TSet<struct APlayerExitBase*>*/char NeedRemovePlayerExit[0x50]; // 0x8a8(0x50)
	struct AGameState_PVPVE* GS; // 0x8f8(0x08)
	struct TMap<uint64_t, struct UDeadBodyIconViewController*> DeadBodyIconControllerCache; // 0x900(0x50)
	char pad_950[0x8]; // 0x950(0x08)
	struct TMap<struct ADFMCharacter*, float> AIAlertCache; // 0x958(0x50)
	struct TMap<struct ADFMCharacter*, float> PlayerAlertCache; // 0x9a8(0x50)
	float AIAlertProtectTime; // 0x9f8(0x04)
	float PlayerAlertTrackTime; // 0x9fc(0x04)
	char pad_A00[0x8]; // 0xa00(0x08)
	struct TArray<struct FName> FakeEnemyMarkerControllerArray; // 0xa08(0x10)
	struct TMap<int64_t, struct FName> ContractIdNameMap; // 0xa18(0x50)
	struct TMap<struct FName, struct UContractPointIconViewController*> ContractControllerMap; // 0xa68(0x50)
	struct TArray<struct UContractPointIconViewController*> ContractControllerArr; // 0xab8(0x10)
	char pad_AC8[0x8]; // 0xac8(0x08)
	struct UContractObjectionIconViewController* CurContractObjectionIconViewController; // 0xad0(0x08)
	struct TMap<struct FName, struct UMapItemRangeViewController*> QuestMapItemRangeControllerCache; // 0xad8(0x50)
	struct TMap<int64_t, struct FName> ContractObjectionIdNameMap; // 0xb28(0x50)
	struct TMap<int64_t, struct FName> ContractObjectionRangeNameMap; // 0xb78(0x50)
	char pad_BC8[0x8]; // 0xbc8(0x08)
	struct TMap<struct FName, struct UQuestObjectionIconViewController*> QuestObjectionControllerCache; // 0xbd0(0x50)
	struct TArray<struct UQuestObjectionIconViewController*> QuestObjectionControllerArr; // 0xc20(0x10)
	char pad_C30[0x8]; // 0xc30(0x08)
	struct TMap<struct FName, struct UQuestObjectionRangeViewController*> QuestRangeControllerCache; // 0xc38(0x50)

	void UpdateQuestProgress(int64_t UpdateQuestId, char ObjType); // Function DFMGameHud.SOLMapHUDController.UpdateQuestProgress // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.QuestMarkWindowHUDIconView
// Size: 0x348 (Inherited: 0x2e8)
class UQuestMarkWindowHUDIconView : public UMarkWindowHUDIconView {
public:

	float MarkLimitTime; // 0x2e8(0x04)
	float Progress; // 0x2ec(0x04)
	bool HideDistance; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct UTextBlock* CountDownTextWidget; // 0x2f8(0x08)
	char pad_300[0x8]; // 0x300(0x08)
	struct AGPGameState* GPGameState; // 0x308(0x08)
	struct UTextBlock* DownCountDownTextWidget; // 0x310(0x08)
	struct UTextBlock* UpDistTextWidget; // 0x318(0x08)
	struct UDFVerticalBox* OutScreenBox; // 0x320(0x08)
	struct UImage* Image_ProcessBar; // 0x328(0x08)
	struct UImage* Image_ProcessBar_BG; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)
	struct UInteractorManningComponent* InteractorManningComponent; // 0x340(0x08)

	void UpdateView(struct UMarkWindowHUDView* MarkWindow, float InDeltaTime); // Function DFMGameHud.QuestMarkWindowHUDIconView.UpdateView // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SettlementPlayerInfoHUDView
// Size: 0x4c8 (Inherited: 0x4c8)
class USettlementPlayerInfoHUDView : public UPlayerInfoHUDView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RouletteEmoteButton
// Size: 0x3b0 (Inherited: 0x3a8)
class URouletteEmoteButton : public URouletteButton {
public:

	int32_t EmoteId; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ScoutMarkAlarmWidget
// Size: 0x2a0 (Inherited: 0x2a0)
class UScoutMarkAlarmWidget : public UScoutMarkWidgetBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.ScoutMarkWidget
// Size: 0x300 (Inherited: 0x2a0)
class UScoutMarkWidget : public UScoutMarkWidgetBase {
public:

	struct UImage* ProgressBar; // 0x2a0(0x08)
	struct UTextBlock* DistToCharacter; // 0x2a8(0x08)
	struct UImage* ArrowImage; // 0x2b0(0x08)
	struct FLinearColor NormalColor; // 0x2b8(0x10)
	struct FLinearColor FightColor; // 0x2c8(0x10)
	struct FString MarkSuccessAudioName; // 0x2d8(0x10)
	char pad_2E8[0x18]; // 0x2e8(0x18)

	void BP_SetArrowImage(int32_t Type); // Function DFMGameHud.ScoutMarkWidget.BP_SetArrowImage // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_EvacuateBtn
// Size: 0x350 (Inherited: 0x2d0)
class USOLBigMapHUDView_EvacuateBtn : public USOLBigMapHUDView_CommonBtn {
public:

	struct UDFMCommonImage* Image_Icon; // 0x2d0(0x08)
	struct UDFMCommonImage* Image_Event; // 0x2d8(0x08)
	struct UDFMCommonImage* Image_Trigger; // 0x2e0(0x08)
	struct USOLBigMapHUDView_TimeListMapTips* WBP_Map_TimeList; // 0x2e8(0x08)
	struct APlayerExitBase* PlayerExit; // 0x2f0(0x08)
	struct AInteractorBase* Interactor; // 0x2f8(0x08)
	char pad_300[0x8]; // 0x300(0x08)
	struct FSoftObjectPath ExitIconDefault; // 0x308(0x18)
	struct FSoftObjectPath TriggerIconDefault; // 0x320(0x18)
	char pad_338[0x18]; // 0x338(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_KeyBtn
// Size: 0x380 (Inherited: 0x2d0)
class USOLBigMapHUDView_KeyBtn : public USOLBigMapHUDView_CommonBtn {
public:

	struct UUserWidget* WBP_SlotCompQuality; // 0x2d0(0x08)
	struct UImage* wtBottomLine; // 0x2d8(0x08)
	struct TMap<int32_t, struct FLinearColor> QualityColorMap; // 0x2e0(0x50)
	char pad_330[0x50]; // 0x330(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_MissionBtn
// Size: 0x470 (Inherited: 0x2d0)
class USOLBigMapHUDView_MissionBtn : public USOLBigMapHUDView_CommonBtn {
public:

	struct UImage* TaskIconDe; // 0x2d0(0x08)
	struct UHorizontalBox* HorizontalBox_Time; // 0x2d8(0x08)
	struct UDFMCommonImage* Image_Time; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_Time; // 0x2e8(0x08)
	struct UWidget* WidgetReset; // 0x2f0(0x08)
	struct UWidget* Below; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_Count; // 0x300(0x08)
	struct UTextBlock* TextBlock_Status; // 0x308(0x08)
	struct URichTextBlock* RichTextBlock_Desc; // 0x310(0x08)
	struct FSoftObjectPath FinishedIcon; // 0x318(0x18)
	struct FSoftObjectPath FailedIcon; // 0x330(0x18)
	char pad_348[0xa0]; // 0x348(0xa0)
	int32_t QuestStatus; // 0x3e8(0x04)
	bool QuestIsActivity; // 0x3ec(0x01)
	char pad_3ED[0xb]; // 0x3ed(0x0b)
	struct TArray<uint64_t> PlayerExitIdList; // 0x3f8(0x10)
	struct TArray<uint64_t> NoActivePlayerExitIdList; // 0x408(0x10)
	uint64_t CurrentPlayerExitId; // 0x418(0x08)
	struct FName CurrentPlayerExitMapIconName; // 0x420(0x08)
	enum class EQuestPlayerExitState QuestPlayerExitState; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct TArray<uint64_t> DecipherDeviceIdList; // 0x430(0x10)
	bool bNoExistQuestDecipherDevice; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	uint64_t CurrentDecipherDeviceId; // 0x448(0x08)
	struct FName CurrentDecipherDeviceMapIconName; // 0x450(0x08)
	char pad_458[0x10]; // 0x458(0x10)
	struct USOLBigMapHUDView_MultiBtnBox* MultiBtnBox; // 0x468(0x08)

	void OnQuestObjectionTimerUpdate(uint64_t InPlayerUin, int64_t QuestID, int64_t QuestObjectionID, float TimeSpent); // Function DFMGameHud.SOLBigMapHUDView_MissionBtn.OnQuestObjectionTimerUpdate // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_WishBtn
// Size: 0x360 (Inherited: 0x2d0)
class USOLBigMapHUDView_WishBtn : public USOLBigMapHUDView_CommonBtn {
public:

	struct UUserWidget* WBP_SlotCompSelected; // 0x2d0(0x08)
	struct UUserWidget* WBP_ShopItemTemplate; // 0x2d8(0x08)
	struct UDFMCommonIconImage* wtItemIcon; // 0x2e0(0x08)
	struct UImage* wtMainIcon_InIcon; // 0x2e8(0x08)
	struct UDFMCommonQuality* wtItemQuality; // 0x2f0(0x08)
	struct UUserWidget* wtTopLeftIconText; // 0x2f8(0x08)
	struct UImage* wtMainIcon_InName; // 0x300(0x08)
	struct UTextBlock* wtMainText; // 0x308(0x08)
	struct UTextBlock* wtMainText_2; // 0x310(0x08)
	struct UUserWidget* wtBottomLeftIconText; // 0x318(0x08)
	struct UUserWidget* wtBottomRightIconText; // 0x320(0x08)
	char pad_328[0x38]; // 0x328(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.WeaponInputDefault
// Size: 0x80 (Inherited: 0x30)
class UWeaponInputDefault : public UWeaponInputBase {
public:

	char pad_30[0x50]; // 0x30(0x50)

	void OnWeaponStartFireFailed(char ret); // Function DFMGameHud.WeaponInputDefault.OnWeaponStartFireFailed // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityDetectorHudView
// Size: 0x950 (Inherited: 0x940)
class UAbilityDetectorHudView : public UBigMapHUDView {
public:

	struct UWidget* DetectorMainAnimWidget; // 0x940(0x08)
	float AutoZoomTimeConfig; // 0x948(0x04)
	char pad_94C[0x4]; // 0x94c(0x04)

	void OnDetectorMapShow(bool Show); // Function DFMGameHud.AbilityDetectorHudView.OnDetectorMapShow // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AbilityDetectorHudViewEx
// Size: 0x958 (Inherited: 0x940)
class UAbilityDetectorHudViewEx : public UBigMapHUDView {
public:

	struct UWidget* DetectorMainAnimWidget; // 0x940(0x08)
	struct UUserWidget* SkillsPrologueAnimMain; // 0x948(0x08)
	float AutoZoomTimeConfig; // 0x950(0x04)
	char pad_954[0x4]; // 0x954(0x04)

	void OnDetectorMapShow(bool Show); // Function DFMGameHud.AbilityDetectorHudViewEx.OnDetectorMapShow // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BigMapHUDViewSafeHouse
// Size: 0x940 (Inherited: 0x940)
class UBigMapHUDViewSafeHouse : public UBigMapHUDView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.RaidBigMapHUDView_Main
// Size: 0xac8 (Inherited: 0x940)
class URaidBigMapHUDView_Main : public UBigMapHUDView {
public:

	char pad_940[0x1c]; // 0x940(0x1c)
	float IconChangeThreshold; // 0x95c(0x04)
	float SidePanelPushMapRatio; // 0x960(0x04)
	char pad_964[0x4]; // 0x964(0x04)
	int32_t CurrentStageMapType; // 0x968(0x04)
	float PlayerWaveAnimLength; // 0x96c(0x04)
	char pad_970[0x8]; // 0x970(0x08)
	struct UButton* SginClearBtn; // 0x978(0x08)
	struct UScaleBox* TrackingScaleBox; // 0x980(0x08)
	struct UImage* SidePanelImage; // 0x988(0x08)
	char pad_990[0x4]; // 0x990(0x04)
	float SnapAngelRadius; // 0x994(0x04)
	float SnapBorderSafeRatio; // 0x998(0x04)
	char pad_99C[0x4]; // 0x99c(0x04)
	struct UTexture2D* WorldMapTexture; // 0x9a0(0x08)
	struct UImage* WorldMapBase; // 0x9a8(0x08)
	struct UMaterialInstanceDynamic* WorldMapDMI; // 0x9b0(0x08)
	/*struct TSet<struct FQuestFullID>*/char ActiveObjcetionTrackSet[0x50]; // 0x9b8(0x50)
	/*struct TSet<struct FQuestFullID>*/char InActiveObjcetionTrackSet[0x50]; // 0xa08(0x50)
	char pad_A58[0x28]; // 0xa58(0x28)
	enum class ERaidLiveTabType CurLiveTabType; // 0xa80(0x01)
	char pad_A81[0x7]; // 0xa81(0x07)
	struct URaidBigMapHUDView_LiveTabList* WBP_Map_LiveTab_List; // 0xa88(0x08)
	struct UCanvasPanel* CanvasPanel_QuestProcess; // 0xa90(0x08)
	struct UUserWidget* WBP_Map_RaidTips; // 0xa98(0x08)
	struct URaidBigMapHUDView_SidePanel* WBP_Map_SidePanel; // 0xaa0(0x08)
	struct USOLBigMapHUDView_CommonBtn* BtnSelected; // 0xaa8(0x08)
	struct UMapIconViewController* SelectedIconViewController; // 0xab0(0x08)
	char pad_AB8[0x10]; // 0xab8(0x10)

	void UpdateQuestProgress(int64_t UpdateQuestId, char ObjType); // Function DFMGameHud.RaidBigMapHUDView_Main.UpdateQuestProgress // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SeamlessEntryHUDView_Main
// Size: 0xbe8 (Inherited: 0x940)
class USeamlessEntryHUDView_Main : public UBigMapHUDView {
public:

	struct UCanvasPanel* WidgetPanel; // 0x940(0x08)
	struct UDFTextBlock* ProgressTextBlock; // 0x948(0x08)
	struct USOLBigMapHUDView_SidePanel* WBP_Map_SidePanel; // 0x950(0x08)
	struct UDFCommonTabWidget* DFCommonTabWidget_Tab_HD; // 0x958(0x08)
	char pad_960[0x8]; // 0x960(0x08)
	struct USOLBigMapHUDView_CommonBtn* BtnSelected; // 0x968(0x08)
	struct USOLBigMapHUDView_TipsBox* WBP_Map_Tips_Box; // 0x970(0x08)
	struct TMap<struct UMapItemHUDView*, struct FVector2D> MapItemLocationMap; // 0x978(0x50)
	float MapItemMenuRangePercentage; // 0x9c8(0x04)
	float MapItemMenuScale; // 0x9cc(0x04)
	char pad_9D0[0x8]; // 0x9d0(0x08)
	struct UUserWidget* WBP_DFCommonIconCheckButton; // 0x9d8(0x08)
	struct UDFCommonCheckButton* CheckButton_Task; // 0x9e0(0x08)
	char pad_9E8[0x8]; // 0x9e8(0x08)
	struct UUserWidget* CommonButtonIcon_Activity; // 0x9f0(0x08)
	struct UDFCommonCheckButton* CheckBox_SeasonActivity; // 0x9f8(0x08)
	struct UMapIconViewController* SelectedIconViewController; // 0xa00(0x08)
	char pad_A08[0x8]; // 0xa08(0x08)
	struct TMap<int32_t, struct UContractPointIconViewController*> LastTimeContractControllersMap; // 0xa10(0x50)
	bool ControlByUIState; // 0xa60(0x01)
	char pad_A61[0x7]; // 0xa61(0x07)
	struct UWidgetAnimation* WBP_SeamlessEntry_Main_in; // 0xa68(0x08)
	struct UWidgetAnimation* WBP_SeamlessEntry_Main_loop; // 0xa70(0x08)
	struct UWidgetAnimation* WBP_SeamlessEntry_Main_out; // 0xa78(0x08)
	struct UDFTextBlock* TxtLoadingTips; // 0xa80(0x08)
	char pad_A88[0x30]; // 0xa88(0x30)
	struct USOLBigMapHUDView_TipsBox* WBP_Map_Tips_Box_Float; // 0xab8(0x08)
	struct FVector2D TipsBoxFloatOffset; // 0xac0(0x08)
	struct FVector2D ViewportSize; // 0xac8(0x08)
	struct FVector2D MapSizeInViewport; // 0xad0(0x08)
	float HDBigMapSafeRatio; // 0xad8(0x04)
	char pad_ADC[0x4]; // 0xadc(0x04)
	struct UDFNamedSlot* DFNamedSlot_BottomBar; // 0xae0(0x08)
	struct UClass* ClassSeamlessEnter_MainKey; // 0xae8(0x08)
	struct USeamlessEntryHUDView_MainKey* SeamlessEntryHUDView_MainKey; // 0xaf0(0x08)
	struct UDFNamedSlot* DFNamedSlot_ChatPanel; // 0xaf8(0x08)
	struct UClass* ClassSeamlessEnter_ChatPanel; // 0xb00(0x08)
	struct USeamlessEntryHUDView_ChatPanel* SeamlessEntryHUDView_ChatPanel; // 0xb08(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_PC; // 0xb10(0x08)
	struct UDFVerticalBox* DFVerticalBox_Legend; // 0xb18(0x08)
	char pad_B20[0x10]; // 0xb20(0x10)
	struct UClass* LegendMapTipsClass; // 0xb30(0x08)
	char pad_B38[0x10]; // 0xb38(0x10)
	struct UUserWidget* CommonIconButton_SignClear; // 0xb48(0x08)
	struct UDFCommonButton* CommonButton_SignClear; // 0xb50(0x08)
	char pad_B58[0x4]; // 0xb58(0x04)
	float AllMapViewScale; // 0xb5c(0x04)
	char pad_B60[0x8]; // 0xb60(0x08)
	struct UDFImage* DFImage_MapFloorMask; // 0xb68(0x08)
	struct USOLBigMap_MapLocation_Mobile* WBP_Map_Location_Mobile; // 0xb70(0x08)
	struct USOLBigMap_MapFloor_Mobile* WBP_Map_Floor_Mobile; // 0xb78(0x08)
	struct USOLBigMap_MapLocation_HD* WBP_Map_Location_HD; // 0xb80(0x08)
	struct USOLBigMap_MapFloor_HD* WBP_Map_Floor_HD; // 0xb88(0x08)
	bool bDisableMultiFloor; // 0xb90(0x01)
	char pad_B91[0x3]; // 0xb91(0x03)
	struct FGlitchEffectParameters OutGlitchEffectParam; // 0xb94(0x18)
	char pad_BAC[0x28]; // 0xbac(0x28)
	bool bEnableForbiddenCheck; // 0xbd4(0x01)
	char pad_BD5[0x3]; // 0xbd5(0x03)
	struct TArray<struct UAdjustableMapItemBase*> CurMapRangeHUDViewArray; // 0xbd8(0x10)

	void UpdateAspectRatio(); // Function DFMGameHud.SeamlessEntryHUDView_Main.UpdateAspectRatio // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLBigMapHUDView_Main
// Size: 0xdf0 (Inherited: 0x940)
class USOLBigMapHUDView_Main : public UBigMapHUDView {
public:

	char pad_940[0x18]; // 0x940(0x18)
	float ScaleThreshold_POIName; // 0x958(0x04)
	float ScaleThreshold_MacroMap; // 0x95c(0x04)
	bool bEnableForbiddenCheck; // 0x960(0x01)
	char pad_961[0x7]; // 0x961(0x07)
	struct UScaleBox* TrackingScaleBox_1; // 0x968(0x08)
	struct UWidget* TrackingBox_1; // 0x970(0x08)
	struct UWidget* TrackingBox_2; // 0x978(0x08)
	struct UWidget* TrackingBox_3; // 0x980(0x08)
	struct TArray<struct UWidget*> TrackingBoxArray; // 0x988(0x10)
	float SnapBorderIntersectionRatio; // 0x998(0x04)
	struct FVector2D SnapBorderMarginSize; // 0x99c(0x08)
	char pad_9A4[0x4]; // 0x9a4(0x04)
	/*struct TSet<struct FQuestFullID>*/char ActiveObjcetionTrackSet[0x50]; // 0x9a8(0x50)
	/*struct TSet<struct FQuestFullID>*/char InActiveObjcetionTrackSet[0x50]; // 0x9f8(0x50)
	char pad_A48[0x8]; // 0xa48(0x08)
	struct USOLPlayerItemView* PlayerMapItem; // 0xa50(0x08)
	struct USOLPlayerDeathItemHudView* PlayerMapDeathItem; // 0xa58(0x08)
	char pad_A60[0x18]; // 0xa60(0x18)
	struct USOLBigMapHUDView_SidePanel* WBP_Map_SidePanel; // 0xa78(0x08)
	char pad_A80[0x8]; // 0xa80(0x08)
	struct USOLBigMapHUDView_TipsBox* WBP_Map_Tips_Box; // 0xa88(0x08)
	struct USOLBigMapHUDView_CommonBtn* BtnSelected; // 0xa90(0x08)
	char pad_A98[0x8]; // 0xa98(0x08)
	struct UMapIconViewController* SelectedIconViewController; // 0xaa0(0x08)
	struct UMapIconViewController* TrackedIconViewController; // 0xaa8(0x08)
	struct UDFCommonButton* CommonButton_Self; // 0xab0(0x08)
	struct USOLBigMapHUDView_InfoSwitch* InfoSwitch_Boss; // 0xab8(0x08)
	struct USOLBigMapHUDView_InfoSwitch* InfoSwitch_POI; // 0xac0(0x08)
	struct USOLBigMapHUDView_InfoSwitch* InfoSwitch_SupplyStation; // 0xac8(0x08)
	struct USOLBigMapHUDView_InfoSwitch* InfoSwitch_UnlockPoint; // 0xad0(0x08)
	struct UUserWidget* CommonIconButton_SignClear; // 0xad8(0x08)
	struct UDFCommonButton* CommonButton_SignClear; // 0xae0(0x08)
	char pad_AE8[0x8]; // 0xae8(0x08)
	struct UUserWidget* CommonCheckInstruction_Legend; // 0xaf0(0x08)
	struct UCheckbox* CheckBox_Legend; // 0xaf8(0x08)
	char pad_B00[0x18]; // 0xb00(0x18)
	struct UClass* LegendMapTipsClass; // 0xb18(0x08)
	struct USOLBigMapHUDView_LegendList* WBP_Map_Tips_legendList; // 0xb20(0x08)
	struct UClass* InfoSwitchClass; // 0xb28(0x08)
	struct UDFButton* LegendCloseBtn; // 0xb30(0x08)
	char pad_B38[0x8]; // 0xb38(0x08)
	struct UDFMCommonButtonIcon* CommonButtonIcon_Task; // 0xb40(0x08)
	struct UDFCheckBox* CheckBox_Task; // 0xb48(0x08)
	char pad_B50[0x8]; // 0xb50(0x08)
	struct UDFMCommonButtonIcon* CommonButtonIcon_Activity; // 0xb58(0x08)
	struct UDFCheckBox* CheckBox_SeasonActivity; // 0xb60(0x08)
	char pad_B68[0x8]; // 0xb68(0x08)
	struct UDFMCommonButtonIcon* CommonButtonIcon_Wishlist; // 0xb70(0x08)
	struct UDFCheckBox* CheckBox_Wishlist; // 0xb78(0x08)
	char pad_B80[0x8]; // 0xb80(0x08)
	struct TMap<struct UMapItemHUDView*, struct FVector2D> MapItemLocationMap; // 0xb88(0x50)
	struct USOLBigMapHUDView_IteractBtnListMapTips* WBP_Map_Tips_IteractButtonList; // 0xbd8(0x08)
	float MapItemMenuRangePercentage; // 0xbe0(0x04)
	float MapItemMenuScale; // 0xbe4(0x04)
	struct TMap<struct FString, struct UWidgetAnimation*> AnimationMap; // 0xbe8(0x50)
	char pad_C38[0x8]; // 0xc38(0x08)
	float AllMapViewScale; // 0xc40(0x04)
	float MultiFloorZoomTime; // 0xc44(0x04)
	bool bSwitchToAllMapWhenOutMultiFloorVolume; // 0xc48(0x01)
	char pad_C49[0x7]; // 0xc49(0x07)
	struct UDFImage* DFImage_MapFloorMask; // 0xc50(0x08)
	struct USOLBigMap_MapLocation_Mobile* WBP_Map_Location_Mobile; // 0xc58(0x08)
	struct USOLBigMap_MapFloor_Mobile* WBP_Map_Floor_Mobile; // 0xc60(0x08)
	struct USOLBigMap_MapLocation_HD* WBP_Map_Location_HD; // 0xc68(0x08)
	struct USOLBigMap_MapFloor_HD* WBP_Map_Floor_HD; // 0xc70(0x08)
	char pad_C78[0x4]; // 0xc78(0x04)
	struct FVector2D ViewportSize; // 0xc7c(0x08)
	struct FVector2D MapSizeInViewport; // 0xc84(0x08)
	char pad_C8C[0x4]; // 0xc8c(0x04)
	struct UScaleBox* DFScaleBox_HDSafeRatio; // 0xc90(0x08)
	float HDBigMapSafeRatio; // 0xc98(0x04)
	char pad_C9C[0x14]; // 0xc9c(0x14)
	struct UTextBlock* DFTextBlock_RemainingTime; // 0xcb0(0x08)
	struct USOLBigMapHUDView_TipsBox* WBP_Map_Tips_Box_Float; // 0xcb8(0x08)
	struct UDFCommonTabWidget* DFCommonTabWidget_Tab_HD; // 0xcc0(0x08)
	struct UCanvasPanel* DFCanvasPanel_Legend; // 0xcc8(0x08)
	struct UScrollBox* DFScrollBox_Legend; // 0xcd0(0x08)
	struct USOLBigMapHUDView_InfoSwitch* InfoSwitch_SupplyStation_HD; // 0xcd8(0x08)
	struct USOLBigMapHUDView_InfoSwitch* InfoSwitch_UnlockPoint_HD; // 0xce0(0x08)
	struct USOLBigMapHUDView_InfoSwitch* InfoSwitch_Boss_HD; // 0xce8(0x08)
	struct USOLBigMapHUDView_InfoSwitch* InfoSwitch_POI_HD; // 0xcf0(0x08)
	struct UWrapBox* WrapBox_POILegends; // 0xcf8(0x08)
	struct UHorizontalBox* HorizontalBox_KeyTips_Mark; // 0xd00(0x08)
	struct UHorizontalBox* HorizontalBox_KeyTips_CancelMark; // 0xd08(0x08)
	struct UHorizontalBox* HorizontalBox_KeyTips_LegendHide; // 0xd10(0x08)
	struct UWidgetAnimation* Legends_AnimIn; // 0xd18(0x08)
	struct UWidgetAnimation* Legends_AnimOut; // 0xd20(0x08)
	char pad_D28[0x4]; // 0xd28(0x04)
	bool bHoverTracked; // 0xd2c(0x01)
	char pad_D2D[0x3]; // 0xd2d(0x03)
	struct UMapIconViewController* HoveredIconViewController; // 0xd30(0x08)
	char pad_D38[0x8]; // 0xd38(0x08)
	struct UCanvasPanel* PlayerAndMarkCanvasPanel_Lowest; // 0xd40(0x08)
	struct FGlitchEffectParameters OutGlitchEffectParam; // 0xd48(0x18)
	struct FGlitchEffectParameters InGlitchEffectParam; // 0xd60(0x18)
	char pad_D78[0x30]; // 0xd78(0x30)
	struct USOLBigMap_ShieldedArea* BigMap_ShieldedArea; // 0xda8(0x08)
	char pad_DB0[0x8]; // 0xdb0(0x08)
	struct USOLTimeLineComponnet* TimeLineEventComponent; // 0xdb8(0x08)
	struct UMapInfoSystem* MapInfoSystem; // 0xdc0(0x08)
	struct TArray<struct UMapLocationNameViewController*> POINameViewControllerCache; // 0xdc8(0x10)
	char pad_DD8[0x4]; // 0xdd8(0x04)
	float DestroyCreatedUIGapTime; // 0xddc(0x04)
	char pad_DE0[0x10]; // 0xde0(0x10)

	void UpdateRemainTime(float Delta); // Function DFMGameHud.SOLBigMapHUDView_Main.UpdateRemainTime // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MiniMapHUDViewRaid
// Size: 0xc40 (Inherited: 0xc38)
class UMiniMapHUDViewRaid : public UMiniMapHUDView {
public:

	int32_t CurrentStageMapType; // 0xc38(0x04)
	char pad_C3C[0x4]; // 0xc3c(0x04)

	void OnQuestStageChanged(struct FName QuestStageName); // Function DFMGameHud.MiniMapHUDViewRaid.OnQuestStageChanged // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MiniMapHUDViewSafeHouse
// Size: 0xc38 (Inherited: 0xc38)
class UMiniMapHUDViewSafeHouse : public UMiniMapHUDView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.FloorVolumeMapHUDView
// Size: 0x470 (Inherited: 0x420)
class UFloorVolumeMapHUDView : public UAdjustableMapItemBase {
public:

	struct UCanvasPanel* CanvasPanelForSize; // 0x420(0x08)
	struct UDFImage* DFImage_Tex; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)
	struct UFloorVolumeMapIconViewController* FloorVolumeMapIconViewController; // 0x438(0x08)
	bool bInvAngle; // 0x440(0x01)
	char pad_441[0x27]; // 0x441(0x27)
	struct UMaterialInstanceDynamic* MiniMapClipMID; // 0x468(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.MapItemRangeHUDView
// Size: 0x460 (Inherited: 0x420)
class UMapItemRangeHUDView : public UAdjustableMapItemBase {
public:

	struct UCanvasPanel* DFCanvasPanel_Default; // 0x420(0x08)
	struct UImage* DFMImage_BG; // 0x428(0x08)
	struct UImage* DFMImage_Circle; // 0x430(0x08)
	char pad_438[0x8]; // 0x438(0x08)
	struct UMapItemHUDView* TargetMapItem; // 0x440(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MiniMapClipMIDArr; // 0x448(0x10)
	char pad_458[0x8]; // 0x458(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLEventMapHUDView
// Size: 0x438 (Inherited: 0x420)
class USOLEventMapHUDView : public UAdjustableMapItemBase {
public:

	struct UCanvasPanel* CanvasPanelForSize; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)
	struct USOLEventMapIconViewController* IconViewController; // 0x430(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BattlefieldPlayerItemView
// Size: 0x480 (Inherited: 0x450)
class UBattlefieldPlayerItemView : public UPlayerBaseItemView {
public:

	struct UBattlefieldPlayerIconViewController* BFPlayerIconCtrl; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)
	struct UPaperSprite* Sprite_CQB; // 0x460(0x08)
	struct UPaperSprite* Sprite_Medic; // 0x468(0x08)
	struct UPaperSprite* Sprite_Gunner; // 0x470(0x08)
	struct UPaperSprite* Sprite_Sniper; // 0x478(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.OBPlayerItemView
// Size: 0x488 (Inherited: 0x450)
class UOBPlayerItemView : public UPlayerBaseItemView {
public:

	float CameraImgRotateAngle; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct UDFCanvasPanel* OBPlayerPanel; // 0x458(0x08)
	struct UDFImage* ImgTeamColor; // 0x460(0x08)
	struct UDFTextBlock* TextPlayerName; // 0x468(0x08)
	struct UDFImage* CameraImg; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)
	bool bIsOBCameraOrPlayerIcon; // 0x480(0x01)
	bool bCameraImgVisible; // 0x481(0x01)
	char pad_482[0x6]; // 0x482(0x06)

	void SetOBPlayerPanelVisibility(bool bOBMatchCompIsOBingPlayer); // Function DFMGameHud.OBPlayerItemView.SetOBPlayerPanelVisibility // (Final|Native|Private|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLPlayerItemView
// Size: 0x460 (Inherited: 0x450)
class USOLPlayerItemView : public UPlayerBaseItemView {
public:

	char pad_450[0x8]; // 0x450(0x08)
	struct USOLPlayerIconViewController* SOLPlayerIconCtrl; // 0x458(0x08)

	void BP_SetMapPlayerIconState(enum class EMapPlayerIconState InState); // Function DFMGameHud.SOLPlayerItemView.BP_SetMapPlayerIconState // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BtnImageMapItemHUDView
// Size: 0x488 (Inherited: 0x470)
class UBtnImageMapItemHUDView : public UImageMapItemHUDView {
public:

	struct UButton* DFButton_Select; // 0x470(0x08)
	char pad_478[0x10]; // 0x478(0x10)

	void OnSelectBtnClicked(); // Function DFMGameHud.BtnImageMapItemHUDView.OnSelectBtnClicked // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerItemMarkingItemView
// Size: 0x430 (Inherited: 0x3f8)
class UPlayerItemMarkingItemView : public UPlayerMarkingBaseItemView {
public:

	struct UDFMCommonIconImage* IconImage; // 0x3f8(0x08)
	struct UImage* IconFrame; // 0x400(0x08)
	struct UImage* Image_FX; // 0x408(0x08)
	struct UImage* Image_FX_2; // 0x410(0x08)
	struct UPaperSprite* ContainerImage; // 0x418(0x08)
	struct UPaperSprite* MandelBrickInteractorImage; // 0x420(0x08)
	struct UPaperSprite* MandelBrickDecipherDeviceImage; // 0x428(0x08)

	void UpdateItemMarker(); // Function DFMGameHud.PlayerItemMarkingItemView.UpdateItemMarker // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerLocationMarkingItemView
// Size: 0x410 (Inherited: 0x3f8)
class UPlayerLocationMarkingItemView : public UPlayerMarkingBaseItemView {
public:

	struct UImage* IconImage; // 0x3f8(0x08)
	struct UImage* Image_SpreadFX; // 0x400(0x08)
	struct UImage* Image_SpreadFX_3; // 0x408(0x08)

	void UpdateLocationMarker(); // Function DFMGameHud.PlayerLocationMarkingItemView.UpdateLocationMarker // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.AmmoStatusHud
// Size: 0x460 (Inherited: 0x410)
class UAmmoStatusHud : public UDFMMobileWeaponViewBase {
public:

	struct UCanvasPanel* CanvasPanel_1; // 0x410(0x08)
	struct UDFImage* DFImage_88; // 0x418(0x08)
	struct UTextBlock* TextBlock_49; // 0x420(0x08)
	struct UWidgetAnimation* WeaponAnimLoop; // 0x428(0x08)
	char pad_430[0x20]; // 0x430(0x20)
	struct TArray<struct FText> TextArray; // 0x450(0x10)

	void OnWeaponStartFireFailed(char ret); // Function DFMGameHud.AmmoStatusHud.OnWeaponStartFireFailed // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMLeftFireButton
// Size: 0x470 (Inherited: 0x410)
class UDFMLeftFireButton : public UDFMMobileWeaponViewBase {
public:

	struct UMobileDraggableButton* DragBtnFireLeft; // 0x410(0x08)
	struct UDFMWeaponFireIconImage* BulletImageLeft; // 0x418(0x08)
	struct UDFMCommonActionButtonView* CommonView; // 0x420(0x08)
	struct UImage* CancelImage; // 0x428(0x08)
	struct FLinearColor PressedColor; // 0x430(0x10)
	struct FLinearColor NormalColor; // 0x440(0x10)
	struct FLinearColor AmmoEmptyColor; // 0x450(0x10)
	char pad_460[0x10]; // 0x460(0x10)

	void OnWeaponZoomingStateChange(bool InAimOpen); // Function DFMGameHud.DFMLeftFireButton.OnWeaponZoomingStateChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileAimButtonView
// Size: 0x568 (Inherited: 0x410)
class UDFMMobileAimButtonView : public UDFMMobileWeaponViewBase {
public:

	bool bDebugAnimation; // 0x410(0x01)
	char pad_411[0x17]; // 0x411(0x17)
	struct UDFMCommonActionButtonView* CommonView; // 0x428(0x08)
	struct UMobileDraggableButton* DragBtnSight; // 0x430(0x08)
	struct UCanvasPanel* AimCanvasPanel; // 0x438(0x08)
	struct FSlateBrush CloseBrush; // 0x440(0x90)
	struct FSlateBrush OpenBrush; // 0x4d0(0x90)
	struct UPaperSprite* CancelIconImage; // 0x560(0x08)

	void RefreshButtonStatus(); // Function DFMGameHud.DFMMobileAimButtonView.RefreshButtonStatus // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileFireButtonView
// Size: 0x4d0 (Inherited: 0x410)
class UDFMMobileFireButtonView : public UDFMMobileWeaponViewBase {
public:

	struct UDFMWeaponFireIconImage* BulletImage; // 0x410(0x08)
	struct UMobileDraggableButton* DragBtnFire; // 0x418(0x08)
	struct UMobileDraggableButton* CancelBtn; // 0x420(0x08)
	struct UDFNamedSlot* DynamicWidgetSlot; // 0x428(0x08)
	struct UDFMCommonActionButtonView* CommonView; // 0x430(0x08)
	enum class EFireMode FireMode; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	float FollowFireHoldTime; // 0x43c(0x04)
	float FollowFireStartSize; // 0x440(0x04)
	struct FLinearColor PressedColor; // 0x444(0x10)
	struct FLinearColor NormalColor; // 0x454(0x10)
	struct FLinearColor AmmoEmptyColor; // 0x464(0x10)
	char pad_474[0x4]; // 0x474(0x04)
	struct UClass* SmokeWallAddedWidgetClass; // 0x478(0x08)
	struct UDFMSmokeWallAddedView* SmokeWallAddedWidget; // 0x480(0x08)
	char pad_488[0x48]; // 0x488(0x48)

	void UpdateMoveFireModeSetting(); // Function DFMGameHud.DFMMobileFireButtonView.UpdateMoveFireModeSetting // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileReloadView
// Size: 0x4a8 (Inherited: 0x410)
class UDFMMobileReloadView : public UDFMMobileWeaponViewBase {
public:

	uint64_t CurAmmoId; // 0x410(0x08)
	struct UMobileDraggableButton* ReloadButton; // 0x418(0x08)
	struct UCanvasPanel* ReloadCanvasPanel; // 0x420(0x08)
	struct UDFMCommonActionButtonView* CommonView; // 0x428(0x08)
	struct UDFRadialImage* Image_ReloadProgress1; // 0x430(0x08)
	struct UTextBlock* TextBlock_costtime; // 0x438(0x08)
	struct UImage* DFImage; // 0x440(0x08)
	struct UImage* DFImage_2; // 0x448(0x08)
	struct UImage* DFImage_3; // 0x450(0x08)
	struct UImage* DFImage_67; // 0x458(0x08)
	struct UWidgetAnimation* AmmoChooseAnim; // 0x460(0x08)
	bool bWeaponRequireAmmo; // 0x468(0x01)
	char pad_469[0x1f]; // 0x469(0x1f)
	struct TArray<struct FColor> BulletLevelColor; // 0x488(0x10)
	char pad_498[0x10]; // 0x498(0x10)

	void RefreshArrowV2(bool bForceUpdate); // Function DFMGameHud.DFMMobileReloadView.RefreshArrowV2 // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponBipView
// Size: 0x430 (Inherited: 0x410)
class UDFMMobileWeaponBipView : public UDFMMobileWeaponViewBase {
public:

	struct UCanvasPanel* CanvasPanelMain; // 0x410(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* DragBtnFootStand; // 0x418(0x08)
	struct UDFMCommonActionButtonView* DragBtFootStandView; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)

	void ShowBipTip(bool isShow); // Function DFMGameHud.DFMMobileWeaponBipView.ShowBipTip // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponPowerFlashView
// Size: 0x440 (Inherited: 0x410)
class UDFMMobileWeaponPowerFlashView : public UDFMMobileWeaponViewBase {
public:

	struct UCanvasPanel* CanvasPanel_9; // 0x410(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* DragBtnFlash; // 0x418(0x08)
	struct UDFMCommonActionButtonView* WBP_ControllerButtonType; // 0x420(0x08)
	struct UTextBlock* DFTextBlock_28; // 0x428(0x08)
	struct UPaperSprite* PowerFlashIcon; // 0x430(0x08)
	struct UFunction* Func_SetType; // 0x438(0x08)

	void OnOpenPowerFlash(bool bPlayAudio); // Function DFMGameHud.DFMMobileWeaponPowerFlashView.OnOpenPowerFlash // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponTacticalEquipItem
// Size: 0x450 (Inherited: 0x410)
class UDFMMobileWeaponTacticalEquipItem : public UDFMMobileWeaponViewBase {
public:

	struct UTextBlock* DFTextBlock_77; // 0x410(0x08)
	struct UButton* Button_36; // 0x418(0x08)
	struct UImage* Image_Icon; // 0x420(0x08)
	struct UWeaponAdapterItemBase* GPAdapterItem; // 0x428(0x08)
	int32_t ItemIndex; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UDFMMobileWeaponTacticalEquipView* TacticalEquipView; // 0x438(0x08)
	struct UFunction* Func_SetType; // 0x440(0x08)
	float LastToggleTacticalEquipsTime; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)

	void OnBtnUnhovered(); // Function DFMGameHud.DFMMobileWeaponTacticalEquipItem.OnBtnUnhovered // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileWeaponTacticalEquipView
// Size: 0x480 (Inherited: 0x410)
class UDFMMobileWeaponTacticalEquipView : public UDFMMobileWeaponViewBase {
public:

	struct UCanvasPanel* CanvasPanel_11; // 0x410(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* DragBtnAttachmentChange; // 0x418(0x08)
	struct UDFMCommonActionButtonView* WBP_ControllerButtonType; // 0x420(0x08)
	struct UImage* Image_32; // 0x428(0x08)
	struct TArray<struct UDFMMobileWeaponTacticalEquipItem*> ItemList; // 0x430(0x10)
	struct FName AnimName_ShowIn; // 0x440(0x08)
	struct FName AnimName_HideOut; // 0x448(0x08)
	struct UPaperSprite* TacticalEquipIcon; // 0x450(0x08)
	/*struct FDelegate*/char FadeOutEndDelegate[0x10]; // 0x458(0x10)
	struct UFunction* Func_ShowList; // 0x468(0x08)
	struct UFunction* Func_SetThumbnial; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)

	void UpdateTacticalEquipSimplePanel(); // Function DFMGameHud.DFMMobileWeaponTacticalEquipView.UpdateTacticalEquipSimplePanel // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMWeaponTacticalEquipItem
// Size: 0x448 (Inherited: 0x410)
class UDFMWeaponTacticalEquipItem : public UDFMMobileWeaponViewBase {
public:

	struct UTextBlock* DFTextBlock_77; // 0x410(0x08)
	struct UButton* Button_36; // 0x418(0x08)
	struct UImage* Image_Icon; // 0x420(0x08)
	struct UWeaponAdapterItemBase* GPAdapterItem; // 0x428(0x08)
	int32_t ItemIndex; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UDFMWeaponTacticalEquipView* TacticalEquipView; // 0x438(0x08)
	float LastToggleTacticalEquipsTime; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)

	void OnBtnUnhovered(); // Function DFMGameHud.DFMWeaponTacticalEquipItem.OnBtnUnhovered // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMWeaponTacticalEquipView
// Size: 0x448 (Inherited: 0x410)
class UDFMWeaponTacticalEquipView : public UDFMMobileWeaponViewBase {
public:

	struct UCanvasPanel* CanvasPanel_11; // 0x410(0x08)
	struct TArray<struct UDFMWeaponTacticalEquipItem*> ItemList; // 0x418(0x10)
	struct FName AnimName_ShowIn; // 0x428(0x08)
	struct FName AnimName_HideOut; // 0x430(0x08)
	/*struct FDelegate*/char FadeOutEndDelegate[0x10]; // 0x438(0x10)

	void OnShowTacticalEquipPanel(bool isShow); // Function DFMGameHud.DFMWeaponTacticalEquipView.OnShowTacticalEquipPanel // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.UDFMMobileWeaponRangeFinder
// Size: 0x428 (Inherited: 0x410)
class UUDFMMobileWeaponRangeFinder : public UDFMMobileWeaponViewBase {
public:

	struct UCanvasPanel* CanvasPanelMain; // 0x410(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* DragBtnFootStand; // 0x418(0x08)
	struct UDFMCommonActionButtonView* DragBtFootStandView; // 0x420(0x08)

	void OnBtnClicked(); // Function DFMGameHud.UDFMMobileWeaponRangeFinder.OnBtnClicked // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileCustomSkillItem
// Size: 0x588 (Inherited: 0x580)
class UDFMMobileCustomSkillItem : public UDFMMobileSkillItem {
public:

	char pad_580[0x8]; // 0x580(0x08)

	void OnCustomButtonPressed(); // Function DFMGameHud.DFMMobileCustomSkillItem.OnCustomButtonPressed // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.BattlefieldPlayerDeathIconViewController
// Size: 0x350 (Inherited: 0x350)
class UBattlefieldPlayerDeathIconViewController : public UPlayerDeathBaseIconController {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.SOLPlayerDeathIconViewController
// Size: 0x350 (Inherited: 0x350)
class USOLPlayerDeathIconViewController : public UPlayerDeathBaseIconController {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.OBAIMarkerWidget
// Size: 0x760 (Inherited: 0x740)
class UOBAIMarkerWidget : public UPlayerMarkerFriendlyWidget {
public:

	struct UDFImage* ImagePlayerTeamColor; // 0x740(0x08)
	struct FLinearColor AIBackgroundColor; // 0x748(0x10)
	char pad_758[0x8]; // 0x758(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.OBBattleFiledPlayerMarkerFriendlyWidget
// Size: 0x7b0 (Inherited: 0x740)
class UOBBattleFiledPlayerMarkerFriendlyWidget : public UPlayerMarkerFriendlyWidget {
public:

	struct UDFImage* ImagePlayerTeamColor; // 0x740(0x08)
	struct FLinearColor Camp0BackImageColor; // 0x748(0x10)
	struct FLinearColor Camp0NameColor; // 0x758(0x10)
	struct FLinearColor Camp0HealthBarColor; // 0x768(0x10)
	struct FLinearColor Camp1BackImageColor; // 0x778(0x10)
	struct FLinearColor Camp1NameColor; // 0x788(0x10)
	struct FLinearColor Camp1HealthBarColor; // 0x798(0x10)
	char pad_7A8[0x8]; // 0x7a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.OBPlayerMarkerFriendlyWidget
// Size: 0x750 (Inherited: 0x740)
class UOBPlayerMarkerFriendlyWidget : public UPlayerMarkerFriendlyWidget {
public:

	struct UDFImage* ImagePlayerTeamColor; // 0x740(0x08)
	char pad_748[0x8]; // 0x748(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.OBPlayerMarkerDeathWidget
// Size: 0x7d0 (Inherited: 0x7c0)
class UOBPlayerMarkerDeathWidget : public UPlayerMarkerDeathWidget {
public:

	struct UDFImage* ImagePlayerTeamColor; // 0x7c0(0x08)
	char pad_7C8[0x8]; // 0x7c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.OBPlayerMarkerImpendingDeathWidget
// Size: 0x800 (Inherited: 0x7f0)
class UOBPlayerMarkerImpendingDeathWidget : public UPlayerMarkerImpendingDeathWidget {
public:

	struct UDFImage* ImagePlayerTeamColor; // 0x7f0(0x08)
	char pad_7F8[0x8]; // 0x7f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerItemMarkerWidget
// Size: 0x680 (Inherited: 0x5a0)
class UPlayerItemMarkerWidget : public UPlayerMarkingBaseWidget {
public:

	struct UTextBlock* MarkerName; // 0x5a0(0x08)
	struct UDFMCommonIconImage* IconImage; // 0x5a8(0x08)
	struct UImage* IconFrame; // 0x5b0(0x08)
	struct UImage* SmallIconImage; // 0x5b8(0x08)
	struct UImage* Image_FX; // 0x5c0(0x08)
	struct UImage* Image_FX_2; // 0x5c8(0x08)
	struct FVector2D DistTextPosition_AboveName; // 0x5d0(0x08)
	struct FVector2D DistTextPosition_NoName; // 0x5d8(0x08)
	struct FVector2D IconFrameSizeWeapon; // 0x5e0(0x08)
	struct FVector2D IconFrameSizeDefault; // 0x5e8(0x08)
	struct FVector2D DistTextTraceOffsetWeapon; // 0x5f0(0x08)
	struct FVector2D DistTextTraceOffsetDefault; // 0x5f8(0x08)
	struct FVector2D ArrowOffsetWeapon; // 0x600(0x08)
	struct FVector2D ArrowPivotWeapon; // 0x608(0x08)
	struct FVector2D ArrowOffsetDefault; // 0x610(0x08)
	struct FVector2D ArrowPivotDefault; // 0x618(0x08)
	struct UPaperSprite* ContainerImage; // 0x620(0x08)
	struct UPaperSprite* MandelBrickInteractorImage; // 0x628(0x08)
	struct UPaperSprite* MandelBrickDecipherDeviceImage; // 0x630(0x08)
	struct UGPPlayerItemMarkerItem* PlayerItemMarkerItem; // 0x638(0x08)
	struct UImage* ItemIcon; // 0x640(0x08)
	char pad_648[0x38]; // 0x648(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerLocationMarkerWidget
// Size: 0x6e0 (Inherited: 0x5a0)
class UPlayerLocationMarkerWidget : public UPlayerMarkingBaseWidget {
public:

	struct UTextBlock* MarkerName; // 0x5a0(0x08)
	struct UImage* SmallIconImage; // 0x5a8(0x08)
	struct UImage* IconImage; // 0x5b0(0x08)
	struct UCanvasPanel* LineCanvasPanel; // 0x5b8(0x08)
	struct UImage* LineImage; // 0x5c0(0x08)
	struct ULine* LineLine; // 0x5c8(0x08)
	struct UImage* CircleImage; // 0x5d0(0x08)
	struct UImage* Image_SpreadFX_3; // 0x5d8(0x08)
	struct UImage* Image_SpreadFX; // 0x5e0(0x08)
	struct FVector2D DistTextPosition_AboveName; // 0x5e8(0x08)
	struct FVector2D DistTextPosition_NoName; // 0x5f0(0x08)
	struct FVector2D DistTextTraceOffsetDefault; // 0x5f8(0x08)
	struct FVector2D LineStartToIcon; // 0x600(0x08)
	struct TMap<enum class EMarkingLocationType, struct UPaperSprite*> IconMap; // 0x608(0x50)
	struct TMap<enum class EMarkingLocationType, struct FText> IconText; // 0x658(0x50)
	struct UGPPlayerLocationMarkerItem* PlayerLocationMarkerItem; // 0x6a8(0x08)
	char pad_6B0[0x30]; // 0x6b0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.PlayerMarkerLaserPointerRecWidget
// Size: 0x5d0 (Inherited: 0x5d0)
class UPlayerMarkerLaserPointerRecWidget : public UPlayerMarkerLaserPointerWidget {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileHelicopterCrossHairView
// Size: 0x5a0 (Inherited: 0x588)
class UDFMMobileHelicopterCrossHairView : public UDFMMobileVehicleCrossHairView {
public:

	struct UImage* CurrentAmmoProgressLeft; // 0x588(0x08)
	struct UImage* CurrentAmmoProgressRight; // 0x590(0x08)
	float AmmoProgressMaterialMaxValue; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileHelicopterGunView
// Size: 0x600 (Inherited: 0x5e0)
class UDFMMobileHelicopterGunView : public UDFMMobileVehicleGunView {
public:

	char pad_5E0[0x10]; // 0x5e0(0x10)
	struct UUserWidget* CurrentHelicopterInfo; // 0x5f0(0x08)
	struct UCanvasPanel* CurrentHelicopterIcon; // 0x5f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileHelicopterStateWidget
// Size: 0x5e8 (Inherited: 0x590)
class UDFMMobileHelicopterStateWidget : public UDFMMobileVehicleStateWidget {
public:

	struct UImage* SeatWeaponPointer; // 0x590(0x08)
	struct UImage* SeatWeaponPlate; // 0x598(0x08)
	char pad_5A0[0x18]; // 0x5a0(0x18)
	struct TWeakObjectPtr<struct ADFMHelicopter> CurrentHelicopter; // 0x5b8(0x08)
	bool IsNeedRotatePointer; // 0x5c0(0x01)
	bool IsNeedRotatePlate; // 0x5c1(0x01)
	char pad_5C2[0x6]; // 0x5c2(0x06)
	struct UImage* GunDirTipIcon; // 0x5c8(0x08)
	struct UUserWidget* CurrentGunInfo; // 0x5d0(0x08)
	struct FVector2D GunRelativeRotTipRatio; // 0x5d8(0x08)
	float GunOffsetTipY; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileTankStateWidget
// Size: 0x5e0 (Inherited: 0x590)
class UDFMMobileTankStateWidget : public UDFMMobileVehicleStateWidget {
public:

	struct UImage* RightTrackWidget; // 0x590(0x08)
	struct UImage* LeftTrackWidget; // 0x598(0x08)
	struct UImage* CannonWidget; // 0x5a0(0x08)
	struct UImage* EngineWidget; // 0x5a8(0x08)
	struct UPaperSprite* CannonNormalImage; // 0x5b0(0x08)
	struct UPaperSprite* CannonBrokenImage; // 0x5b8(0x08)
	struct UPaperSprite* TrackNormalImage; // 0x5c0(0x08)
	struct UPaperSprite* TrackBrokenImage; // 0x5c8(0x08)
	struct UPaperSprite* EngineNormalImage; // 0x5d0(0x08)
	struct UPaperSprite* EngineBrokenImage; // 0x5d8(0x08)

	void OnTankRecover(struct FName PartName, int32_t FuncFlag); // Function DFMGameHud.DFMMobileTankStateWidget.OnTankRecover // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleJoystickMovement
// Size: 0x688 (Inherited: 0x5a8)
class UDFMMobileVehicleJoystickMovement : public UDFMMobileVehicleBaseMovement {
public:

	struct UCanvasPanel* MovingCanvasPanel; // 0x5a8(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* VehicleJoystickMoveButton; // 0x5b0(0x08)
	struct UImage* JoystickMoveDouDou; // 0x5b8(0x08)
	struct UImage* MoveDirectionImage; // 0x5c0(0x08)
	struct UPaperSprite* MoveDouDouAreaLockNormal; // 0x5c8(0x08)
	struct UPaperSprite* MoveDouDouAreaLockRed; // 0x5d0(0x08)
	struct UPaperSprite* MoveDouDouAreaStatic; // 0x5d8(0x08)
	struct UPaperSprite* MoveDouDouNormal; // 0x5e0(0x08)
	struct UPaperSprite* MoveDouDouGreen; // 0x5e8(0x08)
	struct UPaperSprite* MoveDouDouRed; // 0x5f0(0x08)
	struct UPaperSprite* LockImageRed; // 0x5f8(0x08)
	struct UPaperSprite* LockImageNormal; // 0x600(0x08)
	struct UPaperSprite* DirectionImageRed; // 0x608(0x08)
	struct UPaperSprite* DirectionImageGreen; // 0x610(0x08)
	struct UDFMMobileVehicleFireLeftButtonView* LeftFireBtn; // 0x618(0x08)
	struct UDFMMobileVehicleFireRightButtonView* RightFireBtn; // 0x620(0x08)
	struct UGPSprintComponent* CurrentSprintComponent; // 0x628(0x08)
	struct FLinearColor StaminaLowColor; // 0x630(0x10)
	struct FLinearColor StaminaColorCQB; // 0x640(0x10)
	struct FLinearColor StaminaColor; // 0x650(0x10)
	float DirectionImageShowSize; // 0x660(0x04)
	float PhysicalScaleMin; // 0x664(0x04)
	float PhysicalScaleMax; // 0x668(0x04)
	char pad_66C[0x4]; // 0x66c(0x04)
	struct FString TargetLayout; // 0x670(0x10)
	char pad_680[0x8]; // 0x680(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleButtonMovement
// Size: 0x5e0 (Inherited: 0x5a8)
class UDFMMobileVehicleButtonMovement : public UDFMMobileVehicleBaseMovement {
public:

	struct UDFMMobileCustomLayoutDraggableButton* DragBtnThrottle; // 0x5a8(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* DragBtnBrake; // 0x5b0(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* DragBtnLeft; // 0x5b8(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* DragBtnRight; // 0x5c0(0x08)
	struct FString TargetLayout; // 0x5c8(0x10)
	bool bIsBtnThrottlePressed; // 0x5d8(0x01)
	bool bIsBtnBrakePressed; // 0x5d9(0x01)
	bool bIsBtnLeftPressed; // 0x5da(0x01)
	bool bIsBtnRightPressed; // 0x5db(0x01)
	char pad_5DC[0x4]; // 0x5dc(0x04)

	void OnBtnThrottleReleased(); // Function DFMGameHud.DFMMobileVehicleButtonMovement.OnBtnThrottleReleased // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleSliderMovement
// Size: 0x5b8 (Inherited: 0x5a8)
class UDFMMobileVehicleSliderMovement : public UDFMMobileVehicleBaseMovement {
public:

	struct USlider* ThrottleSlider; // 0x5a8(0x08)
	struct USlider* SteeringSlider; // 0x5b0(0x08)

	void OnThrottleSliderEnd(); // Function DFMGameHud.DFMMobileVehicleSliderMovement.OnThrottleSliderEnd // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFVehicleDetectionSkillWidget
// Size: 0x580 (Inherited: 0x578)
class UDFVehicleDetectionSkillWidget : public UDFVehicleSkillWidget {
public:

	struct UTextBlock* EndDistText; // 0x578(0x08)

	void BP_SetType(int32_t InType); // Function DFMGameHud.DFVehicleDetectionSkillWidget.BP_SetType // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleFireLeftButtonView
// Size: 0x478 (Inherited: 0x470)
class UDFMMobileVehicleFireLeftButtonView : public UDFMLeftFireButton {
public:

	enum class EMobileControlButtonType CustomFireButtonType; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileVehicleFireRightButtonView
// Size: 0x4d8 (Inherited: 0x4d0)
class UDFMMobileVehicleFireRightButtonView : public UDFMMobileFireButtonView {
public:

	enum class EMobileControlButtonType CustomFireButtonType; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameHud.DFMMobileTankJoystickMovement
// Size: 0x688 (Inherited: 0x688)
class UDFMMobileTankJoystickMovement : public UDFMMobileVehicleJoystickMovement {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
