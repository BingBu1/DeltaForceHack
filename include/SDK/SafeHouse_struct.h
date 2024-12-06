
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum SafeHouse.DepartmentTitleState
enum class DepartmentTitleState : int {
	None = 0,
	Hide = 1,
	Show = 2,
	DepartmentTitleState_MAX = 3
};

// Enum SafeHouse.IconState
enum class IconState : int {
	None = 0,
	Hide = 1,
	ShowIcon = 2,
	ShowName = 3,
	IconState_MAX = 4
};

// Enum SafeHouse.IconUpState
enum class IconUpState : int {
	None = 0,
	Hide = 1,
	ShowIcon = 2,
	ShowName = 3,
	IconUpState_MAX = 4
};

// Enum SafeHouse.NPCIconState
enum class NPCIconState : int {
	None = 0,
	Hide = 1,
	ShowName = 2,
	NPCIconState_MAX = 3
};

// Enum SafeHouse.SafeHouseDepartmentType
enum class SafeHouseDepartmentType : int {
	None = 0,
	RD = 1,
	Combat = 2,
	Med = 3,
	TE = 4,
	Tactical = 5,
	SafeHouseDepartmentType_MAX = 6
};

// Enum SafeHouse.SafeHouseNPCType
enum class SafeHouseNPCType : int {
	None = 0,
	CommonNPC = 1,
	Insurance = 2,
	Merchant = 3,
	Scavenger = 4,
	SafeHouseNPCType_MAX = 5
};

// Enum SafeHouse.SafeHouseInteractiveType
enum class SafeHouseInteractiveType : int {
	None = 0,
	OpenUI = 1,
	PlayDialogue = 2,
	CallFunction = 3,
	SafeHouseInteractiveType_MAX = 4
};

// ScriptStruct SafeHouse.NPCUIInfo
// Size: 0x10 (Inherited: 0x00)
struct FNPCUIInfo {
public:

	struct TWeakObjectPtr<struct UIrisSafeHouseInteractorNPCIcon> UI; // 0x00(0x08)
	struct TWeakObjectPtr<struct USHInteractorNPCComponent> NPCCmp; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SafeHouse.BuildingUIInfo
// Size: 0x08 (Inherited: 0x00)
struct FBuildingUIInfo {
public:

	struct TWeakObjectPtr<struct ASafeHouseBuildingProxy> BuildingIns; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SafeHouse.SafeHouseAreaInfoRow
// Size: 0x98 (Inherited: 0x10)
struct FSafeHouseAreaInfoRow : public FDescRowBase {
public:

	int32_t AreaID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText AreaName; // 0x18(0x18)
	int32_t MaxLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString Levels_2; // 0x38(0x10)
	struct FString UnlockCondition_2; // 0x48(0x10)
	struct FString Levels_3; // 0x58(0x10)
	struct FString UnlockCondition_3; // 0x68(0x10)
	struct FString Levels_4; // 0x78(0x10)
	struct FString UnlockCondition_4; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SafeHouse.SafeHouseAreaLevelRow
// Size: 0x50 (Inherited: 0x10)
struct FSafeHouseAreaLevelRow : public FDescRowBase {
public:

	struct FText AreaName; // 0x10(0x18)
	int32_t Level; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FString> Levels; // 0x30(0x10)
	struct TArray<struct FSafeHouseBuildingCondition> Conditions; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SafeHouse.SafeHouseBuildingCondition
// Size: 0x08 (Inherited: 0x00)
struct FSafeHouseBuildingCondition {
public:

	int32_t BuildingId; // 0x00(0x04)
	int32_t BuildingLevel; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SafeHouse.SavedTrans
// Size: 0x30 (Inherited: 0x00)
struct FSavedTrans {
public:

	struct FQuat Rotation; // 0x00(0x10)
	struct FVector translation; // 0x10(0x0c)
	struct FVector Scale3D; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SafeHouse.RangeTargetConfig
// Size: 0x40 (Inherited: 0x00)
struct FRangeTargetConfig {
public:

	struct ADFMRangeTargetCharacter* RangeTarget; // 0x00(0x08)
	struct AActor* RangeTargetParent; // 0x08(0x08)
	struct AGPSplinePath* RefSplinePath; // 0x10(0x08)
	bool bMelee; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float StartDistance; // 0x1c(0x04)
	float EndDistance; // 0x20(0x04)
	float DefaultDistance; // 0x24(0x04)
	int32_t HealthLvl; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	uint64_t DefaultHelmet; // 0x30(0x08)
	uint64_t DefaultBreastPlate; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
