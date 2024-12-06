
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPSettings.GPScalabilityBlueprintTools
// Size: 0x30 (Inherited: 0x30)
class UGPScalabilityBlueprintTools : public UBlueprintFunctionLibrary {
public:


	void STATIC_SetMaxFPS(float InMaxFPS); // Function GPSettings.GPScalabilityBlueprintTools.SetMaxFPS // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPSettings.HardwareParamHelper
// Size: 0x30 (Inherited: 0x30)
class UHardwareParamHelper : public UObject {
public:


	void STATIC_Warning(struct FString InMessage); // Function GPSettings.HardwareParamHelper.Warning // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPSettings.NvidiaDRSSetting
// Size: 0x30 (Inherited: 0x30)
class UNvidiaDRSSetting : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPSettings.VideoSettingHelper
// Size: 0x30 (Inherited: 0x30)
class UVideoSettingHelper : public UObject {
public:


	bool STATIC_WithACLine(); // Function GPSettings.VideoSettingHelper.WithACLine // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
