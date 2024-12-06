
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum MaterialShaderQualitySettings.EVolGiQuality
enum class EVolGiQuality : int {
	Low = 0,
	Medium = 1,
	High = 2,
	EVolGiQuality_MAX = 3
};

// Enum MaterialShaderQualitySettings.EMaterialQualityTier
enum class EMaterialQualityTier : int {
	Ultra_Low = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Ultra_High = 4,
	EMaterialQualityTier_MAX = 5
};

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : int {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	EMobileCSMQuality_MAX = 3
};

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// Size: 0x0b (Inherited: 0x00)
struct FMaterialQualityOverrides {
public:

	bool bDiscardQualityDuringCook; // 0x00(0x01)
	bool bEnableOverride; // 0x01(0x01)
	bool bForceFullyRough; // 0x02(0x01)
	bool bForceNonMetal; // 0x03(0x01)
	bool bForceDisableLMDirectionality; // 0x04(0x01)
	bool bForceLQReflections; // 0x05(0x01)
	bool bDisableMaterialNormalCalculation; // 0x06(0x01)
	enum class EVolGiQuality VolumeGIQuality; // 0x07(0x01)
	enum class EMobileCSMQuality MobileCSMQuality; // 0x08(0x01)
	enum class EMaterialQualityTier MaterialQualityTier; // 0x09(0x01)
	bool bEnableDitheredLODTransition; // 0x0a(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
