
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct EngineMessages.EngineServiceNotification
// Size: 0x18 (Inherited: 0x00)
struct FEngineServiceNotification {
public:

	struct FString Text; // 0x00(0x10)
	double TimeSeconds; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// Size: 0x10 (Inherited: 0x00)
struct FEngineServiceTerminate {
public:

	struct FString userName; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// Size: 0x20 (Inherited: 0x00)
struct FEngineServiceExecuteCommand {
public:

	struct FString Command; // 0x00(0x10)
	struct FString userName; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// Size: 0x20 (Inherited: 0x00)
struct FEngineServiceAuthGrant {
public:

	struct FString userName; // 0x00(0x10)
	struct FString UserToGrant; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// Size: 0x20 (Inherited: 0x00)
struct FEngineServiceAuthDeny {
public:

	struct FString userName; // 0x00(0x10)
	struct FString UserToDeny; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EngineMessages.EngineServicePong
// Size: 0x50 (Inherited: 0x00)
struct FEngineServicePong {
public:

	struct FString CurrentLevel; // 0x00(0x10)
	int32_t EngineVersion; // 0x10(0x04)
	bool HasBegunPlay; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FGuid instanceid; // 0x18(0x10)
	struct FString InstanceType; // 0x28(0x10)
	struct FGuid SessionId; // 0x38(0x10)
	float WorldTimeSeconds; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EngineMessages.EngineServicePing
// Size: 0x01 (Inherited: 0x00)
struct FEngineServicePing {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
