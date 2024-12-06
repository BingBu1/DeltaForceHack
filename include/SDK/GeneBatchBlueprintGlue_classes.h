
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GeneBatchBlueprintGlue.BatchHelper
// Size: 0x30 (Inherited: 0x30)
class UBatchHelper : public UObject {
public:


	struct TArray<struct UStaticMeshComponent*> STATIC_FilterByVolume(struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps, float VolumeLimit); // Function GeneBatchBlueprintGlue.BatchHelper.FilterByVolume // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatchBlueprintGlue.GeneBatchBlueprintGlue
// Size: 0x30 (Inherited: 0x30)
class UGeneBatchBlueprintGlue : public UBlueprintFunctionLibrary {
public:


	bool STATIC_TryCreateGeneBatchRuntime(struct UWorld* World, struct UGeneBatchSettingsObject* InSettingObject); // Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.TryCreateGeneBatchRuntime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
