/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_GameCore_AppSetting_ResetGameBuildPlatformName_Param
	{
	public:

	};

	struct Function_GameCore_DataTableSystemManagerLiteInterface_GetDataTable_Param
	{
	public:

		struct FName TableName; // 0x00(0x08)
		struct UDataTable* ReturnValue; // 0x08(0x08)
	};

	struct Function_GameCore_DeviceSetting_SetDisturbingMode_Param
	{
	public:

		bool bNoDisturbing; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GameCore_EditorVersionUtils_GetEditorVersionStr_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GameCore_GameResVersion_UpdatePSOVersion_Param
	{
	public:

	};

	struct Function_GameCore_GameVersionUtils_VersionCompare_Param
	{
	public:

		struct FString OriginVersion; // 0x00(0x10)
		struct FString TargetVersion; // 0x10(0x10)
		enum class EGameVersionCompareResult ReturnValue; // 0x20(0x01)
	};

	struct Function_GameCore_GameVersionBlueprintTools_IsShipping_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GameCore_GPBlueprintUtils_TrySetFolderPathInEditor_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		struct FName FolderName; // 0x08(0x08)
	};

	struct Function_GameCore_GPGConfigUtils_SetVector4_Param
	{
	public:

		struct FString Section; // 0x00(0x10)
		struct FString Key; // 0x10(0x10)
		struct FVector4 Value; // 0x20(0x10)
		struct FString IniName; // 0x30(0x10)
	};

	struct Function_GameCore_GPNetModeUtils_IsStandalone_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GameCore_GPSingletonUtils_GetWorldSubsystem_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* Class; // 0x08(0x08)
		struct UWorldSubsystem* ReturnValue; // 0x10(0x08)
	};

	struct Function_GameCore_ParticleSystemGroup_SyncLoad_Param
	{
	public:

		struct UParticleSystem* ReturnValue; // 0x00(0x08)
	};

	struct Function_GameCore_SceneData_FindAllActorsByClass_Param
	{
	public:

	};

	struct Function_GameCore_SceneDataInterface_UnregisterActor_Param
	{
	public:

		struct AActor* InTargetActor; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GameCore_SceneDataInterfaceUtils_GetSceneDataInterface_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UObject* ReturnValue; // 0x08(0x08)
	};

	struct Function_GameCore_DataTableSystemManagerBase_Shutdown_Param
	{
	public:

	};

	struct Function_GameCore_DataTableSystemImpl_RegisterDataTableManager_Param
	{
	public:

	};

	struct Function_GameCore_DataTableSystemManagerLite_SyncPreloadAll_Param
	{
	public:

	};

	struct Function_GameCore_LevelSubsystemExample_TestLevelSubsystem_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
