
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPWeaponFSM.EEventEnumBase
enum class EEventEnumBase : int {
	EBeginJump = 0,
	EStartRun = 1,
	EOnHit = 2,
	EEventEnumBase_MAX = 3
};

// Enum GPWeaponFSM.EStateEnumBase
enum class EStateEnumBase : int {
	EBegin = 0,
	ERunning = 1,
	EFinish = 2,
	EStateEnumBase_MAX = 3
};

// ScriptStruct GPWeaponFSM.StateTransitions
// Size: 0x38 (Inherited: 0x00)
struct FStateTransitions {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FRTStateTransitionEventHit> TransEventHits; // 0x08(0x10)
	struct TArray<struct FRTStateTransitionSourceFinish> TransSourceFinishes; // 0x18(0x10)
	struct TArray<struct FRTStateTransitionSourceConditionFinish> TransSourceConditionFinishes; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponFSM.RTStateTransition
// Size: 0x18 (Inherited: 0x00)
struct FRTStateTransition {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FName SourceState; // 0x08(0x08)
	struct FName TargetState; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponFSM.RTStateTransitionSourceConditionFinish
// Size: 0x28 (Inherited: 0x18)
struct FRTStateTransitionSourceConditionFinish : public FRTStateTransition {
public:

	bool bOverrideTargetState; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName OverrideTargetState; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponFSM.RTStateTransitionSourceFinish
// Size: 0x18 (Inherited: 0x18)
struct FRTStateTransitionSourceFinish : public FRTStateTransition {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponFSM.RTStateTransitionEventHit
// Size: 0x20 (Inherited: 0x18)
struct FRTStateTransitionEventHit : public FRTStateTransition {
public:

	struct FName HitEventName; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
