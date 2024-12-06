
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AkAudio.AkLateReverbComponent
// Size: 0x280 (Inherited: 0x240)
class UAkLateReverbComponent : public USceneComponent {
public:

	char bEnable : 1; // 0x240(0x01)
	char pad_240_1 : 7; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct UAkAuxBus* AuxBus; // 0x248(0x08)
	struct FString AuxBusName; // 0x250(0x10)
	float SendLevel; // 0x260(0x04)
	float FadeRate; // 0x264(0x04)
	float Priority; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct UAkLateReverbComponent* NextLowerPriorityComponent; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAcousticPortal
// Size: 0x520 (Inherited: 0x3b0)
class AAkAcousticPortal : public AVolume {
public:

	enum class AkAcousticPortalState InitialState; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	float ObstructionRefreshInterval; // 0x3b4(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x3b8(0x01)
	char pad_3B9[0x167]; // 0x3b9(0x167)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkPortalComponent
// Size: 0x240 (Inherited: 0x240)
class UAkPortalComponent : public USceneComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAmbientSound
// Size: 0x3b8 (Inherited: 0x378)
class AAkAmbientSound : public AActor {
public:

	struct UAkAudioEvent* AkAudioEvent; // 0x378(0x08)
	struct UAkComponent* AkComponent; // 0x380(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x388(0x01)
	bool AutoPost; // 0x389(0x01)
	char pad_38A[0x2e]; // 0x38a(0x2e)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0x130 (Inherited: 0x30)
class UAkAndroidInitializationSettings : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x68)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x38 (Inherited: 0x30)
class UAkAssetPlatformData : public UObject {
public:

	struct UAkAssetData* CurrentAssetData; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x80 (Inherited: 0x30)
class UAkAssetDataSwitchContainerData : public UObject {
public:

	/*struct TSoftObjectPtr<UAkGroupValue>*/char GroupValue[0x28]; // 0x30(0x28)
	struct UAkGroupValue* DefaultGroupValue; // 0x58(0x08)
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x60(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkCheckBox
// Size: 0xc20 (Inherited: 0x180)
class UAkCheckBox : public UContentWidget {
public:

	char pad_180[0x3e8]; // 0x180(0x3e8)
	enum class ECheckBoxState CheckedState; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	/*struct FDelegate*/char CheckedStateDelegate[0x10]; // 0x56c(0x10)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x580(0x5c8)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xb48(0x01)
	bool IsFocusable; // 0xb49(0x01)
	char pad_B4A[0x6]; // 0xb4a(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xb50(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xb60(0x40)
	/*struct FMulticastInlineDelegate*/char AkOnCheckStateChanged[0x10]; // 0xba0(0x10)
	/*struct FMulticastInlineDelegate*/char OnItemDropped[0x10]; // 0xbb0(0x10)
	/*struct FMulticastInlineDelegate*/char OnPropertyDropped[0x10]; // 0xbc0(0x10)
	char pad_BD0[0x50]; // 0xbd0(0x50)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkEventMemoryStatistics
// Size: 0x30 (Inherited: 0x30)
class UAkEventMemoryStatistics : public UBlueprintFunctionLibrary {
public:


	void STATIC_LogMemInfo(); // Function AkAudio.AkEventMemoryStatistics.LogMemInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkGameplayStatics
// Size: 0x30 (Inherited: 0x30)
class UAkGameplayStatics : public UBlueprintFunctionLibrary {
public:


	bool STATIC_TestGetAudioSamplesFromSinkRecordPlugin(struct TArray<float>& OutSamples); // Function AkAudio.AkGameplayStatics.TestGetAudioSamplesFromSinkRecordPlugin // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkGeometryComponent
// Size: 0x370 (Inherited: 0x240)
class UAkGeometryComponent : public USceneComponent {
public:

	enum class AkMeshType MeshType; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	int32_t LOD; // 0x244(0x04)
	float WeldingThreshold; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x250(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x2a0(0x10)
	char bEnableDiffraction : 1; // 0x2b0(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x2b0(0x01)
	char pad_2B0_2 : 6; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct AActor* AssociatedRoom; // 0x2b8(0x08)
	char pad_2C0[0x10]; // 0x2c0(0x10)
	struct FAkGeometryData GeometryData; // 0x2d0(0x50)
	char pad_320[0x50]; // 0x320(0x50)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0x108 (Inherited: 0x30)
class UAkHololensInitializationSettings : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x110 (Inherited: 0x30)
class UAkIOSInitializationSettings : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkAudioSession AudioSession; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xb0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd8(0x34)
	char pad_10C[0x4]; // 0x10c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x30 (Inherited: 0x30)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary {
public:


	struct FText STATIC_Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x1a8 (Inherited: 0x168)
class UAkItemBoolProperties : public UWidget {
public:

	/*struct FMulticastInlineDelegate*/char OnSelectionChanged[0x10]; // 0x168(0x10)
	/*struct FMulticastInlineDelegate*/char OnPropertyDragged[0x10]; // 0x178(0x10)
	char pad_188[0x20]; // 0x188(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x30 (Inherited: 0x30)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary {
public:


	struct FText STATIC_Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkItemProperties
// Size: 0x1a8 (Inherited: 0x168)
class UAkItemProperties : public UWidget {
public:

	/*struct FMulticastInlineDelegate*/char OnSelectionChanged[0x10]; // 0x168(0x10)
	/*struct FMulticastInlineDelegate*/char OnPropertyDragged[0x10]; // 0x178(0x10)
	char pad_188[0x20]; // 0x188(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0x100 (Inherited: 0x30)
class UAkLinuxInitializationSettings : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkLuminInitializationSettings
// Size: 0xf8 (Inherited: 0x30)
class UAkLuminInitializationSettings : public UObject {
public:

	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0x100 (Inherited: 0x30)
class UAkMacInitializationSettings : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkMediaAssetData
// Size: 0x80 (Inherited: 0x30)
class UAkMediaAssetData : public UObject {
public:

	bool IsStreamed; // 0x30(0x01)
	bool UseDeviceMemory; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString Language; // 0x38(0x10)
	struct FString AssetPlatform; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkPlatformInitialisationSettingsBase
// Size: 0x30 (Inherited: 0x30)
class UAkPlatformInitialisationSettingsBase : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0x100 (Inherited: 0x30)
class UAkPS4InitializationSettings : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkReverbVolume
// Size: 0x3e8 (Inherited: 0x3b0)
class AAkReverbVolume : public AVolume {
public:

	char bEnabled : 1; // 0x3b0(0x01)
	char pad_3B0_1 : 7; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct UAkAuxBus* AuxBus; // 0x3b8(0x08)
	struct FString AuxBusName; // 0x3c0(0x10)
	float SendLevel; // 0x3d0(0x04)
	float FadeRate; // 0x3d4(0x04)
	float Priority; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x3e0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkSettings
// Size: 0x1c0 (Inherited: 0x30)
class UAkSettings : public UObject {
public:

	struct FString EmbodyUserID; // 0x30(0x10)
	/*struct TSoftObjectPtr<UAkInitBank>*/char InitBank[0x28]; // 0x40(0x28)
	bool bUseAssetRegistry; // 0x68(0x01)
	enum class MediaMemReuseRule MediaReuse; // 0x69(0x01)
	enum class LeakingMediaMemTickRule TickLeakingMediaMemRule; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	float ForceUnloadMediaInterval; // 0x6c(0x04)
	bool bUseNewMediaNameRule; // 0x70(0x01)
	char MaxSimultaneousReverbVolumes; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct FFilePath WwiseProjectPath; // 0x78(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x88(0x10)
	bool bAutoConnectToWAAPI; // 0x98(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x99(0x01)
	enum class EAkOcclusionTraceType OcclusionTraceType; // 0x9a(0x01)
	bool bIgnoreSameTraceHitResult; // 0x9b(0x01)
	float HalfThrouthBoundingHeight; // 0x9c(0x04)
	float OccMinExtentXY; // 0xa0(0x04)
	float OccMinExtentZ; // 0xa4(0x04)
	float RoomFloorHeigh; // 0xa8(0x04)
	bool bDebugDrawOcclusionObstruction; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float DebugDrawOccObsRange; // 0xb0(0x04)
	float DebugDrawOccObsLineRange; // 0xb4(0x04)
	struct FString EditorAudioPlatform; // 0xb8(0x10)
	bool bDebugLogAkAudio; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	/*struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap>*/char AkGeometryMap[0x50]; // 0xd0(0x50)
	struct UClass* AkComponentToCreate; // 0x120(0x08)
	bool SplitSwitchContainerMedia; // 0x128(0x01)
	bool SplitMediaPerFolder; // 0x129(0x01)
	bool UseEventBasedPackaging; // 0x12a(0x01)
	bool EnableAutomaticAssetSynchronization; // 0x12b(0x01)
	bool WatcthingWwiseProjectFolderChange; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct FString CommandletCommitMessage; // 0x130(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0x140(0x50)
	bool AskedToUseNewAssetManagement; // 0x190(0x01)
	bool bEnableMultiCoreRendering; // 0x191(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x192(0x01)
	bool FixupRedirectorsDuringMigration; // 0x193(0x01)
	char pad_194[0x4]; // 0x194(0x04)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x198(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x1a8(0x10)
	bool EnsureSoundDataAlwaysCook; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x88 (Inherited: 0x30)
class UAkSettingsPerUser : public UObject {
public:

	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x30(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x40(0x10)
	bool EnableAutomaticAssetSynchronization; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString WaapiIPAddress; // 0x58(0x10)
	uint32_t WaapiPort; // 0x68(0x04)
	bool bAutoConnectToWAAPI; // 0x6c(0x01)
	bool AutoSyncSelection; // 0x6d(0x01)
	bool SuppressWwiseProjectPathWarnings; // 0x6e(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x6f(0x01)
	char pad_70[0x18]; // 0x70(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkSlider
// Size: 0x5c0 (Inherited: 0x168)
class UAkSlider : public UWidget {
public:

	float Value; // 0x168(0x04)
	/*struct FDelegate*/char ValueDelegate[0x10]; // 0x16c(0x10)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FSliderStyle WidgetStyle; // 0x180(0x370)
	enum class EOrientation Orientation; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	struct FLinearColor SliderBarColor; // 0x4f4(0x10)
	struct FLinearColor SliderHandleColor; // 0x504(0x10)
	bool IndentHandle; // 0x514(0x01)
	bool Locked; // 0x515(0x01)
	char pad_516[0x2]; // 0x516(0x02)
	float StepSize; // 0x518(0x04)
	bool IsFocusable; // 0x51c(0x01)
	char pad_51D[0x3]; // 0x51d(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x520(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x530(0x40)
	/*struct FMulticastInlineDelegate*/char OnValueChanged[0x10]; // 0x570(0x10)
	/*struct FMulticastInlineDelegate*/char OnItemDropped[0x10]; // 0x580(0x10)
	/*struct FMulticastInlineDelegate*/char OnPropertyDropped[0x10]; // 0x590(0x10)
	char pad_5A0[0x20]; // 0x5a0(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x3c8 (Inherited: 0x3b0)
class AAkSpatialAudioVolume : public AVolume {
public:

	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x3b0(0x08)
	struct UAkLateReverbComponent* LateReverb; // 0x3b8(0x08)
	struct UAkRoomComponent* Room; // 0x3c0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkSpotReflector
// Size: 0x3a0 (Inherited: 0x378)
class AAkSpotReflector : public AActor {
public:

	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x378(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x380(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x390(0x08)
	float DistanceScalingFactor; // 0x398(0x04)
	float Level; // 0x39c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x280 (Inherited: 0x240)
class UAkSurfaceReflectorSetComponent : public USceneComponent {
public:

	char bEnableSurfaceReflectors : 1; // 0x240(0x01)
	char pad_240_1 : 7; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x248(0x10)
	char bEnableDiffraction : 1; // 0x258(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x258(0x01)
	char pad_258_2 : 6; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct AActor* AssociatedRoom; // 0x260(0x08)
	char pad_268[0x18]; // 0x268(0x18)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0x100 (Inherited: 0x30)
class UAkSwitchInitializationSettings : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0xa0(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x110 (Inherited: 0x30)
class UAkTVOSInitializationSettings : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkAudioSession AudioSession; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xb0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd8(0x34)
	char pad_10C[0x4]; // 0x10c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkWaapiCalls
// Size: 0x30 (Inherited: 0x30)
class UAkWaapiCalls : public UBlueprintFunctionLibrary {
public:


	struct FAKWaapiJsonObject STATIC_Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x30 (Inherited: 0x30)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary {
public:


	struct FText STATIC_Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x30 (Inherited: 0x30)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary {
public:


	struct FAKWaapiJsonObject STATIC_SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x30 (Inherited: 0x30)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary {
public:


	struct FText STATIC_Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0x108 (Inherited: 0x30)
class UAkWindowsInitializationSettings : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkWwiseTree
// Size: 0x1a8 (Inherited: 0x168)
class UAkWwiseTree : public UWidget {
public:

	/*struct FMulticastInlineDelegate*/char OnSelectionChanged[0x10]; // 0x168(0x10)
	/*struct FMulticastInlineDelegate*/char OnItemDragged[0x10]; // 0x178(0x10)
	char pad_188[0x20]; // 0x188(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x1c8 (Inherited: 0x168)
class UAkWwiseTreeSelector : public UWidget {
public:

	/*struct FMulticastInlineDelegate*/char OnSelectionChanged[0x10]; // 0x168(0x10)
	/*struct FMulticastInlineDelegate*/char OnItemDragged[0x10]; // 0x178(0x10)
	char pad_188[0x40]; // 0x188(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0x108 (Inherited: 0x30)
class UAkXboxOneInitializationSettings : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x98(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x3c)
	char pad_104[0x4]; // 0x104(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.InterpTrackAkAudioEvent
// Size: 0xb0 (Inherited: 0x98)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase {
public:

	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x98(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0xb0 (Inherited: 0x98)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase {
public:

	struct FString Param; // 0x98(0x10)
	char bPlayOnReverse : 1; // 0xa8(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x38 (Inherited: 0x30)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst {
public:

	float LastUpdatePosition; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x38 (Inherited: 0x30)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst {
public:

	float LastUpdatePosition; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.JAkPerformanceStatistics
// Size: 0x30 (Inherited: 0x30)
class UJAkPerformanceStatistics : public UBlueprintFunctionLibrary {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1e0 (Inherited: 0xf8)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection {
public:

	char pad_F8[0x40]; // 0xf8(0x40)
	struct UAkAudioEvent* Event; // 0x138(0x08)
	bool RetriggerEvent; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	int32_t ScrubTailLengthMs; // 0x144(0x04)
	bool StopAtSectionEnd; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FString EventName; // 0x150(0x10)
	char pad_160[0x20]; // 0x160(0x20)
	float MaxSourceDuration; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FString MaxDurationSourceID; // 0x188(0x10)
	char pad_198[0x48]; // 0x198(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x280 (Inherited: 0xf8)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection {
public:

	struct UAkRtpc* RTPC; // 0xf8(0x08)
	struct FString Name; // 0x100(0x10)
	struct FRichCurve FloatCurve; // 0x110(0x98)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x1a8(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1d8(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.PostEventAsync
// Size: 0xa8 (Inherited: 0x38)
class UPostEventAsync : public UBlueprintAsyncActionBase {
public:

	/*struct FMulticastInlineDelegate*/char Completed[0x10]; // 0x38(0x10)
	char pad_48[0x60]; // 0x48(0x60)

	struct UPostEventAsync* STATIC_PostEventAsync(/*struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed*/); // Function AkAudio.PostEventAsync.PostEventAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x88 (Inherited: 0x38)
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase {
public:

	/*struct FMulticastInlineDelegate*/char Completed[0x10]; // 0x38(0x10)
	char pad_48[0x40]; // 0x48(0x40)

	struct UPostEventAtLocationAsync* STATIC_PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkGameObject
// Size: 0x260 (Inherited: 0x240)
class UAkGameObject : public USceneComponent {
public:

	struct UAkAudioEvent* AkAudioEvent; // 0x240(0x08)
	struct FString EventName; // 0x248(0x10)
	char pad_258[0x8]; // 0x258(0x08)

	void PostAssociatedAkEventAsync(/*struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingId*/); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAudioType
// Size: 0x48 (Inherited: 0x30)
class UAkAudioType : public UObject {
public:

	uint32_t ShortID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct UObject*> UserData; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkPlatformInfo
// Size: 0x78 (Inherited: 0x30)
class UAkPlatformInfo : public UObject {
public:

	char pad_30[0x48]; // 0x30(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAssetData
// Size: 0x110 (Inherited: 0x30)
class UAkAssetData : public UObject {
public:

	uint32_t CachedHash; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString BankLanguage; // 0x38(0x10)
	char pad_48[0xc8]; // 0x48(0xc8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkCallbackInfo
// Size: 0x38 (Inherited: 0x30)
class UAkCallbackInfo : public UObject {
public:

	struct UAkComponent* AkComponent; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkMediaAsset
// Size: 0x90 (Inherited: 0x30)
class UAkMediaAsset : public UObject {
public:

	uint32_t ID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString MediaName; // 0x38(0x10)
	bool AutoLoad; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UObject*> UserData; // 0x50(0x10)
	struct FString Language; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0x78 (Inherited: 0x60)
class UMovieSceneAkTrack : public UMovieSceneTrack {
public:

	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
	char bIsAMasterTrack : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkComponent
// Size: 0x690 (Inherited: 0x260)
class UAkComponent : public UAkGameObject {
public:

	bool bUseSpatialAudio; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	struct FVector OcclusionTraceOffset; // 0x26c(0x0c)
	char EnableSpotReflectors : 1; // 0x278(0x01)
	char pad_278_1 : 7; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FString DebugName; // 0x280(0x10)
	int32_t DebugIndex; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x298(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x2a0(0x10)
	int32_t EarlyReflectionOrder; // 0x2b0(0x04)
	float EarlyReflectionBusSendGain; // 0x2b4(0x04)
	float EarlyReflectionMaxPathLength; // 0x2b8(0x04)
	float roomReverbAuxBusGain; // 0x2bc(0x04)
	int32_t diffractionMaxEdges; // 0x2c0(0x04)
	int32_t diffractionMaxPaths; // 0x2c4(0x04)
	float diffractionMaxPathLength; // 0x2c8(0x04)
	char DrawFirstOrderReflections : 1; // 0x2cc(0x01)
	char DrawSecondOrderReflections : 1; // 0x2cc(0x01)
	char DrawHigherOrderReflections : 1; // 0x2cc(0x01)
	char DrawDiffraction : 1; // 0x2cc(0x01)
	char DrawOccObs : 1; // 0x2cc(0x01)
	char pad_2CC_5 : 3; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float RoomObstructionValue; // 0x2d0(0x04)
	bool StopWhenOwnerDestroyed; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	float AttenuationScalingFactor; // 0x2d8(0x04)
	float OcclusionRefreshInterval; // 0x2dc(0x04)
	bool bUseReverbVolumes; // 0x2e0(0x01)
	bool bAutoUpdateReverbVolumes; // 0x2e1(0x01)
	char pad_2E2[0x3ae]; // 0x2e2(0x3ae)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkRoomComponent
// Size: 0x290 (Inherited: 0x260)
class UAkRoomComponent : public UAkGameObject {
public:

	char bEnable : 1; // 0x260(0x01)
	char pad_260_1 : 7; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct UAkRoomComponent* NextLowerPriorityComponent; // 0x268(0x08)
	float Priority; // 0x270(0x04)
	float WallOcclusion; // 0x274(0x04)
	float AuxSendLevel; // 0x278(0x04)
	bool AutoPost; // 0x27c(0x01)
	char pad_27D[0x13]; // 0x27d(0x13)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAcousticTexture
// Size: 0x48 (Inherited: 0x48)
class UAkAcousticTexture : public UAkAudioType {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAssetBase
// Size: 0x58 (Inherited: 0x48)
class UAkAssetBase : public UAkAudioType {
public:

	struct UAkAssetPlatformData* PlatformAssetData; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkFolder
// Size: 0xc0 (Inherited: 0x48)
class UAkFolder : public UAkAudioType {
public:

	struct FString UnrealFolderPath; // 0x48(0x10)
	struct FString WwiseFolderPath; // 0x58(0x10)
	char pad_68[0x58]; // 0x68(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkGroupValue
// Size: 0x70 (Inherited: 0x48)
class UAkGroupValue : public UAkAudioType {
public:

	/*struct TArray<struct TSoftObjectPtr<UAkMediaAsset>>*/char MediaDependencies[0x10]; // 0x48(0x10)
	uint32_t GroupShortID; // 0x58(0x04)
	char pad_5C[0x14]; // 0x5c(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkRtpc
// Size: 0x48 (Inherited: 0x48)
class UAkRtpc : public UAkAudioType {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkTrigger
// Size: 0x48 (Inherited: 0x48)
class UAkTrigger : public UAkAudioType {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkAndroidPlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkHololensPlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkHololensPlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkIOSPlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkIOSPlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkLinuxPlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkLuminPlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkLuminPlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkMacPlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkMacPlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkPS4PlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkPS4PlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkSwitchPlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkSwitchPlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkTVOSPlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkWin32PlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkWin32PlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkWin64PlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkWin64PlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkXboxOnePlatformInfo : public UAkPlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAssetDataWithMedia
// Size: 0x170 (Inherited: 0x110)
class UAkAssetDataWithMedia : public UAkAssetData {
public:

	struct TArray<struct UAkMediaAsset*> MediaList; // 0x110(0x10)
	char pad_120[0x50]; // 0x120(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x40 (Inherited: 0x38)
class UAkEventCallbackInfo : public UAkCallbackInfo {
public:

	int32_t PlayingId; // 0x38(0x04)
	int32_t EventId; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x78 (Inherited: 0x38)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo {
public:

	int32_t PlayingId; // 0x38(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x3c(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString UserCueName; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x90 (Inherited: 0x90)
class UAkLocalizedMediaAsset : public UAkMediaAsset {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkExternalMediaAsset
// Size: 0xf0 (Inherited: 0x90)
class UAkExternalMediaAsset : public UAkMediaAsset {
public:

	char pad_90[0x60]; // 0x90(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x78 (Inherited: 0x78)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x78 (Inherited: 0x78)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x6c0 (Inherited: 0x690)
class UAkAudioInputComponent : public UAkComponent {
public:

	char pad_690[0x30]; // 0x690(0x30)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAudioBank
// Size: 0x120 (Inherited: 0x58)
class UAkAudioBank : public UAkAssetBase {
public:

	bool AutoLoad; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	/*struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>>*/char LocalizedPlatformAssetDataMap[0x50]; // 0x60(0x50)
	/*struct TSet<struct TSoftObjectPtr<UAkAudioEvent>>*/char LinkedAkEvents[0x50]; // 0xb0(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0x100(0x08)
	char pad_108[0x18]; // 0x108(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAudioEvent
// Size: 0xe8 (Inherited: 0x58)
class UAkAudioEvent : public UAkAssetBase {
public:

	struct TMap<struct FString, struct UAkAssetPlatformData*> LocalizedPlatformAssetDataMap; // 0x58(0x50)
	struct UAkAudioBank* RequiredBank; // 0xa8(0x08)
	char pad_B0[0x18]; // 0xb0(0x18)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xc8(0x08)
	float MaxAttenuationRadius; // 0xd0(0x04)
	bool IsInfinite; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float MinimumDuration; // 0xd8(0x04)
	float MaximumDuration; // 0xdc(0x04)
	uint32_t StopShortID; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)

	uint32_t GetStopShortID(); // Function AkAudio.AkAudioEvent.GetStopShortID // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAuxBus
// Size: 0x60 (Inherited: 0x58)
class UAkAuxBus : public UAkAssetBase {
public:

	struct UAkAudioBank* RequiredBank; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkInitBank
// Size: 0x78 (Inherited: 0x58)
class UAkInitBank : public UAkAssetBase {
public:

	struct TArray<struct FString> AvailableAudioCultures; // 0x58(0x10)
	struct FString DefaultLanguage; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkStateValue
// Size: 0x70 (Inherited: 0x70)
class UAkStateValue : public UAkGroupValue {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkSwitchValue
// Size: 0x70 (Inherited: 0x70)
class UAkSwitchValue : public UAkGroupValue {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x78 (Inherited: 0x78)
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAssetDataSwitchContainer
// Size: 0x1d8 (Inherited: 0x170)
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia {
public:

	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x170(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0x180(0x08)
	struct TMap<uint32_t, struct UAkAssetDataSwitchContainerData*> PendingSwitchLoads; // 0x188(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkInitBankAssetData
// Size: 0x180 (Inherited: 0x170)
class UAkInitBankAssetData : public UAkAssetDataWithMedia {
public:

	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x170(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x48 (Inherited: 0x40)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo {
public:

	char pad_40[0x8]; // 0x40(0x08)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x58 (Inherited: 0x40)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo {
public:

	int32_t Identifier; // 0x40(0x04)
	int32_t Position; // 0x44(0x04)
	struct FString Label; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x58 (Inherited: 0x40)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo {
public:

	float Duration; // 0x40(0x04)
	float EstimatedDuration; // 0x44(0x04)
	int32_t AudioNodeID; // 0x48(0x04)
	int32_t MediaID; // 0x4c(0x04)
	bool bStreaming; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AkAudio.AkAudioEventData
// Size: 0x378 (Inherited: 0x1d8)
class UAkAudioEventData : public UAkAssetDataSwitchContainer {
public:

	float MaxAttenuationRadius; // 0x1d8(0x04)
	bool IsInfinite; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
	float MinimumDuration; // 0x1e0(0x04)
	float MaximumDuration; // 0x1e4(0x04)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0x1e8(0x50)
	/*struct TSet<struct UAkAudioEvent*>*/char PostedEvents[0x50]; // 0x238(0x50)
	/*struct TSet<struct UAkAuxBus*>*/char UserDefinedSends[0x50]; // 0x288(0x50)
	/*struct TSet<struct UAkTrigger*>*/char PostedTriggers[0x50]; // 0x2d8(0x50)
	/*struct TSet<struct UAkGroupValue*>*/char GroupValues[0x50]; // 0x328(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
