
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : int {
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5
};

// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
// Size: 0x10 (Inherited: 0x00)
struct FPlatformRuntimeAudioCompressionOverrides {
public:

	bool bOverrideCompressionTimes; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DurationThreshold; // 0x04(0x04)
	int32_t MaxNumRandomBranches; // 0x08(0x04)
	int32_t SoundCueQualityIndex; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
