
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class PrefabricatorRuntime.PrefabComponent
// Size: 0x270 (Inherited: 0x240)
class UPrefabComponent : public USceneComponent {
public:

	/*struct TSoftObjectPtr<UPrefabricatorAssetInterface>*/char PrefabAssetInterface[0x28]; // 0x240(0x28)
	char pad_268[0x8]; // 0x268(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabRandomizer
// Size: 0x3b0 (Inherited: 0x378)
class APrefabRandomizer : public AActor {
public:

	bool bRandomizeOnBeginPlay; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	int32_t SeedOffset; // 0x37c(0x04)
	float MaxBuildTimePerFrame; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	/*struct FMulticastInlineDelegate*/char OnRandomizationComplete[0x10]; // 0x388(0x10)
	char pad_398[0x18]; // 0x398(0x18)

	void Randomize(int32_t InSeed); // Function PrefabricatorRuntime.PrefabRandomizer.Randomize // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabricatorProperty
// Size: 0x60 (Inherited: 0x30)
class UPrefabricatorProperty : public UObject {
public:

	struct FString PropertyName; // 0x30(0x10)
	struct FString ExportedValue; // 0x40(0x10)
	struct TArray<struct FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabricatorEventListener
// Size: 0x30 (Inherited: 0x30)
class UPrefabricatorEventListener : public UObject {
public:


	void PostSpawn(struct APrefabActor* Prefab); // Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn // (Native|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// Size: 0x48 (Inherited: 0x30)
class UPrefabricatorAssetUserData : public UAssetUserData {
public:

	struct TWeakObjectPtr<struct APrefabActor> PrefabActor; // 0x30(0x08)
	struct FGuid ItemID; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	struct APrefabActor* STATIC_SpawnPrefab(struct UObject* WorldContextObject, struct UPrefabricatorAssetInterface* Prefab, struct FTransform& Transform, int32_t Seed); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabricatorSettings
// Size: 0x48 (Inherited: 0x40)
class UPrefabricatorSettings : public UDeveloperSettings {
public:

	enum class EPrefabricatorPivotPosition PivotPosition; // 0x40(0x01)
	bool bAllowDynamicUpdate; // 0x41(0x01)
	bool bShowAssetThumbnails; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// Size: 0x240 (Inherited: 0x240)
class UPrefabSeedLinkerComponent : public USceneComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabSeedLinker
// Size: 0x390 (Inherited: 0x378)
class APrefabSeedLinker : public AActor {
public:

	struct TArray<struct TWeakObjectPtr<struct APrefabActor>> LinkedActors; // 0x378(0x10)
	struct UPrefabSeedLinkerComponent* SeedLinkerComponent; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabActor
// Size: 0x398 (Inherited: 0x378)
class APrefabActor : public AActor {
public:

	struct UPrefabComponent* PrefabComponent; // 0x378(0x08)
	struct FGuid LastUpdateID; // 0x380(0x10)
	int32_t Seed; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)

	void SavePrefab(); // Function PrefabricatorRuntime.PrefabActor.SavePrefab // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// Size: 0x40 (Inherited: 0x30)
class UPrefabricatorAssetInterface : public UObject {
public:

	struct UClass* EventListener; // 0x30(0x08)
	bool bReplicates; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.ReplicablePrefabActor
// Size: 0x398 (Inherited: 0x398)
class AReplicablePrefabActor : public APrefabActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabricatorAsset
// Size: 0x78 (Inherited: 0x40)
class UPrefabricatorAsset : public UPrefabricatorAssetInterface {
public:

	struct TArray<struct FPrefabricatorActorData> ActorData; // 0x40(0x10)
	enum class EComponentMobility PrefabMobility; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FGuid LastUpdateID; // 0x54(0x10)
	char pad_64[0x4]; // 0x64(0x04)
	struct UThumbnailInfo* ThumbnailInfo; // 0x68(0x08)
	uint32_t Version; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// Size: 0x58 (Inherited: 0x40)
class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface {
public:

	struct TArray<struct FPrefabricatorAssetCollectionItem> Prefabs; // 0x40(0x10)
	uint32_t Version; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
