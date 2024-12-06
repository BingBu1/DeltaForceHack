
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMIrisSeamless.EIrisEnterStageType
enum class EIrisEnterStageType : int {
	None = 0,
	Init = 1,
	Match = 2,
	SelectShow = 3,
	GetOn = 4,
	EventShow = 5,
	PadShow = 6,
	InfoInteract = 7,
	Abseil = 8,
	Finish = 9,
	Fail = 10,
	Max = 11
};

// Enum DFMIrisSeamless.ESeamlessEntryMatchType
enum class ESeamlessEntryMatchType : int {
	None = 0,
	Tutorial = 1,
	Scream = 2,
	FirstN = 3,
	Normal = 4,
	ESeamlessEntryMatchType_MAX = 5
};

// Enum DFMIrisSeamless.ESeamlessDSConnectState
enum class ESeamlessDSConnectState : int {
	None = 0,
	Waiting = 1,
	ReadyConnect = 2,
	Connecting = 3,
	Connected = 4,
	MAX = 5
};

// Enum DFMIrisSeamless.EClientSeamlessTravelStatus
enum class EClientSeamlessTravelStatus : int {
	OnClientSeamlessTravelBegin = 0,
	OnSeamlessStageEnter = 1,
	OnPreCleanupDynamicObjects = 2,
	OnPostCleanupDynamicObjects = 3,
	OnPreConnectDS = 4,
	OnPostConnectDS = 5,
	OnPreStandaloneInitialize = 6,
	OnPostStandaloneInitialize = 7,
	OnClientCreateNewPlayerController = 8,
	OnSwitchClientPlayer = 9,
	OnClientSeamlessTravelEnd = 10,
	OnNetDriverShutdown = 11,
	EClientSeamlessTravelStatus_MAX = 12
};

// ScriptStruct DFMIrisSeamless.SeamlessEntryCharacterAppearanceData
// Size: 0x20 (Inherited: 0x00)
struct FSeamlessEntryCharacterAppearanceData {
public:

	int64_t PlayerId; // 0x00(0x08)
	struct FName HeroSuitID; // 0x08(0x08)
	struct TArray<struct FName> Equipments; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMIrisSeamless.SeamlessEntryProgress
// Size: 0x14 (Inherited: 0x00)
struct FSeamlessEntryProgress {
public:

	bool bIsWaitingMapInteract; // 0x00(0x01)
	bool bIsLastSecond; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float LastDelta; // 0x04(0x04)
	float MapInteractTime; // 0x08(0x04)
	float CurrentSeamlessEntryProgress; // 0x0c(0x04)
	float TargetSeamlessEntryProgress; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMIrisSeamless.SafeHouseHelicopterAnimInstanceProxy
// Size: 0x780 (Inherited: 0x748)
struct FSafeHouseHelicopterAnimInstanceProxy : public FAnimInstanceProxy {
public:

	struct FVector LeftDoorLocation; // 0x748(0x0c)
	struct FVector RightDoorLocation; // 0x754(0x0c)
	struct UAnimSequence* HelicopterIdleAnim; // 0x760(0x08)
	bool StopAnimation; // 0x768(0x01)
	char pad_769[0x7]; // 0x769(0x07)
	struct ASafeHouseHelicopter* SafeHouseHelicopter; // 0x770(0x08)
	char pad_778[0x8]; // 0x778(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
