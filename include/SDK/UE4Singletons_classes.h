
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class UE4Singletons.ComponentBookKeeper
// Size: 0x30 (Inherited: 0x30)
class UComponentBookKeeper : public UBlueprintFunctionLibrary {
public:


	void STATIC_RegisterAutoSpawnComponents(/*struct UClass* Class, struct TSet<struct UClass*>& RegDatas, bool bPersistent, char Flags*/); // Function UE4Singletons.ComponentBookKeeper.RegisterAutoSpawnComponents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UE4Singletons.ComponentRegistryLib
// Size: 0x30 (Inherited: 0x30)
class UComponentRegistryLib : public UBlueprintFunctionLibrary {
public:


	struct TArray<struct UActorComponent*> STATIC_AllComponent(struct UObject* WorldContextObj, struct UClass* Class); // Function UE4Singletons.ComponentRegistryLib.AllComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UE4Singletons.ObjectRegistrys
// Size: 0xd0 (Inherited: 0x30)
class UObjectRegistrys : public UObject {
public:

	struct TMap<struct UClass*, struct FObjectRegistryType> Binddings; // 0x30(0x50)
	char pad_80[0x50]; // 0x80(0x50)

	void STATIC_SetObject(struct UObject* Object, struct UClass* StopClass); // Function UE4Singletons.ObjectRegistrys.SetObject // (Final|Native|Static|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UE4Singletons.E4Singletons
// Size: 0x80 (Inherited: 0x30)
class UE4Singletons : public UBlueprintFunctionLibrary {
public:

	struct TMap<struct UClass*, struct UObject*> Singletons; // 0x30(0x50)

	struct UObject* STATIC_RegisterAsSingletonImpl(struct UObject* Object, struct UObject* WorldContextObject, bool bReplaceExist, struct UClass* InNativeClass); // Function UE4Singletons.E4Singletons.RegisterAsSingletonImpl // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
