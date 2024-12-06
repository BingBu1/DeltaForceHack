
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x80 (Inherited: 0x30)
class UMaterialShaderQualitySettings : public UObject {
public:

	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x30(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x78 (Inherited: 0x30)
class UShaderPlatformQualitySettings : public UObject {
public:

	struct FMaterialQualityOverrides QualityOverrides[0x5]; // 0x30(0x37)
	char pad_67[0x11]; // 0x67(0x11)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
