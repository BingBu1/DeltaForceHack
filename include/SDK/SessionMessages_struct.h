
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// Size: 0x01 (Inherited: 0x00)
struct FSessionServiceLogUnsubscribe {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// Size: 0x01 (Inherited: 0x00)
struct FSessionServiceLogSubscribe {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SessionMessages.SessionServiceLog
// Size: 0x38 (Inherited: 0x00)
struct FSessionServiceLog {
public:

	struct FName Category; // 0x00(0x08)
	struct FString Data; // 0x08(0x10)
	struct FGuid instanceid; // 0x18(0x10)
	double TimeSeconds; // 0x28(0x08)
	char Verbosity; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SessionMessages.SessionServicePong
// Size: 0x90 (Inherited: 0x00)
struct FSessionServicePong {
public:

	bool Authorized; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BuildDate; // 0x08(0x10)
	struct FString DeviceName; // 0x18(0x10)
	struct FGuid instanceid; // 0x28(0x10)
	struct FString InstanceName; // 0x38(0x10)
	struct FString PlatformName; // 0x48(0x10)
	struct FGuid SessionId; // 0x58(0x10)
	struct FString SessionName; // 0x68(0x10)
	struct FString SessionOwner; // 0x78(0x10)
	bool Standalone; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SessionMessages.SessionServicePing
// Size: 0x10 (Inherited: 0x00)
struct FSessionServicePing {
public:

	struct FString userName; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
