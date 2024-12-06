
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum Hall.EMainFlowCtrlType
enum class EMainFlowCtrlType : int {
	MainFlowCtrl_SOL = 0,
	MainFlowCtrl_MP = 1,
	MainFlowCtrl_MAX = 2
};

// Enum Hall.EHallDisplayTargetType
enum class EHallDisplayTargetType : int {
	None = 0,
	Character = 1,
	Item = 2,
	Weapon = 3,
	Vehicle = 4,
	EHallDisplayTargetType_MAX = 5
};

// Enum Hall.EHallCharacterAnim
enum class EHallCharacterAnim : int {
	PrevAnim0 = 0,
	PrevAnim1 = 1,
	PrevAnim2 = 2,
	PrevAnim3 = 3,
	PrevAnim4 = 4,
	PrevAnim5 = 5,
	PrevAnim6 = 6,
	PrevAnim7 = 7,
	PrevAnim8 = 8,
	PrevAnim9 = 9,
	PrevAnim10 = 10,
	PrevAnim11 = 11,
	PrevAnim12 = 12,
	PrevAnim13 = 13,
	PrevAnim14 = 14,
	PrevAnim15 = 15,
	PrevAnim16 = 16,
	PrevAnim17 = 17,
	PrevAnim18 = 18,
	PrevAnim19 = 19,
	PrevAnim20 = 20,
	PrevAnim21 = 21,
	EHallCharacterAnim_MAX = 22
};

// Enum Hall.EPrevAnimHallCharacter
enum class EPrevAnimHallCharacter : int {
	PrevAnimCharacter0 = 0,
	PrevAnimCharacter1 = 1,
	PrevAnimCharacter2 = 2,
	PrevAnimCharacter3 = 3,
	PrevAnimCharacter4 = 4,
	PrevAnimCharacter5 = 5,
	PrevAnimCharacter6 = 6,
	PrevAnimCharacter7 = 7,
	PrevAnimCharacter8 = 8,
	PrevAnimCharacter9 = 9,
	PrevAnimCharacter10 = 10,
	PrevAnimCharacter11 = 11,
	PrevAnimCharacter12 = 12,
	PrevAnimCharacter13 = 13,
	PrevAnimCharacter14 = 14,
	PrevAnimCharacter15 = 15,
	PrevAnimCharacter16 = 16,
	PrevAnimCharacter17 = 17,
	PrevAnimCharacter18 = 18,
	PrevAnimCharacter19 = 19,
	PrevAnimCharacter20 = 20,
	PrevAnimCharacter21 = 21,
	PrevAnimCharacter22 = 22,
	PrevAnimCharacter23 = 23,
	PrevAnimCharacter24 = 24,
	EPrevAnimHallCharacter_MAX = 25
};

// Enum Hall.EHallDisplayTouchType
enum class EHallDisplayTouchType : int {
	None = 0,
	OneFingerTouch = 1,
	TwoFingerTouch = 2,
	EHallDisplayTouchType_MAX = 3
};

// Enum Hall.EHallRotationType
enum class EHallRotationType : int {
	None = 0,
	Character = 1,
	Camera = 2,
	EHallRotationType_MAX = 3
};

// Enum Hall.EHallDisplayType
enum class EHallDisplayType : int {
	None = 0,
	Mall = 1,
	Individual = 2,
	BattlePass = 3,
	Activity = 4,
	Collection = 5,
	LevelUnlock = 6,
	Blueprint = 7,
	Capture2D = 8,
	Resever1 = 9,
	Resever2 = 10,
	Resever3 = 11,
	Resever4 = 12,
	Resever5 = 13,
	EHallDisplayType_MAX = 14
};

// Enum Hall.EHallCharacterLevelSequenceState
enum class EHallCharacterLevelSequenceState : int {
	None = 0,
	Loading = 1,
	Loaded = 2,
	Processing = 3,
	Finished = 4,
	Done = 5,
	EHallCharacterLevelSequenceState_MAX = 6
};

// Enum Hall.EHallCameraTouchType
enum class EHallCameraTouchType : int {
	None = 0,
	OneFingerTouch = 1,
	TwoFingerTouch = 2,
	EHallCameraTouchType_MAX = 3
};

// Enum Hall.EHallCharacterDisplayStage
enum class EHallCharacterDisplayStage : int {
	Nothing = 0,
	HallNormal = 1,
	Hall_Hero = 2,
	Deposit = 3,
	RoleInfo = 4,
	HeroDisplay = 5,
	SettlementSucceed_Stage1 = 6,
	SettlementSucceed_Stage2 = 7,
	SettlementSucceed_Stage2_Team = 8,
	SettlementSucceed_Stage3 = 9,
	SettlementFailed_Stage1 = 10,
	SettlementFailed_Stage2 = 11,
	SettlementFailed_Stage2_Team = 12,
	IrisPreparation = 13,
	EHallCharacterDisplayStage_MAX = 14
};

// Enum Hall.EHallMainDisplayType
enum class EHallMainDisplayType : int {
	None = 0,
	Main = 1,
	Team = 2,
	Equip = 3,
	Depository = 4,
	Profile = 5,
	Hero = 6,
	Fashion = 7,
	Fashion_Head = 8,
	Fashion_Upper = 9,
	Fashion_Lower = 10,
	Fashion_Bag = 11,
	Fashion_Overview = 12,
	Weapon = 13,
	Settlement_Succeed = 14,
	Settlement_Succeed_Stage2 = 15,
	Settlement_Succeed_Team_Near = 16,
	Settlement_Succeed_Team_Far = 17,
	Settlement_Failed = 18,
	Settlement_Failed_Team = 19,
	TakingSupplies = 20,
	TakingMedicine = 21,
	HeroHallInSeq = 22,
	IrisPreparation = 23,
	Weapon_Item1 = 24,
	BattleFieldInTeamPrepare = 25,
	BattleFieldInTeam = 26,
	CrackedSettlementMVP1 = 27,
	CrackedSettlementMVP2 = 28,
	CrackedSettlementMVP3 = 29,
	CrackedSettlementMVP4 = 30,
	CrackedSettlementTeam = 31,
	CrackedSettlementMVP1Moving = 32,
	CrackedSettlementMVP2Moving = 33,
	CrackedSettlementMVP3Moving = 34,
	CrackedSettlementMVP4Moving = 35,
	CrackedSettlementTeamMoving = 36,
	WeaponZoom = 37,
	WeaponZoom_3 = 38,
	Equip2 = 39,
	EquipMedicine = 40,
	EHallMainDisplayType_MAX = 41
};

// Enum Hall.EMandelBrickStatus
enum class EMandelBrickStatus : int {
	MandelBrickStatus_UnOpen = 0,
	MandelBrickStatus_Openning70 = 1,
	MandelBrickStatus_Openning85 = 2,
	MandelBrickStatus_Openning100 = 3,
	MandelBrickStatus_Opened = 4,
	MandelBrickStatus_MAX = 5
};

// Enum Hall.EHallCharacterAnimStateMechineType
enum class EHallCharacterAnimStateMechineType : int {
	Default = 0,
	Equip = 1,
	Hero = 2,
	Team = 3,
	CrackedSettlement = 4,
	MainFlowHall = 5,
	EHallCharacterAnimStateMechineType_MAX = 6
};

// Enum Hall.EHallTeamDisplayStage
enum class EHallTeamDisplayStage : int {
	Normal = 0,
	Settlement = 1,
	EHallTeamDisplayStage_MAX = 2
};

// Enum Hall.EMatchCtrlType
enum class EMatchCtrlType : int {
	SOL_MatchCtrl = 0,
	MP_MatchCtrl = 1,
	EMatchCtrlType_MAX = 2
};

// Enum Hall.ETransformRule
enum class ETransformRule : int {
	Absolute = 0,
	Relative = 1,
	ETransformRule_MAX = 2
};

// Enum Hall.ESandBoxMapModeType
enum class ESandBoxMapModeType : int {
	None = 0,
	SafeHouse = 1,
	SOL = 2,
	SOLHighValue = 3,
	RaidSimple = 4,
	RaidNormal = 5,
	RaidHard = 6,
	ESandBoxMapModeType_MAX = 7
};

// Enum Hall.ESandBoxMapCameraTransitionMode
enum class ESandBoxMapCameraTransitionMode : int {
	None = 0,
	TopToPOI = 1,
	POIToTop = 2,
	POIToPOI = 3,
	CurToLock = 4,
	ESandBoxMapCameraTransitionMode_MAX = 5
};

// Enum Hall.ESandBoxMapState
enum class ESandBoxMapState : int {
	None = 0,
	Locked = 1,
	UnLock = 2,
	Selected = 3,
	Unselect = 4,
	LockedToUnlock = 5,
	LockedToSelected = 6,
	UnlockToSelected = 7,
	SelectedToLocked = 8,
	SelectedToUnlock = 9,
	UnlockToLocked = 10,
	ESandBoxMapState_MAX = 11
};

// ScriptStruct Hall.MainFlowSeqInfo
// Size: 0x40 (Inherited: 0x00)
struct FMainFlowSeqInfo {
public:

	struct FSoftObjectPath SeqPath; // 0x00(0x18)
	/*struct TSoftObjectPtr<ALevelSequenceActor>*/char SeqActor[0x28]; // 0x18(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.HallDisplayInfoBase
// Size: 0x4c (Inherited: 0x00)
struct FHallDisplayInfoBase {
public:

	struct TWeakObjectPtr<struct ACameraActor> CameraDefault; // 0x00(0x08)
	struct TWeakObjectPtr<struct ACameraActor> CameraNear; // 0x08(0x08)
	struct TWeakObjectPtr<struct ACameraActor> CameraFar; // 0x10(0x08)
	struct TWeakObjectPtr<struct ACameraActor> CameraStart; // 0x18(0x08)
	float CameraSpeed; // 0x20(0x04)
	enum class EGPWeaponEasingType CameraSpeedEasingType; // 0x24(0x01)
	enum class EHallDisplayTargetType DisplayTargetType; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	float LockMoveStartTargetAlpha; // 0x28(0x04)
	char bSupportCameraRollback : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float CameraRollbackSpeed; // 0x30(0x04)
	bool CameraReboundEnable; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float CameraReboundYawRange; // 0x38(0x04)
	float CameraReboundPitchRange; // 0x3c(0x04)
	float Strength; // 0x40(0x04)
	float radius; // 0x44(0x04)
	float ExpandScale; // 0x48(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.HallCharacterProxy
// Size: 0x60 (Inherited: 0x00)
struct FHallCharacterProxy {
public:

	struct AHallCharacter* SpawnedHallCharacter; // 0x00(0x08)
	struct UHallCharacterAppearanceProxyComponent* CharacterAppearanceComp; // 0x08(0x08)
	struct TMap<enum class ECharacterAvatarPart, struct USkeletalMeshComponent*> SkMeshCompCache; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.HallCharacterIKInfo
// Size: 0xc0 (Inherited: 0x00)
struct FHallCharacterIKInfo {
public:

	bool bForbidLeftHandIK; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform LeftHandIKTransform; // 0x10(0x30)
	struct UAnimSequence* LeftHandIKPose; // 0x40(0x08)
	bool bForbidRightHandIK; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FTransform RightHandIKTransform; // 0x50(0x30)
	struct UAnimSequence* RightHandIKPose; // 0x80(0x08)
	char pad_88[0x11]; // 0x88(0x11)
	enum class EAdapterItemType HandIKTargetAdapterType; // 0x99(0x01)
	char pad_9A[0x16]; // 0x9a(0x16)
	struct USkeletalMeshComponent* LeftHandIKTargetAdapter; // 0xb0(0x08)
	struct USkeletalMeshComponent* RightHandIKTargetAdapter; // 0xb8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.HallWeaponAnimInfo
// Size: 0x48 (Inherited: 0x00)
struct FHallWeaponAnimInfo {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct UObject*> LoadedAnimations; // 0x10(0x10)
	char pad_20[0x28]; // 0x20(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.HallUsingWeaponAnim
// Size: 0x148 (Inherited: 0x00)
struct FHallUsingWeaponAnim {
public:

	char pad_0[0x18]; // 0x00(0x18)
	struct UAnimSequenceBase* IdleAnim; // 0x18(0x08)
	struct UAnimSequenceBase* IdleFaceAnim; // 0x20(0x08)
	struct UAnimSequenceBase* ReadyAnim; // 0x28(0x08)
	struct UAnimSequenceBase* Idle2ReadyAnim; // 0x30(0x08)
	struct UAnimSequenceBase* Ready2IdleAnim; // 0x38(0x08)
	struct UAnimSequenceBase* PlayingAnim; // 0x40(0x08)
	struct UAnimSequenceBase* GetWeaponAnim; // 0x48(0x08)
	struct UAnimSequenceBase* IdleShowAnim; // 0x50(0x08)
	struct UAnimSequenceBase* IdleShowFaceAnim; // 0x58(0x08)
	struct UAnimSequenceBase* ArmorStartShowAnim; // 0x60(0x08)
	struct UAnimSequenceBase* ArmorLoopShowAnim; // 0x68(0x08)
	struct UAnimSequenceBase* ArmorStopShowAnim; // 0x70(0x08)
	struct UAnimSequenceBase* SettlementIdle1Anim; // 0x78(0x08)
	struct UAnimSequenceBase* SettlementIdle2Anim; // 0x80(0x08)
	struct UAnimSequenceBase* SettlementIdle3Anim; // 0x88(0x08)
	struct UAnimSequenceBase* SettlementIdle4Anim; // 0x90(0x08)
	struct UAnimSequenceBase* SettlementWalk1Anim; // 0x98(0x08)
	struct UAnimSequenceBase* SettlementWalk2Anim; // 0xa0(0x08)
	struct UAnimSequenceBase* SettlementWalk3Anim; // 0xa8(0x08)
	struct UAnimSequenceBase* SettlementWalk4Anim; // 0xb0(0x08)
	struct UAnimSequenceBase* SettlementShowAnim; // 0xb8(0x08)
	struct UAnimSequenceBase* SettlementTeamWalk1Anim; // 0xc0(0x08)
	struct UAnimSequenceBase* SettlementTeamWalk2Anim; // 0xc8(0x08)
	struct UAnimSequenceBase* SettlementTeamWalk3Anim; // 0xd0(0x08)
	struct UAnimSequenceBase* SettlementTeamWalk4Anim; // 0xd8(0x08)
	struct UAnimSequenceBase* SettlementTeamIdle1Anim; // 0xe0(0x08)
	struct UAnimSequenceBase* SettlementTeamIdle2Anim; // 0xe8(0x08)
	struct UAnimSequenceBase* SettlementTeamIdle3Anim; // 0xf0(0x08)
	struct UAnimSequenceBase* SettlementTeamIdle4Anim; // 0xf8(0x08)
	struct UAnimSequenceBase* MainFlowHallIdle1Anim; // 0x100(0x08)
	struct UAnimSequenceBase* MainFlowHallIdle2Anim; // 0x108(0x08)
	struct UAnimSequenceBase* MainFlowHallIdle3Anim; // 0x110(0x08)
	struct UAnimSequenceBase* MainFlowHallIdle4Anim; // 0x118(0x08)
	struct UAnimSequenceBase* MainFlowHallShow1Anim; // 0x120(0x08)
	struct UAnimSequenceBase* MainFlowHallShow2Anim; // 0x128(0x08)
	struct UAnimSequenceBase* MainFlowHallShow3Anim; // 0x130(0x08)
	struct UAnimSequenceBase* MainFlowHallShow4Anim; // 0x138(0x08)
	bool bHasPlayingAnim; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.HallCharacterSpawnInfo
// Size: 0x18 (Inherited: 0x00)
struct FHallCharacterSpawnInfo {
public:

	struct FString CharacterID; // 0x00(0x10)
	struct TWeakObjectPtr<struct AActor> SpawnPoint; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.MandelBrick
// Size: 0x28 (Inherited: 0x00)
struct FMandelBrick {
public:

	struct AStaticMeshActor* MandelActor; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInstanceDynamic* EmissionEffectMaterial; // 0x10(0x08)
	double ThresHold; // 0x18(0x08)
	int32_t ItemQuality; // 0x20(0x04)
	enum class EMandelBrickStatus MandelBrickStatus; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.CameraManagerParams
// Size: 0x1c (Inherited: 0x00)
struct FCameraManagerParams {
public:

	char pad_0[0x1c]; // 0x00(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.PositionConfig
// Size: 0x10 (Inherited: 0x00)
struct FPositionConfig {
public:

	bool bEnableChangePosition; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector TargetPosition; // 0x04(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.HallMainDisplayInfo
// Size: 0x4c (Inherited: 0x00)
struct FHallMainDisplayInfo {
public:

	struct TWeakObjectPtr<struct ACameraActor> CameraDefault; // 0x00(0x08)
	struct TWeakObjectPtr<struct ACameraActor> CameraNear; // 0x08(0x08)
	struct TWeakObjectPtr<struct ACameraActor> CameraFar; // 0x10(0x08)
	struct TWeakObjectPtr<struct ACameraActor> CameraStart; // 0x18(0x08)
	float CameraSpeed; // 0x20(0x04)
	enum class EGPWeaponEasingType CameraSpeedEasingType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float LockMoveStartTargetAlpha; // 0x28(0x04)
	char bSupportCameraRollback : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float CameraRollbackSpeed; // 0x30(0x04)
	bool CameraReboundEnable; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float CameraReboundYawRange; // 0x38(0x04)
	float CameraReboundPitchRange; // 0x3c(0x04)
	float Strength; // 0x40(0x04)
	bool CamerePostProcessEnable; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float radius; // 0x48(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.HallSettlementSnapshotCandidate
// Size: 0x20 (Inherited: 0x00)
struct FHallSettlementSnapshotCandidate {
public:

	struct AHallCharacter* CHARACTER; // 0x00(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x08(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent; // 0x10(0x08)
	struct UMaterialBillboardComponent* MaterialBillboardComponent; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.UIFollowInfo
// Size: 0x10 (Inherited: 0x00)
struct FUIFollowInfo {
public:

	struct TWeakObjectPtr<struct UUserWidget> UserWidget; // 0x00(0x08)
	struct TWeakObjectPtr<struct AActor> TargetPos; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.SandBoxMapCamConfig
// Size: 0x30 (Inherited: 0x00)
struct FSandBoxMapCamConfig {
public:

	struct TWeakObjectPtr<struct AActor> TargetPos; // 0x00(0x08)
	struct TWeakObjectPtr<struct ACameraActor> TargetCamera; // 0x08(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> SubLevels; // 0x10(0x10)
	struct ULevelSequence* POIToDetailSeq; // 0x20(0x08)
	struct ULevelSequence* DetailToPOISeq; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.HallCharacterMotionInfo
// Size: 0x168 (Inherited: 0x00)
struct FHallCharacterMotionInfo {
public:

	bool bEnable; // 0x00(0x01)
	bool bUseStartPosition; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector StartPosition; // 0x04(0x0c)
	struct FVector TargetPosition; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FRuntimeFloatCurve MovementCurve; // 0x20(0xa0)
	float TargetRelativeYaw; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FRuntimeFloatCurve RotationCurve; // 0xc8(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Hall.HallCharacterDisplayStageInfo
// Size: 0x188 (Inherited: 0x00)
struct FHallCharacterDisplayStageInfo {
public:

	struct FString DisplayCharacterID; // 0x00(0x10)
	struct UClass* CharacterClass; // 0x10(0x08)
	struct TWeakObjectPtr<struct AActor> SpawnPoint; // 0x18(0x08)
	struct FHallCharacterMotionInfo MotionInfo; // 0x20(0x168)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
