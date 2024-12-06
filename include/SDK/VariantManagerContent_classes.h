
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class VariantManagerContent.LevelVariantSets
// Size: 0x98 (Inherited: 0x30)
class ULevelVariantSets : public UObject {
public:

	struct UBlueprintGeneratedClass* DirectorClass; // 0x30(0x08)
	struct TArray<struct UVariantSet*> VariantSets; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)

	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x390 (Inherited: 0x378)
class ALevelVariantSetsActor : public AActor {
public:

	struct FSoftObjectPath LevelVariantSets; // 0x378(0x18)

	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x48 (Inherited: 0x30)
class ULevelVariantSetsFunctionDirector : public UObject {
public:

	char pad_30[0x18]; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.SwitchActor
// Size: 0x398 (Inherited: 0x378)
class ASwitchActor : public AActor {
public:

	char pad_378[0x18]; // 0x378(0x18)
	struct USceneComponent* SceneComponent; // 0x390(0x08)

	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.Variant
// Size: 0x70 (Inherited: 0x30)
class UVariant : public UObject {
public:

	struct FText DisplayText; // 0x30(0x18)
	char pad_48[0x18]; // 0x48(0x18)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; // 0x60(0x10)

	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.VariantObjectBinding
// Size: 0x88 (Inherited: 0x30)
class UVariantObjectBinding : public UObject {
public:

	struct FSoftObjectPath ObjectPtr; // 0x30(0x18)
	/*LazyObjectProperty*/char LazyObjectPtr[0x1c]; // 0x48(0x1c)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct UPropertyValue*> CapturedProperties; // 0x68(0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.VariantSet
// Size: 0x78 (Inherited: 0x30)
class UVariantSet : public UObject {
public:

	struct FText DisplayText; // 0x30(0x18)
	char pad_48[0x18]; // 0x48(0x18)
	bool bExpanded; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct UVariant*> Variants; // 0x68(0x10)

	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.PropertyValue
// Size: 0x1b8 (Inherited: 0x30)
class UPropertyValue : public UObject {
public:

	char pad_30[0x58]; // 0x30(0x58)
	/*struct TArray<struct TFieldPath<FNone>>*/char Properties[0x10]; // 0x88(0x10)
	struct TArray<int32_t> PropertyIndices; // 0x98(0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xa8(0x10)
	struct FString FullDisplayString; // 0xb8(0x10)
	struct FName PropertySetterName; // 0xc8(0x08)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xd0(0x50)
	bool bHasRecordedData; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UClass* LeafPropertyClass; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)
	struct TArray<char> ValueBytes; // 0x138(0x10)
	enum class EPropertyValueCategory PropCategory; // 0x148(0x01)
	char pad_149[0x6f]; // 0x149(0x6f)

	bool HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.PropertyValueTransform
// Size: 0x1b8 (Inherited: 0x1b8)
class UPropertyValueTransform : public UPropertyValue {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.PropertyValueVisibility
// Size: 0x1b8 (Inherited: 0x1b8)
class UPropertyValueVisibility : public UPropertyValue {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.PropertyValueColor
// Size: 0x1b8 (Inherited: 0x1b8)
class UPropertyValueColor : public UPropertyValue {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.PropertyValueMaterial
// Size: 0x1b8 (Inherited: 0x1b8)
class UPropertyValueMaterial : public UPropertyValue {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VariantManagerContent.PropertyValueOption
// Size: 0x1b8 (Inherited: 0x1b8)
class UPropertyValueOption : public UPropertyValue {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
