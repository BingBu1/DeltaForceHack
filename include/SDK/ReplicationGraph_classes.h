
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ReplicationGraph.NetReplicationGraphConnection
// Size: 0x248 (Inherited: 0x30)
class UNetReplicationGraphConnection : public UReplicationConnectionDriver {
public:

	struct UNetConnection* NetConnection; // 0x30(0x08)
	char pad_38[0x140]; // 0x38(0x140)
	struct AReplicationGraphDebugActor* DebugActor; // 0x178(0x08)
	char pad_180[0x18]; // 0x180(0x18)
	struct TArray<struct FLastLocationGatherInfo> LastGatherLocations; // 0x198(0x10)
	char pad_1A8[0x8]; // 0x1a8(0x08)
	struct TArray<struct UReplicationGraphNode*> ConnectionGraphNodes; // 0x1b0(0x10)
	struct UReplicationGraphNode_TearOff_ForConnection* TearOffNode; // 0x1c0(0x08)
	char pad_1C8[0x80]; // 0x1c8(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphDebugActor
// Size: 0x388 (Inherited: 0x378)
class AReplicationGraphDebugActor : public AActor {
public:

	struct UReplicationGraph* ReplicationGraph; // 0x378(0x08)
	struct UNetReplicationGraphConnection* ConnectionManager; // 0x380(0x08)

	void ServerStopDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraph
// Size: 0x4e8 (Inherited: 0x30)
class UReplicationGraph : public UReplicationDriver {
public:

	struct UClass* ReplicationConnectionManagerClass; // 0x30(0x08)
	bool bEnableNetDirtySystem; // 0x38(0x01)
	bool bEnableSubobjectDirtyOptimize; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct UNetDriver* NetDriver; // 0x40(0x08)
	struct TArray<struct UNetReplicationGraphConnection*> Connections; // 0x48(0x10)
	struct TArray<struct UNetReplicationGraphConnection*> PendingConnections; // 0x58(0x10)
	char pad_68[0x40]; // 0x68(0x40)
	struct TArray<struct UReplicationGraphNode*> GlobalGraphNodes; // 0xa8(0x10)
	struct TArray<struct UReplicationGraphNode*> PrepareForReplicationNodes; // 0xb8(0x10)
	char pad_C8[0x420]; // 0xc8(0x420)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphNode
// Size: 0x58 (Inherited: 0x30)
class UReplicationGraphNode : public UObject {
public:

	struct TArray<struct UReplicationGraphNode*> AllChildNodes; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.BasicReplicationGraph
// Size: 0x520 (Inherited: 0x4e8)
class UBasicReplicationGraph : public UReplicationGraph {
public:

	struct UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x4e8(0x08)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4f0(0x08)
	struct TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x4f8(0x10)
	struct TArray<struct AActor*> ActorsWithoutNetConnection; // 0x508(0x10)
	char pad_518[0x8]; // 0x518(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphNode_ActorList
// Size: 0x100 (Inherited: 0x58)
class UReplicationGraphNode_ActorList : public UReplicationGraphNode {
public:

	char pad_58[0xa8]; // 0x58(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// Size: 0x140 (Inherited: 0x58)
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode {
public:

	char pad_58[0xe8]; // 0x58(0xe8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// Size: 0x240 (Inherited: 0x58)
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode {
public:

	char pad_58[0x1e8]; // 0x58(0x1e8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// Size: 0x70 (Inherited: 0x58)
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode {
public:

	struct UReplicationGraphNode* ChildNode; // 0x58(0x08)
	char pad_60[0x10]; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// Size: 0x80 (Inherited: 0x58)
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode {
public:

	struct TArray<struct FTearOffActorInfo> TearOffActors; // 0x58(0x10)
	char pad_68[0x18]; // 0x68(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// Size: 0x130 (Inherited: 0x100)
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList {
public:

	char pad_100[0x30]; // 0x100(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// Size: 0x198 (Inherited: 0x100)
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList {
public:

	char pad_100[0x98]; // 0x100(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// Size: 0x150 (Inherited: 0x100)
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList {
public:

	char pad_100[0x50]; // 0x100(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
// Size: 0x150 (Inherited: 0x100)
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList {
public:

	char pad_100[0x40]; // 0x100(0x40)
	struct UReplicationGraphNode* DynamicNode; // 0x140(0x08)
	struct UReplicationGraphNode_DormancyNode* DormancyNode; // 0x148(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0x138 (Inherited: 0x100)
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList {
public:

	char pad_100[0x18]; // 0x100(0x18)
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors; // 0x118(0x10)
	struct AActor* LastViewer; // 0x128(0x08)
	struct AActor* LastViewTarget; // 0x130(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
