
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x3b8 (Inherited: 0x370)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {
public:

	struct UWidgetTree* WidgetTree; // 0x370(0x08)
	char bClassRequiresNativeTick : 1; // 0x378(0x01)
	char pad_378_1 : 7; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x380(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x390(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3a0(0x10)
	char bCanBeAddToCluster : 1; // 0x3b0(0x01)
	char pad_3B0_1 : 7; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)

	void UnloadWidgetTree(bool bSetPackageReload); // Function UMG.WidgetBlueprintGeneratedClass.UnloadWidgetTree // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.DragDropOperation
// Size: 0x90 (Inherited: 0x30)
class UDragDropOperation : public UObject {
public:

	struct FString Tag; // 0x30(0x10)
	struct UObject* Payload; // 0x40(0x08)
	struct UWidget* DefaultDragVisual; // 0x48(0x08)
	enum class EDragPivot Pivot; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector2D offset; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
	/*struct FMulticastInlineDelegate*/char OnDrop[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnDragCancelled[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char OnDragged[0x10]; // 0x80(0x10)

	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetComponent
// Size: 0x800 (Inherited: 0x6c8)
class UWidgetComponent : public UMeshComponent {
public:

	enum class EWidgetSpace Space; // 0x6c8(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x6c9(0x01)
	char pad_6CA[0x6]; // 0x6ca(0x06)
	struct UClass* WidgetClass; // 0x6d0(0x08)
	struct FIntPoint DrawSize; // 0x6d8(0x08)
	bool bManuallyRedraw; // 0x6e0(0x01)
	bool bRedrawRequested; // 0x6e1(0x01)
	char pad_6E2[0x2]; // 0x6e2(0x02)
	float RedrawTime; // 0x6e4(0x04)
	char pad_6E8[0x8]; // 0x6e8(0x08)
	struct FIntPoint CurrentDrawSize; // 0x6f0(0x08)
	bool bDrawAtDesiredSize; // 0x6f8(0x01)
	bool bUseRTScale; // 0x6f9(0x01)
	char pad_6FA[0x6]; // 0x6fa(0x06)
	struct TArray<struct FRTScaleDistanceFactorPair> ScaleDistanceFactorPairs; // 0x700(0x10)
	struct FVector2D Pivot; // 0x710(0x08)
	bool bReceiveHardwareInput; // 0x718(0x01)
	bool bWindowFocusable; // 0x719(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x71a(0x01)
	bool bShowWidgetInEditor; // 0x71b(0x01)
	bool bApplyGammaCorrection; // 0x71c(0x01)
	char pad_71D[0x3]; // 0x71d(0x03)
	struct ULocalPlayer* OwnerPlayer; // 0x720(0x08)
	struct FLinearColor BackgroundColor; // 0x728(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x738(0x10)
	float OpacityFromTexture; // 0x748(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x74c(0x01)
	bool bIsTwoSided; // 0x74d(0x01)
	bool TickWhenOffscreen; // 0x74e(0x01)
	char pad_74F[0x1]; // 0x74f(0x01)
	struct UUserWidget* Widget; // 0x750(0x08)
	char pad_758[0x20]; // 0x758(0x20)
	struct UBodySetup* BodySetup; // 0x778(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x780(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x788(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x790(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x798(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x7a0(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x7a8(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x7b0(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x7b8(0x08)
	bool bAddedToScreen; // 0x7c0(0x01)
	bool bEditTimeUsable; // 0x7c1(0x01)
	char pad_7C2[0x2]; // 0x7c2(0x02)
	struct FName SharedLayerName; // 0x7c4(0x08)
	int32_t LayerZorder; // 0x7cc(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x7d0(0x01)
	char pad_7D1[0x3]; // 0x7d1(0x03)
	float CylinderArcAngle; // 0x7d4(0x04)
	char pad_7D8[0x28]; // 0x7d8(0x28)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x58 (Inherited: 0x38)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnFail[0x10]; // 0x48(0x10)

	struct UAsyncTaskDownloadImage* STATIC_DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.BlueprintWhiteListConfig
// Size: 0x50 (Inherited: 0x40)
class UBlueprintWhiteListConfig : public UDeveloperSettings {
public:

	struct TArray<struct FString> TickBlueprintWhiteList; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.UserListEntryLibrary
// Size: 0x30 (Inherited: 0x30)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary {
public:


	bool STATIC_IsListItemSelected(/*struct TScriptInterface<IUserListEntry> UserListEntry*/); // Function UMG.UserListEntryLibrary.IsListItemSelected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x30 (Inherited: 0x30)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary {
public:


	struct UObject* STATIC_GetListItemObject(/*struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry*/); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x30 (Inherited: 0x30)
class UListViewDesignerPreviewItem : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x5a0 (Inherited: 0xf8)
class UMovieScene2DTransformSection : public UMovieSceneSection {
public:

	struct FMovieScene2DTransformMask TransformMask; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FMovieSceneFloatChannel translation[0x2]; // 0x100(0x150)
	struct FMovieSceneFloatChannel Rotation; // 0x250(0xa8)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2f8(0x150)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x448(0x150)
	char pad_598[0x8]; // 0x598(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MovieSceneMarginSection
// Size: 0x398 (Inherited: 0xf8)
class UMovieSceneMarginSection : public UMovieSceneSection {
public:

	struct FMovieSceneFloatChannel TopCurve; // 0xf8(0xa8)
	struct FMovieSceneFloatChannel LeftCurve; // 0x1a0(0xa8)
	struct FMovieSceneFloatChannel RightCurve; // 0x248(0xa8)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2f0(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MovieSceneMarginTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MovieSceneWidgetAnimationSection
// Size: 0x1c0 (Inherited: 0x168)
class UMovieSceneWidgetAnimationSection : public UMovieSceneSubSection {
public:

	char pad_168[0x8]; // 0x168(0x08)
	/*struct TSoftObjectPtr<UWidget>*/char WidgetTemplate[0x28]; // 0x170(0x28)
	/*struct TSoftObjectPtr<UWidgetAnimation>*/char AnimationTemplate[0x28]; // 0x198(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MovieSceneWidgetAnimationTrack
// Size: 0x88 (Inherited: 0x88)
class UMovieSceneWidgetAnimationTrack : public UMovieSceneSubTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0x88 (Inherited: 0x70)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack {
public:

	struct TArray<struct FName> BrushPropertyNamePath; // 0x70(0x10)
	struct FName TrackName; // 0x80(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MovieSceneWidgetOverrideMaterialTrack
// Size: 0x70 (Inherited: 0x70)
class UMovieSceneWidgetOverrideMaterialTrack : public UMovieSceneMaterialTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.NamedSlotInterface
// Size: 0x30 (Inherited: 0x30)
class UNamedSlotInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	struct FVector2D STATIC_TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.SlateVectorArtData
// Size: 0x68 (Inherited: 0x30)
class USlateVectorArtData : public UObject {
public:

	struct TArray<struct FSlateMeshVertex> VertexData; // 0x30(0x10)
	struct TArray<uint32_t> IndexData; // 0x40(0x10)
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FVector2D ExtentMin; // 0x58(0x08)
	struct FVector2D ExtentMax; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x88 (Inherited: 0x30)
class USlateAccessibleWidgetData : public UObject {
public:

	bool bCanChildrenBeAccessible; // 0x30(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x31(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct FText AccessibleText; // 0x38(0x18)
	/*struct FDelegate*/char AccessibleTextDelegate[0x10]; // 0x50(0x10)
	struct FText AccessibleSummaryText; // 0x60(0x18)
	/*struct FDelegate*/char AccessibleSummaryTextDelegate[0x10]; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.UMGSequencePlayer
// Size: 0x918 (Inherited: 0x30)
class UUMGSequencePlayer : public UObject {
public:

	char pad_30[0x4b8]; // 0x30(0x4b8)
	struct UWidgetAnimation* Animation; // 0x4e8(0x08)
	char pad_4F0[0x428]; // 0x4f0(0x428)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.UMGSequenceTickManager
// Size: 0x58 (Inherited: 0x30)
class UUMGSequenceTickManager : public UObject {
public:

	char pad_30[0x28]; // 0x30(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetAnimation
// Size: 0x400 (Inherited: 0x3c8)
class UWidgetAnimation : public UMovieSceneSequence {
public:

	struct UMovieScene* MovieScene; // 0x3c8(0x08)
	bool bIgnoreReferenceObjectCache; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x3d8(0x10)
	char AnimationQuality; // 0x3e8(0x01)
	bool bLegacyFinishOnStop; // 0x3e9(0x01)
	char pad_3EA[0x6]; // 0x3ea(0x06)
	struct FString DisplayLabel; // 0x3f0(0x10)

	void UnbindFromAnimationStarted(/*struct UUserWidget* Widget, struct FDelegate Delegate*/); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x40 (Inherited: 0x30)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding {
public:

	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x50 (Inherited: 0x30)
class UWidgetAnimationPlayCallbackProxy : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char Finished[0x10]; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)

	struct UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	struct FEventReply STATIC_UnlockMouse(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetComponent3DUI
// Size: 0x980 (Inherited: 0x6c8)
class UWidgetComponent3DUI : public UMeshComponent {
public:

	char pad_6C8[0x2]; // 0x6c8(0x02)
	enum class EWidgetType3DUI TypeOfWidget; // 0x6ca(0x01)
	char pad_6CB[0x5]; // 0x6cb(0x05)
	struct UClass* WidgetClass; // 0x6d0(0x08)
	struct FVector2D DrawSize; // 0x6d8(0x08)
	char pad_6E0[0x10]; // 0x6e0(0x10)
	bool bReceiveHardwareInput; // 0x6f0(0x01)
	char pad_6F1[0x7]; // 0x6f1(0x07)
	struct ULocalPlayer* OwnerPlayer; // 0x6f8(0x08)
	struct UUserWidget* Widget; // 0x700(0x08)
	struct UBodySetup* BodySetup; // 0x708(0x08)
	char pad_710[0x38]; // 0x710(0x38)
	struct TArray<struct UUserWidget*> WidgetsWaitingToAdd; // 0x748(0x10)
	struct TArray<struct UUserWidget*> WidgetsWaitingToRemove; // 0x758(0x10)
	struct TArray<struct UUserWidget*> HasAddedWidgets; // 0x768(0x10)
	char pad_778[0x60]; // 0x778(0x60)
	float DpiScale; // 0x7d8(0x04)
	char pad_7DC[0x4]; // 0x7dc(0x04)
	/*struct TSoftClassPtr<UObject>*/char SoftWidgetClassRef[0x28]; // 0x7e0(0x28)
	struct FLinearColor ColorFactor; // 0x808(0x10)
	bool bManuallyCreate; // 0x818(0x01)
	bool bIsDraw; // 0x819(0x01)
	char pad_81A[0x2]; // 0x81a(0x02)
	float JitterYPercent; // 0x81c(0x04)
	float JitterStrength; // 0x820(0x04)
	float ColorJitterStrength; // 0x824(0x04)
	float JitterPosOffsetFactor; // 0x828(0x04)
	float JitterPosOffset; // 0x82c(0x04)
	float SurfaceRadius; // 0x830(0x04)
	float SurfaceTriangleMaxWidth; // 0x834(0x04)
	bool BumpOut; // 0x838(0x01)
	char pad_839[0x147]; // 0x839(0x147)

	void Show(); // Function UMG.WidgetComponent3DUI.Show // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetInteractionComponent
// Size: 0x430 (Inherited: 0x240)
class UWidgetInteractionComponent : public USceneComponent {
public:

	/*struct FMulticastInlineDelegate*/char OnHoveredWidgetChanged[0x10]; // 0x240(0x10)
	char pad_250[0x10]; // 0x250(0x10)
	int32_t VirtualUserIndex; // 0x260(0x04)
	float PointerIndex; // 0x264(0x04)
	enum class ECollisionChannel TraceChannel; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float InteractionDistance; // 0x26c(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x270(0x01)
	bool bEnableHitTesting; // 0x271(0x01)
	bool bShowDebug; // 0x272(0x01)
	char pad_273[0x1]; // 0x273(0x01)
	struct FLinearColor DebugColor; // 0x274(0x10)
	char pad_284[0x7c]; // 0x284(0x7c)
	struct FHitResult CustomHitResult; // 0x300(0x88)
	struct FVector2D LocalHitLocation; // 0x388(0x08)
	struct FVector2D LastLocalHitLocation; // 0x390(0x08)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x398(0x08)
	struct FHitResult LastHitResult; // 0x3a0(0x88)
	bool bIsHoveredWidgetInteractable; // 0x428(0x01)
	bool bIsHoveredWidgetFocusable; // 0x429(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x42a(0x01)
	char pad_42B[0x5]; // 0x42b(0x05)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x30 (Inherited: 0x30)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary {
public:


	struct UWrapBoxSlot* STATIC_SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetNavigation
// Size: 0x108 (Inherited: 0x30)
class UWidgetNavigation : public UObject {
public:

	struct FWidgetNavigationData Up; // 0x30(0x24)
	struct FWidgetNavigationData Down; // 0x54(0x24)
	struct FWidgetNavigationData Left; // 0x78(0x24)
	struct FWidgetNavigationData Right; // 0x9c(0x24)
	struct FWidgetNavigationData Next; // 0xc0(0x24)
	struct FWidgetNavigationData Previous; // 0xe4(0x24)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetTree
// Size: 0x38 (Inherited: 0x30)
class UWidgetTree : public UObject {
public:

	struct UWidget* RootWidget; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// WidgetBlueprintGeneratedClass UMG.Default__WidgetBlueprintGeneratedClass
// Size: 0x00 (Inherited: 0x00)
class Default__WidgetBlueprintGeneratedClass {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Visual
// Size: 0x30 (Inherited: 0x30)
class UVisual : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.RichTextBlockDecorator
// Size: 0x30 (Inherited: 0x30)
class URichTextBlockDecorator : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.PropertyBinding
// Size: 0x68 (Inherited: 0x30)
class UPropertyBinding : public UObject {
public:

	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x30(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x38(0x28)
	struct FName DestinationProperty; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.UserListEntry
// Size: 0x30 (Inherited: 0x30)
class UUserListEntry : public UInterface {
public:


	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Widget
// Size: 0x168 (Inherited: 0x30)
class UWidget : public UVisual {
public:

	struct UPanelSlot* Slot; // 0x30(0x08)
	/*struct FDelegate*/char bIsEnabledDelegate[0x10]; // 0x38(0x10)
	struct FText ToolTipText; // 0x48(0x18)
	enum class EWidgetEnableQualityFlags EnableQualityConfig; // 0x60(0x01)
	enum class EWidgetEnableQualityFlags EnableQualityConfigHD; // 0x61(0x01)
	enum class EWidgetEnablePlatformFlags EnablePlatformConfig; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	/*struct FDelegate*/char ToolTipTextDelegate[0x10]; // 0x64(0x10)
	char pad_74[0x4]; // 0x74(0x04)
	struct UWidget* ToolTipWidget; // 0x78(0x08)
	/*struct FDelegate*/char ToolTipWidgetDelegate[0x10]; // 0x80(0x10)
	/*struct FDelegate*/char VisibilityDelegate[0x10]; // 0x90(0x10)
	/*struct FMulticastInlineDelegate*/char OnWidgetInvalidated[0x10]; // 0xa0(0x10)
	struct FInvalidateWidgetReason InvalidatedReason; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FWidgetTransform RenderTransform; // 0xb4(0x1c)
	struct FMargin ExtendHitMargin; // 0xd0(0x10)
	float PositionZ; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0xe8(0x08)
	enum class EMaterialStrategy MaterialInheritStrategy; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVector2D RenderTransformPivot; // 0xf4(0x08)
	char bIsVariable : 1; // 0xfc(0x01)
	char bCreatedByConstructionScript : 1; // 0xfc(0x01)
	char bIsEnabled : 1; // 0xfc(0x01)
	char bOverride_Cursor : 1; // 0xfc(0x01)
	char pad_FC_4 : 4; // 0xfc(0x01)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xfd(0x01)
	char bBreakUpTransfer : 1; // 0xfe(0x01)
	char bDirtyTransferSkipSize : 1; // 0xfe(0x01)
	char bDisableTick : 1; // 0xfe(0x01)
	char UsedLayerPolicy : 1; // 0xfe(0x01)
	char bCacheRelativeTransform : 1; // 0xfe(0x01)
	char bCacheRenderOpacity : 1; // 0xfe(0x01)
	char bOnlyCacheRenderTranslation : 1; // 0xfe(0x01)
	char bBlockable : 1; // 0xfe(0x01)
	char bOptimalPerf : 1; // 0xff(0x01)
	char bStrictLayer : 1; // 0xff(0x01)
	char bCacheChildLayout : 1; // 0xff(0x01)
	char pad_FF_3 : 5; // 0xff(0x01)
	int32_t WidgetLayerId; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0x108(0x08)
	char bIsVolatile : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	enum class EMouseCursor Cursor; // 0x111(0x01)
	enum class EWidgetClipping Clipping; // 0x112(0x01)
	enum class ESlateVisibility Visibility; // 0x113(0x01)
	float RenderOpacity; // 0x114(0x04)
	enum class EWidgetPixelSnapping PixelSnapping; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct UWidgetNavigation* Navigation; // 0x120(0x08)
	enum class ESlateGeometryMaskType MaskGeometryType; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FVector2D MaskGeometryMargin; // 0x12c(0x08)
	bool bDebugShowMaskRegion; // 0x134(0x01)
	char pad_135[0x23]; // 0x135(0x23)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x158(0x10)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.PanelSlot
// Size: 0x40 (Inherited: 0x30)
class UPanelSlot : public UVisual {
public:

	struct UPanelWidget* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x38 (Inherited: 0x30)
class URichTextBlockImageDecorator : public URichTextBlockDecorator {
public:

	struct UDataTable* ImageSet; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.BoolBinding
// Size: 0x68 (Inherited: 0x68)
class UBoolBinding : public UPropertyBinding {
public:


	bool GetValue(); // Function UMG.BoolBinding.GetValue // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.BrushBinding
// Size: 0x70 (Inherited: 0x68)
class UBrushBinding : public UPropertyBinding {
public:

	char pad_68[0x8]; // 0x68(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.CheckedStateBinding
// Size: 0x70 (Inherited: 0x68)
class UCheckedStateBinding : public UPropertyBinding {
public:

	char pad_68[0x8]; // 0x68(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ColorBinding
// Size: 0x70 (Inherited: 0x68)
class UColorBinding : public UPropertyBinding {
public:

	char pad_68[0x8]; // 0x68(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.FloatBinding
// Size: 0x68 (Inherited: 0x68)
class UFloatBinding : public UPropertyBinding {
public:


	float GetValue(); // Function UMG.FloatBinding.GetValue // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Int32Binding
// Size: 0x68 (Inherited: 0x68)
class UInt32Binding : public UPropertyBinding {
public:


	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MouseCursorBinding
// Size: 0x68 (Inherited: 0x68)
class UMouseCursorBinding : public UPropertyBinding {
public:


	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.TextBinding
// Size: 0x70 (Inherited: 0x68)
class UTextBinding : public UPropertyBinding {
public:

	char pad_68[0x8]; // 0x68(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.VisibilityBinding
// Size: 0x68 (Inherited: 0x68)
class UVisibilityBinding : public UPropertyBinding {
public:


	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetBinding
// Size: 0x68 (Inherited: 0x68)
class UWidgetBinding : public UPropertyBinding {
public:


	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.UserObjectListEntry
// Size: 0x30 (Inherited: 0x30)
class UUserObjectListEntry : public UUserListEntry {
public:


	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.UserWidget
// Size: 0x298 (Inherited: 0x168)
class UUserWidget : public UWidget {
public:

	char pad_168[0x8]; // 0x168(0x08)
	struct FLinearColor ColorAndOpacity; // 0x170(0x10)
	/*struct FDelegate*/char ColorAndOpacityDelegate[0x10]; // 0x180(0x10)
	struct FSlateColor ForegroundColor; // 0x190(0x28)
	/*struct FDelegate*/char ForegroundColorDelegate[0x10]; // 0x1b8(0x10)
	struct FMargin Padding; // 0x1c8(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1d8(0x10)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1e8(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1f8(0x10)
	struct UWidgetTree* WidgetTree; // 0x208(0x08)
	struct UUMGSequenceTickManager* AnimationTickManager; // 0x210(0x08)
	int32_t Priority; // 0x218(0x04)
	char bSupportsKeyboardFocus : 1; // 0x21c(0x01)
	char bIsFocusable : 1; // 0x21c(0x01)
	char bStopAction : 1; // 0x21c(0x01)
	char bHasScriptImplementedTick : 1; // 0x21c(0x01)
	char bHasScriptImplementedPaint : 1; // 0x21c(0x01)
	char bNeedPrepassWhenAnim : 1; // 0x21c(0x01)
	char bNeedCheckLatentAction : 1; // 0x21c(0x01)
	char pad_21C_7 : 1; // 0x21c(0x01)
	char pad_21D[0xb]; // 0x21d(0x0b)
	enum class EWidgetTickFrequency TickFrequency; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct UInputComponent* InputComponent; // 0x230(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x238(0x10)
	char pad_248[0x50]; // 0x248(0x50)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.PanelWidget
// Size: 0x180 (Inherited: 0x168)
class UPanelWidget : public UWidget {
public:

	struct TArray<struct UPanelSlot*> Slots; // 0x168(0x10)
	char bIsCacheSlot : 1; // 0x178(0x01)
	char pad_178_1 : 7; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)

	bool ReplaceChildAt(int32_t Index, struct UWidget* Content); // Function UMG.PanelWidget.ReplaceChildAt // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.TextLayoutWidget
// Size: 0x1e8 (Inherited: 0x168)
class UTextLayoutWidget : public UWidget {
public:

	struct FShapedTextOptions ShapedTextOptions; // 0x168(0x03)
	enum class ETextJustify Justification; // 0x16b(0x01)
	enum class ETextVerticalJustify VerticalJustification; // 0x16c(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x16d(0x01)
	char AutoWrapText : 1; // 0x16e(0x01)
	char pad_16E_1 : 7; // 0x16e(0x01)
	char pad_16F[0x1]; // 0x16f(0x01)
	float WrapTextAt; // 0x170(0x04)
	struct FMargin Margin; // 0x174(0x10)
	float LineHeightPercentage; // 0x184(0x04)
	char pad_188[0x10]; // 0x188(0x10)
	struct TMap<struct FName, struct FTextBlockStyle> TextStyleIdx2StylesMaps; // 0x198(0x50)

	void SetVerticalJustification(enum class ETextVerticalJustify VJustification); // Function UMG.TextLayoutWidget.SetVerticalJustification // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Image
// Size: 0x2e0 (Inherited: 0x168)
class UImage : public UWidget {
public:

	bool bCustomize; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	struct FName StyleId; // 0x16c(0x08)
	char pad_174[0x4]; // 0x174(0x04)
	struct FSlateBrush Brush; // 0x178(0x90)
	/*struct FDelegate*/char BrushDelegate[0x10]; // 0x208(0x10)
	enum class ESlateBrushMirrorType MirrorType; // 0x218(0x01)
	char pad_219[0x3]; // 0x219(0x03)
	struct FLinearColor ColorAndOpacity; // 0x21c(0x10)
	/*struct FDelegate*/char ColorAndOpacityDelegate[0x10]; // 0x22c(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct TMap<struct FName, struct FLinearColor> ImageStyleMap; // 0x240(0x50)
	bool bPixelFill; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	/*struct FDelegate*/char OnMouseButtonDownEvent[0x10]; // 0x294(0x10)
	char pad_2A4[0x3c]; // 0x2a4(0x3c)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ComboBoxString
// Size: 0xee8 (Inherited: 0x168)
class UComboBoxString : public UWidget {
public:

	struct TArray<struct FString> DefaultOptions; // 0x168(0x10)
	struct FString SelectedOption; // 0x178(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x188(0x408)
	struct FTableRowStyle ItemStyle; // 0x590(0x838)
	struct FMargin ContentPadding; // 0xdc8(0x10)
	float MaxListHeight; // 0xdd8(0x04)
	bool HasDownArrow; // 0xddc(0x01)
	bool EnableGamepadNavigationMode; // 0xddd(0x01)
	char pad_DDE[0x2]; // 0xdde(0x02)
	struct FSlateFontInfo Font; // 0xde0(0x58)
	struct FSlateColor ForegroundColor; // 0xe38(0x28)
	bool bIsFocusable; // 0xe60(0x01)
	char pad_E61[0x3]; // 0xe61(0x03)
	/*struct FDelegate*/char OnGenerateWidgetEvent[0x10]; // 0xe64(0x10)
	char pad_E74[0x4]; // 0xe74(0x04)
	/*struct FMulticastInlineDelegate*/char OnSelectionChanged[0x10]; // 0xe78(0x10)
	/*struct FMulticastInlineDelegate*/char OnOpening[0x10]; // 0xe88(0x10)
	char pad_E98[0x50]; // 0xe98(0x50)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ListViewBase
// Size: 0x278 (Inherited: 0x168)
class UListViewBase : public UWidget {
public:

	struct UClass* EntryWidgetClass; // 0x168(0x08)
	float WheelScrollMultiplier; // 0x170(0x04)
	bool bEnableScrollAnimation; // 0x174(0x01)
	bool bEnableFixedLineOffset; // 0x175(0x01)
	char pad_176[0x2]; // 0x176(0x02)
	float FixedLineScrollOffset; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	/*struct FMulticastInlineDelegate*/char BP_OnEntryGenerated[0x10]; // 0x180(0x10)
	/*struct FMulticastInlineDelegate*/char BP_OnEntryReleased[0x10]; // 0x190(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x1a0(0x80)
	char pad_220[0x58]; // 0x220(0x58)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.EditableText
// Size: 0x4d8 (Inherited: 0x168)
class UEditableText : public UWidget {
public:

	struct FText Text; // 0x168(0x18)
	/*struct FDelegate*/char TextDelegate[0x10]; // 0x180(0x10)
	struct FText HintText; // 0x190(0x18)
	/*struct FDelegate*/char HintTextDelegate[0x10]; // 0x1a8(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x1b8(0x238)
	struct USlateWidgetStyleAsset* Style; // 0x3f0(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3f8(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x400(0x08)
	struct USlateBrushAsset* CaretImage; // 0x408(0x08)
	struct FSlateFontInfo Font; // 0x410(0x58)
	struct FSlateColor ColorAndOpacity; // 0x468(0x28)
	bool IsReadOnly; // 0x490(0x01)
	bool IsPassword; // 0x491(0x01)
	char pad_492[0x2]; // 0x492(0x02)
	float MinimumDesiredWidth; // 0x494(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x498(0x01)
	bool SelectAllTextWhenFocused; // 0x499(0x01)
	bool RevertTextOnEscape; // 0x49a(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x49b(0x01)
	bool SelectAllTextOnCommit; // 0x49c(0x01)
	bool AllowContextMenu; // 0x49d(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x49e(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x49f(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4a0(0x01)
	enum class ETextJustify Justification; // 0x4a1(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x4a2(0x03)
	enum class ECustomTextFlowPolicy CustomTextFlowPolicy; // 0x4a5(0x01)
	char pad_4A6[0x2]; // 0x4a6(0x02)
	/*struct FMulticastInlineDelegate*/char OnTextChanged[0x10]; // 0x4a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnTextCommitted[0x10]; // 0x4b8(0x10)
	char pad_4C8[0x10]; // 0x4c8(0x10)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.EditableTextBox
// Size: 0xb00 (Inherited: 0x168)
class UEditableTextBox : public UWidget {
public:

	struct FText Text; // 0x168(0x18)
	/*struct FDelegate*/char TextDelegate[0x10]; // 0x180(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x190(0x860)
	struct USlateWidgetStyleAsset* Style; // 0x9f0(0x08)
	struct FText HintText; // 0x9f8(0x18)
	/*struct FDelegate*/char HintTextDelegate[0x10]; // 0xa10(0x10)
	struct FSlateFontInfo Font; // 0xa20(0x58)
	struct FLinearColor ForegroundColor; // 0xa78(0x10)
	struct FLinearColor BackgroundColor; // 0xa88(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xa98(0x10)
	bool IsReadOnly; // 0xaa8(0x01)
	bool IsPassword; // 0xaa9(0x01)
	char pad_AAA[0x2]; // 0xaaa(0x02)
	float MinimumDesiredWidth; // 0xaac(0x04)
	struct FMargin Padding; // 0xab0(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xac0(0x01)
	bool SelectAllTextWhenFocused; // 0xac1(0x01)
	bool RevertTextOnEscape; // 0xac2(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xac3(0x01)
	bool SelectAllTextOnCommit; // 0xac4(0x01)
	bool AllowContextMenu; // 0xac5(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0xac6(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xac7(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xac8(0x01)
	enum class ETextJustify Justification; // 0xac9(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0xaca(0x03)
	enum class ECustomTextFlowPolicy CustomTextFlowPolicy; // 0xacd(0x01)
	char pad_ACE[0x2]; // 0xace(0x02)
	/*struct FMulticastInlineDelegate*/char OnTextChanged[0x10]; // 0xad0(0x10)
	/*struct FMulticastInlineDelegate*/char OnTextCommitted[0x10]; // 0xae0(0x10)
	char pad_AF0[0x10]; // 0xaf0(0x10)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ExpandableArea
// Size: 0x3b0 (Inherited: 0x168)
class UExpandableArea : public UWidget {
public:

	char pad_168[0x8]; // 0x168(0x08)
	struct FExpandableAreaStyle Style; // 0x170(0x130)
	struct FSlateBrush BorderBrush; // 0x2a0(0x90)
	struct FSlateColor BorderColor; // 0x330(0x28)
	bool bIsExpanded; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	float MaxHeight; // 0x35c(0x04)
	struct FMargin HeaderPadding; // 0x360(0x10)
	struct FMargin AreaPadding; // 0x370(0x10)
	/*struct FMulticastInlineDelegate*/char OnExpansionChanged[0x10]; // 0x380(0x10)
	struct UWidget* HeaderContent; // 0x390(0x08)
	struct UWidget* BodyContent; // 0x398(0x08)
	char pad_3A0[0x10]; // 0x3a0(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ProgressBar
// Size: 0x3a0 (Inherited: 0x168)
class UProgressBar : public UWidget {
public:

	struct FProgressBarStyle WidgetStyle; // 0x168(0x1b8)
	struct USlateWidgetStyleAsset* Style; // 0x320(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x328(0x08)
	struct USlateBrushAsset* FillImage; // 0x330(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x338(0x08)
	float Percent; // 0x340(0x04)
	float LeftValue; // 0x344(0x04)
	float RightValue; // 0x348(0x04)
	enum class EProgressBarFillType BarFillType; // 0x34c(0x01)
	bool bIsMarquee; // 0x34d(0x01)
	char pad_34E[0x2]; // 0x34e(0x02)
	struct FVector2D BorderPadding; // 0x350(0x08)
	/*struct FDelegate*/char PercentDelegate[0x10]; // 0x358(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x368(0x10)
	/*struct FDelegate*/char FillColorAndOpacityDelegate[0x10]; // 0x378(0x10)
	char pad_388[0x18]; // 0x388(0x18)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.RadialImage
// Size: 0x278 (Inherited: 0x168)
class URadialImage : public UWidget {
public:

	struct FSlateBrush Brush; // 0x168(0x90)
	/*struct FDelegate*/char BrushDelegate[0x10]; // 0x1f8(0x10)
	float Percent; // 0x208(0x04)
	enum class ERadialImageFillType FillType; // 0x20c(0x01)
	char pad_20D[0x3]; // 0x20d(0x03)
	/*struct FDelegate*/char PercentDelegate[0x10]; // 0x210(0x10)
	bool bClockWise; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	/*struct FDelegate*/char bClockWiseDelegate[0x10]; // 0x224(0x10)
	struct FLinearColor ColorAndOpacity; // 0x234(0x10)
	/*struct FDelegate*/char ColorAndOpacityDelegate[0x10]; // 0x244(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	/*struct FDelegate*/char OnMouseButtonDownEvent[0x10]; // 0x258(0x10)
	char pad_268[0x10]; // 0x268(0x10)

	void SetPercent(float InPercent); // Function UMG.RadialImage.SetPercent // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Slider
// Size: 0x588 (Inherited: 0x168)
class USlider : public UWidget {
public:

	float Value; // 0x168(0x04)
	/*struct FDelegate*/char ValueDelegate[0x10]; // 0x16c(0x10)
	float MinValue; // 0x17c(0x04)
	float MaxValue; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FSliderStyle WidgetStyle; // 0x188(0x370)
	enum class EOrientation Orientation; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	struct FLinearColor SliderBarColor; // 0x4fc(0x10)
	struct FLinearColor SliderHandleColor; // 0x50c(0x10)
	bool IndentHandle; // 0x51c(0x01)
	bool Locked; // 0x51d(0x01)
	bool MouseUsesStep; // 0x51e(0x01)
	bool RequiresControllerLock; // 0x51f(0x01)
	float StepSize; // 0x520(0x04)
	bool IsFocusable; // 0x524(0x01)
	char pad_525[0x3]; // 0x525(0x03)
	/*struct FMulticastInlineDelegate*/char OnMouseCaptureBegin[0x10]; // 0x528(0x10)
	/*struct FMulticastInlineDelegate*/char OnMouseCaptureEnd[0x10]; // 0x538(0x10)
	/*struct FMulticastInlineDelegate*/char OnControllerCaptureBegin[0x10]; // 0x548(0x10)
	/*struct FMulticastInlineDelegate*/char OnControllerCaptureEnd[0x10]; // 0x558(0x10)
	/*struct FMulticastInlineDelegate*/char OnValueChanged[0x10]; // 0x568(0x10)
	char pad_578[0x10]; // 0x578(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Spacer
// Size: 0x180 (Inherited: 0x168)
class USpacer : public UWidget {
public:

	struct FVector2D size; // 0x168(0x08)
	char pad_170[0x10]; // 0x170(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.SpinBox
// Size: 0x598 (Inherited: 0x168)
class USpinBox : public UWidget {
public:

	float Value; // 0x168(0x04)
	/*struct FDelegate*/char ValueDelegate[0x10]; // 0x16c(0x10)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FSpinBoxStyle WidgetStyle; // 0x180(0x310)
	struct USlateWidgetStyleAsset* Style; // 0x490(0x08)
	float Delta; // 0x498(0x04)
	float SliderExponent; // 0x49c(0x04)
	struct FSlateFontInfo Font; // 0x4a0(0x58)
	enum class ETextJustify Justification; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float MinDesiredWidth; // 0x4fc(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x500(0x01)
	bool SelectAllTextOnCommit; // 0x501(0x01)
	char pad_502[0x6]; // 0x502(0x06)
	struct FSlateColor ForegroundColor; // 0x508(0x28)
	/*struct FMulticastInlineDelegate*/char OnValueChanged[0x10]; // 0x530(0x10)
	/*struct FMulticastInlineDelegate*/char OnValueCommitted[0x10]; // 0x540(0x10)
	/*struct FMulticastInlineDelegate*/char OnBeginSliderMovement[0x10]; // 0x550(0x10)
	/*struct FMulticastInlineDelegate*/char OnEndSliderMovement[0x10]; // 0x560(0x10)
	char bOverride_MinValue : 1; // 0x570(0x01)
	char bOverride_MaxValue : 1; // 0x570(0x01)
	char bOverride_MinSliderValue : 1; // 0x570(0x01)
	char bOverride_MaxSliderValue : 1; // 0x570(0x01)
	char pad_570_4 : 4; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	float MinValue; // 0x574(0x04)
	float MaxValue; // 0x578(0x04)
	float MinSliderValue; // 0x57c(0x04)
	float MaxSliderValue; // 0x580(0x04)
	char pad_584[0x14]; // 0x584(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.CircularThrobber
// Size: 0x228 (Inherited: 0x168)
class UCircularThrobber : public UWidget {
public:

	int32_t NumberOfPieces; // 0x168(0x04)
	float Period; // 0x16c(0x04)
	float radius; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct USlateBrushAsset* PieceImage; // 0x178(0x08)
	struct FSlateBrush Image; // 0x180(0x90)
	bool bEnableRadius; // 0x210(0x01)
	char pad_211[0x17]; // 0x211(0x17)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ComboBox
// Size: 0x1a0 (Inherited: 0x168)
class UComboBox : public UWidget {
public:

	struct TArray<struct UObject*> Items; // 0x168(0x10)
	/*struct FDelegate*/char OnGenerateWidgetEvent[0x10]; // 0x178(0x10)
	bool bIsFocusable; // 0x188(0x01)
	char pad_189[0x17]; // 0x189(0x17)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x228 (Inherited: 0x168)
class UDynamicEntryBoxBase : public UWidget {
public:

	enum class EDynamicBoxType EntryBoxType; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	struct FVector2D EntrySpacing; // 0x16c(0x08)
	char pad_174[0x4]; // 0x174(0x04)
	struct TArray<struct FVector2D> SpacingPattern; // 0x178(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x188(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x190(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x191(0x01)
	char pad_192[0x2]; // 0x192(0x02)
	int32_t MaxElementSize; // 0x194(0x04)
	char pad_198[0x10]; // 0x198(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x1a8(0x80)

	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.InputKeySelector
// Size: 0x7a0 (Inherited: 0x168)
class UInputKeySelector : public UWidget {
public:

	struct FButtonStyle WidgetStyle; // 0x168(0x298)
	struct FTextBlockStyle TextStyle; // 0x400(0x290)
	struct FInputChord SelectedKey; // 0x690(0x20)
	struct FSlateFontInfo Font; // 0x6b0(0x58)
	struct FMargin Margin; // 0x708(0x10)
	struct FLinearColor ColorAndOpacity; // 0x718(0x10)
	struct FText KeySelectionText; // 0x728(0x18)
	struct FText NoKeySpecifiedText; // 0x740(0x18)
	bool bAllowModifierKeys; // 0x758(0x01)
	bool bAllowGamepadKeys; // 0x759(0x01)
	char pad_75A[0x6]; // 0x75a(0x06)
	struct TArray<struct FKey> EscapeKeys; // 0x760(0x10)
	/*struct FMulticastInlineDelegate*/char OnKeySelected[0x10]; // 0x770(0x10)
	/*struct FMulticastInlineDelegate*/char OnIsSelectingKeyChanged[0x10]; // 0x780(0x10)
	char pad_790[0x10]; // 0x790(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Line
// Size: 0x1c0 (Inherited: 0x168)
class ULine : public UWidget {
public:

	struct FLinearColor ColorAndOpacity; // 0x168(0x10)
	enum class ELineWidgetOrientation Orientation; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	float Thickness; // 0x17c(0x04)
	/*struct FDelegate*/char ColorAndOpacityDelegate[0x10]; // 0x180(0x10)
	/*struct FDelegate*/char ThicknessDelegate[0x10]; // 0x190(0x10)
	/*struct FDelegate*/char OnMouseButtonDownEvent[0x10]; // 0x1a0(0x10)
	char pad_1B0[0x10]; // 0x1b0(0x10)

	void SetThickness(float InThickness); // Function UMG.Line.SetThickness // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MirrorImage
// Size: 0x2e0 (Inherited: 0x168)
class UMirrorImage : public UWidget {
public:

	bool bCustomize; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	struct FName StyleId; // 0x16c(0x08)
	char pad_174[0x4]; // 0x174(0x04)
	struct FSlateBrush Brush; // 0x178(0x90)
	/*struct FDelegate*/char BrushDelegate[0x10]; // 0x208(0x10)
	enum class ESlateBrushMirrorType MirrorType; // 0x218(0x01)
	char pad_219[0x3]; // 0x219(0x03)
	struct FLinearColor ColorAndOpacity; // 0x21c(0x10)
	/*struct FDelegate*/char ColorAndOpacityDelegate[0x10]; // 0x22c(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct TMap<struct FName, struct FLinearColor> ImageStyleMap; // 0x240(0x50)
	bool bPixelFill; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	/*struct FDelegate*/char OnMouseButtonDownEvent[0x10]; // 0x294(0x10)
	char pad_2A4[0x3c]; // 0x2a4(0x3c)

	void SetOpacity(float InOpacity); // Function UMG.MirrorImage.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.NativeWidgetHost
// Size: 0x178 (Inherited: 0x168)
class UNativeWidgetHost : public UWidget {
public:

	char pad_168[0x10]; // 0x168(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ScrollBar
// Size: 0x6b8 (Inherited: 0x168)
class UScrollBar : public UWidget {
public:

	struct FScrollBarStyle WidgetStyle; // 0x168(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x680(0x08)
	bool bAlwaysShowScrollbar; // 0x688(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x689(0x01)
	enum class EOrientation Orientation; // 0x68a(0x01)
	char pad_68B[0x1]; // 0x68b(0x01)
	struct FVector2D Thickness; // 0x68c(0x08)
	struct FMargin Padding; // 0x694(0x10)
	char pad_6A4[0x14]; // 0x6a4(0x14)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Throbber
// Size: 0x218 (Inherited: 0x168)
class UThrobber : public UWidget {
public:

	int32_t NumberOfPieces; // 0x168(0x04)
	bool bAnimateHorizontally; // 0x16c(0x01)
	bool bAnimateVertically; // 0x16d(0x01)
	bool bAnimateOpacity; // 0x16e(0x01)
	char pad_16F[0x1]; // 0x16f(0x01)
	struct USlateBrushAsset* PieceImage; // 0x170(0x08)
	struct FSlateBrush Image; // 0x178(0x90)
	char pad_208[0x10]; // 0x208(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.BackgroundBlurSlot
// Size: 0x68 (Inherited: 0x40)
class UBackgroundBlurSlot : public UPanelSlot {
public:

	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.BorderSlot
// Size: 0x68 (Inherited: 0x40)
class UBorderSlot : public UPanelSlot {
public:

	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ButtonSlot
// Size: 0x68 (Inherited: 0x40)
class UButtonSlot : public UPanelSlot {
public:

	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.CanvasPanelSlot
// Size: 0x78 (Inherited: 0x40)
class UCanvasPanelSlot : public UPanelSlot {
public:

	struct FAnchorData LayoutData; // 0x40(0x28)
	bool bAutoSize; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t ZOrder; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.GridSlot
// Size: 0x78 (Inherited: 0x40)
class UGridSlot : public UPanelSlot {
public:

	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t Row; // 0x54(0x04)
	int32_t RowSpan; // 0x58(0x04)
	int32_t Column; // 0x5c(0x04)
	int32_t ColumnSpan; // 0x60(0x04)
	int32_t Layer; // 0x64(0x04)
	struct FVector2D Nudge; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.HorizontalBoxSlot
// Size: 0x68 (Inherited: 0x40)
class UHorizontalBoxSlot : public UPanelSlot {
public:

	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	struct FSlateChildSize size; // 0x58(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.OverlaySlot
// Size: 0x60 (Inherited: 0x40)
class UOverlaySlot : public UPanelSlot {
public:

	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.SafeZoneSlot
// Size: 0x68 (Inherited: 0x40)
class USafeZoneSlot : public UPanelSlot {
public:

	bool bIsTitleSafe; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FMargin SafeAreaScale; // 0x44(0x10)
	enum class EHorizontalAlignment HAlign; // 0x54(0x01)
	enum class EVerticalAlignment VAlign; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FMargin Padding; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ScaleBoxSlot
// Size: 0x68 (Inherited: 0x40)
class UScaleBoxSlot : public UPanelSlot {
public:

	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ScrollBoxSlot
// Size: 0x60 (Inherited: 0x40)
class UScrollBoxSlot : public UPanelSlot {
public:

	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.SizeBoxSlot
// Size: 0x68 (Inherited: 0x40)
class USizeBoxSlot : public UPanelSlot {
public:

	struct FMargin Padding; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.UniformGridSlot
// Size: 0x58 (Inherited: 0x40)
class UUniformGridSlot : public UPanelSlot {
public:

	enum class EHorizontalAlignment HorizontalAlignment; // 0x40(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t Row; // 0x44(0x04)
	int32_t Column; // 0x48(0x04)
	char pad_4C[0xc]; // 0x4c(0x0c)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.VerticalBoxSlot
// Size: 0x68 (Inherited: 0x40)
class UVerticalBoxSlot : public UPanelSlot {
public:

	struct FSlateChildSize size; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x60 (Inherited: 0x40)
class UWidgetSwitcherSlot : public UPanelSlot {
public:

	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x68 (Inherited: 0x40)
class UWindowTitleBarAreaSlot : public UPanelSlot {
public:

	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WrapBoxSlot
// Size: 0x68 (Inherited: 0x40)
class UWrapBoxSlot : public UPanelSlot {
public:

	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WidgetSwitcher
// Size: 0x198 (Inherited: 0x180)
class UWidgetSwitcher : public UPanelWidget {
public:

	int32_t ActiveWidgetIndex; // 0x180(0x04)
	char pad_184[0x14]; // 0x184(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ContentWidget
// Size: 0x180 (Inherited: 0x180)
class UContentWidget : public UPanelWidget {
public:


	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ScrollBox
// Size: 0x9b0 (Inherited: 0x180)
class UScrollBox : public UPanelWidget {
public:

	struct FScrollBoxStyle WidgetStyle; // 0x180(0x248)
	struct FScrollBarStyle WidgetBarStyle; // 0x3c8(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x8e0(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x8e8(0x08)
	enum class EOrientation Orientation; // 0x8f0(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x8f1(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x8f2(0x01)
	char pad_8F3[0x1]; // 0x8f3(0x01)
	struct FVector2D ScrollbarThickness; // 0x8f4(0x08)
	struct FMargin ScrollbarPadding; // 0x8fc(0x10)
	bool AlwaysShowScrollbar; // 0x90c(0x01)
	bool AlwaysShowScrollbarTrack; // 0x90d(0x01)
	bool AllowOverscroll; // 0x90e(0x01)
	bool bAnimateWheelScrolling; // 0x90f(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x910(0x01)
	char pad_911[0x3]; // 0x911(0x03)
	float NavigationScrollPadding; // 0x914(0x04)
	bool bAllowRightClickDragScrolling; // 0x918(0x01)
	char pad_919[0x3]; // 0x919(0x03)
	float WheelScrollMultiplier; // 0x91c(0x04)
	float OverrideDragTriggerDistance; // 0x920(0x04)
	bool AllowScrollBoxSlot; // 0x924(0x01)
	char pad_925[0x3]; // 0x925(0x03)
	struct FMargin ContentPadding; // 0x928(0x10)
	enum class EHorizontalAlignment ContentHorizontalAlignment; // 0x938(0x01)
	enum class EVerticalAlignment ContentVerticalAlignment; // 0x939(0x01)
	enum class ESlateVisibility ItemVisibility; // 0x93a(0x01)
	char pad_93B[0x1]; // 0x93b(0x01)
	int32_t ItemCount; // 0x93c(0x04)
	bool AllowDynamicCreateItem; // 0x940(0x01)
	char pad_941[0x7]; // 0x941(0x07)
	struct UClass* ItemWidgetTemplateClass; // 0x948(0x08)
	int32_t EditorPreviewItemCount; // 0x950(0x04)
	/*struct FDelegate*/char OnGetItemCount[0x10]; // 0x954(0x10)
	/*struct FDelegate*/char OnProcessItemWidget[0x10]; // 0x964(0x10)
	char pad_974[0x4]; // 0x974(0x04)
	/*struct FMulticastInlineDelegate*/char OnUserScrolled[0x10]; // 0x978(0x10)
	/*struct FMulticastInlineDelegate*/char OnScrollEnd[0x10]; // 0x988(0x10)
	char pad_998[0x18]; // 0x998(0x18)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.CanvasPanel
// Size: 0x198 (Inherited: 0x180)
class UCanvasPanel : public UPanelWidget {
public:

	char bNeedComputeLayout : 1; // 0x180(0x01)
	char pad_180_1 : 7; // 0x180(0x01)
	char pad_181[0x17]; // 0x181(0x17)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.GridPanel
// Size: 0x1b0 (Inherited: 0x180)
class UGridPanel : public UPanelWidget {
public:

	struct TArray<float> ColumnFill; // 0x180(0x10)
	struct TArray<float> RowFill; // 0x190(0x10)
	char pad_1A0[0x10]; // 0x1a0(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.HorizontalBox
// Size: 0x1a8 (Inherited: 0x180)
class UHorizontalBox : public UPanelWidget {
public:

	bool AllowScrollBoxSlot; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	struct FMargin ContentPadding; // 0x184(0x10)
	enum class EHorizontalAlignment ContentHorizontalAlignment; // 0x194(0x01)
	enum class EVerticalAlignment ContentVerticalAlignment; // 0x195(0x01)
	char pad_196[0x12]; // 0x196(0x12)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Overlay
// Size: 0x190 (Inherited: 0x180)
class UOverlay : public UPanelWidget {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.UniformGridPanel
// Size: 0x1a8 (Inherited: 0x180)
class UUniformGridPanel : public UPanelWidget {
public:

	struct FMargin SlotPadding; // 0x180(0x10)
	float MinDesiredSlotWidth; // 0x190(0x04)
	float MinDesiredSlotHeight; // 0x194(0x04)
	char pad_198[0x10]; // 0x198(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.VerticalBox
// Size: 0x1a8 (Inherited: 0x180)
class UVerticalBox : public UPanelWidget {
public:

	bool AllowScrollBoxSlot; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	struct FMargin ContentPadding; // 0x184(0x10)
	enum class EHorizontalAlignment ContentHorizontalAlignment; // 0x194(0x01)
	enum class EVerticalAlignment ContentVerticalAlignment; // 0x195(0x01)
	char pad_196[0x12]; // 0x196(0x12)

	void SwitchWidgetsByIndex(int32_t Index1, int32_t Index2); // Function UMG.VerticalBox.SwitchWidgetsByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WrapBox
// Size: 0x1a0 (Inherited: 0x180)
class UWrapBox : public UPanelWidget {
public:

	struct FVector2D InnerSlotPadding; // 0x180(0x08)
	float WrapWidth; // 0x188(0x04)
	bool bExplicitWrapWidth; // 0x18c(0x01)
	char pad_18D[0x13]; // 0x18d(0x13)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.TextBlock
// Size: 0x3a8 (Inherited: 0x1e8)
class UTextBlock : public UTextLayoutWidget {
public:

	struct FText Text; // 0x1e8(0x18)
	/*struct FDelegate*/char TextDelegate[0x10]; // 0x200(0x10)
	bool bCustomizeStyle; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	struct FName TableRowID; // 0x214(0x08)
	struct FName FontStyleID; // 0x21c(0x08)
	char pad_224[0x4]; // 0x224(0x04)
	struct FSlateColor ColorAndOpacity; // 0x228(0x28)
	/*struct FDelegate*/char ColorAndOpacityDelegate[0x10]; // 0x250(0x10)
	struct FSlateFontInfo Font; // 0x260(0x58)
	int32_t LetterSpacing; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FSlateBrush StrikeBrush; // 0x2c0(0x90)
	struct FVector2D ShadowOffset; // 0x350(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x358(0x10)
	/*struct FDelegate*/char ShadowColorAndOpacityDelegate[0x10]; // 0x368(0x10)
	float MinDesiredWidth; // 0x378(0x04)
	enum class EDynamicAdaptType DynamicAdaptTextType; // 0x37c(0x01)
	bool bPreviewInDesign; // 0x37d(0x01)
	char pad_37E[0x2]; // 0x37e(0x02)
	struct FVector2D MaxSize; // 0x380(0x08)
	bool bWrapWithInvalidationPanel; // 0x388(0x01)
	bool bAutoWrapText; // 0x389(0x01)
	bool bSimpleTextMode; // 0x38a(0x01)
	enum class ETextOverflowPolicy TextOverflowAutoEllipsisType; // 0x38b(0x01)
	enum class ETextUpperPolicy TextUpperPolicy; // 0x38c(0x01)
	enum class ECustomTextFlowPolicy CustomTextFlowPolicy; // 0x38d(0x01)
	char pad_38E[0x1a]; // 0x38e(0x1a)

	void SetTextUpperPolicy(enum class ETextUpperPolicy InTextUpperPolicy); // Function UMG.TextBlock.SetTextUpperPolicy // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.RichTextBlock
// Size: 0x798 (Inherited: 0x1e8)
class URichTextBlock : public UTextLayoutWidget {
public:

	struct FText Text; // 0x1e8(0x18)
	struct UDataTable* TextStyleSet; // 0x200(0x08)
	struct TArray<struct UClass*> DecoratorClasses; // 0x208(0x10)
	bool bOverrideDefaultStyle; // 0x218(0x01)
	char pad_219[0x3]; // 0x219(0x03)
	float RichTextScale; // 0x21c(0x04)
	bool bCustomizeStyle; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	struct FName TableRowID; // 0x224(0x08)
	struct FName FontStyleID; // 0x22c(0x08)
	int32_t LetterSpacing; // 0x234(0x04)
	enum class ETextUpperPolicy TextUpperPolicy; // 0x238(0x01)
	enum class ECustomTextFlowPolicy CustomTextFlowPolicy; // 0x239(0x01)
	enum class ETextOverflowPolicy TextOverflowAutoEllipsisType; // 0x23a(0x01)
	char pad_23B[0x5]; // 0x23b(0x05)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x240(0x290)
	float MinDesiredWidth; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct FTextBlockStyle DefaultTextStyle; // 0x4d8(0x290)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x768(0x10)
	char pad_778[0x20]; // 0x778(0x20)

	void SetTextUpperPolicy(enum class ETextUpperPolicy InTextUpperPolicy); // Function UMG.RichTextBlock.SetTextUpperPolicy // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MultiLineEditableText
// Size: 0x558 (Inherited: 0x1e8)
class UMultiLineEditableText : public UTextLayoutWidget {
public:

	struct FText Text; // 0x1e8(0x18)
	struct FText HintText; // 0x200(0x18)
	/*struct FDelegate*/char HintTextDelegate[0x10]; // 0x218(0x10)
	struct FTextBlockStyle WidgetStyle; // 0x228(0x290)
	bool bIsReadOnly; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct FSlateFontInfo Font; // 0x4c0(0x58)
	bool SelectAllTextWhenFocused; // 0x518(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x519(0x01)
	bool RevertTextOnEscape; // 0x51a(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x51b(0x01)
	bool AllowContextMenu; // 0x51c(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x51d(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x51e(0x01)
	char pad_51F[0x1]; // 0x51f(0x01)
	/*struct FMulticastInlineDelegate*/char OnTextChanged[0x10]; // 0x520(0x10)
	/*struct FMulticastInlineDelegate*/char OnTextCommitted[0x10]; // 0x530(0x10)
	enum class ECustomTextFlowPolicy CustomTextFlowPolicy; // 0x540(0x01)
	char pad_541[0x17]; // 0x541(0x17)

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xde8 (Inherited: 0x1e8)
class UMultiLineEditableTextBox : public UTextLayoutWidget {
public:

	struct FText Text; // 0x1e8(0x18)
	struct FText HintText; // 0x200(0x18)
	/*struct FDelegate*/char HintTextDelegate[0x10]; // 0x218(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x228(0x860)
	struct FTextBlockStyle TextStyle; // 0xa88(0x290)
	bool bIsReadOnly; // 0xd18(0x01)
	bool AllowContextMenu; // 0xd19(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xd1a(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xd1b(0x01)
	char pad_D1C[0x4]; // 0xd1c(0x04)
	struct USlateWidgetStyleAsset* Style; // 0xd20(0x08)
	struct FSlateFontInfo Font; // 0xd28(0x58)
	struct FLinearColor ForegroundColor; // 0xd80(0x10)
	struct FLinearColor BackgroundColor; // 0xd90(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xda0(0x10)
	/*struct FMulticastInlineDelegate*/char OnTextChanged[0x10]; // 0xdb0(0x10)
	/*struct FMulticastInlineDelegate*/char OnTextCommitted[0x10]; // 0xdc0(0x10)
	enum class ECustomTextFlowPolicy CustomTextFlowPolicy; // 0xdd0(0x01)
	char pad_DD1[0x17]; // 0xdd1(0x17)

	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ListView
// Size: 0x3c8 (Inherited: 0x278)
class UListView : public UListViewBase {
public:

	char pad_278[0xc0]; // 0x278(0xc0)
	enum class EOrientation Orientation; // 0x338(0x01)
	enum class ESelectionMode SelectionMode; // 0x339(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x33a(0x01)
	bool bClearSelectionOnClick; // 0x33b(0x01)
	bool bIsFocusable; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	float EntrySpacing; // 0x340(0x04)
	bool bReturnFocusToSelection; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	struct TArray<struct UObject*> ListItems; // 0x348(0x10)
	char pad_358[0x10]; // 0x358(0x10)
	/*struct FMulticastInlineDelegate*/char BP_OnEntryInitialized[0x10]; // 0x368(0x10)
	/*struct FMulticastInlineDelegate*/char BP_OnItemClicked[0x10]; // 0x378(0x10)
	/*struct FMulticastInlineDelegate*/char BP_OnItemDoubleClicked[0x10]; // 0x388(0x10)
	/*struct FMulticastInlineDelegate*/char BP_OnItemIsHoveredChanged[0x10]; // 0x398(0x10)
	/*struct FMulticastInlineDelegate*/char BP_OnItemSelectionChanged[0x10]; // 0x3a8(0x10)
	/*struct FMulticastInlineDelegate*/char BP_OnItemScrolledIntoView[0x10]; // 0x3b8(0x10)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.DynamicEntryBox
// Size: 0x230 (Inherited: 0x228)
class UDynamicEntryBox : public UDynamicEntryBoxBase {
public:

	struct UClass* EntryWidgetClass; // 0x228(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Border
// Size: 0x2d8 (Inherited: 0x180)
class UBorder : public UContentWidget {
public:

	enum class EHorizontalAlignment HorizontalAlignment; // 0x180(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x181(0x01)
	char bShowEffectWhenDisabled : 1; // 0x182(0x01)
	char pad_182_1 : 7; // 0x182(0x01)
	char pad_183[0x1]; // 0x183(0x01)
	struct FLinearColor ContentColorAndOpacity; // 0x184(0x10)
	/*struct FDelegate*/char ContentColorAndOpacityDelegate[0x10]; // 0x194(0x10)
	struct FMargin Padding; // 0x1a4(0x10)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FSlateBrush Background; // 0x1b8(0x90)
	/*struct FDelegate*/char BackgroundDelegate[0x10]; // 0x248(0x10)
	struct FLinearColor BrushColor; // 0x258(0x10)
	/*struct FDelegate*/char BrushColorDelegate[0x10]; // 0x268(0x10)
	struct FVector2D DesiredSizeScale; // 0x278(0x08)
	bool bFlipForRightToLeftFlowDirection; // 0x280(0x01)
	char bIncreaseLayer; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	/*struct FDelegate*/char OnMouseButtonDownEvent[0x10]; // 0x284(0x10)
	/*struct FDelegate*/char OnMouseButtonUpEvent[0x10]; // 0x294(0x10)
	/*struct FDelegate*/char OnMouseMoveEvent[0x10]; // 0x2a4(0x10)
	/*struct FDelegate*/char OnMouseDoubleClickEvent[0x10]; // 0x2b4(0x10)
	char pad_2C4[0x14]; // 0x2c4(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.SizeBox
// Size: 0x1b8 (Inherited: 0x180)
class USizeBox : public UContentWidget {
public:

	char pad_180[0x10]; // 0x180(0x10)
	float WidthOverride; // 0x190(0x04)
	float HeightOverride; // 0x194(0x04)
	float MinDesiredWidth; // 0x198(0x04)
	float MinDesiredHeight; // 0x19c(0x04)
	float MaxDesiredWidth; // 0x1a0(0x04)
	float MaxDesiredHeight; // 0x1a4(0x04)
	float MinAspectRatio; // 0x1a8(0x04)
	float MaxAspectRatio; // 0x1ac(0x04)
	char bOverride_WidthOverride : 1; // 0x1b0(0x01)
	char bOverride_HeightOverride : 1; // 0x1b0(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x1b0(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x1b0(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x1b0(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x1b0(0x01)
	char bOverride_MinAspectRatio : 1; // 0x1b0(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Button
// Size: 0x4b0 (Inherited: 0x180)
class UButton : public UContentWidget {
public:

	struct USlateWidgetStyleAsset* Style; // 0x180(0x08)
	struct FButtonStyle WidgetStyle; // 0x188(0x298)
	struct FLinearColor ColorAndOpacity; // 0x420(0x10)
	struct FLinearColor BackgroundColor; // 0x430(0x10)
	struct FVector2D PressedScale; // 0x440(0x08)
	enum class EButtonClickMethod ClickMethod; // 0x448(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x449(0x01)
	enum class EButtonPressMethod PressMethod; // 0x44a(0x01)
	bool IsFocusable; // 0x44b(0x01)
	bool bIsPlayDefaultSound; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	/*struct FMulticastInlineDelegate*/char OnClicked[0x10]; // 0x450(0x10)
	/*struct FMulticastInlineDelegate*/char OnPressed[0x10]; // 0x460(0x10)
	/*struct FMulticastInlineDelegate*/char OnReleased[0x10]; // 0x470(0x10)
	/*struct FMulticastInlineDelegate*/char OnHovered[0x10]; // 0x480(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnhovered[0x10]; // 0x490(0x10)
	char pad_4A0[0x10]; // 0x4a0(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.BackgroundBlur
// Size: 0x2e8 (Inherited: 0x180)
class UBackgroundBlur : public UContentWidget {
public:

	struct FMargin Padding; // 0x180(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x190(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x191(0x01)
	bool bApplyAlphaToBlur; // 0x192(0x01)
	bool bApplyBlurShapeMask; // 0x193(0x01)
	char pad_194[0x4]; // 0x194(0x04)
	struct FSlateBrush BlurShapeMaskBrush; // 0x198(0x90)
	bool bFake3DBlur; // 0x228(0x01)
	enum class EFake3DBlurType Fake3DBlurType; // 0x229(0x01)
	char pad_22A[0x2]; // 0x22a(0x02)
	float BlurStrength; // 0x22c(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	int32_t BlurRadius; // 0x234(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x238(0x90)
	bool bForceBlurEveryFrame; // 0x2c8(0x01)
	char pad_2C9[0x17]; // 0x2c9(0x17)
	struct UTextureRenderTarget2D* RenderTarget; // 0x2e0(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.NamedSlot
// Size: 0x190 (Inherited: 0x180)
class UNamedSlot : public UContentWidget {
public:

	char pad_180[0x10]; // 0x180(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Checkbox
// Size: 0x818 (Inherited: 0x180)
class UCheckbox : public UContentWidget {
public:

	enum class ECheckBoxState CheckedState; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	/*struct FDelegate*/char CheckedStateDelegate[0x10]; // 0x184(0x10)
	char pad_194[0x4]; // 0x194(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x198(0x5c8)
	struct USlateWidgetStyleAsset* Style; // 0x760(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x768(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x770(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x778(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x780(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x788(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x790(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x798(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x7a0(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x7a8(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x7b0(0x01)
	char pad_7B1[0x3]; // 0x7b1(0x03)
	struct FMargin Padding; // 0x7b4(0x10)
	char pad_7C4[0x4]; // 0x7c4(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x7c8(0x28)
	bool IsFocusable; // 0x7f0(0x01)
	char pad_7F1[0x7]; // 0x7f1(0x07)
	/*struct FMulticastInlineDelegate*/char OnCheckStateChanged[0x10]; // 0x7f8(0x10)
	char pad_808[0x10]; // 0x808(0x10)

	void SetIsChecked(bool InIsChecked); // Function UMG.Checkbox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.InvalidationBox
// Size: 0x198 (Inherited: 0x180)
class UInvalidationBox : public UContentWidget {
public:

	bool bCanCache; // 0x180(0x01)
	bool CacheRelativeTransforms; // 0x181(0x01)
	char pad_182[0x16]; // 0x182(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.RetainerBox
// Size: 0x1b0 (Inherited: 0x180)
class URetainerBox : public UContentWidget {
public:

	bool bRetainRender; // 0x180(0x01)
	bool bPreviewInDesign; // 0x181(0x01)
	bool RenderOnInvalidation; // 0x182(0x01)
	bool RenderOnPhase; // 0x183(0x01)
	int32_t Phase; // 0x184(0x04)
	int32_t PhaseCount; // 0x188(0x04)
	char bDisableLocalTransform : 1; // 0x18c(0x01)
	char bDisableSlate3DRender : 1; // 0x18c(0x01)
	char pad_18C_2 : 6; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct UMaterialInterface* EffectMaterial; // 0x190(0x08)
	struct FName TextureParameter; // 0x198(0x08)
	char pad_1A0[0x10]; // 0x1a0(0x10)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.SafeZone
// Size: 0x198 (Inherited: 0x180)
class USafeZone : public UContentWidget {
public:

	bool PadLeft; // 0x180(0x01)
	bool PadRight; // 0x181(0x01)
	bool PadTop; // 0x182(0x01)
	bool PadBottom; // 0x183(0x01)
	char pad_184[0x14]; // 0x184(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.ScaleBox
// Size: 0x1a0 (Inherited: 0x180)
class UScaleBox : public UContentWidget {
public:

	enum class EStretch Stretch; // 0x180(0x01)
	enum class EStretchDirection StretchDirection; // 0x181(0x01)
	char pad_182[0x2]; // 0x182(0x02)
	float UserSpecifiedScale; // 0x184(0x04)
	bool IgnoreInheritedScale; // 0x188(0x01)
	char pad_189[0x17]; // 0x189(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.MenuAnchor
// Size: 0x1c0 (Inherited: 0x180)
class UMenuAnchor : public UContentWidget {
public:

	struct UClass* MenuClass; // 0x180(0x08)
	/*struct FDelegate*/char OnGetMenuContentEvent[0x10]; // 0x188(0x10)
	enum class EMenuPlacement Placement; // 0x198(0x01)
	bool bFitInWindow; // 0x199(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x19a(0x01)
	bool UseApplicationMenuStack; // 0x19b(0x01)
	char pad_19C[0x4]; // 0x19c(0x04)
	/*struct FMulticastInlineDelegate*/char OnMenuOpenChanged[0x10]; // 0x1a0(0x10)
	char pad_1B0[0x10]; // 0x1b0(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.Viewport
// Size: 0x1a8 (Inherited: 0x180)
class UViewport : public UContentWidget {
public:

	struct FLinearColor BackgroundColor; // 0x180(0x10)
	char pad_190[0x18]; // 0x190(0x18)

	struct AActor* Spawn(struct UClass* ActorClass); // Function UMG.Viewport.Spawn // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.WindowTitleBarArea
// Size: 0x1a0 (Inherited: 0x180)
class UWindowTitleBarArea : public UContentWidget {
public:

	bool bWindowButtonsEnabled; // 0x180(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x181(0x01)
	char pad_182[0x1e]; // 0x182(0x1e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.TileView
// Size: 0x3e8 (Inherited: 0x3c8)
class UTileView : public UListView {
public:

	float EntryHeight; // 0x3c8(0x04)
	float EntryWidth; // 0x3cc(0x04)
	enum class EListItemAlignment TileAlignment; // 0x3d0(0x01)
	bool bWrapHorizontalNavigation; // 0x3d1(0x01)
	char pad_3D2[0x16]; // 0x3d2(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMG.TreeView
// Size: 0x420 (Inherited: 0x3c8)
class UTreeView : public UListView {
public:

	char pad_3C8[0x10]; // 0x3c8(0x10)
	/*struct FDelegate*/char BP_OnGetItemChildren[0x10]; // 0x3d8(0x10)
	/*struct FMulticastInlineDelegate*/char BP_OnItemExpansionChanged[0x10]; // 0x3e8(0x10)
	char pad_3F8[0x28]; // 0x3f8(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
