
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPWeaponFSM.GPFSMBase
// Size: 0x278 (Inherited: 0x30)
class UGPFSMBase : public UObject {
public:

	char pad_30[0x20]; // 0x30(0x20)
	struct UGPFSMStateBase* CurrentStateInstance; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
	struct FName EntryState; // 0x60(0x08)
	struct TMap<struct FName, struct UClass*> StateClassMap; // 0x68(0x50)
	struct TMap<int64_t, struct FName> StateNameMap; // 0xb8(0x50)
	struct TMap<struct FName, struct UGPFSMStateBase*> StateInstanceMap; // 0x108(0x50)
	char pad_158[0x8]; // 0x158(0x08)
	struct TMap<int64_t, struct FName> EventNameMap; // 0x160(0x50)
	char pad_1B0[0x8]; // 0x1b0(0x08)
	struct TArray<struct FName> FSMStateList; // 0x1b8(0x10)
	struct TMap<struct FName, struct FStateTransitions> FSMStateTransitionMap; // 0x1c8(0x50)
	struct TMap<struct FName, struct FName> FSMAnyStateTransitionMap; // 0x218(0x50)
	char pad_268[0x10]; // 0x268(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponFSM.GPFSMStateBase
// Size: 0x68 (Inherited: 0x30)
class UGPFSMStateBase : public UObject {
public:

	struct UGPFSMBase* FSM; // 0x30(0x08)
	char pad_38[0x30]; // 0x38(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponFSM.GPFSMBlueprint
// Size: 0xa8 (Inherited: 0xa8)
class UGPFSMBlueprint : public UBlueprint {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponFSM.StateTransition
// Size: 0x40 (Inherited: 0x30)
class UStateTransition : public UObject {
public:

	struct FName SourceState; // 0x30(0x08)
	struct FName TargetState; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponFSM.StateTransitionSourceFinish
// Size: 0x40 (Inherited: 0x40)
class UStateTransitionSourceFinish : public UStateTransition {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponFSM.StateTransitionSourceConditionFinish
// Size: 0x40 (Inherited: 0x40)
class UStateTransitionSourceConditionFinish : public UStateTransition {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponFSM.StateTransitionEventHit
// Size: 0x48 (Inherited: 0x40)
class UStateTransitionEventHit : public UStateTransition {
public:

	struct FName HitEventName; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
