
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPResource.EFXResourceCompPriority
enum class EFXResourceCompPriority : int {
	EPriority_Low = 0,
	EPriority_Mid = 1,
	EPriority_High = 2,
	EPriority_Max = 3
};

// Enum GPResource.ECommercializationAnimationSlot
enum class ECommercializationAnimationSlot : int {
	LeftArm = 0,
	LeftArmBeforeAO = 1,
	UpperBody = 2,
	UpperBodyWithIK = 3,
	ECommercializationAnimationSlot_MAX = 4
};

// Enum GPResource.ECommercializationItemUseOption
enum class ECommercializationItemUseOption : int {
	SpawnNewItem = 0,
	UseSkillMesh = 1,
	ECommercializationItemUseOption_MAX = 2
};

// Enum GPResource.ECommercializationAttachableMesh
enum class ECommercializationAttachableMesh : int {
	CharacterMesh = 0,
	SkillMesh = 1,
	ECommercializationAttachableMesh_MAX = 2
};

// Enum GPResource.ECommercializationResourceType
enum class ECommercializationResourceType : int {
	None = 0,
	Spray = 1,
	Voice = 2,
	OneHandedGesture = 3,
	TwoHandedGesture = 4,
	Emote = 5,
	ECommercializationResourceType_MAX = 6
};

// Enum GPResource.ECommercializationResourceRarity
enum class ECommercializationResourceRarity : int {
	None = 0,
	Common = 1,
	Rare = 2,
	Epic = 3,
	Legendary = 4,
	Prestige = 5,
	ECommercializationResourceRarity_MAX = 6
};

// Enum GPResource.EMediaDownloadType
enum class EMediaDownloadType : int {
	EMDT_DefaultPackage = 0,
	EMDT_PufferDownload = 1,
	EMDT_Web = 2,
	EMDT_MAX = 3
};

// Enum GPResource.EUIAudioPreloadState
enum class EUIAudioPreloadState : int {
	EUAPS_Default = 0,
	EUAPS_SOLLobby = 1,
	EUAPS_MPLobby = 2,
	EUAPS_MP = 3,
	EUAPS_SOL = 4,
	EUAPS_Raid = 5,
	EUAPS_MAX = 6
};

// Enum GPResource.EFXAudioStopType
enum class EFXAudioStopType : int {
	None = 0,
	FXDeactivate = 1,
	FXRecycleToPool = 2,
	Normal = 3,
	Never = 4,
	EFXAudioStopType_MAX = 5
};

// Enum GPResource.EResourceFXType
enum class EResourceFXType : int {
	OTHER = 0,
	MUZZLEFLASH = 1,
	EXPLODE = 2,
	IMPACT = 3,
	TRIAL = 4,
	SKILL = 5,
	MUZZLETRAIL = 6,
	SHELLDROP = 7,
	VEHICLE = 8,
	DESTRUCTIBLE = 9,
	GAMEMODE = 10,
	WEAPONPARTS = 11,
	IMPORTANTTRAIL = 12,
	EResourceFXType_MAX = 13
};

// ScriptStruct GPResource.ResourceCommercializationItem
// Size: 0x100 (Inherited: 0x00)
struct FResourceCommercializationItem {
public:

	enum class ECommercializationItemUseOption ItemUseOption; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char ItemFppMesh[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char ItemTppMesh[0x28]; // 0x30(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char ItemFppAnim[0x28]; // 0x58(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char ItemTppAnim[0x28]; // 0x80(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char ItemTppProneAnim[0x28]; // 0xa8(0x28)
	enum class ECommercializationAttachableMesh MeshToAttach; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FName SocketName; // 0xd4(0x08)
	struct FName SocketNameTpp; // 0xdc(0x08)
	float FPPVisibleTime; // 0xe4(0x04)
	float FPPHiddenTime; // 0xe8(0x04)
	float TPPVisibleTime; // 0xec(0x04)
	float TPPHiddenTime; // 0xf0(0x04)
	float TPPProneVisibleTime; // 0xf4(0x04)
	float TPPProneHiddenTime; // 0xf8(0x04)
	float LifeSpan; // 0xfc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.LoclizeCultureRow
// Size: 0x40 (Inherited: 0x10)
struct FLoclizeCultureRow : public FDescRowBase {
public:

	struct FName CultureSign; // 0x10(0x08)
	struct FName CultureDisplayName; // 0x18(0x08)
	struct FName CultureWwise; // 0x20(0x08)
	struct FText CultureWwiseDisplayName; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.MediaResRow
// Size: 0xd8 (Inherited: 0x70)
struct FMediaResRow : public FAssetPakerPakPolicyRow {
public:

	struct FString Desc; // 0x70(0x10)
	bool bPlayOnLoad; // 0x80(0x01)
	bool bPlayNativeSound; // 0x81(0x01)
	bool bHasAudioEvent; // 0x82(0x01)
	bool bLoop; // 0x83(0x01)
	bool bOnlySkipPlayStop; // 0x84(0x01)
	bool bIsMobileOnly; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	struct TArray<struct FMediaResStruct> MediaResList; // 0x88(0x10)
	bool bPlayFullScreed; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FText MediaTitle; // 0xa0(0x18)
	struct FText MediaDesc; // 0xb8(0x18)
	enum class EMediaDownloadType MediaDownloadType; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.MediaResStruct
// Size: 0x80 (Inherited: 0x00)
struct FMediaResStruct {
public:

	struct FString MediaUrl; // 0x00(0x10)
	struct FString MediaUrl_HD; // 0x10(0x10)
	/*struct TSoftObjectPtr<UBinkMediaSrt>*/char SubtitleAsset[0x28]; // 0x20(0x28)
	/*struct TSoftObjectPtr<UTexture2D>*/char MediaTexRes[0x28]; // 0x48(0x28)
	struct FName MediaTexUrl; // 0x70(0x08)
	struct FName AudioAssetKey; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.MusicAudioRow
// Size: 0xd8 (Inherited: 0x70)
struct FMusicAudioRow : public FAssetPakerPakPolicyRow {
public:

	struct FString Desc; // 0x70(0x10)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioPlaySP[0x28]; // 0x80(0x28)
	bool bIsSkipIsPlaying; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioDependencySP[0x28]; // 0xb0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.ResourceUIAudioRow
// Size: 0xe0 (Inherited: 0x70)
struct FResourceUIAudioRow : public FAssetPakerPakPolicyRow {
public:

	struct FName ResourceId; // 0x70(0x08)
	struct FString Desc; // 0x78(0x10)
	bool bNeedExplicitStop; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	uint32_t AudioPreloadState; // 0x8c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioPlaySP[0x28]; // 0x90(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioStopSP[0x28]; // 0xb8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.FXMaterialFloatParam
// Size: 0x0c (Inherited: 0x00)
struct FFXMaterialFloatParam {
public:

	int32_t MaterialIndex; // 0x00(0x04)
	struct FName ParamName; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.FXMaterialCurves
// Size: 0xa0 (Inherited: 0x00)
struct FFXMaterialCurves {
public:

	/*struct TMap<struct FName, struct TSoftObjectPtr<UCurveLinearColor>>*/char MaterialCurveLinearColor[0x50]; // 0x00(0x50)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UCurveFloat>>*/char MaterialCurveFloat[0x50]; // 0x50(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.ResourceBaseRow
// Size: 0x10 (Inherited: 0x10)
struct FResourceBaseRow : public FDescRowBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.AICharacterAnimationAssetRow
// Size: 0x28 (Inherited: 0x10)
struct FAICharacterAnimationAssetRow : public FResourceBaseRow {
public:

	struct FName CharacterID; // 0x10(0x08)
	struct TArray<struct UDataTable*> AnimAssetTables; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.ResourceCommercializationRow
// Size: 0x150 (Inherited: 0x10)
struct FResourceCommercializationRow : public FResourceBaseRow {
public:

	struct FName ResourceId; // 0x10(0x08)
	enum class ECommercializationResourceRarity Rarity; // 0x18(0x01)
	enum class ECommercializationResourceType Type; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FText Name; // 0x20(0x18)
	struct FSoftObjectPath Image; // 0x38(0x18)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char FPPDef[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char TPPDef[0x28]; // 0x78(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char TPPProneDef[0x28]; // 0xa0(0x28)
	enum class ECommercializationAnimationSlot OneHandFppSlot; // 0xc8(0x01)
	enum class ECommercializationAnimationSlot OneHandTppSlot; // 0xc9(0x01)
	enum class ECommercializationAnimationSlot TwoHandFppSlot; // 0xca(0x01)
	enum class ECommercializationAnimationSlot TwoHandTppSlot; // 0xcb(0x01)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FString AudioTypeString; // 0xd0(0x10)
	/*struct TSoftObjectPtr<UTexture>*/char TextureHD[0x28]; // 0xe0(0x28)
	/*struct TSoftObjectPtr<UTexture>*/char TextureMobile[0x28]; // 0x108(0x28)
	bool bIsDynamic; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float SequenceNumber; // 0x134(0x04)
	float AnimationSpeed; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<struct FResourceCommercializationItem> Items; // 0x140(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.ResourceLightRow
// Size: 0x60 (Inherited: 0x10)
struct FResourceLightRow : public FResourceBaseRow {
public:

	struct FName ResourceId; // 0x10(0x08)
	float LightRadius; // 0x18(0x04)
	float LightDuration; // 0x1c(0x04)
	struct FVector LightColor; // 0x20(0x0c)
	float LightDistanceToWall; // 0x2c(0x04)
	float Intensity; // 0x30(0x04)
	struct FColor Color; // 0x34(0x04)
	struct FSoftObjectPath IESTexturePath; // 0x38(0x18)
	float ShadowRadiusScale; // 0x50(0x04)
	float AttenuationRadius; // 0x54(0x04)
	float SpotlightInnerAngle; // 0x58(0x04)
	float SpotlightOuterAngle; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.ResourceDecalRow
// Size: 0xe8 (Inherited: 0x10)
struct FResourceDecalRow : public FResourceBaseRow {
public:

	struct FName ResourceId; // 0x10(0x08)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char MaterialSP[0x28]; // 0x18(0x28)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char DeferredMaterialSP[0x28]; // 0x40(0x28)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char DeferredMobileMaterialSP[0x28]; // 0x68(0x28)
	bool bUseDeferredMaterialOnMobile; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector Location; // 0x94(0x0c)
	struct FRotator Rotator; // 0xa0(0x0c)
	struct FVector ScaleSize; // 0xac(0x0c)
	struct FVector DeferredScaleSize; // 0xb8(0x0c)
	float Duration; // 0xc4(0x04)
	char bEnableFadeOut : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float FadeOutDuration; // 0xcc(0x04)
	struct FName FadeOutMaterialParamName; // 0xd0(0x08)
	char bRandomRotate : 1; // 0xd8(0x01)
	char bRandomScale : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FVector2D RandomScaleMinMax; // 0xdc(0x08)
	char bEnableDetect : 1; // 0xe4(0x01)
	char bDestroyOwnerAfterFade : 1; // 0xe4(0x01)
	char pad_E4_2 : 6; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.ResourceAudioRow
// Size: 0x198 (Inherited: 0x10)
struct FResourceAudioRow : public FResourceBaseRow {
public:

	struct FName ResourceId; // 0x10(0x08)
	enum class EGPAudioBlueprintType SoundType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString Desc; // 0x20(0x10)
	bool bNeedExplicitStop; // 0x30(0x01)
	bool bNeedFollowActor; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioPlaySP[0x28]; // 0x38(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char CloseAudioEvent[0x28]; // 0x60(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char MedAudioEvent[0x28]; // 0x88(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char FarAudioEvent[0x28]; // 0xb0(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char CloseAudioEvent_InDoor[0x28]; // 0xd8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char MedAudioEvent_InDoor[0x28]; // 0x100(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char FarAudioEvent_InDoor[0x28]; // 0x128(0x28)
	float CloseAudioEventDistance; // 0x150(0x04)
	float MedAudioEventDistance; // 0x154(0x04)
	float FarAudioEventDistance; // 0x158(0x04)
	float DistanceScaleFactor_SOL; // 0x15c(0x04)
	bool bNeedSimplifiedTransDiff; // 0x160(0x01)
	bool bNeedCompleteTransDiff; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	float DistanceScaleFactor_Breakthrough_3P; // 0x164(0x04)
	float DistanceScaleFactor_Breakthrough_1P; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioStopSP[0x28]; // 0x170(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.ResourceFXRow
// Size: 0x1f8 (Inherited: 0x10)
struct FResourceFXRow : public FResourceBaseRow {
public:

	struct FName ResourceId; // 0x10(0x08)
	struct FString Desc; // 0x18(0x10)
	float CommonSpawnDistance; // 0x28(0x04)
	int32_t CommonExistNum; // 0x2c(0x04)
	/*struct TSoftObjectPtr<UParticleSystem>*/char FxSP[0x28]; // 0x30(0x28)
	/*struct TSoftObjectPtr<UParticleSystem>*/char FxSP_Low[0x28]; // 0x58(0x28)
	/*struct TSoftObjectPtr<UParticleSystem>*/char FxSP_High[0x28]; // 0x80(0x28)
	struct FVector EffectScale; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UCurveFloat>>*/char DistScaleCurves[0x50]; // 0xb8(0x50)
	struct TMap<char, struct FFXMaterialCurves> MaterialCurves; // 0x108(0x50)
	float PlayLifeTime; // 0x158(0x04)
	float FadeInTime; // 0x15c(0x04)
	struct FName FadeInAlphaParamName; // 0x160(0x08)
	float FadeOutTime; // 0x168(0x04)
	struct FName FadeOutAlphaParamName; // 0x16c(0x08)
	char pad_174[0x4]; // 0x174(0x04)
	struct TArray<struct FFXMaterialFloatParam> FadeOutAlphaMaterialParams; // 0x178(0x10)
	float DelayPlayTime; // 0x188(0x04)
	struct FRotator RotationRate; // 0x18c(0x0c)
	struct FVector RotationPivotTranslation; // 0x198(0x0c)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TArray<struct FParticleSysParam> ParticleParams; // 0x1a8(0x10)
	struct FName AudioResourceId; // 0x1b8(0x08)
	bool bSOLAudioAlone; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	struct FName AudioResourceId_SOL; // 0x1c4(0x08)
	enum class EFXAudioStopType NoneLoopAudioStopType; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
	float ParticleBenchmark; // 0x1d0(0x04)
	float ParticleBenchmarkLow; // 0x1d4(0x04)
	float ParticleBenchmarkHigh; // 0x1d8(0x04)
	float GPUConsume; // 0x1dc(0x04)
	float GameAttention; // 0x1e0(0x04)
	uint32_t MaxInstanceNum; // 0x1e4(0x04)
	bool bLimitByMaxInstanceNum; // 0x1e8(0x01)
	enum class EResourceFXType FXType; // 0x1e9(0x01)
	bool bLimitByMaxFXTypeNum; // 0x1ea(0x01)
	bool bUpdateSignificance; // 0x1eb(0x01)
	float GameImportance; // 0x1ec(0x04)
	float DistanceForTranslucencySort; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPResource.ResourceAnimRow
// Size: 0x50 (Inherited: 0x10)
struct FResourceAnimRow : public FResourceBaseRow {
public:

	struct FName ResourceId; // 0x10(0x08)
	struct FString Desc; // 0x18(0x10)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSP[0x28]; // 0x28(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
