
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class PropertyReplication.PropertyReplicationPackageMapClient
// Size: 0x458 (Inherited: 0x400)
class UPropertyReplicationPackageMapClient : public UPackageMapClient {
public:

	char pad_400[0x58]; // 0x400(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PropertyReplication.PropertyReplicationSettings
// Size: 0x58 (Inherited: 0x40)
class UPropertyReplicationSettings : public UDeveloperSettings {
public:

	/*struct TArray<struct TSoftClassPtr<UObject>>*/char ReplicationActorClasses[0x10]; // 0x40(0x10)
	float AOICellSize; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PropertyReplication.PropertyReplicationSubsystem
// Size: 0x58 (Inherited: 0x38)
class UPropertyReplicationSubsystem : public UWorldSubsystem {
public:

	struct TArray<struct APropertyReplicationActor*> ReplicationActors; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PropertyReplication.PropertyReplicationActor
// Size: 0x388 (Inherited: 0x378)
class APropertyReplicationActor : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)
	bool bEnableFastNetFrame; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PropertyReplication.PropertyReplicationComponent
// Size: 0x1e0 (Inherited: 0x100)
class UPropertyReplicationComponent : public UActorComponent {
public:

	struct FPropertyReplicationContainer Container; // 0x100(0xb0)
	char pad_1B0[0x8]; // 0x1b0(0x08)
	struct TArray<struct FPropertyReplicationPendingNakInfo> PendingNakInfos; // 0x1b8(0x10)
	struct UClass* InterfaceClass; // 0x1c8(0x08)
	int32_t ReplicationPeriod; // 0x1d0(0x04)
	enum class EPropertyReplicationCullingMethod CullingMethod; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
	float CullingDistance; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)

	void OnRep_Container(); // Function PropertyReplication.PropertyReplicationComponent.OnRep_Container // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PropertyReplication.PropertyReplicationConnection
// Size: 0x1de0 (Inherited: 0x1de0)
class UPropertyReplicationConnection : public UIpConnection {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PropertyReplication.PropertyReplicationTestObject
// Size: 0xa8 (Inherited: 0x30)
class UPropertyReplicationTestObject : public UObject {
public:

	char pad_30[0x60]; // 0x30(0x60)
	int32_t DummyInt; // 0x90(0x04)
	char pad_94[0x14]; // 0x94(0x14)

	void MulticasUnreliable(int32_t I); // Function PropertyReplication.PropertyReplicationTestObject.MulticasUnreliable // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PropertyReplication.PropertyReplicationTestActor
// Size: 0xf98 (Inherited: 0x378)
class APropertyReplicationTestActor : public AActor {
public:

	struct UPropertyReplicationTestObject* Objects[0x80]; // 0x378(0x400)
	struct UPropertyReplicationComponent* PropertyReplicationComponent; // 0x778(0x08)
	char pad_780[0x800]; // 0x780(0x800)
	struct UStaticMeshComponent* StaticMesh; // 0xf80(0x08)
	char pad_F88[0x10]; // 0xf88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PropertyReplication.PropertyReplicationInterface
// Size: 0x30 (Inherited: 0x30)
class UPropertyReplicationInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
