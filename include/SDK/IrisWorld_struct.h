
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum IrisWorld.ERaidStage
enum class ERaidStage : int {
	NONE = 0,
	RAID_DISPLAY = 1,
	CONDITION_SELECT = 2,
	MISSION_DECIDE = 3,
	MISSION_PREPARE = 4,
	MISSION_START = 5,
	MISSION_COMPLETE = 6,
	RAID_COMPLETE = 7,
	RAID_MISSION_FAILED = 8,
	RAID_ALLDIE = 9,
	RAID_FAILED = 10,
	ERaidStage_MAX = 11
};

// Enum IrisWorld.EPVEBuyItemErrorCode
enum class EPVEBuyItemErrorCode : int {
	Success = 0,
	ItemNotExit = 1,
	AddToInvError = 2,
	MeritIsNotEnough = 3,
	EPVEBuyItemErrorCode_MAX = 4
};

// Enum IrisWorld.ESubGameModeType
enum class ESubGameModeType : int {
	None = 0,
	FrontEndStart = 1,
	GunSmith = 2,
	SafeHouse = 3,
	ESubGameModeType_MAX = 4
};

// Enum IrisWorld.EShContainerType
enum class EShContainerType : int {
	Reward = 0,
	Collection1 = 1,
	Collection2 = 2,
	Collection3 = 3,
	EShContainerType_MAX = 4
};

// Enum IrisWorld.EStrongholdState
enum class EStrongholdState : int {
	EFailed = 0,
	EInProgress = 1,
	EOccupied = 2,
	EStrongholdState_MAX = 3
};

// Enum IrisWorld.ERaidMapMarkerType
enum class ERaidMapMarkerType : int {
	None = 0,
	Valkyrae = 1,
	Train = 2,
	LiLi = 3,
	EnemyVehicle = 4,
	ArmoredVehicle = 5,
	Tank = 6,
	EnemyOnFire = 7,
	EnemyBeSpotted = 8,
	ERaidMapMarkerType_MAX = 9
};

// ScriptStruct IrisWorld.RaidVoteInfo
// Size: 0x28 (Inherited: 0x00)
struct FRaidVoteInfo {
public:

	uint32_t RaidID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t QuestID; // 0x08(0x08)
	struct TArray<uint64_t> Players; // 0x10(0x10)
	char VoteCount; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.IrisStartSpotRow
// Size: 0x20 (Inherited: 0x10)
struct FIrisStartSpotRow : public FDescRowBase {
public:

	uint32_t GroupID; // 0x10(0x04)
	struct FVector GourpLocation; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.GameRuleContext
// Size: 0x10 (Inherited: 0x00)
struct FGameRuleContext {
public:

	enum class EGameRuleType StartupGameRule; // 0x00(0x01)
	enum class EGameRuleType PrevRule; // 0x01(0x01)
	enum class EGameRuleType NextRule; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	uint64_t CurrentRaidID; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.RaidStateInfo
// Size: 0x18 (Inherited: 0x00)
struct FRaidStateInfo {
public:

	uint32_t CurRaidEntityID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t CurQuestID; // 0x08(0x08)
	enum class ERaidStage RaidStage; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t RaidTimespan; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.StrongholdRow
// Size: 0x100 (Inherited: 0x10)
struct FStrongholdRow : public FDescRowBase {
public:

	uint32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	uint32_t Type; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FName> UnoccupyDrama; // 0x38(0x10)
	struct FName UnoccupyLevel; // 0x48(0x08)
	struct TArray<struct FName> OccupiedDrama; // 0x50(0x10)
	struct FName OccupiedLevel; // 0x60(0x08)
	int32_t StartSpotGroupID; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<uint64_t> MissionIDs; // 0x70(0x10)
	struct TArray<struct FSHItem> RewardItems; // 0x80(0x10)
	uint32_t RewardBoxID; // 0x90(0x04)
	struct FName RewardSpawnerTag; // 0x94(0x08)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct FSHItem> CollectionItems1; // 0xa0(0x10)
	uint32_t CollectionBoxID1; // 0xb0(0x04)
	struct FName CollectionContainerTag1; // 0xb4(0x08)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FSHItem> CollectionItems2; // 0xc0(0x10)
	uint32_t CollectionBoxID2; // 0xd0(0x04)
	struct FName CollectionContainerTag2; // 0xd4(0x08)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct FSHItem> CollectionItems3; // 0xe0(0x10)
	uint32_t CollectionBoxID3; // 0xf0(0x04)
	struct FName CollectionContainerTag3; // 0xf4(0x08)
	char pad_FC[0x4]; // 0xfc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.SHItem
// Size: 0x10 (Inherited: 0x00)
struct FSHItem {
public:

	uint64_t ItemID; // 0x00(0x08)
	int32_t Cnt; // 0x08(0x04)
	int32_t BindType; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.StrongholdData
// Size: 0xb0 (Inherited: 0x00)
struct FStrongholdData {
public:

	char pad_0[0xb0]; // 0x00(0xb0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.ShContainerDesc
// Size: 0x08 (Inherited: 0x00)
struct FShContainerDesc {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.IrisResStateInfo
// Size: 0x01 (Inherited: 0x00)
struct FIrisResStateInfo {
public:

	bool ResOpenState; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.IrisCheckPoint
// Size: 0x08 (Inherited: 0x00)
struct FIrisCheckPoint {
public:

	int32_t SpotGroupID; // 0x00(0x04)
	bool bEnableCheckPoint; // 0x04(0x01)
	bool bEnableFindNearestSpotGroup; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.RaidRow
// Size: 0x68 (Inherited: 0x10)
struct FRaidRow : public FDescRowBase {
public:

	uint32_t RaidID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText RaidName; // 0x18(0x18)
	struct FText RaidDesc; // 0x30(0x18)
	struct TArray<uint32_t> RaidGroup; // 0x48(0x10)
	struct TArray<uint64_t> RaidStartSpotGroups; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.RaidFavorebleConditons
// Size: 0x38 (Inherited: 0x10)
struct FRaidFavorebleConditons : public FDescRowBase {
public:

	uint32_t ConditionID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t OwnerQuestID; // 0x18(0x08)
	struct FString ConditionDesc; // 0x20(0x10)
	uint64_t ItemID; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.RaidEntityRow
// Size: 0x148 (Inherited: 0x10)
struct FRaidEntityRow : public FDescRowBase {
public:

	uint32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct FText RaidActionPlan; // 0x30(0x18)
	char RaidLevel; // 0x48(0x01)
	bool bPVERaid; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	struct FName RaidIntroCSTag; // 0x4c(0x08)
	float RaidDisplayTime; // 0x54(0x04)
	float ConditionSelectCountdown; // 0x58(0x04)
	float MissionDecideCountdown; // 0x5c(0x04)
	float MissionCompleteDelayTime; // 0x60(0x04)
	float DecisionTime; // 0x64(0x04)
	float RaidFailCountdown; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<int64_t> RaidQuestIDList; // 0x70(0x10)
	struct TMap<int64_t, struct FName> QuestFadeTextMap; // 0x80(0x50)
	struct TMap<int64_t, float> QuestFadeTimeOut; // 0xd0(0x50)
	struct TArray<uint64_t> FavorableConditions; // 0x120(0x10)
	struct TArray<struct FSoftObjectPath> RaidMissionBg; // 0x130(0x10)
	float DeadBodyCreateDrugRate; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.MissionSettlementData
// Size: 0x18 (Inherited: 0x00)
struct FMissionSettlementData {
public:

	int32_t RaidID; // 0x00(0x04)
	int32_t QuestID; // 0x04(0x04)
	struct TArray<int32_t> ItemArray; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct IrisWorld.IrisStartSpotGroup
// Size: 0x18 (Inherited: 0x00)
struct FIrisStartSpotGroup {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
