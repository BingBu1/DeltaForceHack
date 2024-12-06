
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPResource.FXComponentManager
// Size: 0x1b8 (Inherited: 0x38)
class UFXComponentManager : public UGameInstanceSubsystem {
public:

	char pad_38[0x148]; // 0x38(0x148)
	struct TArray<struct UFXResourceContainerComponent*> CacheResourceComponents; // 0x180(0x10)
	char pad_190[0x18]; // 0x190(0x18)
	struct TArray<struct UFXResourceContainerComponent*> CachePendingManagerRemoveComponents; // 0x1a8(0x10)

	struct UFXComponentManager* STATIC_Get(struct UWorld* WorldContext); // Function GPResource.FXComponentManager.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPResource.FXResourceContainerComponent
// Size: 0xcd0 (Inherited: 0x7d0)
class UFXResourceContainerComponent : public UParticleSystemComponent {
public:

	char pad_7D0[0x10]; // 0x7d0(0x10)
	bool bAutoActive; // 0x7e0(0x01)
	char pad_7E1[0x3]; // 0x7e1(0x03)
	struct FName FxResourceId; // 0x7e4(0x08)
	bool bAudioAutoPlayOnLoaded; // 0x7ec(0x01)
	char pad_7ED[0x47]; // 0x7ed(0x47)
	struct FName EffectResourceId; // 0x834(0x08)
	char pad_83C[0x4]; // 0x83c(0x04)
	struct FResourceFXRow ResourceFX; // 0x840(0x1f8)
	struct FResourceAudioRow ResourceAudioFX; // 0xa38(0x198)
	/*struct TSet<struct UObject*>*/char CacheObjects[0x50]; // 0xbd0(0x50)
	char pad_C20[0x14]; // 0xc20(0x14)
	int32_t RecordTranslucencySortOrder; // 0xc34(0x04)
	char pad_C38[0x10]; // 0xc38(0x10)
	bool bIsSetStencilOutside; // 0xc48(0x01)
	char pad_C49[0x2f]; // 0xc49(0x2f)
	/*struct TSet<struct UObject*>*/char CacheAudioObjects[0x50]; // 0xc78(0x50)
	char pad_CC8[0x8]; // 0xcc8(0x08)

	bool SetResourceFX(struct FName& ResourceFXId, bool bInAutoActive); // Function GPResource.FXResourceContainerComponent.SetResourceFX // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPResource.ResourceAnimManager
// Size: 0x48 (Inherited: 0x38)
class UResourceAnimManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPResource.ResourceFXManager
// Size: 0x98 (Inherited: 0x38)
class UResourceFXManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)
	struct TMap<struct FName, struct UParticleSystem*> FXSPCache; // 0x48(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPResource.ResourceAudioManager
// Size: 0x48 (Inherited: 0x38)
class UResourceAudioManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPResource.ClassesResourceAudioManager
// Size: 0x48 (Inherited: 0x38)
class UClassesResourceAudioManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPResource.ResourceDecalManager
// Size: 0x48 (Inherited: 0x38)
class UResourceDecalManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPResource.ResourceLightManager
// Size: 0x48 (Inherited: 0x38)
class UResourceLightManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPResource.ResourceCommercializationManager
// Size: 0x48 (Inherited: 0x38)
class UResourceCommercializationManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
