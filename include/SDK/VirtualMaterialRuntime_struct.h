
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum VirtualMaterialRuntime.EVirtualMaterialPlatform
enum class EVirtualMaterialPlatform : int {
	Unknown = 0,
	Mobile = 1,
	Desktop = 2,
	EVirtualMaterialPlatform_MAX = 3
};

// ScriptStruct VirtualMaterialRuntime.VMSourceTextureProperties
// Size: 0x10 (Inherited: 0x00)
struct FVMSourceTextureProperties {
public:

	struct TArray<struct FString> Properties; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMIAllPlatformData
// Size: 0x50 (Inherited: 0x00)
struct FVMIAllPlatformData {
public:

	struct TMap<enum class EVirtualMaterialPlatform, struct FVMIPerPlatformData> PlatformData; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMIPerPlatformTextureParameter
// Size: 0x48 (Inherited: 0x00)
struct FVMIPerPlatformTextureParameter {
public:

	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	/*struct TSoftObjectPtr<UTexture>*/char ParameterValue[0x28]; // 0x10(0x28)
	struct FGuid ExpressionGUID; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMParameterGroup
// Size: 0x70 (Inherited: 0x00)
struct FVMParameterGroup {
public:

	struct FStaticParameterSet StaticParameters; // 0x00(0x40)
	struct TArray<struct FScalarParameterValue> ScalarParameters; // 0x40(0x10)
	struct TArray<struct FVectorParameterValue> VectorParameters; // 0x50(0x10)
	struct TArray<struct FVMTextureParameter> TextureParameters; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMTextureParameter
// Size: 0x38 (Inherited: 0x00)
struct FVMTextureParameter {
public:

	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	/*struct TSoftObjectPtr<UTexture>*/char ParameterValue[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMaterialGenTextureInfo
// Size: 0x20 (Inherited: 0x00)
struct FVMaterialGenTextureInfo {
public:

	struct FString TextureName; // 0x00(0x10)
	struct UTexture* TheTexture; // 0x10(0x08)
	bool bCreated; // 0x18(0x01)
	bool bRegenerated; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMaterialHighTextureInfo
// Size: 0xe8 (Inherited: 0x00)
struct FVMaterialHighTextureInfo {
public:

	struct FString TextureName; // 0x00(0x10)
	/*struct TSoftObjectPtr<UTexture2D>*/char TheTexture[0x28]; // 0x10(0x28)
	struct FString TheTextureObjectPathBackup; // 0x38(0x10)
	struct TMap<enum class EVirtualMaterialPlatform, struct FString> CachedTextureHashMap; // 0x48(0x50)
	struct TMap<enum class EVirtualMaterialPlatform, struct FVector2D> CachedSizeXYMap; // 0x98(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMTAllPlatformConfig
// Size: 0x50 (Inherited: 0x00)
struct FVMTAllPlatformConfig {
public:

	struct TMap<enum class EVirtualMaterialPlatform, struct FVMTPerPlatformConfig> PlatformConfigs; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMTPerPlatformConfig
// Size: 0x50 (Inherited: 0x00)
struct FVMTPerPlatformConfig {
public:

	int32_t EnableConfigIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVMaterialConfig> MaterialConfigs; // 0x08(0x10)
	struct UMaterialInterface* MaterialParent; // 0x18(0x08)
	bool bAllowMaterialSubclass; // 0x20(0x01)
	bool bAllowMaterialUsedInMI; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char HiResPreviewMaterial[0x28]; // 0x28(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMaterialConfig
// Size: 0x38 (Inherited: 0x00)
struct FVMaterialConfig {
public:

	struct FName Title; // 0x00(0x08)
	struct TArray<struct FVMGenTextureConfig> GenTextureConfig; // 0x08(0x10)
	struct TArray<int32_t> GenTextureQualityMips; // 0x18(0x10)
	struct UMaterialInterface* MaterialParent; // 0x28(0x08)
	bool bAllowMaterialSubclass; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMGenTextureConfig
// Size: 0x90 (Inherited: 0x00)
struct FVMGenTextureConfig {
public:

	struct FString Name; // 0x00(0x10)
	struct FIntPoint size; // 0x10(0x08)
	struct FIntPoint MinSize; // 0x18(0x08)
	int32_t DefaultSizeIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UTexture2D* TextureConfigTemplate; // 0x28(0x08)
	struct UMaterialInterface* MaterialUsedToGen; // 0x30(0x08)
	bool bUseMaterialToGenAllMips; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TMap<struct FString, struct FVMSourceTextureProperties> SourceTextureOverridePropertyWhiteList; // 0x40(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMSourceTextureConfig
// Size: 0x18 (Inherited: 0x00)
struct FVMSourceTextureConfig {
public:

	struct FString Name; // 0x00(0x10)
	struct UTexture2D* TextureConfigTemplate; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMIPerPlatformParameters
// Size: 0xa8 (Inherited: 0x00)
struct FVMIPerPlatformParameters {
public:

	/*struct TSoftObjectPtr<UMaterialInterface>*/char Parent[0x28]; // 0x00(0x28)
	struct FStaticParameterSet StaticParameters; // 0x28(0x40)
	struct TArray<struct FScalarParameterValue> ScalarParameters; // 0x68(0x10)
	struct TArray<struct FVectorParameterValue> VectorParameters; // 0x78(0x10)
	struct TArray<struct FVMIPerPlatformTextureParameter> TextureParameters; // 0x88(0x10)
	struct TArray<struct FMaterialTextureInfo> TextureStreamingData; // 0x98(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VirtualMaterialRuntime.VMIPerPlatformData
// Size: 0xb0 (Inherited: 0x00)
struct FVMIPerPlatformData {
public:

	int32_t OverrideTemplateIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVMIPerPlatformParameters MaterialParameters; // 0x08(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
