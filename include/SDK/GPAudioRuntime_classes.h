
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPAudioRuntime.EmissiveCubeComponent
// Size: 0x570 (Inherited: 0x560)
class UEmissiveCubeComponent : public UPrimitiveComponent {
public:

	struct UModel* Brush; // 0x560(0x08)
	struct FColor BoundaryColor; // 0x568(0x04)
	bool bLighting; // 0x56c(0x01)
	bool bLightingWhenContainsCamera; // 0x56d(0x01)
	char pad_56E[0x2]; // 0x56e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAudioColliderVolume
// Size: 0x3e8 (Inherited: 0x3b0)
class AGameAudioColliderVolume : public AVolume {
public:

	/*struct TSoftObjectPtr<UGPAudioColliderDataAsset>*/char ColliderDataSoftObj[0x28]; // 0x3b0(0x28)
	char pad_3D8[0x10]; // 0x3d8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.AudioGraphFunctions
// Size: 0x30 (Inherited: 0x30)
class UAudioGraphFunctions : public UBlueprintFunctionLibrary {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAudioDetailVolumeForEditor
// Size: 0x490 (Inherited: 0x3b0)
class AGameAudioDetailVolumeForEditor : public AVolume {
public:

	struct FGameAudioVolumeBounding VolumeBounding; // 0x3b0(0x90)
	char pad_440[0x50]; // 0x440(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAudioPointEmitter
// Size: 0x140 (Inherited: 0x100)
class UGameAudioPointEmitter : public UActorComponent {
public:

	bool bNeedObstructionOcclusion; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UGPAudioEventAsset* LoopEvent; // 0x108(0x08)
	struct UGameAkComponent* AkEmitter; // 0x110(0x08)
	bool bForceUseMaxDistance; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float MaxDistance; // 0x11c(0x04)
	float DistanceToListener; // 0x120(0x04)
	float StopTransitionMS; // 0x124(0x04)
	char pad_128[0x18]; // 0x128(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAudioPolygonEmitter
// Size: 0x168 (Inherited: 0x100)
class UGameAudioPolygonEmitter : public UActorComponent {
public:

	bool bNeedObstructionOcclusion; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UGPAudioEventAsset* LoopEvent; // 0x108(0x08)
	struct UGameAkComponent* AkEmitter; // 0x110(0x08)
	float Distance3D; // 0x118(0x04)
	float DistanceToListener; // 0x11c(0x04)
	bool bStopOutOfRange; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	struct FVector CurrentClosestPoint; // 0x124(0x0c)
	struct FInterpCurveVector SplineCurve; // 0x130(0x18)
	enum class EGPAudioEnvEmitterState EmitterState; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float StopTransitionMS; // 0x14c(0x04)
	char pad_150[0x18]; // 0x150(0x18)

	bool Play3DAudio(struct UGPAudioEventAsset* Event); // Function GPAudioRuntime.GameAudioPolygonEmitter.Play3DAudio // (Native|Public|BlueprintCallable) // @ game+0x143ed20
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAudioRiverEmitter
// Size: 0x170 (Inherited: 0x100)
class UGameAudioRiverEmitter : public UActorComponent {
public:

	bool bNeedObstructionOcclusion; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UGPAudioEventAsset* LoopEvent; // 0x108(0x08)
	struct FInterpCurveVector SplineCurve; // 0x110(0x18)
	struct UGameAkComponent* AkEmitter; // 0x128(0x08)
	float Distance2D; // 0x130(0x04)
	float Distance3D; // 0x134(0x04)
	float DistanceToListener; // 0x138(0x04)
	bool bStopOutOfRange; // 0x13c(0x01)
	enum class EGPAudioEnvEmitterState EmitterState; // 0x13d(0x01)
	char pad_13E[0x2]; // 0x13e(0x02)
	struct FVector CurrentClosestPoint; // 0x140(0x0c)
	float StopTransitionMS; // 0x14c(0x04)
	char pad_150[0x20]; // 0x150(0x20)

	bool Play3DAudio(struct UGPAudioEventAsset* Event); // Function GPAudioRuntime.GameAudioRiverEmitter.Play3DAudio // (Native|Public|BlueprintCallable) // @ game+0x143ed20
	void CopySplineCurvePoints(struct USplineComponent* CopyFrom); // Function GPAudioRuntime.GameAudioRiverEmitter.CopySplineCurvePoints // (Final|Native|Public|BlueprintCallable) // @ game+0x143eb50
	void CopySplineCurve(struct USplineComponent* CopyTo, struct USplineComponent* CopyFrom); // Function GPAudioRuntime.GameAudioRiverEmitter.CopySplineCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x143ea90
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameSpatialAudioManager
// Size: 0x110 (Inherited: 0x30)
class UGameSpatialAudioManager : public UObject {
public:

	char pad_30[0x68]; // 0x30(0x68)
	struct TArray<struct AGameAudioVolume*> DiffractionVolumes; // 0x98(0x10)
	struct TArray<struct AGameAudioVolume*> GameAreaVolumes; // 0xa8(0x10)
	struct AGameSpatialAudioVolume* OutdoorVolume; // 0xb8(0x08)
	char pad_C0[0x50]; // 0xc0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameSpatialAudioVolumeRoot
// Size: 0x378 (Inherited: 0x378)
class AGameSpatialAudioVolumeRoot : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPALateReverbComponent
// Size: 0x290 (Inherited: 0x280)
class UGPALateReverbComponent : public UAkLateReverbComponent {
public:

	enum class EAudioCharacterGroup SendOnCroup; // 0x280(0x01)
	char pad_281[0xf]; // 0x281(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAMultiEmitterComponent
// Size: 0x170 (Inherited: 0x100)
class UGPAMultiEmitterComponent : public UActorComponent {
public:

	bool bNeedObstructionOcclusion; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TArray<struct UTravelerGameAk*> Emitters; // 0x108(0x10)
	struct TMap<struct FName, struct UTravelerGameAk*> EmitterMap; // 0x118(0x50)
	char pad_168[0x8]; // 0x168(0x08)

	void StopEmitterAudio(struct FGPAAttachEmitterInfo EmitterInfo); // Function GPAudioRuntime.GPAMultiEmitterComponent.StopEmitterAudio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1443110
	void StopAudioByIndex(int32_t Index, struct UGPAudioEventAsset* PlayEvent); // Function GPAudioRuntime.GPAMultiEmitterComponent.StopAudioByIndex // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1443050
	void StopAudioByActor(struct AActor* EmitterOwner); // Function GPAudioRuntime.GPAMultiEmitterComponent.StopAudioByActor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1442fd0
	void StopAllEmittersAudio(); // Function GPAudioRuntime.GPAMultiEmitterComponent.StopAllEmittersAudio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1442fb0
	void SetWorldLocationByIndex(struct FVector& Location, int32_t Index); // Function GPAudioRuntime.GPAMultiEmitterComponent.SetWorldLocationByIndex // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1442ed0
	struct FGPAudioFuturePlayingID PlayEmitterAudio(struct FGPAAttachEmitterInfo EmitterInfo); // Function GPAudioRuntime.GPAMultiEmitterComponent.PlayEmitterAudio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1442e00
	struct FGPAudioFuturePlayingID PlayAudioByIndex(struct UGPAudioEventAsset* PlayEvent, int32_t Index, enum class EGPAudioBlueprintType PlayType); // Function GPAudioRuntime.GPAMultiEmitterComponent.PlayAudioByIndex // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1442cf0
	struct FGPAudioFuturePlayingID PlayActorEmitterAudio(struct AActor* EmitterOwner, struct UGPAudioEventAsset* PlayEvent, enum class EGPAudioBlueprintType PlayType); // Function GPAudioRuntime.GPAMultiEmitterComponent.PlayActorEmitterAudio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1442be0
	void InitNultiAttachComEmitters(struct TArray<struct FGPAAttachEmitterInfo>& AttachEmitterInfos, bool bPlayEvent); // Function GPAudioRuntime.GPAMultiEmitterComponent.InitNultiAttachComEmitters // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1442610
	void InitEmittersByActors(struct TArray<struct AActor*>& AttachActors); // Function GPAudioRuntime.GPAMultiEmitterComponent.InitEmittersByActors // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1442540
	void InitEmitters(struct USkeletalMeshComponent* SkeletalMC, struct TArray<struct FName> AttachNodeNames); // Function GPAudioRuntime.GPAMultiEmitterComponent.InitEmitters // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x14423e0
	void CreateEmitters(int32_t EmitterNum); // Function GPAudioRuntime.GPAMultiEmitterComponent.CreateEmitters // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x14422e0
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAkComponentPool
// Size: 0x88 (Inherited: 0x30)
class UGameAkComponentPool : public UObject {
public:

	struct TMap<enum class EGameAkType, struct FGPAkCompPool> WorldGPAkCompPools; // 0x30(0x50)
	char pad_80[0x8]; // 0x80(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioAnimationNotifyPlayer
// Size: 0x168 (Inherited: 0x100)
class UGPAudioAnimationNotifyPlayer : public UActorComponent {
public:

	struct TMap<struct FName, struct UGPAudioEventAsset*> AnimationAudioMap; // 0x100(0x50)
	char pad_150[0x18]; // 0x150(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioBPInstanceProxy
// Size: 0x128 (Inherited: 0x100)
class UGPAudioBPInstanceProxy : public UActorComponent {
public:

	/*struct TSoftObjectPtr<UGPAudioRoomBakeDataAsset>*/char RoomBakeDataSoftObj[0x28]; // 0x100(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioColliderDataAsset
// Size: 0x70 (Inherited: 0x38)
class UGPAudioColliderDataAsset : public UDataAsset {
public:

	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x38(0x10)
	struct TArray<struct FOrientedBoxInfo> OrderedOrientedBoxes; // 0x48(0x10)
	struct TArray<struct FGPAudioColliderNodeInfo> ColliderNodeInfo; // 0x58(0x10)
	int32_t RootIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioDataAssetManager
// Size: 0x270 (Inherited: 0x38)
class UGPAudioDataAssetManager : public UDataAsset {
public:

	struct TMap<struct FName, struct UFoliageTypeSetDataAsset*> FoliageType2MeshSet; // 0x38(0x50)
	struct UFoliageOverlapAudioDataAsset* FoliageOverlapAudioConfig; // 0x88(0x08)
	struct TMap<struct FName, struct FGPAudioAnimNotifyFootStepTypeConfig> FootStepProxyConfigMap; // 0x90(0x50)
	struct UGPAudioEventLimitGroupAsset* AudioEventLimitGroup; // 0xe0(0x08)
	struct UGPLoopEndPairAsset* LoopEndPairs; // 0xe8(0x08)
	struct UPreloadAudioCfg* PreloadAudioCfg; // 0xf0(0x08)
	char pad_F8[0x60]; // 0xf8(0x60)
	struct UGPClippedActorFakeEventAsset* ClippedActorFakeEventConfig; // 0x158(0x08)
	struct TMap<struct FString, struct UGPAudioEventAsset*> ScatteredAudioMap; // 0x160(0x50)
	struct TMap<struct FString, struct FSoftObjectPath> ScatteredAudioPathMap; // 0x1b0(0x50)
	struct UGPAudioPresetConfigsDataAsset* AudioPresetConfigs; // 0x200(0x08)
	struct TArray<struct UGPAudioEventAsset*> FootstepAudioAssetCache; // 0x208(0x10)
	struct TArray<struct UGPAudioEventAsset*> VibrationAudioAssetCache; // 0x218(0x10)
	char pad_228[0x8]; // 0x228(0x08)
	struct UDataTable* AudioHDRConfigsTable; // 0x230(0x08)
	struct UDataTable* ScatteredAudioTable; // 0x238(0x08)
	struct UCurveFloat* DiffractionAngleFactorCurve; // 0x240(0x08)
	struct UCurveFloat* DiffractionDistanceFactorCurve; // 0x248(0x08)
	struct UCurveFloat* DiffractionPortalAttenFactorCurve; // 0x250(0x08)
	struct UCurveFloat* TransmissionDistanceSubtractionCurve; // 0x258(0x08)
	struct TArray<struct UGPAudioEventAsset*> LifeLongHoldEvents; // 0x260(0x10)

	void OnAsyncLoadSpatialAudioConfigsFinished(struct TArray<struct FSoftObjectPath> ObjectPaths); // Function GPAudioRuntime.GPAudioDataAssetManager.OnAsyncLoadSpatialAudioConfigsFinished // (Final|Native|Public) // @ game+0x1442a50
	void OnAsyncLoadScatteredAudioEventsFinished(struct TArray<struct FSoftObjectPath> ObjectPaths); // Function GPAudioRuntime.GPAudioDataAssetManager.OnAsyncLoadScatteredAudioEventsFinished // (Final|Native|Public) // @ game+0x14428c0
	void OnAsyncLoadAssetsWhenStartModuleFinished(struct TArray<struct FSoftObjectPath> ObjectPaths); // Function GPAudioRuntime.GPAudioDataAssetManager.OnAsyncLoadAssetsWhenStartModuleFinished // (Final|Native|Public) // @ game+0x1442730
	struct UCurveFloat* GetTransmissionDistanceSubtractionCurve(); // Function GPAudioRuntime.GPAudioDataAssetManager.GetTransmissionDistanceSubtractionCurve // (Final|Native|Public) // @ game+0x14423c0
	struct UCurveFloat* GetDiffractionPortalAttenFactorCurve(); // Function GPAudioRuntime.GPAudioDataAssetManager.GetDiffractionPortalAttenFactorCurve // (Final|Native|Public) // @ game+0x14423a0
	struct UCurveFloat* GetDiffractionDistanceFactorCurve(); // Function GPAudioRuntime.GPAudioDataAssetManager.GetDiffractionDistanceFactorCurve // (Final|Native|Public) // @ game+0x1442380
	struct UCurveFloat* GetDiffractionAngleFactorCurve(); // Function GPAudioRuntime.GPAudioDataAssetManager.GetDiffractionAngleFactorCurve // (Final|Native|Public) // @ game+0x1442360
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioDebugSettings
// Size: 0x78 (Inherited: 0x30)
class UGPAudioDebugSettings : public UObject {
public:

	bool bDisableAkAssetsScanning; // 0x30(0x01)
	bool bEnableAudio; // 0x31(0x01)
	bool bStopAkTickerWhenDisableAudio; // 0x32(0x01)
	bool bDebugDrawDynamicReverb; // 0x33(0x01)
	bool bDebugDrawReverbMetric; // 0x34(0x01)
	bool bDebugDrawReverbMetricScreen; // 0x35(0x01)
	bool bDebugDrawEarlyReflect; // 0x36(0x01)
	bool bDebugDrawQuadTraceLine; // 0x37(0x01)
	bool bDebugDrawPreQuadTraceLine; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float fDebugDrawStayTime; // 0x3c(0x04)
	float fMinTimeOfPlanDebugDraw; // 0x40(0x04)
	bool bDrawRPAsSoilPlan; // 0x44(0x01)
	enum class EGPAudioDebugPlayFlag DebugPlayFlag; // 0x45(0x01)
	bool bEnableWeedOutLog; // 0x46(0x01)
	bool bEnableEventResLog; // 0x47(0x01)
	bool bDrawRPClosetPointAndHitPoint; // 0x48(0x01)
	bool bDrawRPNormal; // 0x49(0x01)
	bool bDrawWeedOutPlanNormal; // 0x4a(0x01)
	bool bDrawWeedOutTraceLine; // 0x4b(0x01)
	bool bDrawWeetOutPlan; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t DrawWeedOutPlanNum; // 0x50(0x04)
	int32_t DrawPlanOffsetOfNormal; // 0x54(0x04)
	struct FColor RPPlanColor; // 0x58(0x04)
	struct FColor WeedOutPlanColor; // 0x5c(0x04)
	struct FColor GuardWeedOutPlanColor; // 0x60(0x04)
	struct FColor HitPointColor; // 0x64(0x04)
	struct FColor ClosetPointColor; // 0x68(0x04)
	struct FColor WeetOutLineColor; // 0x6c(0x04)
	bool bTickUpdateOpenRPConfig; // 0x70(0x01)
	bool bDrawBulletSoundActor; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioEventCache
// Size: 0x1b8 (Inherited: 0x30)
class UGPAudioEventCache : public UObject {
public:

	struct TMap<uint32_t, struct FGPDecodedCacheEvent> PriorityCacheEvents; // 0x30(0x50)
	struct TMap<uint32_t, struct UAkAudioEvent*> LatenCacheEvents; // 0x80(0x50)
	struct TMap<uint32_t, struct UAkAudioEvent*> PreserveEventsCache; // 0xd0(0x50)
	char pad_120[0x98]; // 0x120(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioEventLimitAsset
// Size: 0x48 (Inherited: 0x38)
class UGPAudioEventLimitAsset : public UDataAsset {
public:

	struct FGPAudioEventModeLimit LimitConfig; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioEventPriorityAsset
// Size: 0x50 (Inherited: 0x38)
class UGPAudioEventPriorityAsset : public UDataAsset {
public:

	int32_t TotalLimitNum; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UGPAudioPriorityMethod*> PriorityMethods; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioEventLimitGroupAsset
// Size: 0xd8 (Inherited: 0x38)
class UGPAudioEventLimitGroupAsset : public UDataAsset {
public:

	/*struct TMap<struct FString, struct TSoftObjectPtr<UDataTable>>*/char AllModeLimitTable[0x50]; // 0x38(0x50)
	/*struct TMap<struct FString, struct TSoftObjectPtr<UGPAudioEventLimitAsset>>*/char AllModeLimits[0x50]; // 0x88(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioGameplaySettings
// Size: 0x4e0 (Inherited: 0x30)
class UGPAudioGameplaySettings : public UObject {
public:

	struct TArray<struct FSoftObjectPath> LifeLongHoldEvents; // 0x30(0x10)
	struct TArray<struct FSoftObjectPath> CharacterVoiceTypePresetsTables; // 0x40(0x10)
	struct TArray<struct FGPGameplayAudioFeatures> GameplayAudioFeatures; // 0x50(0x10)
	struct FAudio3PFireLoopPriorityManagerConfig Audio3PFireLoopPriorityManagerConfig_High; // 0x60(0xc0)
	struct FAudio3PFireLoopPriorityManagerConfig Audio3PFireLoopPriorityManagerConfig_Mid; // 0x120(0xc0)
	struct FAudio3PFireLoopPriorityManagerConfig Audio3PFireLoopPriorityManagerConfig_Low; // 0x1e0(0xc0)
	enum class EPhysicalSurface WetFloorSurfaceType; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TArray<enum class EPhysicalSurface> WetFloorExcludedSurfaceTypeArray; // 0x2a8(0x10)
	float WetnessThreshold; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct TArray<struct FName> FootstepOverlapComponentTags; // 0x2c0(0x10)
	struct TMap<struct FString, struct FGPGameplayAudioHDRConfig> GameplayModeAudioHDRDataTablePath; // 0x2d0(0x50)
	struct TMap<enum class EGPAudioBlueprintType, struct FGPAudioTypeConfig> AudioTypeConfigMaps; // 0x320(0x50)
	float AttenuationScalarMax; // 0x370(0x04)
	float AttenuationScalarMin; // 0x374(0x04)
	/*struct TSet<struct FString>*/char AffectedVOTypeStringSet[0x50]; // 0x378(0x50)
	/*struct TSet<struct FString>*/char SoundVisualTypeStringSet[0x50]; // 0x3c8(0x50)
	struct TArray<float> DistanceArray_M; // 0x418(0x10)
	struct TArray<float> CheckIntervalArray; // 0x428(0x10)
	struct TArray<float> CheckDistanceArray_M; // 0x438(0x10)
	struct FSoftObjectPath ScatteredAudioPath; // 0x448(0x18)
	struct FSoftObjectPath ExpertVOPath; // 0x460(0x18)
	int32_t EnemyNumMaxValue; // 0x478(0x04)
	int32_t AllPlayerNumMaxValue; // 0x47c(0x04)
	float PlayerNumCheckDistance; // 0x480(0x04)
	float FireLoopNumCheckDistance; // 0x484(0x04)
	int32_t FireLoopNumMaxValue; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	/*struct TSet<uint32_t>*/char LoopEventClearListWhenObservered[0x50]; // 0x490(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.FoliageOverlapAudioDataAsset
// Size: 0x78 (Inherited: 0x38)
class UFoliageOverlapAudioDataAsset : public UDataAsset {
public:

	struct FOverlapAudioEventSet BushDefaultOverlapEvent; // 0x38(0x18)
	struct FOverlapAudioEventSet BushCrocodileOverlapEvent; // 0x50(0x18)
	struct TArray<struct FFoliageAudioInstanceConfig> FoliageInstanceConfigs; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.FoliageTypeSetDataAsset
// Size: 0x50 (Inherited: 0x38)
class UFoliageTypeSetDataAsset : public UDataAsset {
public:

	struct FName FoliageTypeName; // 0x38(0x08)
	/*struct TArray<struct TSoftObjectPtr<UStaticMesh>>*/char FoliageInstanceMeshs[0x10]; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioLODSettings
// Size: 0x50 (Inherited: 0x30)
class UGPAudioLODSettings : public UObject {
public:

	struct TArray<struct FGPALODFeatures> LODFeatures; // 0x30(0x10)
	struct TArray<struct FGPComponentSignificanceConfig> ComponentSignificanceConfigs; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioOverDisBroadcaster
// Size: 0x250 (Inherited: 0x240)
class UGPAudioOverDisBroadcaster : public USceneComponent {
public:

	int32_t CacheAudioEventNum; // 0x240(0x04)
	char pad_244[0xc]; // 0x244(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioProxyInterface
// Size: 0x30 (Inherited: 0x30)
class UGPAudioProxyInterface : public UInterface {
public:


	uint16_t GetCharacterStateParamsFromAudioProxy(struct ACHARACTER* InCharacter); // Function GPAudioRuntime.GPAudioProxyInterface.GetCharacterStateParamsFromAudioProxy // (Native|Public) // @ game+0x144bd20
	struct FVector GetCharacterLocationFromAudioProxy(struct ACHARACTER* InCharacter); // Function GPAudioRuntime.GPAudioProxyInterface.GetCharacterLocationFromAudioProxy // (Native|Public|HasDefaults) // @ game+0x144bc70
	bool GetCharacterAudioProxyInfo(struct ACHARACTER* InCharacter, struct FPVSAudioActorInfo& OutInfo); // Function GPAudioRuntime.GPAudioProxyInterface.GetCharacterAudioProxyInfo // (Native|Public|HasOutParms) // @ game+0x144bb80
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioRadio
// Size: 0x2f0 (Inherited: 0x240)
class UGPAudioRadio : public USceneComponent {
public:

	enum class ERadioCuttingType CuttingType; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	float BroadcastRange; // 0x244(0x04)
	int32_t LoopASTimeMS; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UGPAudioEventAsset* RadioNoise; // 0x250(0x08)
	bool bUseNoiseBetweenChannel; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float FMCollisionRange; // 0x25c(0x04)
	int32_t RadioNoiseDurationWhenTurn; // 0x260(0x04)
	char pad_264[0x6c]; // 0x264(0x6c)
	struct TArray<struct UGPAudioEventAsset*> AllRecordEvents; // 0x2d0(0x10)
	struct UGameAkComponent* GameAk; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)

	bool TurnUP(); // Function GPAudioRuntime.GPAudioRadio.TurnUP // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144c1b0
	bool TurnON(bool bResetFm); // Function GPAudioRuntime.GPAudioRadio.TurnON // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144c120
	void TurnOFF(); // Function GPAudioRuntime.GPAudioRadio.TurnOFF // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144c100
	float TurnFm(float Delta); // Function GPAudioRuntime.GPAudioRadio.TurnFm // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144c070
	bool TurnDown(); // Function GPAudioRuntime.GPAudioRadio.TurnDown // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144c040
	bool TurnChannel(struct FName InChannelID, bool bNeedNoise); // Function GPAudioRuntime.GPAudioRadio.TurnChannel // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144bf80
	void RadioStart(); // Function GPAudioRuntime.GPAudioRadio.RadioStart // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144bf40
	void InitRCConfigs(struct TArray<struct FGPAudioRadioChannelRow> ConfigRows); // Function GPAudioRuntime.GPAudioRadio.InitRCConfigs // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144bdf0
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioReverbSceneDataAsset
// Size: 0x48 (Inherited: 0x38)
class UGPAudioReverbSceneDataAsset : public UDataAsset {
public:

	struct TArray<struct FGPAudioReverbSceneConfig> ReverbSceneConfigs; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioReverbSettings
// Size: 0xb0 (Inherited: 0x30)
class UGPAudioReverbSettings : public UObject {
public:

	bool Enable; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TMap<enum class EGPAudioReverbType, struct FGPAudioReverbConfig> ReverbTypeConfig; // 0x38(0x50)
	bool bEnablePipeMaterial; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	/*struct TArray<struct TSoftObjectPtr<UPhysicalMaterial>>*/char PipeSurfaces[0x10]; // 0x90(0x10)
	struct FString CustomEarlyReflectionBusName; // 0xa0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioRoomBakeDataAsset
// Size: 0x240 (Inherited: 0x38)
class UGPAudioRoomBakeDataAsset : public UDataAsset {
public:

	enum class EGPAudioRoomBakeDataType DataType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString RoomBPName; // 0x40(0x10)
	struct FVector CellSize; // 0x50(0x0c)
	struct FVector BoxExtend; // 0x5c(0x0c)
	struct FVector BoxPosOffset; // 0x68(0x0c)
	char pad_74[0xc]; // 0x74(0x0c)
	struct FQuat BoxQuat; // 0x80(0x10)
	int32_t CelllIndexMax; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<int8_t> BakeDataArray; // 0x98(0x10)
	struct TArray<uint32_t> CellIndex2BakeDataArray; // 0xa8(0x10)
	/*struct TSet<int32_t>*/char CellIndex2BakeDataSet[0x50]; // 0xb8(0x50)
	struct TMap<int32_t, int8_t> CellIndex2BakeDataMap; // 0x108(0x50)
	struct TArray<uint16_t> AllCellIndexArr; // 0x158(0x10)
	struct TArray<struct FGPADoorWinZone> DoorWinZones; // 0x168(0x10)
	bool bBakeByBP; // 0x178(0x01)
	char pad_179[0xc7]; // 0x179(0xc7)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioServerNotifier
// Size: 0x68 (Inherited: 0x30)
class UGPAudioServerNotifier : public UObject {
public:

	struct FGPAudioServerNotifierSpeedInfo Notifiers[0x3]; // 0x30(0x30)
	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioSettings
// Size: 0x568 (Inherited: 0x30)
class UGPAudioSettings : public UObject {
public:

	bool EnableAutoGenGPAudioAssets; // 0x30(0x01)
	bool bUseLocalizedDuration; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	/*struct TSoftObjectPtr<UCurveFloat>*/char GPAudioLODTickIntervalCurve[0x28]; // 0x38(0x28)
	int32_t GPAudioLRUSize; // 0x60(0x04)
	float EventMaxCacheTime; // 0x64(0x04)
	bool bEnableOverNetCullDisBroadcast; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t UseCustomConfigNetCullDisSquared; // 0x6c(0x04)
	float RoomFloorHeigh; // 0x70(0x04)
	float RoomFloorHeightBidirectional; // 0x74(0x04)
	float RoomFloorRTPCLerpSpeed; // 0x78(0x04)
	float PreCutCheckSpeed; // 0x7c(0x04)
	struct TMap<struct FString, bool> GameplayModeAudioPriority; // 0x80(0x50)
	enum class EGPAudioActorEndPlayStopType EmitterEndPlayStopType; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float MakeNoiseRatio; // 0xd4(0x04)
	struct TMap<enum class EGPAudioBlueprintType, float> ConstTypeAttenuationScales; // 0xd8(0x50)
	bool EnableFootStepDataTableProxy; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct TMap<struct FName, struct FString> AnimationNotifyKeys; // 0x130(0x50)
	int32_t RoomBakeDataFramingLength; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<enum class EGPAudioTag> WeaponCompositeTags; // 0x188(0x10)
	/*struct TSoftObjectPtr<UPhysicalMaterialAudioDataAsset>*/char PhysicalMaterialFoostepMapAsset[0x28]; // 0x198(0x28)
	/*struct TSoftObjectPtr<UFoliageOverlapAudioDataAsset>*/char FoliageOverlapAudioAsset[0x28]; // 0x1c0(0x28)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UFoliageTypeSetDataAsset>>*/char FoliageType2Meshs[0x50]; // 0x1e8(0x50)
	/*struct TSoftObjectPtr<UGPAudioEventLimitGroupAsset>*/char AudioEventLimitGroupAsset[0x28]; // 0x238(0x28)
	/*struct TSoftObjectPtr<UGPClippedActorFakeEventAsset>*/char FakeWeaponEventConfigAsset[0x28]; // 0x260(0x28)
	/*struct TSoftObjectPtr<UGPLoopEndPairAsset>*/char LoopEndPairAsset[0x28]; // 0x288(0x28)
	/*struct TSoftObjectPtr<UPreloadAudioCfg>*/char PreloadAudioCfg[0x28]; // 0x2b0(0x28)
	bool bUseCustomMIDIBlankTime; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float CustomMIDIBlankTimeMs; // 0x2dc(0x04)
	bool EnableMIDIDebugTime; // 0x2e0(0x01)
	bool EnableBlankTime2Delay; // 0x2e1(0x01)
	char pad_2E2[0x2]; // 0x2e2(0x02)
	int32_t MinForceStopNoteCount; // 0x2e4(0x04)
	bool EnableMIDILog; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float SlapbackOvercomeUpAngle; // 0x2ec(0x04)
	float ColliderIgnoreR; // 0x2f0(0x04)
	bool EnableOcclusionObstruction; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	float OcclusionObstructionBaseIntervalSeconds; // 0x2f8(0x04)
	float OccMinDefaultListenerMoveDistance; // 0x2fc(0x04)
	float OccMinEmitterMoveDistance; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char OcclusionLodTickIntervalRatioCurve[0x28]; // 0x308(0x28)
	bool bEnableOccRTPC; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	struct FName OccRTPCName; // 0x334(0x08)
	struct FName ObsRTPCName; // 0x33c(0x08)
	struct FName RoomFloorRTPCName; // 0x344(0x08)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct TArray<struct FGPAFrameControlConfig> FrameControls; // 0x350(0x10)
	enum class EGPARoomBakeInterpolationType RoomBakeInterpolationType; // 0x360(0x01)
	bool bDefaultOpenAllDoorWin; // 0x361(0x01)
	bool bAsynParserRoomBakeData; // 0x362(0x01)
	bool bEnableOpenEarlyReflection; // 0x363(0x01)
	enum class EGPAOpenReflectionGeometryType DefaultGeometryType; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	int32_t TraceDistanceSmoothBuffNum; // 0x368(0x04)
	float OverPitchDegree; // 0x36c(0x04)
	struct TMap<enum class EGPAOpenReflectionGeometryType, struct FGPAOpenEarlyReflectionConfig> OpenEarlyReflectionConfigs; // 0x370(0x50)
	float DynamicReverbUpdateCD; // 0x3c0(0x04)
	float DynamicReverb3pUpdateCD; // 0x3c4(0x04)
	float UpdateDistance3p; // 0x3c8(0x04)
	int32_t InRoomSpaceTypeRtpc; // 0x3cc(0x04)
	/*struct TSoftObjectPtr<UGPAudioReverbSceneDataAsset>*/char SpaceTypeDataAsset[0x28]; // 0x3d0(0x28)
	bool bEnableAudioCollider; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FGPADynamicReverbConfig OutRoomDynamicReverbConfig; // 0x400(0x90)
	struct FGPADynamicReverbConfig InRoomDynamicReverbConfig; // 0x490(0x90)
	float MaxDistanceToListener; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct FString SpaceType3pRtpcName; // 0x528(0x10)
	struct FString OutdoorReverb3pRtpcName; // 0x538(0x10)
	struct FName DoorWinTransitionRTPCName; // 0x548(0x08)
	float DoorWinTweenTime; // 0x550(0x04)
	float DoorWinUpdateCD; // 0x554(0x04)
	struct FGPAMeteringCallbackConfig MeteringCallbackConfig; // 0x558(0x0c)
	bool bEnable2DMusicSyncCallback; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioSpatialAudioSettings
// Size: 0x1c0 (Inherited: 0x30)
class UGPAudioSpatialAudioSettings : public UObject {
public:

	struct FSoftObjectPath DiffractionAngleFactorCurvePath; // 0x30(0x18)
	struct FSoftObjectPath DiffractionDistanceFactorCurvePath; // 0x48(0x18)
	struct FSoftObjectPath DiffractionPortalAttenFactorCurvePath; // 0x60(0x18)
	struct FSoftObjectPath TransmissionDistanceSubtractionCurvePath; // 0x78(0x18)
	float ClosePortalTransmissionBlock; // 0x90(0x04)
	float OpenPortalTransmissionBlock; // 0x94(0x04)
	float OpenedPortalBlockMaxValue; // 0x98(0x04)
	float DiffractionPercent; // 0x9c(0x04)
	float TransmissionMinValue; // 0xa0(0x04)
	int32_t MaxDiffractionSteps; // 0xa4(0x04)
	int32_t MaxDiffractionPaths; // 0xa8(0x04)
	int32_t MaxDiffractionCalcNum; // 0xac(0x04)
	struct TArray<float> DistanceArray_M; // 0xb0(0x10)
	struct TArray<float> CheckIntervalArray; // 0xc0(0x10)
	int32_t MaxDiffractionSteps_Mobile; // 0xd0(0x04)
	int32_t MaxDiffractionPaths_Mobile; // 0xd4(0x04)
	int32_t MaxDiffractionCalcNum_Mobile; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<float> DistanceArray_M_Mobile; // 0xe0(0x10)
	struct TArray<float> CheckIntervalArray_Mobile; // 0xf0(0x10)
	struct FSoftObjectPath AudioPresetTablePath; // 0x100(0x18)
	float SpatialAudioManagerTickInterval; // 0x118(0x04)
	struct FName ObstructionRTPCName; // 0x11c(0x08)
	float DistScalarStartDist; // 0x124(0x04)
	float DistScalarEndDist; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<float> ObsDistanceArray_M; // 0x130(0x10)
	struct TArray<float> ObsCheckIntervalArrayFrontInView; // 0x140(0x10)
	struct TArray<float> ObsCheckIntervalArrayFrontOutOfView; // 0x150(0x10)
	struct TArray<float> ObsCheckIntervalArrayBack; // 0x160(0x10)
	struct TMap<enum class EGPAudioBlueprintType, float> ObsCheckLastTime; // 0x170(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioStatics
// Size: 0x30 (Inherited: 0x30)
class UGPAudioStatics : public UBlueprintFunctionLibrary {
public:


	void STATIC_UpdateSlapbackActivated(); // Function GPAudioRuntime.GPAudioStatics.UpdateSlapbackActivated // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14563f0
	void STATIC_UpdateAudioPortalStatus(struct FString PortalIDString, bool bOpen); // Function GPAudioRuntime.GPAudioStatics.UpdateAudioPortalStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1456290
	bool STATIC_UnregisterVolumeWithListener(); // Function GPAudioRuntime.GPAudioStatics.UnregisterVolumeWithListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1456260
	void STATIC_UnregisterAttenuationForListener(enum class EGPAttenuationScaleReason InReason); // Function GPAudioRuntime.GPAudioStatics.UnregisterAttenuationForListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14561f0
	void STATIC_UnloadAllNonPlayingAudioEvents(); // Function GPAudioRuntime.GPAudioStatics.UnloadAllNonPlayingAudioEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14561d0
	bool STATIC_StopSlapback(struct UGameAkComponent* Emitter); // Function GPAudioRuntime.GPAudioStatics.StopSlapback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1456150
	void STATIC_StopPlayingByPlayingId(int32_t PlayingId, int32_t TransitionMS); // Function GPAudioRuntime.GPAudioStatics.StopPlayingByPlayingId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14560a0
	void STATIC_StopPlaying(struct FGPAudioFuturePlayingID PlayingId, int32_t TransitionMS); // Function GPAudioRuntime.GPAudioStatics.StopPlaying // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455ff0
	void STATIC_StopMonitorRecord(); // Function GPAudioRuntime.GPAudioStatics.StopMonitorRecord // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455fd0
	void STATIC_StopLastPlayingEvent(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, int32_t StopNum); // Function GPAudioRuntime.GPAudioStatics.StopLastPlayingEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455ee0
	void STATIC_StopGlobalWeaponMIDI(struct FGPAudioMIDIEventAsset& GPAudioMIDIEvent, int32_t FireCount); // Function GPAudioRuntime.GPAudioStatics.StopGlobalWeaponMIDI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1455e00
	void STATIC_StopAttachAudioByEvent(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, bool bStopAllFlag); // Function GPAudioRuntime.GPAudioStatics.StopAttachAudioByEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455d00
	void STATIC_StopAllSounds(enum class EStopAllSoundType StopType); // Function GPAudioRuntime.GPAudioStatics.StopAllSounds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455c90
	void STATIC_StopActorSound(struct AActor* InPlayer); // Function GPAudioRuntime.GPAudioStatics.StopActorSound // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455c20
	void STATIC_Stop2DLoopEvent(); // Function GPAudioRuntime.GPAudioStatics.Stop2DLoopEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455c00
	int32_t STATIC_StartSlapback(struct UGameAkComponent* Emitter, struct UGPAudioEventAsset* Event); // Function GPAudioRuntime.GPAudioStatics.StartSlapback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455b40
	void STATIC_StartMonitorRecord(); // Function GPAudioRuntime.GPAudioStatics.StartMonitorRecord // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455b20
	void STATIC_SetWindowOpen(struct FVector WinPostion, int32_t OpenScal_0_101); // Function GPAudioRuntime.GPAudioStatics.SetWindowOpen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1455a60
	void STATIC_SetSwitch(struct AActor* Actor, struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function GPAudioRuntime.GPAudioStatics.SetSwitch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455820
	void STATIC_SetSlapbackIsActivated(bool bIsActivated); // Function GPAudioRuntime.GPAudioStatics.SetSlapbackIsActivated // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14557a0
	void STATIC_SetRTPCByStr(struct FString RTPCName, float RTPCValue, struct AActor* Actor, int32_t InterpolationTimeMs); // Function GPAudioRuntime.GPAudioStatics.SetRTPCByStr // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455630
	void STATIC_SetRTPCByName(struct FName RTPCName, float RTPCValue, struct AActor* Actor, int32_t InterpolationTimeMs); // Function GPAudioRuntime.GPAudioStatics.SetRTPCByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455500
	void STATIC_SetRTPC(/*struct TSoftObjectPtr<UObject> RTPCKey, float RTPCValue, struct AActor* Actor, int32_t InterpolationTimeMs*/); // Function GPAudioRuntime.GPAudioStatics.SetRTPC // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14552f0
	void STATIC_SetObserveredGameAk(struct UGameAkComponent* InGameAk, bool bObserverd, enum class EObserveredAudioState InObserveredAudioState); // Function GPAudioRuntime.GPAudioStatics.SetObserveredGameAk // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14551f0
	void STATIC_SetObserveredActor(struct AActor* inActor, bool bObserverd, enum class EObserveredAudioState InObserveredAudioState); // Function GPAudioRuntime.GPAudioStatics.SetObserveredActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14550f0
	void STATIC_SetLocallyListenRangeFactor(float InRangefator); // Function GPAudioRuntime.GPAudioStatics.SetLocallyListenRangeFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1455080
	void STATIC_SetHRTFs(int32_t HRTFIndex); // Function GPAudioRuntime.GPAudioStatics.SetHRTFs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454f20
	void STATIC_SetHRTFPluginEnable(bool bEnable); // Function GPAudioRuntime.GPAudioStatics.SetHRTFPluginEnable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454ea0
	bool STATIC_SetHeadSetArg(struct FGPAudioHeadSetRow& HeadSetRowConfig, bool PutOn); // Function GPAudioRuntime.GPAudioStatics.SetHeadSetArg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1454f90
	void STATIC_SetGPAudioWeaponCompositeArgs(struct FGPAudioCompositeParam& CompositeParam, struct AActor* InPlayer); // Function GPAudioRuntime.GPAudioStatics.SetGPAudioWeaponCompositeArgs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14546b0
	void STATIC_SetGlobalRTPCByStr(struct FString RTPCName, float RTPCValue, int32_t InterpolationTimeMs); // Function GPAudioRuntime.GPAudioStatics.SetGlobalRTPCByStr // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454d70
	void STATIC_SetGlobalRTPCByName(struct FName RTPCName, float RTPCValue, int32_t InterpolationTimeMs); // Function GPAudioRuntime.GPAudioStatics.SetGlobalRTPCByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454c80
	void STATIC_SetGlobalRTPC(/*struct TSoftObjectPtr<UObject> RTPCKey, float RTPCValue, int32_t InterpolationTimeMs*/); // Function GPAudioRuntime.GPAudioStatics.SetGlobalRTPC // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454aa0
	void STATIC_SetGameAkViewStateAndGroup(struct AActor* InPlayer, enum class EAudioCharacterViewState& InViewState, enum class EAudioCharacterGroup& InCharacterGroup); // Function GPAudioRuntime.GPAudioStatics.SetGameAkViewStateAndGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1454980
	bool STATIC_SetGameAkMute(struct AActor* InPlayer, bool in_Mute); // Function GPAudioRuntime.GPAudioStatics.SetGameAkMute // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14548c0
	void STATIC_SetEnableImmersePersonalized(bool bEnable); // Function GPAudioRuntime.GPAudioStatics.SetEnableImmersePersonalized // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454630
	void STATIC_SetEnableGPAudioDebugger(bool bEnable); // Function GPAudioRuntime.GPAudioStatics.SetEnableGPAudioDebugger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14545b0
	void STATIC_SetDolbyPluginEnable(bool bEnable); // Function GPAudioRuntime.GPAudioStatics.SetDolbyPluginEnable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454530
	void STATIC_SetDolbyNotDownMix(bool bEnable); // Function GPAudioRuntime.GPAudioStatics.SetDolbyNotDownMix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14544b0
	void STATIC_SetCurrentAudioCulture(struct FString AudioCulture); // Function GPAudioRuntime.GPAudioStatics.SetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454400
	void STATIC_SetCharacterListenRangeFactor(struct ACHARACTER* TargetCacharacter, float AttenuationFactor); // Function GPAudioRuntime.GPAudioStatics.SetCharacterListenRangeFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454350
	void STATIC_SetCharacterDieStatus(struct ACHARACTER* InCharacter, bool bDie); // Function GPAudioRuntime.GPAudioStatics.SetCharacterDieStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454290
	bool STATIC_SetBusEffect(struct FString BusName, int32_t uFXIndex, struct FString ShareSetName); // Function GPAudioRuntime.GPAudioStatics.SetBusEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454080
	void STATIC_SetAutoSlapbackActive(bool bAutoUpdate); // Function GPAudioRuntime.GPAudioStatics.SetAutoSlapbackActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1454000
	void STATIC_SetAKStateValue(struct UAkStateValue* in_stateValue); // Function GPAudioRuntime.GPAudioStatics.SetAKStateValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1453e20
	void STATIC_SetAKStateByName(struct FString StateGroup, struct FString State); // Function GPAudioRuntime.GPAudioStatics.SetAKStateByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1453c50
	void SetActorOutputBusVolume(struct AActor* InPlayer, float BusVolume); // Function GPAudioRuntime.GPAudioStatics.SetActorOutputBusVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1453f40
	void STATIC_SetActorAttenuationScalingFactor(struct AActor* InPlayer, float Value); // Function GPAudioRuntime.GPAudioStatics.SetActorAttenuationScalingFactor // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1453e90
	void STATIC_SeekOnGlobalEvent(struct UGPAudioEventAsset* InEvent, float Percent, struct FGPAudioFuturePlayingID PlayingId); // Function GPAudioRuntime.GPAudioStatics.SeekOnGlobalEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1453b60
	void STATIC_ResetMeteringPeakArray(); // Function GPAudioRuntime.GPAudioStatics.ResetMeteringPeakArray // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1453b40
	void STATIC_ResetBusMeteringPeakArray(struct FString BusName); // Function GPAudioRuntime.GPAudioStatics.ResetBusMeteringPeakArray // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1453a30
	void STATIC_RegisterHighFreqUpdatePos(struct AActor* inActor, enum class EGameAkHighFreqUpdatePosReason InReason); // Function GPAudioRuntime.GPAudioStatics.RegisterHighFreqUpdatePos // (Final|Native|Static|Public) // @ game+0x1453980
	void STATIC_RegisterAttenuationForListener(enum class EGPAttenuationScaleReason InReason, float Scalar); // Function GPAudioRuntime.GPAudioStatics.RegisterAttenuationForListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14538d0
	bool STATIC_ReceiveAnimationNotifyWithEnumType(struct FName& Notify, enum class EGPAudioBlueprintType EType, struct AActor* PlayActor, struct FGPAudioEventAdditionalFunction& AddFunc, bool isLogicTrigger); // Function GPAudioRuntime.GPAudioStatics.ReceiveAnimationNotifyWithEnumType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1453720
	bool STATIC_PreGetRangeAndDuration(struct UGPAudioEventAsset* InAudioAsset, struct AActor* InPlayer, float& Range, float& Duration); // Function GPAudioRuntime.GPAudioStatics.PreGetRangeAndDuration // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14535c0
	void STATIC_PostponeLongAudioExpireCheckTime(uint32_t InPlayingID); // Function GPAudioRuntime.GPAudioStatics.PostponeLongAudioExpireCheckTime // (Final|Native|Static|Public) // @ game+0x1453550
	void STATIC_PlayStopGPAudioEventAtLocationOpt(struct UGPAudioEventAsset* InEvent, struct FGPAudioFuturePlayingID PlayingId, struct UObject* WorldContext); // Function GPAudioRuntime.GPAudioStatics.PlayStopGPAudioEventAtLocationOpt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1453460
	struct UGPAudioEventAsset* STATIC_PlayPhysicalFootStep(struct AActor* Actor, enum class EGPAudioFootSoundType AudioType, struct UPhysicalMaterialAudioDataAsset* PhyFSConfig, bool bIsLeft, float Scale); // Function GPAudioRuntime.GPAudioStatics.PlayPhysicalFootStep // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14532d0
	struct FGPAudioFuturePlayingID STATIC_PlayGPAudioEventAtLocationOpt(struct UGPAudioEventAsset* InEvent, struct FVector Location, struct FRotator Rotator, struct FName& AudioTypeName, struct UObject* WorldContext, bool bActiveStopRequired, enum class EGameAkType InGameAkType, bool bPreCutted, float AttenuationScalar, bool bCalcSimplifiedTranDiff, struct FVector LocationOffset, bool bCalcCompletedTranDiff); // Function GPAudioRuntime.GPAudioStatics.PlayGPAudioEventAtLocationOpt // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1452d50
	struct FGPAudioFuturePlayingID STATIC_PlayGPAudioEventAtLocationEnumTypeOpt(struct UGPAudioEventAsset* InEvent, struct FVector Location, struct FRotator Rotator, enum class EGPAudioBlueprintType EType, struct UObject* WorldContext, bool bActiveStopRequired, enum class EGameAkType InGameAkType, bool bPreCutted, float AttenuationScalar, bool bCalcSimplifiedTranDiff, struct FVector LocationOffset, bool bCalcCompletedTranDiff); // Function GPAudioRuntime.GPAudioStatics.PlayGPAudioEventAtLocationEnumTypeOpt // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x14529e0
	struct FGPAudioFuturePlayingID STATIC_PlayGPAudioEventAtLocationEnumType(struct UGPAudioEventAsset* InEvent, struct FVector Location, struct FRotator Rotator, enum class EGPAudioBlueprintType EType, struct AActor* SourceActor, bool bAutoUnRegisterGameObjID, enum class EAttenuationScaleType AttenuationType, bool bPreCutted); // Function GPAudioRuntime.GPAudioStatics.PlayGPAudioEventAtLocationEnumType // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1452790
	struct FGPAudioFuturePlayingID STATIC_PlayGPAudioAttachWithEnumType(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, enum class EGPAudioBlueprintType EType, float Duration, bool bNeedMakeNoise, bool bPreCutted, float AttenuationScalar); // Function GPAudioRuntime.GPAudioStatics.PlayGPAudioAttachWithEnumType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1452590
	struct FGPAudioFuturePlayingID STATIC_PlayGPAudioAttachWithEndCallback(/*struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, enum class EGPAudioBlueprintType EType, struct FDelegate& EndPlayCallback, float Duration, bool bNeedMakeNoise, bool bPreCutted*/); // Function GPAudioRuntime.GPAudioStatics.PlayGPAudioAttachWithEndCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1452360
	struct FGPAudioFuturePlayingID STATIC_PlayGPAudioAttachStaticComponentWithEndCallback(/*struct UGPAudioEventAsset* InEvent, struct UGameStaticAkComponent* GameAk, enum class EGPAudioBlueprintType EType, struct FDelegate& EndPlayCallback, bool bNeedMakeNoise, bool bPreCutted*/); // Function GPAudioRuntime.GPAudioStatics.PlayGPAudioAttachStaticComponentWithEndCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1452180
	struct FGPAudioFuturePlayingID STATIC_PlayGPAudioAttachStaticComponent(struct UGPAudioEventAsset* InEvent, struct UGameStaticAkComponent* GameAk, enum class EGPAudioBlueprintType EType, bool bNeedMakeNoise, bool bPreCutted); // Function GPAudioRuntime.GPAudioStatics.PlayGPAudioAttachStaticComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1451ff0
	bool STATIC_PlayGlobalWeaponMIDIAk(struct AActor* Actor, float FirstCoolDownMs, float NoteDuration, bool IsStopByNoteOff, struct UGPAudioEventAsset* FireAudioEvent, struct UGPAudioEventAsset* StartEvent, struct UGPAudioEventAsset* EndEvent); // Function GPAudioRuntime.GPAudioStatics.PlayGlobalWeaponMIDIAk // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14530e0
	bool STATIC_PlayFootStepByAnimName(struct AActor* Actor, struct FString AnimName, struct UGPAudioEventAsset*& OutEventAsset); // Function GPAudioRuntime.GPAudioStatics.PlayFootStepByAnimName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1451e50
	struct UGPAudioEventAsset* STATIC_PlayBindPhysicalFootStep(struct AActor* Actor, struct UPhysicalMaterial* PhysMat, enum class EGPAudioFootSoundType AudioType, struct UPhysicalMaterialAudioDataAsset* BindCofig); // Function GPAudioRuntime.GPAudioStatics.PlayBindPhysicalFootStep // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1451d20
	bool STATIC_Play3PGlobalWeaponMIDIAk(struct AActor* Actor, float FirstCoolDownMs, float NoteDuration, bool IsStopByNoteOff, struct UGPAudioEventAsset* FireAudioEvent, struct UGPAudioEventAsset* StartEvent, struct UGPAudioEventAsset* EndEvent); // Function GPAudioRuntime.GPAudioStatics.Play3PGlobalWeaponMIDIAk // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1451b30
	struct FGPAudioFuturePlayingID STATIC_Play2DGlobalAudioWithEndCallback(/*struct UGPAudioEventAsset* InAudioAsset, struct FDelegate& EndPlayCallback*/); // Function GPAudioRuntime.GPAudioStatics.Play2DGlobalAudioWithEndCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1451a40
	struct FGPAudioFuturePlayingID STATIC_Play2DGlobalAudioWithBeginEndCallback(/*struct UGPAudioEventAsset* InAudioAsset, struct FDelegate& BeginPlayCallback, struct FDelegate& EndPlayCallback*/); // Function GPAudioRuntime.GPAudioStatics.Play2DGlobalAudioWithBeginEndCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14518e0
	struct FGPAudioFuturePlayingID STATIC_Play2DGlobalAudioWithBeginCallback(/*struct UGPAudioEventAsset* InAudioAsset, struct FDelegate& BeginPlayCallback*/); // Function GPAudioRuntime.GPAudioStatics.Play2DGlobalAudioWithBeginCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14517f0
	struct FGPAudioFuturePlayingID STATIC_Play2DGlobalAudio(struct UGPAudioEventAsset* InAudioAsset); // Function GPAudioRuntime.GPAudioStatics.Play2DGlobalAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1451770
	void STATIC_MuteIngameSound(struct FString reason); // Function GPAudioRuntime.GPAudioStatics.MuteIngameSound // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1451660
	float STATIC_MakeNoise(struct UGPAudioEventAsset* InEvent, struct UGameAkComponent* GameAk, struct FName& AudioType, float MakeNoiseRatio); // Function GPAudioRuntime.GPAudioStatics.MakeNoise // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1451510
	void STATIC_LogSplitLine(struct FString HeadStr); // Function GPAudioRuntime.GPAudioStatics.LogSplitLine // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1451400
	void STATIC_LogPerformanceReport(); // Function GPAudioRuntime.GPAudioStatics.LogPerformanceReport // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14513e0
	void STATIC_LogAudioError(struct FString LogStr); // Function GPAudioRuntime.GPAudioStatics.LogAudioError // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14512d0
	void STATIC_LogAudio(struct FString LogStr); // Function GPAudioRuntime.GPAudioStatics.LogAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14511c0
	void STATIC_LoadPhysicalMaterialConfig(struct AActor* InPlayer, struct FSoftObjectPath& SoPath); // Function GPAudioRuntime.GPAudioStatics.LoadPhysicalMaterialConfig // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x14510b0
	bool STATIC_IsPlayingByPlayingID(int32_t InPlayingID); // Function GPAudioRuntime.GPAudioStatics.IsPlayingByPlayingID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1451030
	bool STATIC_IsPlaying(struct FGPAudioFuturePlayingID& PlayingId); // Function GPAudioRuntime.GPAudioStatics.IsPlaying // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1450fa0
	bool STATIC_IsLocalPlayerControlledPawn(struct AActor* inActor); // Function GPAudioRuntime.GPAudioStatics.IsLocalPlayerControlledPawn // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1450f20
	bool STATIC_IsInMpAudioLowMemoryMode(); // Function GPAudioRuntime.GPAudioStatics.IsInMpAudioLowMemoryMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1450ef0
	bool STATIC_IsInAudioLowMemoryMode(); // Function GPAudioRuntime.GPAudioStatics.IsInAudioLowMemoryMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1450ec0
	bool STATIC_IsGlobalWeaponMIDIPlaying(struct AActor* SourceActor); // Function GPAudioRuntime.GPAudioStatics.IsGlobalWeaponMIDIPlaying // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1450e40
	bool STATIC_IsDolbyAtmosSupported(); // Function GPAudioRuntime.GPAudioStatics.IsDolbyAtmosSupported // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1450e10
	bool STATIC_IsAnimPreviewActor(struct AActor* Actor); // Function GPAudioRuntime.GPAudioStatics.IsAnimPreviewActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1450d90
	struct FName STATIC_GetWeaponFireShadowAkName(); // Function GPAudioRuntime.GPAudioStatics.GetWeaponFireShadowAkName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1450d50
	struct FSoftObjectPath STATIC_GetScatteredAudioEventPathByName(struct FString InEventIDString); // Function GPAudioRuntime.GPAudioStatics.GetScatteredAudioEventPathByName // (Final|Native|Static|Public|HasDefaults) // @ game+0x1450c70
	int32_t STATIC_GetPlayingCount(struct AActor* InPlayer); // Function GPAudioRuntime.GPAudioStatics.GetPlayingCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1450bf0
	int32_t STATIC_GetMeteringPeakArray(struct TArray<float>& OutMeteringPeakArray, int32_t OutSamples, int32_t StartIndex, bool MultiChannel); // Function GPAudioRuntime.GPAudioStatics.GetMeteringPeakArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1450a60
	bool STATIC_GetHRTFPluginEnable(); // Function GPAudioRuntime.GPAudioStatics.GetHRTFPluginEnable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1450a30
	bool STATIC_GetGameAkInfo(struct AActor* InPlayer, struct FGameAkInfo& OutGameAkInfo); // Function GPAudioRuntime.GPAudioStatics.GetGameAkInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1450960
	struct UGameAkComponent* STATIC_GetGameAkComponent(struct AActor* InPlayer, bool bCreateIfNotExist); // Function GPAudioRuntime.GPAudioStatics.GetGameAkComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14508a0
	float STATIC_GetGameAKAttenuationForListener(struct FName ShadowGameAKName); // Function GPAudioRuntime.GPAudioStatics.GetGameAKAttenuationForListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1450810
	bool STATIC_GetEnableGPAudioDolby(); // Function GPAudioRuntime.GPAudioStatics.GetEnableGPAudioDolby // (Final|Native|Static|Public) // @ game+0x14507e0
	bool STATIC_GetDolbyNotDownMix(); // Function GPAudioRuntime.GPAudioStatics.GetDolbyNotDownMix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14507b0
	struct FString STATIC_GetCurrentAudioCulture(); // Function GPAudioRuntime.GPAudioStatics.GetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14506d0
	struct FName STATIC_GetCrouchFootstepShadowAkName(); // Function GPAudioRuntime.GPAudioStatics.GetCrouchFootstepShadowAkName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1450690
	int32_t STATIC_GetBusMeteringPeakArray(struct FString BusName, struct TArray<float>& OutMeteringPeakArray, int32_t OutSamples, int32_t StartIndex, bool MultiChannel); // Function GPAudioRuntime.GPAudioStatics.GetBusMeteringPeakArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1450440
	bool STATIC_GetAsyncTraceResults(struct AActor* Actor, struct FHitResult& Out_HitResult); // Function GPAudioRuntime.GPAudioStatics.GetAsyncTraceResults // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1450320
	int32_t STATIC_GetAllPlayingCount(); // Function GPAudioRuntime.GPAudioStatics.GetAllPlayingCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14502f0
	bool STATIC_GetActorPlayingRangeAndDurationByTypeName(struct AActor* InPlayer, struct FName AudioTypeName, float& Range, float& Duration); // Function GPAudioRuntime.GPAudioStatics.GetActorPlayingRangeAndDurationByTypeName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1450190
	bool STATIC_GetActorPlayingRangeAndDuration(struct AActor* InPlayer, struct FGPAudioFuturePlayingID& PlayingId, float& Range, float& Duration); // Function GPAudioRuntime.GPAudioStatics.GetActorPlayingRangeAndDuration // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1450020
	bool STATIC_GetActorPlayingItemByTypeName(struct AActor* InPlayer, struct FName AudioTypeName, struct FGameAkPlayingItem& OutItem); // Function GPAudioRuntime.GPAudioStatics.GetActorPlayingItemByTypeName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x144fed0
	bool STATIC_GetActorPlayingItem(struct AActor* InPlayer, struct FGPAudioFuturePlayingID& PlayingId, struct FGameAkPlayingItem& OutItem); // Function GPAudioRuntime.GPAudioStatics.GetActorPlayingItem // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x144fd60
	float STATIC_GetActorMaxMakeNoiseRange(struct AActor* InPlayer); // Function GPAudioRuntime.GPAudioStatics.GetActorMaxMakeNoiseRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144fcd0
	float STATIC_GetActorMaxLocalListenRange(struct AActor* InPlayer); // Function GPAudioRuntime.GPAudioStatics.GetActorMaxLocalListenRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144fc40
	void STATIC_ForceStopGlobalWeaponMIDI(int32_t FireCount); // Function GPAudioRuntime.GPAudioStatics.ForceStopGlobalWeaponMIDI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144fbd0
	bool STATIC_EnableSingleAudio(); // Function GPAudioRuntime.GPAudioStatics.EnableSingleAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144fba0
	bool STATIC_EnableLogAudio(); // Function GPAudioRuntime.GPAudioStatics.EnableLogAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144fb70
	bool STATIC_EnableGPAudioDebugger(); // Function GPAudioRuntime.GPAudioStatics.EnableGPAudioDebugger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144fb40
	bool STATIC_EnableBusMetering(struct FString BusName, bool bEnable); // Function GPAudioRuntime.GPAudioStatics.EnableBusMetering // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144f9e0
	void STATIC_DeregisterHighFreqUpdatePos(struct AActor* inActor, enum class EGameAkHighFreqUpdatePosReason InReason); // Function GPAudioRuntime.GPAudioStatics.DeregisterHighFreqUpdatePos // (Final|Native|Static|Public) // @ game+0x144f930
	bool STATIC_CreateGameAkComponent(struct AActor* InPlayer, struct UGameAkComponent*& OutGameAk); // Function GPAudioRuntime.GPAudioStatics.CreateGameAkComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x144f860
	void STATIC_CollectLoop2DEvent(bool bCollect); // Function GPAudioRuntime.GPAudioStatics.CollectLoop2DEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144f7e0
	void STATIC_CloseGVoiceInit(); // Function GPAudioRuntime.GPAudioStatics.CloseGVoiceInit // (Final|Native|Static|Public) // @ game+0x144f7c0
	void STATIC_ClearWindowOpen(); // Function GPAudioRuntime.GPAudioStatics.ClearWindowOpen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144f7a0
	void STATIC_ClearCutsceneAudio(bool bDelayStop); // Function GPAudioRuntime.GPAudioStatics.ClearCutsceneAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144f720
	bool STATIC_CheckAnimationNotifyKeys(struct FName& AniNotifyKey, struct AActor* EditorActor); // Function GPAudioRuntime.GPAudioStatics.CheckAnimationNotifyKeys // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x144f650
	bool STATIC_bGVoiceInit(); // Function GPAudioRuntime.GPAudioStatics.bGVoiceInit // (Final|Native|Static|Public) // @ game+0x1456410
	bool STATIC_AsyncTraceToGround(struct AActor* Actor); // Function GPAudioRuntime.GPAudioStatics.AsyncTraceToGround // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144f5d0
	bool STATIC_AddOutput(struct FString DeviceShareSetName, int32_t IdDevice); // Function GPAudioRuntime.GPAudioStatics.AddOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x144f470
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPClippedActorFakeEventAsset
// Size: 0x48 (Inherited: 0x38)
class UGPClippedActorFakeEventAsset : public UDataAsset {
public:

	struct TArray<struct FGPClippedWeaponFakeDistInfo> ClippedWeaponFakeInfos; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioPresetConfigsDataAsset
// Size: 0x68 (Inherited: 0x38)
class UGPAudioPresetConfigsDataAsset : public UDataAsset {
public:

	struct TArray<struct FGPAudioReverbPreset> ReverbPresets; // 0x38(0x10)
	struct TArray<struct FGPAudioGunTailPreset> GunTailPresets; // 0x48(0x10)
	struct UGPAudioEventAsset* IndoorEvent; // 0x58(0x08)
	struct UGPAudioEventAsset* OutDoorEvent; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioUserSettings
// Size: 0xe0 (Inherited: 0x30)
class UGPAudioUserSettings : public UObject {
public:

	struct FString Dolby_Atmos_Bus_Name; // 0x30(0x10)
	struct FString Stereo_Bus_Name; // 0x40(0x10)
	struct FString Dolby_Atmos_StateName; // 0x50(0x10)
	struct FString Dolby_DownMix_StateName; // 0x60(0x10)
	struct FString Head_Pluggedin_RTPCName; // 0x70(0x10)
	struct FString Emitter_Height_3P_RTPCName; // 0x80(0x10)
	struct FString Slapback_Dis_RTPCName; // 0x90(0x10)
	struct FString Static_Acoustic_Coeff_RTPCName; // 0xa0(0x10)
	struct FString Space_Front_RTPCName; // 0xb0(0x10)
	float OverWidthRatio; // 0xc0(0x04)
	float DefaultDopplerTimeStep; // 0xc4(0x04)
	struct FString Doppler_RTPCName; // 0xc8(0x10)
	float Doppler_Rtpc_Value_Max; // 0xd8(0x04)
	bool bEnableListenerVelocity; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioVehicleCollisionDataAsset
// Size: 0xb0 (Inherited: 0x38)
class UGPAudioVehicleCollisionDataAsset : public UDataAsset {
public:

	struct FString CollisionRTPC; // 0x38(0x10)
	float MinVelocity; // 0x48(0x04)
	float MaxVelocity; // 0x4c(0x04)
	float CoolDown; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UGPAudioEventAsset* DefaultVehicleCollisionAudio; // 0x58(0x08)
	struct TMap<struct UPhysicalMaterial*, struct UGPAudioEventAsset*> VehicleCollisionAudioMap; // 0x60(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPLoopEndPairAsset
// Size: 0x128 (Inherited: 0x38)
class UGPLoopEndPairAsset : public UDataAsset {
public:

	struct TMap<uint32_t, struct FGPLoopEventList> LoopEndPairIDMap_AutoGenerate; // 0x38(0x50)
	struct TMap<uint32_t, struct FGPLoopEventList> LoopEndPairIDMap; // 0x88(0x50)
	struct TMap<uint32_t, struct FString> LoopEndPairIDToSubNameMap; // 0xd8(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAk
// Size: 0x30 (Inherited: 0x30)
class UGameAk : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.InterpTrackGPAudioEvent
// Size: 0xb0 (Inherited: 0x98)
class UInterpTrackGPAudioEvent : public UInterpTrackVectorBase {
public:

	struct TArray<struct FGPAudioEventTrackKey> Events; // 0x98(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.InterpTrackInstGPAudioEvent
// Size: 0x38 (Inherited: 0x30)
class UInterpTrackInstGPAudioEvent : public UInterpTrackInst {
public:

	float LastUpdatePosition; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.MovieSceneGPAudioEventSection
// Size: 0x240 (Inherited: 0xf8)
class UMovieSceneGPAudioEventSection : public UMovieSceneSection {
public:

	char pad_F8[0x40]; // 0xf8(0x40)
	struct UGPAudioEventAKLink* Event; // 0x138(0x08)
	struct UAkAudioEvent* AkEvent; // 0x140(0x08)
	struct FName DataTableEvent; // 0x148(0x08)
	struct FAkEventContainer CachedDataTableEvent; // 0x150(0xa0)
	struct UGPAudioEventAsset* GPAudioEvent; // 0x1f0(0x08)
	int32_t GPAudioEventPlayFlag; // 0x1f8(0x04)
	bool RetriggerEvent; // 0x1fc(0x01)
	char pad_1FD[0x3]; // 0x1fd(0x03)
	int32_t ScrubTailLengthMs; // 0x200(0x04)
	bool StopAtSectionEnd; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	struct FString EventName; // 0x208(0x10)
	char pad_218[0x28]; // 0x218(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.PhysicalMaterialAudioDataAsset
// Size: 0xd8 (Inherited: 0x38)
class UPhysicalMaterialAudioDataAsset : public UDataAsset {
public:

	struct TMap<struct UPhysicalMaterial*, struct FGPAudioEventList> PhysicalMatMap; // 0x38(0x50)
	struct FGPAudioEventList DefaultAudioList; // 0x88(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.PhysicalMaterialAudioSequenceDataAsset
// Size: 0xd8 (Inherited: 0x38)
class UPhysicalMaterialAudioSequenceDataAsset : public UDataAsset {
public:

	struct TMap<struct UPhysicalMaterial*, struct FGPAudioEventSequenceList> PhyMatAudSeqMap; // 0x38(0x50)
	struct FGPAudioEventSequenceList DefaultAudioList; // 0x88(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.PhysicalMaterialTireNoiseAsset
// Size: 0x98 (Inherited: 0x38)
class UPhysicalMaterialTireNoiseAsset : public UDataAsset {
public:

	struct FGPAudioLoopEvent DefaultTirNoise; // 0x38(0x10)
	struct TMap<struct UPhysicalMaterial*, struct FGPAudioLoopEvent> PhysicalMatAudioMap; // 0x48(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.PreloadAudioCfg
// Size: 0x88 (Inherited: 0x38)
class UPreloadAudioCfg : public UDataAsset {
public:

	struct TMap<uint64_t, struct FCharacterPreLoadItem> CharacterAbilityAudioCfg; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.AnimNotifyState_AudioEventBase
// Size: 0x40 (Inherited: 0x38)
class UAnimNotifyState_AudioEventBase : public UAnimNotifyState {
public:

	bool bOnlyAsMark; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAudioVolume
// Size: 0x6a8 (Inherited: 0x3b0)
class AGameAudioVolume : public AVolume {
public:

	bool bOrientedBoxCheckPoint; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	float RadiusBorderSquared; // 0x3b4(0x04)
	bool bStictVolumeHigh; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	struct FVector VomueMeshObjectLocation; // 0x3bc(0x0c)
	struct AActor* WorldPivotActor; // 0x3c8(0x08)
	/*struct TSoftObjectPtr<UGPAudioRoomBakeDataAsset>*/char RoomBakeDataSoftObj[0x28]; // 0x3d0(0x28)
	float VolumeOcclusion; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct TMap<enum class EAudioCharacterGroup, struct UGPAudioEventAsset*> CharaterEnterEvents; // 0x400(0x50)
	struct TMap<enum class EAudioCharacterGroup, struct UGPAudioEventAsset*> CharaterExitEvents; // 0x450(0x50)
	enum class EGPARoomBakeInterpolationType RoomBakeInterpolationType; // 0x4a0(0x01)
	bool bPlayEventAtLocation; // 0x4a1(0x01)
	char pad_4A2[0x6]; // 0x4a2(0x06)
	struct TArray<struct AGameAudioVolume*> ConnectedVolumes; // 0x4a8(0x10)
	enum class EAudioVolumeType AudioVolumeType; // 0x4b8(0x01)
	char pad_4B9[0x3]; // 0x4b9(0x03)
	int32_t SpaceType; // 0x4bc(0x04)
	struct FString AudioVolumeIDString; // 0x4c0(0x10)
	struct AGameAudioVolume* OwnedDiffractionAreaVolume; // 0x4d0(0x08)
	bool bEnablePriority; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	float Priority; // 0x4dc(0x04)
	struct FString ReverbPresetName_1P; // 0x4e0(0x10)
	struct FString ReverbPresetName_3P; // 0x4f0(0x10)
	struct FString GunTailPresetName; // 0x500(0x10)
	struct UGPAudioEventAsset* EnterEvent; // 0x510(0x08)
	struct UGPAudioEventAsset* ExitEvent; // 0x518(0x08)
	struct UGPAudioEventAsset* EnterEventDueToPriority; // 0x520(0x08)
	struct UGPAudioEventAsset* ExitEventDueToPriority; // 0x528(0x08)
	struct FString EnterMusicEventName; // 0x530(0x10)
	struct FString ExitMusicEventName; // 0x540(0x10)
	struct TArray<struct FGPAudioConditionRTPC> CharacterRTPCs; // 0x550(0x10)
	struct TArray<struct FGameAudioVolumeBounding> DetailGeos; // 0x560(0x10)
	struct TArray<struct FGameAudioVolumeBounding> ExcludeGeos; // 0x570(0x10)
	char pad_580[0x20]; // 0x580(0x20)
	struct UGPAudioRoomBakeDataAsset* m_RoomBakeData; // 0x5a0(0x08)
	char pad_5A8[0x100]; // 0x5a8(0x100)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAkComponent
// Size: 0x1250 (Inherited: 0x690)
class UGameAkComponent : public UAkComponent {
public:

	char pad_690[0xfc]; // 0x690(0xfc)
	bool bNeedInitCharacterAtBeginPlay; // 0x78c(0x01)
	bool bNeedUpdateSpatialPosition; // 0x78d(0x01)
	bool bUseRoomBakeData; // 0x78e(0x01)
	bool bUseSpatialVolumeRoomReverb; // 0x78f(0x01)
	enum class EAudioCharacterGroup CharterGroup; // 0x790(0x01)
	enum class EAudioCharacterViewState ViewState; // 0x791(0x01)
	char pad_792[0x2]; // 0x792(0x02)
	struct TWeakObjectPtr<struct AGameAudioVolume> ParentVolume; // 0x794(0x08)
	struct TWeakObjectPtr<struct AGameAudioVolume> ReverbVolume; // 0x79c(0x08)
	struct TWeakObjectPtr<struct AGameAudioVolume> GunTailVolume; // 0x7a4(0x08)
	struct TWeakObjectPtr<struct AGameAudioVolume> SpatialVolumePtr; // 0x7ac(0x08)
	struct TWeakObjectPtr<struct AGameAudioVolume> PortalVolume; // 0x7b4(0x08)
	char pad_7BC[0x4]; // 0x7bc(0x04)
	struct UGPAudioReverbSceneDataAsset* ReverbSceneDataAsset; // 0x7c0(0x08)
	struct UGameAudioOpenEarlyReflection* OpenEarlyReflection; // 0x7c8(0x08)
	bool bNeedManagerTickInfo; // 0x7d0(0x01)
	bool bNeedDiffraction; // 0x7d1(0x01)
	bool bNeedCheckIndoorArea; // 0x7d2(0x01)
	bool bNeedUseParentGameAk; // 0x7d3(0x01)
	bool bNeedOutdoorObstruction; // 0x7d4(0x01)
	bool bNeedUpdateLimitSpatialInfo; // 0x7d5(0x01)
	char pad_7D6[0x2]; // 0x7d6(0x02)
	float LimitSpatialInfoUpdateRadius; // 0x7d8(0x04)
	float LimitSpatialInfoUpdateInterval; // 0x7dc(0x04)
	char pad_7E0[0x10]; // 0x7e0(0x10)
	struct AGameAudioDiffractionVolume* CurrentDiffractionVolume; // 0x7f0(0x08)
	char pad_7F8[0x138]; // 0x7f8(0x138)
	struct TArray<struct ACHARACTER*> AllowObserveredCharacters; // 0x930(0x10)
	char pad_940[0x910]; // 0x940(0x910)

	void StopGameAk(); // Function GPAudioRuntime.GameAkComponent.StopGameAk // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x143f350
	void StopDoppler(); // Function GPAudioRuntime.GameAkComponent.StopDoppler // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x143f330
	void StartDoppler(float ScalingFactor, float TimeStep); // Function GPAudioRuntime.GameAkComponent.StartDoppler // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x143f270
	struct FGPAudioFuturePlayingID PostGPAudio(struct UGPAudioEventAsset* AudioAsset, bool bMakeNoise, enum class EGPAudioBlueprintType AudioType, bool bPreCutted); // Function GPAudioRuntime.GameAkComponent.PostGPAudio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x143ee60
	void PlayFoliageOverlapStirAudio(); // Function GPAudioRuntime.GameAkComponent.PlayFoliageOverlapStirAudio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x143ee40
	void PlayFoliageOverlapAudio(struct UGPAudioEventAsset* AudioEvent); // Function GPAudioRuntime.GameAkComponent.PlayFoliageOverlapAudio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x143edc0
	void OnAudioFinishCallback(enum class EGPEventCallbackType CallbackType, int32_t PlayingId); // Function GPAudioRuntime.GameAkComponent.OnAudioFinishCallback // (Final|Native|Public) // @ game+0x143ec60
	void OnAttenuationScaleUpdated(); // Function GPAudioRuntime.GameAkComponent.OnAttenuationScaleUpdated // (Final|Native|Public) // @ game+0x143ec40
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAudioOpenEarlyReflection
// Size: 0xcf0 (Inherited: 0x240)
class UGameAudioOpenEarlyReflection : public USceneComponent {
public:

	struct FGPAOpenEarlyReflectionConfig Config; // 0x240(0x28)
	bool bEnableReflection; // 0x268(0x01)
	enum class EGPAOpenReflectionGeometryType GeometryType; // 0x269(0x01)
	bool bEnableWeedOutLog; // 0x26a(0x01)
	bool bEnableAudioCollider; // 0x26b(0x01)
	bool bEnableUpdateGeometry; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct TArray<struct UAkAcousticTexture*> AkAcousticTextures; // 0x270(0x10)
	struct UGPAudioColliderDataAsset* ColliderData; // 0x280(0x08)
	struct TWeakObjectPtr<struct AGameAudioColliderVolume> CurrentVolume; // 0x288(0x08)
	char pad_290[0xa60]; // 0x290(0xa60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioType
// Size: 0x38 (Inherited: 0x30)
class UGPAudioType : public UObject {
public:

	uint32_t ShortID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioPriorityMethod
// Size: 0xa8 (Inherited: 0x30)
class UGPAudioPriorityMethod : public UObject {
public:

	struct TArray<int32_t> MaxAllowNumLOD; // 0x30(0x10)
	float PriorityDelta; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FName> LimitAudioTypeNames; // 0x48(0x10)
	struct TMap<uint32_t, float> AudioDistance; // 0x58(0x50)

	bool ShouldEventPlayUnderLimit(struct UGameAkComponent* Listener, struct FGPAudioPriorityParam& InParam, float& OutPriority); // Function GPAudioRuntime.GPAudioPriorityMethod.ShouldEventPlayUnderLimit // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1448080
	bool CheckEventUnderLimit(struct UGameAkComponent* Listener, struct FGPAudioPriorityParam& InParam); // Function GPAudioRuntime.GPAudioPriorityMethod.CheckEventUnderLimit // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1447ee0
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioPointEmitter
// Size: 0x3b8 (Inherited: 0x378)
class AGPAudioPointEmitter : public AActor {
public:

	struct UGameAkComponent* EmitterCom; // 0x378(0x08)
	struct UGPAudioEventAsset* AudioEvent; // 0x380(0x08)
	bool bNeedObstructionOcclusion; // 0x388(0x01)
	bool bPlayOnBeginPlay; // 0x389(0x01)
	bool bStopWhenDestroy; // 0x38a(0x01)
	bool bDebugDrawOcc; // 0x38b(0x01)
	bool bDebugDrawEmitter; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	float MaxDistance; // 0x390(0x04)
	float DistanceToListener; // 0x394(0x04)
	float StopTransitionMS; // 0x398(0x04)
	float MinStopDistance; // 0x39c(0x04)
	char pad_3A0[0x18]; // 0x3a0(0x18)

	void StopAudio(); // Function GPAudioRuntime.GPAudioPointEmitter.StopAudio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144bf60
	bool PlayAudio(); // Function GPAudioRuntime.GPAudioPointEmitter.PlayAudio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144bf10
	struct UGPAudioRoomBakeDataAsset* GetRoomBakeData(); // Function GPAudioRuntime.GPAudioPointEmitter.GetRoomBakeData // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144bdc0
	void DebugDrawCurrentRoomBakeValues(); // Function GPAudioRuntime.GPAudioPointEmitter.DebugDrawCurrentRoomBakeValues // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144bae0
	void DebugDrawCurrentRoomBakeNeighbors(); // Function GPAudioRuntime.GPAudioPointEmitter.DebugDrawCurrentRoomBakeNeighbors // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x144bac0
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.MovieSceneGPAudioTrack
// Size: 0x78 (Inherited: 0x60)
class UMovieSceneGPAudioTrack : public UMovieSceneTrack {
public:

	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
	char bIsAMasterTrack : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.AnimNotifyState_GPAudioEvent
// Size: 0x60 (Inherited: 0x40)
class UAnimNotifyState_GPAudioEvent : public UAnimNotifyState_AudioEventBase {
public:

	struct UGPAudioEventAsset* BeginAudioEvent; // 0x40(0x08)
	enum class EGPAudioBlueprintType BeginAudioType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UGPAudioEventAsset* EndAudioEvent; // 0x50(0x08)
	enum class EGPAudioBlueprintType EndAudioType; // 0x58(0x01)
	bool bOnlyFPP; // 0x59(0x01)
	bool bOnlyTPP; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)

	void ReceivedNotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration, bool bIsFPP); // Function GPAudioRuntime.AnimNotifyState_GPAudioEvent.ReceivedNotifyEnd // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x143f120
	void ReceivedNotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration, bool bIsFPP); // Function GPAudioRuntime.AnimNotifyState_GPAudioEvent.ReceivedNotifyBegin // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x143efd0
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAcousticPortal
// Size: 0x730 (Inherited: 0x6a8)
class AGameAcousticPortal : public AGameAudioVolume {
public:

	enum class AkAcousticPortalState InitialState; // 0x6a8(0x01)
	enum class EAudioPortalType PortalSizeType; // 0x6a9(0x01)
	char pad_6AA[0x6]; // 0x6aa(0x06)
	struct AGameAudioVolume* FrontRoomVolume; // 0x6b0(0x08)
	struct AGameAudioVolume* BackRoomVolume; // 0x6b8(0x08)
	bool bEnableDebugDisplay; // 0x6c0(0x01)
	char pad_6C1[0x3]; // 0x6c1(0x03)
	float CustomOpenTransmissionBlock; // 0x6c4(0x04)
	float CustomClosedTransmissionBlock; // 0x6c8(0x04)
	float CustomDiffractionScalar; // 0x6cc(0x04)
	struct UArrowComponent* ArrowComponent; // 0x6d0(0x08)
	char pad_6D8[0x58]; // 0x6d8(0x58)

	enum class AkAcousticPortalState GetCurrentState(); // Function GPAudioRuntime.GameAcousticPortal.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x143ec10
	void EnablePortal(); // Function GPAudioRuntime.GameAcousticPortal.EnablePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x143ebf0
	void DisablePortal(); // Function GPAudioRuntime.GameAcousticPortal.DisablePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x143ebd0
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAreaAudioVolume
// Size: 0x6a8 (Inherited: 0x6a8)
class AGameAreaAudioVolume : public AGameAudioVolume {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAudioDiffractionVolume
// Size: 0x6f8 (Inherited: 0x6a8)
class AGameAudioDiffractionVolume : public AGameAudioVolume {
public:

	struct TArray<struct FPresetIdAndArea> ReverbPresetNameAndArea; // 0x6a8(0x10)
	struct TArray<struct FPresetIdAndArea> GunTailPresetIdAndArea; // 0x6b8(0x10)
	struct TArray<struct AGameAudioVolume*> SpatialVolumes; // 0x6c8(0x10)
	struct TArray<struct AGameAudioVolume*> Portals; // 0x6d8(0x10)
	struct TArray<struct AGameAudioVolume*> ConnectedPortals; // 0x6e8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAudioVolumeEmitter
// Size: 0x6f8 (Inherited: 0x6a8)
class AGameAudioVolumeEmitter : public AGameAudioVolume {
public:

	bool bNeedObstructionOcclusion; // 0x6a8(0x01)
	char pad_6A9[0x7]; // 0x6a9(0x07)
	struct UGPAudioEventAsset* LoopEvent; // 0x6b0(0x08)
	bool bCheckVolume; // 0x6b8(0x01)
	char pad_6B9[0x7]; // 0x6b9(0x07)
	struct UGameAkComponent* AkEmitter; // 0x6c0(0x08)
	bool bForceUseMaxDistance; // 0x6c8(0x01)
	char pad_6C9[0x3]; // 0x6c9(0x03)
	float MaxDistance; // 0x6cc(0x04)
	float StopTransitionMS; // 0x6d0(0x04)
	bool bCheckParticleQuality; // 0x6d4(0x01)
	enum class EPerfGearQualityLevel MinimalPlayQuality; // 0x6d5(0x01)
	enum class EPerfGearQualityLevel MinimalPlayQuality_Mobile; // 0x6d6(0x01)
	char pad_6D7[0x21]; // 0x6d7(0x21)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameReverbVolume
// Size: 0x6c0 (Inherited: 0x6a8)
class AGameReverbVolume : public AGameAudioVolume {
public:

	struct UGPALateReverbComponent* LateReverb1P; // 0x6a8(0x08)
	struct UGPALateReverbComponent* LateReverb3P; // 0x6b0(0x08)
	bool bUseAudioEvent; // 0x6b8(0x01)
	char pad_6B9[0x7]; // 0x6b9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameSpatialAudioVolume
// Size: 0x6e8 (Inherited: 0x6a8)
class AGameSpatialAudioVolume : public AGameAudioVolume {
public:

	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x6a8(0x08)
	struct UGPALateReverbComponent* LateReverb1P; // 0x6b0(0x08)
	struct UGPALateReverbComponent* LateReverb3P; // 0x6b8(0x08)
	struct UAkRoomComponent* Room; // 0x6c0(0x08)
	float TransmissionRate; // 0x6c8(0x04)
	int32_t FloorNum; // 0x6cc(0x04)
	bool bIsOutdoorSpatialVolume; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)
	struct TArray<struct AGameAudioVolume*> Portals; // 0x6d8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameStaticAkComponent
// Size: 0x1250 (Inherited: 0x1250)
class UGameStaticAkComponent : public UGameAkComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.TravelerGameAk
// Size: 0x1260 (Inherited: 0x1250)
class UTravelerGameAk : public UGameAkComponent {
public:

	char pad_1250[0x10]; // 0x1250(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAudioOpenEarlyReflection3p
// Size: 0xcf0 (Inherited: 0xcf0)
class UGameAudioOpenEarlyReflection3p : public UGameAudioOpenEarlyReflection {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioEventAKLink
// Size: 0xc8 (Inherited: 0x38)
class UGPAudioEventAKLink : public UGPAudioType {
public:

	int32_t AudioFlag; // 0x38(0x04)
	float MaxAttenuationRadius; // 0x3c(0x04)
	bool IsInfinite; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float MaximumDuration; // 0x44(0x04)
	bool bIsMIDIEvent; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TMap<struct FString, float> MaximumDurationLocalized; // 0x50(0x50)
	/*struct TSoftObjectPtr<UObject>*/char ResourceObject[0x28]; // 0xa0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioEventAsset
// Size: 0xa0 (Inherited: 0x38)
class UGPAudioEventAsset : public UGPAudioType {
public:

	struct UGPAudioEventAKLink* DefaultEventLink; // 0x38(0x08)
	struct TArray<struct FGPAudioLinkEvent> FlagOverrideEvents; // 0x40(0x10)
	struct TMap<int32_t, struct FAkEventContainer> FlagAkEventContainerMap; // 0x50(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioPriorityMethod_FootStep
// Size: 0xb8 (Inherited: 0xa8)
class UGPAudioPriorityMethod_FootStep : public UGPAudioPriorityMethod {
public:

	int32_t LimitTypes; // 0xa8(0x04)
	float MaxAttentionDistance; // 0xac(0x04)
	enum class EGPAudioEventLimitCharGroup LimitCharGroup; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioPriorityMethod_Event
// Size: 0xb0 (Inherited: 0xa8)
class UGPAudioPriorityMethod_Event : public UGPAudioPriorityMethod {
public:

	float MaxAttentionDistance; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioPriorityMethod_Test
// Size: 0xc0 (Inherited: 0xa8)
class UGPAudioPriorityMethod_Test : public UGPAudioPriorityMethod {
public:

	struct TArray<struct FName> CustomAudioTypeNames; // 0xa8(0x10)
	float MaxAttentionDistance; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GPAudioMultiPointEmitter
// Size: 0x3d0 (Inherited: 0x3b8)
class AGPAudioMultiPointEmitter : public AGPAudioPointEmitter {
public:

	enum class AkMultiPositionType MultiPositionType; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct TArray<struct FTransform> MultiEmitterRelativeTransforms; // 0x3c0(0x10)

	void DebugDrawMultiEmitters(float DrawTime); // Function GPAudioRuntime.GPAudioMultiPointEmitter.DebugDrawMultiEmitters // (Final|Native|Public|BlueprintCallable) // @ game+0x144bb00
	void CopySplinePointsToRelativeTransforms(struct USplineComponent* TargetSpline); // Function GPAudioRuntime.GPAudioMultiPointEmitter.CopySplinePointsToRelativeTransforms // (Final|Native|Public|BlueprintCallable) // @ game+0x144ba40
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.MovieSceneGPAudioEventTrack
// Size: 0x78 (Inherited: 0x78)
class UMovieSceneGPAudioEventTrack : public UMovieSceneGPAudioTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAudioRuntime.GameAudioSlapbackEmitter
// Size: 0x760 (Inherited: 0x6f8)
class AGameAudioSlapbackEmitter : public AGameAudioVolumeEmitter {
public:

	bool bAnyDirSlapback; // 0x6f8(0x01)
	enum class EGameAudioVolumeOutOfPlanType OutOfPlanType; // 0x6f9(0x01)
	char pad_6FA[0x2]; // 0x6fa(0x02)
	float MinSlapbackDisM; // 0x6fc(0x04)
	float MaxSlapbackDisM; // 0x700(0x04)
	float AcousticsCoeff; // 0x704(0x04)
	float SetRTPCDeltaM; // 0x708(0x04)
	int32_t SectorAngle; // 0x70c(0x04)
	int32_t ForwardSlapbakAngle; // 0x710(0x04)
	char pad_714[0x4c]; // 0x714(0x4c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
