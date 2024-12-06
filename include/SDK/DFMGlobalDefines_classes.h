
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMGlobalDefines.DFMLoadingManager
// Size: 0x48 (Inherited: 0x30)
class UDFMLoadingManager : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	/*struct FMulticastInlineDelegate*/char OnStopLoading[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.BreakthroughUIColorDataManager
// Size: 0x48 (Inherited: 0x38)
class UBreakthroughUIColorDataManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.BreakthroughUIIconDataManager
// Size: 0x48 (Inherited: 0x38)
class UBreakthroughUIIconDataManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.BreakthroughTextTypeManager
// Size: 0x48 (Inherited: 0x38)
class UBreakthroughTextTypeManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.BattleFieldSectorAnchorIconManager
// Size: 0x48 (Inherited: 0x38)
class UBattleFieldSectorAnchorIconManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.BreakthroughUIConfig
// Size: 0x30 (Inherited: 0x30)
class UBreakthroughUIConfig : public UObject {
public:


	struct FName STATIC_GetTextStyleByType(enum class EBreakthroughTextType InTextType); // Function DFMGlobalDefines.BreakthroughUIConfig.GetTextStyleByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.CarrayItemsDataMgr
// Size: 0x48 (Inherited: 0x38)
class UCarrayItemsDataMgr : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.CarrayItem_HealArmorConfigDataMgr
// Size: 0x48 (Inherited: 0x38)
class UCarrayItem_HealArmorConfigDataMgr : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.CharacterBodyPartMeshStatics
// Size: 0x30 (Inherited: 0x30)
class UCharacterBodyPartMeshStatics : public UObject {
public:


	void STATIC_SetMeshByConfig(struct UMeshComponent* Mesh, struct FName Name); // Function DFMGlobalDefines.CharacterBodyPartMeshStatics.SetMeshByConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.GPCollectionWeaponDataConfig
// Size: 0x90 (Inherited: 0x38)
class UGPCollectionWeaponDataConfig : public UWorldSubsystem {
public:

	struct TMap<struct FName, struct UDataTable*> CollectionWeaponDataTable; // 0x38(0x50)
	char pad_88[0x8]; // 0x88(0x08)

	struct UDataTable* GetCollectionWeaponDataTable(struct FName& InDisplayCtrlTypeStr); // Function DFMGlobalDefines.GPCollectionWeaponDataConfig.GetCollectionWeaponDataTable // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.CSVChangeUtil
// Size: 0x378 (Inherited: 0x378)
class ACSVChangeUtil : public AActor {
public:


	void STATIC_SaveTableToCSV(struct UDataTable* DataTable, struct FString CSVFileName); // Function DFMGlobalDefines.CSVChangeUtil.SaveTableToCSV // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.CustomListView
// Size: 0x3d0 (Inherited: 0x3d0)
class UCustomListView : public UDFCustomListView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DataTableRuntimeUtil
// Size: 0x40 (Inherited: 0x30)
class UDataTableRuntimeUtil : public UObject {
public:

	struct TArray<struct FString> AllowSplitTables; // 0x30(0x10)

	void STATIC_SaveDataTableToCSV(struct UDataTable* DataTable, struct FString CSVFileName); // Function DFMGlobalDefines.DataTableRuntimeUtil.SaveDataTableToCSV // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFCustomerServiceLibrary
// Size: 0x30 (Inherited: 0x30)
class UDFCustomerServiceLibrary : public UBlueprintFunctionLibrary {
public:


	int32_t STATIC_GetSupportPlatforms(struct FString SupportPlatformStr); // Function DFMGlobalDefines.DFCustomerServiceLibrary.GetSupportPlatforms // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMButton
// Size: 0x4b0 (Inherited: 0x4b0)
class UDFMButton : public UButton {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.CharacterAmbientLightGroupDataManager
// Size: 0x40 (Inherited: 0x38)
class UCharacterAmbientLightGroupDataManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMColorDefineBlueprintHelper
// Size: 0x30 (Inherited: 0x30)
class UDFMColorDefineBlueprintHelper : public UBlueprintFunctionLibrary {
public:


	struct FDFMColorDefineRow STATIC_GetColorByQualityId(int32_t ID); // Function DFMGlobalDefines.DFMColorDefineBlueprintHelper.GetColorByQualityId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMCommonButton
// Size: 0x4b8 (Inherited: 0x4b0)
class UDFMCommonButton : public UButton {
public:

	struct FName DefaultClickSound; // 0x4b0(0x08)

	void SetOpenDefaultSound(bool bIsOpen); // Function DFMGlobalDefines.DFMCommonButton.SetOpenDefaultSound // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMCommonHover
// Size: 0x330 (Inherited: 0x298)
class UDFMCommonHover : public UUserWidget {
public:

	enum class ECommonHoverExtMode ExtensionMode; // 0x298(0x01)
	enum class ECommonHoverStyleMode StyleMode; // 0x299(0x01)
	bool bHoverEnabled; // 0x29a(0x01)
	bool bUseUserWidgetEvent; // 0x29b(0x01)
	bool bHoverSoundEnabled; // 0x29c(0x01)
	bool bResponseClick; // 0x29d(0x01)
	enum class EHoverNodeEffetApplyType NodeEffectApplyType; // 0x29e(0x01)
	char pad_29F[0x1]; // 0x29f(0x01)
	struct FString WidgetPath; // 0x2a0(0x10)
	struct UCurveFloat* HoverdScaleCurve; // 0x2b0(0x08)
	bool bSeparatedUnhoverCurve; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UCurveFloat* UnhoverdScaleCurve; // 0x2c0(0x08)
	/*struct FMulticastInlineDelegate*/char OnBPHovered[0x10]; // 0x2c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnBPUnhovered[0x10]; // 0x2d8(0x10)
	char pad_2E8[0x8]; // 0x2e8(0x08)
	struct UWidget* Bindable; // 0x2f0(0x08)
	struct ULuaUIBaseView* BindView; // 0x2f8(0x08)
	struct UWidget* EffectApplyNode; // 0x300(0x08)
	char pad_308[0x10]; // 0x308(0x10)
	struct UWidget* HoverContentRoot; // 0x318(0x08)
	struct UWidget* ClickContentRoot; // 0x320(0x08)
	char pad_328[0x8]; // 0x328(0x08)

	void StopAutoAnimation(struct FName AnimationName); // Function DFMGlobalDefines.DFMCommonHover.StopAutoAnimation // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMCommonMediaImage
// Size: 0x360 (Inherited: 0x2e0)
class UDFMCommonMediaImage : public UImage {
public:

	struct FName MediaName; // 0x2e0(0x08)
	struct UBinkMediaPlayer* MediaPlayer; // 0x2e8(0x08)
	bool bAutoMatchMediaSize; // 0x2f0(0x01)
	bool bPlayNativeSound; // 0x2f1(0x01)
	bool bLoop; // 0x2f2(0x01)
	bool bPlayOnLoad; // 0x2f3(0x01)
	float TextureShowTime; // 0x2f4(0x04)
	enum class EMediaPlayMode PlayMode; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	float CurVolume; // 0x2fc(0x04)
	/*struct FMulticastInlineDelegate*/char OnMediaOpened[0x10]; // 0x300(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaPlayBegin[0x10]; // 0x310(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaPlayEnd[0x10]; // 0x320(0x10)
	char pad_330[0x28]; // 0x330(0x28)
	struct UMaterialInterface* Material; // 0x358(0x08)

	void StopMedia(); // Function DFMGlobalDefines.DFMCommonMediaImage.StopMedia // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMGameSingleton
// Size: 0x50 (Inherited: 0x30)
class UDFMGameSingleton : public UObject {
public:

	struct TArray<struct UDFMGameSingletonAttribute*> SingletonAttributes; // 0x30(0x10)
	struct TArray<struct UClass*> SingletonAttributeClassArray; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMImageLoadingWidget
// Size: 0x2a0 (Inherited: 0x298)
class UDFMImageLoadingWidget : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)

	void StopLoadingAnim_BP(); // Function DFMGlobalDefines.DFMImageLoadingWidget.StopLoadingAnim_BP // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMSDKWebBrowserWidget
// Size: 0x1a8 (Inherited: 0x168)
class UDFMSDKWebBrowserWidget : public UWidget {
public:

	char pad_168[0x10]; // 0x168(0x10)
	/*struct FMulticastInlineDelegate*/char OnUrlChanged[0x10]; // 0x178(0x10)
	/*struct FMulticastInlineDelegate*/char OnCallback[0x10]; // 0x188(0x10)
	/*struct FMulticastInlineDelegate*/char OnLoadError[0x10]; // 0x198(0x10)

	void OnWebBrowserCallback(struct FString Param); // Function DFMGlobalDefines.DFMSDKWebBrowserWidget.OnWebBrowserCallback // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMTextBlock
// Size: 0x3b8 (Inherited: 0x3b8)
class UDFMTextBlock : public UDFTextBlock {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMWebMediaPlayer
// Size: 0x210 (Inherited: 0x168)
class UDFMWebMediaPlayer : public UWidget {
public:

	struct FName MediaName; // 0x168(0x08)
	bool bPlayNativeSound; // 0x170(0x01)
	bool bLoop; // 0x171(0x01)
	bool bPlayOnLoad; // 0x172(0x01)
	enum class EMediaPlayMode PlayMode; // 0x173(0x01)
	char pad_174[0x4c]; // 0x174(0x4c)
	/*struct FMulticastInlineDelegate*/char OnMediaOpened[0x10]; // 0x1c0(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaPlayBegin[0x10]; // 0x1d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaPlayEnd[0x10]; // 0x1e0(0x10)
	char pad_1F0[0x20]; // 0x1f0(0x20)

	void StopMedia(); // Function DFMGlobalDefines.DFMWebMediaPlayer.StopMedia // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFPermissionConfigLibrary
// Size: 0x30 (Inherited: 0x30)
class UDFPermissionConfigLibrary : public UBlueprintFunctionLibrary {
public:


	int32_t STATIC_GetSupportPlatforms(struct FString SupportPlatformStr); // Function DFMGlobalDefines.DFPermissionConfigLibrary.GetSupportPlatforms // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFRouletteBaseView
// Size: 0x588 (Inherited: 0x550)
class UDFRouletteBaseView : public ULuaUIBaseView {
public:

	float RadiusFactor; // 0x550(0x04)
	bool EnableDynamicCenter; // 0x554(0x01)
	bool UseHoverAnim; // 0x555(0x01)
	char pad_556[0x2]; // 0x556(0x02)
	struct FVector2D DynamicCenter; // 0x558(0x08)
	struct FVector2D CurPressedPosition; // 0x560(0x08)
	char pad_568[0x1]; // 0x568(0x01)
	bool bEnableHoverEffect; // 0x569(0x01)
	char pad_56A[0x6]; // 0x56a(0x06)
	struct UImage* HoverEffect; // 0x570(0x08)
	struct UWidgetAnimation* Hover; // 0x578(0x08)
	struct UWidgetAnimation* UnHover; // 0x580(0x08)

	void UpdateDragOffset(); // Function DFMGlobalDefines.DFRouletteBaseView.UpdateDragOffset // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFStreamMediaImage
// Size: 0x360 (Inherited: 0x2e0)
class UDFStreamMediaImage : public UImage {
public:

	struct FName MediaName; // 0x2e0(0x08)
	bool bPlayNativeSound; // 0x2e8(0x01)
	bool bLoop; // 0x2e9(0x01)
	bool bPlayOnLoad; // 0x2ea(0x01)
	enum class EMediaPlayMode PlayMode; // 0x2eb(0x01)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x2f0(0x08)
	struct UMediaTexture* MediaTexture; // 0x2f8(0x08)
	float CurVolume; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	/*struct FMulticastInlineDelegate*/char OnMediaOpened[0x10]; // 0x308(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaPlayBegin[0x10]; // 0x318(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaPlayEnd[0x10]; // 0x328(0x10)
	char pad_338[0x20]; // 0x338(0x20)
	struct UMaterialInterface* Material; // 0x358(0x08)

	void StopMedia(); // Function DFMGlobalDefines.DFStreamMediaImage.StopMedia // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.BagFuncManager
// Size: 0x48 (Inherited: 0x38)
class UBagFuncManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.ChestHangingFuncManager
// Size: 0x48 (Inherited: 0x38)
class UChestHangingFuncManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.SafeBoxFuncManager
// Size: 0x48 (Inherited: 0x38)
class USafeBoxFuncManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.FashionListView
// Size: 0x590 (Inherited: 0x550)
class UFashionListView : public ULuaUIBaseView {
public:

	struct UScrollBox* ContentScrollBox; // 0x550(0x08)
	float DragDistance; // 0x558(0x04)
	float ScrollDir; // 0x55c(0x04)
	float CurrentOffset; // 0x560(0x04)
	int32_t Index; // 0x564(0x04)
	bool bSnapping; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	int32_t NextIndex; // 0x56c(0x04)
	float offset; // 0x570(0x04)
	float MinScale; // 0x574(0x04)
	float MaxScale; // 0x578(0x04)
	float ScaleRate; // 0x57c(0x04)
	bool bInstantStopScroll; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	float ScrollBackSpeed; // 0x584(0x04)
	float ScaleSpeed; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)

	void ScrollFashionItemIntoView(struct UWidget* WidgetToFind); // Function DFMGlobalDefines.FashionListView.ScrollFashionItemIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.GlobalDataTableSystemManager
// Size: 0x38 (Inherited: 0x38)
class UGlobalDataTableSystemManager : public UGPSubsystemBase {
public:


	void OnLiteDataTableReset(struct FName& TableName); // Function DFMGlobalDefines.GlobalDataTableSystemManager.OnLiteDataTableReset // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.CharacterAnimTableManager
// Size: 0x40 (Inherited: 0x38)
class UCharacterAnimTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.HallWeaponAnimSetTableManager
// Size: 0x40 (Inherited: 0x38)
class UHallWeaponAnimSetTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.GPBlueprintUMGHelper
// Size: 0x30 (Inherited: 0x30)
class UGPBlueprintUMGHelper : public UBlueprintFunctionLibrary {
public:


	struct FText STATIC_TruncateText_Font(struct FSlateFontInfo Font, struct FText InText, float Width); // Function DFMGlobalDefines.GPBlueprintUMGHelper.TruncateText_Font // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.GuideUtils
// Size: 0x30 (Inherited: 0x30)
class UGuideUtils : public UObject {
public:


	int32_t STATIC_StopGuide(struct UObject* WorldContextObj); // Function DFMGlobalDefines.GuideUtils.StopGuide // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.ItemDetailGMManager
// Size: 0x38 (Inherited: 0x38)
class UItemDetailGMManager : public UGameInstanceSubsystem {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.LineCanvasPanel
// Size: 0x268 (Inherited: 0x198)
class ULineCanvasPanel : public UCanvasPanel {
public:

	struct TArray<struct FDrawLineData> LinesArray; // 0x198(0x10)
	struct FSlateBrush LineBrush; // 0x1a8(0x90)
	enum class ELineOrientation LineOrientation; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float LineThickness; // 0x23c(0x04)
	bool BUseULine; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FLinearColor LineColorAndOpacity; // 0x244(0x10)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<struct UWidget*> ChildrenLines; // 0x258(0x10)

	void SetLinesVisibility(enum class ESlateVisibility InVisibility); // Function DFMGlobalDefines.LineCanvasPanel.SetLinesVisibility // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.MapEnemySilencerDistanceManager
// Size: 0x48 (Inherited: 0x38)
class UMapEnemySilencerDistanceManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.MapIconSizeDataManager
// Size: 0x48 (Inherited: 0x38)
class UMapIconSizeDataManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.MapInfoConfig
// Size: 0x1e0 (Inherited: 0x30)
class UMapInfoConfig : public UObject {
public:

	struct FVector WorldCenter; // 0x30(0x0c)
	struct FVector WorldExtent; // 0x3c(0x0c)
	/*struct TSoftObjectPtr<UTexture>*/char ClipMapBaseMap[0x28]; // 0x48(0x28)
	/*struct TSoftObjectPtr<UTexture>*/char ClipMapBaseMap_HD[0x28]; // 0x70(0x28)
	/*struct TSoftObjectPtr<UTexture>*/char ClipMapBaseMap_Event[0x28]; // 0x98(0x28)
	/*struct TSoftObjectPtr<UTexture>*/char ClipMapBaseMap_Event_HD[0x28]; // 0xc0(0x28)
	/*struct TMap<int32_t, struct TSoftObjectPtr<UTexture>>*/char NewbieGameClipMap[0x50]; // 0xe8(0x50)
	/*struct TSoftObjectPtr<UTexture>*/char BaseMap[0x28]; // 0x138(0x28)
	bool bEnableEdgeMask; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	/*struct TSoftObjectPtr<UTexture2D>*/char EdgeMaskMap[0x28]; // 0x168(0x28)
	float MiniMapScale; // 0x190(0x04)
	float MiniMapSceneRotation; // 0x194(0x04)
	enum class EMapRotationType RotationType; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	struct FVector2D BigMapFocusCenter; // 0x19c(0x08)
	struct FFloatRange BigMapClipRangeY; // 0x1a4(0x10)
	bool bNeedSplineArea; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	/*struct TSoftObjectPtr<UTexture2D>*/char SplineAreaAtlas[0x28]; // 0x1b8(0x28)

	struct FString GetMapPath(); // Function DFMGlobalDefines.MapInfoConfig.GetMapPath // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.MapInfoData
// Size: 0xf0 (Inherited: 0x38)
class UMapInfoData : public UGameInstanceSingletonHelper {
public:

	struct TMap<int32_t, struct FMapBaseInfoData> MapInfoMap; // 0x38(0x50)
	char pad_88[0x8]; // 0x88(0x08)
	struct TArray<struct UMapInfoConfig*> MapInfoConfigArr; // 0x90(0x10)
	struct TMap<struct FString, struct UMapInfoConfig*> MapInfoConfigMap; // 0xa0(0x50)

	void OnMapInfoConfigLoadedComplete(struct TArray<struct FSoftObjectPath> MapInfoConfigArrToLoad); // Function DFMGlobalDefines.MapInfoData.OnMapInfoConfigLoadedComplete // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.LegendIconManager
// Size: 0x48 (Inherited: 0x38)
class ULegendIconManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.SeamlessEntryLegendIconManager
// Size: 0x48 (Inherited: 0x38)
class USeamlessEntryLegendIconManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.POIProductDataManager
// Size: 0x48 (Inherited: 0x38)
class UPOIProductDataManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.MaskWidget
// Size: 0x2d8 (Inherited: 0x168)
class UMaskWidget : public UWidget {
public:

	struct FMaskWidgetStyle WidgetStyle; // 0x168(0x138)
	struct FLinearColor BgColorAndOpacity; // 0x2a0(0x10)
	/*struct FDelegate*/char BgColorAndOpacityDelegate[0x10]; // 0x2b0(0x10)
	char bCanBeInCluster : 1; // 0x2c0(0x01)
	char pad_2C0_1 : 7; // 0x2c0(0x01)
	char pad_2C1[0x17]; // 0x2c1(0x17)

	void SetMaskSizeXY(int32_t& ClipIndex, float& X, float& Y); // Function DFMGlobalDefines.MaskWidget.SetMaskSizeXY // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.MediaConfigDataManager
// Size: 0x40 (Inherited: 0x38)
class UMediaConfigDataManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.PlatformPaddingBox
// Size: 0x1c0 (Inherited: 0x180)
class UPlatformPaddingBox : public UContentWidget {
public:

	struct FName PresetHD; // 0x180(0x08)
	struct FName PresetMobile; // 0x188(0x08)
	struct FMargin PaddingHD; // 0x190(0x10)
	struct FMargin PaddingMobile; // 0x1a0(0x10)
	char pad_1B0[0x10]; // 0x1b0(0x10)

	void SetPadding(struct FMargin InPadding); // Function DFMGlobalDefines.PlatformPaddingBox.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.PlatformScaleBox
// Size: 0x1a8 (Inherited: 0x180)
class UPlatformScaleBox : public UContentWidget {
public:

	enum class EStretch StretchMobile; // 0x180(0x01)
	enum class EStretchDirection StretchDirectionMobile; // 0x181(0x01)
	char pad_182[0x2]; // 0x182(0x02)
	float UserSpecifiedScaleMobile; // 0x184(0x04)
	bool IgnoreInheritedScaleMobile; // 0x188(0x01)
	enum class EStretch StretchHD; // 0x189(0x01)
	enum class EStretchDirection StretchDirectionHD; // 0x18a(0x01)
	char pad_18B[0x1]; // 0x18b(0x01)
	float UserSpecifiedScaleHD; // 0x18c(0x04)
	bool IgnoreInheritedScaleHD; // 0x190(0x01)
	char pad_191[0x17]; // 0x191(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function DFMGlobalDefines.PlatformScaleBox.SetUserSpecifiedScale // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.PlatformSizeBox
// Size: 0x1d8 (Inherited: 0x180)
class UPlatformSizeBox : public UContentWidget {
public:

	char pad_180[0x10]; // 0x180(0x10)
	float WidthOverrideHD; // 0x190(0x04)
	float HeightOverrideHD; // 0x194(0x04)
	float MinDesiredWidthHD; // 0x198(0x04)
	float MinDesiredHeightHD; // 0x19c(0x04)
	float MaxDesiredWidthHD; // 0x1a0(0x04)
	float MaxDesiredHeightHD; // 0x1a4(0x04)
	float MinAspectRatioHD; // 0x1a8(0x04)
	float MaxAspectRatioHD; // 0x1ac(0x04)
	float WidthOverrideMobile; // 0x1b0(0x04)
	float HeightOverrideMobile; // 0x1b4(0x04)
	float MinDesiredWidthMobile; // 0x1b8(0x04)
	float MinDesiredHeightMobile; // 0x1bc(0x04)
	float MaxDesiredWidthMobile; // 0x1c0(0x04)
	float MaxDesiredHeightMobile; // 0x1c4(0x04)
	float MinAspectRatioMobile; // 0x1c8(0x04)
	float MaxAspectRatioMobile; // 0x1cc(0x04)
	char bOverride_WidthOverrideHD : 1; // 0x1d0(0x01)
	char bOverride_HeightOverrideHD : 1; // 0x1d0(0x01)
	char bOverride_MinDesiredWidthHD : 1; // 0x1d0(0x01)
	char bOverride_MinDesiredHeightHD : 1; // 0x1d0(0x01)
	char bOverride_MaxDesiredWidthHD : 1; // 0x1d0(0x01)
	char bOverride_MaxDesiredHeightHD : 1; // 0x1d0(0x01)
	char bOverride_MinAspectRatioHD : 1; // 0x1d0(0x01)
	char bOverride_MaxAspectRatioHD : 1; // 0x1d0(0x01)
	char bOverride_WidthOverrideMobile : 1; // 0x1d1(0x01)
	char bOverride_HeightOverrideMobile : 1; // 0x1d1(0x01)
	char bOverride_MinDesiredWidthMobile : 1; // 0x1d1(0x01)
	char bOverride_MinDesiredHeightMobile : 1; // 0x1d1(0x01)
	char bOverride_MaxDesiredWidthMobile : 1; // 0x1d1(0x01)
	char bOverride_MaxDesiredHeightMobile : 1; // 0x1d1(0x01)
	char bOverride_MinAspectRatioMobile : 1; // 0x1d1(0x01)
	char bOverride_MaxAspectRatioMobile : 1; // 0x1d1(0x01)
	char pad_1D2[0x6]; // 0x1d2(0x06)

	void SetWidthOverride(float InWidthOverride); // Function DFMGlobalDefines.PlatformSizeBox.SetWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.PlatformWidgetSettings
// Size: 0x80 (Inherited: 0x30)
class UPlatformWidgetSettings : public UObject {
public:

	struct TMap<struct FName, struct FMargin> PaddingBoxPresets; // 0x30(0x50)

	struct UPlatformWidgetSettings* STATIC_Get(); // Function DFMGlobalDefines.PlatformWidgetSettings.Get // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.ScrollCanvasPanel
// Size: 0x1d0 (Inherited: 0x198)
class UScrollCanvasPanel : public UCanvasPanel {
public:

	/*struct FMulticastInlineDelegate*/char OnCanvasScolled[0x10]; // 0x198(0x10)
	/*struct FMulticastInlineDelegate*/char OnCanvasScollEnded[0x10]; // 0x1a8(0x10)
	bool bAllowDragScrolling; // 0x1b8(0x01)
	bool bAllowOverscroll; // 0x1b9(0x01)
	char pad_1BA[0x2]; // 0x1ba(0x02)
	float OverrideDragTriggerDistance; // 0x1bc(0x04)
	char pad_1C0[0x10]; // 0x1c0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.SkillConfigUtils
// Size: 0x30 (Inherited: 0x30)
class USkillConfigUtils : public UObject {
public:


	struct FSkillConfig STATIC_GetSkillConfigDataRowBySkillID(int32_t Support_Skill_ID); // Function DFMGlobalDefines.SkillConfigUtils.GetSkillConfigDataRowBySkillID // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.SOLDecalDataManager
// Size: 0x48 (Inherited: 0x38)
class USOLDecalDataManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.SOLDecalConfig
// Size: 0x30 (Inherited: 0x30)
class USOLDecalConfig : public UObject {
public:


	struct FSoftObjectPath STATIC_GetIconPathByType(struct FName DecalID); // Function DFMGlobalDefines.SOLDecalConfig.GetIconPathByType // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.SOLUIColorDataManager
// Size: 0x48 (Inherited: 0x38)
class USOLUIColorDataManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.SOLUIIconDataManager
// Size: 0x48 (Inherited: 0x38)
class USOLUIIconDataManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.SOLUIConfig
// Size: 0x30 (Inherited: 0x30)
class USOLUIConfig : public UObject {
public:


	struct FSoftObjectPath STATIC_GetIconPathByType(enum class ESOLUIIconType InIconType); // Function DFMGlobalDefines.SOLUIConfig.GetIconPathByType // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.SphericalHarmonicsUtils
// Size: 0x30 (Inherited: 0x30)
class USphericalHarmonicsUtils : public UBlueprintFunctionLibrary {
public:


	struct FSHresult STATIC_GetShFromIblCubemap(struct UTextureRenderTargetCube* UCubemap); // Function DFMGlobalDefines.SphericalHarmonicsUtils.GetShFromIblCubemap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.TeammateUIManager
// Size: 0x48 (Inherited: 0x38)
class UTeammateUIManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.TeammateConfig
// Size: 0x30 (Inherited: 0x30)
class UTeammateConfig : public UObject {
public:


	struct FTeammateUIConfigRow STATIC_GetTeammateUIConfigRow(enum class EDFMGamePlayMode InDFMGamePlayMode); // Function DFMGlobalDefines.TeammateConfig.GetTeammateUIConfigRow // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.VehicleModificationRulesDataConfigManager
// Size: 0x98 (Inherited: 0x38)
class UVehicleModificationRulesDataConfigManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)
	struct TMap<uint64_t, struct FVehicleModificationRulesDataConfigList> ID2ListMap; // 0x48(0x50)

	struct FVehicleModificationRulesDataConfigList GetList(uint64_t BaseID); // Function DFMGlobalDefines.VehicleModificationRulesDataConfigManager.GetList // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.VehicleSocketNameRowManager
// Size: 0x48 (Inherited: 0x38)
class UVehicleSocketNameRowManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	uint64_t GetSocketGUIDBySocketName(struct FName SocketName); // Function DFMGlobalDefines.VehicleSocketNameRowManager.GetSocketGUIDBySocketName // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.VehicleFrontendTransformRowManager
// Size: 0x48 (Inherited: 0x38)
class UVehicleFrontendTransformRowManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.VehicleSkinDataConfigManager
// Size: 0x48 (Inherited: 0x38)
class UVehicleSkinDataConfigManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMVehicleUISkinAppearanceDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleUISkinAppearanceDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMGameSingletonAttribute
// Size: 0x30 (Inherited: 0x30)
class UDFMGameSingletonAttribute : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMCommonImage
// Size: 0x350 (Inherited: 0x350)
class UDFMCommonImage : public UDFImage {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.MobileCustomLayoutDataCenter
// Size: 0xe0 (Inherited: 0x30)
class UMobileCustomLayoutDataCenter : public UDFMGameSingletonAttribute {
public:

	char pad_30[0x50]; // 0x30(0x50)
	struct FString BaseLayout; // 0x80(0x10)
	struct FString VehicleLayout; // 0x90(0x10)
	enum class EVehicleType VehicleType; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FString LayoutNameIncustom; // 0xa8(0x10)
	struct FSoftObjectPath CustomLayoutTablePath; // 0xb8(0x18)
	char pad_D0[0x10]; // 0xd0(0x10)

	void UpdateVehicleType(enum class EVehicleType InType); // Function DFMGlobalDefines.MobileCustomLayoutDataCenter.UpdateVehicleType // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGlobalDefines.DFMImage
// Size: 0x4f0 (Inherited: 0x350)
class UDFMImage : public UDFMCommonImage {
public:

	/*struct FMulticastInlineDelegate*/char OnIconStateChange[0x10]; // 0x350(0x10)
	/*struct FMulticastInlineDelegate*/char OnIconSizeChange[0x10]; // 0x360(0x10)
	char pad_370[0x110]; // 0x370(0x110)
	struct UTexture* RTIDefaultTexture; // 0x480(0x08)
	char pad_488[0x18]; // 0x488(0x18)
	struct URuntimeTile* Tile; // 0x4a0(0x08)
	struct UMaterialInstanceDynamic* IconDynamicMaterial; // 0x4a8(0x08)
	char pad_4B0[0x8]; // 0x4b0(0x08)
	struct UDFMImageLoadingWidget* SlotCompIconFX_Loading_Widget; // 0x4b8(0x08)
	struct UUserWidget* DebugTextWidget; // 0x4c0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Debug; // 0x4c8(0x08)
	struct UTextBlock* Text_Debug; // 0x4d0(0x08)
	struct UImage* Image_DontMerge; // 0x4d8(0x08)
	struct UImage* Image_Merge; // 0x4e0(0x08)
	struct UTextBlock* Text_Merge; // 0x4e8(0x08)

	void ShowFXMaterial(bool bShow); // Function DFMGlobalDefines.DFMImage.ShowFXMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
