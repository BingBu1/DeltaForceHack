
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMMission.ELayerActorCheck
enum class ELayerActorCheck : int {
	Common = 0,
	Alive = 1,
	NoAWheeledVehicle = 2,
	ELayerActorCheck_MAX = 3
};

// Enum DFMMission.EMissionLayerOperate
enum class EMissionLayerOperate : int {
	None = 0,
	Show = 1,
	Hide = 2,
	EnableInteract = 3,
	DisableInteract = 4,
	Destroy = 5,
	Get = 6,
	GetAlive = 7,
	EMissionLayerOperate_MAX = 8
};

// Enum DFMMission.EMissionSpawnerType
enum class EMissionSpawnerType : int {
	Monster = 0,
	NPC = 1,
	EMissionSpawnerType_MAX = 2
};

// Enum DFMMission.EMissionActionType
enum class EMissionActionType : int {
	None = 0,
	Quest = 1,
	EMissionActionType_MAX = 2
};

// Enum DFMMission.ERaidInterCondition
enum class ERaidInterCondition : int {
	AllDie = 0,
	TimeOut = 1,
	ERaidInterCondition_MAX = 2
};

// Enum DFMMission.EMissionQuestLifeType
enum class EMissionQuestLifeType : int {
	Save = 0,
	AutoRemove = 1,
	AutoClear = 2,
	MAX = 3
};

// Enum DFMMission.EMissionEventLayer
enum class EMissionEventLayer : int {
	World = 0,
	DaJieAn = 1,
	MAX = 2
};

// Enum DFMMission.EMissionState
enum class EMissionState : int {
	Init = 0,
	UnActivate = 1,
	LoadLevel = 2,
	Activate = 3,
	MAX = 4
};

// Enum DFMMission.ETriggerAreaFlag
enum class ETriggerAreaFlag : int {
	None = 0,
	InTriggerArea = 1,
	NotInTriggerArea = 2,
	ETriggerAreaFlag_MAX = 3
};

// ScriptStruct DFMMission.WorldActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FWorldActorInfo {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMMission.WorldActorContent
// Size: 0x18 (Inherited: 0x00)
struct FWorldActorContent {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMMission.MissionStageTriggerInfo
// Size: 0x20 (Inherited: 0x00)
struct FMissionStageTriggerInfo {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMMission.MissionTriggerActionInfo
// Size: 0x01 (Inherited: 0x00)
struct FMissionTriggerActionInfo {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMMission.MissionTriggerInfo
// Size: 0x04 (Inherited: 0x00)
struct FMissionTriggerInfo {
public:

	char pad_0[0x4]; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMMission.TaskGroupState
// Size: 0x40 (Inherited: 0x00)
struct FTaskGroupState {
public:

	char pad_0[0x40]; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMMission.WorldTargetState
// Size: 0x28 (Inherited: 0x00)
struct FWorldTargetState {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMMission.MissionTargetRequest
// Size: 0x20 (Inherited: 0x00)
struct FMissionTargetRequest {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMMission.MissionMapMarkerData
// Size: 0x02 (Inherited: 0x00)
struct FMissionMapMarkerData {
public:

	char pad_0[0x2]; // 0x00(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMMission.PlayerLevelState
// Size: 0x08 (Inherited: 0x00)
struct FPlayerLevelState {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMMission.LevelStreamInstanceInfo
// Size: 0x38 (Inherited: 0x00)
struct FLevelStreamInstanceInfo {
public:

	struct FName LevelName; // 0x00(0x08)
	struct FName PackageName; // 0x08(0x08)
	struct FName PackageNameToLoad; // 0x10(0x08)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	char bShouldBeLoaded : 1; // 0x30(0x01)
	char bShouldBeVisible : 1; // 0x30(0x01)
	char bShouldBlockOnLoad : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t LodIndex; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
