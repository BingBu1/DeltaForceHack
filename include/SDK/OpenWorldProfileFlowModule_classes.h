
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldProfileFlowModule.ProfileSettingsConfig
// Size: 0x80 (Inherited: 0x30)
class UProfileSettingsConfig : public UObject {
public:

	struct FString TriggerLevelMap; // 0x30(0x10)
	struct TArray<struct FString> ProfileMapLines; // 0x40(0x10)
	struct TArray<struct FString> DefaultCaptureMaps; // 0x50(0x10)
	struct TArray<struct FString> DefaultCaptureMapRuntimeConfigs; // 0x60(0x10)
	struct TArray<struct FString> DefaultProfileMaps; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
