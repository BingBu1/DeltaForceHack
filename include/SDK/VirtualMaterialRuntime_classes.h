
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class VirtualMaterialRuntime.VirtualMaterialInstanceConstant
// Size: 0x2d0 (Inherited: 0x2c8)
class UVirtualMaterialInstanceConstant : public UMaterialInstanceConstant {
public:

	char pad_2C8[0x8]; // 0x2c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VirtualMaterialRuntime.VirtualMaterialSettings
// Size: 0x1d8 (Inherited: 0x40)
class UVirtualMaterialSettings : public UDeveloperSettings {
public:

	uint32_t DefaultConfigIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TMap<enum class EVirtualMaterialPlatform, struct FString> PlatformGenTextureSaveDir; // 0x48(0x50)
	bool bUseSmartSubDir; // 0x98(0x01)
	bool bAutoGenOnPostSaveMaterialInstance; // 0x99(0x01)
	bool bAllowValidation; // 0x9a(0x01)
	bool bAllowValidation_VMTextureSize; // 0x9b(0x01)
	bool bAllowValidation_VMTextureGroup; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct TArray<struct FString> VMBaseMaterialUsedInMIAllowRegex; // 0xa0(0x10)
	bool bShowVMExt; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TMap<enum class EVirtualMaterialPlatform, struct FString> PlatformGenerateTextureRecordFilePath; // 0xb8(0x50)
	struct FString Comment; // 0x108(0x10)
	struct FVMSourceTextureProperties TemplateTexturePropertyBlackList; // 0x118(0x10)
	struct TMap<struct FString, struct FVMSourceTextureProperties> SourceTexturePropertyWhiteList; // 0x128(0x50)
	struct TArray<struct FString> ExcludePathOfTexturesFromRefreshVMTexturesProperty; // 0x178(0x10)
	struct TMap<struct FString, struct FString> ExcludeMetaDataValueEqualFromRefreshVMTexturesProperty; // 0x188(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VirtualMaterialRuntime.VirtualMaterialTemplate
// Size: 0x30 (Inherited: 0x30)
class UVirtualMaterialTemplate : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
