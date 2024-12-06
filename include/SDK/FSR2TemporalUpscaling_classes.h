
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class FSR2TemporalUpscaling.FSR2Settings
// Size: 0x90 (Inherited: 0x40)
class UFSR2Settings : public UDeveloperSettings {
public:

	bool bEnabled; // 0x40(0x01)
	bool AutoExposure; // 0x41(0x01)
	bool EnabledInEditorViewport; // 0x42(0x01)
	bool UseSSRExperimentalDenoiser; // 0x43(0x01)
	bool UseNativeDX12; // 0x44(0x01)
	bool UseNativeVulkan; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	enum class EFSR2QualityMode QualityMode; // 0x48(0x04)
	enum class EFSR2HistoryFormat HistoryFormat; // 0x4c(0x04)
	enum class EFSR2DeDitherMode DeDither; // 0x50(0x04)
	float Sharpness; // 0x54(0x04)
	bool AdjustMipBias; // 0x58(0x01)
	bool ReactiveMask; // 0x59(0x01)
	bool ForceVertexDeformationOutputsVelocity; // 0x5a(0x01)
	char pad_5B[0x1]; // 0x5b(0x01)
	enum class EFSR2LandscapeHISMMode ForceLandscapeHISMMobility; // 0x5c(0x04)
	float ReflectionScale; // 0x60(0x04)
	float ReflectionLuminanceBias; // 0x64(0x04)
	float RoughnessScale; // 0x68(0x04)
	float RoughnessBias; // 0x6c(0x04)
	float RoughnessMaxDistance; // 0x70(0x04)
	bool ReactiveMaskRoughnessForceMaxDistance; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float TranslucencyBias; // 0x78(0x04)
	float TranslucencyLuminanceBias; // 0x7c(0x04)
	float TranslucencyMaxDistance; // 0x80(0x04)
	float PreDOFTranslucencyScale; // 0x84(0x04)
	bool PreDOFTranslucencyMax; // 0x88(0x01)
	enum class EMaterialShadingModel ReactiveShadingModelID; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	float ForceReactiveMaterialValue; // 0x8c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FSR2TemporalUpscaling.FSR2TemporalUpscalingLibrary
// Size: 0x30 (Inherited: 0x30)
class UFSR2TemporalUpscalingLibrary : public UBlueprintFunctionLibrary {
public:


	enum class UFSR2Support STATIC_QueryFSR2Support(); // Function FSR2TemporalUpscaling.FSR2TemporalUpscalingLibrary.QueryFSR2Support // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
