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
	struct Function_GPGlobalDefines_BlueprintFunctionHelper_SnapToGround_Param
	{
	public:

		struct USplineComponent* SplineComp; // 0x00(0x08)
		bool bInAlign; // 0x08(0x01)
	};

	struct Function_GPGlobalDefines_ClientDebugSetting_SaveDataConfig_Param
	{
	public:

	};

	struct Function_GPGlobalDefines_ClientGameSetting_SetUseDof_Param
	{
	public:

		bool InUseDof; // 0x00(0x01)
	};

	struct Function_GPGlobalDefines_ClientSettingDelagate_Get_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClientSettingDelagate* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGlobalDefines_ClientDisplaySetting_SetSafeZoneValue_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_GPGlobalDefines_ClientBaseSetting_SetScopeUseRT_Param
	{
	public:

		bool InUseRT; // 0x00(0x01)
	};

	struct Function_GPGlobalDefines_ClientOtherSetting_SaveDataConfig_Param
	{
	public:

	};

	struct Function_GPGlobalDefines_ClientControlSetting_SetBtnRotated_Param
	{
	public:

		struct FString BtnName; // 0x00(0x10)
		bool bRotated; // 0x10(0x01)
		bool ReturnValue; // 0x11(0x01)
	};

	struct Function_GPGlobalDefines_ClientVehicleSetting_SetSensitivityFactor_Param
	{
	public:

		bool IsFire; // 0x00(0x01)
		enum class EVehicleSensitivityMode VehicleSensitivityMode; // 0x01(0x01)
		bool IsGyro; // 0x02(0x01)
		char pad_3[0x1]; // 0x03(0x01)
		float SensitivityFactor; // 0x04(0x04)
		float VerticalSensitivityFactor; // 0x08(0x04)
		float HorizontalSensitivityFactor; // 0x0c(0x04)
		struct TArray<float> RotationSensitivityArray_Custom; // 0x10(0x10)
	};

	struct Function_GPGlobalDefines_ClientVolumeSetting_SaveDataConfig_Param
	{
	public:

	};

	struct Function_GPGlobalDefines_ClientSensitivitySetting_UpdateCustomSensitivityValues_Param
	{
	public:

		int32_t LevelNum; // 0x00(0x04)
	};

	struct Function_GPGlobalDefines_ClientDownloadSetting_SaveDataConfig_Param
	{
	public:

	};

	struct Function_GPGlobalDefines_ClientChatSetting_SaveDataConfig_Param
	{
	public:

	};

	struct Function_GPGlobalDefines_ClientComminicateSetting_SaveDataConfig_Param
	{
	public:

	};

	struct Function_GPGlobalDefines_ClientSolSetting_SaveDataConfig_Param
	{
	public:

	};

	struct Function_GPGlobalDefines_AdvancedVideoSetting_SetRayTracingEnable_Param
	{
	public:

		bool bEnabled; // 0x00(0x01)
	};

	struct Function_GPGlobalDefines_GPCachePool_RemoveWaitingDestroyObject_Param
	{
	public:

		struct UObject* obj; // 0x00(0x08)
	};

	struct Function_GPGlobalDefines_GPCatenaryUtil_CreateCatenaryPoints_Param
	{
	public:

		struct FVector Point1; // 0x00(0x0c)
		struct FVector Point2; // 0x0c(0x0c)
		float Length; // 0x18(0x04)
		struct FVector Up; // 0x1c(0x0c)
		int32_t NumPoints; // 0x28(0x04)
		char pad_2C[0x4]; // 0x2c(0x04)
		struct TArray<struct FVector> ReturnValue; // 0x30(0x10)
	};

	struct Function_GPGlobalDefines_GPGlobalUtil_IsStandalone_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGlobalDefines_GPWidgetUtil_TransformFromWorldToScreenMarker_Param
	{
	public:

		enum class EMarkerEdgeType MarkerEdgeType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector2D CustomMarkerCircleScale; // 0x04(0x08)
		enum class EMarkerEdgeTrackType MarkerEdgeTrackType; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FMatrix ViewProjectMatrix; // 0x10(0x40)
		struct FVector CameraDir; // 0x50(0x0c)
		struct FVector CameraLoc; // 0x5c(0x0c)
		struct FVector2D ViewportSize; // 0x68(0x08)
		float ViewportScale; // 0x70(0x04)
		struct FVector MarkerWorldLoc; // 0x74(0x0c)
		struct FVector2D MarkerAnchor2CenterOffset; // 0x80(0x08)
		struct FVector2D MarkerScreenPos; // 0x88(0x08)
		bool bOnCameraBack; // 0x90(0x01)
		bool bTrackOnEdge; // 0x91(0x01)
		char pad_92[0x2]; // 0x92(0x02)
		struct FVector2D OutEdgeDir; // 0x94(0x08)
	};

	struct Function_GPGlobalDefines_GPGlobalConfig_SetDebugDrawEnabled_Param
	{
	public:

		bool bValue; // 0x00(0x01)
	};

	struct Function_GPGlobalDefines_GPLevelEnvEvents_FireEnvEvent_Param
	{
	public:

		struct UObject* EventSourceObject; // 0x00(0x08)
		struct FName EventName; // 0x08(0x08)
	};

	struct Function_GPGlobalDefines_GPPlayerInfoUtils_ToString_Param
	{
	public:

		struct FGPPlayerBasicInfo InInfo; // 0x00(0x28)
		struct FString ReturnValue; // 0x28(0x10)
	};

	struct Function_GPGlobalDefines_GPShowActorTags_ShowTagsInEditor_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGlobalDefines_GPSpawnerBase_SpawnActors_Param
	{
	public:

	};

	struct Function_GPGlobalDefines_GPSplineUtil_SnapToGround_Param
	{
	public:

		struct USplineComponent* SplineComp; // 0x00(0x08)
		bool bInAlign; // 0x08(0x01)
	};

	struct Function_GPGlobalDefines_ItemIDUtil_ToUint64_Param
	{
	public:

		struct FItemID ItemID; // 0x00(0x18)
		uint64_t ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGlobalDefines_ItemInterface_GetItemMesh3PPath_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGlobalDefines_GPTriggerBase_TryTrigger_Param
	{
	public:

	};

	struct Function_GPGlobalDefines_ClientSettingHelperHD_SaveToSaved_Param
	{
	public:

	};

	struct Function_GPGlobalDefines_GPEffectTriggerBase_CallBPFunction_Param
	{
	public:

		int32_t Code; // 0x00(0x04)
	};

	struct Function_GPGlobalDefines_ClientBHDSetting_SetZoomratedMDVByIndex_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		float Value; // 0x04(0x04)
	};

	struct Function_GPGlobalDefines_ClientBaseSettingHD_SettingHD_Param
	{
	public:

		struct TArray<struct FString> Args; // 0x00(0x10)
	};

	struct Function_GPGlobalDefines_ClientSensitivitySettingHD_SetZoomratedMDVByIndex_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		float Value; // 0x04(0x04)
	};

	struct Function_GPGlobalDefines_ClientCameraSettingHD_Get_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClientCameraSettingHD* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGlobalDefines_ClientVideoSettingHD_ToggleWindowTitleBar_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGlobalDefines_ClientVehicleSettingHD_SetZoomratedMDVByIndex_Param
	{
	public:

		enum class EMouseSensitivityMode MouseInputType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t Index; // 0x04(0x04)
		float Value; // 0x08(0x04)
	};

	struct Function_GPGlobalDefines_ClientGameSettingHD_Get_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClientGameSettingHD* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGlobalDefines_ClientDisplaySettingHD_Get_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClientDisplaySettingHD* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGlobalDefines_ClientAudioSettingHD_Get_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClientAudioSettingHD* ReturnValue; // 0x08(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
