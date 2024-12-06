
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GameCore.AnimNotify_PlayParticleEffectGroup
// Size: 0x90 (Inherited: 0x40)
class UAnimNotify_PlayParticleEffectGroup : public UAnimNotify {
public:

	struct UParticleSystemGroup* PSGTemplate; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	struct FVector Scale; // 0x60(0x0c)
	char pad_6C[0x14]; // 0x6c(0x14)
	char Attached : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FName SocketName; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.AppSetting
// Size: 0x5a0 (Inherited: 0x30)
class UAppSetting : public UObject {
public:

	struct FName Name; // 0x30(0x08)
	struct FAppSettingRow Setting; // 0x38(0x568)

	void STATIC_ResetGameBuildPlatformName(); // Function GameCore.AppSetting.ResetGameBuildPlatformName // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.AppSettingsExtend
// Size: 0x80 (Inherited: 0x30)
class UAppSettingsExtend : public UObject {
public:

	struct TMap<struct FString, struct FAppSettingRow> Settings; // 0x30(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.AssetBaseManager
// Size: 0x210 (Inherited: 0x30)
class UAssetBaseManager : public UObject {
public:

	char pad_30[0x18]; // 0x30(0x18)
	struct UAssetBaseManagerSetting* CachedSettings; // 0x48(0x08)
	char pad_50[0x1c0]; // 0x50(0x1c0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.AssetBaseManagerSetting
// Size: 0x58 (Inherited: 0x30)
class UAssetBaseManagerSetting : public UObject {
public:

	/*struct TSoftObjectPtr<UDataTable>*/char AssetRetargetTablePath[0x28]; // 0x30(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.AssetStore
// Size: 0x30 (Inherited: 0x30)
class UAssetStore : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.BaseGameInstance
// Size: 0x1d8 (Inherited: 0x1a8)
class UBaseGameInstance : public UGameInstance {
public:

	char pad_1A8[0x30]; // 0x1a8(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.DataTableAssetInfoManager
// Size: 0x38 (Inherited: 0x30)
class UDataTableAssetInfoManager : public UObject {
public:

	struct UDataTable* DataTableCache; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.DataTableSystemImplDS
// Size: 0x38 (Inherited: 0x38)
class UDataTableSystemImplDS : public UEngineSubsystem {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.DataTableSystemInterface
// Size: 0x30 (Inherited: 0x30)
class UDataTableSystemInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.DataTableSystemManagerLiteInterface
// Size: 0x30 (Inherited: 0x30)
class UDataTableSystemManagerLiteInterface : public UInterface {
public:


	struct UDataTable* GetDataTable(struct FName& TableName); // Function GameCore.DataTableSystemManagerLiteInterface.GetDataTable // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.DataTableSystemPlayerImpl
// Size: 0xe0 (Inherited: 0x38)
class UDataTableSystemPlayerImpl : public UGameInstanceSubsystem {
public:

	char pad_38[0x58]; // 0x38(0x58)
	struct TMap<struct FString, struct UDataTable*> TableNameAndHash2DataTable; // 0x90(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.DeviceSetting
// Size: 0x30 (Inherited: 0x30)
class UDeviceSetting : public UObject {
public:


	bool STATIC_SetDisturbingMode(bool bNoDisturbing); // Function GameCore.DeviceSetting.SetDisturbingMode // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.EditorVersionUtils
// Size: 0x30 (Inherited: 0x30)
class UEditorVersionUtils : public UBlueprintFunctionLibrary {
public:


	struct FString STATIC_GetEditorVersionStr(); // Function GameCore.EditorVersionUtils.GetEditorVersionStr // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GameResVersion
// Size: 0x60 (Inherited: 0x30)
class UGameResVersion : public UObject {
public:

	struct FString GameResVersionStr; // 0x30(0x10)
	struct FString GameResNewVersionStr; // 0x40(0x10)
	struct FString PSOVersionStr; // 0x50(0x10)

	void STATIC_UpdatePSOVersion(); // Function GameCore.GameResVersion.UpdatePSOVersion // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GameVersionUtils
// Size: 0x120 (Inherited: 0x30)
class UGameVersionUtils : public UObject {
public:

	struct FString GameVersionStr; // 0x30(0x10)
	struct FString WeGameVersionStr; // 0x40(0x10)
	struct FString GameAppVersionStr; // 0x50(0x10)
	struct FString GameResVersionStr; // 0x60(0x10)
	int32_t SVNRevision; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString CIPipeline; // 0x78(0x10)
	struct FString CIBuildNum; // 0x88(0x10)
	struct FString CIBuildTime; // 0x98(0x10)
	struct FString SyncFullTime; // 0xa8(0x10)
	enum class EGameBuildConfiguration GameBuildConfiguration; // 0xb8(0x01)
	enum class EGameBuildRegion GameBuildRegion; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct TArray<struct FString> LatestGameCommits; // 0xc0(0x10)
	struct TArray<struct FString> LatestEngineCommits; // 0xd0(0x10)
	struct TArray<struct FString> OpenWorldBuildVersions; // 0xe0(0x10)
	bool bOpenMicrocosm; // 0xf0(0x01)
	bool bDisableShaderCompile; // 0xf1(0x01)
	bool bDisableLog; // 0xf2(0x01)
	bool bDownloadBaseDlcOnly; // 0xf3(0x01)
	bool bSupportLitePackage; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FString LanguageInAPK; // 0xf8(0x10)
	struct TArray<struct FString> ClearFilePaths; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)

	enum class EGameVersionCompareResult STATIC_VersionCompare(struct FString OriginVersion, struct FString TargetVersion); // Function GameCore.GameVersionUtils.VersionCompare // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GameVersionBlueprintTools
// Size: 0x30 (Inherited: 0x30)
class UGameVersionBlueprintTools : public UBlueprintFunctionLibrary {
public:


	bool STATIC_IsShipping(); // Function GameCore.GameVersionBlueprintTools.IsShipping // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.WorldSingletonCollection
// Size: 0x88 (Inherited: 0x38)
class UWorldSingletonCollection : public UWorldSubsystem {
public:

	struct TMap<struct UClass*, struct UObject*> InstMap; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GameInstanceSingletonCollection
// Size: 0x88 (Inherited: 0x38)
class UGameInstanceSingletonCollection : public UGameInstanceSubsystem {
public:

	struct TMap<struct UClass*, struct UObject*> InstMap; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.EngineSingletonCollection
// Size: 0x88 (Inherited: 0x38)
class UEngineSingletonCollection : public UEngineSubsystem {
public:

	struct TMap<struct UClass*, struct UObject*> InstMap; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.WorldSingletonHelper
// Size: 0x38 (Inherited: 0x30)
class UWorldSingletonHelper : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GameInstanceSingletonHelper
// Size: 0x38 (Inherited: 0x30)
class UGameInstanceSingletonHelper : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.EngineSingletonHelper
// Size: 0x38 (Inherited: 0x30)
class UEngineSingletonHelper : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GPBlueprintUtils
// Size: 0x30 (Inherited: 0x30)
class UGPBlueprintUtils : public UBlueprintFunctionLibrary {
public:


	void STATIC_TrySetFolderPathInEditor(struct AActor* Actor, struct FName FolderName); // Function GameCore.GPBlueprintUtils.TrySetFolderPathInEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GPGConfigUtils
// Size: 0x30 (Inherited: 0x30)
class UGPGConfigUtils : public UBlueprintFunctionLibrary {
public:


	void STATIC_SetVector4(struct FString Section, struct FString Key, struct FVector4& Value, struct FString IniName); // Function GameCore.GPGConfigUtils.SetVector4 // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GPNetModeUtils
// Size: 0x30 (Inherited: 0x30)
class UGPNetModeUtils : public UBlueprintFunctionLibrary {
public:


	bool STATIC_IsStandalone(struct UObject* WorldContextObject); // Function GameCore.GPNetModeUtils.IsStandalone // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.WorldSubsystemExample
// Size: 0x38 (Inherited: 0x38)
class UWorldSubsystemExample : public UWorldSubsystem {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GameInstanceSubsystemExample
// Size: 0x38 (Inherited: 0x38)
class UGameInstanceSubsystemExample : public UGameInstanceSubsystem {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.NormalActorSingletonExample
// Size: 0x388 (Inherited: 0x378)
class ANormalActorSingletonExample : public AActor {
public:

	char pad_378[0x10]; // 0x378(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.NormalWorldObjectSingletonExample
// Size: 0x40 (Inherited: 0x30)
class UNormalWorldObjectSingletonExample : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.NormalGameInstanceObjectSingletonExample
// Size: 0x30 (Inherited: 0x30)
class UNormalGameInstanceObjectSingletonExample : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GPSingletonUtils
// Size: 0x30 (Inherited: 0x30)
class UGPSingletonUtils : public UBlueprintFunctionLibrary {
public:


	struct UWorldSubsystem* STATIC_GetWorldSubsystem(struct UObject* WorldContextObject, struct UClass* Class); // Function GameCore.GPSingletonUtils.GetWorldSubsystem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GPSubsystemManagerImpl
// Size: 0x58 (Inherited: 0x38)
class UGPSubsystemManagerImpl : public UGameInstanceSubsystem {
public:

	char pad_38[0x20]; // 0x38(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GPSubsystemManagerInterface
// Size: 0x30 (Inherited: 0x30)
class UGPSubsystemManagerInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GPWorldSettingsBase
// Size: 0x590 (Inherited: 0x588)
class AGPWorldSettingsBase : public AWorldSettings {
public:

	struct UClass* SubsystemConfig; // 0x588(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.LevelSubsystemConfig
// Size: 0x40 (Inherited: 0x30)
class ULevelSubsystemConfig : public UObject {
public:

	struct TArray<struct UClass*> SubsystemClasses; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.LevelSubsystemCollection
// Size: 0xc8 (Inherited: 0x38)
class ULevelSubsystemCollection : public UWorldSubsystem {
public:

	struct TMap<struct UClass*, struct ALevelSubsystem*> LevelSubsystemMap; // 0x38(0x50)
	char pad_88[0x28]; // 0x88(0x28)
	struct ULevelSubsystemConfig* LevelSubsystemConfig; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.ParticleSystemGroup
// Size: 0xb0 (Inherited: 0x38)
class UParticleSystemGroup : public UDataAsset {
public:

	struct TMap<enum class EFXQualityLevel, struct FFXInstance> Templates; // 0x38(0x50)
	enum class EFXQualityLevel CurrentQualityLevel; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	/*struct FMulticastInlineDelegate*/char OnParticleSystemGroupInit[0x10]; // 0x90(0x10)
	struct UParticleSystem* CurrentParticleSystem; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)

	struct UParticleSystem* SyncLoad(); // Function GameCore.ParticleSystemGroup.SyncLoad // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.SceneData
// Size: 0xb0 (Inherited: 0x38)
class USceneData : public UWorldSubsystem {
public:

	char pad_38[0x78]; // 0x38(0x78)

	void FindAllActorsByClass(struct UClass* InTargetType); // Function GameCore.SceneData.FindAllActorsByClass // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.SceneDataInterface
// Size: 0x30 (Inherited: 0x30)
class USceneDataInterface : public UInterface {
public:


	bool UnregisterActor(struct AActor* InTargetActor); // Function GameCore.SceneDataInterface.UnregisterActor // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.SceneDataInterfaceUtils
// Size: 0x30 (Inherited: 0x30)
class USceneDataInterfaceUtils : public UObject {
public:


	struct UObject* STATIC_GetSceneDataInterface(struct UObject* WorldContextObject); // Function GameCore.SceneDataInterfaceUtils.GetSceneDataInterface // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.DataTableSystemManagerBase
// Size: 0x38 (Inherited: 0x30)
class UDataTableSystemManagerBase : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	void Shutdown(); // Function GameCore.DataTableSystemManagerBase.Shutdown // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.GPSubsystemBase
// Size: 0x38 (Inherited: 0x38)
class UGPSubsystemBase : public UGameInstanceSubsystem {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.LevelSubsystem
// Size: 0x378 (Inherited: 0x378)
class ALevelSubsystem : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.CSV2DatatableManager
// Size: 0x48 (Inherited: 0x38)
class UCSV2DatatableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.DataTableSystemImpl
// Size: 0xa8 (Inherited: 0x38)
class UDataTableSystemImpl : public UGPSubsystemBase {
public:

	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct UDataTableSystemManagerBase*> DataManagerList; // 0x40(0x10)
	struct TMap<struct UClass*, struct UDataTableSystemManagerBase*> DataManagerMap; // 0x50(0x50)
	char pad_A0[0x8]; // 0xa0(0x08)

	void RegisterDataTableManager(); // Function GameCore.DataTableSystemImpl.RegisterDataTableManager // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.DataTableSystemManagerLite
// Size: 0x250 (Inherited: 0x38)
class UDataTableSystemManagerLite : public UGPSubsystemBase {
public:

	char pad_38[0x20]; // 0x38(0x20)
	struct UDataTableAssetInfoManager* DataTableAssetInfo; // 0x58(0x08)
	/*struct FMulticastInlineDelegate*/char OnPreloadFinishPreHandleDelegate[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnPreloadFinishDelegate[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char OnTableReadyDelegate[0x10]; // 0x80(0x10)
	/*struct FMulticastInlineDelegate*/char OnTableResetDelegate[0x10]; // 0x90(0x10)
	/*struct FMulticastInlineDelegate*/char OnTableReloadDelegate[0x10]; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
	/*struct FMulticastInlineDelegate*/char OnInitResourcesCallBack[0x10]; // 0xc0(0x10)
	/*struct FMulticastInlineDelegate*/char OnBeginLoadDataTableCallBack[0x10]; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)
	struct TMap<struct FString, struct UDataTable*> DataTableReferenceMap; // 0xf0(0x50)
	char pad_140[0x110]; // 0x140(0x110)

	void SyncPreloadAll(); // Function GameCore.DataTableSystemManagerLite.SyncPreloadAll // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameCore.LevelSubsystemExample
// Size: 0x378 (Inherited: 0x378)
class ALevelSubsystemExample : public ALevelSubsystem {
public:


	void TestLevelSubsystem(); // Function GameCore.LevelSubsystemExample.TestLevelSubsystem // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
