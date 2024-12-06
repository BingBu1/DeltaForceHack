
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class PerfGear.FXProxyActor
// Size: 0x458 (Inherited: 0x378)
class AFXProxyActor : public AActor {
public:

	struct TMap<enum class EFXQualityLevel, struct FFXInstance> Templates; // 0x378(0x50)
	struct TMap<enum class EFXQualityLevel, struct FFXInstance> HDTemplates; // 0x3c8(0x50)
	bool bAutoActivate; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	char bPostUpdateTickGroup : 1; // 0x41c(0x01)
	char pad_41C_1 : 7; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	float CullingDistance; // 0x420(0x04)
	enum class EFXQualityLevel CurrentQualityLevel; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	struct UParticleSystemComponent* PSC; // 0x428(0x08)
	bool bDSActivatePSC; // 0x430(0x01)
	char pad_431[0x27]; // 0x431(0x27)

	void Test_SetDSActivatePSC_True(); // Function PerfGear.FXProxyActor.Test_SetDSActivatePSC_True // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PerfGear.FXProxyActorManager
// Size: 0x30 (Inherited: 0x30)
class UFXProxyActorManager : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PerfGear.DeviceFakeQualityConfig
// Size: 0xa8 (Inherited: 0x40)
class UDeviceFakeQualityConfig : public UDeveloperSettings {
public:

	struct FFakeQualityLevelSetting Device1FakeQualityConfig; // 0x40(0x14)
	struct FFakeQualityLevelSetting Device2FakeQualityConfig; // 0x54(0x14)
	struct FFakeQualityLevelSetting Device3FakeQualityConfig; // 0x68(0x14)
	struct FFakeQualityLevelSetting Device4FakeQualityConfig; // 0x7c(0x14)
	struct FFakeQualityLevelSetting Device5FakeQualityConfig; // 0x90(0x14)
	char pad_A4[0x4]; // 0xa4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PerfGear.PerfGearMode
// Size: 0x50 (Inherited: 0x40)
class UPerfGearMode : public UDeveloperSettings {
public:

	struct TArray<struct FString> ModeNames; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PerfGear.PerfGearPipeline
// Size: 0x658 (Inherited: 0x30)
class UPerfGearPipeline : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnQualityChanged[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFPSChanged[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnQualityApplied[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnDeviceLevelSet[0x10]; // 0x60(0x10)
	char pad_70[0x5e8]; // 0x70(0x5e8)

	void SetSwitchStatus(struct FString InParamName, struct FString InMode, enum class ESwitchStatus& InStatus); // Function PerfGear.PerfGearPipeline.SetSwitchStatus // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PerfGear.PerfGearFuncLib
// Size: 0x30 (Inherited: 0x30)
class UPerfGearFuncLib : public UBlueprintFunctionLibrary {
public:


	struct FPSClampSetting STATIC_MakeFPSClampSetting(enum class EPerfGearQualityLevel InQualityLevel, enum class EPerfGearQualityLevel InOriFpsLevel, enum class EPerfGearQualityLevel InOverrideFpsLevel); // Function PerfGear.PerfGearFuncLib.MakeFPSClampSetting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PerfGear.PerfGearAndroidPadSizeConfig
// Size: 0xb8 (Inherited: 0x40)
class UPerfGearAndroidPadSizeConfig : public UDeveloperSettings {
public:

	struct FGPMAndroidPadSizeConfig SmallPadConfig; // 0x40(0x28)
	struct FGPMAndroidPadSizeConfig MidPadConfig; // 0x68(0x28)
	struct FGPMAndroidPadSizeConfig BigPadConfig; // 0x90(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PerfGear.PerfGearPlatformConfig
// Size: 0x70 (Inherited: 0x40)
class UPerfGearPlatformConfig : public UDeveloperSettings {
public:

	struct TArray<struct FQualityFpsSetting> AndroidSettings; // 0x40(0x10)
	struct TArray<struct FQualityFpsSetting> IOSSettings; // 0x50(0x10)
	struct TArray<struct FQualityFpsSetting> PCSettings; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PerfGear.PerfGearQualityFPSManager
// Size: 0x1f0 (Inherited: 0x30)
class UPerfGearQualityFPSManager : public UObject {
public:

	char pad_30[0x1c0]; // 0x30(0x1c0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
