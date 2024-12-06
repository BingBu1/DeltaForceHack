
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class SubstanceCore.SubstanceGraphInstance
// Size: 0x180 (Inherited: 0x30)
class USubstanceGraphInstance : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)
	struct FString PackageURL; // 0x40(0x10)
	struct USubstanceInstanceFactory* ParentFactory; // 0x50(0x08)
	struct TMap<uint32_t, struct UTexture2D*> ImageSources; // 0x58(0x50)
	struct UMaterial* CreatedMaterial; // 0xa8(0x08)
	struct UMaterialInstanceConstant* ConstantCreatedMaterial; // 0xb0(0x08)
	struct UMaterialInstanceDynamic* DynamicCreatedMaterial; // 0xb8(0x08)
	struct TMap<int32_t, struct FGuid> OutputTextureLinkData; // 0xc0(0x50)
	struct TMap<uint32_t, struct USubstanceOutputData*> OutputInstances; // 0x110(0x50)
	bool bIsFrozen; // 0x160(0x01)
	char pad_161[0x1f]; // 0x161(0x1f)

	void SetInputString(struct FString Identifier, struct FString Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputString // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SubstanceCore.SubstanceInstanceFactory
// Size: 0x90 (Inherited: 0x30)
class USubstanceInstanceFactory : public UObject {
public:

	struct TArray<struct USubstanceGraphInstance*> mGraphInstances; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
	struct FString RelativeSourceFilePath; // 0x58(0x10)
	struct FString AbsoluteSourceFilePath; // 0x68(0x10)
	struct FString SourceFileTimestamp; // 0x78(0x10)
	enum class ESubstanceGenerationMode GenerationMode; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SubstanceCore.SubstanceOutputData
// Size: 0x60 (Inherited: 0x30)
class USubstanceOutputData : public UObject {
public:

	struct UObject* ConnectedObject; // 0x30(0x08)
	struct FMaterialParameterInfo ParamInfo; // 0x38(0x10)
	struct USubstanceGraphInstance* ParentInstance; // 0x48(0x08)
	struct FGuid CacheGuid; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SubstanceCore.SubstanceSettings
// Size: 0x70 (Inherited: 0x30)
class USubstanceSettings : public UObject {
public:

	int32_t MemoryBudgetMb; // 0x30(0x04)
	int32_t CPUCores; // 0x34(0x04)
	int32_t AsyncLoadMipClip; // 0x38(0x04)
	int32_t MaxAsyncSubstancesRenderedPerFrame; // 0x3c(0x04)
	enum class ESubstanceEngineType SubstanceEngine; // 0x40(0x01)
	enum class EDefaultSubstanceTextureSize DefaultSubstanceOutputSizeX; // 0x41(0x01)
	enum class EDefaultSubstanceTextureSize DefaultSubstanceOutputSizeY; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char DefaultTemplateMaterial[0x28]; // 0x48(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SubstanceCore.SubstanceTexture2D
// Size: 0x1b0 (Inherited: 0x158)
class USubstanceTexture2D : public UTexture2DDynamic {
public:

	char pad_158[0x30]; // 0x158(0x30)
	struct USubstanceGraphInstance* ParentInstance; // 0x188(0x08)
	enum class TextureAddress AddressX; // 0x190(0x01)
	enum class TextureAddress AddressY; // 0x191(0x01)
	bool bCooked; // 0x192(0x01)
	char pad_193[0x1d]; // 0x193(0x1d)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x30 (Inherited: 0x30)
class USubstanceUtility : public UBlueprintFunctionLibrary {
public:


	void STATIC_SyncRendering(struct USubstanceGraphInstance* InstancesToRender); // Function SubstanceCore.SubstanceUtility.SyncRendering // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
