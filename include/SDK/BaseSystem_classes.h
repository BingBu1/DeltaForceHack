
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class BaseSystem.BaseSystem
// Size: 0x3d0 (Inherited: 0x378)
class ABaseSystem : public AActor {
public:

	struct TMap<struct UClass*, struct FActorDependence> DataComponentClasses; // 0x378(0x50)
	char pad_3C8[0x8]; // 0x3c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BaseSystem.BaseSystemBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UBaseSystemBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_RegisterAutoSpawnComponentForActor(struct UClass* ActorClass, struct UClass* DataComponentClass, bool bPersistent, char Flags); // Function BaseSystem.BaseSystemBlueprintLibrary.RegisterAutoSpawnComponentForActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BaseSystem.SystemDataStorage
// Size: 0x80 (Inherited: 0x30)
class USystemDataStorage : public UObject {
public:

	struct TMap<struct UScriptStruct*, struct FSystemData> DataStore; // 0x30(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BaseSystem.BaseSystemContainer
// Size: 0x40 (Inherited: 0x30)
class UBaseSystemContainer : public UObject {
public:

	struct TArray<struct TWeakObjectPtr<struct ABaseSystem>> Systems; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BaseSystem.WorldPreloadData
// Size: 0x60 (Inherited: 0x30)
class UWorldPreloadData : public UObject {
public:

	struct TArray<struct UObject*> PreloadOjects; // 0x30(0x10)
	struct TArray<struct FSoftObjectPath> SoftObjects; // 0x40(0x10)
	struct TArray<struct UObject*> LoadedOjects; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BaseSystem.SystemSettingGroup
// Size: 0x40 (Inherited: 0x30)
class USystemSettingGroup : public UObject {
public:

	struct TArray<struct FSystemConfig> SettingDatas; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BaseSystem.BaseWorldSettings
// Size: 0x608 (Inherited: 0x588)
class ABaseWorldSettings : public AWorldSettings {
public:

	char pad_588[0x8]; // 0x588(0x08)
	struct TArray<struct UWorldPreloadData*> PreloadConfigs; // 0x590(0x10)
	struct TArray<struct FSystemConfig> SystemSettings; // 0x5a0(0x10)
	struct TMap<struct UClass*, struct FActorDependence> ComponentRegistry; // 0x5b0(0x50)
	struct USystemSettingGroup* SystemGroup; // 0x600(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
