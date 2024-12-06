
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldPrecomputedVisibility.OpenWorldPrecomputedForm
// Size: 0x30 (Inherited: 0x30)
class UOpenWorldPrecomputedForm : public UInterface {
public:


	enum class EOpenWorldPrecomputedFormType GetFormType(); // Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedForm.GetFormType // (Native|Event|Public|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPrecomputedVisibility.OpenWorldPrecomputedFormStatics
// Size: 0x30 (Inherited: 0x30)
class UOpenWorldPrecomputedFormStatics : public UBlueprintFunctionLibrary {
public:


	void STATIC_SetFormVisibilityIds(struct UObject* MutableForm, struct TArray<int32_t>& VisibilityIds); // Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedFormStatics.SetFormVisibilityIds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPrecomputedVisibility.MutableFormMeshComponent
// Size: 0x800 (Inherited: 0x7f0)
class UMutableFormMeshComponent : public UStaticMeshComponent {
public:

	char pad_7F0[0x10]; // 0x7f0(0x10)

	void NextForm(); // Function OpenWorldPrecomputedVisibility.MutableFormMeshComponent.NextForm // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPrecomputedVisibility.OpenWorldPrecomputedVisibilityBlockAsset
// Size: 0xa0 (Inherited: 0x30)
class UOpenWorldPrecomputedVisibilityBlockAsset : public UObject {
public:

	char pad_30[0x70]; // 0x30(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPrecomputedVisibility.PrecomputedVisibilityAssetsStreamer
// Size: 0x600 (Inherited: 0x5d0)
class APrecomputedVisibilityAssetsStreamer : public AAssetsStreamer {
public:

	struct TArray<int32_t> RuntimeVisibilityIds; // 0x5d0(0x10)
	struct TArray<struct UOpenWorldPrecomputedVisibilityBlockAsset*> VisibilityBlockAssets; // 0x5e0(0x10)
	char pad_5F0[0x10]; // 0x5f0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPrecomputedVisibility.OpenWorldPrecomputedVisibilitySubsystem
// Size: 0x308 (Inherited: 0x38)
class UOpenWorldPrecomputedVisibilitySubsystem : public UWorldSubsystem {
public:

	char pad_38[0x2d0]; // 0x38(0x2d0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
