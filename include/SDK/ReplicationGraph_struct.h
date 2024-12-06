
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// Size: 0x10 (Inherited: 0x00)
struct FConnectionAlwaysRelevantNodePair {
public:

	struct UNetConnection* NetConnection; // 0x00(0x08)
	struct UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ReplicationGraph.LastLocationGatherInfo
// Size: 0x18 (Inherited: 0x00)
struct FLastLocationGatherInfo {
public:

	struct UNetConnection* Connection; // 0x00(0x08)
	struct FVector LastLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ReplicationGraph.TearOffActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FTearOffActorInfo {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* Actor; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FAlwaysRelevantActorInfo {
public:

	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* LastViewer; // 0x08(0x08)
	struct AActor* LastViewTarget; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
