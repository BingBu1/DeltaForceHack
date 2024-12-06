
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum PropertyReplication.EPropertyReplicationCullingMethod
enum class EPropertyReplicationCullingMethod : int {
	ECM_AUTO = 0,
	ECM_DISTANCE = 1,
	ECM_NO_CULLING = 2,
	ECM_MAX = 3
};

// ScriptStruct PropertyReplication.ScriptStructArray
// Size: 0x20 (Inherited: 0x00)
struct FScriptStructArray {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct UScriptStruct* ScriptStruct; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PropertyReplication.PropertyReplicationPendingNakInfo
// Size: 0x18 (Inherited: 0x00)
struct FPropertyReplicationPendingNakInfo {
public:

	struct UNetConnection* Connection; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PropertyReplication.PropertyReplicationContainer
// Size: 0xb0 (Inherited: 0x00)
struct FPropertyReplicationContainer {
public:

	char pad_0[0xb0]; // 0x00(0xb0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PropertyReplication.NetGuid
// Size: 0x10 (Inherited: 0x00)
struct FNetGuid {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PropertyReplication.PropertyReplicationHandler
// Size: 0x10 (Inherited: 0x00)
struct FPropertyReplicationHandler {
public:

	struct UPropertyReplicationComponent* PropertyReplicationComponent; // 0x00(0x08)
	int32_t ObjectIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PropertyReplication.PropertyReplicationBaseItem
// Size: 0x00 (Inherited: 0x00)
struct FPropertyReplicationBaseItem {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PropertyReplication.ReplicationFrameNumber
// Size: 0x04 (Inherited: 0x00)
struct FReplicationFrameNumber {
public:

	int32_t Number; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PropertyReplication.PropertyReplicationItem
// Size: 0x20 (Inherited: 0x00)
struct FPropertyReplicationItem : public FPropertyReplicationBaseItem {
public:

	struct UObject* Object; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PropertyReplication.ReplicationFrameNumberRange
// Size: 0x08 (Inherited: 0x00)
struct FReplicationFrameNumberRange {
public:

	struct FReplicationFrameNumber Begin; // 0x00(0x04)
	struct FReplicationFrameNumber End; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PropertyReplication.PropertyReplicationTest
// Size: 0x58 (Inherited: 0x20)
struct FPropertyReplicationTest : public FPropertyReplicationItem {
public:

	int32_t I; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct UObject*> Objects; // 0x28(0x10)
	char bBit0 : 1; // 0x38(0x01)
	char bBit1 : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t SlowInt; // 0x3c(0x04)
	struct TArray<int32_t> SlowInts; // 0x40(0x10)
	int32_t Index; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
