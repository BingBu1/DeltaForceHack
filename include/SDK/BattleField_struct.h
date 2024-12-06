
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum BattleField.EBattleState
enum class EBattleState : int {
	SelfCapturing = 0,
	OpponentCapturing = 1,
	Battling = 2,
	EBattleState_MAX = 3
};

// Enum BattleField.ECaptureState
enum class ECaptureState : int {
	Captured = 0,
	CapturedButBattling = 1,
	Neutral = 2,
	ECaptureState_MAX = 3
};

// Enum BattleField.EGameFeature
enum class EGameFeature : int {
	Score = 0,
	KillGetScore = 1,
	CaptureGetScore = 2,
	ReDepoly = 3,
	CaptureCanReborn = 4,
	TeamMateReBorn = 5,
	EGameFeature_MAX = 6
};

// Enum BattleField.EGameStateChange
enum class EGameStateChange : int {
	CampScore = 0,
	MVP = 1,
	EGameStateChange_MAX = 2
};

// Enum BattleField.EBattleFieldMapMarkerType
enum class EBattleFieldMapMarkerType : int {
	None = 0,
	CampMate = 1,
	CampMateBeKilled = 2,
	EnemyOnFire = 3,
	TeamMateBeKilled = 4,
	EnemyBeKilled = 5,
	MarkedEnemy = 6,
	EBattleFieldMapMarkerType_MAX = 7
};

// Enum BattleField.EBackGroundMusicType
enum class EBackGroundMusicType : int {
	None = 0,
	EnterTheGame = 1,
	GameStart = 2,
	Death = 3,
	Deploy = 4,
	Revive = 5,
	Sector3BGM = 6,
	EBackGroundMusicType_MAX = 7
};

// Enum BattleField.EBGMContentType
enum class EBGMContentType : int {
	Normal = 0,
	DFvsHawke = 1,
	EBGMContentType_MAX = 2
};

// Enum BattleField.EBattleFieldTipType
enum class EBattleFieldTipType : int {
	None = 0,
	GameStart = 1,
	LeaveWarZoneTemporarily = 2,
	DieforLeaveWarZone = 3,
	DominantLeadsby5 = 4,
	UnderdogDownby5 = 5,
	DominantScoresMoreThanHalf = 6,
	DominantScoresNinetyPercent = 7,
	GameOver = 8,
	Settlement = 9,
	EnemyTakeOverOccupySuccessfully = 10,
	TakeOverOccupySuccessfully = 11,
	UnderdogOvertakes = 12,
	HalfTheGameTime = 13,
	OnlyTenPercentOfTheGameTimeIsLeft = 14,
	BreakthroughGameStart = 15,
	BreakthroughSectorActived = 16,
	BreakthroughSectorOccupyStatusChanged = 17,
	BreakthroughStayInSectorOccupyed = 18,
	BreakthroughEnemyTakeOverOccupyMoreThanHalf = 19,
	BreakthroughDesperateCounterattack = 20,
	BreakthroughHalfTimeRemain = 21,
	BreakthroughNoTime = 22,
	BreakthroughTakeOverOccupyMoreThanHalf = 23,
	EBattleFieldTipType_MAX = 24
};

// Enum BattleField.EPlayerAudioType
enum class EPlayerAudioType : int {
	None = 0,
	GameFirstKill = 1,
	TeammateIntoSuppressedState = 2,
	MedicPullsUpTeammate = 3,
	TripleKill = 4,
	TeammateTripleKill = 5,
	ResidualBloodAntiKill = 6,
	ResidualBloodAntiKillByEnemy = 7,
	PlayerChangeBullets = 8,
	BeingHit = 9,
	IntoSuppressedState = 10,
	Grenade = 11,
	ThrowableInTwoM = 12,
	BeingGrenade = 13,
	HelpMe1 = 14,
	HelpMe2 = 15,
	CaptainMakeTarget = 16,
	Medic = 17,
	NeedAmmo = 18,
	GiveTeamMateAmmo = 19,
	PreventEnemyFromOccupyByEnemy = 20,
	PreventEnemyFromOccupyByTeamMate = 21,
	AAAAAAAAAAAA = 22,
	SpotSniper = 23,
	EnemyDownBySniper = 24,
	ChargeEnemyBuilding = 25,
	ChargeEnemyBuildingByTeamMate = 26,
	TargetMarked = 27,
	SpotEnemy = 28,
	KnockDownEnemy = 29,
	EnemyKnockedDown = 30,
	KnockDownEnemyByHead = 31,
	EnemyKnockedDownByHead = 32,
	WatchOutExplosive = 33,
	Death = 34,
	Dialogue_AmmoReceived = 35,
	Dialogue_Recover = 36,
	Dialogue_Die = 37,
	EPlayerAudioType_MAX = 38
};

// Enum BattleField.EBroadcastAudioType
enum class EBroadcastAudioType : int {
	None = 0,
	GameStart = 1,
	LeaveWarZoneTemporarily = 2,
	DieforLeaveWarZone = 3,
	DominantLeadsby5 = 4,
	DominantScoresMoreThanHalf = 5,
	DominantScoresNinetyPercent = 6,
	UnderdogOvertakes = 7,
	GameOver = 8,
	TakeOverOccupyMoreThanHalf = 9,
	TakeOverOccupySuccessfully = 10,
	EnemyTakeOverOccupyMoreThanHalf = 11,
	EnemyTakeOverOccupySuccessfully = 12,
	BreakthroughGameStart = 13,
	BreakthroughSectorActived = 14,
	BreakthroughSectorOccupyStatusChanged = 15,
	BreakthroughStayInSectorOccupyed = 16,
	BreakthroughEnemyTakeOverOccupyMoreThanHalf = 17,
	BreakthroughDesperateCounterattack = 18,
	BreakthroughHalfTimeRemain = 19,
	BreakthroughNoTime = 20,
	BreakthroughSector2Win = 21,
	EBroadcastAudioType_MAX = 22
};

// Enum BattleField.EPlayerAudioListener
enum class EPlayerAudioListener : int {
	All = 0,
	Owner = 1,
	Team = 2,
	TeamSelf = 3,
	SameCamp = 4,
	SameCampWithoutSelf = 5,
	EPlayerAudioListener_MAX = 6
};

// Enum BattleField.EWeakTipsViewType
enum class EWeakTipsViewType : int {
	None = 0,
	TipsWeakBroadcast = 1,
	IconWeakBroadcast = 2,
	NumberWeakBroadcast = 3,
	IconNumberWeakBroadcast = 4,
	EWeakTipsViewType_MAX = 5
};

// Enum BattleField.EStrongTipsViewType
enum class EStrongTipsViewType : int {
	None = 0,
	SpecialStrongBroadcast = 1,
	GeneralStrongBroadcast = 2,
	WirelessDialogBroadcast = 3,
	IconStrongBroadcast = 4,
	EStrongTipsViewType_MAX = 5
};

// Enum BattleField.ETipLevelType
enum class ETipLevelType : int {
	None = 0,
	Strong = 1,
	Weak = 2,
	Order = 3,
	ETipLevelType_MAX = 4
};

// Enum BattleField.ETipColorType
enum class ETipColorType : int {
	Normal = 0,
	Positive = 1,
	Negative = 2,
	ETipColorType_MAX = 3
};

// Enum BattleField.EContentType
enum class EContentType : int {
	Normal = 0,
	CampDiff = 1,
	Custom = 2,
	EContentType_MAX = 3
};

// Enum BattleField.ENotifyListener
enum class ENotifyListener : int {
	None = 0,
	All = 1,
	TargetPlayer = 2,
	CurrentDominantCamp = 3,
	SameCamp = 4,
	EnemyCamp = 5,
	OffenseCamp = 6,
	DefenseCamp = 7,
	SameTeam = 8,
	ENotifyListener_MAX = 9
};

// Enum BattleField.EPropBindingType
enum class EPropBindingType : int {
	BindingBinded = 0,
	BindingNotBind = 1,
	BindingTeammate = 2,
	EPropBindingType_MAX = 3
};

// Enum BattleField.EPvpAIThreatLevel
enum class EPvpAIThreatLevel : int {
	Undefined = 0,
	Low = 1,
	Middle = 2,
	High = 3,
	Max = 4
};

// Enum BattleField.EPvpAIVisibleState
enum class EPvpAIVisibleState : int {
	Block = 0,
	Foliage = 1,
	Visible = 2,
	EPvpAIVisibleState_MAX = 3
};

// Enum BattleField.EPVPAIJobType
enum class EPVPAIJobType : int {
	MoveToCapturePoint_Camp = 0,
	MoveToCapturePoint_Flank = 1,
	Invalid = 2,
	EPVPAIJobType_MAX = 3
};

// Enum BattleField.EPoseType
enum class EPoseType : int {
	Low = 0,
	High = 1,
	Invalid = 2,
	EPoseType_MAX = 3
};

// Enum BattleField.EPvpAIJobAssignType
enum class EPvpAIJobAssignType : int {
	AbortOld = 0,
	Interrupt = 1,
	Enqueue = 2,
	EPvpAIJobAssignType_MAX = 3
};

// ScriptStruct BattleField.BattleFieldTipInfo
// Size: 0x20 (Inherited: 0x00)
struct FBattleFieldTipInfo {
public:

	enum class EBattleFieldTipType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TriggerTime; // 0x04(0x04)
	uint64_t PlayerUin; // 0x08(0x08)
	int32_t PlayerCamp; // 0x10(0x04)
	int32_t CurDominantCamp; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.BattleFieldAudioInfo
// Size: 0x30 (Inherited: 0x00)
struct FBattleFieldAudioInfo {
public:

	bool bIsPlayerAudio; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Type; // 0x04(0x04)
	float TriggerTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	uint64_t PlayerUin; // 0x10(0x08)
	int32_t PlayerCamp; // 0x18(0x04)
	int32_t CurDominantCamp; // 0x1c(0x04)
	struct FName CapturePointName; // 0x20(0x08)
	struct ACHARACTER* PlayerCharacter; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PlayerKillAssistInfo
// Size: 0xb0 (Inherited: 0x00)
struct FPlayerKillAssistInfo {
public:

	bool bIsKill; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t KillerOrAssisterUin; // 0x08(0x08)
	uint64_t BeKillederUin; // 0x10(0x08)
	bool bBeKillerIsBot; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	uint32_t ArmedForceID; // 0x1c(0x04)
	int32_t CurrentSelectedBagID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	uint64_t WeaponID; // 0x28(0x08)
	struct TArray<uint64_t> WeaponModuleID; // 0x30(0x10)
	struct TMap<uint64_t, float> WeaponDamage; // 0x40(0x50)
	float TotalDamage; // 0x90(0x04)
	float Timestamp; // 0x94(0x04)
	struct FVector KillerPos; // 0x98(0x0c)
	struct FVector BeKillerPos; // 0xa4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.BackGroundMusicRow
// Size: 0x20 (Inherited: 0x08)
struct FBackGroundMusicRow : public FTableRowBase {
public:

	enum class EBackGroundMusicType Type; // 0x08(0x01)
	enum class EBGMContentType ContentType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char AudioEvents[0x10]; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TipsDataRow
// Size: 0x48 (Inherited: 0x08)
struct FTipsDataRow : public FTableRowBase {
public:

	enum class EBattleFieldTipType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Intervals; // 0x0c(0x04)
	int32_t ValidDuration; // 0x10(0x04)
	enum class ENotifyListener Listener; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FText> Texts; // 0x18(0x10)
	float ShowDuration; // 0x28(0x04)
	enum class EContentType ContentType; // 0x2c(0x01)
	enum class ETipColorType ColorType; // 0x2d(0x01)
	enum class ETipLevelType StrongLevelType; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
	int32_t Order; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char AudioEvents[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PlayerAudioDataRow
// Size: 0x48 (Inherited: 0x08)
struct FPlayerAudioDataRow : public FTableRowBase {
public:

	enum class EPlayerAudioType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Order; // 0x0c(0x04)
	float Intervals; // 0x10(0x04)
	int32_t ValidDuration; // 0x14(0x04)
	float FadeDistance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char DeltaAudioEvents[0x10]; // 0x20(0x10)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char HaavkAudioEvents[0x10]; // 0x30(0x10)
	enum class EPlayerAudioListener AudioListener; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.BroadcastAudioDataRow
// Size: 0x30 (Inherited: 0x08)
struct FBroadcastAudioDataRow : public FTableRowBase {
public:

	enum class EBroadcastAudioType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Intervals; // 0x0c(0x04)
	int32_t ValidDuration; // 0x10(0x04)
	enum class ENotifyListener Listener; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char AudioEvents[0x10]; // 0x18(0x10)
	enum class EContentType ContentType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.SupportAbilityInfo
// Size: 0x08 (Inherited: 0x00)
struct FSupportAbilityInfo {
public:

	int32_t Score; // 0x00(0x04)
	int32_t LevelScore; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.WorkingHeroAndBag
// Size: 0x18 (Inherited: 0x00)
struct FWorkingHeroAndBag {
public:

	uint32_t ArmedForceID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	uint64_t ExpertId; // 0x08(0x08)
	uint64_t CurrentSelectedHeroID; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PBWeaponAttrInfo
// Size: 0x10 (Inherited: 0x00)
struct FPBWeaponAttrInfo {
public:

	int64_t TuneId; // 0x00(0x08)
	float TuneValue; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.BreakthroughFakeHeroData
// Size: 0x58 (Inherited: 0x10)
struct FBreakthroughFakeHeroData : public FDescRowBase {
public:

	uint64_t HeroID; // 0x10(0x08)
	int32_t ArmedForceID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	uint64_t ExpertId; // 0x20(0x08)
	bool bUnlocked; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	uint64_t HeroFashionID; // 0x30(0x08)
	uint64_t MainWeaponID; // 0x38(0x08)
	uint64_t SecondaryWeaponID; // 0x40(0x08)
	uint64_t MeleeWeaponID; // 0x48(0x08)
	uint64_t SoldierPropsID; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TDMSoldierPropsStore
// Size: 0xa0 (Inherited: 0x00)
struct FTDMSoldierPropsStore {
public:

	char pad_0[0xa0]; // 0x00(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TDMWeaponPresetStore
// Size: 0x50 (Inherited: 0x00)
struct FTDMWeaponPresetStore {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TDMWeaponPreset
// Size: 0x5b8 (Inherited: 0x00)
struct FTDMWeaponPreset {
public:

	struct FInventoryItemInfo InventoryItemInfo; // 0x00(0x538)
	struct FMPInventoryItemInfo MPInventoryItemInfo; // 0x538(0x68)
	struct FString PresetName; // 0x5a0(0x10)
	int32_t Index; // 0x5b0(0x04)
	bool bAvailable; // 0x5b4(0x01)
	bool bIsEmpty; // 0x5b5(0x01)
	char pad_5B6[0x2]; // 0x5b6(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TDMWeaponStore
// Size: 0xa0 (Inherited: 0x00)
struct FTDMWeaponStore {
public:

	char pad_0[0xa0]; // 0x00(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TDMBagItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FTDMBagItemInfo {
public:

	enum class EAttachPosition AttachPosition; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	uint64_t ItemID; // 0x08(0x08)
	uint64_t ItemGid; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TDMHero
// Size: 0x90 (Inherited: 0x00)
struct FTDMHero {
public:

	uint64_t HeroID; // 0x00(0x08)
	uint64_t HeroFashionID; // 0x08(0x08)
	uint64_t ExpertId; // 0x10(0x08)
	char pad_18[0x78]; // 0x18(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TDMArmedPresetRow
// Size: 0x60 (Inherited: 0x10)
struct FTDMArmedPresetRow : public FDescRowBase {
public:

	uint32_t ID; // 0x10(0x04)
	uint32_t ExpertId; // 0x14(0x04)
	uint32_t ArmedForceID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ArmedForceDesc; // 0x20(0x10)
	uint32_t pos; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString PosDesc; // 0x38(0x10)
	uint64_t PropId; // 0x48(0x08)
	struct FString Desc; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAIFightBehavior
// Size: 0x88 (Inherited: 0x10)
struct FPvpAIFightBehavior : public FDescRowBase {
public:

	/*struct TSoftObjectPtr<UBehaviorTree>*/char HighThreatBehavior[0x28]; // 0x10(0x28)
	/*struct TSoftObjectPtr<UBehaviorTree>*/char MiddleThreatBehavior[0x28]; // 0x38(0x28)
	/*struct TSoftObjectPtr<UBehaviorTree>*/char LowThreatBehavior[0x28]; // 0x60(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAiRescueWill
// Size: 0x20 (Inherited: 0x10)
struct FPvpAiRescueWill : public FDescRowBase {
public:

	enum class EPvpAIThreatLevel EnvConditionMainTargetThreat; // 0x10(0x01)
	enum class EPvpAIThreatLevel EnvConditionMainTargetVulnerable; // 0x11(0x01)
	enum class EPvpAIThreatLevel EnvConditionAmbientThreat; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float MaxDistance; // 0x14(0x04)
	float CD; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAiAntiVehicleWill
// Size: 0x20 (Inherited: 0x10)
struct FPvpAiAntiVehicleWill : public FDescRowBase {
public:

	enum class EPvpAIThreatLevel EnvConditionMainTargetThreat; // 0x10(0x01)
	enum class EPvpAIThreatLevel EnvConditionMainTargetVulnerable; // 0x11(0x01)
	enum class EPvpAIThreatLevel EnvConditionAmbientThreat; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float MaxDistance; // 0x14(0x04)
	int32_t LoopTimes; // 0x18(0x04)
	float CD; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAIRunBehaviorDebugInfo
// Size: 0x60 (Inherited: 0x00)
struct FPvpAIRunBehaviorDebugInfo {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.AgainstVehicleConfig
// Size: 0x1c (Inherited: 0x00)
struct FAgainstVehicleConfig {
public:

	struct TWeakObjectPtr<struct ADFMVehicleBase> Vehicle; // 0x00(0x08)
	float SightThreatValue; // 0x08(0x04)
	float DamageThreatValue; // 0x0c(0x04)
	float AirHitThreatValue; // 0x10(0x04)
	float ThreatValue; // 0x14(0x04)
	float VulnerableValue; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAIVehicleTargetInfo
// Size: 0x1c (Inherited: 0x00)
struct FPvpAIVehicleTargetInfo {
public:

	struct TWeakObjectPtr<struct AGPVehicleBase> Vehicle; // 0x00(0x08)
	float SightThreat; // 0x08(0x04)
	float DamageThreat; // 0x0c(0x04)
	float AirhitThreat; // 0x10(0x04)
	float ThreatValue; // 0x14(0x04)
	float VulnerableValue; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAIFightTargetInfo
// Size: 0x28 (Inherited: 0x00)
struct FPvpAIFightTargetInfo {
public:

	struct ADFMCharacter* CHARACTER; // 0x00(0x08)
	float ThreatValue; // 0x08(0x04)
	float VulnerableValue; // 0x0c(0x04)
	float FinalScore; // 0x10(0x04)
	enum class EPvpAIThreatLevel ThreatLevel; // 0x14(0x01)
	enum class EPvpAIThreatLevel VulnerableLevel; // 0x15(0x01)
	char pad_16[0x12]; // 0x16(0x12)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TargetFiringRatio
// Size: 0x08 (Inherited: 0x00)
struct FTargetFiringRatio {
public:

	float IsFiring; // 0x00(0x04)
	float IsNotFiring; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TargetPoseRatio
// Size: 0x0c (Inherited: 0x00)
struct FTargetPoseRatio {
public:

	float Stand; // 0x00(0x04)
	float Crouch; // 0x04(0x04)
	float Prone; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TargetVisionRatio
// Size: 0x08 (Inherited: 0x00)
struct FTargetVisionRatio {
public:

	float HasVision; // 0x00(0x04)
	float HasNoVision; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.SelfVisionBlockRatio
// Size: 0x0c (Inherited: 0x00)
struct FSelfVisionBlockRatio {
public:

	float NotBlocked; // 0x00(0x04)
	float FoliageBlocked; // 0x04(0x04)
	float FullyBlocked; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.ThreatThreshold
// Size: 0x08 (Inherited: 0x00)
struct FThreatThreshold {
public:

	float Middle; // 0x00(0x04)
	float High; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAICoverPoint
// Size: 0x30 (Inherited: 0x00)
struct FPvpAICoverPoint {
public:

	char pad_0[0x20]; // 0x00(0x20)
	bool bIsValid; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector Location; // 0x24(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAiOverviewCampInfo
// Size: 0x88 (Inherited: 0x00)
struct FPvpAiOverviewCampInfo {
public:

	struct FString DifficultPool; // 0x00(0x10)
	int32_t BotNum; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FPvpAiOverviewNameValPair> ArmedForceNumInfo; // 0x18(0x10)
	struct TArray<struct FPvpAiOverviewNameValPair> FightStyleNumInfo; // 0x28(0x10)
	struct TArray<struct FPvpAiOverviewNameValPair> DifficultNumInfo; // 0x38(0x10)
	struct FString StylePoolName; // 0x48(0x10)
	struct TArray<struct FPvpAiOverviewNameValPair> StyleNumInfo; // 0x58(0x10)
	int32_t KillCount; // 0x68(0x04)
	int32_t KillCountRealPlayer; // 0x6c(0x04)
	int32_t ImpDeathCount; // 0x70(0x04)
	int32_t DeathCount; // 0x74(0x04)
	int32_t SuicideCount; // 0x78(0x04)
	int32_t AssistsCount; // 0x7c(0x04)
	int32_t RescueCount; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAiOverviewNameValPair
// Size: 0x18 (Inherited: 0x00)
struct FPvpAiOverviewNameValPair {
public:

	struct FString Name; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAiOverviewObjectiveInfo
// Size: 0x28 (Inherited: 0x00)
struct FPvpAiOverviewObjectiveInfo {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpImpendingDeathSosInfo
// Size: 0x30 (Inherited: 0x00)
struct FPvpImpendingDeathSosInfo {
public:

	struct AGPCharacterBase* SosCharacter; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
	struct TArray<struct AGPCharacter*> Helpers; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpImpendingDeathSosAroundEnemy
// Size: 0x20 (Inherited: 0x00)
struct FPvpImpendingDeathSosAroundEnemy {
public:

	struct APawn* Enemy; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpSectorBattleRouteInfo
// Size: 0x20 (Inherited: 0x00)
struct FPvpSectorBattleRouteInfo {
public:

	struct ABattleRoutePoint* SectorPoint; // 0x00(0x08)
	struct TArray<struct ABattleRoutePoint*> FlankPoints; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAIPeekInfo
// Size: 0x20 (Inherited: 0x00)
struct FPvpAIPeekInfo {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PvpAIPosePoint
// Size: 0x10 (Inherited: 0x00)
struct FPvpAIPosePoint {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.WallCoverPoint
// Size: 0x24 (Inherited: 0x00)
struct FWallCoverPoint {
public:

	struct FVector WallLeft; // 0x00(0x0c)
	struct FVector WallRight; // 0x0c(0x0c)
	struct FVector ItemLocation; // 0x18(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.PBWeaponInfo
// Size: 0x18 (Inherited: 0x00)
struct FPBWeaponInfo {
public:

	int64_t Exp; // 0x00(0x08)
	struct TArray<struct FPBWeaponAttrInfo> AttrSet; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TDMBag
// Size: 0x20 (Inherited: 0x00)
struct FTDMBag {
public:

	uint64_t BagId; // 0x00(0x08)
	struct TArray<struct FTDMBagItemInfo> ItemArr; // 0x08(0x10)
	bool bDirtyInLastTimeRedeployWithThisBag; // 0x18(0x01)
	bool bDirtyInThisRound; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.BreakthroughFakeWeaponData
// Size: 0x48 (Inherited: 0x10)
struct FBreakthroughFakeWeaponData : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	uint64_t ItemGid; // 0x18(0x08)
	struct TArray<uint64_t> ComponentItemGIDs; // 0x20(0x10)
	struct FPBWeaponInfo WeaponInfo; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.BreakthroughFakeWeaponComponentData
// Size: 0x58 (Inherited: 0x10)
struct FBreakthroughFakeWeaponComponentData : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	uint64_t ItemGid; // 0x18(0x08)
	int32_t Slot; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FPBWeaponInfo WeaponInfo; // 0x28(0x18)
	enum class EPropBindingType BindType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<uint64_t> ComponentItemGIDs; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BattleField.TDMArm
// Size: 0x40 (Inherited: 0x00)
struct FTDMArm {
public:

	int32_t ArmedForceID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	uint64_t CurrentUseHeroID; // 0x08(0x08)
	struct TArray<struct FTDMHero> Heros; // 0x10(0x10)
	struct FTDMBag Bag; // 0x20(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
