
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPAudioRuntime.EGPEventCallbackType
enum class EGPEventCallbackType : UINT8 {
	BeginPlay = 0,
	EndPlay = 1,
	StopWhenLoading = 2,
	PlayFailed = 3,
	AsyncPlayFailed = 4,
	EGPEventCallbackType_MAX = 5
};

// Enum GPAudioRuntime.EGPGameAudioGeometryType
enum class EGPGameAudioGeometryType : UINT8 {
	OBB = 0,
	Cylinder = 1,
	EGPGameAudioGeometryType_MAX = 2
};

// Enum GPAudioRuntime.EGameAudioVolumeOutOfPlanType
enum class EGameAudioVolumeOutOfPlanType : UINT8 {
	PROJECT_ANY = 0,
	PROJECT_NORMAL_PLAN_SEG = 1,
	PROJECT_NORMAL_PLAN_Z = 2,
	SECTOR_XY = 3,
	EGameAudioVolumeOutOfPlanType_MAX = 4
};

// Enum GPAudioRuntime.EAkFitToGeometryMode
enum class EAkFitToGeometryMode : UINT8 {
	OrientedBox = 0,
	AlignedBox = 1,
	ConvexPolyhedron = 2,
	EAkFitToGeometryMode_MAX = 3
};

// Enum GPAudioRuntime.EGPAkCompPoolMethod
enum class EGPAkCompPoolMethod : UINT8 {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EGPAkCompPoolMethod_MAX = 5
};

// Enum GPAudioRuntime.EGPAudioDebugPlayFlag
enum class EGPAudioDebugPlayFlag : UINT8 {
	PLAY_ALL = 0,
	PLAY_ONLY_1P = 1,
	PLAY_ONLY_3P = 2,
	PLAY_MAX = 3
};

// Enum GPAudioRuntime.EGPAudioEventLimitFireType
enum class EGPAudioEventLimitFireType : UINT8 {
	WP_NORMAL_FIRE = 0,
	WP_SUP_FIRE = 1,
	WP_BULLET_FLY = 2,
	WP_BULLET_CRACK = 3,
	WP_MAX = 4
};

// Enum GPAudioRuntime.EGPAudioEventLimitFootStepType
enum class EGPAudioEventLimitFootStepType : UINT8 {
	E_FOOT_STEP = 0,
	E_FOOT_STEP_SPRINT = 1,
	E_FOOT_STEP_RUN = 2,
	E_FOOT_STEP_PRONE = 3,
	E_FOOT_STEP_MED = 4,
	E_FOOT_STEP_SLIDETACKLE = 5,
	E_FOOT_MAX = 6
};

// Enum GPAudioRuntime.EGPAudioEventLimitCharGroup
enum class EGPAudioEventLimitCharGroup : UINT8 {
	Never = 0,
	Player = 1,
	Ally = 2,
	Enemy = 3,
	EGPAudioEventLimitCharGroup_MAX = 4
};

// Enum GPAudioRuntime.EGPAudioEventLimitType
enum class EGPAudioEventLimitType : UINT8 {
	Never = 0,
	GameObject = 1,
	Event = 2,
	EGPAudioEventLimitType_MAX = 3
};

// Enum GPAudioRuntime.EQuadrantDirection
enum class EQuadrantDirection : UINT8 {
	EQD_F = 0,
	EQD_L = 1,
	EQD_R = 2,
	EQD_B = 3,
	EQD_MAX = 4
};

// Enum GPAudioRuntime.EBusStateEnum
enum class EBusStateEnum : UINT8 {
	Inactive = 0,
	WaitingActiveConfirm = 1,
	Active = 2,
	WaitingInactiveConfirm = 3,
	EBusStateEnum_MAX = 4
};

// Enum GPAudioRuntime.EGPAudioAniNotifyType
enum class EGPAudioAniNotifyType : UINT8 {
	EANI_CHANGLE_CLIP = 0,
	EANI_CHANGLE_2 = 1,
	EANI_CHANGLE_3 = 2,
	EANI_CHANGLE_4 = 3,
	EANI_CHANGLE_5 = 4,
	EANI_CHANGLE_6 = 5,
	EANI_CHANGLE_7 = 6,
	EANI_CHANGLE_8 = 7,
	EANI_CHANGLE_9 = 8,
	EANI_CHANGLE_10 = 9,
	EANI_CHANGLE_11 = 10,
	EANI_CHANGLE_12 = 11,
	EANI_CHANGLE_13 = 12,
	EANI_CHANGLE_14 = 13,
	EANI_CHANGLE_15 = 14,
	EANI_CHANGLE_16 = 15,
	EANI_CHANGLE_17 = 16,
	EANI_CHANGLE_18 = 17,
	EANI_CHANGLE_19 = 18,
	EANI_CHANGLE_20 = 19,
	EANI_CHANGLE_21 = 20,
	EANI_CHANGLE_22 = 21,
	EANI_CHANGLE_23 = 22,
	EANI_CHANGLE_24 = 23,
	EANI_CHANGLE_25 = 24,
	EANI_CHANGLE_26 = 25,
	EANI_CHANGLE_27 = 26,
	EANI_CHANGLE_28 = 27,
	EANI_CHANGLE_29 = 28,
	EANI_CHANGLE_30 = 29,
	EANI_CHANGLE_31 = 30,
	EANI_CHANGLE_32 = 31,
	EANI_CHANGLE_41 = 32,
	EANI_CHANGLE_42 = 33,
	EANI_CHANGLE_43 = 34,
	EANI_CHANGLE_44 = 35,
	EANI_CHANGLE_45 = 36,
	EANI_CHANGLE_46 = 37,
	EANI_CHANGLE_47 = 38,
	EANI_CHANGLE_48 = 39,
	EANI_CHANGLE_49 = 40,
	EANI_CHANGLE_50 = 41,
	EANI_CHANGLE_51 = 42,
	EANI_CHANGLE_52 = 43,
	EANI_CHANGLE_53 = 44,
	EANI_CHANGLE_54 = 45,
	EANI_CHANGLE_55 = 46,
	EANI_CHANGLE_56 = 47,
	EANI_CHANGLE_57 = 48,
	EANI_CHANGLE_58 = 49,
	EANI_CHANGLE_59 = 50,
	EANI_CHANGLE_60 = 51,
	EANI_CHANGLE_61 = 52,
	EANI_CHANGLE_62 = 53,
	EANI_CHANGLE_MAX = 54
};

// Enum GPAudioRuntime.EGPAudioBlueprintType
enum class EGPAudioBlueprintType : UINT8 {
	None = 0,
	Default = 1,
	Music_OutGame = 2,
	Music_Ingame = 3,
	Character_Voice = 4,
	Character_Breath = 5,
	Character_Action = 6,
	Character_Footstep = 7,
	Character_Skill = 8,
	Character_Prop = 9,
	Voice_NPC = 10,
	Voice_System = 11,
	Ambience = 12,
	Object_Static = 13,
	Object_Scale = 14,
	Weapon_Action = 15,
	Weapon_Reload = 16,
	Weapon_Fire = 17,
	Weapon_Fire_Sup = 18,
	Weapon_Bullet = 19,
	Explosion = 20,
	Vehicle = 21,
	EGPAudioBlueprintType_MAX = 22
};

// Enum GPAudioRuntime.EGPAudioFootSoundType
enum class EGPAudioFootSoundType : UINT8 {
	EACTION_DEFAULT = 0,
	EACTION_FOOTSTEP_RUN = 1,
	EACTION_FOOTSTEP_WALK = 2,
	EACTION_FOOTSTEP_AI_WALK = 3,
	EACTION_FOOTSTEP_SPRINT = 4,
	EACTION_FOOTSTEP_PRONE = 5,
	EACTION_FOOTSTEP_Crouch_Run = 6,
	EACTION_FOOTSTEP_Crouch_Walk = 7,
	EACTION_FOOTSTEP_AI_Crouch_Walk = 8,
	EACTION_FOOTSTEP_JUMP = 9,
	EACTION_FOOTSTEP_BodyFall = 10,
	EACTION_FOOTSTEP_LandHigh = 11,
	EACTION_FOOTSTEP_LandMedium = 12,
	EACTION_FOOTSTEP_LandLow = 13,
	EACTION_FOOTSTEP_LandDie = 14,
	EACTION_FOOTSTEP_Shuffle = 15,
	EACTION_FOOTSTEP_SPRINT_STOP = 16,
	EACTION_FOOTSTEP_FRACTURE_WALK = 17,
	EACTION_FOOTSTEP_FRACTURE_RUN = 18,
	EACTION_FOOTSTEP_HandTouch_High = 19,
	EACTION_FOOTSTEP_HandTouch_Low = 20,
	EACTION_FOOTSTEP_SLIDETACKLE = 21,
	EACTION_FOOTSTEP_SLIDETACKLE_END = 22,
	EACTION_MAX = 23
};

// Enum GPAudioRuntime.EGPAudioFootSoundBodyType
enum class EGPAudioFootSoundBodyType : UINT8 {
	Default = 0,
	Male = 1,
	Female = 2,
	FatGuy = 3,
	Crocodile = 4,
	EGPAudioFootSoundBodyType_MAX = 5
};

// Enum GPAudioRuntime.ERadioCuttingType
enum class ERadioCuttingType : UINT8 {
	ERANGE_PLAY = 0,
	EALWAYS_PLAY = 1,
	ERadioCuttingType_MAX = 2
};

// Enum GPAudioRuntime.ERadioChannelLoopType
enum class ERadioChannelLoopType : UINT8 {
	ELOOP_RANDOM = 0,
	ELOOP_SEQUENCE = 1,
	ELOOP_ONE = 2,
	EONE_SEQUENCE = 3,
	ELOOP_PRESET = 4,
	ERadioChannelLoopType_MAX = 5
};

// Enum GPAudioRuntime.EGPAudioReverbType
enum class EGPAudioReverbType : UINT8 {
	Default = 0,
	Room = 1,
	Pipe = 2,
	HalfOpen = 3,
	Alley = 4,
	OpenField = 5,
	EGPAudioReverbType_MAX = 6
};

// Enum GPAudioRuntime.EGPABakeSubZoneType
enum class EGPABakeSubZoneType : UINT8 {
	AABB = 0,
	OBB = 1,
	CYLINDER = 2,
	EGPABakeSubZoneType_MAX = 3
};

// Enum GPAudioRuntime.EGPAudioRoomBakeDataType
enum class EGPAudioRoomBakeDataType : UINT8 {
	S_ARRAY_DS_MAP = 0,
	RUN_LENGTH_COMPRESS = 1,
	CELL_INDEX_INONE = 2,
	CELL_INDEX_INONE_SET = 3,
	CELL_INDEX_MAP = 4,
	EGPAudioRoomBakeDataType_MAX = 5
};

// Enum GPAudioRuntime.EGPARoomBakeInterpolationType
enum class EGPARoomBakeInterpolationType : UINT8 {
	NONE = 0,
	RANGE_DIS_WEIGHT = 1,
	AVG_RANGE = 2,
	EGPARoomBakeInterpolationType_MAX = 3
};

// Enum GPAudioRuntime.EAttenuationScaleType
enum class EAttenuationScaleType : UINT8 {
	ESCALE_GLOBAL = 0,
	ESCALE_NON_SCALE = 1,
	ESCALE_TYPE_CONFIG = 2,
	ESCALE_SPECIFIC = 3,
	ESCALE_MAX = 4
};

// Enum GPAudioRuntime.EGPAudioEnvEmitterState
enum class EGPAudioEnvEmitterState : UINT8 {
	EEmitterPlay3D = 0,
	EEmitterPlay2D = 1,
	EEmitterStopPlay = 2,
	EGPAudioEnvEmitterState_MAX = 3
};

// Enum GPAudioRuntime.EGPAudioTag
enum class EGPAudioTag : UINT8 {
	ETAG_FEMALE = 0,
	ETAG_1P = 1,
	ETAG_3P = 2,
	ETAG_SUP = 3,
	ETAG_RAID = 4,
	ETAG_MAX = 5
};

// Enum GPAudioRuntime.EAudioCharacterGroup
enum class EAudioCharacterGroup : UINT8 {
	EGROUP_ALL = 0,
	EGROUP_LOCALLY = 1,
	EGROUP_NON_LOCALLY = 2,
	EGROUP_TEAM_ALL = 3,
	EGROUP_TEAMATE = 4,
	EGROUP_SAMECAMP_ALL = 5,
	EGROUP_SAMECAMP = 6,
	EGROUP_ENEMY = 7,
	EGROUP_MAX = 8
};

// Enum GPAudioRuntime.EAudioCharacterViewState
enum class EAudioCharacterViewState : UINT8 {
	ESTATE_NONE = 0,
	ESTATE_IP = 1,
	ESTATE_LOCALLY_3P = 2,
	ESTATE_REMOTE_3P = 3,
	ESTATE_AI_3P = 4,
	ESTATE_MAX = 5
};

// Enum GPAudioRuntime.EGPAOpenReflectionGeometryType
enum class EGPAOpenReflectionGeometryType : UINT8 {
	BOX = 0,
	OPENTANGENT = 1,
	EGPAOpenReflectionGeometryType_MAX = 2
};

// Enum GPAudioRuntime.EGPATickFrameGroupType
enum class EGPATickFrameGroupType : UINT8 {
	G_Default = 0,
	G_OcclusionObstruction = 1,
	G_3PGameAKUpdateSpatial = 2,
	G_3PUpdateReverb = 3,
	G_UpdateFoliage = 4,
	G_MAX = 5
};

// Enum GPAudioRuntime.EGPAudioActorEndPlayStopType
enum class EGPAudioActorEndPlayStopType : UINT8 {
	STOP_LOOP = 0,
	STOP_ALL = 1,
	DO_NOTHING = 2,
	EGPAudioActorEndPlayStopType_MAX = 3
};

// Enum GPAudioRuntime.EStopAllSoundType
enum class EStopAllSoundType : UINT8 {
	ESCALE_ALL = 0,
	ESCALE_MAX = 1
};

// Enum GPAudioRuntime.EGPAttenuationScaleReason
enum class EGPAttenuationScaleReason : UINT8 {
	None = 0,
	Headset = 1,
	CatGirl_CrouchMove = 2,
	Buff = 3,
	EGPAttenuationScaleReason_MAX = 4
};

// Enum GPAudioRuntime.EGameAkHighFreqUpdatePosReason
enum class EGameAkHighFreqUpdatePosReason : UINT8 {
	DrivenVehicle = 0,
	ControlCruiseMissile = 1,
	Elevator = 2,
	EGameAkHighFreqUpdatePosReason_MAX = 3
};

// Enum GPAudioRuntime.EObserveredAudioState
enum class EObserveredAudioState : UINT8 {
	NotSet = 0,
	Observered = 1,
	NotObservered = 2,
	EObserveredAudioState_MAX = 3
};

// Enum GPAudioRuntime.EAudioPortalType
enum class EAudioPortalType : UINT8 {
	None = 0,
	Normal = 1,
	Roomy = 2,
	Transparent = 3,
	EAudioPortalType_MAX = 4
};

// Enum GPAudioRuntime.EAudioVolumeType
enum class EAudioVolumeType : UINT8 {
	Default = 0,
	GameArea = 1,
	SpatialRoom = 2,
	Portal = 3,
	POIArea = 4,
	EAudioVolumeType_MAX = 5
};

// Enum GPAudioRuntime.EGPAudioComponent
enum class EGPAudioComponent : UINT8 {
	ECP_NONE = 0,
	ECP_BARREL = 1,
	ECP_STOCK = 2,
	ECP_MAGAZINE = 3,
	ECP_MAX = 4
};

// Enum GPAudioRuntime.EGameAkType
enum class EGameAkType : UINT8 {
	EGAMEAK_DEFAULT = 0,
	EGAMEAK_STATIC = 1,
	EGAMEAK_TRAVELER = 2,
	EGAMEAK_MAX = 3
};

// ScriptStruct GPAudioRuntime.AudioPriorityWeaponDebugSingleInfo
// Size: 0x48 (Inherited: 0x00)
struct FAudioPriorityWeaponDebugSingleInfo {
public:

	float Priority; // 0x00(0x04)
	float LocationPriority; // 0x04(0x04)
	float FireDirPriority; // 0x08(0x04)
	float DistancePriority; // 0x0c(0x04)
	bool bShouldPlay; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString ReasonForNotPlay; // 0x18(0x10)
	struct FString AudioName; // 0x28(0x10)
	char LimitArea; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct TWeakObjectPtr<struct AActor> SourceActor; // 0x3c(0x08)
	float UpdateTime; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.FootStepAudioSequenceDataRow
// Size: 0x40 (Inherited: 0x10)
struct FFootStepAudioSequenceDataRow : public FDescRowBase {
public:

	int32_t AudioStyleId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftObjectPtr<UPhysicalMaterialAudioSequenceDataAsset>*/char PhysicalConfig[0x28]; // 0x18(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GameAkDebugInfo
// Size: 0x30 (Inherited: 0x00)
struct FGameAkDebugInfo {
public:

	int32_t PlayFlag; // 0x00(0x04)
	float DisFromListener; // 0x04(0x04)
	float OccSetValue; // 0x08(0x04)
	float ObsSetValue; // 0x0c(0x04)
	float UpdatePositionInterval; // 0x10(0x04)
	float NextUpdatePositionTimeLeft; // 0x14(0x04)
	int32_t CurRoomBakeReflectEnergy; // 0x18(0x04)
	int32_t CurRoomBakeTransmissionValue; // 0x1c(0x04)
	struct TArray<struct FGameAkPlayingItem> PlayingItems; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GameAkInfo
// Size: 0x08 (Inherited: 0x00)
struct FGameAkInfo {
public:

	enum class EAudioCharacterGroup CharterGroup; // 0x00(0x01)
	enum class EAudioCharacterViewState ViewState; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t PlayFlag; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.PresetIdAndArea
// Size: 0x18 (Inherited: 0x00)
struct FPresetIdAndArea {
public:

	struct FString Name; // 0x00(0x10)
	int32_t SurfaceArea; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GameAudioVolumeBounding
// Size: 0x90 (Inherited: 0x00)
struct FGameAudioVolumeBounding {
public:

	enum class EGPGameAudioGeometryType GeometryType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector AxisX; // 0x04(0x0c)
	struct FVector AxisY; // 0x10(0x0c)
	struct FVector AxisZ; // 0x1c(0x0c)
	struct FVector Center; // 0x28(0x0c)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FQuat Rotation; // 0x40(0x10)
	struct FTransform RelativeTransform; // 0x50(0x30)
	struct FVector BoxExtent; // 0x80(0x0c)
	float XYCircleRadius; // 0x8c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.AkSurfacePoly
// Size: 0x18 (Inherited: 0x00)
struct FAkSurfacePoly {
public:

	struct UAkAcousticTexture* Texture; // 0x00(0x08)
	float Occlusion; // 0x08(0x04)
	bool EnableSurface; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float SurfaceArea; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.AkSurfaceEdgeVerts
// Size: 0x18 (Inherited: 0x00)
struct FAkSurfaceEdgeVerts {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAAttachEmitterInfo
// Size: 0x28 (Inherited: 0x00)
struct FGPAAttachEmitterInfo {
public:

	struct FName AttachName; // 0x00(0x08)
	struct TWeakObjectPtr<struct USceneComponent> AttachTo; // 0x08(0x08)
	struct UGPAudioEventAsset* PlayEvent; // 0x10(0x08)
	struct UGPAudioEventAsset* StopEvent; // 0x18(0x08)
	enum class EGPAudioBlueprintType PlayType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.AudioAkCompManagerTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FAudioAkCompManagerTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAkCompPool
// Size: 0x38 (Inherited: 0x00)
struct FGPAkCompPool {
public:

	struct TArray<struct FGPAkCompPoolElement> FreeElements; // 0x00(0x10)
	struct TArray<struct UGameAkComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UGameAkComponent*> InUseComponents_Manual; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAkCompPoolElement
// Size: 0x10 (Inherited: 0x00)
struct FGPAkCompPoolElement {
public:

	struct UGameAkComponent* Component; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioColliderNodeInfo
// Size: 0x30 (Inherited: 0x00)
struct FGPAudioColliderNodeInfo {
public:

	struct FBox Bound; // 0x00(0x1c)
	int32_t BoxOffset; // 0x1c(0x04)
	int32_t BoxNum; // 0x20(0x04)
	int32_t LeftChildOffset; // 0x24(0x04)
	int32_t RightChildOffset; // 0x28(0x04)
	int32_t Axis; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.OrientedBoxInfo
// Size: 0x44 (Inherited: 0x00)
struct FOrientedBoxInfo {
public:

	struct FOrientedBox OrientedBox; // 0x00(0x3c)
	int32_t MaterialIndex; // 0x3c(0x04)
	bool bHasSplit; // 0x40(0x01)
	bool bIndoor; // 0x41(0x01)
	bool bHollow; // 0x42(0x01)
	bool bPipe; // 0x43(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioAnimNotifyFootStepTypeConfig
// Size: 0x28 (Inherited: 0x00)
struct FGPAudioAnimNotifyFootStepTypeConfig {
public:

	enum class EGPAudioFootSoundType FootSoundType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UPhysicalMaterialAudioDataAsset* BindPhysicalConfig; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioMIDIEventAsset
// Size: 0x38 (Inherited: 0x00)
struct FGPAudioMIDIEventAsset {
public:

	struct UGPAudioEventAsset* FireAudioEvent; // 0x00(0x08)
	bool bPreload1PFireAudio; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UGPAudioEventAsset* StartEvent; // 0x10(0x08)
	struct UGPAudioEventAsset* EndEvent; // 0x18(0x08)
	struct UGPAudioEventAsset* LoopStartEvent; // 0x20(0x08)
	struct UGPAudioEventAsset* LoopEndEvent; // 0x28(0x08)
	float StartAudioEventLeadTime; // 0x30(0x04)
	float MIDIDelayTime; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudio3PFireEvent
// Size: 0xc8 (Inherited: 0x00)
struct FGPAudio3PFireEvent {
public:

	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char FireAudioEvent[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char StartEvent[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EndEvent[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LoopStartEvent[0x28]; // 0x78(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LoopEndEvent[0x28]; // 0xa0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioMIDIEvent
// Size: 0x88 (Inherited: 0x00)
struct FGPAudioMIDIEvent {
public:

	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char FireAudioEvent[0x28]; // 0x00(0x28)
	bool bPreloadFireAudio; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char StartEvent[0x28]; // 0x30(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EndEvent[0x28]; // 0x58(0x28)
	float StartAudioEventLeadTime; // 0x80(0x04)
	float MIDIDelayTime; // 0x84(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPNameKeyAudio
// Size: 0x10 (Inherited: 0x00)
struct FGPNameKeyAudio {
public:

	struct FName Key; // 0x00(0x08)
	struct UGPAudioEventAsset* AudioAsset; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioLoopEvent
// Size: 0x10 (Inherited: 0x00)
struct FGPAudioLoopEvent {
public:

	struct UGPAudioEventAsset* LoopAudioEventStart; // 0x00(0x08)
	struct UGPAudioEventAsset* LoopAudioEventEnd; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioEventSequenceList
// Size: 0x50 (Inherited: 0x00)
struct FGPAudioEventSequenceList {
public:

	struct TMap<enum class EGPAudioFootSoundBodyType, struct FGPAudioEventSequenceBodyTypeList> AudioEventBodyTypeMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioEventSequenceBodyTypeList
// Size: 0x10 (Inherited: 0x00)
struct FGPAudioEventSequenceBodyTypeList {
public:

	struct TArray<struct FGPAudioTypeEventSequence> AudioEventSequences; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioTypeEventSequence
// Size: 0x18 (Inherited: 0x00)
struct FGPAudioTypeEventSequence {
public:

	enum class EGPAudioFootSoundType AudioType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FGPAudioEventTimeDelayConfig> GPAudioEventTimeDelayConfigs; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioEventTimeDelayConfig
// Size: 0x10 (Inherited: 0x00)
struct FGPAudioEventTimeDelayConfig {
public:

	float DelayPlayTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UGPAudioEventAsset* GPAudioEvent; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioEventList
// Size: 0x50 (Inherited: 0x00)
struct FGPAudioEventList {
public:

	struct TMap<enum class EGPAudioFootSoundBodyType, struct FGPAudioEventBodyTypeList> AudioEventBodyTypeMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioEventBodyTypeList
// Size: 0x10 (Inherited: 0x00)
struct FGPAudioEventBodyTypeList {
public:

	struct TArray<struct FGPAudioTypeEvent> AudioEvents; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioTypeEvent
// Size: 0x10 (Inherited: 0x00)
struct FGPAudioTypeEvent {
public:

	enum class EGPAudioFootSoundType AudioType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UGPAudioEventAsset* GPAudioEvent; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.AkEventContainer
// Size: 0xa0 (Inherited: 0x00)
struct FAkEventContainer {
public:

	uint32_t ShortID; // 0x00(0x04)
	int32_t AudioFlag; // 0x04(0x04)
	float MaxAttenuationRadius; // 0x08(0x04)
	bool IsInfinite; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MaximumDuration; // 0x10(0x04)
	bool bIsMIDIEvent; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString EventName; // 0x18(0x10)
	struct TMap<struct FString, float> MaximumDurationLocalized; // 0x28(0x50)
	/*struct TSoftObjectPtr<UObject>*/char ResourceObject[0x28]; // 0x78(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioLinkEvent
// Size: 0x08 (Inherited: 0x00)
struct FGPAudioLinkEvent {
public:

	struct UGPAudioEventAKLink* GPAudioEventLink; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPLongAudioPlayingRecord
// Size: 0x08 (Inherited: 0x00)
struct FGPLongAudioPlayingRecord {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPDecodedCacheEvent
// Size: 0x20 (Inherited: 0x00)
struct FGPDecodedCacheEvent {
public:

	struct UAkAudioEvent* CacheEvent; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioEventLimitRow
// Size: 0x38 (Inherited: 0x08)
struct FGPAudioEventLimitRow : public FTableRowBase {
public:

	struct FName LimitName; // 0x08(0x08)
	struct FName LimitDesc; // 0x10(0x08)
	enum class EGPAudioEventLimitType LimitType; // 0x18(0x01)
	bool bAllowOverLimitPost; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct UGPAudioEventPriorityAsset* PriorityMethod_HighLOD; // 0x20(0x08)
	struct UGPAudioEventPriorityAsset* PriorityMethod_MidLOD; // 0x28(0x08)
	struct UGPAudioEventPriorityAsset* PriorityMethod_LowLOD; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioEventModeLimit
// Size: 0x10 (Inherited: 0x00)
struct FGPAudioEventModeLimit {
public:

	struct TArray<struct FGPAudioEventTypeLimit> AllTypeLimits; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioEventTypeLimit
// Size: 0x10 (Inherited: 0x00)
struct FGPAudioEventTypeLimit {
public:

	enum class EGPAudioEventLimitType EventLimitType; // 0x00(0x01)
	bool bAllowOverLimitPost; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UGPAudioPriorityMethod* PriorityMethod; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioPriorityParam
// Size: 0x98 (Inherited: 0x00)
struct FGPAudioPriorityParam {
public:

	struct FName AudioTypeName; // 0x00(0x08)
	enum class EAudioCharacterGroup CharGroup; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector Location; // 0x0c(0x0c)
	struct FRotator Rotation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FPlayingAudioTargetParam> CurrentPlayingTargetParams; // 0x28(0x10)
	struct TWeakObjectPtr<struct UGameAkComponent> AkComponent; // 0x38(0x08)
	struct TWeakObjectPtr<struct AActor> SourceActor; // 0x40(0x08)
	char pad_48[0x50]; // 0x48(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.PlayingAudioTargetParam
// Size: 0x0c (Inherited: 0x00)
struct FPlayingAudioTargetParam {
public:

	float Priority; // 0x00(0x04)
	char pad_4[0x8]; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioFirePriorityItem
// Size: 0x40 (Inherited: 0x00)
struct FGPAudioFirePriorityItem {
public:

	struct UGameAkComponent* GameAkComponent; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioFootStepProxyRow
// Size: 0x50 (Inherited: 0x08)
struct FGPAudioFootStepProxyRow : public FTableRowBase {
public:

	struct FName AnimName; // 0x08(0x08)
	enum class EGPAudioFootSoundType FootSoundType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	/*struct TSoftObjectPtr<UPhysicalMaterialAudioDataAsset>*/char BindPhysicalConfigSO[0x28]; // 0x18(0x28)
	struct TArray<float> NotifyTimes; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.Audio3PFireLoopPriorityManagerConfig
// Size: 0xc0 (Inherited: 0x00)
struct FAudio3PFireLoopPriorityManagerConfig {
public:

	struct TArray<int32_t> LoopFirePriorityNum; // 0x00(0x10)
	char InCrackCircleP0Num_Max; // 0x10(0x01)
	char HoldQuadrantNum_Min; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float FrontQuadAngle; // 0x14(0x04)
	float CircleThreshold1_Meter; // 0x18(0x04)
	float CircleThreshold2_Meter; // 0x1c(0x04)
	struct TMap<int32_t, int32_t> DirectionBeHold_Max; // 0x20(0x50)
	struct TMap<char, int32_t> CircleCandidateBeHold_Max; // 0x70(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAttenuationShadowAkSets
// Size: 0x10 (Inherited: 0x00)
struct FGPAttenuationShadowAkSets {
public:

	struct TArray<struct FName> ShadowAkNames; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPGameplayAudioHDRConfig
// Size: 0x20 (Inherited: 0x00)
struct FGPGameplayAudioHDRConfig {
public:

	bool bEnableHDR; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSoftObjectPath HDRDataTablePath; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPGameplayAudioFeatures
// Size: 0x18 (Inherited: 0x00)
struct FGPGameplayAudioFeatures {
public:

	struct FString GameplayModeName; // 0x00(0x10)
	bool bEnableDynamicReverb3P; // 0x10(0x01)
	bool bEnableDynamicReverb1P; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioHeadSetRow
// Size: 0x28 (Inherited: 0x08)
struct FGPAudioHeadSetRow : public FTableRowBase {
public:

	uint64_t ExtendItemID; // 0x08(0x08)
	float GlobalAttenuationScalingFactor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UGPAudioEventAsset* PutOnEvent; // 0x18(0x08)
	struct UGPAudioEventAsset* TakeDownEvent; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPComponentSignificanceConfig
// Size: 0x24 (Inherited: 0x00)
struct FGPComponentSignificanceConfig {
public:

	int32_t QualityLevel; // 0x00(0x04)
	struct FFloatRange DistanceRange; // 0x04(0x10)
	float UpdateAkPostionInterval; // 0x14(0x04)
	float UpdateOccObsInterval; // 0x18(0x04)
	float FoliageCheckInterval; // 0x1c(0x04)
	bool bEnabledOccObs; // 0x20(0x01)
	bool bEnabledEarlyReflection; // 0x21(0x01)
	bool bEnabledSpatialRoomInfo; // 0x22(0x01)
	bool bEnabledFootstep; // 0x23(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPALODFeatures
// Size: 0x38 (Inherited: 0x00)
struct FGPALODFeatures {
public:

	struct FString Quality; // 0x00(0x10)
	int32_t WwiseQuality; // 0x10(0x04)
	bool bEnable3PDynamicReverb; // 0x14(0x01)
	bool bEnable1PEarlyReflectionAndDynamicReverb; // 0x15(0x01)
	bool bEnableFoliageOverlap; // 0x16(0x01)
	bool bEnable3PRoomQuery; // 0x17(0x01)
	float RoomQueryDistance; // 0x18(0x04)
	float EarlyReflectionDistance; // 0x1c(0x04)
	float DynamicReverbDistance; // 0x20(0x04)
	bool bEnableSlapback; // 0x24(0x01)
	bool bEnableFootStepFloorCheck; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	float PositionCurveScale; // 0x28(0x04)
	float MinSoundEngineUpdateTransformCMSquared; // 0x2c(0x04)
	uint32_t MaxLRUCacheMediaSize; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioRadioChannelRow
// Size: 0x30 (Inherited: 0x08)
struct FGPAudioRadioChannelRow : public FTableRowBase {
public:

	struct FName channelID; // 0x08(0x08)
	float Fm; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char RecordEvents[0x10]; // 0x18(0x10)
	enum class ERadioChannelLoopType LoopType; // 0x28(0x01)
	bool bIsHiding; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioReverbSceneConfig
// Size: 0x50 (Inherited: 0x00)
struct FGPAudioReverbSceneConfig {
public:

	int32_t SpaceType; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString RTPCName; // 0x08(0x10)
	float WidthMin; // 0x18(0x04)
	float WidthMax; // 0x1c(0x04)
	float AreaMin; // 0x20(0x04)
	float AreaMax; // 0x24(0x04)
	float HeightMin; // 0x28(0x04)
	float HeightMax; // 0x2c(0x04)
	float SmallHeightRatioMin; // 0x30(0x04)
	float SmallHeightRatioMax; // 0x34(0x04)
	float XYRatioMin; // 0x38(0x04)
	float XYRatioMax; // 0x3c(0x04)
	bool bNeedSpaceFront; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UAkAuxBus* ReverbAuxBus; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioReverbConfig
// Size: 0x58 (Inherited: 0x00)
struct FGPAudioReverbConfig {
public:

	struct FString RTPCName; // 0x00(0x10)
	int32_t RTPCValue; // 0x10(0x04)
	float WidthMin; // 0x14(0x04)
	float WidthMax; // 0x18(0x04)
	float AreaMin; // 0x1c(0x04)
	float AreaMax; // 0x20(0x04)
	float HeightMin; // 0x24(0x04)
	float HeightMax; // 0x28(0x04)
	float SmallHeightRatioMin; // 0x2c(0x04)
	float SmallHeightRatioMax; // 0x30(0x04)
	float XYRatioMin; // 0x34(0x04)
	float XYRatioMax; // 0x38(0x04)
	bool bNeedSpaceFront; // 0x3c(0x01)
	bool bNeedSpecificMaterial; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	/*struct TArray<struct TSoftObjectPtr<UPhysicalMaterial>>*/char SurfaceMaterials[0x10]; // 0x40(0x10)
	int32_t FallBackType; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPIndex24V8
// Size: 0x04 (Inherited: 0x00)
struct FGPIndex24V8 {
public:

	int32_t Value; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAOpenEarlyReflectionConfig
// Size: 0x28 (Inherited: 0x00)
struct FGPAOpenEarlyReflectionConfig {
public:

	bool bTraceComplex; // 0x00(0x01)
	bool bReturnPhysicalMaterial; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MaxTraceDistance; // 0x04(0x04)
	float ReflectionBoxExtentZ; // 0x08(0x04)
	float ReflectionBoxOffsetZ; // 0x0c(0x04)
	float UpdateDistance; // 0x10(0x04)
	int32_t SmoothBuffNum; // 0x14(0x04)
	bool bNeedForwardTrace; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t OpenTangentMaxLen; // 0x1c(0x04)
	float ComplementTraceStepTime; // 0x20(0x04)
	bool bNeedGuardUpdateWhenMoveEnd; // 0x24(0x01)
	bool bUseLittleAngleTraceHollow; // 0x25(0x01)
	bool bCombineSameTargetPlan; // 0x26(0x01)
	bool bUpdatePlanBoundByNewSameTargetHit; // 0x27(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioConditionRTPC
// Size: 0x28 (Inherited: 0x00)
struct FGPAudioConditionRTPC {
public:

	struct FString StrKey; // 0x00(0x10)
	float Value; // 0x10(0x04)
	bool bNeedClear; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float ClearValue; // 0x18(0x04)
	enum class EAudioCharacterViewState AvailableViewState; // 0x1c(0x01)
	enum class EAudioCharacterGroup AvailableCharaterGroup; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct UAkRtpc* AkKey; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioShadowGameAkKey
// Size: 0x0c (Inherited: 0x00)
struct FGPAudioShadowGameAkKey {
public:

	struct FName StrKey; // 0x00(0x08)
	bool bRelativeScaleAttenuation; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioServerNotifierSpeedInfo
// Size: 0x10 (Inherited: 0x00)
struct FGPAudioServerNotifierSpeedInfo {
public:

	struct UClass* NotifierClass; // 0x00(0x08)
	float FootStepInterval; // 0x08(0x04)
	float Speed; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAColliderConfig
// Size: 0x18 (Inherited: 0x00)
struct FGPAColliderConfig {
public:

	struct FString DefaultSceneRtpcName; // 0x00(0x10)
	int32_t DefaultSpaceType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPADynamicReverbConfig
// Size: 0x90 (Inherited: 0x00)
struct FGPADynamicReverbConfig {
public:

	bool Enable; // 0x00(0x01)
	bool DebugLog; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float RtpcClearValue; // 0x04(0x04)
	int32_t MaxArea; // 0x08(0x04)
	int32_t MinArea; // 0x0c(0x04)
	struct FString AreaRtpcName; // 0x10(0x10)
	struct FString XYRatioRtpcName; // 0x20(0x10)
	float MaxXYRatio; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString HeightRtpcName; // 0x38(0x10)
	float MinHeight; // 0x48(0x04)
	float MaxHeight; // 0x4c(0x04)
	struct FString WidthRtpcName; // 0x50(0x10)
	float MinWidth; // 0x60(0x04)
	float MaxWidth; // 0x64(0x04)
	struct FString SpaceTypeRtpcName; // 0x68(0x10)
	struct FString DefaultSceneRtpcName; // 0x78(0x10)
	int32_t DefaultSpaceType; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAMeteringCallbackConfig
// Size: 0x0c (Inherited: 0x00)
struct FGPAMeteringCallbackConfig {
public:

	bool EnableGlobalMeteringCallback; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PeakBuffLength; // 0x04(0x04)
	bool EnableTruePeak; // 0x08(0x01)
	bool EnableKWeight; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAFrameControlConfig
// Size: 0x0c (Inherited: 0x00)
struct FGPAFrameControlConfig {
public:

	enum class EGPATickFrameGroupType Group; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ExcuteTimesPerFrame; // 0x04(0x04)
	float FrameTimeSeconds; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPANameWithDescribe
// Size: 0x20 (Inherited: 0x00)
struct FGPANameWithDescribe {
public:

	struct FName Key; // 0x00(0x08)
	struct FText Describe; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAttenuationScale
// Size: 0x08 (Inherited: 0x00)
struct FGPAttenuationScale {
public:

	enum class EGPAudioBlueprintType AudioConstType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioEventAdditionalFunction
// Size: 0x10 (Inherited: 0x00)
struct FGPAudioEventAdditionalFunction {
public:

	bool bMagazineDropAudioEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MagazineDropAudioPlayTimes; // 0x04(0x04)
	bool bShellDropAudioEnable; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ShellDropAudioPlayTimes; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioActorDebugItem
// Size: 0x08 (Inherited: 0x00)
struct FGPAudioActorDebugItem {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioTypeConfig
// Size: 0x18 (Inherited: 0x00)
struct FGPAudioTypeConfig {
public:

	struct FName ShadowAkName; // 0x00(0x08)
	struct TArray<enum class EGPAttenuationScaleReason> AffectedReasonArray; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPScatteredAudioRow
// Size: 0x38 (Inherited: 0x08)
struct FGPScatteredAudioRow : public FTableRowBase {
public:

	struct FString EventIDString; // 0x08(0x10)
	struct FSoftObjectPath EventPath; // 0x18(0x18)
	bool bPreLoadWhenLoadTable; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioReverbPreset
// Size: 0x30 (Inherited: 0x00)
struct FGPAudioReverbPreset {
public:

	struct FString ReverbPresetName; // 0x00(0x10)
	struct UAkAuxBus* AuxBus; // 0x10(0x08)
	struct FString AuxBusName; // 0x18(0x10)
	float SendLevel; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioGunTailPreset
// Size: 0x28 (Inherited: 0x00)
struct FGPAudioGunTailPreset {
public:

	struct FString GunTailPresetName; // 0x00(0x10)
	struct FString GunTailRTPCName; // 0x10(0x10)
	float GunTailRTPCValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAttenuationScaleConfig
// Size: 0x60 (Inherited: 0x00)
struct FGPAttenuationScaleConfig {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioHDRConfigRow
// Size: 0x48 (Inherited: 0x08)
struct FGPAudioHDRConfigRow : public FTableRowBase {
public:

	struct FString BusName; // 0x08(0x10)
	bool bEnableBusHDR; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString BusRTPCName; // 0x20(0x10)
	float BusActiveThreshold; // 0x30(0x04)
	float StateConfirmTime; // 0x34(0x04)
	float InBusTime; // 0x38(0x04)
	float OutBusTime; // 0x3c(0x04)
	float DefaultBusPriority; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPClippedWeaponFakeEventRecord
// Size: 0x04 (Inherited: 0x00)
struct FGPClippedWeaponFakeEventRecord {
public:

	uint32_t LastEventServerCount; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.PVSAudioActorInfo
// Size: 0x1c (Inherited: 0x00)
struct FPVSAudioActorInfo {
public:

	bool bIsVisible; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
	float Speed; // 0x10(0x04)
	float LastUpdateTime; // 0x14(0x04)
	uint16_t StateParams; // 0x18(0x02)
	char pad_1A[0x2]; // 0x1a(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPClippedWeaponFakeEventNeededInfo
// Size: 0x48 (Inherited: 0x00)
struct FGPClippedWeaponFakeEventNeededInfo {
public:

	int32_t WeaponEventType; // 0x00(0x04)
	uint32_t EventServerCount; // 0x04(0x04)
	uint64_t WeaponID; // 0x08(0x08)
	uint64_t SilencerFunId; // 0x10(0x08)
	bool bIsAutoFire; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	uint64_t WeaponOwnerUin; // 0x20(0x08)
	struct FVector EventTriggerLocation; // 0x28(0x0c)
	struct FVector PredictedBulletHitLocation; // 0x34(0x0c)
	struct FName SoundFXId; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPClippedWeaponFakeDistInfo
// Size: 0x18 (Inherited: 0x00)
struct FGPClippedWeaponFakeDistInfo {
public:

	struct TArray<uint64_t> WeaponIds; // 0x00(0x10)
	float MaxFakeDistance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioPOIArea
// Size: 0xd0 (Inherited: 0x00)
struct FGPAudioPOIArea {
public:

	char pad_0[0xd0]; // 0x00(0xd0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.AudioGraphPortal
// Size: 0x20 (Inherited: 0x00)
struct FAudioGraphPortal {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.AudioGraphVolume
// Size: 0x20 (Inherited: 0x00)
struct FAudioGraphVolume {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioCompositeParam
// Size: 0x58 (Inherited: 0x00)
struct FGPAudioCompositeParam {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<enum class EGPAudioTag> ToAddAudioTags; // 0x08(0x10)
	struct TArray<enum class EGPAudioTag> ToCleanAudioTags; // 0x18(0x10)
	struct TArray<struct FGPAudioRTPCPair> RTPCs; // 0x28(0x10)
	struct TArray<struct UGPAudioEventAsset*> AdditionEvents; // 0x38(0x10)
	struct TArray<struct FGPAudioLoopEvent> AdditionLoopEvents; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPLoopEventList
// Size: 0x10 (Inherited: 0x00)
struct FGPLoopEventList {
public:

	struct TArray<uint32_t> LoopList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPEndSubNamePair
// Size: 0x28 (Inherited: 0x00)
struct FGPEndSubNamePair {
public:

	struct FSoftObjectPath EndEvent; // 0x00(0x18)
	struct FString SubName; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPLoopEndPair
// Size: 0x28 (Inherited: 0x00)
struct FGPLoopEndPair {
public:

	struct FSoftObjectPath EndEvent; // 0x00(0x18)
	struct TArray<struct FSoftObjectPath> LoopEvents; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioEventTrackKey
// Size: 0x30 (Inherited: 0x00)
struct FGPAudioEventTrackKey {
public:

	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UGPAudioEventAKLink* GPAudioEvent; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
	struct UGPAudioEventAsset* GPAudioEventGroup; // 0x20(0x08)
	int32_t GPAudioEventPlayFlag; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.MovieSceneGPAudioEventTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneGPAudioEventTemplate : public FMovieSceneEvalTemplate {
public:

	struct UMovieSceneGPAudioEventSection* Section; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.FloorVibrationAudioRow
// Size: 0x80 (Inherited: 0x10)
struct FFloorVibrationAudioRow : public FDescRowBase {
public:

	enum class EGPAudioFootSoundType AudioType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FSoftObjectPath DefaultAudioEvent; // 0x18(0x18)
	struct TMap<enum class EPhysicalSurface, struct FSoftObjectPath> PhysicalMatMap; // 0x30(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.PhysicalMaterialAudioDataRow
// Size: 0x80 (Inherited: 0x10)
struct FPhysicalMaterialAudioDataRow : public FDescRowBase {
public:

	enum class EGPAudioFootSoundBodyType BodyType; // 0x10(0x01)
	enum class EGPAudioFootSoundType AudioType; // 0x11(0x01)
	bool bUnloadWithObject; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FSoftObjectPath DefaultAudioEvent; // 0x18(0x18)
	struct TMap<enum class EPhysicalSurface, struct FSoftObjectPath> PhysicalMatMap; // 0x30(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.CharacterPreLoadItem
// Size: 0x50 (Inherited: 0x00)
struct FCharacterPreLoadItem {
public:

	struct TMap<uint32_t, struct FSoftObjectPath> EventIDToPathMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.CharacterPreLoadListInEditor
// Size: 0x18 (Inherited: 0x00)
struct FCharacterPreLoadListInEditor {
public:

	uint64_t ExpertId; // 0x00(0x08)
	struct TArray<struct FSoftObjectPath> AudioList; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioFuturePlayingID
// Size: 0x08 (Inherited: 0x00)
struct FGPAudioFuturePlayingID {
public:

	char pad_0[0x4]; // 0x00(0x04)
	int32_t ErrorCode; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GameAudioGeometry_Cylinder
// Size: 0x60 (Inherited: 0x00)
struct FGameAudioGeometry_Cylinder {
public:

	struct FTransform Transform; // 0x00(0x30)
	struct FVector Origin; // 0x30(0x0c)
	struct FVector Scale; // 0x3c(0x0c)
	float XYRadius; // 0x48(0x04)
	float ExtentZ; // 0x4c(0x04)
	int32_t SideNum; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GameAudioGeometry_OBB
// Size: 0x60 (Inherited: 0x00)
struct FGameAudioGeometry_OBB {
public:

	struct FTransform Transform; // 0x00(0x30)
	struct FVector Origin; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	struct FVector Extent; // 0x48(0x0c)
	char pad_54[0xc]; // 0x54(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.OverlapAudioEventSet
// Size: 0x18 (Inherited: 0x00)
struct FOverlapAudioEventSet {
public:

	struct UGPAudioEventAsset* EnterEvent; // 0x00(0x08)
	struct UGPAudioEventAsset* StirEvent; // 0x08(0x08)
	struct UGPAudioEventAsset* ExitEvent; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPABakeSubZone
// Size: 0x80 (Inherited: 0x00)
struct FGPABakeSubZone {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FVector SourcePoint; // 0x08(0x0c)
	struct FVector RelativeCenter; // 0x14(0x0c)
	struct FVector BakeCellSize; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<char> BakeDataArray; // 0x30(0x10)
	struct TArray<uint16_t> CellIndexArray; // 0x40(0x10)
	struct FVector BakeBoxExtent; // 0x50(0x0c)
	int32_t iOpenScale; // 0x5c(0x04)
	char pad_60[0x20]; // 0x60(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioRTPCPair
// Size: 0x10 (Inherited: 0x00)
struct FGPAudioRTPCPair {
public:

	struct UAkRtpc* RTPC; // 0x00(0x08)
	float RTPCValue; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GameAkPlayingItem
// Size: 0x40 (Inherited: 0x00)
struct FGameAkPlayingItem {
public:

	struct FName AudioTypeName; // 0x00(0x08)
	int32_t EventId; // 0x08(0x04)
	struct FGPAudioFuturePlayingID PlayingId; // 0x0c(0x08)
	float Duration; // 0x14(0x04)
	float Range; // 0x18(0x04)
	float MakeNoiseRange; // 0x1c(0x04)
	float LocalListenRange; // 0x20(0x04)
	float StartGameTime; // 0x24(0x04)
	bool IsFree; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString AudioEventName; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GameAudioGeometry
// Size: 0xd0 (Inherited: 0x00)
struct FGameAudioGeometry {
public:

	enum class EGPGameAudioGeometryType GeometryType; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FGameAudioGeometry_OBB Box; // 0x10(0x60)
	struct FGameAudioGeometry_Cylinder Cylinder; // 0x70(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.FoliageAudioInstanceConfig
// Size: 0x40 (Inherited: 0x00)
struct FFoliageAudioInstanceConfig {
public:

	/*struct TSoftObjectPtr<UStaticMesh>*/char FoliageType[0x28]; // 0x00(0x28)
	struct FOverlapAudioEventSet OverlapEvent; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPADoorWinZone
// Size: 0xc0 (Inherited: 0x80)
struct FGPADoorWinZone : public FGPABakeSubZone {
public:

	enum class EGPABakeSubZoneType ZoneType; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FVector OBBExtent; // 0x84(0x0c)
	struct FVector AxisX; // 0x90(0x0c)
	struct FVector AxisY; // 0x9c(0x0c)
	struct FVector AxisZ; // 0xa8(0x0c)
	int32_t XYRadiusSquared; // 0xb4(0x04)
	int32_t ZExtent; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAOBBBakeZone
// Size: 0xb0 (Inherited: 0x80)
struct FGPAOBBBakeZone : public FGPABakeSubZone {
public:

	struct FVector OBBExtent; // 0x80(0x0c)
	struct FVector AxisX; // 0x8c(0x0c)
	struct FVector AxisY; // 0x98(0x0c)
	struct FVector AxisZ; // 0xa4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPACylinderBakeZone
// Size: 0x88 (Inherited: 0x80)
struct FGPACylinderBakeZone : public FGPABakeSubZone {
public:

	int32_t XYRadiusSquared; // 0x80(0x04)
	int32_t ZExtent; // 0x84(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAudioRuntime.GPAudioCompositeConfig
// Size: 0x30 (Inherited: 0x08)
struct FGPAudioCompositeConfig : public FTableRowBase {
public:

	uint32_t RuleKey; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	uint64_t AudioFunctionId; // 0x10(0x08)
	enum class EGPAudioComponent ComponentType; // 0x18(0x01)
	enum class EGPAudioTag AudioTag; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FGPAudioRTPCPair RTPCPair; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
