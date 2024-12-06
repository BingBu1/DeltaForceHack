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
	struct Function_Engine_World_SetWorldScale_Param
	{
	public:

		enum class EWorldScale InWorldScale; // 0x00(0x01)
	};

	struct Function_Engine_World_SetSubWorldScale_Param
	{
	public:

		enum class EWorldScale InWorldScale; // 0x00(0x01)
	};

	struct Function_Engine_World_SetMiniWorld_Param
	{
	public:

		bool bInEnable; // 0x00(0x01)
	};

	struct Function_Engine_World_RestoreWorldScaleFromWorldSetting_Param
	{
	public:

	};

	struct Function_Engine_World_ResetSubWorldScale_Param
	{
	public:

	};

	struct Function_Engine_World_K2_GetWorldSettings_Param
	{
	public:

		struct AWorldSettings* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_World_HandleTimelineScrubbed_Param
	{
	public:

	};

	struct Function_Engine_World_GetWorldScale_Param
	{
	public:

		enum class EWorldScale ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_World_GetMiniWorld_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_OnlineBlueprintCallProxyBase_Activate_Param
	{
	public:

	};

	struct Function_Engine_PlayerInput_SetMouseSensitivity_Param
	{
	public:

		float Sensitivity; // 0x00(0x04)
	};

	struct Function_Engine_PlayerInput_SetBind_Param
	{
	public:

		struct FName BindName; // 0x00(0x08)
		struct FString Command; // 0x08(0x10)
	};

	struct Function_Engine_PlayerInput_InvertAxisKey_Param
	{
	public:

		struct FKey AxisKey; // 0x00(0x18)
	};

	struct Function_Engine_PlayerInput_InvertAxis_Param
	{
	public:

		struct FName AxisName; // 0x00(0x08)
	};

	struct Function_Engine_PlayerInput_ClearSmoothing_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_Walk_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_ViewSelf_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_ViewPlayer_Param
	{
	public:

		struct FString S; // 0x00(0x10)
	};

	struct Function_Engine_CheatManager_ViewClass_Param
	{
	public:

		struct UClass* DesiredClass; // 0x00(0x08)
	};

	struct Function_Engine_CheatManager_ViewActor_Param
	{
	public:

		struct FName ActorName; // 0x00(0x08)
	};

	struct Function_Engine_CheatManager_UpdateSafeArea_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_ToggleServerStatReplicatorUpdateStatNet_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_ToggleServerStatReplicatorClientOverwrite_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_ToggleDebugCamera_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_ToggleAILogging_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_TestCollisionDistance_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_Teleport_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_Summon_Param
	{
	public:

		struct FString ClassName; // 0x00(0x10)
	};

	struct Function_Engine_CheatManager_StreamLevelOut_Param
	{
	public:

		struct FName PackageName; // 0x00(0x08)
	};

	struct Function_Engine_CheatManager_StreamLevelIn_Param
	{
	public:

		struct FName PackageName; // 0x00(0x08)
	};

	struct Function_Engine_CheatManager_SpawnServerStatReplicator_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_Slomo_Param
	{
	public:

		float NewTimeDilation; // 0x00(0x04)
	};

	struct Function_Engine_CheatManager_SetWorldOrigin_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_SetMouseSensitivityToDefault_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_ServerToggleAILogging_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_ReceiveInitCheatManager_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_ReceiveEndPlay_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_PlayersOnly_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_OnlyLoadLevel_Param
	{
	public:

		struct FName PackageName; // 0x00(0x08)
	};

	struct Function_Engine_CheatManager_LogLoc_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_InvertMouse_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_God_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_Ghost_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_FreezeFrame_Param
	{
	public:

		float Delay; // 0x00(0x04)
	};

	struct Function_Engine_CheatManager_Fly_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_FlushLog_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_EnableDebugCamera_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DumpVoiceMutingState_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DumpPartyState_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DumpOnlineSessionState_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DumpChatState_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DisableDebugCamera_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DestroyTarget_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DestroyServerStatReplicator_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DestroyPawns_Param
	{
	public:

		struct UClass* aClass; // 0x00(0x08)
	};

	struct Function_Engine_CheatManager_DestroyAllPawnsExceptTarget_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DestroyAll_Param
	{
	public:

		struct UClass* aClass; // 0x00(0x08)
	};

	struct Function_Engine_CheatManager_DebugCapsuleSweepSize_Param
	{
	public:

		float HalfHeight; // 0x00(0x04)
		float radius; // 0x04(0x04)
	};

	struct Function_Engine_CheatManager_DebugCapsuleSweepPawn_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DebugCapsuleSweepComplex_Param
	{
	public:

		bool bTraceComplex; // 0x00(0x01)
	};

	struct Function_Engine_CheatManager_DebugCapsuleSweepClear_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DebugCapsuleSweepChannel_Param
	{
	public:

		enum class ECollisionChannel Channel; // 0x00(0x01)
	};

	struct Function_Engine_CheatManager_DebugCapsuleSweepCapture_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DebugCapsuleSweep_Param
	{
	public:

	};

	struct Function_Engine_CheatManager_DamageTarget_Param
	{
	public:

		float DamageAmount; // 0x00(0x04)
	};

	struct Function_Engine_CheatManager_CheatScript_Param
	{
	public:

		struct FString ScriptName; // 0x00(0x10)
	};

	struct Function_Engine_CheatManager_ChangeSize_Param
	{
	public:

		float F; // 0x00(0x04)
	};

	struct Function_Engine_CheatManager_BugItStringCreator_Param
	{
	public:

		struct FVector ViewLocation; // 0x00(0x0c)
		struct FRotator ViewRotation; // 0x0c(0x0c)
		struct FString GoString; // 0x18(0x10)
		struct FString LocString; // 0x28(0x10)
	};

	struct Function_Engine_CheatManager_BugItGo_Param
	{
	public:

		float X; // 0x00(0x04)
		float Y; // 0x04(0x04)
		float Z; // 0x08(0x04)
		float Pitch; // 0x0c(0x04)
		float Yaw; // 0x10(0x04)
		float Roll; // 0x14(0x04)
	};

	struct Function_Engine_CheatManager_BugIt_Param
	{
	public:

		struct FString ScreenShotDescription; // 0x00(0x10)
	};

	struct Function_Engine_GameUserSettings_ValidateSettings_Param
	{
	public:

	};

	struct Function_Engine_GameUserSettings_SupportsHDRDisplayOutput_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_SetVSyncEnabled_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_SetVisualEffectQuality_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetViewDistanceQuality_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetToDefaults_Param
	{
	public:

	};

	struct Function_Engine_GameUserSettings_SetTextureQuality_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetShadowQuality_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetShadingQuality_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetScreenResolution_Param
	{
	public:

		struct FIntPoint Resolution; // 0x00(0x08)
	};

	struct Function_Engine_GameUserSettings_SetResolutionScaleValueEx_Param
	{
	public:

		float NewScaleValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetResolutionScaleValue_Param
	{
	public:

		int32_t NewScaleValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetResolutionScaleNormalized_Param
	{
	public:

		float NewScaleNormalized; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetPostProcessingQuality_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetOverallScalabilityLevel_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetFullscreenMode_Param
	{
	public:

		enum class EWindowMode InFullscreenMode; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_SetFrameRateLimit_Param
	{
	public:

		float NewLimit; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetFoliageQuality_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetDynamicResolutionEnabled_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_SetBenchmarkFallbackValues_Param
	{
	public:

	};

	struct Function_Engine_GameUserSettings_SetAudioQualityLevel_Param
	{
	public:

		int32_t QualityLevel; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SetAntiAliasingQuality_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_SaveSettings_Param
	{
	public:

	};

	struct Function_Engine_GameUserSettings_RunHardwareBenchmark_Param
	{
	public:

		int32_t WorkScale; // 0x00(0x04)
		float CPUMultiplier; // 0x04(0x04)
		float GPUMultiplier; // 0x08(0x04)
	};

	struct Function_Engine_GameUserSettings_RevertVideoMode_Param
	{
	public:

	};

	struct Function_Engine_GameUserSettings_ResetToCurrentSettings_Param
	{
	public:

	};

	struct Function_Engine_GameUserSettings_LoadSettings_Param
	{
	public:

		bool bForceReload; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_IsVSyncEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_IsVSyncDirty_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_IsScreenResolutionDirty_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_IsHDREnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_IsFullscreenModeDirty_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_IsDynamicResolutionEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_IsDynamicResolutionDirty_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_IsDirty_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_GetVisualEffectQuality_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetViewDistanceQuality_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetTextureQuality_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetSyncInterval_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetShadowQuality_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetShadingQuality_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetScreenResolution_Param
	{
	public:

		struct FIntPoint ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_GameUserSettings_GetResolutionScaleNormalized_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetResolutionScaleInformationEx_Param
	{
	public:

		float CurrentScaleNormalized; // 0x00(0x04)
		float CurrentScaleValue; // 0x04(0x04)
		float MinScaleValue; // 0x08(0x04)
		float MaxScaleValue; // 0x0c(0x04)
	};

	struct Function_Engine_GameUserSettings_GetResolutionScaleInformation_Param
	{
	public:

		float CurrentScaleNormalized; // 0x00(0x04)
		int32_t CurrentScaleValue; // 0x04(0x04)
		int32_t MinScaleValue; // 0x08(0x04)
		int32_t MaxScaleValue; // 0x0c(0x04)
	};

	struct Function_Engine_GameUserSettings_GetRecommendedResolutionScale_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetPreferredFullscreenMode_Param
	{
	public:

		enum class EWindowMode ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_GetPostProcessingQuality_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetOverallScalabilityLevel_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetLastConfirmedScreenResolution_Param
	{
	public:

		struct FIntPoint ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_GameUserSettings_GetLastConfirmedFullscreenMode_Param
	{
	public:

		enum class EWindowMode ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_GetGameUserSettings_Param
	{
	public:

		struct UGameUserSettings* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_GameUserSettings_GetFullscreenMode_Param
	{
	public:

		enum class EWindowMode ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_GetFrameRateLimit_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetFoliageQuality_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetDesktopResolution_Param
	{
	public:

		struct FIntPoint ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_GameUserSettings_GetDefaultWindowPosition_Param
	{
	public:

		struct FIntPoint ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_GameUserSettings_GetDefaultWindowMode_Param
	{
	public:

		enum class EWindowMode ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_GetDefaultResolutionScale_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetDefaultResolution_Param
	{
	public:

		struct FIntPoint ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_GameUserSettings_GetCurrentHDRDisplayNits_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetAudioQualityLevel_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_GetAntiAliasingQuality_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameUserSettings_EnableHDRDisplayOutput_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t DisplayNits; // 0x04(0x04)
	};

	struct Function_Engine_GameUserSettings_ConfirmVideoMode_Param
	{
	public:

	};

	struct Function_Engine_GameUserSettings_ApplySettings_Param
	{
	public:

		bool bCheckForCommandLineOverrides; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_ApplyResolutionSettings_Param
	{
	public:

		bool bCheckForCommandLineOverrides; // 0x00(0x01)
	};

	struct Function_Engine_GameUserSettings_ApplyNonResolutionSettings_Param
	{
	public:

	};

	struct Function_Engine_GameUserSettings_ApplyHardwareBenchmarkResults_Param
	{
	public:

	};

	struct Function_Engine_AvoidanceManager_RegisterMovementComponent_Param
	{
	public:

		struct UMovementComponent* MovementComp; // 0x00(0x08)
		float AvoidanceWeight; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_Engine_AvoidanceManager_GetObjectCount_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_AvoidanceManager_GetNewAvoidanceUID_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_AvoidanceManager_GetAvoidanceVelocityForComponent_Param
	{
	public:

		struct UMovementComponent* MovementComp; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_CameraAnimInst_Stop_Param
	{
	public:

		bool bImmediate; // 0x00(0x01)
	};

	struct Function_Engine_CameraAnimInst_SetScale_Param
	{
	public:

		float NewDuration; // 0x00(0x04)
	};

	struct Function_Engine_CameraAnimInst_SetDuration_Param
	{
	public:

		float NewDuration; // 0x00(0x04)
	};

	struct Function_Engine_CameraShake_ReceiveStopShake_Param
	{
	public:

		bool bImmediately; // 0x00(0x01)
	};

	struct Function_Engine_CameraShake_ReceivePlayShake_Param
	{
	public:

		float Scale; // 0x00(0x04)
	};

	struct Function_Engine_CameraShake_ReceiveIsFinished_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_CameraShake_BlueprintUpdateCameraShake_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
		float Alpha; // 0x04(0x04)
		char pad_8[0x8]; // 0x08(0x08)
		struct FMinimalViewInfo POV; // 0x10(0x9e0)
		struct FMinimalViewInfo ModifiedPOV; // 0x9f0(0x9e0)
	};

	struct Function_Engine_Canvas_K2_TextSize_Param
	{
	public:

		struct UFont* RenderFont; // 0x00(0x08)
		struct FString RenderText; // 0x08(0x10)
		struct FVector2D Scale; // 0x18(0x08)
		struct FVector2D ReturnValue; // 0x20(0x08)
	};

	struct Function_Engine_Canvas_K2_StrLen_Param
	{
	public:

		struct UFont* RenderFont; // 0x00(0x08)
		struct FString RenderText; // 0x08(0x10)
		struct FVector2D ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_Canvas_K2_Project_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_Canvas_K2_DrawTriangle_Param
	{
	public:

		struct UTexture* RenderTexture; // 0x00(0x08)
		struct TArray<struct FCanvasUVTri> Triangles; // 0x08(0x10)
	};

	struct Function_Engine_Canvas_K2_DrawTexture_Param
	{
	public:

		struct UTexture* RenderTexture; // 0x00(0x08)
		struct FVector2D ScreenPosition; // 0x08(0x08)
		struct FVector2D ScreenSize; // 0x10(0x08)
		struct FVector2D CoordinatePosition; // 0x18(0x08)
		struct FVector2D CoordinateSize; // 0x20(0x08)
		struct FLinearColor RenderColor; // 0x28(0x10)
		enum class EBlendMode BlendMode; // 0x38(0x01)
		char pad_39[0x3]; // 0x39(0x03)
		float Rotation; // 0x3c(0x04)
		struct FVector2D PivotPoint; // 0x40(0x08)
	};

	struct Function_Engine_Canvas_K2_DrawText_Param
	{
	public:

		struct UFont* RenderFont; // 0x00(0x08)
		struct FString RenderText; // 0x08(0x10)
		struct FVector2D ScreenPosition; // 0x18(0x08)
		struct FVector2D Scale; // 0x20(0x08)
		struct FLinearColor RenderColor; // 0x28(0x10)
		float Kerning; // 0x38(0x04)
		struct FLinearColor ShadowColor; // 0x3c(0x10)
		struct FVector2D ShadowOffset; // 0x4c(0x08)
		bool bCentreX; // 0x54(0x01)
		bool bCentreY; // 0x55(0x01)
		bool bOutlined; // 0x56(0x01)
		char pad_57[0x1]; // 0x57(0x01)
		struct FLinearColor OutlineColor; // 0x58(0x10)
	};

	struct Function_Engine_Canvas_K2_DrawPolygon_Param
	{
	public:

		struct UTexture* RenderTexture; // 0x00(0x08)
		struct FVector2D ScreenPosition; // 0x08(0x08)
		struct FVector2D radius; // 0x10(0x08)
		int32_t NumberOfSides; // 0x18(0x04)
		struct FLinearColor RenderColor; // 0x1c(0x10)
	};

	struct Function_Engine_Canvas_K2_DrawMaterialTriangle_Param
	{
	public:

		struct UMaterialInterface* RenderMaterial; // 0x00(0x08)
		struct TArray<struct FCanvasUVTri> Triangles; // 0x08(0x10)
	};

	struct Function_Engine_Canvas_K2_DrawMaterial_Param
	{
	public:

		struct UMaterialInterface* RenderMaterial; // 0x00(0x08)
		struct FVector2D ScreenPosition; // 0x08(0x08)
		struct FVector2D ScreenSize; // 0x10(0x08)
		struct FVector2D CoordinatePosition; // 0x18(0x08)
		struct FVector2D CoordinateSize; // 0x20(0x08)
		float Rotation; // 0x28(0x04)
		struct FVector2D PivotPoint; // 0x2c(0x08)
	};

	struct Function_Engine_Canvas_K2_DrawLine_Param
	{
	public:

		struct FVector2D ScreenPositionA; // 0x00(0x08)
		struct FVector2D ScreenPositionB; // 0x08(0x08)
		float Thickness; // 0x10(0x04)
		struct FLinearColor RenderColor; // 0x14(0x10)
	};

	struct Function_Engine_Canvas_K2_DrawBox_Param
	{
	public:

		struct FVector2D ScreenPosition; // 0x00(0x08)
		struct FVector2D ScreenSize; // 0x08(0x08)
		float Thickness; // 0x10(0x04)
		struct FLinearColor RenderColor; // 0x14(0x10)
	};

	struct Function_Engine_Canvas_K2_DrawBorder_Param
	{
	public:

		struct UTexture* BorderTexture; // 0x00(0x08)
		struct UTexture* BackgroundTexture; // 0x08(0x08)
		struct UTexture* LeftBorderTexture; // 0x10(0x08)
		struct UTexture* RightBorderTexture; // 0x18(0x08)
		struct UTexture* TopBorderTexture; // 0x20(0x08)
		struct UTexture* BottomBorderTexture; // 0x28(0x08)
		struct FVector2D ScreenPosition; // 0x30(0x08)
		struct FVector2D ScreenSize; // 0x38(0x08)
		struct FVector2D CoordinatePosition; // 0x40(0x08)
		struct FVector2D CoordinateSize; // 0x48(0x08)
		struct FLinearColor RenderColor; // 0x50(0x10)
		struct FVector2D BorderScale; // 0x60(0x08)
		struct FVector2D BackgroundScale; // 0x68(0x08)
		float Rotation; // 0x70(0x04)
		struct FVector2D PivotPoint; // 0x74(0x08)
		struct FVector2D CornerSize; // 0x7c(0x08)
	};

	struct Function_Engine_Canvas_K2_Deproject_Param
	{
	public:

		struct FVector2D ScreenPosition; // 0x00(0x08)
		struct FVector WorldOrigin; // 0x08(0x0c)
		struct FVector WorldDirection; // 0x14(0x0c)
	};

	struct Function_Engine_CurveSourceInterface_GetCurveValue_Param
	{
	public:

		struct FName CurveName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_CurveSourceInterface_GetCurves_Param
	{
	public:

		struct TArray<struct FNamedCurveValue> OutValues; // 0x00(0x10)
	};

	struct Function_Engine_CurveSourceInterface_GetBindingName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Exporter_ScriptRunAssetExportTask_Param
	{
	public:

		struct UAssetExportTask* Task; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_Exporter_RunAssetExportTasks_Param
	{
	public:

		struct TArray<struct UAssetExportTask*> ExportTasks; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_Exporter_RunAssetExportTask_Param
	{
	public:

		struct UAssetExportTask* Task; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_InputSettings_SaveKeyMappings_Param
	{
	public:

	};

	struct Function_Engine_InputSettings_RemoveAxisMapping_Param
	{
	public:

		struct FInputAxisKeyMapping KeyMapping; // 0x00(0x28)
		bool bForceRebuildKeymaps; // 0x28(0x01)
	};

	struct Function_Engine_InputSettings_RemoveActionMapping_Param
	{
	public:

		struct FInputActionKeyMapping KeyMapping; // 0x00(0x28)
		bool bForceRebuildKeymaps; // 0x28(0x01)
	};

	struct Function_Engine_InputSettings_GetInputSettings_Param
	{
	public:

		struct UInputSettings* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_InputSettings_GetAxisNames_Param
	{
	public:

		struct TArray<struct FName> AxisNames; // 0x00(0x10)
	};

	struct Function_Engine_InputSettings_GetAxisMappingByName_Param
	{
	public:

		struct FName InAxisName; // 0x00(0x08)
		struct TArray<struct FInputAxisKeyMapping> OutMappings; // 0x08(0x10)
	};

	struct Function_Engine_InputSettings_GetActionNames_Param
	{
	public:

		struct TArray<struct FName> ActionNames; // 0x00(0x10)
	};

	struct Function_Engine_InputSettings_GetActionMappingByName_Param
	{
	public:

		struct FName InActionName; // 0x00(0x08)
		struct TArray<struct FInputActionKeyMapping> OutMappings; // 0x08(0x10)
	};

	struct Function_Engine_InputSettings_ForceRebuildKeymaps_Param
	{
	public:

	};

	struct Function_Engine_InputSettings_AddAxisMapping_Param
	{
	public:

		struct FInputAxisKeyMapping KeyMapping; // 0x00(0x28)
		bool bForceRebuildKeymaps; // 0x28(0x01)
	};

	struct Function_Engine_InputSettings_AddActionMapping_Param
	{
	public:

		struct FInputActionKeyMapping KeyMapping; // 0x00(0x28)
		bool bForceRebuildKeymaps; // 0x28(0x01)
	};

	struct Function_Engine_PlatformInterfaceWebResponse_GetNumHeaders_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_PlatformInterfaceWebResponse_GetHeaderValue_Param
	{
	public:

		struct FString HeaderName; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_PlatformInterfaceWebResponse_GetHeader_Param
	{
	public:

		int32_t HeaderIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString Header; // 0x08(0x10)
		struct FString Value; // 0x18(0x10)
	};

	struct Function_Engine_RuntimeVirtualTexture_GetSize_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_RuntimeVirtualTexture_GetPageTableSize_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshSocket_InitializeSocketFromLocation_Param
	{
	public:

		struct USkeletalMeshComponent* SkelComp; // 0x00(0x08)
		struct FVector WorldLocation; // 0x08(0x0c)
		struct FVector WorldNormal; // 0x14(0x0c)
	};

	struct Function_Engine_SkeletalMeshSocket_GetSocketLocation_Param
	{
	public:

		struct USkeletalMeshComponent* SkelComp; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SoundSubmix_StopRecordingOutput_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		enum class EAudioRecordingExportType ExportType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FString Name; // 0x10(0x10)
		struct FString Path; // 0x20(0x10)
		struct USoundWave* ExistingSoundWaveToOverwrite; // 0x30(0x08)
	};

	struct Function_Engine_SoundSubmix_StopEnvelopeFollowing_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
	};

	struct Function_Engine_SoundSubmix_StartRecordingOutput_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float ExpectedDuration; // 0x08(0x04)
	};

	struct Function_Engine_SoundSubmix_StartEnvelopeFollowing_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
	};

	struct Function_Engine_SoundSubmix_SetSubmixOutputVolume_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float InOutputVolume; // 0x08(0x04)
	};

	struct Function_Engine_SoundSubmix_AddEnvelopeFollowerDelegate_Param
	{
	public:

	};

	struct Function_Engine_AnimNotify_Received_Notify_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		struct UAnimSequenceBase* Animation; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_AnimNotify_GetNotifyName_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_GameInstance_ReceiveShutdown_Param
	{
	public:

	};

	struct Function_Engine_GameInstance_ReceiveInit_Param
	{
	public:

	};

	struct Function_Engine_GameInstance_HandleTravelError_Param
	{
	public:

		enum class ETravelFailure FailureType; // 0x00(0x01)
	};

	struct Function_Engine_GameInstance_HandleNetworkError_Param
	{
	public:

		enum class ENetworkFailure FailureType; // 0x00(0x01)
		bool bIsServer; // 0x01(0x01)
	};

	struct Function_Engine_GameInstance_DebugRemovePlayer_Param
	{
	public:

		int32_t ControllerId; // 0x00(0x04)
	};

	struct Function_Engine_GameInstance_DebugCreatePlayer_Param
	{
	public:

		int32_t ControllerId; // 0x00(0x04)
	};

	struct Function_Engine_Actor_WasRecentlyRendered_Param
	{
	public:

		float Tolerance; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_Engine_Actor_WasRecentlyContinuousRendered_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
		float Tolerance; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_Engine_Actor_UserConstructionScript_Param
	{
	public:

	};

	struct Function_Engine_Actor_TearOff_Param
	{
	public:

	};

	struct Function_Engine_Actor_SnapRootComponentTo_Param
	{
	public:

		struct AActor* InParentActor; // 0x00(0x08)
		struct FName InSocketName; // 0x08(0x08)
	};

	struct Function_Engine_Actor_SetTickGroup_Param
	{
	public:

		enum class ETickingGroup NewTickGroup; // 0x00(0x01)
	};

	struct Function_Engine_Actor_SetTickableWhenPaused_Param
	{
	public:

		bool bTickableWhenPaused; // 0x00(0x01)
	};

	struct Function_Engine_Actor_SetReplicates_Param
	{
	public:

		bool bInReplicates; // 0x00(0x01)
	};

	struct Function_Engine_Actor_SetReplicateMovement_Param
	{
	public:

		bool bInReplicateMovement; // 0x00(0x01)
	};

	struct Function_Engine_Actor_SetOwner_Param
	{
	public:

		struct AActor* NewOwner; // 0x00(0x08)
	};

	struct Function_Engine_Actor_SetNetDormancy_Param
	{
	public:

		enum class ENetDormancy NewDormancy; // 0x00(0x01)
	};

	struct Function_Engine_Actor_SetLifeSpan_Param
	{
	public:

		float InLifespan; // 0x00(0x04)
	};

	struct Function_Engine_Actor_SetActorTickInterval_Param
	{
	public:

		float TickInterval; // 0x00(0x04)
	};

	struct Function_Engine_Actor_SetActorTickEnabled_Param
	{
	public:

		bool bEnabled; // 0x00(0x01)
	};

	struct Function_Engine_Actor_SetActorScale3D_Param
	{
	public:

		struct FVector NewScale3D; // 0x00(0x0c)
	};

	struct Function_Engine_Actor_SetActorRelativeScale3D_Param
	{
	public:

		struct FVector NewRelativeScale; // 0x00(0x0c)
	};

	struct Function_Engine_Actor_SetActorHiddenInGame_Param
	{
	public:

		bool bNewHidden; // 0x00(0x01)
	};

	struct Function_Engine_Actor_SetActorEnableCollision_Param
	{
	public:

		bool bNewActorEnableCollision; // 0x00(0x01)
	};

	struct Function_Engine_Actor_RemoveTickPrerequisiteComponent_Param
	{
	public:

		struct UActorComponent* PrerequisiteComponent; // 0x00(0x08)
	};

	struct Function_Engine_Actor_RemoveTickPrerequisiteActor_Param
	{
	public:

		struct AActor* PrerequisiteActor; // 0x00(0x08)
	};

	struct Function_Engine_Actor_ReceiveTick_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_Engine_Actor_ReceiveRadialDamage_Param
	{
	public:

		float DamageReceived; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UDamageType* DamageType; // 0x08(0x08)
		struct FVector Origin; // 0x10(0x0c)
		struct FHitResult HitInfo; // 0x1c(0x88)
		char pad_A4[0x4]; // 0xa4(0x04)
		struct AController* InstigatedBy; // 0xa8(0x08)
		struct AActor* DamageCauser; // 0xb0(0x08)
	};

	struct Function_Engine_Actor_ReceivePointDamage_Param
	{
	public:

		float Damage; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UDamageType* DamageType; // 0x08(0x08)
		struct FVector HitLocation; // 0x10(0x0c)
		struct FVector HitNormal; // 0x1c(0x0c)
		struct UPrimitiveComponent* HitComponent; // 0x28(0x08)
		struct FName BoneName; // 0x30(0x08)
		struct FVector ShotFromDirection; // 0x38(0x0c)
		char pad_44[0x4]; // 0x44(0x04)
		struct AController* InstigatedBy; // 0x48(0x08)
		struct AActor* DamageCauser; // 0x50(0x08)
		struct FHitResult HitInfo; // 0x58(0x88)
	};

	struct Function_Engine_Actor_ReceiveHit_Param
	{
	public:

		struct UPrimitiveComponent* MyComp; // 0x00(0x08)
		struct AActor* Other; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		bool bSelfMoved; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		struct FVector HitLocation; // 0x1c(0x0c)
		struct FVector HitNormal; // 0x28(0x0c)
		struct FVector NormalImpulse; // 0x34(0x0c)
		struct FHitResult Hit; // 0x40(0x88)
	};

	struct Function_Engine_Actor_ReceiveEndPlay_Param
	{
	public:

		enum class EEndPlayReason EndPlayReason; // 0x00(0x01)
	};

	struct Function_Engine_Actor_ReceiveDestroyed_Param
	{
	public:

	};

	struct Function_Engine_Actor_ReceiveBeginPlay_Param
	{
	public:

	};

	struct Function_Engine_Actor_ReceiveAnyDamage_Param
	{
	public:

		float Damage; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UDamageType* DamageType; // 0x08(0x08)
		struct AController* InstigatedBy; // 0x10(0x08)
		struct AActor* DamageCauser; // 0x18(0x08)
	};

	struct Function_Engine_Actor_ReceiveActorOnReleased_Param
	{
	public:

		struct FKey ButtonReleased; // 0x00(0x18)
	};

	struct Function_Engine_Actor_ReceiveActorOnInputTouchLeave_Param
	{
	public:

		enum class ETouchIndex FingerIndex; // 0x00(0x01)
	};

	struct Function_Engine_Actor_ReceiveActorOnInputTouchEnter_Param
	{
	public:

		enum class ETouchIndex FingerIndex; // 0x00(0x01)
	};

	struct Function_Engine_Actor_ReceiveActorOnInputTouchEnd_Param
	{
	public:

		enum class ETouchIndex FingerIndex; // 0x00(0x01)
	};

	struct Function_Engine_Actor_ReceiveActorOnInputTouchBegin_Param
	{
	public:

		enum class ETouchIndex FingerIndex; // 0x00(0x01)
	};

	struct Function_Engine_Actor_ReceiveActorOnClicked_Param
	{
	public:

		struct FKey ButtonPressed; // 0x00(0x18)
	};

	struct Function_Engine_Actor_ReceiveActorEndOverlap_Param
	{
	public:

		struct AActor* OtherActor; // 0x00(0x08)
	};

	struct Function_Engine_Actor_ReceiveActorEndCursorOver_Param
	{
	public:

	};

	struct Function_Engine_Actor_ReceiveActorBeginOverlap_Param
	{
	public:

		struct AActor* OtherActor; // 0x00(0x08)
	};

	struct Function_Engine_Actor_ReceiveActorBeginCursorOver_Param
	{
	public:

	};

	struct Function_Engine_Actor_PrestreamTextures_Param
	{
	public:

		float Seconds; // 0x00(0x04)
		bool bEnableStreaming; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		int32_t CinematicTextureGroups; // 0x08(0x04)
	};

	struct Function_Engine_Actor_OnRep_ReplicateMovement_Param
	{
	public:

	};

	struct Function_Engine_Actor_OnRep_ReplicatedMovement_Param
	{
	public:

	};

	struct Function_Engine_Actor_OnRep_Owner_Param
	{
	public:

	};

	struct Function_Engine_Actor_OnRep_Instigator_Param
	{
	public:

	};

	struct Function_Engine_Actor_OnRep_AttachmentReplication_Param
	{
	public:

	};

	struct Function_Engine_Actor_MakeNoise_Param
	{
	public:

		float Loudness; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct APawn* NoiseInstigator; // 0x08(0x08)
		struct FVector NoiseLocation; // 0x10(0x0c)
		float MaxRange; // 0x1c(0x04)
		struct FName Tag; // 0x20(0x08)
	};

	struct Function_Engine_Actor_MakeMIDForMaterial_Param
	{
	public:

		struct UMaterialInterface* Parent; // 0x00(0x08)
		struct UMaterialInstanceDynamic* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_Actor_K2_TeleportTo_Param
	{
	public:

		struct FVector DestLocation; // 0x00(0x0c)
		struct FRotator DestRotation; // 0x0c(0x0c)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_Actor_K2_SetActorTransform_Param
	{
	public:

		struct FTransform NewTransform; // 0x00(0x30)
		bool bSweep; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FHitResult SweepHitResult; // 0x34(0x88)
		bool bTeleport; // 0xbc(0x01)
		bool ReturnValue; // 0xbd(0x01)
	};

	struct Function_Engine_Actor_K2_SetActorRotation_Param
	{
	public:

		struct FRotator NewRotation; // 0x00(0x0c)
		bool bTeleportPhysics; // 0x0c(0x01)
		bool ReturnValue; // 0x0d(0x01)
	};

	struct Function_Engine_Actor_K2_SetActorRelativeTransform_Param
	{
	public:

		struct FTransform NewRelativeTransform; // 0x00(0x30)
		bool bSweep; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FHitResult SweepHitResult; // 0x34(0x88)
		bool bTeleport; // 0xbc(0x01)
	};

	struct Function_Engine_Actor_K2_SetActorRelativeRotation_Param
	{
	public:

		struct FRotator NewRelativeRotation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_Actor_K2_SetActorRelativeLocation_Param
	{
	public:

		struct FVector NewRelativeLocation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_Actor_K2_SetActorLocationAndRotation_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
		struct FRotator NewRotation; // 0x0c(0x0c)
		bool bSweep; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		struct FHitResult SweepHitResult; // 0x1c(0x88)
		bool bTeleport; // 0xa4(0x01)
		bool ReturnValue; // 0xa5(0x01)
	};

	struct Function_Engine_Actor_K2_SetActorLocation_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
		bool ReturnValue; // 0x99(0x01)
	};

	struct Function_Engine_Actor_K2_OnReset_Param
	{
	public:

	};

	struct Function_Engine_Actor_K2_OnEndViewTarget_Param
	{
	public:

		struct APlayerController* PC; // 0x00(0x08)
	};

	struct Function_Engine_Actor_K2_OnBecomeViewTarget_Param
	{
	public:

		struct APlayerController* PC; // 0x00(0x08)
	};

	struct Function_Engine_Actor_K2_GetRootComponent_Param
	{
	public:

		struct USceneComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Actor_K2_GetComponentsByClass_Param
	{
	public:

		struct UClass* ComponentClass; // 0x00(0x08)
		struct TArray<struct UActorComponent*> ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_Actor_K2_GetActorRotation_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Actor_K2_GetActorLocation_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Actor_K2_DetachFromActor_Param
	{
	public:

		enum class EDetachmentRule LocationRule; // 0x00(0x01)
		enum class EDetachmentRule RotationRule; // 0x01(0x01)
		enum class EDetachmentRule ScaleRule; // 0x02(0x01)
	};

	struct Function_Engine_Actor_K2_DestroyComponent_Param
	{
	public:

		struct UActorComponent* Component; // 0x00(0x08)
	};

	struct Function_Engine_Actor_K2_DestroyActor_Param
	{
	public:

	};

	struct Function_Engine_Actor_K2_AttachToComponent_Param
	{
	public:

		struct USceneComponent* Parent; // 0x00(0x08)
		struct FName SocketName; // 0x08(0x08)
		enum class EAttachmentRule LocationRule; // 0x10(0x01)
		enum class EAttachmentRule RotationRule; // 0x11(0x01)
		enum class EAttachmentRule ScaleRule; // 0x12(0x01)
		bool bWeldSimulatedBodies; // 0x13(0x01)
	};

	struct Function_Engine_Actor_K2_AttachToActor_Param
	{
	public:

		struct AActor* ParentActor; // 0x00(0x08)
		struct FName SocketName; // 0x08(0x08)
		enum class EAttachmentRule LocationRule; // 0x10(0x01)
		enum class EAttachmentRule RotationRule; // 0x11(0x01)
		enum class EAttachmentRule ScaleRule; // 0x12(0x01)
		bool bWeldSimulatedBodies; // 0x13(0x01)
	};

	struct Function_Engine_Actor_K2_AttachRootComponentToActor_Param
	{
	public:

		struct AActor* InParentActor; // 0x00(0x08)
		struct FName InSocketName; // 0x08(0x08)
		enum class EAttachLocation AttachLocationType; // 0x10(0x01)
		bool bWeldSimulatedBodies; // 0x11(0x01)
	};

	struct Function_Engine_Actor_K2_AttachRootComponentTo_Param
	{
	public:

		struct USceneComponent* InParent; // 0x00(0x08)
		struct FName InSocketName; // 0x08(0x08)
		enum class EAttachLocation AttachLocationType; // 0x10(0x01)
		bool bWeldSimulatedBodies; // 0x11(0x01)
	};

	struct Function_Engine_Actor_K2_AddActorWorldTransform_Param
	{
	public:

		struct FTransform DeltaTransform; // 0x00(0x30)
		bool bSweep; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FHitResult SweepHitResult; // 0x34(0x88)
		bool bTeleport; // 0xbc(0x01)
	};

	struct Function_Engine_Actor_K2_AddActorWorldRotation_Param
	{
	public:

		struct FRotator DeltaRotation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_Actor_K2_AddActorWorldOffset_Param
	{
	public:

		struct FVector DeltaLocation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_Actor_K2_AddActorLocalTransform_Param
	{
	public:

		struct FTransform NewTransform; // 0x00(0x30)
		bool bSweep; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FHitResult SweepHitResult; // 0x34(0x88)
		bool bTeleport; // 0xbc(0x01)
	};

	struct Function_Engine_Actor_K2_AddActorLocalRotation_Param
	{
	public:

		struct FRotator DeltaRotation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_Actor_K2_AddActorLocalOffset_Param
	{
	public:

		struct FVector DeltaLocation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_Actor_IsOverlappingActor_Param
	{
	public:

		struct AActor* Other; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_Actor_IsChildActor_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Actor_IsActorTickEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Actor_IsActorBeingDestroyed_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Actor_HasAuthority_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Actor_GetVerticalDistanceTo_Param
	{
	public:

		struct AActor* OtherActor; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_Actor_GetVelocity_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Actor_GetTransform_Param
	{
	public:

		struct FTransform ReturnValue; // 0x00(0x30)
	};

	struct Function_Engine_Actor_GetTickableWhenPaused_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Actor_GetSquaredDistanceTo_Param
	{
	public:

		struct AActor* OtherActor; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_Actor_GetRemoteRole_Param
	{
	public:

		enum class ENetRole ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Actor_GetParentComponent_Param
	{
	public:

		struct UChildActorComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Actor_GetParentActor_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Actor_GetOwner_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Actor_GetOverlappingComponents_Param
	{
	public:

		struct TArray<struct UPrimitiveComponent*> OverlappingComponents; // 0x00(0x10)
	};

	struct Function_Engine_Actor_GetOverlappingActors_Param
	{
	public:

		struct TArray<struct AActor*> OverlappingActors; // 0x00(0x10)
		struct UClass* ClassFilter; // 0x10(0x08)
	};

	struct Function_Engine_Actor_GetLocalRole_Param
	{
	public:

		enum class ENetRole ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Actor_GetLifeSpan_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_Actor_GetInstigatorController_Param
	{
	public:

		struct AController* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Actor_GetInstigator_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Actor_GetInputVectorAxisValue_Param
	{
	public:

		struct FKey InputAxisKey; // 0x00(0x18)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_Actor_GetInputAxisValue_Param
	{
	public:

		struct FName InputAxisName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_Actor_GetInputAxisKeyValue_Param
	{
	public:

		struct FKey InputAxisKey; // 0x00(0x18)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_Actor_GetHorizontalDotProductTo_Param
	{
	public:

		struct AActor* OtherActor; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_Actor_GetHorizontalDistanceTo_Param
	{
	public:

		struct AActor* OtherActor; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_Actor_GetGameTimeSinceCreation_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_Actor_GetDotProductTo_Param
	{
	public:

		struct AActor* OtherActor; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_Actor_GetDistanceTo_Param
	{
	public:

		struct AActor* OtherActor; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_Actor_GetComponentsByTag_Param
	{
	public:

		struct UClass* ComponentClass; // 0x00(0x08)
		struct FName Tag; // 0x08(0x08)
		struct TArray<struct UActorComponent*> ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_Actor_GetComponentsByInterface_Param
	{
	public:

		struct UClass* Interface; // 0x00(0x08)
		struct TArray<struct UActorComponent*> ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_Actor_GetComponentByClass_Param
	{
	public:

		struct UClass* ComponentClass; // 0x00(0x08)
		struct UActorComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_Actor_GetAttachParentSocketName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Actor_GetAttachParentActor_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Actor_GetAttachedActors_Param
	{
	public:

		struct TArray<struct AActor*> OutActors; // 0x00(0x10)
		bool bResetArray; // 0x10(0x01)
	};

	struct Function_Engine_Actor_GetAllChildActors_Param
	{
	public:

		struct TArray<struct AActor*> ChildActors; // 0x00(0x10)
		bool bIncludeDescendants; // 0x10(0x01)
	};

	struct Function_Engine_Actor_GetActorUpVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Actor_GetActorTimeDilation_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_Actor_GetActorTickInterval_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_Actor_GetActorScale3D_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Actor_GetActorRightVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Actor_GetActorRelativeScale3D_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Actor_GetActorForwardVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Actor_GetActorEyesViewPoint_Param
	{
	public:

		struct FVector OutLocation; // 0x00(0x0c)
		struct FRotator OutRotation; // 0x0c(0x0c)
	};

	struct Function_Engine_Actor_GetActorEnableCollision_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Actor_GetActorBounds_Param
	{
	public:

		bool bOnlyCollidingComponents; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector Origin; // 0x04(0x0c)
		struct FVector BoxExtent; // 0x10(0x0c)
	};

	struct Function_Engine_Actor_ForceNetUpdate_Param
	{
	public:

	};

	struct Function_Engine_Actor_FlushNetDormancy_Param
	{
	public:

	};

	struct Function_Engine_Actor_EnableInput_Param
	{
	public:

		struct APlayerController* PlayerController; // 0x00(0x08)
	};

	struct Function_Engine_Actor_DisableInput_Param
	{
	public:

		struct APlayerController* PlayerController; // 0x00(0x08)
	};

	struct Function_Engine_Actor_DetachRootComponentFromParent_Param
	{
	public:

		bool bMaintainWorldPosition; // 0x00(0x01)
	};

	struct Function_Engine_Actor_AddTickPrerequisiteComponent_Param
	{
	public:

		struct UActorComponent* PrerequisiteComponent; // 0x00(0x08)
	};

	struct Function_Engine_Actor_AddTickPrerequisiteActor_Param
	{
	public:

		struct AActor* PrerequisiteActor; // 0x00(0x08)
	};

	struct Function_Engine_Actor_AddComponent_Param
	{
	public:

		struct FName TemplateName; // 0x00(0x08)
		bool bManualAttachment; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FTransform RelativeTransform; // 0x10(0x30)
		struct UObject* ComponentTemplateContext; // 0x40(0x08)
		struct UActorComponent* ReturnValue; // 0x48(0x08)
	};

	struct Function_Engine_Actor_ActorHasTag_Param
	{
	public:

		struct FName Tag; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_ActorComponent_ToggleActive_Param
	{
	public:

	};

	struct Function_Engine_ActorComponent_SetTickGroup_Param
	{
	public:

		enum class ETickingGroup NewTickGroup; // 0x00(0x01)
	};

	struct Function_Engine_ActorComponent_SetTickableWhenPaused_Param
	{
	public:

		bool bTickableWhenPaused; // 0x00(0x01)
	};

	struct Function_Engine_ActorComponent_SetIsReplicated_Param
	{
	public:

		bool ShouldReplicate; // 0x00(0x01)
	};

	struct Function_Engine_ActorComponent_SetComponentTickInterval_Param
	{
	public:

		float TickInterval; // 0x00(0x04)
	};

	struct Function_Engine_ActorComponent_SetComponentTickEnabled_Param
	{
	public:

		bool bEnabled; // 0x00(0x01)
	};

	struct Function_Engine_ActorComponent_SetAutoActivate_Param
	{
	public:

		bool bNewAutoActivate; // 0x00(0x01)
	};

	struct Function_Engine_ActorComponent_SetActive_Param
	{
	public:

		bool bNewActive; // 0x00(0x01)
		bool bReset; // 0x01(0x01)
	};

	struct Function_Engine_ActorComponent_RemoveTickPrerequisiteComponent_Param
	{
	public:

		struct UActorComponent* PrerequisiteComponent; // 0x00(0x08)
	};

	struct Function_Engine_ActorComponent_RemoveTickPrerequisiteActor_Param
	{
	public:

		struct AActor* PrerequisiteActor; // 0x00(0x08)
	};

	struct Function_Engine_ActorComponent_ReceiveTick_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_Engine_ActorComponent_ReceiveEndPlay_Param
	{
	public:

		enum class EEndPlayReason EndPlayReason; // 0x00(0x01)
	};

	struct Function_Engine_ActorComponent_ReceiveBeginPlay_Param
	{
	public:

	};

	struct Function_Engine_ActorComponent_OnRep_IsActive_Param
	{
	public:

	};

	struct Function_Engine_ActorComponent_K2_DestroyComponent_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
	};

	struct Function_Engine_ActorComponent_IsComponentTickEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_ActorComponent_IsBeingDestroyed_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_ActorComponent_IsActive_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_ActorComponent_GetOwner_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_ActorComponent_GetComponentTickInterval_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_ActorComponent_Deactivate_Param
	{
	public:

	};

	struct Function_Engine_ActorComponent_ComponentHasTag_Param
	{
	public:

		struct FName Tag; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_ActorComponent_AddTickPrerequisiteComponent_Param
	{
	public:

		struct UActorComponent* PrerequisiteComponent; // 0x00(0x08)
	};

	struct Function_Engine_ActorComponent_AddTickPrerequisiteActor_Param
	{
	public:

		struct AActor* PrerequisiteActor; // 0x00(0x08)
	};

	struct Function_Engine_ActorComponent_Activate_Param
	{
	public:

		bool bReset; // 0x00(0x01)
	};

	struct Function_Engine_BlueprintAsyncActionBase_Activate_Param
	{
	public:

	};

	struct Function_Engine_MaterialInterface_SetForceMipLevelsToBeResident_Param
	{
	public:

		bool OverrideForceMiplevelsToBeResident; // 0x00(0x01)
		bool bForceMiplevelsToBeResidentValue; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		float ForceDuration; // 0x04(0x04)
		int32_t CinematicTextureGroups; // 0x08(0x04)
		bool bFastResponse; // 0x0c(0x01)
	};

	struct Function_Engine_MaterialInterface_GetPhysicalMaterial_Param
	{
	public:

		struct UPhysicalMaterial* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_MaterialInterface_GetBaseMaterial_Param
	{
	public:

		struct UMaterial* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_LevelStreaming_ShouldBeLoaded_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_LevelStreaming_SetShouldBeVisible_Param
	{
	public:

		bool bInShouldBeVisible; // 0x00(0x01)
	};

	struct Function_Engine_LevelStreaming_SetShouldBeLoaded_Param
	{
	public:

		bool bInShouldBeLoaded; // 0x00(0x01)
	};

	struct Function_Engine_LevelStreaming_SetPriority_Param
	{
	public:

		int32_t NewPriority; // 0x00(0x04)
	};

	struct Function_Engine_LevelStreaming_SetLevelLODIndex_Param
	{
	public:

		int32_t LodIndex; // 0x00(0x04)
	};

	struct Function_Engine_LevelStreaming_IsStreamingStatePending_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_LevelStreaming_IsLevelVisible_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_LevelStreaming_IsLevelLoaded_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_LevelStreaming_GetWorldAssetPackageFName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_LevelStreaming_GetLoadedLevel_Param
	{
	public:

		struct ULevel* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_LevelStreaming_GetLevelScriptActor_Param
	{
	public:

		struct ALevelScriptActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_LevelStreaming_CreateInstance_Param
	{
	public:

		struct FString UniqueInstanceName; // 0x00(0x10)
		struct ULevelStreaming* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_AnimNotifyState_Received_NotifyTick_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		struct UAnimSequenceBase* Animation; // 0x08(0x08)
		float FrameDeltaTime; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_AnimNotifyState_Received_NotifyEnd_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		struct UAnimSequenceBase* Animation; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_AnimNotifyState_Received_NotifyBegin_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		struct UAnimSequenceBase* Animation; // 0x08(0x08)
		float TotalDuration; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_AnimNotifyState_GetNotifyName_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_AnimInstance_UnlockAIResources_Param
	{
	public:

		bool bUnlockMovement; // 0x00(0x01)
		bool UnlockAILogic; // 0x01(0x01)
	};

	struct Function_Engine_AnimInstance_UnlinkAnimClassLayers_Param
	{
	public:

		struct UClass* InClass; // 0x00(0x08)
	};

	struct Function_Engine_AnimInstance_TryGetPawnOwner_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_AnimInstance_StopSlotAnimation_Param
	{
	public:

		float InBlendOutTime; // 0x00(0x04)
		struct FName SlotNodeName; // 0x04(0x08)
	};

	struct Function_Engine_AnimInstance_SnapshotPose_Param
	{
	public:

		struct FPoseSnapshot Snapshot; // 0x00(0x38)
	};

	struct Function_Engine_AnimInstance_SetRootMotionMode_Param
	{
	public:

		enum class ERootMotionMode Value; // 0x00(0x01)
	};

	struct Function_Engine_AnimInstance_SetMorphTarget_Param
	{
	public:

		struct FName MorphTargetName; // 0x00(0x08)
		float Value; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_SavePoseSnapshot_Param
	{
	public:

		struct FName SnapshotName; // 0x00(0x08)
	};

	struct Function_Engine_AnimInstance_ResetDynamics_Param
	{
	public:

		enum class ETeleportType InTeleportType; // 0x00(0x01)
	};

	struct Function_Engine_AnimInstance_PlaySlotAnimationAsDynamicMontage_Param
	{
	public:

		struct UAnimSequenceBase* Asset; // 0x00(0x08)
		struct FName SlotNodeName; // 0x08(0x08)
		float BlendInTime; // 0x10(0x04)
		float BlendOutTime; // 0x14(0x04)
		float InPlayRate; // 0x18(0x04)
		int32_t LoopCount; // 0x1c(0x04)
		float BlendOutTriggerTime; // 0x20(0x04)
		float InTimeToStartMontageAt; // 0x24(0x04)
		struct UAnimMontage* ReturnValue; // 0x28(0x08)
	};

	struct Function_Engine_AnimInstance_PlaySlotAnimation_Param
	{
	public:

		struct UAnimSequenceBase* Asset; // 0x00(0x08)
		struct FName SlotNodeName; // 0x08(0x08)
		float BlendInTime; // 0x10(0x04)
		float BlendOutTime; // 0x14(0x04)
		float InPlayRate; // 0x18(0x04)
		int32_t LoopCount; // 0x1c(0x04)
		float ReturnValue; // 0x20(0x04)
	};

	struct Function_Engine_AnimInstance_Montage_Stop_Param
	{
	public:

		float InBlendOutTime; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UAnimMontage* Montage; // 0x08(0x08)
	};

	struct Function_Engine_AnimInstance_Montage_SetPosition_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
		float NewPosition; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_Montage_SetPlayRate_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
		float NewPlayRate; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_Montage_SetNextSection_Param
	{
	public:

		struct FName SectionNameToChange; // 0x00(0x08)
		struct FName NextSection; // 0x08(0x08)
		struct UAnimMontage* Montage; // 0x10(0x08)
	};

	struct Function_Engine_AnimInstance_Montage_Resume_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
	};

	struct Function_Engine_AnimInstance_Montage_Play_Param
	{
	public:

		struct UAnimMontage* MontageToPlay; // 0x00(0x08)
		float InPlayRate; // 0x08(0x04)
		enum class EMontagePlayReturnType ReturnValueType; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		float InTimeToStartMontageAt; // 0x10(0x04)
		bool bStopAllMontages; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_AnimInstance_Montage_Pause_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
	};

	struct Function_Engine_AnimInstance_Montage_JumpToSectionsEnd_Param
	{
	public:

		struct FName SectionName; // 0x00(0x08)
		struct UAnimMontage* Montage; // 0x08(0x08)
	};

	struct Function_Engine_AnimInstance_Montage_JumpToSection_Param
	{
	public:

		struct FName SectionName; // 0x00(0x08)
		struct UAnimMontage* Montage; // 0x08(0x08)
	};

	struct Function_Engine_AnimInstance_Montage_IsPlaying_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_AnimInstance_Montage_IsActive_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_AnimInstance_Montage_GetPosition_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_Montage_GetPlayRate_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_Montage_GetIsStopped_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_AnimInstance_Montage_GetCurrentSection_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
		struct FName ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_AnimInstance_Montage_GetBlendTime_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_LockAIResources_Param
	{
	public:

		bool bLockMovement; // 0x00(0x01)
		bool LockAILogic; // 0x01(0x01)
	};

	struct Function_Engine_AnimInstance_LinkAnimGraphByTag_Param
	{
	public:

		struct FName InTag; // 0x00(0x08)
		struct UClass* InClass; // 0x08(0x08)
	};

	struct Function_Engine_AnimInstance_LinkAnimClassLayers_Param
	{
	public:

		struct UClass* InClass; // 0x00(0x08)
	};

	struct Function_Engine_AnimInstance_IsSyncGroupBetweenMarkers_Param
	{
	public:

		struct FName InSyncGroupName; // 0x00(0x08)
		struct FName PreviousMarker; // 0x08(0x08)
		struct FName NextMarker; // 0x10(0x08)
		bool bRespectMarkerOrder; // 0x18(0x01)
		bool ReturnValue; // 0x19(0x01)
	};

	struct Function_Engine_AnimInstance_IsPlayingSlotAnimation_Param
	{
	public:

		struct UAnimSequenceBase* Asset; // 0x00(0x08)
		struct FName SlotNodeName; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_AnimInstance_IsAnyMontagePlaying_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_AnimInstance_HasMarkerBeenHitThisFrame_Param
	{
	public:

		struct FName SyncGroup; // 0x00(0x08)
		struct FName MarkerName; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_AnimInstance_GetTimeToClosestMarker_Param
	{
	public:

		struct FName SyncGroup; // 0x00(0x08)
		struct FName MarkerName; // 0x08(0x08)
		float OutMarkerTime; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_AnimInstance_GetSyncGroupPosition_Param
	{
	public:

		struct FName InSyncGroupName; // 0x00(0x08)
		struct FMarkerSyncAnimPosition ReturnValue; // 0x08(0x14)
	};

	struct Function_Engine_AnimInstance_GetRelevantAnimTimeRemainingFraction_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_GetRelevantAnimTimeRemaining_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_GetRelevantAnimTimeFraction_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_GetRelevantAnimTime_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_GetRelevantAnimLength_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_GetOwningComponent_Param
	{
	public:

		struct USkeletalMeshComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_AnimInstance_GetOwningActor_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_AnimInstance_GetLinkedAnimLayerInstanceByGroup_Param
	{
	public:

		struct FName InGroup; // 0x00(0x08)
		struct UAnimInstance* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_AnimInstance_GetLinkedAnimLayerInstanceByClass_Param
	{
	public:

		struct UClass* InClass; // 0x00(0x08)
		struct UAnimInstance* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_AnimInstance_GetLinkedAnimGraphInstancesByTag_Param
	{
	public:

		struct FName InTag; // 0x00(0x08)
		struct TArray<struct UAnimInstance*> OutLinkedInstances; // 0x08(0x10)
	};

	struct Function_Engine_AnimInstance_GetLinkedAnimGraphInstanceByTag_Param
	{
	public:

		struct FName InTag; // 0x00(0x08)
		struct UAnimInstance* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_AnimInstance_GetInstanceTransitionTimeElapsedFraction_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t TransitionIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_GetInstanceTransitionTimeElapsed_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t TransitionIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_GetInstanceTransitionCrossfadeDuration_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t TransitionIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_GetInstanceStateWeight_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_GetInstanceMachineWeight_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_AnimInstance_GetInstanceCurrentStateElapsedTime_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_AnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Param
	{
	public:

		int32_t AssetPlayerIndex; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_AnimInstance_GetInstanceAssetPlayerTimeFromEnd_Param
	{
	public:

		int32_t AssetPlayerIndex; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_AnimInstance_GetInstanceAssetPlayerTimeFraction_Param
	{
	public:

		int32_t AssetPlayerIndex; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_AnimInstance_GetInstanceAssetPlayerTime_Param
	{
	public:

		int32_t AssetPlayerIndex; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_AnimInstance_GetInstanceAssetPlayerLength_Param
	{
	public:

		int32_t AssetPlayerIndex; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_AnimInstance_GetCurveValue_Param
	{
	public:

		struct FName CurveName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_GetCurrentStateName_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		struct FName ReturnValue; // 0x04(0x08)
	};

	struct Function_Engine_AnimInstance_GetCurrentActiveMontage_Param
	{
	public:

		struct UAnimMontage* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_AnimInstance_GetAnimAssetPlayPositions_Param
	{
	public:

		struct TMap<struct FName, float> ReturnValue; // 0x00(0x50)
	};

	struct Function_Engine_AnimInstance_GetAnimAssetPlayPosition_Param
	{
	public:

		struct FName InName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_AnimInstance_GetAllCurveNames_Param
	{
	public:

		struct TArray<struct FName> OutNames; // 0x00(0x10)
	};

	struct Function_Engine_AnimInstance_GetActiveCurveNames_Param
	{
	public:

		enum class EAnimCurveType CurveType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct TArray<struct FName> OutNames; // 0x08(0x10)
	};

	struct Function_Engine_AnimInstance_ClearMorphTargets_Param
	{
	public:

	};

	struct Function_Engine_AnimInstance_CalculateDirection_Param
	{
	public:

		struct FVector Velocity; // 0x00(0x0c)
		struct FRotator BaseRotation; // 0x0c(0x0c)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_AnimInstance_BlueprintUpdateAnimation_Param
	{
	public:

		float DeltaTimeX; // 0x00(0x04)
	};

	struct Function_Engine_AnimInstance_BlueprintPostEvaluateAnimation_Param
	{
	public:

	};

	struct Function_Engine_AnimInstance_BlueprintInitializeAnimation_Param
	{
	public:

	};

	struct Function_Engine_AnimInstance_BlueprintBeginPlay_Param
	{
	public:

	};

	struct Function_Engine_CameraModifier_IsDisabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_CameraModifier_GetViewTarget_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_CameraModifier_EnableModifier_Param
	{
	public:

	};

	struct Function_Engine_CameraModifier_DisableModifier_Param
	{
	public:

		bool bImmediate; // 0x00(0x01)
	};

	struct Function_Engine_CameraModifier_BlueprintModifyPostProcess_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
		float PostProcessBlendWeight; // 0x04(0x04)
		char pad_8[0x8]; // 0x08(0x08)
		struct FPostProcessSettings PostProcessSettings; // 0x10(0x950)
	};

	struct Function_Engine_CameraModifier_BlueprintModifyCamera_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
		struct FVector ViewLocation; // 0x04(0x0c)
		struct FRotator ViewRotation; // 0x10(0x0c)
		float FOV; // 0x1c(0x04)
		struct FVector NewViewLocation; // 0x20(0x0c)
		struct FRotator NewViewRotation; // 0x2c(0x0c)
		float NewFOV; // 0x38(0x04)
	};

	struct Function_Engine_CurveBase_GetValueRange_Param
	{
	public:

		float MinValue; // 0x00(0x04)
		float MaxValue; // 0x04(0x04)
	};

	struct Function_Engine_CurveBase_GetTimeRange_Param
	{
	public:

		float MinTime; // 0x00(0x04)
		float MaxTime; // 0x04(0x04)
	};

	struct Function_Engine_TimecodeProvider_GetTimecode_Param
	{
	public:

		struct FTimecode ReturnValue; // 0x00(0x14)
	};

	struct Function_Engine_TimecodeProvider_GetSynchronizationState_Param
	{
	public:

		enum class ETimecodeProviderSynchronizationState ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_TimecodeProvider_GetFrameRate_Param
	{
	public:

		struct FFrameRate ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_TimecodeProvider_GetDelayedTimecode_Param
	{
	public:

		struct FTimecode ReturnValue; // 0x00(0x14)
	};

	struct Function_Engine_GameplayStatics_UnloadStreamLevel_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FName LevelName; // 0x08(0x08)
		struct FLatentActionInfo LatentInfo; // 0x10(0x18)
		bool bShouldBlockOnUnload; // 0x28(0x01)
	};

	struct Function_Engine_GameplayStatics_SuggestProjectileVelocity_CustomArc_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector OutLaunchVelocity; // 0x08(0x0c)
		struct FVector StartPos; // 0x14(0x0c)
		struct FVector EndPos; // 0x20(0x0c)
		float OverrideGravityZ; // 0x2c(0x04)
		float ArcParam; // 0x30(0x04)
		bool ReturnValue; // 0x34(0x01)
	};

	struct Function_Engine_GameplayStatics_SpawnSoundAttached_Param
	{
	public:

		struct USoundBase* Sound; // 0x00(0x08)
		struct USceneComponent* AttachToComponent; // 0x08(0x08)
		struct FName AttachPointName; // 0x10(0x08)
		struct FVector Location; // 0x18(0x0c)
		struct FRotator Rotation; // 0x24(0x0c)
		enum class EAttachLocation LocationType; // 0x30(0x01)
		bool bStopWhenAttachedToDestroyed; // 0x31(0x01)
		char pad_32[0x2]; // 0x32(0x02)
		float VolumeMultiplier; // 0x34(0x04)
		float PitchMultiplier; // 0x38(0x04)
		float StartTime; // 0x3c(0x04)
		struct USoundAttenuation* AttenuationSettings; // 0x40(0x08)
		struct USoundConcurrency* ConcurrencySettings; // 0x48(0x08)
		bool bAutoDestroy; // 0x50(0x01)
		char pad_51[0x7]; // 0x51(0x07)
		struct UAudioComponent* ReturnValue; // 0x58(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnSoundAtLocation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct USoundBase* Sound; // 0x08(0x08)
		struct FVector Location; // 0x10(0x0c)
		struct FRotator Rotation; // 0x1c(0x0c)
		float VolumeMultiplier; // 0x28(0x04)
		float PitchMultiplier; // 0x2c(0x04)
		float StartTime; // 0x30(0x04)
		char pad_34[0x4]; // 0x34(0x04)
		struct USoundAttenuation* AttenuationSettings; // 0x38(0x08)
		struct USoundConcurrency* ConcurrencySettings; // 0x40(0x08)
		bool bAutoDestroy; // 0x48(0x01)
		char pad_49[0x7]; // 0x49(0x07)
		struct UAudioComponent* ReturnValue; // 0x50(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnSound2D_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct USoundBase* Sound; // 0x08(0x08)
		float VolumeMultiplier; // 0x10(0x04)
		float PitchMultiplier; // 0x14(0x04)
		float StartTime; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct USoundConcurrency* ConcurrencySettings; // 0x20(0x08)
		bool bPersistAcrossLevelTransition; // 0x28(0x01)
		bool bAutoDestroy; // 0x29(0x01)
		char pad_2A[0x6]; // 0x2a(0x06)
		struct UAudioComponent* ReturnValue; // 0x30(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnObject_Param
	{
	public:

		struct UClass* objectClass; // 0x00(0x08)
		struct UObject* Outer; // 0x08(0x08)
		struct UObject* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnForceFeedbackAttached_Param
	{
	public:

		struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
		struct USceneComponent* AttachToComponent; // 0x08(0x08)
		struct FName AttachPointName; // 0x10(0x08)
		struct FVector Location; // 0x18(0x0c)
		struct FRotator Rotation; // 0x24(0x0c)
		enum class EAttachLocation LocationType; // 0x30(0x01)
		bool bStopWhenAttachedToDestroyed; // 0x31(0x01)
		bool bLooping; // 0x32(0x01)
		char pad_33[0x1]; // 0x33(0x01)
		float IntensityMultiplier; // 0x34(0x04)
		float StartTime; // 0x38(0x04)
		char pad_3C[0x4]; // 0x3c(0x04)
		struct UForceFeedbackAttenuation* AttenuationSettings; // 0x40(0x08)
		bool bAutoDestroy; // 0x48(0x01)
		char pad_49[0x7]; // 0x49(0x07)
		struct UForceFeedbackComponent* ReturnValue; // 0x50(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnForceFeedbackAtLocation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x08(0x08)
		struct FVector Location; // 0x10(0x0c)
		struct FRotator Rotation; // 0x1c(0x0c)
		bool bLooping; // 0x28(0x01)
		char pad_29[0x3]; // 0x29(0x03)
		float IntensityMultiplier; // 0x2c(0x04)
		float StartTime; // 0x30(0x04)
		char pad_34[0x4]; // 0x34(0x04)
		struct UForceFeedbackAttenuation* AttenuationSettings; // 0x38(0x08)
		bool bAutoDestroy; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct UForceFeedbackComponent* ReturnValue; // 0x48(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnEmitterAttached_Param
	{
	public:

		struct UParticleSystem* EmitterTemplate; // 0x00(0x08)
		struct USceneComponent* AttachToComponent; // 0x08(0x08)
		struct FName AttachPointName; // 0x10(0x08)
		struct FVector Location; // 0x18(0x0c)
		struct FRotator Rotation; // 0x24(0x0c)
		struct FVector Scale; // 0x30(0x0c)
		enum class EAttachLocation LocationType; // 0x3c(0x01)
		bool bAutoDestroy; // 0x3d(0x01)
		enum class EPSCPoolMethod PoolingMethod; // 0x3e(0x01)
		bool bAutoActivate; // 0x3f(0x01)
		struct UParticleSystemComponent* ReturnValue; // 0x40(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnEmitterAtLocation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UParticleSystem* EmitterTemplate; // 0x08(0x08)
		struct FVector Location; // 0x10(0x0c)
		struct FRotator Rotation; // 0x1c(0x0c)
		struct FVector Scale; // 0x28(0x0c)
		bool bAutoDestroy; // 0x34(0x01)
		enum class EPSCPoolMethod PoolingMethod; // 0x35(0x01)
		bool bAutoActivateSystem; // 0x36(0x01)
		char pad_37[0x1]; // 0x37(0x01)
		struct UParticleSystemComponent* ReturnValue; // 0x38(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnDialogueAttached_Param
	{
	public:

		struct UDialogueWave* Dialogue; // 0x00(0x08)
		struct FDialogueContext Context; // 0x08(0x18)
		struct USceneComponent* AttachToComponent; // 0x20(0x08)
		struct FName AttachPointName; // 0x28(0x08)
		struct FVector Location; // 0x30(0x0c)
		struct FRotator Rotation; // 0x3c(0x0c)
		enum class EAttachLocation LocationType; // 0x48(0x01)
		bool bStopWhenAttachedToDestroyed; // 0x49(0x01)
		char pad_4A[0x2]; // 0x4a(0x02)
		float VolumeMultiplier; // 0x4c(0x04)
		float PitchMultiplier; // 0x50(0x04)
		float StartTime; // 0x54(0x04)
		struct USoundAttenuation* AttenuationSettings; // 0x58(0x08)
		bool bAutoDestroy; // 0x60(0x01)
		char pad_61[0x7]; // 0x61(0x07)
		struct UAudioComponent* ReturnValue; // 0x68(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnDialogueAtLocation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UDialogueWave* Dialogue; // 0x08(0x08)
		struct FDialogueContext Context; // 0x10(0x18)
		struct FVector Location; // 0x28(0x0c)
		struct FRotator Rotation; // 0x34(0x0c)
		float VolumeMultiplier; // 0x40(0x04)
		float PitchMultiplier; // 0x44(0x04)
		float StartTime; // 0x48(0x04)
		char pad_4C[0x4]; // 0x4c(0x04)
		struct USoundAttenuation* AttenuationSettings; // 0x50(0x08)
		bool bAutoDestroy; // 0x58(0x01)
		char pad_59[0x7]; // 0x59(0x07)
		struct UAudioComponent* ReturnValue; // 0x60(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnDialogue2D_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UDialogueWave* Dialogue; // 0x08(0x08)
		struct FDialogueContext Context; // 0x10(0x18)
		float VolumeMultiplier; // 0x28(0x04)
		float PitchMultiplier; // 0x2c(0x04)
		float StartTime; // 0x30(0x04)
		bool bAutoDestroy; // 0x34(0x01)
		char pad_35[0x3]; // 0x35(0x03)
		struct UAudioComponent* ReturnValue; // 0x38(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnDecalAttached_Param
	{
	public:

		struct UMaterialInterface* DecalMaterial; // 0x00(0x08)
		struct FVector DecalSize; // 0x08(0x0c)
		char pad_14[0x4]; // 0x14(0x04)
		struct USceneComponent* AttachToComponent; // 0x18(0x08)
		struct FName AttachPointName; // 0x20(0x08)
		struct FVector Location; // 0x28(0x0c)
		struct FRotator Rotation; // 0x34(0x0c)
		enum class EAttachLocation LocationType; // 0x40(0x01)
		char pad_41[0x3]; // 0x41(0x03)
		float LifeSpan; // 0x44(0x04)
		struct UDecalComponent* ReturnValue; // 0x48(0x08)
	};

	struct Function_Engine_GameplayStatics_SpawnDecalAtLocation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UMaterialInterface* DecalMaterial; // 0x08(0x08)
		struct FVector DecalSize; // 0x10(0x0c)
		struct FVector Location; // 0x1c(0x0c)
		struct FRotator Rotation; // 0x28(0x0c)
		float LifeSpan; // 0x34(0x04)
		struct UDecalComponent* ReturnValue; // 0x38(0x08)
	};

	struct Function_Engine_GameplayStatics_SetWorldOriginLocation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FIntVector NewLocation; // 0x08(0x0c)
	};

	struct Function_Engine_GameplayStatics_SetViewportMouseCaptureMode_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		enum class EMouseCaptureMode MouseCaptureMode; // 0x08(0x01)
	};

	struct Function_Engine_GameplayStatics_SetSubtitlesEnabled_Param
	{
	public:

		bool bEnabled; // 0x00(0x01)
	};

	struct Function_Engine_GameplayStatics_SetSoundMixClassOverride_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct USoundMix* InSoundMixModifier; // 0x08(0x08)
		struct USoundClass* InSoundClass; // 0x10(0x08)
		float Volume; // 0x18(0x04)
		float Pitch; // 0x1c(0x04)
		float FadeInTime; // 0x20(0x04)
		bool bApplyToChildren; // 0x24(0x01)
	};

	struct Function_Engine_GameplayStatics_SetPlayerControllerID_Param
	{
	public:

		struct APlayerController* Player; // 0x00(0x08)
		int32_t ControllerId; // 0x08(0x04)
	};

	struct Function_Engine_GameplayStatics_SetMaxAudioChannelsScaled_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float MaxChannelCountScale; // 0x08(0x04)
	};

	struct Function_Engine_GameplayStatics_SetGlobalTimeDilation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float TimeDilation; // 0x08(0x04)
	};

	struct Function_Engine_GameplayStatics_SetGlobalPitchModulation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float PitchModulation; // 0x08(0x04)
		float TimeSec; // 0x0c(0x04)
	};

	struct Function_Engine_GameplayStatics_SetGlobalListenerFocusParameters_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float FocusAzimuthScale; // 0x08(0x04)
		float NonFocusAzimuthScale; // 0x0c(0x04)
		float FocusDistanceScale; // 0x10(0x04)
		float NonFocusDistanceScale; // 0x14(0x04)
		float FocusVolumeScale; // 0x18(0x04)
		float NonFocusVolumeScale; // 0x1c(0x04)
		float FocusPriorityScale; // 0x20(0x04)
		float NonFocusPriorityScale; // 0x24(0x04)
	};

	struct Function_Engine_GameplayStatics_SetGamePaused_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool bPaused; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_Engine_GameplayStatics_SetForceDisableSplitscreen_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool bDisable; // 0x08(0x01)
	};

	struct Function_Engine_GameplayStatics_SetEnableWorldRendering_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool bEnable; // 0x08(0x01)
	};

	struct Function_Engine_GameplayStatics_SetBaseSoundMix_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct USoundMix* InSoundMix; // 0x08(0x08)
	};

	struct Function_Engine_GameplayStatics_SaveGameToSlot_Param
	{
	public:

		struct USaveGame* SaveGameObject; // 0x00(0x08)
		struct FString SlotName; // 0x08(0x10)
		int32_t UserIndex; // 0x18(0x04)
		bool ReturnValue; // 0x1c(0x01)
	};

	struct Function_Engine_GameplayStatics_RemovePlayer_Param
	{
	public:

		struct APlayerController* Player; // 0x00(0x08)
		bool bDestroyPawn; // 0x08(0x01)
	};

	struct Function_Engine_GameplayStatics_RebaseZeroOriginOntoLocal_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector WorldLocation; // 0x08(0x0c)
		struct FVector ReturnValue; // 0x14(0x0c)
	};

	struct Function_Engine_GameplayStatics_RebaseLocalOriginOntoZero_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector WorldLocation; // 0x08(0x0c)
		struct FVector ReturnValue; // 0x14(0x0c)
	};

	struct Function_Engine_GameplayStatics_PushSoundMixModifier_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct USoundMix* InSoundMixModifier; // 0x08(0x08)
	};

	struct Function_Engine_GameplayStatics_ProjectWorldToScreen_Param
	{
	public:

		struct APlayerController* Player; // 0x00(0x08)
		struct FVector WorldPosition; // 0x08(0x0c)
		struct FVector2D ScreenPosition; // 0x14(0x08)
		bool bPlayerViewportRelative; // 0x1c(0x01)
		bool ReturnValue; // 0x1d(0x01)
	};

	struct Function_Engine_GameplayStatics_PrimeSound_Param
	{
	public:

		struct USoundBase* InSound; // 0x00(0x08)
	};

	struct Function_Engine_GameplayStatics_PopSoundMixModifier_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct USoundMix* InSoundMixModifier; // 0x08(0x08)
	};

	struct Function_Engine_GameplayStatics_PlayWorldCameraShake_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* Shake; // 0x08(0x08)
		struct FVector Epicenter; // 0x10(0x0c)
		float InnerRadius; // 0x1c(0x04)
		float OuterRadius; // 0x20(0x04)
		float Falloff; // 0x24(0x04)
		bool bOrientShakeTowardsEpicenter; // 0x28(0x01)
	};

	struct Function_Engine_GameplayStatics_PlaySoundAtLocation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct USoundBase* Sound; // 0x08(0x08)
		struct FVector Location; // 0x10(0x0c)
		struct FRotator Rotation; // 0x1c(0x0c)
		float VolumeMultiplier; // 0x28(0x04)
		float PitchMultiplier; // 0x2c(0x04)
		float StartTime; // 0x30(0x04)
		char pad_34[0x4]; // 0x34(0x04)
		struct USoundAttenuation* AttenuationSettings; // 0x38(0x08)
		struct USoundConcurrency* ConcurrencySettings; // 0x40(0x08)
		struct AActor* OwningActor; // 0x48(0x08)
	};

	struct Function_Engine_GameplayStatics_PlaySound2D_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct USoundBase* Sound; // 0x08(0x08)
		float VolumeMultiplier; // 0x10(0x04)
		float PitchMultiplier; // 0x14(0x04)
		float StartTime; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct USoundConcurrency* ConcurrencySettings; // 0x20(0x08)
		struct AActor* OwningActor; // 0x28(0x08)
	};

	struct Function_Engine_GameplayStatics_PlayDialogueAtLocation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UDialogueWave* Dialogue; // 0x08(0x08)
		struct FDialogueContext Context; // 0x10(0x18)
		struct FVector Location; // 0x28(0x0c)
		struct FRotator Rotation; // 0x34(0x0c)
		float VolumeMultiplier; // 0x40(0x04)
		float PitchMultiplier; // 0x44(0x04)
		float StartTime; // 0x48(0x04)
		char pad_4C[0x4]; // 0x4c(0x04)
		struct USoundAttenuation* AttenuationSettings; // 0x50(0x08)
	};

	struct Function_Engine_GameplayStatics_PlayDialogue2D_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UDialogueWave* Dialogue; // 0x08(0x08)
		struct FDialogueContext Context; // 0x10(0x18)
		float VolumeMultiplier; // 0x28(0x04)
		float PitchMultiplier; // 0x2c(0x04)
		float StartTime; // 0x30(0x04)
	};

	struct Function_Engine_GameplayStatics_ParseOption_Param
	{
	public:

		struct FString Options; // 0x00(0x10)
		struct FString Key; // 0x10(0x10)
		struct FString ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_GameplayStatics_OpenLevel_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FName LevelName; // 0x08(0x08)
		bool bAbsolute; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct FString Options; // 0x18(0x10)
	};

	struct Function_Engine_GameplayStatics_MakeHitResult_Param
	{
	public:

		bool bBlockingHit; // 0x00(0x01)
		bool bInitialOverlap; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		float Time; // 0x04(0x04)
		float Distance; // 0x08(0x04)
		struct FVector Location; // 0x0c(0x0c)
		struct FVector ImpactPoint; // 0x18(0x0c)
		struct FVector Normal; // 0x24(0x0c)
		struct FVector ImpactNormal; // 0x30(0x0c)
		char pad_3C[0x4]; // 0x3c(0x04)
		struct UPhysicalMaterial* PhysMat; // 0x40(0x08)
		struct AActor* HitActor; // 0x48(0x08)
		struct UPrimitiveComponent* HitComponent; // 0x50(0x08)
		struct FName HitBoneName; // 0x58(0x08)
		int32_t HitItem; // 0x60(0x04)
		int32_t FaceIndex; // 0x64(0x04)
		struct FVector TraceStart; // 0x68(0x0c)
		struct FVector TraceEnd; // 0x74(0x0c)
		struct FHitResult ReturnValue; // 0x80(0x88)
	};

	struct Function_Engine_GameplayStatics_LoadStreamLevel_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FName LevelName; // 0x08(0x08)
		bool bMakeVisibleAfterLoad; // 0x10(0x01)
		bool bShouldBlockOnLoad; // 0x11(0x01)
		char pad_12[0x6]; // 0x12(0x06)
		struct FLatentActionInfo LatentInfo; // 0x18(0x18)
	};

	struct Function_Engine_GameplayStatics_LoadGameFromSlot_Param
	{
	public:

		struct FString SlotName; // 0x00(0x10)
		int32_t UserIndex; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct USaveGame* ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_GameplayStatics_IsSplitscreenForceDisabled_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_GameplayStatics_IsGamePaused_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_GameplayStatics_HasOption_Param
	{
	public:

		struct FString Options; // 0x00(0x10)
		struct FString InKey; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_GameplayStatics_HasLaunchOption_Param
	{
	public:

		struct FString OptionToCheck; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_GameplayStatics_GrassOverlappingSphereCount_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UStaticMesh* StaticMesh; // 0x08(0x08)
		struct FVector CenterPosition; // 0x10(0x0c)
		float radius; // 0x1c(0x04)
		int32_t ReturnValue; // 0x20(0x04)
	};

	struct Function_Engine_GameplayStatics_GetWorldOriginLocation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FIntVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_GameplayStatics_GetWorldDeltaSeconds_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_GameplayStatics_GetViewProjectionMatrix_Param
	{
	public:

		struct FMinimalViewInfo DesiredView; // 0x00(0x9e0)
		struct FMatrix ViewMatrix; // 0x9e0(0x40)
		struct FMatrix ProjectionMatrix; // 0xa20(0x40)
		struct FMatrix ViewProjectionMatrix; // 0xa60(0x40)
	};

	struct Function_Engine_GameplayStatics_GetViewportMouseCaptureMode_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		enum class EMouseCaptureMode ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_GameplayStatics_GetUnpausedTimeSeconds_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_GameplayStatics_GetTimeSeconds_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_GameplayStatics_GetSurfaceType_Param
	{
	public:

		struct FHitResult Hit; // 0x00(0x88)
		enum class EPhysicalSurface ReturnValue; // 0x88(0x01)
	};

	struct Function_Engine_GameplayStatics_GetStreamingLevel_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FName PackageName; // 0x08(0x08)
		struct ULevelStreaming* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_GameplayStatics_GetRealTimeSeconds_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_GameplayStatics_GetPlayerPawn_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t PlayerIndex; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct APawn* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_GameplayStatics_GetPlayerControllerID_Param
	{
	public:

		struct APlayerController* Player; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_GameplayStatics_GetPlayerControllerFromID_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t ControllerId; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct APlayerController* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_GameplayStatics_GetPlayerController_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t PlayerIndex; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct APlayerController* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_GameplayStatics_GetPlayerCharacter_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t PlayerIndex; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct ACHARACTER* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_GameplayStatics_GetPlayerCameraManager_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t PlayerIndex; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct APlayerCameraManager* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_GameplayStatics_GetPlatformName_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_GameplayStatics_GetObjectClass_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct UClass* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_GameplayStatics_GetMaxAudioChannelCount_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_GameplayStatics_GetKeyValue_Param
	{
	public:

		struct FString Pair; // 0x00(0x10)
		struct FString Key; // 0x10(0x10)
		struct FString Value; // 0x20(0x10)
	};

	struct Function_Engine_GameplayStatics_GetIntOption_Param
	{
	public:

		struct FString Options; // 0x00(0x10)
		struct FString Key; // 0x10(0x10)
		int32_t DefaultValue; // 0x20(0x04)
		int32_t ReturnValue; // 0x24(0x04)
	};

	struct Function_Engine_GameplayStatics_GetGlobalTimeDilation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_GameplayStatics_GetGameState_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGameStateBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_GameplayStatics_GetGameMode_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGameModeBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_GameplayStatics_GetGameInstance_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UGameInstance* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_GameplayStatics_GetEnableWorldRendering_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_GameplayStatics_GetCurrentReverbEffect_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UReverbEffect* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_GameplayStatics_GetCurrentLevelName_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool bRemovePrefixString; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_GameplayStatics_GetAudioTimeSeconds_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_GameplayStatics_GetAllActorsWithTag_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FName Tag; // 0x08(0x08)
		struct TArray<struct AActor*> OutActors; // 0x10(0x10)
	};

	struct Function_Engine_GameplayStatics_GetAllActorsWithInterface_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* Interface; // 0x08(0x08)
		struct TArray<struct AActor*> OutActors; // 0x10(0x10)
	};

	struct Function_Engine_GameplayStatics_GetAllActorsOfClassWithTag_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* ActorClass; // 0x08(0x08)
		struct FName Tag; // 0x10(0x08)
		struct TArray<struct AActor*> OutActors; // 0x18(0x10)
	};

	struct Function_Engine_GameplayStatics_GetAllActorsOfClass_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* ActorClass; // 0x08(0x08)
		struct TArray<struct AActor*> OutActors; // 0x10(0x10)
	};

	struct Function_Engine_GameplayStatics_GetActorOfClass_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* ActorClass; // 0x08(0x08)
		struct AActor* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_GameplayStatics_GetActorArrayBounds_Param
	{
	public:

		struct TArray<struct AActor*> actors; // 0x00(0x10)
		bool bOnlyCollidingComponents; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FVector Center; // 0x14(0x0c)
		struct FVector BoxExtent; // 0x20(0x0c)
	};

	struct Function_Engine_GameplayStatics_GetActorArrayAverageLocation_Param
	{
	public:

		struct TArray<struct AActor*> actors; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_GameplayStatics_GetAccurateRealTime_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t Seconds; // 0x08(0x04)
		float PartialSeconds; // 0x0c(0x04)
	};

	struct Function_Engine_GameplayStatics_FlushLevelStreaming_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
	};

	struct Function_Engine_GameplayStatics_FinishSpawningActor_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform SpawnTransform; // 0x10(0x30)
		struct AActor* ReturnValue; // 0x40(0x08)
	};

	struct Function_Engine_GameplayStatics_FindCollisionUV_Param
	{
	public:

		struct FHitResult Hit; // 0x00(0x88)
		int32_t UVChannel; // 0x88(0x04)
		struct FVector2D UV; // 0x8c(0x08)
		bool ReturnValue; // 0x94(0x01)
	};

	struct Function_Engine_GameplayStatics_EnableLiveStreaming_Param
	{
	public:

		bool Enable; // 0x00(0x01)
	};

	struct Function_Engine_GameplayStatics_DoesSaveGameExist_Param
	{
	public:

		struct FString SlotName; // 0x00(0x10)
		int32_t UserIndex; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_GameplayStatics_DeprojectScreenToWorld_Param
	{
	public:

		struct APlayerController* Player; // 0x00(0x08)
		struct FVector2D ScreenPosition; // 0x08(0x08)
		struct FVector WorldPosition; // 0x10(0x0c)
		struct FVector WorldDirection; // 0x1c(0x0c)
		bool bPlayerViewportRelative; // 0x28(0x01)
		bool ReturnValue; // 0x29(0x01)
	};

	struct Function_Engine_GameplayStatics_DeleteGameInSlot_Param
	{
	public:

		struct FString SlotName; // 0x00(0x10)
		int32_t UserIndex; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_GameplayStatics_DeactivateReverbEffect_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FName TagName; // 0x08(0x08)
	};

	struct Function_Engine_GameplayStatics_CreateSound2D_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct USoundBase* Sound; // 0x08(0x08)
		float VolumeMultiplier; // 0x10(0x04)
		float PitchMultiplier; // 0x14(0x04)
		float StartTime; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct USoundConcurrency* ConcurrencySettings; // 0x20(0x08)
		bool bPersistAcrossLevelTransition; // 0x28(0x01)
		bool bAutoDestroy; // 0x29(0x01)
		char pad_2A[0x6]; // 0x2a(0x06)
		struct UAudioComponent* ReturnValue; // 0x30(0x08)
	};

	struct Function_Engine_GameplayStatics_CreateSaveGameObject_Param
	{
	public:

		struct UClass* SaveGameClass; // 0x00(0x08)
		struct USaveGame* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_GameplayStatics_CreatePlayer_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t ControllerId; // 0x08(0x04)
		bool bSpawnPlayerController; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct APlayerController* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_GameplayStatics_ClearSoundMixModifiers_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
	};

	struct Function_Engine_GameplayStatics_ClearSoundMixClassOverride_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct USoundMix* InSoundMixModifier; // 0x08(0x08)
		struct USoundClass* InSoundClass; // 0x10(0x08)
		float FadeOutTime; // 0x18(0x04)
	};

	struct Function_Engine_GameplayStatics_CancelAsyncLoading_Param
	{
	public:

	};

	struct Function_Engine_GameplayStatics_BreakHitResult_Param
	{
	public:

		struct FHitResult Hit; // 0x00(0x88)
		bool bBlockingHit; // 0x88(0x01)
		bool bInitialOverlap; // 0x89(0x01)
		char pad_8A[0x2]; // 0x8a(0x02)
		float Time; // 0x8c(0x04)
		float Distance; // 0x90(0x04)
		struct FVector Location; // 0x94(0x0c)
		struct FVector ImpactPoint; // 0xa0(0x0c)
		struct FVector Normal; // 0xac(0x0c)
		struct FVector ImpactNormal; // 0xb8(0x0c)
		char pad_C4[0x4]; // 0xc4(0x04)
		struct UPhysicalMaterial* PhysMat; // 0xc8(0x08)
		struct AActor* HitActor; // 0xd0(0x08)
		struct UPrimitiveComponent* HitComponent; // 0xd8(0x08)
		struct FName HitBoneName; // 0xe0(0x08)
		int32_t HitItem; // 0xe8(0x04)
		int32_t FaceIndex; // 0xec(0x04)
		struct FVector TraceStart; // 0xf0(0x0c)
		struct FVector TraceEnd; // 0xfc(0x0c)
	};

	struct Function_Engine_GameplayStatics_BlueprintSuggestProjectileVelocity_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector TossVelocity; // 0x08(0x0c)
		struct FVector StartLocation; // 0x14(0x0c)
		struct FVector EndLocation; // 0x20(0x0c)
		float LaunchSpeed; // 0x2c(0x04)
		float OverrideGravityZ; // 0x30(0x04)
		enum class ESuggestProjVelocityTraceOption TraceOption; // 0x34(0x01)
		char pad_35[0x3]; // 0x35(0x03)
		float CollisionRadius; // 0x38(0x04)
		bool bFavorHighArc; // 0x3c(0x01)
		bool bDrawDebug; // 0x3d(0x01)
		bool ReturnValue; // 0x3e(0x01)
	};

	struct Function_Engine_GameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FHitResult OutHit; // 0x08(0x88)
		struct TArray<struct FVector> OutPathPositions; // 0x90(0x10)
		struct FVector OutLastTraceDestination; // 0xa0(0x0c)
		struct FVector StartPos; // 0xac(0x0c)
		struct FVector LaunchVelocity; // 0xb8(0x0c)
		bool bTracePath; // 0xc4(0x01)
		char pad_C5[0x3]; // 0xc5(0x03)
		float ProjectileRadius; // 0xc8(0x04)
		enum class ECollisionChannel TraceChannel; // 0xcc(0x01)
		bool bTraceComplex; // 0xcd(0x01)
		char pad_CE[0x2]; // 0xce(0x02)
		struct TArray<struct AActor*> ActorsToIgnore; // 0xd0(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0xe0(0x01)
		char pad_E1[0x3]; // 0xe1(0x03)
		float DrawDebugTime; // 0xe4(0x04)
		float SimFrequency; // 0xe8(0x04)
		float MaxSimTime; // 0xec(0x04)
		float OverrideGravityZ; // 0xf0(0x04)
		bool ReturnValue; // 0xf4(0x01)
	};

	struct Function_Engine_GameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FHitResult OutHit; // 0x08(0x88)
		struct TArray<struct FVector> OutPathPositions; // 0x90(0x10)
		struct FVector OutLastTraceDestination; // 0xa0(0x0c)
		struct FVector StartPos; // 0xac(0x0c)
		struct FVector LaunchVelocity; // 0xb8(0x0c)
		bool bTracePath; // 0xc4(0x01)
		char pad_C5[0x3]; // 0xc5(0x03)
		float ProjectileRadius; // 0xc8(0x04)
		char pad_CC[0x4]; // 0xcc(0x04)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0xd0(0x10)
		bool bTraceComplex; // 0xe0(0x01)
		char pad_E1[0x7]; // 0xe1(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0xe8(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0xf8(0x01)
		char pad_F9[0x3]; // 0xf9(0x03)
		float DrawDebugTime; // 0xfc(0x04)
		float SimFrequency; // 0x100(0x04)
		float MaxSimTime; // 0x104(0x04)
		float OverrideGravityZ; // 0x108(0x04)
		bool ReturnValue; // 0x10c(0x01)
	};

	struct Function_Engine_GameplayStatics_Blueprint_PredictProjectilePath_Advanced_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FPredictProjectilePathParams PredictParams; // 0x08(0x60)
		struct FPredictProjectilePathResult PredictResult; // 0x68(0xb8)
		bool ReturnValue; // 0x120(0x01)
	};

	struct Function_Engine_GameplayStatics_BeginSpawningActorFromClass_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* ActorClass; // 0x08(0x08)
		struct FTransform SpawnTransform; // 0x10(0x30)
		bool bNoCollisionFail; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct AActor* Owner; // 0x48(0x08)
		struct AActor* ReturnValue; // 0x50(0x08)
	};

	struct Function_Engine_GameplayStatics_BeginSpawningActorFromBlueprint_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UBlueprint* Blueprint; // 0x08(0x08)
		struct FTransform SpawnTransform; // 0x10(0x30)
		bool bNoCollisionFail; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct AActor* ReturnValue; // 0x48(0x08)
	};

	struct Function_Engine_GameplayStatics_BeginDeferredActorSpawnFromClass_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* ActorClass; // 0x08(0x08)
		struct FTransform SpawnTransform; // 0x10(0x30)
		enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct AActor* Owner; // 0x48(0x08)
		struct AActor* ReturnValue; // 0x50(0x08)
	};

	struct Function_Engine_GameplayStatics_AreSubtitlesEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameplayStatics_AreAnyListenersWithinRange_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		float MaximumRange; // 0x14(0x04)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_GameplayStatics_ApplyRadialDamageWithFalloff_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float BaseDamage; // 0x08(0x04)
		float MinimumDamage; // 0x0c(0x04)
		struct FVector Origin; // 0x10(0x0c)
		float DamageInnerRadius; // 0x1c(0x04)
		float DamageOuterRadius; // 0x20(0x04)
		float DamageFalloff; // 0x24(0x04)
		struct UClass* DamageTypeClass; // 0x28(0x08)
		struct TArray<struct AActor*> IgnoreActors; // 0x30(0x10)
		struct AActor* DamageCauser; // 0x40(0x08)
		struct AController* InstigatedByController; // 0x48(0x08)
		enum class ECollisionChannel DamagePreventionChannel; // 0x50(0x01)
		bool ReturnValue; // 0x51(0x01)
	};

	struct Function_Engine_GameplayStatics_ApplyRadialDamage_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float BaseDamage; // 0x08(0x04)
		struct FVector Origin; // 0x0c(0x0c)
		float DamageRadius; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UClass* DamageTypeClass; // 0x20(0x08)
		struct TArray<struct AActor*> IgnoreActors; // 0x28(0x10)
		struct AActor* DamageCauser; // 0x38(0x08)
		struct AController* InstigatedByController; // 0x40(0x08)
		bool bDoFullDamage; // 0x48(0x01)
		enum class ECollisionChannel DamagePreventionChannel; // 0x49(0x01)
		bool ReturnValue; // 0x4a(0x01)
	};

	struct Function_Engine_GameplayStatics_ApplyPointDamage_Param
	{
	public:

		struct AActor* DamagedActor; // 0x00(0x08)
		float BaseDamage; // 0x08(0x04)
		struct FVector HitFromDirection; // 0x0c(0x0c)
		struct FHitResult HitInfo; // 0x18(0x88)
		struct AController* EventInstigator; // 0xa0(0x08)
		struct AActor* DamageCauser; // 0xa8(0x08)
		struct UClass* DamageTypeClass; // 0xb0(0x08)
		float ReturnValue; // 0xb8(0x04)
	};

	struct Function_Engine_GameplayStatics_ApplyDamage_Param
	{
	public:

		struct AActor* DamagedActor; // 0x00(0x08)
		float BaseDamage; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct AController* EventInstigator; // 0x10(0x08)
		struct AActor* DamageCauser; // 0x18(0x08)
		struct UClass* DamageTypeClass; // 0x20(0x08)
		float ReturnValue; // 0x28(0x04)
	};

	struct Function_Engine_GameplayStatics_ActivateReverbEffect_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UReverbEffect* ReverbEffect; // 0x08(0x08)
		struct FName TagName; // 0x10(0x08)
		float Priority; // 0x18(0x04)
		float Volume; // 0x1c(0x04)
		float FadeTime; // 0x20(0x04)
	};

	struct Function_Engine_BlueprintMapLibrary_SetMapPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct TMap<int32_t, int32_t> Value; // 0x10(0x50)
	};

	struct Function_Engine_BlueprintMapLibrary_Map_Values_Param
	{
	public:

		struct TMap<int32_t, int32_t> TargetMap; // 0x00(0x50)
		struct TArray<int32_t> Values; // 0x50(0x10)
	};

	struct Function_Engine_BlueprintMapLibrary_Map_Remove_Param
	{
	public:

		struct TMap<int32_t, int32_t> TargetMap; // 0x00(0x50)
		int32_t Key; // 0x50(0x04)
		bool ReturnValue; // 0x54(0x01)
	};

	struct Function_Engine_BlueprintMapLibrary_Map_Length_Param
	{
	public:

		struct TMap<int32_t, int32_t> TargetMap; // 0x00(0x50)
		int32_t ReturnValue; // 0x50(0x04)
	};

	struct Function_Engine_BlueprintMapLibrary_Map_Keys_Param
	{
	public:

		struct TMap<int32_t, int32_t> TargetMap; // 0x00(0x50)
		struct TArray<int32_t> Keys; // 0x50(0x10)
	};

	struct Function_Engine_BlueprintMapLibrary_Map_Find_Param
	{
	public:

		struct TMap<int32_t, int32_t> TargetMap; // 0x00(0x50)
		int32_t Key; // 0x50(0x04)
		int32_t Value; // 0x54(0x04)
		bool ReturnValue; // 0x58(0x01)
	};

	struct Function_Engine_BlueprintMapLibrary_Map_Contains_Param
	{
	public:

		struct TMap<int32_t, int32_t> TargetMap; // 0x00(0x50)
		int32_t Key; // 0x50(0x04)
		bool ReturnValue; // 0x54(0x01)
	};

	struct Function_Engine_BlueprintMapLibrary_Map_Clear_Param
	{
	public:

		struct TMap<int32_t, int32_t> TargetMap; // 0x00(0x50)
	};

	struct Function_Engine_BlueprintMapLibrary_Map_Add_Param
	{
	public:

		struct TMap<int32_t, int32_t> TargetMap; // 0x00(0x50)
		int32_t Key; // 0x50(0x04)
		int32_t Value; // 0x54(0x04)
	};

	struct Function_Engine_BlueprintPathsLibrary_VideoCaptureDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ValidatePath_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		bool bDidSucceed; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct FText OutReason; // 0x18(0x18)
	};

	struct Function_Engine_BlueprintPathsLibrary_Split_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString PathPart; // 0x10(0x10)
		struct FString FilenamePart; // 0x20(0x10)
		struct FString ExtensionPart; // 0x30(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_SourceConfigDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ShouldSaveToUserDir_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_BlueprintPathsLibrary_ShaderWorkingDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_SetProjectFilePath_Param
	{
	public:

		struct FString NewGameProjectFilePath; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_SetExtension_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString InNewExtension; // 0x10(0x10)
		struct FString ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ScreenShotDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_SandboxesDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_RootDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_RemoveDuplicateSlashes_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString OutPath; // 0x10(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ProjectUserDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ProjectSavedDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ProjectPluginsDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ProjectPersistentDownloadDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ProjectModsDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ProjectLogDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ProjectIntermediateDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ProjectDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ProjectContentDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ProjectConfigDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ProfilingDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_NormalizeFilename_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString OutPath; // 0x10(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_NormalizeDirectoryName_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString OutPath; // 0x10(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_MakeValidFileName_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
		struct FString InReplacementChar; // 0x10(0x10)
		struct FString ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_MakeStandardFilename_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString OutPath; // 0x10(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_MakePlatformFilename_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString OutPath; // 0x10(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_MakePathRelativeTo_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString InRelativeTo; // 0x10(0x10)
		struct FString OutPath; // 0x20(0x10)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_Engine_BlueprintPathsLibrary_LaunchDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_IsSamePath_Param
	{
	public:

		struct FString PathA; // 0x00(0x10)
		struct FString PathB; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_BlueprintPathsLibrary_IsRestrictedPath_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_BlueprintPathsLibrary_IsRelative_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_BlueprintPathsLibrary_IsProjectFilePathSet_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_BlueprintPathsLibrary_IsDrive_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_BlueprintPathsLibrary_HasProjectPersistentDownloadDir_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetToolTipLocalizationPaths_Param
	{
	public:

		struct TArray<struct FString> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetRestrictedFolderNames_Param
	{
	public:

		struct TArray<struct FString> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetRelativePathToRoot_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Param
	{
	public:

		struct TArray<struct FString> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetProjectFilePath_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetPath_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetInvalidFileSystemChars_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetGameLocalizationPaths_Param
	{
	public:

		struct TArray<struct FString> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetExtension_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		bool bIncludeDot; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetEngineLocalizationPaths_Param
	{
	public:

		struct TArray<struct FString> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetEditorLocalizationPaths_Param
	{
	public:

		struct TArray<struct FString> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetCleanFilename_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GetBaseFilename_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		bool bRemovePath; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GeneratedConfigDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GameUserDeveloperDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GameSourceDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GameDevelopersDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_GameAgnosticSavedDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_FileExists_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_BlueprintPathsLibrary_FeaturePackDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EnterprisePluginsDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EnterpriseFeaturePackDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EnterpriseDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EngineVersionAgnosticUserDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EngineUserDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EngineSourceDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EngineSavedDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EnginePluginsDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EngineIntermediateDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EngineDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EngineContentDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_EngineConfigDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_DirectoryExists_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_BlueprintPathsLibrary_DiffDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_CreateTempFilename_Param
	{
	public:

		struct FString Path; // 0x00(0x10)
		struct FString Prefix; // 0x10(0x10)
		struct FString Extension; // 0x20(0x10)
		struct FString ReturnValue; // 0x30(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ConvertToSandboxPath_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString InSandboxName; // 0x10(0x10)
		struct FString ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ConvertRelativePathToFull_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString InBasePath; // 0x10(0x10)
		struct FString ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ConvertFromSandboxPath_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString InSandboxName; // 0x10(0x10)
		struct FString ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_Combine_Param
	{
	public:

		struct TArray<struct FString> InPaths; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_CollapseRelativeDirectories_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString OutPath; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_BlueprintPathsLibrary_CloudDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_ChangeExtension_Param
	{
	public:

		struct FString InPath; // 0x00(0x10)
		struct FString InNewExtension; // 0x10(0x10)
		struct FString ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_BugItDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_AutomationTransientDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_AutomationLogDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPathsLibrary_AutomationDir_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Param
	{
	public:

		int32_t inSecondsFromNow; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FText Title; // 0x08(0x18)
		struct FText Body; // 0x20(0x18)
		struct FText Action; // 0x38(0x18)
		struct FString ActivationEvent; // 0x50(0x10)
		int32_t ReturnValue; // 0x60(0x04)
	};

	struct Function_Engine_BlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Param
	{
	public:

		int32_t inSecondsFromNow; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString ActivationEvent; // 0x08(0x10)
	};

	struct Function_Engine_BlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Param
	{
	public:

		struct FDateTime FireDateTime; // 0x00(0x08)
		bool LocalTime; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FString ActivationEvent; // 0x10(0x10)
		int32_t ReturnValue; // 0x20(0x04)
	};

	struct Function_Engine_BlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Param
	{
	public:

		struct FDateTime FireDateTime; // 0x00(0x08)
		bool LocalTime; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FText Title; // 0x10(0x18)
		struct FText Body; // 0x28(0x18)
		struct FText Action; // 0x40(0x18)
		struct FString ActivationEvent; // 0x58(0x10)
		int32_t ReturnValue; // 0x68(0x04)
	};

	struct Function_Engine_BlueprintPlatformLibrary_GetLaunchNotification_Param
	{
	public:

		bool NotificationLaunchedApp; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FString ActivationEvent; // 0x08(0x10)
		int32_t FireDate; // 0x18(0x04)
	};

	struct Function_Engine_BlueprintPlatformLibrary_GetDeviceOrientation_Param
	{
	public:

		enum class EScreenOrientation ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_BlueprintPlatformLibrary_ClearAllLocalNotifications_Param
	{
	public:

	};

	struct Function_Engine_BlueprintPlatformLibrary_CancelLocalNotificationById_Param
	{
	public:

		int32_t NotificationId; // 0x00(0x04)
	};

	struct Function_Engine_BlueprintPlatformLibrary_CancelLocalNotification_Param
	{
	public:

		struct FString ActivationEvent; // 0x00(0x10)
	};

	struct Function_Engine_BlueprintSetLibrary_SetSetPropertyByName_Param
	{
	public:

	};

	struct Function_Engine_BlueprintSetLibrary_Set_Union_Param
	{
	public:

	};

	struct Function_Engine_BlueprintSetLibrary_Set_ToArray_Param
	{
	public:

	};

	struct Function_Engine_BlueprintSetLibrary_Set_RemoveItems_Param
	{
	public:

	};

	struct Function_Engine_BlueprintSetLibrary_Set_Remove_Param
	{
	public:

	};

	struct Function_Engine_BlueprintSetLibrary_Set_Length_Param
	{
	public:

	};

	struct Function_Engine_BlueprintSetLibrary_Set_Intersection_Param
	{
	public:

	};

	struct Function_Engine_BlueprintSetLibrary_Set_Difference_Param
	{
	public:

	};

	struct Function_Engine_BlueprintSetLibrary_Set_Contains_Param
	{
	public:

	};

	struct Function_Engine_BlueprintSetLibrary_Set_Clear_Param
	{
	public:

	};

	struct Function_Engine_BlueprintSetLibrary_Set_AddItems_Param
	{
	public:

	};

	struct Function_Engine_BlueprintSetLibrary_Set_Add_Param
	{
	public:

	};

	struct Function_Engine_DataTableFunctionLibrary_GetDataTableRowNames_Param
	{
	public:

		struct UDataTable* Table; // 0x00(0x08)
		struct TArray<struct FName> OutRowNames; // 0x08(0x10)
	};

	struct Function_Engine_DataTableFunctionLibrary_GetDataTableRowFromName_Param
	{
	public:

		struct UDataTable* Table; // 0x00(0x08)
		struct FName RowName; // 0x08(0x08)
		struct FTableRowBase OutRow; // 0x10(0x08)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_DataTableFunctionLibrary_GetDataTableColumnAsString_Param
	{
	public:

		struct UDataTable* DataTable; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct TArray<struct FString> ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_DataTableFunctionLibrary_EvaluateCurveTableRow_Param
	{
	public:

		struct UCurveTable* CurveTable; // 0x00(0x08)
		struct FName RowName; // 0x08(0x08)
		float InXY; // 0x10(0x04)
		enum class EEvaluateCurveTableResult OutResult; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		float OutXY; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct FString ContextString; // 0x20(0x10)
	};

	struct Function_Engine_DataTableFunctionLibrary_DoesDataTableRowExist_Param
	{
	public:

		struct UDataTable* Table; // 0x00(0x08)
		struct FName RowName; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_HealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Param
	{
	public:

	};

	struct Function_Engine_HealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Param
	{
	public:

	};

	struct Function_Engine_HealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Param
	{
	public:

		struct FString SnapshotTitle; // 0x00(0x10)
		bool bResetStats; // 0x10(0x01)
	};

	struct Function_Engine_ImportanceSamplingLibrary_RandomSobolFloat_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		int32_t Dimension; // 0x04(0x04)
		float Seed; // 0x08(0x04)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_ImportanceSamplingLibrary_RandomSobolCell3D_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		int32_t NumCells; // 0x04(0x04)
		struct FVector Cell; // 0x08(0x0c)
		struct FVector Seed; // 0x14(0x0c)
		struct FVector ReturnValue; // 0x20(0x0c)
	};

	struct Function_Engine_ImportanceSamplingLibrary_RandomSobolCell2D_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		int32_t NumCells; // 0x04(0x04)
		struct FVector2D Cell; // 0x08(0x08)
		struct FVector2D Seed; // 0x10(0x08)
		struct FVector2D ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_ImportanceSamplingLibrary_NextSobolFloat_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		int32_t Dimension; // 0x04(0x04)
		float PreviousValue; // 0x08(0x04)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_ImportanceSamplingLibrary_NextSobolCell3D_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		int32_t NumCells; // 0x04(0x04)
		struct FVector PreviousValue; // 0x08(0x0c)
		struct FVector ReturnValue; // 0x14(0x0c)
	};

	struct Function_Engine_ImportanceSamplingLibrary_NextSobolCell2D_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		int32_t NumCells; // 0x04(0x04)
		struct FVector2D PreviousValue; // 0x08(0x08)
		struct FVector2D ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_ImportanceSamplingLibrary_MakeImportanceTexture_Param
	{
	public:

		struct UTexture2D* Texture; // 0x00(0x08)
		enum class EImportanceWeight WeightingFunc; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FImportanceTexture ReturnValue; // 0x10(0x50)
	};

	struct Function_Engine_ImportanceSamplingLibrary_ImportanceSample_Param
	{
	public:

		struct FImportanceTexture Texture; // 0x00(0x50)
		struct FVector2D Rand; // 0x50(0x08)
		int32_t Samples; // 0x58(0x04)
		float Intensity; // 0x5c(0x04)
		struct FVector2D SamplePosition; // 0x60(0x08)
		struct FLinearColor SampleColor; // 0x68(0x10)
		float SampleIntensity; // 0x78(0x04)
		float SampleSize; // 0x7c(0x04)
	};

	struct Function_Engine_ImportanceSamplingLibrary_BreakImportanceTexture_Param
	{
	public:

		struct FImportanceTexture ImportanceTexture; // 0x00(0x50)
		struct UTexture2D* Texture; // 0x50(0x08)
		enum class EImportanceWeight WeightingFunc; // 0x58(0x01)
	};

	struct Function_Engine_KismetArrayLibrary_SetArrayPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct TArray<int32_t> Value; // 0x10(0x10)
	};

	struct Function_Engine_KismetArrayLibrary_FilterArray_Param
	{
	public:

		struct TArray<struct AActor*> TargetArray; // 0x00(0x10)
		struct UClass* FilterClass; // 0x10(0x08)
		struct TArray<struct AActor*> FilteredArray; // 0x18(0x10)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Swap_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t FirstIndex; // 0x10(0x04)
		int32_t SecondIndex; // 0x14(0x04)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Shuffle_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Set_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t Index; // 0x10(0x04)
		int32_t Item; // 0x14(0x04)
		bool bSizeToFit; // 0x18(0x01)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Resize_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t size; // 0x10(0x04)
	};

	struct Function_Engine_KismetArrayLibrary_Array_RemoveItem_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t Item; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Remove_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t IndexToRemove; // 0x10(0x04)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Length_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetArrayLibrary_Array_LastIndex_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetArrayLibrary_Array_IsValidIndex_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t IndexToTest; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Insert_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t NewItem; // 0x10(0x04)
		int32_t Index; // 0x14(0x04)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Identical_Param
	{
	public:

		struct TArray<int32_t> ArrayA; // 0x00(0x10)
		struct TArray<int32_t> ArrayB; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Get_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t Index; // 0x10(0x04)
		int32_t Item; // 0x14(0x04)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Find_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t ItemToFind; // 0x10(0x04)
		int32_t ReturnValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Contains_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t ItemToFind; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Clear_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Append_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		struct TArray<int32_t> SourceArray; // 0x10(0x10)
	};

	struct Function_Engine_KismetArrayLibrary_Array_AddUnique_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t NewItem; // 0x10(0x04)
		int32_t ReturnValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetArrayLibrary_Array_Add_Param
	{
	public:

		struct TArray<int32_t> TargetArray; // 0x00(0x10)
		int32_t NewItem; // 0x10(0x04)
		int32_t ReturnValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetGuidLibrary_Parse_StringToGuid_Param
	{
	public:

		struct FString GuidString; // 0x00(0x10)
		struct FGuid OutGUID; // 0x10(0x10)
		bool Success; // 0x20(0x01)
	};

	struct Function_Engine_KismetGuidLibrary_NotEqual_GuidGuid_Param
	{
	public:

		struct FGuid A; // 0x00(0x10)
		struct FGuid B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetGuidLibrary_NewGuid_Param
	{
	public:

		struct FGuid ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetGuidLibrary_IsValid_Guid_Param
	{
	public:

		struct FGuid InGuid; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetGuidLibrary_Invalidate_Guid_Param
	{
	public:

		struct FGuid InGuid; // 0x00(0x10)
	};

	struct Function_Engine_KismetGuidLibrary_EqualEqual_GuidGuid_Param
	{
	public:

		struct FGuid A; // 0x00(0x10)
		struct FGuid B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetGuidLibrary_Conv_GuidToString_Param
	{
	public:

		struct FGuid InGuid; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_IsTouchEvent_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		bool ReturnValue; // 0x70(0x01)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_IsMouseButtonDown_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		struct FKey MouseButton; // 0x70(0x18)
		bool ReturnValue; // 0x88(0x01)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_GetWheelDelta_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		float ReturnValue; // 0x70(0x04)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_GetUserIndex_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		int32_t ReturnValue; // 0x70(0x04)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_GetTouchpadIndex_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		int32_t ReturnValue; // 0x70(0x04)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_GetScreenSpacePosition_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		struct FVector2D ReturnValue; // 0x70(0x08)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_GetPointerIndex_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		int32_t ReturnValue; // 0x70(0x04)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		struct FVector2D ReturnValue; // 0x70(0x08)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_GetGestureType_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		enum class ESlateGesture ReturnValue; // 0x70(0x01)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_GetGestureDelta_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		struct FVector2D ReturnValue; // 0x70(0x08)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_GetEffectingButton_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		struct FKey ReturnValue; // 0x70(0x18)
	};

	struct Function_Engine_KismetInputLibrary_PointerEvent_GetCursorDelta_Param
	{
	public:

		struct FPointerEvent Input; // 0x00(0x70)
		struct FVector2D ReturnValue; // 0x70(0x08)
	};

	struct Function_Engine_KismetInputLibrary_Key_IsVectorAxis_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_Key_IsValid_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_Key_IsMouseButton_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_Key_IsModifierKey_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_Key_IsKeyboardKey_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_Key_IsGamepadKey_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_Key_IsFloatAxis_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_Key_GetNavigationDirectionFromKey_Param
	{
	public:

		struct FKeyEvent InKeyEvent; // 0x00(0x38)
		enum class EUINavigation ReturnValue; // 0x38(0x01)
	};

	struct Function_Engine_KismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Param
	{
	public:

		struct FAnalogInputEvent InAnalogEvent; // 0x00(0x40)
		enum class EUINavigation ReturnValue; // 0x40(0x01)
	};

	struct Function_Engine_KismetInputLibrary_Key_GetNavigationActionFromKey_Param
	{
	public:

		struct FKeyEvent InKeyEvent; // 0x00(0x38)
		enum class EUINavigationAction ReturnValue; // 0x38(0x01)
	};

	struct Function_Engine_KismetInputLibrary_Key_GetNavigationAction_Param
	{
	public:

		struct FKey InKey; // 0x00(0x18)
		enum class EUINavigationAction ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_Key_GetDisplayName_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsShiftDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsRightShiftDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsRightControlDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsRightCommandDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsRightAltDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsRepeat_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsLeftShiftDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsLeftControlDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsLeftCommandDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsLeftAltDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsControlDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsCommandDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputEvent_IsAltDown_Param
	{
	public:

		struct FInputEvent Input; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetInputLibrary_InputChord_GetDisplayName_Param
	{
	public:

		struct FInputChord Key; // 0x00(0x20)
		struct FText ReturnValue; // 0x20(0x18)
	};

	struct Function_Engine_KismetInputLibrary_GetUserIndex_Param
	{
	public:

		struct FKeyEvent Input; // 0x00(0x38)
		int32_t ReturnValue; // 0x38(0x04)
	};

	struct Function_Engine_KismetInputLibrary_GetKey_Param
	{
	public:

		struct FKeyEvent Input; // 0x00(0x38)
		struct FKey ReturnValue; // 0x38(0x18)
	};

	struct Function_Engine_KismetInputLibrary_GetAnalogValue_Param
	{
	public:

		struct FAnalogInputEvent Input; // 0x00(0x40)
		float ReturnValue; // 0x40(0x04)
	};

	struct Function_Engine_KismetInputLibrary_EqualEqual_KeyKey_Param
	{
	public:

		struct FKey A; // 0x00(0x18)
		struct FKey B; // 0x18(0x18)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_Engine_KismetInputLibrary_EqualEqual_InputChordInputChord_Param
	{
	public:

		struct FInputChord A; // 0x00(0x20)
		struct FInputChord B; // 0x20(0x20)
		bool ReturnValue; // 0x40(0x01)
	};

	struct Function_Engine_KismetInputLibrary_CalibrateTilt_Param
	{
	public:

	};

	struct Function_Engine_KismetInternationalizationLibrary_SetCurrentLocale_Param
	{
	public:

		struct FString Culture; // 0x00(0x10)
		bool SaveToConfig; // 0x10(0x01)
		bool ReturnValue; // 0x11(0x01)
	};

	struct Function_Engine_KismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Param
	{
	public:

		struct FString Culture; // 0x00(0x10)
		bool SaveToConfig; // 0x10(0x01)
		bool ReturnValue; // 0x11(0x01)
	};

	struct Function_Engine_KismetInternationalizationLibrary_SetCurrentLanguage_Param
	{
	public:

		struct FString Culture; // 0x00(0x10)
		bool SaveToConfig; // 0x10(0x01)
		bool ReturnValue; // 0x11(0x01)
	};

	struct Function_Engine_KismetInternationalizationLibrary_SetCurrentCulture_Param
	{
	public:

		struct FString Culture; // 0x00(0x10)
		bool SaveToConfig; // 0x10(0x01)
		bool ReturnValue; // 0x11(0x01)
	};

	struct Function_Engine_KismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Param
	{
	public:

		struct FName AssetGroup; // 0x00(0x08)
		struct FString Culture; // 0x08(0x10)
		bool SaveToConfig; // 0x18(0x01)
		bool ReturnValue; // 0x19(0x01)
	};

	struct Function_Engine_KismetInternationalizationLibrary_GetSuitableCulture_Param
	{
	public:

		struct TArray<struct FString> AvailableCultures; // 0x00(0x10)
		struct FString CultureToMatch; // 0x10(0x10)
		struct FString FallbackCulture; // 0x20(0x10)
		struct FString ReturnValue; // 0x30(0x10)
	};

	struct Function_Engine_KismetInternationalizationLibrary_GetNativeCulture_Param
	{
	public:

		enum class ELocalizedTextSourceCategory TextCategory; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetInternationalizationLibrary_GetLocalizedCultures_Param
	{
	public:

		bool IncludeGame; // 0x00(0x01)
		bool IncludeEngine; // 0x01(0x01)
		bool IncludeEditor; // 0x02(0x01)
		bool IncludeAdditional; // 0x03(0x01)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FString> ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetInternationalizationLibrary_GetCurrentLocale_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetInternationalizationLibrary_GetCurrentLanguage_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetInternationalizationLibrary_GetCurrentCulture_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Param
	{
	public:

		struct FName AssetGroup; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetInternationalizationLibrary_GetCultureDisplayName_Param
	{
	public:

		struct FString Culture; // 0x00(0x10)
		bool Localized; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Param
	{
	public:

		struct FName AssetGroup; // 0x00(0x08)
		bool SaveToConfig; // 0x08(0x01)
	};

	struct Function_Engine_KismetMaterialLibrary_SetVectorParameterValue_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UMaterialParameterCollection* Collection; // 0x08(0x08)
		struct FName ParameterName; // 0x10(0x08)
		struct FLinearColor ParameterValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetMaterialLibrary_SetScalarParameterValue_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UMaterialParameterCollection* Collection; // 0x08(0x08)
		struct FName ParameterName; // 0x10(0x08)
		float ParameterValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetMaterialLibrary_GetVectorParameterValue_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UMaterialParameterCollection* Collection; // 0x08(0x08)
		struct FName ParameterName; // 0x10(0x08)
		struct FLinearColor ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetMaterialLibrary_GetScalarParameterValue_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UMaterialParameterCollection* Collection; // 0x08(0x08)
		struct FName ParameterName; // 0x10(0x08)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetMaterialLibrary_CreateDynamicMaterialInstance_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UMaterialInterface* Parent; // 0x08(0x08)
		struct FName OptionalName; // 0x10(0x08)
		struct UMaterialInstanceDynamic* ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Xor_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Xor_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		int64_t ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_WeightedMovingAverage_FVector_Param
	{
	public:

		struct FVector CurrentSample; // 0x00(0x0c)
		struct FVector PreviousSample; // 0x0c(0x0c)
		float Weight; // 0x18(0x04)
		struct FVector ReturnValue; // 0x1c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_WeightedMovingAverage_FRotator_Param
	{
	public:

		struct FRotator CurrentSample; // 0x00(0x0c)
		struct FRotator PreviousSample; // 0x0c(0x0c)
		float Weight; // 0x18(0x04)
		struct FRotator ReturnValue; // 0x1c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_WeightedMovingAverage_Float_Param
	{
	public:

		float CurrentSample; // 0x00(0x04)
		float PreviousSample; // 0x04(0x04)
		float Weight; // 0x08(0x04)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_VSizeXYSquared_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_VSizeXY_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_VSizeSquared_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_VSize2DSquared_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_VSize2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_VSize_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_VLerp_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		float Alpha; // 0x18(0x04)
		struct FVector ReturnValue; // 0x1c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_VInterpTo_Constant_Param
	{
	public:

		struct FVector Current; // 0x00(0x0c)
		struct FVector Target; // 0x0c(0x0c)
		float DeltaTime; // 0x18(0x04)
		float InterpSpeed; // 0x1c(0x04)
		struct FVector ReturnValue; // 0x20(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_VInterpTo_Param
	{
	public:

		struct FVector Current; // 0x00(0x0c)
		struct FVector Target; // 0x0c(0x0c)
		float DeltaTime; // 0x18(0x04)
		float InterpSpeed; // 0x1c(0x04)
		struct FVector ReturnValue; // 0x20(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_VectorSpringInterp_Param
	{
	public:

		struct FVector Current; // 0x00(0x0c)
		struct FVector Target; // 0x0c(0x0c)
		struct FVectorSpringState SpringState; // 0x18(0x18)
		float Stiffness; // 0x30(0x04)
		float CriticalDampingFactor; // 0x34(0x04)
		float DeltaTime; // 0x38(0x04)
		float Mass; // 0x3c(0x04)
		struct FVector ReturnValue; // 0x40(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Zero_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Up_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_UnwindEuler_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_UnitCartesianToSpherical_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector2D ReturnValue; // 0x0c(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Vector_ToRadians_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_ToDegrees_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_SnappedToGrid_Param
	{
	public:

		struct FVector InVect; // 0x00(0x0c)
		float InGridSize; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Set_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float X; // 0x0c(0x04)
		float Y; // 0x10(0x04)
		float Z; // 0x14(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Right_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Reciprocal_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_ProjectOnToNormal_Param
	{
	public:

		struct FVector V; // 0x00(0x0c)
		struct FVector InNormal; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_One_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_NormalUnsafe_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Normalize_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float Tolerance; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Normal2D_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float Tolerance; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_MirrorByPlane_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FPlane InPlane; // 0x10(0x10)
		struct FVector ReturnValue; // 0x20(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Left_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_IsZero_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Vector_IsUnit_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float SquaredLenthTolerance; // 0x0c(0x04)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Vector_IsUniform_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float Tolerance; // 0x0c(0x04)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Vector_IsNormal_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Vector_IsNearlyZero_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float Tolerance; // 0x0c(0x04)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Vector_IsNAN_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Vector_HeadingAngle_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector_GetSignVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_GetProjection_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_GetAbsMin_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector_GetAbsMax_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector_GetAbs_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Forward_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Down_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_DistanceSquared_Param
	{
	public:

		struct FVector v1; // 0x00(0x0c)
		struct FVector v2; // 0x0c(0x0c)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Distance2DSquared_Param
	{
	public:

		struct FVector v1; // 0x00(0x0c)
		struct FVector v2; // 0x0c(0x0c)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Distance2D_Param
	{
	public:

		struct FVector v1; // 0x00(0x0c)
		struct FVector v2; // 0x0c(0x0c)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Distance_Param
	{
	public:

		struct FVector v1; // 0x00(0x0c)
		struct FVector v2; // 0x0c(0x0c)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector_CosineAngle2D_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector_ComponentMin_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_ComponentMax_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_ClampSizeMax2D_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float Max; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_ClampSizeMax_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float Max; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_ClampSize2D_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float Min; // 0x0c(0x04)
		float Max; // 0x10(0x04)
		struct FVector ReturnValue; // 0x14(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_BoundedToCube_Param
	{
	public:

		struct FVector InVect; // 0x00(0x0c)
		float InRadius; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_BoundedToBox_Param
	{
	public:

		struct FVector InVect; // 0x00(0x0c)
		struct FVector InBoxMin; // 0x0c(0x0c)
		struct FVector InBoxMax; // 0x18(0x0c)
		struct FVector ReturnValue; // 0x24(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Backward_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_Assign_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector InVector; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Vector_AddBounded_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector InAddVect; // 0x0c(0x0c)
		float InRadius; // 0x18(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_Zero_Param
	{
	public:

		struct FVector4 ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_SizeSquared3_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_SizeSquared_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_Size3_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_Size_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_Set_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		float X; // 0x10(0x04)
		float Y; // 0x14(0x04)
		float Z; // 0x18(0x04)
		float W; // 0x1c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_NormalUnsafe3_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_Normalize3_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		float Tolerance; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_Normal3_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		float Tolerance; // 0x10(0x04)
		char pad_14[0xc]; // 0x14(0x0c)
		struct FVector4 ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_Negated_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_MirrorByVector3_Param
	{
	public:

		struct FVector4 Direction; // 0x00(0x10)
		struct FVector4 SurfaceNormal; // 0x10(0x10)
		struct FVector4 ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_IsZero_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_IsUnit3_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		float SquaredLenthTolerance; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_IsNormal3_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_IsNearlyZero3_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		float Tolerance; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_IsNAN_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_DotProduct3_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 B; // 0x10(0x10)
		float ReturnValue; // 0x20(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_DotProduct_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 B; // 0x10(0x10)
		float ReturnValue; // 0x20(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_CrossProduct3_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 B; // 0x10(0x10)
		struct FVector4 ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Vector4_Assign_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 InVector; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Vector2DInterpTo_Constant_Param
	{
	public:

		struct FVector2D Current; // 0x00(0x08)
		struct FVector2D Target; // 0x08(0x08)
		float DeltaTime; // 0x10(0x04)
		float InterpSpeed; // 0x14(0x04)
		struct FVector2D ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Vector2DInterpTo_Param
	{
	public:

		struct FVector2D Current; // 0x00(0x08)
		struct FVector2D Target; // 0x08(0x08)
		float DeltaTime; // 0x10(0x04)
		float InterpSpeed; // 0x14(0x04)
		struct FVector2D ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Vector2D_Zero_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Vector2D_Unit45Deg_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Vector2D_One_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_VEase_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		float Alpha; // 0x18(0x04)
		enum class EEasingFunc EasingFunc; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		float BlendExp; // 0x20(0x04)
		int32_t Steps; // 0x24(0x04)
		struct FVector ReturnValue; // 0x28(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_UtcNow_Param
	{
	public:

		struct FDateTime ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_TransformRotation_Param
	{
	public:

		struct FTransform T; // 0x00(0x30)
		struct FRotator Rotation; // 0x30(0x0c)
		struct FRotator ReturnValue; // 0x3c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_TransformLocation_Param
	{
	public:

		struct FTransform T; // 0x00(0x30)
		struct FVector Location; // 0x30(0x0c)
		struct FVector ReturnValue; // 0x3c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_TransformDirection_Param
	{
	public:

		struct FTransform T; // 0x00(0x30)
		struct FVector Direction; // 0x30(0x0c)
		struct FVector ReturnValue; // 0x3c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Transform_Determinant_Param
	{
	public:

		struct FTransform Transform; // 0x00(0x30)
		float ReturnValue; // 0x30(0x04)
	};

	struct Function_Engine_KismetMathLibrary_ToSign2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_ToRounded2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_ToDirectionAndLength2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D OutDir; // 0x08(0x08)
		float OutLength; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Today_Param
	{
	public:

		struct FDateTime ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_TLerp_Param
	{
	public:

		struct FTransform A; // 0x00(0x30)
		struct FTransform B; // 0x30(0x30)
		float Alpha; // 0x60(0x04)
		enum class ELerpInterpolationMode InterpMode; // 0x64(0x01)
		char pad_65[0xb]; // 0x65(0x0b)
		struct FTransform ReturnValue; // 0x70(0x30)
	};

	struct Function_Engine_KismetMathLibrary_TInterpTo_Param
	{
	public:

		struct FTransform Current; // 0x00(0x30)
		struct FTransform Target; // 0x30(0x30)
		float DeltaTime; // 0x60(0x04)
		float InterpSpeed; // 0x64(0x04)
		char pad_68[0x8]; // 0x68(0x08)
		struct FTransform ReturnValue; // 0x70(0x30)
	};

	struct Function_Engine_KismetMathLibrary_TimespanZeroValue_Param
	{
	public:

		struct FTimespan ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_TimespanRatio_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		struct FTimespan B; // 0x08(0x08)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_TimespanMinValue_Param
	{
	public:

		struct FTimespan ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_TimespanMaxValue_Param
	{
	public:

		struct FTimespan ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_TimespanFromString_Param
	{
	public:

		struct FString TimespanString; // 0x00(0x10)
		struct FTimespan Result; // 0x10(0x08)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetMathLibrary_TEase_Param
	{
	public:

		struct FTransform A; // 0x00(0x30)
		struct FTransform B; // 0x30(0x30)
		float Alpha; // 0x60(0x04)
		enum class EEasingFunc EasingFunc; // 0x64(0x01)
		char pad_65[0x3]; // 0x65(0x03)
		float BlendExp; // 0x68(0x04)
		int32_t Steps; // 0x6c(0x04)
		struct FTransform ReturnValue; // 0x70(0x30)
	};

	struct Function_Engine_KismetMathLibrary_Tan_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_VectorVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_VectorInt_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		int32_t B; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_VectorFloat_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float B; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_Vector4Vector4_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 B; // 0x10(0x10)
		struct FVector4 ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_Vector2DVector2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D B; // 0x08(0x08)
		struct FVector2D ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_Vector2DFloat_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float B; // 0x08(0x04)
		struct FVector2D ReturnValue; // 0x0c(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_TimespanTimespan_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		struct FTimespan B; // 0x08(0x08)
		struct FTimespan ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_QuatQuat_Param
	{
	public:

		struct FQuat A; // 0x00(0x10)
		struct FQuat B; // 0x10(0x10)
		struct FQuat ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_LinearColorLinearColor_Param
	{
	public:

		struct FLinearColor A; // 0x00(0x10)
		struct FLinearColor B; // 0x10(0x10)
		struct FLinearColor ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		int64_t ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_DateTimeTimespan_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FTimespan B; // 0x08(0x08)
		struct FDateTime ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_DateTimeDateTime_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FDateTime B; // 0x08(0x08)
		struct FTimespan ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Subtract_ByteByte_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		char ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Square_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Sqrt_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Spherical2DToUnitCartesian_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Sin_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_SignOfInteger64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_SignOfInteger_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_SignOfFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_SetRandomStreamSeed_Param
	{
	public:

		struct FRandomStream Stream; // 0x00(0x08)
		int32_t NewSeed; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Set2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float X; // 0x08(0x04)
		float Y; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_SelectVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		bool bPickA; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		struct FVector ReturnValue; // 0x1c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_SelectTransform_Param
	{
	public:

		struct FTransform A; // 0x00(0x30)
		struct FTransform B; // 0x30(0x30)
		bool bPickA; // 0x60(0x01)
		char pad_61[0xf]; // 0x61(0x0f)
		struct FTransform ReturnValue; // 0x70(0x30)
	};

	struct Function_Engine_KismetMathLibrary_SelectString_Param
	{
	public:

		struct FString A; // 0x00(0x10)
		struct FString B; // 0x10(0x10)
		bool bPickA; // 0x20(0x01)
		char pad_21[0x7]; // 0x21(0x07)
		struct FString ReturnValue; // 0x28(0x10)
	};

	struct Function_Engine_KismetMathLibrary_SelectRotator_Param
	{
	public:

		struct FRotator A; // 0x00(0x0c)
		struct FRotator B; // 0x0c(0x0c)
		bool bPickA; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		struct FRotator ReturnValue; // 0x1c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_SelectObject_Param
	{
	public:

		struct UObject* A; // 0x00(0x08)
		struct UObject* B; // 0x08(0x08)
		bool bSelectA; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UObject* ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_KismetMathLibrary_SelectInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		bool bPickA; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		int32_t ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_SelectFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		bool bPickA; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_SelectColor_Param
	{
	public:

		struct FLinearColor A; // 0x00(0x10)
		struct FLinearColor B; // 0x10(0x10)
		bool bPickA; // 0x20(0x01)
		char pad_21[0x3]; // 0x21(0x03)
		struct FLinearColor ReturnValue; // 0x24(0x10)
	};

	struct Function_Engine_KismetMathLibrary_SelectClass_Param
	{
	public:

		struct UClass* A; // 0x00(0x08)
		struct UClass* B; // 0x08(0x08)
		bool bSelectA; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UClass* ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_KismetMathLibrary_SeedRandomStream_Param
	{
	public:

		struct FRandomStream Stream; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_SafeDivide_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Round64_Param
	{
	public:

		float A; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		int64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Round_Param
	{
	public:

		float A; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_RotatorFromAxisAndAngle_Param
	{
	public:

		struct FVector Axis; // 0x00(0x0c)
		float Angle; // 0x0c(0x04)
		struct FRotator ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RotateAngleAxis_Param
	{
	public:

		struct FVector InVect; // 0x00(0x0c)
		float AngleDeg; // 0x0c(0x04)
		struct FVector Axis; // 0x10(0x0c)
		struct FVector ReturnValue; // 0x1c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RLerp_Param
	{
	public:

		struct FRotator A; // 0x00(0x0c)
		struct FRotator B; // 0x0c(0x0c)
		float Alpha; // 0x18(0x04)
		bool bShortestPath; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FRotator ReturnValue; // 0x20(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RInterpTo_Constant_Param
	{
	public:

		struct FRotator Current; // 0x00(0x0c)
		struct FRotator Target; // 0x0c(0x0c)
		float DeltaTime; // 0x18(0x04)
		float InterpSpeed; // 0x1c(0x04)
		struct FRotator ReturnValue; // 0x20(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RInterpTo_Param
	{
	public:

		struct FRotator Current; // 0x00(0x0c)
		struct FRotator Target; // 0x0c(0x0c)
		float DeltaTime; // 0x18(0x04)
		float InterpSpeed; // 0x1c(0x04)
		struct FRotator ReturnValue; // 0x20(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RGBToHSV_Vector_Param
	{
	public:

		struct FLinearColor RGB; // 0x00(0x10)
		struct FLinearColor HSV; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_RGBToHSV_Param
	{
	public:

		struct FLinearColor InColor; // 0x00(0x10)
		float H; // 0x10(0x04)
		float S; // 0x14(0x04)
		float V; // 0x18(0x04)
		float A; // 0x1c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_RGBLinearToHSV_Param
	{
	public:

		struct FLinearColor RGB; // 0x00(0x10)
		struct FLinearColor ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_ResetVectorSpringState_Param
	{
	public:

		struct FVectorSpringState SpringState; // 0x00(0x18)
	};

	struct Function_Engine_KismetMathLibrary_ResetRandomStream_Param
	{
	public:

		struct FRandomStream Stream; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_ResetFloatSpringState_Param
	{
	public:

		struct FFloatSpringState SpringState; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_REase_Param
	{
	public:

		struct FRotator A; // 0x00(0x0c)
		struct FRotator B; // 0x0c(0x0c)
		float Alpha; // 0x18(0x04)
		bool bShortestPath; // 0x1c(0x01)
		enum class EEasingFunc EasingFunc; // 0x1d(0x01)
		char pad_1E[0x2]; // 0x1e(0x02)
		float BlendExp; // 0x20(0x04)
		int32_t Steps; // 0x24(0x04)
		struct FRotator ReturnValue; // 0x28(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomUnitVectorInEllipticalConeInRadiansFromStream_Param
	{
	public:

		struct FVector ConeDir; // 0x00(0x0c)
		float MaxYawInRadians; // 0x0c(0x04)
		float MaxPitchInRadians; // 0x10(0x04)
		struct FRandomStream Stream; // 0x14(0x08)
		struct FVector ReturnValue; // 0x1c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomUnitVectorInEllipticalConeInRadians_Param
	{
	public:

		struct FVector ConeDir; // 0x00(0x0c)
		float MaxYawInRadians; // 0x0c(0x04)
		float MaxPitchInRadians; // 0x10(0x04)
		struct FVector ReturnValue; // 0x14(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomUnitVectorInEllipticalConeInDegreesFromStream_Param
	{
	public:

		struct FVector ConeDir; // 0x00(0x0c)
		float MaxYawInDegrees; // 0x0c(0x04)
		float MaxPitchInDegrees; // 0x10(0x04)
		struct FRandomStream Stream; // 0x14(0x08)
		struct FVector ReturnValue; // 0x1c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomUnitVectorInEllipticalConeInDegrees_Param
	{
	public:

		struct FVector ConeDir; // 0x00(0x0c)
		float MaxYawInDegrees; // 0x0c(0x04)
		float MaxPitchInDegrees; // 0x10(0x04)
		struct FVector ReturnValue; // 0x14(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomUnitVectorInConeInRadiansFromStream_Param
	{
	public:

		struct FVector ConeDir; // 0x00(0x0c)
		float ConeHalfAngleInRadians; // 0x0c(0x04)
		struct FRandomStream Stream; // 0x10(0x08)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomUnitVectorInConeInRadians_Param
	{
	public:

		struct FVector ConeDir; // 0x00(0x0c)
		float ConeHalfAngleInRadians; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomUnitVectorInConeInDegreesFromStream_Param
	{
	public:

		struct FVector ConeDir; // 0x00(0x0c)
		float ConeHalfAngleInDegrees; // 0x0c(0x04)
		struct FRandomStream Stream; // 0x10(0x08)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomUnitVectorInConeInDegrees_Param
	{
	public:

		struct FVector ConeDir; // 0x00(0x0c)
		float ConeHalfAngleInDegrees; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomUnitVectorFromStream_Param
	{
	public:

		struct FRandomStream Stream; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomUnitVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomRotatorFromStream_Param
	{
	public:

		bool bRoll; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FRandomStream Stream; // 0x04(0x08)
		struct FRotator ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomRotator_Param
	{
	public:

		bool bRoll; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FRotator ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomPointInBoundingBox_Param
	{
	public:

		struct FVector Origin; // 0x00(0x0c)
		struct FVector BoxExtent; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_RandomIntegerInRangeFromStream_Param
	{
	public:

		int32_t Min; // 0x00(0x04)
		int32_t Max; // 0x04(0x04)
		struct FRandomStream Stream; // 0x08(0x08)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_RandomIntegerInRange_Param
	{
	public:

		int32_t Min; // 0x00(0x04)
		int32_t Max; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_RandomIntegerFromStream_Param
	{
	public:

		int32_t Max; // 0x00(0x04)
		struct FRandomStream Stream; // 0x04(0x08)
		int32_t ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_RandomInteger64InRange_Param
	{
	public:

		int64_t Min; // 0x00(0x08)
		int64_t Max; // 0x08(0x08)
		int64_t ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_RandomInteger64_Param
	{
	public:

		int64_t Max; // 0x00(0x08)
		int64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_RandomInteger_Param
	{
	public:

		int32_t Max; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_RandomFloatInRangeFromStream_Param
	{
	public:

		float Min; // 0x00(0x04)
		float Max; // 0x04(0x04)
		struct FRandomStream Stream; // 0x08(0x08)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_RandomFloatInRange_Param
	{
	public:

		float Min; // 0x00(0x04)
		float Max; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_RandomFloatFromStream_Param
	{
	public:

		struct FRandomStream Stream; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_RandomFloat_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_KismetMathLibrary_RandomBoolWithWeightFromStream_Param
	{
	public:

		float Weight; // 0x00(0x04)
		struct FRandomStream RandomStream; // 0x04(0x08)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_RandomBoolWithWeight_Param
	{
	public:

		float Weight; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_Engine_KismetMathLibrary_RandomBoolFromStream_Param
	{
	public:

		struct FRandomStream Stream; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_RandomBool_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_KismetMathLibrary_RadiansToDegrees_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Quat_VectorUp_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_VectorRight_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_VectorForward_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_UnrotateVector_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FVector V; // 0x10(0x0c)
		struct FVector ReturnValue; // 0x1c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_SizeSquared_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Quat_Size_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Quat_SetFromEuler_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FVector Euler; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_SetComponents_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		float X; // 0x10(0x04)
		float Y; // 0x14(0x04)
		float Z; // 0x18(0x04)
		float W; // 0x1c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Quat_Rotator_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FRotator ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_RotateVector_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FVector V; // 0x10(0x0c)
		struct FVector ReturnValue; // 0x1c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_Normalized_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		float Tolerance; // 0x10(0x04)
		char pad_14[0xc]; // 0x14(0x0c)
		struct FQuat ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Quat_Normalize_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		float Tolerance; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Quat_MakeFromEuler_Param
	{
	public:

		struct FVector Euler; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FQuat ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Quat_Log_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FQuat ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Quat_IsNormalized_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Quat_IsNonFinite_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Quat_IsIdentity_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		float Tolerance; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Quat_IsFinite_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Quat_Inversed_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FQuat ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Quat_Identity_Param
	{
	public:

		struct FQuat ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Quat_GetRotationAxis_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_GetAxisZ_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_GetAxisY_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_GetAxisX_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_GetAngle_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Quat_Exp_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FQuat ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Quat_Euler_Param
	{
	public:

		struct FQuat Q; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Quat_EnforceShortestArcWith_Param
	{
	public:

		struct FQuat A; // 0x00(0x10)
		struct FQuat B; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Quat_AngularDistance_Param
	{
	public:

		struct FQuat A; // 0x00(0x10)
		struct FQuat B; // 0x10(0x10)
		float ReturnValue; // 0x20(0x04)
	};

	struct Function_Engine_KismetMathLibrary_ProjectVectorOnToVector_Param
	{
	public:

		struct FVector V; // 0x00(0x0c)
		struct FVector Target; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_ProjectVectorOnToPlane_Param
	{
	public:

		struct FVector V; // 0x00(0x0c)
		struct FVector PlaneNormal; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_ProjectPointOnToPlane_Param
	{
	public:

		struct FVector Point; // 0x00(0x0c)
		struct FVector PlaneBase; // 0x0c(0x0c)
		struct FVector PlaneNormal; // 0x18(0x0c)
		struct FVector ReturnValue; // 0x24(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_PointsAreCoplanar_Param
	{
	public:

		struct TArray<struct FVector> Points; // 0x00(0x10)
		float Tolerance; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_KismetMathLibrary_PerlinNoise1D_Param
	{
	public:

		float Value; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Percent_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Percent_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Percent_ByteByte_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		char ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Or_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Or_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		int64_t ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Now_Param
	{
	public:

		struct FDateTime ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_NotEqualExactly_VectorVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqualExactly_Vector4Vector4_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqualExactly_Vector2DVector2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_VectorVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		float ErrorTolerance; // 0x18(0x04)
		bool ReturnValue; // 0x1c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_Vector4Vector4_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 B; // 0x10(0x10)
		float ErrorTolerance; // 0x20(0x04)
		bool ReturnValue; // 0x24(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_Vector2DVector2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D B; // 0x08(0x08)
		float ErrorTolerance; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_TimespanTimespan_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		struct FTimespan B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_RotatorRotator_Param
	{
	public:

		struct FRotator A; // 0x00(0x0c)
		struct FRotator B; // 0x0c(0x0c)
		float ErrorTolerance; // 0x18(0x04)
		bool ReturnValue; // 0x1c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_QuatQuat_Param
	{
	public:

		struct FQuat A; // 0x00(0x10)
		struct FQuat B; // 0x10(0x10)
		float ErrorTolerance; // 0x20(0x04)
		bool ReturnValue; // 0x24(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_ObjectObject_Param
	{
	public:

		struct UObject* A; // 0x00(0x08)
		struct UObject* B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_NameName_Param
	{
	public:

		struct FName A; // 0x00(0x08)
		struct FName B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_MatrixMatrix_Param
	{
	public:

		struct FMatrix A; // 0x00(0x40)
		struct FMatrix B; // 0x40(0x40)
		float Tolerance; // 0x80(0x04)
		bool ReturnValue; // 0x84(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_LinearColorLinearColor_Param
	{
	public:

		struct FLinearColor A; // 0x00(0x10)
		struct FLinearColor B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_DateTimeDateTime_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FDateTime B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_ClassClass_Param
	{
	public:

		struct UClass* A; // 0x00(0x08)
		struct UClass* B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_ByteByte_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NotEqual_BoolBool_Param
	{
	public:

		bool A; // 0x00(0x01)
		bool B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Not_PreBool_Param
	{
	public:

		bool A; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Not_Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Not_Int_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_NormalSafe2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float Tolerance; // 0x08(0x04)
		struct FVector2D ReturnValue; // 0x0c(0x08)
	};

	struct Function_Engine_KismetMathLibrary_NormalizeToRange_Param
	{
	public:

		float Value; // 0x00(0x04)
		float RangeMin; // 0x04(0x04)
		float RangeMax; // 0x08(0x04)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_NormalizedDeltaRotator_Param
	{
	public:

		struct FRotator A; // 0x00(0x0c)
		struct FRotator B; // 0x0c(0x0c)
		struct FRotator ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_NormalizeAxis_Param
	{
	public:

		float Angle; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Normalize2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float Tolerance; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Normal2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Normal_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float Tolerance; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_NegateVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_NegateRotator_Param
	{
	public:

		struct FRotator A; // 0x00(0x0c)
		struct FRotator ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Negated2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_NearlyEqual_TransformTransform_Param
	{
	public:

		struct FTransform A; // 0x00(0x30)
		struct FTransform B; // 0x30(0x30)
		float LocationTolerance; // 0x60(0x04)
		float RotationTolerance; // 0x64(0x04)
		float Scale3DTolerance; // 0x68(0x04)
		bool ReturnValue; // 0x6c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_NearlyEqual_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float ErrorTolerance; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_MultiplyMultiply_FloatFloat_Param
	{
	public:

		float Base; // 0x00(0x04)
		float Exp; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_MultiplyByPi_Param
	{
	public:

		float Value; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_VectorVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_VectorInt_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		int32_t B; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_VectorFloat_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float B; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_Vector4Vector4_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 B; // 0x10(0x10)
		struct FVector4 ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_Vector2DVector2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D B; // 0x08(0x08)
		struct FVector2D ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_Vector2DFloat_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float B; // 0x08(0x04)
		struct FVector2D ReturnValue; // 0x0c(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_TimespanFloat_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		float Scalar; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FTimespan ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_RotatorInt_Param
	{
	public:

		struct FRotator A; // 0x00(0x0c)
		int32_t B; // 0x0c(0x04)
		struct FRotator ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_RotatorFloat_Param
	{
	public:

		struct FRotator A; // 0x00(0x0c)
		float B; // 0x0c(0x04)
		struct FRotator ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_QuatQuat_Param
	{
	public:

		struct FQuat A; // 0x00(0x10)
		struct FQuat B; // 0x10(0x10)
		struct FQuat ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_MatrixMatrix_Param
	{
	public:

		struct FMatrix A; // 0x00(0x40)
		struct FMatrix B; // 0x40(0x40)
		struct FMatrix ReturnValue; // 0x80(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_MatrixFloat_Param
	{
	public:

		struct FMatrix A; // 0x00(0x40)
		float B; // 0x40(0x04)
		char pad_44[0xc]; // 0x44(0x0c)
		struct FMatrix ReturnValue; // 0x50(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_LinearColorLinearColor_Param
	{
	public:

		struct FLinearColor A; // 0x00(0x10)
		struct FLinearColor B; // 0x10(0x10)
		struct FLinearColor ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_LinearColorFloat_Param
	{
	public:

		struct FLinearColor A; // 0x00(0x10)
		float B; // 0x10(0x04)
		struct FLinearColor ReturnValue; // 0x14(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_IntFloat_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		int64_t ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Multiply_ByteByte_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		char ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_MirrorVectorByNormal_Param
	{
	public:

		struct FVector InVect; // 0x00(0x0c)
		struct FVector InNormal; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MinOfIntArray_Param
	{
	public:

		struct TArray<int32_t> IntArray; // 0x00(0x10)
		int32_t IndexOfMinValue; // 0x10(0x04)
		int32_t MinValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetMathLibrary_MinOfFloatArray_Param
	{
	public:

		struct TArray<float> FloatArray; // 0x00(0x10)
		int32_t IndexOfMinValue; // 0x10(0x04)
		float MinValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetMathLibrary_MinOfByteArray_Param
	{
	public:

		struct TArray<char> ByteArray; // 0x00(0x10)
		int32_t IndexOfMinValue; // 0x10(0x04)
		char MinValue; // 0x14(0x01)
	};

	struct Function_Engine_KismetMathLibrary_MinInt64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		int64_t ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_MinimumAreaRectangle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct TArray<struct FVector> InVerts; // 0x08(0x10)
		struct FVector SampleSurfaceNormal; // 0x18(0x0c)
		struct FVector OutRectCenter; // 0x24(0x0c)
		struct FRotator OutRectRotation; // 0x30(0x0c)
		float OutSideLengthX; // 0x3c(0x04)
		float OutSideLengthY; // 0x40(0x04)
		bool bDebugDraw; // 0x44(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Min_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_MaxOfIntArray_Param
	{
	public:

		struct TArray<int32_t> IntArray; // 0x00(0x10)
		int32_t IndexOfMaxValue; // 0x10(0x04)
		int32_t MaxValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetMathLibrary_MaxOfFloatArray_Param
	{
	public:

		struct TArray<float> FloatArray; // 0x00(0x10)
		int32_t IndexOfMaxValue; // 0x10(0x04)
		float MaxValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetMathLibrary_MaxOfByteArray_Param
	{
	public:

		struct TArray<char> ByteArray; // 0x00(0x10)
		int32_t IndexOfMaxValue; // 0x10(0x04)
		char MaxValue; // 0x14(0x01)
	};

	struct Function_Engine_KismetMathLibrary_MaxInt64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		int64_t ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Max_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_TransformVector4_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FVector4 V; // 0x40(0x10)
		struct FVector4 ReturnValue; // 0x50(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_TransformVector_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FVector V; // 0x40(0x0c)
		char pad_4C[0x4]; // 0x4c(0x04)
		struct FVector4 ReturnValue; // 0x50(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_TransformPosition_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FVector V; // 0x40(0x0c)
		char pad_4C[0x4]; // 0x4c(0x04)
		struct FVector4 ReturnValue; // 0x50(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_ToQuat_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FQuat ReturnValue; // 0x40(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_SetOrigin_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FVector NewOrigin; // 0x40(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_SetColumn_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		enum class EMatrixColumns Column; // 0x40(0x01)
		char pad_41[0x3]; // 0x41(0x03)
		struct FVector Value; // 0x44(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_SetAxis_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		enum class EAxis Axis; // 0x40(0x01)
		char pad_41[0x3]; // 0x41(0x03)
		struct FVector AxisVector; // 0x44(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_ScaleTranslation_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FVector Scale3D; // 0x40(0x0c)
		char pad_4C[0x4]; // 0x4c(0x04)
		struct FMatrix ReturnValue; // 0x50(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_RemoveTranslation_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FMatrix ReturnValue; // 0x40(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_RemoveScaling_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		float Tolerance; // 0x40(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_Mirror_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		enum class EAxis MirrorAxis; // 0x40(0x01)
		enum class EAxis FlipAxis; // 0x41(0x01)
		char pad_42[0xe]; // 0x42(0x0e)
		struct FMatrix ReturnValue; // 0x50(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_InverseTransformVector_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FVector V; // 0x40(0x0c)
		struct FVector ReturnValue; // 0x4c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_InverseTransformPosition_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FVector V; // 0x40(0x0c)
		struct FVector ReturnValue; // 0x4c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_Identity_Param
	{
	public:

		struct FMatrix ReturnValue; // 0x00(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetUnitAxis_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		enum class EAxis Axis; // 0x40(0x01)
		char pad_41[0x3]; // 0x41(0x03)
		struct FVector ReturnValue; // 0x44(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetUnitAxes_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FVector X; // 0x40(0x0c)
		struct FVector Y; // 0x4c(0x0c)
		struct FVector Z; // 0x58(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetTransposed_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FMatrix ReturnValue; // 0x40(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetTransposeAdjoint_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FMatrix ReturnValue; // 0x40(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetScaleVector_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		float Tolerance; // 0x40(0x04)
		struct FVector ReturnValue; // 0x44(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetScaledAxis_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		enum class EAxis Axis; // 0x40(0x01)
		char pad_41[0x3]; // 0x41(0x03)
		struct FVector ReturnValue; // 0x44(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetScaledAxes_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FVector X; // 0x40(0x0c)
		struct FVector Y; // 0x4c(0x0c)
		struct FVector Z; // 0x58(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetRotDeterminant_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		float ReturnValue; // 0x40(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetRotator_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FRotator ReturnValue; // 0x40(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetOrigin_Param
	{
	public:

		struct FMatrix InMatrix; // 0x00(0x40)
		struct FVector ReturnValue; // 0x40(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetMaximumAxisScale_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		float ReturnValue; // 0x40(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetMatrixWithoutScale_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		float Tolerance; // 0x40(0x04)
		char pad_44[0xc]; // 0x44(0x0c)
		struct FMatrix ReturnValue; // 0x50(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetInverse_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FMatrix ReturnValue; // 0x40(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetFrustumTopPlane_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FPlane OutPlane; // 0x40(0x10)
		bool ReturnValue; // 0x50(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetFrustumRightPlane_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FPlane OutPlane; // 0x40(0x10)
		bool ReturnValue; // 0x50(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetFrustumNearPlane_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FPlane OutPlane; // 0x40(0x10)
		bool ReturnValue; // 0x50(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetFrustumLeftPlane_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FPlane OutPlane; // 0x40(0x10)
		bool ReturnValue; // 0x50(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetFrustumFarPlane_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FPlane OutPlane; // 0x40(0x10)
		bool ReturnValue; // 0x50(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetFrustumBottomPlane_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FPlane OutPlane; // 0x40(0x10)
		bool ReturnValue; // 0x50(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetDeterminant_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		float ReturnValue; // 0x40(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_GetColumn_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		enum class EMatrixColumns Column; // 0x40(0x01)
		char pad_41[0x3]; // 0x41(0x03)
		struct FVector ReturnValue; // 0x44(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_ContainsNaN_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		bool ReturnValue; // 0x40(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_ConcatenateTranslation_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		struct FVector translation; // 0x40(0x0c)
		char pad_4C[0x4]; // 0x4c(0x04)
		struct FMatrix ReturnValue; // 0x50(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Matrix_ApplyScale_Param
	{
	public:

		struct FMatrix M; // 0x00(0x40)
		float Scale; // 0x40(0x04)
		char pad_44[0xc]; // 0x44(0x0c)
		struct FMatrix ReturnValue; // 0x50(0x40)
	};

	struct Function_Engine_KismetMathLibrary_MapRangeUnclamped_Param
	{
	public:

		float Value; // 0x00(0x04)
		float InRangeA; // 0x04(0x04)
		float InRangeB; // 0x08(0x04)
		float OutRangeA; // 0x0c(0x04)
		float OutRangeB; // 0x10(0x04)
		float ReturnValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetMathLibrary_MapRangeClamped_Param
	{
	public:

		float Value; // 0x00(0x04)
		float InRangeA; // 0x04(0x04)
		float InRangeB; // 0x08(0x04)
		float OutRangeA; // 0x0c(0x04)
		float OutRangeB; // 0x10(0x04)
		float ReturnValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetMathLibrary_MakeVector4_Param
	{
	public:

		float X; // 0x00(0x04)
		float Y; // 0x04(0x04)
		float Z; // 0x08(0x04)
		float W; // 0x0c(0x04)
		struct FVector4 ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_MakeVector2D_Param
	{
	public:

		float X; // 0x00(0x04)
		float Y; // 0x04(0x04)
		struct FVector2D ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_MakeVector_Param
	{
	public:

		float X; // 0x00(0x04)
		float Y; // 0x04(0x04)
		float Z; // 0x08(0x04)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeTransform_Param
	{
	public:

		struct FVector Location; // 0x00(0x0c)
		struct FRotator Rotation; // 0x0c(0x0c)
		struct FVector Scale; // 0x18(0x0c)
		char pad_24[0xc]; // 0x24(0x0c)
		struct FTransform ReturnValue; // 0x30(0x30)
	};

	struct Function_Engine_KismetMathLibrary_MakeTimespan2_Param
	{
	public:

		int32_t Days; // 0x00(0x04)
		int32_t Hours; // 0x04(0x04)
		int32_t Minutes; // 0x08(0x04)
		int32_t Seconds; // 0x0c(0x04)
		int32_t FractionNano; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FTimespan ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_KismetMathLibrary_MakeTimespan_Param
	{
	public:

		int32_t Days; // 0x00(0x04)
		int32_t Hours; // 0x04(0x04)
		int32_t Minutes; // 0x08(0x04)
		int32_t Seconds; // 0x0c(0x04)
		int32_t Milliseconds; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FTimespan ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_KismetMathLibrary_MakeRotFromZY_Param
	{
	public:

		struct FVector Z; // 0x00(0x0c)
		struct FVector Y; // 0x0c(0x0c)
		struct FRotator ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeRotFromZX_Param
	{
	public:

		struct FVector Z; // 0x00(0x0c)
		struct FVector X; // 0x0c(0x0c)
		struct FRotator ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeRotFromZ_Param
	{
	public:

		struct FVector Z; // 0x00(0x0c)
		struct FRotator ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeRotFromYZ_Param
	{
	public:

		struct FVector Y; // 0x00(0x0c)
		struct FVector Z; // 0x0c(0x0c)
		struct FRotator ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeRotFromYX_Param
	{
	public:

		struct FVector Y; // 0x00(0x0c)
		struct FVector X; // 0x0c(0x0c)
		struct FRotator ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeRotFromY_Param
	{
	public:

		struct FVector Y; // 0x00(0x0c)
		struct FRotator ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeRotFromXZ_Param
	{
	public:

		struct FVector X; // 0x00(0x0c)
		struct FVector Z; // 0x0c(0x0c)
		struct FRotator ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeRotFromXY_Param
	{
	public:

		struct FVector X; // 0x00(0x0c)
		struct FVector Y; // 0x0c(0x0c)
		struct FRotator ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeRotFromX_Param
	{
	public:

		struct FVector X; // 0x00(0x0c)
		struct FRotator ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeRotator_Param
	{
	public:

		float Roll; // 0x00(0x04)
		float Pitch; // 0x04(0x04)
		float Yaw; // 0x08(0x04)
		struct FRotator ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeRotationFromAxes_Param
	{
	public:

		struct FVector Forward; // 0x00(0x0c)
		struct FVector Right; // 0x0c(0x0c)
		struct FVector Up; // 0x18(0x0c)
		struct FRotator ReturnValue; // 0x24(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_MakeRelativeTransform_Param
	{
	public:

		struct FTransform A; // 0x00(0x30)
		struct FTransform RelativeTo; // 0x30(0x30)
		struct FTransform ReturnValue; // 0x60(0x30)
	};

	struct Function_Engine_KismetMathLibrary_MakeRandomStream_Param
	{
	public:

		int32_t InitialSeed; // 0x00(0x04)
		struct FRandomStream ReturnValue; // 0x04(0x08)
	};

	struct Function_Engine_KismetMathLibrary_MakeQualifiedFrameTime_Param
	{
	public:

		struct FFrameNumber Frame; // 0x00(0x04)
		struct FFrameRate FrameRate; // 0x04(0x08)
		float SubFrame; // 0x0c(0x04)
		struct FQualifiedFrameTime ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_MakePulsatingValue_Param
	{
	public:

		float InCurrentTime; // 0x00(0x04)
		float InPulsesPerSecond; // 0x04(0x04)
		float InPhase; // 0x08(0x04)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_MakePlaneFromPointAndNormal_Param
	{
	public:

		struct FVector Point; // 0x00(0x0c)
		struct FVector Normal; // 0x0c(0x0c)
		char pad_18[0x8]; // 0x18(0x08)
		struct FPlane ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_MakeFrameRate_Param
	{
	public:

		int32_t Numerator; // 0x00(0x04)
		int32_t Denominator; // 0x04(0x04)
		struct FFrameRate ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_MakeDateTime_Param
	{
	public:

		int32_t Year; // 0x00(0x04)
		int32_t Month; // 0x04(0x04)
		int32_t Day; // 0x08(0x04)
		int32_t Hour; // 0x0c(0x04)
		int32_t Minute; // 0x10(0x04)
		int32_t Second; // 0x14(0x04)
		int32_t Millisecond; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct FDateTime ReturnValue; // 0x20(0x08)
	};

	struct Function_Engine_KismetMathLibrary_MakeColor_Param
	{
	public:

		float R; // 0x00(0x04)
		float G; // 0x04(0x04)
		float B; // 0x08(0x04)
		float A; // 0x0c(0x04)
		struct FLinearColor ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_MakeBox2D_Param
	{
	public:

		struct FVector2D Min; // 0x00(0x08)
		struct FVector2D Max; // 0x08(0x08)
		struct FBox2D ReturnValue; // 0x10(0x14)
	};

	struct Function_Engine_KismetMathLibrary_MakeBox_Param
	{
	public:

		struct FVector Min; // 0x00(0x0c)
		struct FVector Max; // 0x0c(0x0c)
		struct FBox ReturnValue; // 0x18(0x1c)
	};

	struct Function_Engine_KismetMathLibrary_Loge_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Log_Param
	{
	public:

		float A; // 0x00(0x04)
		float Base; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinePlaneIntersection_OriginNormal_Param
	{
	public:

		struct FVector LineStart; // 0x00(0x0c)
		struct FVector LineEnd; // 0x0c(0x0c)
		struct FVector PlaneOrigin; // 0x18(0x0c)
		struct FVector PlaneNormal; // 0x24(0x0c)
		float T; // 0x30(0x04)
		struct FVector Intersection; // 0x34(0x0c)
		bool ReturnValue; // 0x40(0x01)
	};

	struct Function_Engine_KismetMathLibrary_LinePlaneIntersection_Param
	{
	public:

		struct FVector LineStart; // 0x00(0x0c)
		struct FVector LineEnd; // 0x0c(0x0c)
		char pad_18[0x8]; // 0x18(0x08)
		struct FPlane APlane; // 0x20(0x10)
		float T; // 0x30(0x04)
		struct FVector Intersection; // 0x34(0x0c)
		bool ReturnValue; // 0x40(0x01)
	};

	struct Function_Engine_KismetMathLibrary_LinearColorLerpUsingHSV_Param
	{
	public:

		struct FLinearColor A; // 0x00(0x10)
		struct FLinearColor B; // 0x10(0x10)
		float Alpha; // 0x20(0x04)
		struct FLinearColor ReturnValue; // 0x24(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColorLerp_Param
	{
	public:

		struct FLinearColor A; // 0x00(0x10)
		struct FLinearColor B; // 0x10(0x10)
		float Alpha; // 0x20(0x04)
		struct FLinearColor ReturnValue; // 0x24(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_Yellow_Param
	{
	public:

		struct FLinearColor ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_White_Param
	{
	public:

		struct FLinearColor ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_Transparent_Param
	{
	public:

		struct FLinearColor ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_ToRGBE_Param
	{
	public:

		struct FLinearColor InLinearColor; // 0x00(0x10)
		struct FColor ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_ToNewOpacity_Param
	{
	public:

		struct FLinearColor InColor; // 0x00(0x10)
		float InOpacity; // 0x10(0x04)
		struct FLinearColor ReturnValue; // 0x14(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_SetTemperature_Param
	{
	public:

		struct FLinearColor InOutColor; // 0x00(0x10)
		float InTemperature; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_SetRGBA_Param
	{
	public:

		struct FLinearColor InOutColor; // 0x00(0x10)
		float R; // 0x10(0x04)
		float G; // 0x14(0x04)
		float B; // 0x18(0x04)
		float A; // 0x1c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_SetRandomHue_Param
	{
	public:

		struct FLinearColor InOutColor; // 0x00(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_SetFromSRGB_Param
	{
	public:

		struct FLinearColor InOutColor; // 0x00(0x10)
		struct FColor InSRGB; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_SetFromPow22_Param
	{
	public:

		struct FLinearColor InOutColor; // 0x00(0x10)
		struct FColor InColor; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_SetFromHSV_Param
	{
	public:

		struct FLinearColor InOutColor; // 0x00(0x10)
		float H; // 0x10(0x04)
		float S; // 0x14(0x04)
		float V; // 0x18(0x04)
		float A; // 0x1c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_Set_Param
	{
	public:

		struct FLinearColor InOutColor; // 0x00(0x10)
		struct FLinearColor InColor; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_Red_Param
	{
	public:

		struct FLinearColor ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_QuantizeRound_Param
	{
	public:

		struct FLinearColor InColor; // 0x00(0x10)
		struct FColor ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_Quantize_Param
	{
	public:

		struct FLinearColor InColor; // 0x00(0x10)
		struct FColor ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_IsNearEqual_Param
	{
	public:

		struct FLinearColor A; // 0x00(0x10)
		struct FLinearColor B; // 0x10(0x10)
		float Tolerance; // 0x20(0x04)
		bool ReturnValue; // 0x24(0x01)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_Green_Param
	{
	public:

		struct FLinearColor ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_Gray_Param
	{
	public:

		struct FLinearColor ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_GetMin_Param
	{
	public:

		struct FLinearColor InColor; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_GetMax_Param
	{
	public:

		struct FLinearColor InColor; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_GetLuminance_Param
	{
	public:

		struct FLinearColor InColor; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_Distance_Param
	{
	public:

		struct FLinearColor C1; // 0x00(0x10)
		struct FLinearColor C2; // 0x10(0x10)
		float ReturnValue; // 0x20(0x04)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_Desaturated_Param
	{
	public:

		struct FLinearColor InColor; // 0x00(0x10)
		float InDesaturation; // 0x10(0x04)
		struct FLinearColor ReturnValue; // 0x14(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_Blue_Param
	{
	public:

		struct FLinearColor ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LinearColor_Black_Param
	{
	public:

		struct FLinearColor ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetMathLibrary_LessLess_VectorRotator_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FRotator B; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_LessEqual_TimespanTimespan_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		struct FTimespan B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_LessEqual_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_LessEqual_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_LessEqual_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_LessEqual_DateTimeDateTime_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FDateTime B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_LessEqual_ByteByte_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Less_TimespanTimespan_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		struct FTimespan B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Less_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Less_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Less_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Less_DateTimeDateTime_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FDateTime B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Less_ByteByte_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Lerp_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float Alpha; // 0x08(0x04)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_IsZero2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_IsPointInBoxWithTransform_Param
	{
	public:

		struct FVector Point; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FTransform BoxWorldTransform; // 0x10(0x30)
		struct FVector BoxExtent; // 0x40(0x0c)
		bool ReturnValue; // 0x4c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_IsPointInBox_Param
	{
	public:

		struct FVector Point; // 0x00(0x0c)
		struct FVector BoxOrigin; // 0x0c(0x0c)
		struct FVector BoxExtent; // 0x18(0x0c)
		bool ReturnValue; // 0x24(0x01)
	};

	struct Function_Engine_KismetMathLibrary_IsNearlyZero2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float Tolerance; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_IsMorning_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_IsLeapYear_Param
	{
	public:

		int32_t Year; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_Engine_KismetMathLibrary_IsAfternoon_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_InvertTransform_Param
	{
	public:

		struct FTransform T; // 0x00(0x30)
		struct FTransform ReturnValue; // 0x30(0x30)
	};

	struct Function_Engine_KismetMathLibrary_InverseTransformRotation_Param
	{
	public:

		struct FTransform T; // 0x00(0x30)
		struct FRotator Rotation; // 0x30(0x0c)
		struct FRotator ReturnValue; // 0x3c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_InverseTransformLocation_Param
	{
	public:

		struct FTransform T; // 0x00(0x30)
		struct FVector Location; // 0x30(0x0c)
		struct FVector ReturnValue; // 0x3c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_InverseTransformDirection_Param
	{
	public:

		struct FTransform T; // 0x00(0x30)
		struct FVector Direction; // 0x30(0x0c)
		struct FVector ReturnValue; // 0x3c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_InRange_IntInt_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
		int32_t Min; // 0x04(0x04)
		int32_t Max; // 0x08(0x04)
		bool InclusiveMin; // 0x0c(0x01)
		bool InclusiveMax; // 0x0d(0x01)
		bool ReturnValue; // 0x0e(0x01)
	};

	struct Function_Engine_KismetMathLibrary_InRange_Int64Int64_Param
	{
	public:

		int64_t Value; // 0x00(0x08)
		int64_t Min; // 0x08(0x08)
		int64_t Max; // 0x10(0x08)
		bool InclusiveMin; // 0x18(0x01)
		bool InclusiveMax; // 0x19(0x01)
		bool ReturnValue; // 0x1a(0x01)
	};

	struct Function_Engine_KismetMathLibrary_InRange_FloatFloat_Param
	{
	public:

		float Value; // 0x00(0x04)
		float Min; // 0x04(0x04)
		float Max; // 0x08(0x04)
		bool InclusiveMin; // 0x0c(0x01)
		bool InclusiveMax; // 0x0d(0x01)
		bool ReturnValue; // 0x0e(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Hypotenuse_Param
	{
	public:

		float Width; // 0x00(0x04)
		float Height; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_HSVToRGBLinear_Param
	{
	public:

		struct FLinearColor HSV; // 0x00(0x10)
		struct FLinearColor ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_HSVToRGB_Vector_Param
	{
	public:

		struct FLinearColor HSV; // 0x00(0x10)
		struct FLinearColor RGB; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_HSVToRGB_Param
	{
	public:

		float H; // 0x00(0x04)
		float S; // 0x04(0x04)
		float V; // 0x08(0x04)
		float A; // 0x0c(0x04)
		struct FLinearColor ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_GridSnap_Float_Param
	{
	public:

		float Location; // 0x00(0x04)
		float GridSize; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GreaterGreater_VectorRotator_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FRotator B; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_GreaterEqual_TimespanTimespan_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		struct FTimespan B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_GreaterEqual_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_GreaterEqual_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_GreaterEqual_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_GreaterEqual_DateTimeDateTime_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FDateTime B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_GreaterEqual_ByteByte_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Greater_TimespanTimespan_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		struct FTimespan B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Greater_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Greater_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Greater_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Greater_DateTimeDateTime_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FDateTime B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Greater_ByteByte_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_GetYear_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetYawPitchFromVector_Param
	{
	public:

		struct FVector InVec; // 0x00(0x0c)
		float Yaw; // 0x0c(0x04)
		float Pitch; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetVectorArrayAverage_Param
	{
	public:

		struct TArray<struct FVector> Vectors; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_GetUpVector_Param
	{
	public:

		struct FRotator InRot; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_GetTotalSeconds_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetTotalMinutes_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetTotalMilliseconds_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetTotalHours_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetTotalDays_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetTimeOfDay_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FTimespan ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_GetTAU_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetSlopeDegreeAngles_Param
	{
	public:

		struct FVector MyRightYAxis; // 0x00(0x0c)
		struct FVector FloorNormal; // 0x0c(0x0c)
		struct FVector UpVector; // 0x18(0x0c)
		float OutSlopePitchDegreeAngle; // 0x24(0x04)
		float OutSlopeRollDegreeAngle; // 0x28(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetSeconds_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetSecond_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetRotated2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float AngleDeg; // 0x08(0x04)
		struct FVector2D ReturnValue; // 0x0c(0x08)
	};

	struct Function_Engine_KismetMathLibrary_GetRightVector_Param
	{
	public:

		struct FRotator InRot; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_GetReflectionVector_Param
	{
	public:

		struct FVector Direction; // 0x00(0x0c)
		struct FVector SurfaceNormal; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_GetPointDistanceToSegment_Param
	{
	public:

		struct FVector Point; // 0x00(0x0c)
		struct FVector SegmentStart; // 0x0c(0x0c)
		struct FVector SegmentEnd; // 0x18(0x0c)
		float ReturnValue; // 0x24(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetPointDistanceToLine_Param
	{
	public:

		struct FVector Point; // 0x00(0x0c)
		struct FVector LineOrigin; // 0x0c(0x0c)
		struct FVector LineDirection; // 0x18(0x0c)
		float ReturnValue; // 0x24(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetPI_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetMonth_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetMinutes_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetMinute_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetMinElement_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetMin2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetMilliseconds_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetMillisecond_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetMaxElement_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetMax2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetHours_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetHour12_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetHour_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetForwardVector_Param
	{
	public:

		struct FRotator InRot; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_GetDuration_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		struct FTimespan ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_GetDirectionUnitVector_Param
	{
	public:

		struct FVector From; // 0x00(0x0c)
		struct FVector To; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_GetDays_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetDayOfYear_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetDay_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetDate_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FDateTime ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_GetAzimuthAndElevation_Param
	{
	public:

		struct FVector InDirection; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FTransform ReferenceFrame; // 0x10(0x30)
		float Azimuth; // 0x40(0x04)
		float Elevation; // 0x44(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetAxes_Param
	{
	public:

		struct FRotator A; // 0x00(0x0c)
		struct FVector X; // 0x0c(0x0c)
		struct FVector Y; // 0x18(0x0c)
		struct FVector Z; // 0x24(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_GetAbsMax2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_GetAbs2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_FTruncVector_Param
	{
	public:

		struct FVector InVector; // 0x00(0x0c)
		struct FIntVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_FTrunc64_Param
	{
	public:

		float A; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		int64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_FTrunc_Param
	{
	public:

		float A; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FromSeconds_Param
	{
	public:

		float Seconds; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FTimespan ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_FromMinutes_Param
	{
	public:

		float Minutes; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FTimespan ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_FromMilliseconds_Param
	{
	public:

		float Milliseconds; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FTimespan ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_FromHours_Param
	{
	public:

		float Hours; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FTimespan ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_FromDays_Param
	{
	public:

		float Days; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FTimespan ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Fraction_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FMod_Param
	{
	public:

		float Dividend; // 0x00(0x04)
		float Divisor; // 0x04(0x04)
		float Remainder; // 0x08(0x04)
		int32_t ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FMin_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FMax_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FloatSpringInterp_Param
	{
	public:

		float Current; // 0x00(0x04)
		float Target; // 0x04(0x04)
		struct FFloatSpringState SpringState; // 0x08(0x08)
		float Stiffness; // 0x10(0x04)
		float CriticalDampingFactor; // 0x14(0x04)
		float DeltaTime; // 0x18(0x04)
		float Mass; // 0x1c(0x04)
		float ReturnValue; // 0x20(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FixedTurn_Param
	{
	public:

		float InCurrent; // 0x00(0x04)
		float InDesired; // 0x04(0x04)
		float InDeltaRate; // 0x08(0x04)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FInterpTo_Constant_Param
	{
	public:

		float Current; // 0x00(0x04)
		float Target; // 0x04(0x04)
		float DeltaTime; // 0x08(0x04)
		float InterpSpeed; // 0x0c(0x04)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FInterpTo_Param
	{
	public:

		float Current; // 0x00(0x04)
		float Target; // 0x04(0x04)
		float DeltaTime; // 0x08(0x04)
		float InterpSpeed; // 0x0c(0x04)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FInterpEaseInOut_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float Alpha; // 0x08(0x04)
		float Exponent; // 0x0c(0x04)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FindNearestPointsOnLineSegments_Param
	{
	public:

		struct FVector Segment1Start; // 0x00(0x0c)
		struct FVector Segment1End; // 0x0c(0x0c)
		struct FVector Segment2Start; // 0x18(0x0c)
		struct FVector Segment2End; // 0x24(0x0c)
		struct FVector Segment1Point; // 0x30(0x0c)
		struct FVector Segment2Point; // 0x3c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_FindLookAtRotation_Param
	{
	public:

		struct FVector Start; // 0x00(0x0c)
		struct FVector Target; // 0x0c(0x0c)
		struct FRotator ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_FindClosestPointOnSegment_Param
	{
	public:

		struct FVector Point; // 0x00(0x0c)
		struct FVector SegmentStart; // 0x0c(0x0c)
		struct FVector SegmentEnd; // 0x18(0x0c)
		struct FVector ReturnValue; // 0x24(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_FindClosestPointOnLine_Param
	{
	public:

		struct FVector Point; // 0x00(0x0c)
		struct FVector LineOrigin; // 0x0c(0x0c)
		struct FVector LineDirection; // 0x18(0x0c)
		struct FVector ReturnValue; // 0x24(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_FFloor64_Param
	{
	public:

		float A; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		int64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_FFloor_Param
	{
	public:

		float A; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FClamp_Param
	{
	public:

		float Value; // 0x00(0x04)
		float Min; // 0x04(0x04)
		float Max; // 0x08(0x04)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_FCeil64_Param
	{
	public:

		float A; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		int64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_FCeil_Param
	{
	public:

		float A; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Exp_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_EqualExactly_VectorVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualExactly_Vector4Vector4_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualExactly_Vector2DVector2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_VectorVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		float ErrorTolerance; // 0x18(0x04)
		bool ReturnValue; // 0x1c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_Vector4Vector4_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 B; // 0x10(0x10)
		float ErrorTolerance; // 0x20(0x04)
		bool ReturnValue; // 0x24(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_Vector2DVector2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D B; // 0x08(0x08)
		float ErrorTolerance; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_TransformTransform_Param
	{
	public:

		struct FTransform A; // 0x00(0x30)
		struct FTransform B; // 0x30(0x30)
		bool ReturnValue; // 0x60(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_TimespanTimespan_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		struct FTimespan B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_RotatorRotator_Param
	{
	public:

		struct FRotator A; // 0x00(0x0c)
		struct FRotator B; // 0x0c(0x0c)
		float ErrorTolerance; // 0x18(0x04)
		bool ReturnValue; // 0x1c(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_QuatQuat_Param
	{
	public:

		struct FQuat A; // 0x00(0x10)
		struct FQuat B; // 0x10(0x10)
		float Tolerance; // 0x20(0x04)
		bool ReturnValue; // 0x24(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_ObjectObject_Param
	{
	public:

		struct UObject* A; // 0x00(0x08)
		struct UObject* B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_NameName_Param
	{
	public:

		struct FName A; // 0x00(0x08)
		struct FName B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_MatrixMatrix_Param
	{
	public:

		struct FMatrix A; // 0x00(0x40)
		struct FMatrix B; // 0x40(0x40)
		float Tolerance; // 0x80(0x04)
		bool ReturnValue; // 0x84(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_LinearColorLinearColor_Param
	{
	public:

		struct FLinearColor A; // 0x00(0x10)
		struct FLinearColor B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_DateTimeDateTime_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FDateTime B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_ClassClass_Param
	{
	public:

		struct UClass* A; // 0x00(0x08)
		struct UClass* B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_ByteByte_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_EqualEqual_BoolBool_Param
	{
	public:

		bool A; // 0x00(0x01)
		bool B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Ease_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float Alpha; // 0x08(0x04)
		enum class EEasingFunc EasingFunc; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		float BlendExp; // 0x10(0x04)
		int32_t Steps; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DynamicWeightedMovingAverage_FVector_Param
	{
	public:

		struct FVector CurrentSample; // 0x00(0x0c)
		struct FVector PreviousSample; // 0x0c(0x0c)
		float MaxDistance; // 0x18(0x04)
		float MinWeight; // 0x1c(0x04)
		float MaxWeight; // 0x20(0x04)
		struct FVector ReturnValue; // 0x24(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_DynamicWeightedMovingAverage_FRotator_Param
	{
	public:

		struct FRotator CurrentSample; // 0x00(0x0c)
		struct FRotator PreviousSample; // 0x0c(0x0c)
		float MaxDistance; // 0x18(0x04)
		float MinWeight; // 0x1c(0x04)
		float MaxWeight; // 0x20(0x04)
		struct FRotator ReturnValue; // 0x24(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_DynamicWeightedMovingAverage_Float_Param
	{
	public:

		float CurrentSample; // 0x00(0x04)
		float PreviousSample; // 0x04(0x04)
		float MaxDistance; // 0x08(0x04)
		float MinWeight; // 0x0c(0x04)
		float MaxWeight; // 0x10(0x04)
		float ReturnValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DotProduct2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D B; // 0x08(0x08)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Dot_VectorVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Divide_VectorVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Divide_VectorInt_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		int32_t B; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Divide_VectorFloat_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float B; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Divide_Vector4Vector4_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 B; // 0x10(0x10)
		struct FVector4 ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Divide_Vector2DVector2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D B; // 0x08(0x08)
		struct FVector2D ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Divide_Vector2DFloat_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float B; // 0x08(0x04)
		struct FVector2D ReturnValue; // 0x0c(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Divide_TimespanFloat_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		float Scalar; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FTimespan ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Divide_LinearColorLinearColor_Param
	{
	public:

		struct FLinearColor A; // 0x00(0x10)
		struct FLinearColor B; // 0x10(0x10)
		struct FLinearColor ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Divide_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Divide_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		int64_t ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Divide_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Divide_ByteByte_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		char ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_DistanceSquared2D_Param
	{
	public:

		struct FVector2D v1; // 0x00(0x08)
		struct FVector2D v2; // 0x08(0x08)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Distance2D_Param
	{
	public:

		struct FVector2D v1; // 0x00(0x08)
		struct FVector2D v2; // 0x08(0x08)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DegTan_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DegSin_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DegreesToRadians_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DegCos_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DegAtan2_Param
	{
	public:

		float Y; // 0x00(0x04)
		float X; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DegAtan_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DegAsin_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DegAcos_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DaysInYear_Param
	{
	public:

		int32_t Year; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DaysInMonth_Param
	{
	public:

		int32_t Year; // 0x00(0x04)
		int32_t Month; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_DateTimeMinValue_Param
	{
	public:

		struct FDateTime ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_DateTimeMaxValue_Param
	{
	public:

		struct FDateTime ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetMathLibrary_DateTimeFromString_Param
	{
	public:

		struct FString DateTimeString; // 0x00(0x10)
		struct FDateTime Result; // 0x10(0x08)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetMathLibrary_DateTimeFromIsoString_Param
	{
	public:

		struct FString IsoString; // 0x00(0x10)
		struct FDateTime Result; // 0x10(0x08)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetMathLibrary_CrossProduct2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D B; // 0x08(0x08)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Cross_VectorVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_CreateVectorFromYawPitch_Param
	{
	public:

		float Yaw; // 0x00(0x04)
		float Pitch; // 0x04(0x04)
		float Length; // 0x08(0x04)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Cos_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_ConvertTransformToRelative_Param
	{
	public:

		struct FTransform Transform; // 0x00(0x30)
		struct FTransform ParentTransform; // 0x30(0x30)
		struct FTransform ReturnValue; // 0x60(0x30)
	};

	struct Function_Engine_KismetMathLibrary_Conv_VectorToVector2D_Param
	{
	public:

		struct FVector InVector; // 0x00(0x0c)
		struct FVector2D ReturnValue; // 0x0c(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Conv_VectorToTransform_Param
	{
	public:

		struct FVector InLocation; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_Engine_KismetMathLibrary_Conv_VectorToRotator_Param
	{
	public:

		struct FVector InVec; // 0x00(0x0c)
		struct FRotator ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Conv_VectorToQuaterion_Param
	{
	public:

		struct FVector InVec; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FQuat ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Conv_VectorToLinearColor_Param
	{
	public:

		struct FVector InVec; // 0x00(0x0c)
		struct FLinearColor ReturnValue; // 0x0c(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Conv_Vector4ToVector_Param
	{
	public:

		struct FVector4 InVector4; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Conv_Vector4ToRotator_Param
	{
	public:

		struct FVector4 InVec; // 0x00(0x10)
		struct FRotator ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Conv_Vector4ToQuaterion_Param
	{
	public:

		struct FVector4 InVec; // 0x00(0x10)
		struct FQuat ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Conv_Vector2DToVector_Param
	{
	public:

		struct FVector2D InVector2D; // 0x00(0x08)
		float Z; // 0x08(0x04)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Conv_Vector2DToIntPoint_Param
	{
	public:

		struct FVector2D InVector2D; // 0x00(0x08)
		struct FIntPoint ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Conv_TransformToMatrix_Param
	{
	public:

		struct FTransform Transform; // 0x00(0x30)
		struct FMatrix ReturnValue; // 0x30(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Conv_RotatorToVector_Param
	{
	public:

		struct FRotator InRot; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Conv_RotatorToTransform_Param
	{
	public:

		struct FRotator inRotator; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_Engine_KismetMathLibrary_Conv_MatrixToTransform_Param
	{
	public:

		struct FMatrix InMatrix; // 0x00(0x40)
		struct FTransform ReturnValue; // 0x40(0x30)
	};

	struct Function_Engine_KismetMathLibrary_Conv_MatrixToRotator_Param
	{
	public:

		struct FMatrix InMatrix; // 0x00(0x40)
		struct FRotator ReturnValue; // 0x40(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Conv_LinearColorToVector_Param
	{
	public:

		struct FLinearColor InLinearColor; // 0x00(0x10)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Conv_LinearColorToColor_Param
	{
	public:

		struct FLinearColor InLinearColor; // 0x00(0x10)
		bool InUseSRGB; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FColor ReturnValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Conv_IntVectorToVector_Param
	{
	public:

		struct FIntVector InIntVector; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Conv_IntToIntVector_Param
	{
	public:

		int32_t inInt; // 0x00(0x04)
		struct FIntVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Conv_IntToInt64_Param
	{
	public:

		int32_t inInt; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		int64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Conv_IntToFloat_Param
	{
	public:

		int32_t inInt; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Conv_IntToByte_Param
	{
	public:

		int32_t inInt; // 0x00(0x04)
		char ReturnValue; // 0x04(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Conv_IntToBool_Param
	{
	public:

		int32_t inInt; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Conv_FloatToVector_Param
	{
	public:

		float InFloat; // 0x00(0x04)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Conv_FloatToLinearColor_Param
	{
	public:

		float InFloat; // 0x00(0x04)
		struct FLinearColor ReturnValue; // 0x04(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Conv_ColorToLinearColor_Param
	{
	public:

		struct FColor InColor; // 0x00(0x04)
		struct FLinearColor ReturnValue; // 0x04(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Conv_ByteToInt_Param
	{
	public:

		char InByte; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Conv_ByteToFloat_Param
	{
	public:

		char InByte; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Conv_BoolToInt_Param
	{
	public:

		bool InBool; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Conv_BoolToFloat_Param
	{
	public:

		bool InBool; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Conv_BoolToByte_Param
	{
	public:

		bool InBool; // 0x00(0x01)
		char ReturnValue; // 0x01(0x01)
	};

	struct Function_Engine_KismetMathLibrary_ComposeTransforms_Param
	{
	public:

		struct FTransform A; // 0x00(0x30)
		struct FTransform B; // 0x30(0x30)
		struct FTransform ReturnValue; // 0x60(0x30)
	};

	struct Function_Engine_KismetMathLibrary_ComposeRotators_Param
	{
	public:

		struct FRotator A; // 0x00(0x0c)
		struct FRotator B; // 0x0c(0x0c)
		struct FRotator ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_ClassIsChildOf_Param
	{
	public:

		struct UClass* TestClass; // 0x00(0x08)
		struct UClass* ParentClass; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetMathLibrary_ClampVectorSize_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float Min; // 0x0c(0x04)
		float Max; // 0x10(0x04)
		struct FVector ReturnValue; // 0x14(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_ClampInt64_Param
	{
	public:

		int64_t Value; // 0x00(0x08)
		int64_t Min; // 0x08(0x08)
		int64_t Max; // 0x10(0x08)
		int64_t ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_KismetMathLibrary_ClampAxis_Param
	{
	public:

		float Angle; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_ClampAxes2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float MinAxisVal; // 0x08(0x04)
		float MaxAxisVal; // 0x0c(0x04)
		struct FVector2D ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_ClampAngle_Param
	{
	public:

		float AngleDegrees; // 0x00(0x04)
		float MinAngleDegrees; // 0x04(0x04)
		float MaxAngleDegrees; // 0x08(0x04)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Clamp_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
		int32_t Min; // 0x04(0x04)
		int32_t Max; // 0x08(0x04)
		int32_t ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_CInterpTo_Param
	{
	public:

		struct FLinearColor Current; // 0x00(0x10)
		struct FLinearColor Target; // 0x10(0x10)
		float DeltaTime; // 0x20(0x04)
		float InterpSpeed; // 0x24(0x04)
		struct FLinearColor ReturnValue; // 0x28(0x10)
	};

	struct Function_Engine_KismetMathLibrary_BreakVector4_Param
	{
	public:

		struct FVector4 InVec; // 0x00(0x10)
		float X; // 0x10(0x04)
		float Y; // 0x14(0x04)
		float Z; // 0x18(0x04)
		float W; // 0x1c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_BreakVector2D_Param
	{
	public:

		struct FVector2D InVec; // 0x00(0x08)
		float X; // 0x08(0x04)
		float Y; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_BreakVector_Param
	{
	public:

		struct FVector InVec; // 0x00(0x0c)
		float X; // 0x0c(0x04)
		float Y; // 0x10(0x04)
		float Z; // 0x14(0x04)
	};

	struct Function_Engine_KismetMathLibrary_BreakTransform_Param
	{
	public:

		struct FTransform InTransform; // 0x00(0x30)
		struct FVector Location; // 0x30(0x0c)
		struct FRotator Rotation; // 0x3c(0x0c)
		struct FVector Scale; // 0x48(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_BreakTimespan2_Param
	{
	public:

		struct FTimespan InTimespan; // 0x00(0x08)
		int32_t Days; // 0x08(0x04)
		int32_t Hours; // 0x0c(0x04)
		int32_t Minutes; // 0x10(0x04)
		int32_t Seconds; // 0x14(0x04)
		int32_t FractionNano; // 0x18(0x04)
	};

	struct Function_Engine_KismetMathLibrary_BreakTimespan_Param
	{
	public:

		struct FTimespan InTimespan; // 0x00(0x08)
		int32_t Days; // 0x08(0x04)
		int32_t Hours; // 0x0c(0x04)
		int32_t Minutes; // 0x10(0x04)
		int32_t Seconds; // 0x14(0x04)
		int32_t Milliseconds; // 0x18(0x04)
	};

	struct Function_Engine_KismetMathLibrary_BreakRotIntoAxes_Param
	{
	public:

		struct FRotator InRot; // 0x00(0x0c)
		struct FVector X; // 0x0c(0x0c)
		struct FVector Y; // 0x18(0x0c)
		struct FVector Z; // 0x24(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_BreakRotator_Param
	{
	public:

		struct FRotator InRot; // 0x00(0x0c)
		float Roll; // 0x0c(0x04)
		float Pitch; // 0x10(0x04)
		float Yaw; // 0x14(0x04)
	};

	struct Function_Engine_KismetMathLibrary_BreakRandomStream_Param
	{
	public:

		struct FRandomStream InRandomStream; // 0x00(0x08)
		int32_t InitialSeed; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_BreakQualifiedFrameTime_Param
	{
	public:

		struct FQualifiedFrameTime InFrameTime; // 0x00(0x10)
		struct FFrameNumber Frame; // 0x10(0x04)
		struct FFrameRate FrameRate; // 0x14(0x08)
		float SubFrame; // 0x1c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_BreakFrameRate_Param
	{
	public:

		struct FFrameRate InFrameRate; // 0x00(0x08)
		int32_t Numerator; // 0x08(0x04)
		int32_t Denominator; // 0x0c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_BreakDateTime_Param
	{
	public:

		struct FDateTime InDateTime; // 0x00(0x08)
		int32_t Year; // 0x08(0x04)
		int32_t Month; // 0x0c(0x04)
		int32_t Day; // 0x10(0x04)
		int32_t Hour; // 0x14(0x04)
		int32_t Minute; // 0x18(0x04)
		int32_t Second; // 0x1c(0x04)
		int32_t Millisecond; // 0x20(0x04)
	};

	struct Function_Engine_KismetMathLibrary_BreakColor_Param
	{
	public:

		struct FLinearColor InColor; // 0x00(0x10)
		float R; // 0x10(0x04)
		float G; // 0x14(0x04)
		float B; // 0x18(0x04)
		float A; // 0x1c(0x04)
	};

	struct Function_Engine_KismetMathLibrary_BooleanXOR_Param
	{
	public:

		bool A; // 0x00(0x01)
		bool B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_BooleanOR_Param
	{
	public:

		bool A; // 0x00(0x01)
		bool B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_BooleanNOR_Param
	{
	public:

		bool A; // 0x00(0x01)
		bool B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_BooleanNAND_Param
	{
	public:

		bool A; // 0x00(0x01)
		bool B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_BooleanAND_Param
	{
	public:

		bool A; // 0x00(0x01)
		bool B; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_BMin_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		char ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_BMax_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		char ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Atan2_Param
	{
	public:

		float Y; // 0x00(0x04)
		float X; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Atan_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Asin_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_And_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_And_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		int64_t ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Add_VectorVector_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		struct FVector B; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Add_VectorInt_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		int32_t B; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Add_VectorFloat_Param
	{
	public:

		struct FVector A; // 0x00(0x0c)
		float B; // 0x0c(0x04)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_KismetMathLibrary_Add_Vector4Vector4_Param
	{
	public:

		struct FVector4 A; // 0x00(0x10)
		struct FVector4 B; // 0x10(0x10)
		struct FVector4 ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Add_Vector2DVector2D_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		struct FVector2D B; // 0x08(0x08)
		struct FVector2D ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Add_Vector2DFloat_Param
	{
	public:

		struct FVector2D A; // 0x00(0x08)
		float B; // 0x08(0x04)
		struct FVector2D ReturnValue; // 0x0c(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Add_TimespanTimespan_Param
	{
	public:

		struct FTimespan A; // 0x00(0x08)
		struct FTimespan B; // 0x08(0x08)
		struct FTimespan ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Add_QuatQuat_Param
	{
	public:

		struct FQuat A; // 0x00(0x10)
		struct FQuat B; // 0x10(0x10)
		struct FQuat ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Add_MatrixMatrix_Param
	{
	public:

		struct FMatrix A; // 0x00(0x40)
		struct FMatrix B; // 0x40(0x40)
		struct FMatrix ReturnValue; // 0x80(0x40)
	};

	struct Function_Engine_KismetMathLibrary_Add_LinearColorLinearColor_Param
	{
	public:

		struct FLinearColor A; // 0x00(0x10)
		struct FLinearColor B; // 0x10(0x10)
		struct FLinearColor ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetMathLibrary_Add_IntInt_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t B; // 0x04(0x04)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Add_Int64Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t B; // 0x08(0x08)
		int64_t ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Add_FloatFloat_Param
	{
	public:

		float A; // 0x00(0x04)
		float B; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Add_DateTimeTimespan_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FTimespan B; // 0x08(0x08)
		struct FDateTime ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Add_DateTimeDateTime_Param
	{
	public:

		struct FDateTime A; // 0x00(0x08)
		struct FDateTime B; // 0x08(0x08)
		struct FDateTime ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Add_ByteByte_Param
	{
	public:

		char A; // 0x00(0x01)
		char B; // 0x01(0x01)
		char ReturnValue; // 0x02(0x01)
	};

	struct Function_Engine_KismetMathLibrary_Acos_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Abs_Int64_Param
	{
	public:

		int64_t A; // 0x00(0x08)
		int64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetMathLibrary_Abs_Int_Param
	{
	public:

		int32_t A; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetMathLibrary_Abs_Param
	{
	public:

		float A; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetNodeHelperLibrary_MarkBit_Param
	{
	public:

		int32_t Data; // 0x00(0x04)
		int32_t Index; // 0x04(0x04)
	};

	struct Function_Engine_KismetNodeHelperLibrary_HasUnmarkedBit_Param
	{
	public:

		int32_t Data; // 0x00(0x04)
		int32_t NumBits; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetNodeHelperLibrary_HasMarkedBit_Param
	{
	public:

		int32_t Data; // 0x00(0x04)
		int32_t NumBits; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetNodeHelperLibrary_GetValidValue_Param
	{
	public:

		struct UEnum* Enum; // 0x00(0x08)
		char EnumeratorValue; // 0x08(0x01)
		char ReturnValue; // 0x09(0x01)
	};

	struct Function_Engine_KismetNodeHelperLibrary_GetUnmarkedBit_Param
	{
	public:

		int32_t Data; // 0x00(0x04)
		int32_t StartIdx; // 0x04(0x04)
		int32_t NumBits; // 0x08(0x04)
		bool bRandom; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetNodeHelperLibrary_GetRandomUnmarkedBit_Param
	{
	public:

		int32_t Data; // 0x00(0x04)
		int32_t StartIdx; // 0x04(0x04)
		int32_t NumBits; // 0x08(0x04)
		int32_t ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetNodeHelperLibrary_GetFirstUnmarkedBit_Param
	{
	public:

		int32_t Data; // 0x00(0x04)
		int32_t StartIdx; // 0x04(0x04)
		int32_t NumBits; // 0x08(0x04)
		int32_t ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_KismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Param
	{
	public:

		struct UEnum* Enum; // 0x00(0x08)
		char EnumeratorIndex; // 0x08(0x01)
		char ReturnValue; // 0x09(0x01)
	};

	struct Function_Engine_KismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Param
	{
	public:

		struct UEnum* Enum; // 0x00(0x08)
		char EnumeratorValue; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetNodeHelperLibrary_GetEnumeratorName_Param
	{
	public:

		struct UEnum* Enum; // 0x00(0x08)
		char EnumeratorValue; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName ReturnValue; // 0x0c(0x08)
	};

	struct Function_Engine_KismetNodeHelperLibrary_ClearBit_Param
	{
	public:

		int32_t Data; // 0x00(0x04)
		int32_t Index; // 0x04(0x04)
	};

	struct Function_Engine_KismetNodeHelperLibrary_ClearAllBits_Param
	{
	public:

		int32_t Data; // 0x00(0x04)
	};

	struct Function_Engine_KismetNodeHelperLibrary_BitIsMarked_Param
	{
	public:

		int32_t Data; // 0x00(0x04)
		int32_t Index; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Param
	{
	public:

		struct UPrimitiveComponent* PrimitiveComponent; // 0x00(0x08)
		bool bCastInsetShadow; // 0x08(0x01)
		bool bLightAttachmentsAsGroup; // 0x09(0x01)
	};

	struct Function_Engine_KismetRenderingLibrary_RenderTargetCreateStaticTextureCubeEditorOnly_Param
	{
	public:

		struct UTextureRenderTargetCube* RenderTarget; // 0x00(0x08)
		struct FString Name; // 0x08(0x10)
		bool bForceOverride; // 0x18(0x01)
		enum class TextureCompressionSettings CompressionSettings; // 0x19(0x01)
		enum class TextureMipGenSettings MipSettings; // 0x1a(0x01)
		char pad_1B[0x5]; // 0x1b(0x05)
		struct UTextureCube* ReturnValue; // 0x20(0x08)
	};

	struct Function_Engine_KismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Param
	{
	public:

		struct UTextureRenderTarget2D* RenderTarget; // 0x00(0x08)
		struct FString Name; // 0x08(0x10)
		enum class TextureCompressionSettings CompressionSettings; // 0x18(0x01)
		enum class TextureMipGenSettings MipSettings; // 0x19(0x01)
		char pad_1A[0x6]; // 0x1a(0x06)
		struct UTexture2D* ReturnValue; // 0x20(0x08)
	};

	struct Function_Engine_KismetRenderingLibrary_ReleaseRenderTarget2D_Param
	{
	public:

		struct UTextureRenderTarget2D* TextureRenderTarget; // 0x00(0x08)
	};

	struct Function_Engine_KismetRenderingLibrary_ReadRenderTargetUV_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTextureRenderTarget2D* TextureRenderTarget; // 0x08(0x08)
		float U; // 0x10(0x04)
		float V; // 0x14(0x04)
		struct FColor ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetRenderingLibrary_ReadRenderTargetRawUV_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTextureRenderTarget2D* TextureRenderTarget; // 0x08(0x08)
		float U; // 0x10(0x04)
		float V; // 0x14(0x04)
		struct FLinearColor ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetRenderingLibrary_ReadRenderTargetRawPixel_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTextureRenderTarget2D* TextureRenderTarget; // 0x08(0x08)
		int32_t X; // 0x10(0x04)
		int32_t Y; // 0x14(0x04)
		struct FLinearColor ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetRenderingLibrary_ReadRenderTargetPixel_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTextureRenderTarget2D* TextureRenderTarget; // 0x08(0x08)
		int32_t X; // 0x10(0x04)
		int32_t Y; // 0x14(0x04)
		struct FColor ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetRenderingLibrary_MakeSkinWeightInfo_Param
	{
	public:

		int32_t Bone0; // 0x00(0x04)
		char Weight0; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		int32_t Bone1; // 0x08(0x04)
		char Weight1; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		int32_t Bone2; // 0x10(0x04)
		char Weight2; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		int32_t Bone3; // 0x18(0x04)
		char Weight3; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FSkelMeshSkinWeightInfo ReturnValue; // 0x20(0x28)
	};

	struct Function_Engine_KismetRenderingLibrary_ImportFileAsTexture2D_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FString Filename; // 0x08(0x10)
		struct UTexture2D* ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_KismetRenderingLibrary_ImportBufferAsTexture2D_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct TArray<char> Buffer; // 0x08(0x10)
		struct UTexture2D* ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_KismetRenderingLibrary_ExportTexture2D_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTexture2D* Texture; // 0x08(0x08)
		struct FString FilePath; // 0x10(0x10)
		struct FString Filename; // 0x20(0x10)
	};

	struct Function_Engine_KismetRenderingLibrary_ExportRenderTarget_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTextureRenderTarget2D* TextureRenderTarget; // 0x08(0x08)
		struct FString FilePath; // 0x10(0x10)
		struct FString Filename; // 0x20(0x10)
	};

	struct Function_Engine_KismetRenderingLibrary_EndDrawCanvasToRenderTarget_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FDrawToRenderTargetContext Context; // 0x08(0x10)
	};

	struct Function_Engine_KismetRenderingLibrary_DrawMaterialToRenderTargetWithCoordinate_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTextureRenderTarget2D* TextureRenderTarget; // 0x08(0x08)
		struct UMaterialInterface* Material; // 0x10(0x08)
		struct FVector2D ScreenPosition; // 0x18(0x08)
		struct FVector2D ScreenSize; // 0x20(0x08)
	};

	struct Function_Engine_KismetRenderingLibrary_DrawMaterialToRenderTarget_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTextureRenderTarget2D* TextureRenderTarget; // 0x08(0x08)
		struct UMaterialInterface* Material; // 0x10(0x08)
	};

	struct Function_Engine_KismetRenderingLibrary_CreateRenderTarget2D_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t Width; // 0x08(0x04)
		int32_t Height; // 0x0c(0x04)
		enum class ETextureRenderTargetFormat Format; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FLinearColor ClearColor; // 0x14(0x10)
		bool bAutoGenerateMipMaps; // 0x24(0x01)
		bool bAutoFillMipMaps; // 0x25(0x01)
		bool bClearRenderTargetImmediatly; // 0x26(0x01)
		char pad_27[0x1]; // 0x27(0x01)
		struct UTextureRenderTarget2D* ReturnValue; // 0x28(0x08)
	};

	struct Function_Engine_KismetRenderingLibrary_ConvertRenderTargetToTextureCubeEditorOnly_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTextureRenderTargetCube* RenderTarget; // 0x08(0x08)
		struct UTextureCube* TextureCube; // 0x10(0x08)
	};

	struct Function_Engine_KismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTextureRenderTarget2D* RenderTarget; // 0x08(0x08)
		struct UTexture2D* Texture; // 0x10(0x08)
	};

	struct Function_Engine_KismetRenderingLibrary_ClearRenderTarget2D_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTextureRenderTarget2D* TextureRenderTarget; // 0x08(0x08)
		struct FLinearColor ClearColor; // 0x10(0x10)
	};

	struct Function_Engine_KismetRenderingLibrary_BuildReflectionCaptures_Param
	{
	public:

	};

	struct Function_Engine_KismetRenderingLibrary_BreakSkinWeightInfo_Param
	{
	public:

		struct FSkelMeshSkinWeightInfo InWeight; // 0x00(0x28)
		int32_t Bone0; // 0x28(0x04)
		char Weight0; // 0x2c(0x01)
		char pad_2D[0x3]; // 0x2d(0x03)
		int32_t Bone1; // 0x30(0x04)
		char Weight1; // 0x34(0x01)
		char pad_35[0x3]; // 0x35(0x03)
		int32_t Bone2; // 0x38(0x04)
		char Weight2; // 0x3c(0x01)
		char pad_3D[0x3]; // 0x3d(0x03)
		int32_t Bone3; // 0x40(0x04)
		char Weight3; // 0x44(0x01)
	};

	struct Function_Engine_KismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UTextureRenderTarget2D* TextureRenderTarget; // 0x08(0x08)
		struct UCanvas* Canvas; // 0x10(0x08)
		struct FVector2D size; // 0x18(0x08)
		struct FDrawToRenderTargetContext Context; // 0x20(0x10)
		bool immediateDrawing; // 0x30(0x01)
	};

	struct Function_Engine_KismetStringLibrary_TrimTrailing_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Trim_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetStringLibrary_ToUpper_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetStringLibrary_ToLower_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetStringLibrary_TimeSecondsToString_Param
	{
	public:

		float InSeconds; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetStringLibrary_StartsWith_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString InPrefix; // 0x10(0x10)
		enum class ESearchCase SearchCase; // 0x20(0x01)
		bool ReturnValue; // 0x21(0x01)
	};

	struct Function_Engine_KismetStringLibrary_Split_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString InStr; // 0x10(0x10)
		struct FString LeftS; // 0x20(0x10)
		struct FString RightS; // 0x30(0x10)
		enum class ESearchCase SearchCase; // 0x40(0x01)
		enum class ESearchDir SearchDir; // 0x41(0x01)
		bool ReturnValue; // 0x42(0x01)
	};

	struct Function_Engine_KismetStringLibrary_RightPad_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		int32_t ChCount; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetStringLibrary_RightChop_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		int32_t Count; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Right_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		int32_t Count; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Reverse_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetStringLibrary_ReplaceInline_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString SearchText; // 0x10(0x10)
		struct FString ReplacementText; // 0x20(0x10)
		enum class ESearchCase SearchCase; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		int32_t ReturnValue; // 0x34(0x04)
	};

	struct Function_Engine_KismetStringLibrary_Replace_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString From; // 0x10(0x10)
		struct FString To; // 0x20(0x10)
		enum class ESearchCase SearchCase; // 0x30(0x01)
		char pad_31[0x7]; // 0x31(0x07)
		struct FString ReturnValue; // 0x38(0x10)
	};

	struct Function_Engine_KismetStringLibrary_ParseIntoArray_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString Delimiter; // 0x10(0x10)
		bool CullEmptyStrings; // 0x20(0x01)
		char pad_21[0x7]; // 0x21(0x07)
		struct TArray<struct FString> ReturnValue; // 0x28(0x10)
	};

	struct Function_Engine_KismetStringLibrary_NotEqual_StrStr_Param
	{
	public:

		struct FString A; // 0x00(0x10)
		struct FString B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetStringLibrary_NotEqual_StriStri_Param
	{
	public:

		struct FString A; // 0x00(0x10)
		struct FString B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetStringLibrary_Mid_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		int32_t Start; // 0x10(0x04)
		int32_t Count; // 0x14(0x04)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetStringLibrary_MatchesWildcard_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString Wildcard; // 0x10(0x10)
		enum class ESearchCase SearchCase; // 0x20(0x01)
		bool ReturnValue; // 0x21(0x01)
	};

	struct Function_Engine_KismetStringLibrary_Len_Param
	{
	public:

		struct FString S; // 0x00(0x10)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetStringLibrary_LeftPad_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		int32_t ChCount; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetStringLibrary_LeftChop_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		int32_t Count; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Left_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		int32_t Count; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetStringLibrary_JoinStringArray_Param
	{
	public:

		struct TArray<struct FString> SourceArray; // 0x00(0x10)
		struct FString Separator; // 0x10(0x10)
		struct FString ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetStringLibrary_IsNumeric_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetStringLibrary_GetSubstring_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		int32_t StartIndex; // 0x10(0x04)
		int32_t Length; // 0x14(0x04)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetStringLibrary_GetCharacterAsNumber_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		int32_t Index; // 0x10(0x04)
		int32_t ReturnValue; // 0x14(0x04)
	};

	struct Function_Engine_KismetStringLibrary_GetCharacterArrayFromString_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct TArray<struct FString> ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetStringLibrary_FindSubstring_Param
	{
	public:

		struct FString SearchIn; // 0x00(0x10)
		struct FString SubString; // 0x10(0x10)
		bool bUseCase; // 0x20(0x01)
		bool bSearchFromEnd; // 0x21(0x01)
		char pad_22[0x2]; // 0x22(0x02)
		int32_t StartPosition; // 0x24(0x04)
		int32_t ReturnValue; // 0x28(0x04)
	};

	struct Function_Engine_KismetStringLibrary_EqualEqual_StrStr_Param
	{
	public:

		struct FString A; // 0x00(0x10)
		struct FString B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetStringLibrary_EqualEqual_StriStri_Param
	{
	public:

		struct FString A; // 0x00(0x10)
		struct FString B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetStringLibrary_EndsWith_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString InSuffix; // 0x10(0x10)
		enum class ESearchCase SearchCase; // 0x20(0x01)
		bool ReturnValue; // 0x21(0x01)
	};

	struct Function_Engine_KismetStringLibrary_CullArray_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct TArray<struct FString> inArray; // 0x10(0x10)
		int32_t ReturnValue; // 0x20(0x04)
	};

	struct Function_Engine_KismetStringLibrary_Conv_VectorToString_Param
	{
	public:

		struct FVector InVec; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_Vector2dToString_Param
	{
	public:

		struct FVector2D InVec; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_TransformToString_Param
	{
	public:

		struct FTransform InTrans; // 0x00(0x30)
		struct FString ReturnValue; // 0x30(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_StringToVector2D_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
		struct FVector2D OutConvertedVector2D; // 0x10(0x08)
		bool OutIsValid; // 0x18(0x01)
	};

	struct Function_Engine_KismetStringLibrary_Conv_StringToVector_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
		struct FVector OutConvertedVector; // 0x10(0x0c)
		bool OutIsValid; // 0x1c(0x01)
	};

	struct Function_Engine_KismetStringLibrary_Conv_StringToRotator_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
		struct FRotator OutConvertedRotator; // 0x10(0x0c)
		bool OutIsValid; // 0x1c(0x01)
	};

	struct Function_Engine_KismetStringLibrary_Conv_StringToName_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
		struct FName ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetStringLibrary_Conv_StringToInt_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetStringLibrary_Conv_StringToFloat_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetStringLibrary_Conv_StringToColor_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
		struct FLinearColor OutConvertedColor; // 0x10(0x10)
		bool OutIsValid; // 0x20(0x01)
	};

	struct Function_Engine_KismetStringLibrary_Conv_RotatorToString_Param
	{
	public:

		struct FRotator InRot; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_ObjectToString_Param
	{
	public:

		struct UObject* InObj; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_NameToString_Param
	{
	public:

		struct FName InName; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_MatrixToString_Param
	{
	public:

		struct FMatrix InMatrix; // 0x00(0x40)
		struct FString ReturnValue; // 0x40(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_IntVectorToString_Param
	{
	public:

		struct FIntVector InIntVec; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_IntToString_Param
	{
	public:

		int32_t inInt; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_FloatToString_Param
	{
	public:

		float InFloat; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_ColorToString_Param
	{
	public:

		struct FLinearColor InColor; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_ByteToString_Param
	{
	public:

		char InByte; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Conv_BoolToString_Param
	{
	public:

		bool InBool; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetStringLibrary_Contains_Param
	{
	public:

		struct FString SearchIn; // 0x00(0x10)
		struct FString SubString; // 0x10(0x10)
		bool bUseCase; // 0x20(0x01)
		bool bSearchFromEnd; // 0x21(0x01)
		bool ReturnValue; // 0x22(0x01)
	};

	struct Function_Engine_KismetStringLibrary_Concat_StrStr_Param
	{
	public:

		struct FString A; // 0x00(0x10)
		struct FString B; // 0x10(0x10)
		struct FString ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetStringLibrary_BuildString_Vector2d_Param
	{
	public:

		struct FString AppendTo; // 0x00(0x10)
		struct FString Prefix; // 0x10(0x10)
		struct FVector2D InVector2D; // 0x20(0x08)
		struct FString Suffix; // 0x28(0x10)
		struct FString ReturnValue; // 0x38(0x10)
	};

	struct Function_Engine_KismetStringLibrary_BuildString_Vector_Param
	{
	public:

		struct FString AppendTo; // 0x00(0x10)
		struct FString Prefix; // 0x10(0x10)
		struct FVector InVector; // 0x20(0x0c)
		char pad_2C[0x4]; // 0x2c(0x04)
		struct FString Suffix; // 0x30(0x10)
		struct FString ReturnValue; // 0x40(0x10)
	};

	struct Function_Engine_KismetStringLibrary_BuildString_Rotator_Param
	{
	public:

		struct FString AppendTo; // 0x00(0x10)
		struct FString Prefix; // 0x10(0x10)
		struct FRotator InRot; // 0x20(0x0c)
		char pad_2C[0x4]; // 0x2c(0x04)
		struct FString Suffix; // 0x30(0x10)
		struct FString ReturnValue; // 0x40(0x10)
	};

	struct Function_Engine_KismetStringLibrary_BuildString_Object_Param
	{
	public:

		struct FString AppendTo; // 0x00(0x10)
		struct FString Prefix; // 0x10(0x10)
		struct UObject* InObj; // 0x20(0x08)
		struct FString Suffix; // 0x28(0x10)
		struct FString ReturnValue; // 0x38(0x10)
	};

	struct Function_Engine_KismetStringLibrary_BuildString_Name_Param
	{
	public:

		struct FString AppendTo; // 0x00(0x10)
		struct FString Prefix; // 0x10(0x10)
		struct FName InName; // 0x20(0x08)
		struct FString Suffix; // 0x28(0x10)
		struct FString ReturnValue; // 0x38(0x10)
	};

	struct Function_Engine_KismetStringLibrary_BuildString_IntVector_Param
	{
	public:

		struct FString AppendTo; // 0x00(0x10)
		struct FString Prefix; // 0x10(0x10)
		struct FIntVector InIntVector; // 0x20(0x0c)
		char pad_2C[0x4]; // 0x2c(0x04)
		struct FString Suffix; // 0x30(0x10)
		struct FString ReturnValue; // 0x40(0x10)
	};

	struct Function_Engine_KismetStringLibrary_BuildString_Int_Param
	{
	public:

		struct FString AppendTo; // 0x00(0x10)
		struct FString Prefix; // 0x10(0x10)
		int32_t inInt; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct FString Suffix; // 0x28(0x10)
		struct FString ReturnValue; // 0x38(0x10)
	};

	struct Function_Engine_KismetStringLibrary_BuildString_Float_Param
	{
	public:

		struct FString AppendTo; // 0x00(0x10)
		struct FString Prefix; // 0x10(0x10)
		float InFloat; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct FString Suffix; // 0x28(0x10)
		struct FString ReturnValue; // 0x38(0x10)
	};

	struct Function_Engine_KismetStringLibrary_BuildString_Color_Param
	{
	public:

		struct FString AppendTo; // 0x00(0x10)
		struct FString Prefix; // 0x10(0x10)
		struct FLinearColor InColor; // 0x20(0x10)
		struct FString Suffix; // 0x30(0x10)
		struct FString ReturnValue; // 0x40(0x10)
	};

	struct Function_Engine_KismetStringLibrary_BuildString_Bool_Param
	{
	public:

		struct FString AppendTo; // 0x00(0x10)
		struct FString Prefix; // 0x10(0x10)
		bool InBool; // 0x20(0x01)
		char pad_21[0x7]; // 0x21(0x07)
		struct FString Suffix; // 0x28(0x10)
		struct FString ReturnValue; // 0x38(0x10)
	};

	struct Function_Engine_KismetStringTableLibrary_IsRegisteredTableId_Param
	{
	public:

		struct FName TableId; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetStringTableLibrary_IsRegisteredTableEntry_Param
	{
	public:

		struct FName TableId; // 0x00(0x08)
		struct FString Key; // 0x08(0x10)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetStringTableLibrary_GetTableNamespace_Param
	{
	public:

		struct FName TableId; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetStringTableLibrary_GetTableEntrySourceString_Param
	{
	public:

		struct FName TableId; // 0x00(0x08)
		struct FString Key; // 0x08(0x10)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetStringTableLibrary_GetTableEntryMetaData_Param
	{
	public:

		struct FName TableId; // 0x00(0x08)
		struct FString Key; // 0x08(0x10)
		struct FName MetaDataId; // 0x18(0x08)
		struct FString ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_KismetStringTableLibrary_GetRegisteredStringTables_Param
	{
	public:

		struct TArray<struct FName> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Param
	{
	public:

		struct FName TableId; // 0x00(0x08)
		struct FString Key; // 0x08(0x10)
		struct TArray<struct FName> ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetStringTableLibrary_GetKeysFromStringTable_Param
	{
	public:

		struct FName TableId; // 0x00(0x08)
		struct TArray<struct FString> ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_UnregisterForRemoteNotifications_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_UnloadPrimaryAssetList_Param
	{
	public:

		struct TArray<struct FPrimaryAssetId> PrimaryAssetIdList; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_UnloadPrimaryAsset_Param
	{
	public:

		struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_TransactObject_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_StackTrace_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_SphereTraceSingleForObjects_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x28(0x10)
		bool bTraceComplex; // 0x38(0x01)
		char pad_39[0x7]; // 0x39(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x40(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x50(0x01)
		char pad_51[0x3]; // 0x51(0x03)
		struct FHitResult OutHit; // 0x54(0x88)
		bool bIgnoreSelf; // 0xdc(0x01)
		char pad_DD[0x3]; // 0xdd(0x03)
		struct FLinearColor TraceColor; // 0xe0(0x10)
		struct FLinearColor TraceHitColor; // 0xf0(0x10)
		float DrawTime; // 0x100(0x04)
		bool ReturnValue; // 0x104(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SphereTraceSingleByProfile_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		struct FName ProfileName; // 0x24(0x08)
		bool bTraceComplex; // 0x2c(0x01)
		char pad_2D[0x3]; // 0x2d(0x03)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x30(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x40(0x01)
		char pad_41[0x3]; // 0x41(0x03)
		struct FHitResult OutHit; // 0x44(0x88)
		bool bIgnoreSelf; // 0xcc(0x01)
		char pad_CD[0x3]; // 0xcd(0x03)
		struct FLinearColor TraceColor; // 0xd0(0x10)
		struct FLinearColor TraceHitColor; // 0xe0(0x10)
		float DrawTime; // 0xf0(0x04)
		bool ReturnValue; // 0xf4(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SphereTraceSingle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		enum class ETraceTypeQuery TraceChannel; // 0x24(0x01)
		bool bTraceComplex; // 0x25(0x01)
		char pad_26[0x2]; // 0x26(0x02)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x28(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x38(0x01)
		char pad_39[0x3]; // 0x39(0x03)
		struct FHitResult OutHit; // 0x3c(0x88)
		bool bIgnoreSelf; // 0xc4(0x01)
		char pad_C5[0x3]; // 0xc5(0x03)
		struct FLinearColor TraceColor; // 0xc8(0x10)
		struct FLinearColor TraceHitColor; // 0xd8(0x10)
		float DrawTime; // 0xe8(0x04)
		bool ReturnValue; // 0xec(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SphereTraceMultiForObjects_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x28(0x10)
		bool bTraceComplex; // 0x38(0x01)
		char pad_39[0x7]; // 0x39(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x40(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x50(0x01)
		char pad_51[0x7]; // 0x51(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x58(0x10)
		bool bIgnoreSelf; // 0x68(0x01)
		char pad_69[0x3]; // 0x69(0x03)
		struct FLinearColor TraceColor; // 0x6c(0x10)
		struct FLinearColor TraceHitColor; // 0x7c(0x10)
		float DrawTime; // 0x8c(0x04)
		bool ReturnValue; // 0x90(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SphereTraceMultiByProfile_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		struct FName ProfileName; // 0x24(0x08)
		bool bTraceComplex; // 0x2c(0x01)
		char pad_2D[0x3]; // 0x2d(0x03)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x30(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x48(0x10)
		bool bIgnoreSelf; // 0x58(0x01)
		char pad_59[0x3]; // 0x59(0x03)
		struct FLinearColor TraceColor; // 0x5c(0x10)
		struct FLinearColor TraceHitColor; // 0x6c(0x10)
		float DrawTime; // 0x7c(0x04)
		bool ReturnValue; // 0x80(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SphereTraceMulti_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		enum class ETraceTypeQuery TraceChannel; // 0x24(0x01)
		bool bTraceComplex; // 0x25(0x01)
		char pad_26[0x2]; // 0x26(0x02)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x28(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x38(0x01)
		char pad_39[0x7]; // 0x39(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x40(0x10)
		bool bIgnoreSelf; // 0x50(0x01)
		char pad_51[0x3]; // 0x51(0x03)
		struct FLinearColor TraceColor; // 0x54(0x10)
		struct FLinearColor TraceHitColor; // 0x64(0x10)
		float DrawTime; // 0x74(0x04)
		bool ReturnValue; // 0x78(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SphereOverlapComponents_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector SpherePos; // 0x08(0x0c)
		float SphereRadius; // 0x14(0x04)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x18(0x10)
		struct UClass* ComponentClassFilter; // 0x28(0x08)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x30(0x10)
		struct TArray<struct UPrimitiveComponent*> OutComponents; // 0x40(0x10)
		bool ReturnValue; // 0x50(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SphereOverlapActors_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector SpherePos; // 0x08(0x0c)
		float SphereRadius; // 0x14(0x04)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x18(0x10)
		struct UClass* ActorClassFilter; // 0x28(0x08)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x30(0x10)
		struct TArray<struct AActor*> OutActors; // 0x40(0x10)
		bool ReturnValue; // 0x50(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SnapshotObject_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_ShowPlatformSpecificLeaderboardScreen_Param
	{
	public:

		struct FString CategoryName; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_ShowPlatformSpecificAchievementsScreen_Param
	{
	public:

		struct APlayerController* SpecificPlayer; // 0x00(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_ShowInterstitialAd_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_ShowAdBanner_Param
	{
	public:

		int32_t AdIdIndex; // 0x00(0x04)
		bool bShowOnBottomOfScreen; // 0x04(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SetWindowTitle_Param
	{
	public:

		struct FText Title; // 0x00(0x18)
	};

	struct Function_Engine_KismetSystemLibrary_SetVolumeButtonsHandledBySystem_Param
	{
	public:

		bool bEnabled; // 0x00(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SetVectorPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct FVector Value; // 0x10(0x0c)
	};

	struct Function_Engine_KismetSystemLibrary_SetUserActivity_Param
	{
	public:

		struct FUserActivity UserActivity; // 0x00(0x18)
	};

	struct Function_Engine_KismetSystemLibrary_SetTransformPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct FTransform Value; // 0x10(0x30)
	};

	struct Function_Engine_KismetSystemLibrary_SetTextPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct FText Value; // 0x10(0x18)
	};

	struct Function_Engine_KismetSystemLibrary_SetSuppressViewportTransitionMessage_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool bState; // 0x08(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SetStructurePropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct FGenericStruct Value; // 0x10(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_SetStringPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct FString Value; // 0x10(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_SetSoftObjectPropertyByName_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_SetSoftClassPropertyByName_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_SetRotatorPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct FRotator Value; // 0x10(0x0c)
	};

	struct Function_Engine_KismetSystemLibrary_SetObjectPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct UObject* Value; // 0x10(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_SetNamePropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct FName Value; // 0x10(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_SetLinearColorPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct FLinearColor Value; // 0x10(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_SetIntPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		int32_t Value; // 0x10(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_SetInterfacePropertyByName_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_SetInt64PropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		int64_t Value; // 0x10(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_SetFloatPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		float Value; // 0x10(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_SetFieldPathPropertyByName_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_SetCollisionProfileNameProperty_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct FCollisionProfileName Value; // 0x10(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_SetClassPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		struct UClass* Value; // 0x10(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_SetBytePropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		char Value; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_SetBoolPropertyByName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FName PropertyName; // 0x08(0x08)
		bool Value; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_RetriggerableDelay_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float Duration; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FLatentActionInfo LatentInfo; // 0x10(0x18)
	};

	struct Function_Engine_KismetSystemLibrary_ResetGamepadAssignmentToController_Param
	{
	public:

		int32_t ControllerId; // 0x00(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_ResetGamepadAssignments_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_RegisterForRemoteNotifications_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_QuitGame_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* SpecificPlayer; // 0x08(0x08)
		enum class EQuitPreference QuitPreference; // 0x10(0x01)
		bool bIgnorePlatformRestrictions; // 0x11(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_PrintWarning_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_PrintText_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FText InText; // 0x08(0x18)
		bool bPrintToScreen; // 0x20(0x01)
		bool bPrintToLog; // 0x21(0x01)
		char pad_22[0x2]; // 0x22(0x02)
		struct FLinearColor TextColor; // 0x24(0x10)
		float Duration; // 0x34(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_PrintString_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FString inString; // 0x08(0x10)
		bool bPrintToScreen; // 0x18(0x01)
		bool bPrintToLog; // 0x19(0x01)
		char pad_1A[0x2]; // 0x1a(0x02)
		struct FLinearColor TextColor; // 0x1c(0x10)
		float Duration; // 0x2c(0x04)
	};

	struct DelegateFunction_Engine_KismetSystemLibrary_OnAssetLoaded__DelegateSignature_Param
	{
	public:

		struct UObject* Loaded; // 0x00(0x08)
	};

	struct DelegateFunction_Engine_KismetSystemLibrary_OnAssetClassLoaded__DelegateSignature_Param
	{
	public:

		struct UClass* Loaded; // 0x00(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_NotEqual_SoftObjectReference_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_NotEqual_SoftClassReference_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_NotEqual_PrimaryAssetType_Param
	{
	public:

		struct FPrimaryAssetType A; // 0x00(0x08)
		struct FPrimaryAssetType B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_NotEqual_PrimaryAssetId_Param
	{
	public:

		struct FPrimaryAssetId A; // 0x00(0x10)
		struct FPrimaryAssetId B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_NormalizeFilename_Param
	{
	public:

		struct FString InFilename; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_MoveComponentTo_Param
	{
	public:

		struct USceneComponent* Component; // 0x00(0x08)
		struct FVector TargetRelativeLocation; // 0x08(0x0c)
		struct FRotator TargetRelativeRotation; // 0x14(0x0c)
		bool bEaseOut; // 0x20(0x01)
		bool bEaseIn; // 0x21(0x01)
		char pad_22[0x2]; // 0x22(0x02)
		float OverTime; // 0x24(0x04)
		bool bForceShortestRotationPath; // 0x28(0x01)
		enum class EMoveComponentAction MoveAction; // 0x29(0x01)
		char pad_2A[0x6]; // 0x2a(0x06)
		struct FLatentActionInfo LatentInfo; // 0x30(0x18)
	};

	struct Function_Engine_KismetSystemLibrary_MakeSoftObjectPath_Param
	{
	public:

		struct FString PathString; // 0x00(0x10)
		struct FSoftObjectPath ReturnValue; // 0x10(0x18)
	};

	struct Function_Engine_KismetSystemLibrary_MakeSoftClassPath_Param
	{
	public:

		struct FString PathString; // 0x00(0x10)
		struct FSoftClassPath ReturnValue; // 0x10(0x18)
	};

	struct Function_Engine_KismetSystemLibrary_MakeLiteralText_Param
	{
	public:

		struct FText Value; // 0x00(0x18)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetSystemLibrary_MakeLiteralString_Param
	{
	public:

		struct FString Value; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_MakeLiteralName_Param
	{
	public:

		struct FName Value; // 0x00(0x08)
		struct FName ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_MakeLiteralInt_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_MakeLiteralFloat_Param
	{
	public:

		float Value; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_MakeLiteralByte_Param
	{
	public:

		char Value; // 0x00(0x01)
		char ReturnValue; // 0x01(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_MakeLiteralBool_Param
	{
	public:

		bool Value; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_LoadInterstitialAd_Param
	{
	public:

		int32_t AdIdIndex; // 0x00(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_LoadClassAsset_Blocking_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_LoadAssetClass_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_LoadAsset_Blocking_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_LoadAsset_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_LineTraceSingleForObjects_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x20(0x10)
		bool bTraceComplex; // 0x30(0x01)
		char pad_31[0x7]; // 0x31(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x48(0x01)
		char pad_49[0x3]; // 0x49(0x03)
		struct FHitResult OutHit; // 0x4c(0x88)
		bool bIgnoreSelf; // 0xd4(0x01)
		char pad_D5[0x3]; // 0xd5(0x03)
		struct FLinearColor TraceColor; // 0xd8(0x10)
		struct FLinearColor TraceHitColor; // 0xe8(0x10)
		float DrawTime; // 0xf8(0x04)
		bool ReturnValue; // 0xfc(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_LineTraceSingleByProfile_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		struct FName ProfileName; // 0x20(0x08)
		bool bTraceComplex; // 0x28(0x01)
		char pad_29[0x7]; // 0x29(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x30(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x40(0x01)
		char pad_41[0x3]; // 0x41(0x03)
		struct FHitResult OutHit; // 0x44(0x88)
		bool bIgnoreSelf; // 0xcc(0x01)
		char pad_CD[0x3]; // 0xcd(0x03)
		struct FLinearColor TraceColor; // 0xd0(0x10)
		struct FLinearColor TraceHitColor; // 0xe0(0x10)
		float DrawTime; // 0xf0(0x04)
		bool ReturnValue; // 0xf4(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_LineTraceSingle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		enum class ETraceTypeQuery TraceChannel; // 0x20(0x01)
		bool bTraceComplex; // 0x21(0x01)
		char pad_22[0x6]; // 0x22(0x06)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x28(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x38(0x01)
		char pad_39[0x3]; // 0x39(0x03)
		struct FHitResult OutHit; // 0x3c(0x88)
		bool bIgnoreSelf; // 0xc4(0x01)
		char pad_C5[0x3]; // 0xc5(0x03)
		struct FLinearColor TraceColor; // 0xc8(0x10)
		struct FLinearColor TraceHitColor; // 0xd8(0x10)
		float DrawTime; // 0xe8(0x04)
		bool ReturnValue; // 0xec(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_LineTraceMultiForObjects_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x20(0x10)
		bool bTraceComplex; // 0x30(0x01)
		char pad_31[0x7]; // 0x31(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x48(0x01)
		char pad_49[0x7]; // 0x49(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x50(0x10)
		bool bIgnoreSelf; // 0x60(0x01)
		char pad_61[0x3]; // 0x61(0x03)
		struct FLinearColor TraceColor; // 0x64(0x10)
		struct FLinearColor TraceHitColor; // 0x74(0x10)
		float DrawTime; // 0x84(0x04)
		bool ReturnValue; // 0x88(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_LineTraceMultiByProfile_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		struct FName ProfileName; // 0x20(0x08)
		bool bTraceComplex; // 0x28(0x01)
		char pad_29[0x7]; // 0x29(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x30(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x48(0x10)
		bool bIgnoreSelf; // 0x58(0x01)
		char pad_59[0x3]; // 0x59(0x03)
		struct FLinearColor TraceColor; // 0x5c(0x10)
		struct FLinearColor TraceHitColor; // 0x6c(0x10)
		float DrawTime; // 0x7c(0x04)
		bool ReturnValue; // 0x80(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_LineTraceMulti_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		enum class ETraceTypeQuery TraceChannel; // 0x20(0x01)
		bool bTraceComplex; // 0x21(0x01)
		char pad_22[0x6]; // 0x22(0x06)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x28(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x38(0x01)
		char pad_39[0x7]; // 0x39(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x40(0x10)
		bool bIgnoreSelf; // 0x50(0x01)
		char pad_51[0x3]; // 0x51(0x03)
		struct FLinearColor TraceColor; // 0x54(0x10)
		struct FLinearColor TraceHitColor; // 0x64(0x10)
		float DrawTime; // 0x74(0x04)
		bool ReturnValue; // 0x78(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_LaunchURL_Param
	{
	public:

		struct FString URL; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_K2_UnPauseTimerHandle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FTimerHandle Handle; // 0x08(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_K2_UnPauseTimerDelegate_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_K2_UnPauseTimer_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString FunctionName; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_K2_TimerExistsHandle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FTimerHandle Handle; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_K2_TimerExistsDelegate_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_K2_TimerExists_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString FunctionName; // 0x08(0x10)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_K2_SetTimerDelegate_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_K2_SetTimer_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString FunctionName; // 0x08(0x10)
		float Time; // 0x18(0x04)
		bool bLooping; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		float InitialStartDelay; // 0x20(0x04)
		float InitialStartDelayVariance; // 0x24(0x04)
		struct FTimerHandle ReturnValue; // 0x28(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_K2_PauseTimerHandle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FTimerHandle Handle; // 0x08(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_K2_PauseTimerDelegate_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_K2_PauseTimer_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString FunctionName; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_K2_IsValidTimerHandle_Param
	{
	public:

		struct FTimerHandle Handle; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_K2_IsTimerPausedHandle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FTimerHandle Handle; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_K2_IsTimerPausedDelegate_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_K2_IsTimerPaused_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString FunctionName; // 0x08(0x10)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_K2_IsTimerActiveHandle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FTimerHandle Handle; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_K2_IsTimerActiveDelegate_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_K2_IsTimerActive_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString FunctionName; // 0x08(0x10)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_K2_InvalidateTimerHandle_Param
	{
	public:

		struct FTimerHandle Handle; // 0x00(0x08)
		struct FTimerHandle ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_K2_GetTimerRemainingTimeHandle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FTimerHandle Handle; // 0x08(0x08)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_K2_GetTimerRemainingTimeDelegate_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_K2_GetTimerRemainingTime_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString FunctionName; // 0x08(0x10)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_K2_GetTimerElapsedTimeHandle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FTimerHandle Handle; // 0x08(0x08)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_K2_GetTimerElapsedTimeDelegate_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_K2_GetTimerElapsedTime_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString FunctionName; // 0x08(0x10)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_K2_ClearTimerHandle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FTimerHandle Handle; // 0x08(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_K2_ClearTimerDelegate_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_K2_ClearTimer_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString FunctionName; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_K2_ClearAndInvalidateTimerHandle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FTimerHandle Handle; // 0x08(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_IsValidSoftObjectReference_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_IsValidSoftClassReference_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_IsValidPrimaryAssetType_Param
	{
	public:

		struct FPrimaryAssetType PrimaryAssetType; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsValidPrimaryAssetId_Param
	{
	public:

		struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsValidClass_Param
	{
	public:

		struct UClass* Class; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsValid_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsUnattended_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsStandalone_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsServer_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsScreensaverEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsPackagedForDistribution_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsLoggedIn_Param
	{
	public:

		struct APlayerController* SpecificPlayer; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsInterstitialAdRequested_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsInterstitialAdAvailable_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsDedicatedServer_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_IsControllerAssignedToGamepad_Param
	{
	public:

		int32_t ControllerId; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_HideAdBanner_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_GetVolumeButtonsHandledBySystem_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_GetUniqueDeviceId_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetSupportedFullscreenResolutions_Param
	{
	public:

		struct TArray<struct FIntPoint> Resolutions; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_GetSoftObjectReferenceFromPrimaryAssetId_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_GetSoftClassReferenceFromPrimaryAssetId_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_GetRenderingMaterialQualityLevel_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_GetRenderingDetailMode_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_GetProjectSavedDirectory_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetProjectDirectory_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetProjectContentDirectory_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetPrimaryAssetsWithBundleState_Param
	{
	public:

		struct TArray<struct FName> RequiredBundles; // 0x00(0x10)
		struct TArray<struct FName> ExcludedBundles; // 0x10(0x10)
		struct TArray<struct FPrimaryAssetType> ValidTypes; // 0x20(0x10)
		bool bForceCurrentState; // 0x30(0x01)
		char pad_31[0x7]; // 0x31(0x07)
		struct TArray<struct FPrimaryAssetId> OutPrimaryAssetIdList; // 0x38(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetPrimaryAssetIdList_Param
	{
	public:

		struct FPrimaryAssetType PrimaryAssetType; // 0x00(0x08)
		struct TArray<struct FPrimaryAssetId> OutPrimaryAssetIdList; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetPrimaryAssetIdFromSoftObjectReference_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_GetPrimaryAssetIdFromSoftClassReference_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_GetPrimaryAssetIdFromObject_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FPrimaryAssetId ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetPrimaryAssetIdFromClass_Param
	{
	public:

		struct UClass* Class; // 0x00(0x08)
		struct FPrimaryAssetId ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetPreferredLanguages_Param
	{
	public:

		struct TArray<struct FString> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetPlatformUserName_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetPathName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetOuterObject_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct UObject* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_GetObjectName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetObjectFromPrimaryAssetId_Param
	{
	public:

		struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
		struct UObject* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_GetMinYResolutionForUI_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_GetMinYResolutionFor3DView_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_GetLocalCurrencySymbol_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetLocalCurrencyCode_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetGameTimeInSeconds_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_GetGamepadControllerName_Param
	{
	public:

		int32_t ControllerId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetGameName_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetGameBundleId_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetFrameCount_Param
	{
	public:

		int64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_GetEngineVersion_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetDisplayName_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetDeviceID_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetDefaultLocale_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetDefaultLanguage_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetCurrentBundleState_Param
	{
	public:

		struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
		bool bForceCurrentState; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct TArray<struct FName> OutBundles; // 0x18(0x10)
		bool ReturnValue; // 0x28(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_GetConvenientWindowedResolutions_Param
	{
	public:

		struct TArray<struct FIntPoint> Resolutions; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_GetConsoleVariableIntValue_Param
	{
	public:

		struct FString VariableName; // 0x00(0x10)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_GetConsoleVariableFloatValue_Param
	{
	public:

		struct FString VariableName; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_GetConsoleVariableBoolValue_Param
	{
	public:

		struct FString VariableName; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_GetComponentBounds_Param
	{
	public:

		struct USceneComponent* Component; // 0x00(0x08)
		struct FVector Origin; // 0x08(0x0c)
		struct FVector BoxExtent; // 0x14(0x0c)
		float SphereRadius; // 0x20(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_GetCommandLine_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetClassFromPrimaryAssetId_Param
	{
	public:

		struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
		struct UClass* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_GetClassDisplayName_Param
	{
	public:

		struct UClass* Class; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetAdIDCount_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_GetActorListFromComponentList_Param
	{
	public:

		struct TArray<struct UPrimitiveComponent*> ComponentList; // 0x00(0x10)
		struct UClass* ActorClassFilter; // 0x10(0x08)
		struct TArray<struct AActor*> OutActorList; // 0x18(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_GetActorBounds_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		struct FVector Origin; // 0x08(0x0c)
		struct FVector BoxExtent; // 0x14(0x0c)
	};

	struct Function_Engine_KismetSystemLibrary_ForceCloseAdBanner_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_FlushPersistentDebugLines_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_FlushDebugStrings_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_ExecuteConsoleCommand_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FString Command; // 0x08(0x10)
		struct APlayerController* SpecificPlayer; // 0x18(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_EqualEqual_SoftObjectReference_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_EqualEqual_SoftClassReference_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_EqualEqual_PrimaryAssetType_Param
	{
	public:

		struct FPrimaryAssetType A; // 0x00(0x08)
		struct FPrimaryAssetType B; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_EqualEqual_PrimaryAssetId_Param
	{
	public:

		struct FPrimaryAssetId A; // 0x00(0x10)
		struct FPrimaryAssetId B; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_EndTransaction_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugString_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector TextLocation; // 0x08(0x0c)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString Text; // 0x18(0x10)
		struct AActor* TestBaseActor; // 0x28(0x08)
		struct FLinearColor TextColor; // 0x30(0x10)
		float Duration; // 0x40(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugSphere_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Center; // 0x08(0x0c)
		float radius; // 0x14(0x04)
		int32_t Segments; // 0x18(0x04)
		struct FLinearColor LineColor; // 0x1c(0x10)
		float Duration; // 0x2c(0x04)
		float Thickness; // 0x30(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugPoint_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Position; // 0x08(0x0c)
		float size; // 0x14(0x04)
		struct FLinearColor PointColor; // 0x18(0x10)
		float Duration; // 0x28(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugPlane_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FPlane PlaneCoordinates; // 0x10(0x10)
		struct FVector Location; // 0x20(0x0c)
		float size; // 0x2c(0x04)
		struct FLinearColor PlaneColor; // 0x30(0x10)
		float Duration; // 0x40(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugLine_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector LineStart; // 0x08(0x0c)
		struct FVector LineEnd; // 0x14(0x0c)
		struct FLinearColor LineColor; // 0x20(0x10)
		float Duration; // 0x30(0x04)
		float Thickness; // 0x34(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugFrustum_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform FrustumTransform; // 0x10(0x30)
		struct FLinearColor FrustumColor; // 0x40(0x10)
		float Duration; // 0x50(0x04)
		float Thickness; // 0x54(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugFloatHistoryTransform_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FDebugFloatHistory FloatHistory; // 0x08(0x20)
		char pad_28[0x8]; // 0x28(0x08)
		struct FTransform DrawTransform; // 0x30(0x30)
		struct FVector2D DrawSize; // 0x60(0x08)
		struct FLinearColor DrawColor; // 0x68(0x10)
		float Duration; // 0x78(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugFloatHistoryLocation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FDebugFloatHistory FloatHistory; // 0x08(0x20)
		struct FVector DrawLocation; // 0x28(0x0c)
		struct FVector2D DrawSize; // 0x34(0x08)
		struct FLinearColor DrawColor; // 0x3c(0x10)
		float Duration; // 0x4c(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugCylinder_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		int32_t Segments; // 0x24(0x04)
		struct FLinearColor LineColor; // 0x28(0x10)
		float Duration; // 0x38(0x04)
		float Thickness; // 0x3c(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugCoordinateSystem_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector AxisLoc; // 0x08(0x0c)
		struct FRotator AxisRot; // 0x14(0x0c)
		float Scale; // 0x20(0x04)
		float Duration; // 0x24(0x04)
		float Thickness; // 0x28(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugConeInDegrees_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Origin; // 0x08(0x0c)
		struct FVector Direction; // 0x14(0x0c)
		float Length; // 0x20(0x04)
		float AngleWidth; // 0x24(0x04)
		float AngleHeight; // 0x28(0x04)
		int32_t NumSides; // 0x2c(0x04)
		struct FLinearColor LineColor; // 0x30(0x10)
		float Duration; // 0x40(0x04)
		float Thickness; // 0x44(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugCone_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Origin; // 0x08(0x0c)
		struct FVector Direction; // 0x14(0x0c)
		float Length; // 0x20(0x04)
		float AngleWidth; // 0x24(0x04)
		float AngleHeight; // 0x28(0x04)
		int32_t NumSides; // 0x2c(0x04)
		struct FLinearColor LineColor; // 0x30(0x10)
		float Duration; // 0x40(0x04)
		float Thickness; // 0x44(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugCircle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Center; // 0x08(0x0c)
		float radius; // 0x14(0x04)
		int32_t NumSegments; // 0x18(0x04)
		struct FLinearColor LineColor; // 0x1c(0x10)
		float Duration; // 0x2c(0x04)
		float Thickness; // 0x30(0x04)
		struct FVector YAxis; // 0x34(0x0c)
		struct FVector ZAxis; // 0x40(0x0c)
		bool bDrawAxis; // 0x4c(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugCapsule_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Center; // 0x08(0x0c)
		float HalfHeight; // 0x14(0x04)
		float radius; // 0x18(0x04)
		struct FRotator Rotation; // 0x1c(0x0c)
		struct FLinearColor LineColor; // 0x28(0x10)
		float Duration; // 0x38(0x04)
		float Thickness; // 0x3c(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugCamera_Param
	{
	public:

		struct ACameraActor* CameraActor; // 0x00(0x08)
		struct FLinearColor CameraColor; // 0x08(0x10)
		float Duration; // 0x18(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugBox_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Center; // 0x08(0x0c)
		struct FVector Extent; // 0x14(0x0c)
		struct FLinearColor LineColor; // 0x20(0x10)
		struct FRotator Rotation; // 0x30(0x0c)
		float Duration; // 0x3c(0x04)
		float Thickness; // 0x40(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DrawDebugArrow_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector LineStart; // 0x08(0x0c)
		struct FVector LineEnd; // 0x14(0x0c)
		float ArrowSize; // 0x20(0x04)
		struct FLinearColor LineColor; // 0x24(0x10)
		float Duration; // 0x34(0x04)
		float Thickness; // 0x38(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_DoesImplementInterface_Param
	{
	public:

		struct UObject* TestObject; // 0x00(0x08)
		struct UClass* Interface; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_Delay_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float Duration; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FLatentActionInfo LatentInfo; // 0x10(0x18)
	};

	struct Function_Engine_KismetSystemLibrary_CreateCopyForUndoBuffer_Param
	{
	public:

		struct UObject* ObjectToModify; // 0x00(0x08)
	};

	struct Function_Engine_KismetSystemLibrary_ConvertToRelativePath_Param
	{
	public:

		struct FString Filename; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_ConvertToAbsolutePath_Param
	{
	public:

		struct FString Filename; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_Conv_SoftObjPathToSoftObjRef_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_Conv_SoftObjectReferenceToString_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_Conv_SoftObjectReferenceToObject_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_Conv_SoftClassReferenceToString_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_Conv_SoftClassReferenceToClass_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_Conv_SoftClassPathToSoftClassRef_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_Conv_PrimaryAssetTypeToString_Param
	{
	public:

		struct FPrimaryAssetType PrimaryAssetType; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_Conv_PrimaryAssetIdToString_Param
	{
	public:

		struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_Conv_ObjectToSoftObjectReference_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_Conv_InterfaceToObject_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_Conv_ClassToSoftClassReference_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_ControlScreensaver_Param
	{
	public:

		bool bAllowScreenSaver; // 0x00(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_ComponentOverlapComponents_Param
	{
	public:

		struct UPrimitiveComponent* Component; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform ComponentTransform; // 0x10(0x30)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x40(0x10)
		struct UClass* ComponentClassFilter; // 0x50(0x08)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x58(0x10)
		struct TArray<struct UPrimitiveComponent*> OutComponents; // 0x68(0x10)
		bool ReturnValue; // 0x78(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_ComponentOverlapActors_Param
	{
	public:

		struct UPrimitiveComponent* Component; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform ComponentTransform; // 0x10(0x30)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x40(0x10)
		struct UClass* ActorClassFilter; // 0x50(0x08)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x58(0x10)
		struct TArray<struct AActor*> OutActors; // 0x68(0x10)
		bool ReturnValue; // 0x78(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_CollectGarbage_Param
	{
	public:

	};

	struct Function_Engine_KismetSystemLibrary_CapsuleTraceSingleForObjects_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		float HalfHeight; // 0x24(0x04)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x28(0x10)
		bool bTraceComplex; // 0x38(0x01)
		char pad_39[0x7]; // 0x39(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x40(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x50(0x01)
		char pad_51[0x3]; // 0x51(0x03)
		struct FHitResult OutHit; // 0x54(0x88)
		bool bIgnoreSelf; // 0xdc(0x01)
		char pad_DD[0x3]; // 0xdd(0x03)
		struct FLinearColor TraceColor; // 0xe0(0x10)
		struct FLinearColor TraceHitColor; // 0xf0(0x10)
		float DrawTime; // 0x100(0x04)
		bool ReturnValue; // 0x104(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_CapsuleTraceSingleByProfile_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		float HalfHeight; // 0x24(0x04)
		struct FName ProfileName; // 0x28(0x08)
		bool bTraceComplex; // 0x30(0x01)
		char pad_31[0x7]; // 0x31(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x48(0x01)
		char pad_49[0x3]; // 0x49(0x03)
		struct FHitResult OutHit; // 0x4c(0x88)
		bool bIgnoreSelf; // 0xd4(0x01)
		char pad_D5[0x3]; // 0xd5(0x03)
		struct FLinearColor TraceColor; // 0xd8(0x10)
		struct FLinearColor TraceHitColor; // 0xe8(0x10)
		float DrawTime; // 0xf8(0x04)
		bool ReturnValue; // 0xfc(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_CapsuleTraceSingle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		float HalfHeight; // 0x24(0x04)
		enum class ETraceTypeQuery TraceChannel; // 0x28(0x01)
		bool bTraceComplex; // 0x29(0x01)
		char pad_2A[0x6]; // 0x2a(0x06)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x30(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x40(0x01)
		char pad_41[0x3]; // 0x41(0x03)
		struct FHitResult OutHit; // 0x44(0x88)
		bool bIgnoreSelf; // 0xcc(0x01)
		char pad_CD[0x3]; // 0xcd(0x03)
		struct FLinearColor TraceColor; // 0xd0(0x10)
		struct FLinearColor TraceHitColor; // 0xe0(0x10)
		float DrawTime; // 0xf0(0x04)
		bool ReturnValue; // 0xf4(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_CapsuleTraceMultiForObjects_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		float HalfHeight; // 0x24(0x04)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x28(0x10)
		bool bTraceComplex; // 0x38(0x01)
		char pad_39[0x7]; // 0x39(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x40(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x50(0x01)
		char pad_51[0x7]; // 0x51(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x58(0x10)
		bool bIgnoreSelf; // 0x68(0x01)
		char pad_69[0x3]; // 0x69(0x03)
		struct FLinearColor TraceColor; // 0x6c(0x10)
		struct FLinearColor TraceHitColor; // 0x7c(0x10)
		float DrawTime; // 0x8c(0x04)
		bool ReturnValue; // 0x90(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_CapsuleTraceMultiByProfile_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		float HalfHeight; // 0x24(0x04)
		struct FName ProfileName; // 0x28(0x08)
		bool bTraceComplex; // 0x30(0x01)
		char pad_31[0x7]; // 0x31(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x48(0x01)
		char pad_49[0x7]; // 0x49(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x50(0x10)
		bool bIgnoreSelf; // 0x60(0x01)
		char pad_61[0x3]; // 0x61(0x03)
		struct FLinearColor TraceColor; // 0x64(0x10)
		struct FLinearColor TraceHitColor; // 0x74(0x10)
		float DrawTime; // 0x84(0x04)
		bool ReturnValue; // 0x88(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_CapsuleTraceMulti_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		float HalfHeight; // 0x24(0x04)
		enum class ETraceTypeQuery TraceChannel; // 0x28(0x01)
		bool bTraceComplex; // 0x29(0x01)
		char pad_2A[0x6]; // 0x2a(0x06)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x30(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x48(0x10)
		bool bIgnoreSelf; // 0x58(0x01)
		char pad_59[0x3]; // 0x59(0x03)
		struct FLinearColor TraceColor; // 0x5c(0x10)
		struct FLinearColor TraceHitColor; // 0x6c(0x10)
		float DrawTime; // 0x7c(0x04)
		bool ReturnValue; // 0x80(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_CapsuleOverlapComponents_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector CapsulePos; // 0x08(0x0c)
		float radius; // 0x14(0x04)
		float HalfHeight; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x20(0x10)
		struct UClass* ComponentClassFilter; // 0x30(0x08)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
		struct TArray<struct UPrimitiveComponent*> OutComponents; // 0x48(0x10)
		bool ReturnValue; // 0x58(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_CapsuleOverlapActors_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector CapsulePos; // 0x08(0x0c)
		float radius; // 0x14(0x04)
		float HalfHeight; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x20(0x10)
		struct UClass* ActorClassFilter; // 0x30(0x08)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
		struct TArray<struct AActor*> OutActors; // 0x48(0x10)
		bool ReturnValue; // 0x58(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_CanLaunchURL_Param
	{
	public:

		struct FString URL; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_CancelTransaction_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_BreakSoftObjectPath_Param
	{
	public:

		struct FSoftObjectPath InSoftObjectPath; // 0x00(0x18)
		struct FString PathString; // 0x18(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_BreakSoftClassPath_Param
	{
	public:

		struct FSoftClassPath InSoftClassPath; // 0x00(0x18)
		struct FString PathString; // 0x18(0x10)
	};

	struct Function_Engine_KismetSystemLibrary_BoxTraceSingleForObjects_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		struct FVector HalfSize; // 0x20(0x0c)
		struct FRotator Orientation; // 0x2c(0x0c)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x38(0x10)
		bool bTraceComplex; // 0x48(0x01)
		char pad_49[0x7]; // 0x49(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x50(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x60(0x01)
		char pad_61[0x3]; // 0x61(0x03)
		struct FHitResult OutHit; // 0x64(0x88)
		bool bIgnoreSelf; // 0xec(0x01)
		char pad_ED[0x3]; // 0xed(0x03)
		struct FLinearColor TraceColor; // 0xf0(0x10)
		struct FLinearColor TraceHitColor; // 0x100(0x10)
		float DrawTime; // 0x110(0x04)
		bool ReturnValue; // 0x114(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_BoxTraceSingleByProfile_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		struct FVector HalfSize; // 0x20(0x0c)
		struct FRotator Orientation; // 0x2c(0x0c)
		struct FName ProfileName; // 0x38(0x08)
		bool bTraceComplex; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x48(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x58(0x01)
		char pad_59[0x3]; // 0x59(0x03)
		struct FHitResult OutHit; // 0x5c(0x88)
		bool bIgnoreSelf; // 0xe4(0x01)
		char pad_E5[0x3]; // 0xe5(0x03)
		struct FLinearColor TraceColor; // 0xe8(0x10)
		struct FLinearColor TraceHitColor; // 0xf8(0x10)
		float DrawTime; // 0x108(0x04)
		bool ReturnValue; // 0x10c(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_BoxTraceSingle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		struct FVector HalfSize; // 0x20(0x0c)
		struct FRotator Orientation; // 0x2c(0x0c)
		enum class ETraceTypeQuery TraceChannel; // 0x38(0x01)
		bool bTraceComplex; // 0x39(0x01)
		char pad_3A[0x6]; // 0x3a(0x06)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x40(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x50(0x01)
		char pad_51[0x3]; // 0x51(0x03)
		struct FHitResult OutHit; // 0x54(0x88)
		bool bIgnoreSelf; // 0xdc(0x01)
		char pad_DD[0x3]; // 0xdd(0x03)
		struct FLinearColor TraceColor; // 0xe0(0x10)
		struct FLinearColor TraceHitColor; // 0xf0(0x10)
		float DrawTime; // 0x100(0x04)
		bool ReturnValue; // 0x104(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_BoxTraceMultiForObjects_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		struct FVector HalfSize; // 0x20(0x0c)
		struct FRotator Orientation; // 0x2c(0x0c)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x38(0x10)
		bool bTraceComplex; // 0x48(0x01)
		char pad_49[0x7]; // 0x49(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x50(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x60(0x01)
		char pad_61[0x7]; // 0x61(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x68(0x10)
		bool bIgnoreSelf; // 0x78(0x01)
		char pad_79[0x3]; // 0x79(0x03)
		struct FLinearColor TraceColor; // 0x7c(0x10)
		struct FLinearColor TraceHitColor; // 0x8c(0x10)
		float DrawTime; // 0x9c(0x04)
		bool ReturnValue; // 0xa0(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_BoxTraceMultiByProfile_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		struct FVector HalfSize; // 0x20(0x0c)
		struct FRotator Orientation; // 0x2c(0x0c)
		struct FName ProfileName; // 0x38(0x08)
		bool bTraceComplex; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x48(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x58(0x01)
		char pad_59[0x7]; // 0x59(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x60(0x10)
		bool bIgnoreSelf; // 0x70(0x01)
		char pad_71[0x3]; // 0x71(0x03)
		struct FLinearColor TraceColor; // 0x74(0x10)
		struct FLinearColor TraceHitColor; // 0x84(0x10)
		float DrawTime; // 0x94(0x04)
		bool ReturnValue; // 0x98(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_BoxTraceMulti_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		struct FVector HalfSize; // 0x20(0x0c)
		struct FRotator Orientation; // 0x2c(0x0c)
		enum class ETraceTypeQuery TraceChannel; // 0x38(0x01)
		bool bTraceComplex; // 0x39(0x01)
		char pad_3A[0x6]; // 0x3a(0x06)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x40(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x50(0x01)
		char pad_51[0x7]; // 0x51(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x58(0x10)
		bool bIgnoreSelf; // 0x68(0x01)
		char pad_69[0x3]; // 0x69(0x03)
		struct FLinearColor TraceColor; // 0x6c(0x10)
		struct FLinearColor TraceHitColor; // 0x7c(0x10)
		float DrawTime; // 0x8c(0x04)
		bool ReturnValue; // 0x90(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_BoxOverlapComponents_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector BoxPos; // 0x08(0x0c)
		struct FVector Extent; // 0x14(0x0c)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x20(0x10)
		struct UClass* ComponentClassFilter; // 0x30(0x08)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
		struct TArray<struct UPrimitiveComponent*> OutComponents; // 0x48(0x10)
		bool ReturnValue; // 0x58(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_BoxOverlapActors_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector BoxPos; // 0x08(0x0c)
		struct FVector BoxExtent; // 0x14(0x0c)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x20(0x10)
		struct UClass* ActorClassFilter; // 0x30(0x08)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
		struct TArray<struct AActor*> OutActors; // 0x48(0x10)
		bool ReturnValue; // 0x58(0x01)
	};

	struct Function_Engine_KismetSystemLibrary_BeginTransaction_Param
	{
	public:

		struct FString Context; // 0x00(0x10)
		struct FText Description; // 0x10(0x18)
		struct UObject* PrimaryObject; // 0x28(0x08)
		int32_t ReturnValue; // 0x30(0x04)
	};

	struct Function_Engine_KismetSystemLibrary_AddFloatHistorySample_Param
	{
	public:

		float Value; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FDebugFloatHistory FloatHistory; // 0x08(0x20)
		struct FDebugFloatHistory ReturnValue; // 0x28(0x20)
	};

	struct Function_Engine_KismetTextLibrary_TextTrimTrailing_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_TextTrimPrecedingAndTrailing_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_TextTrimPreceding_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_TextToUpper_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_TextToLower_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_TextIsTransient_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetTextLibrary_TextIsFromStringTable_Param
	{
	public:

		struct FText Text; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetTextLibrary_TextIsEmpty_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetTextLibrary_TextIsCultureInvariant_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_KismetTextLibrary_TextFromStringTable_Param
	{
	public:

		struct FName TableId; // 0x00(0x08)
		struct FString Key; // 0x08(0x10)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_StringTableIdAndKeyFromText_Param
	{
	public:

		struct FText Text; // 0x00(0x18)
		struct FName OutTableId; // 0x18(0x08)
		struct FString OutKey; // 0x20(0x10)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_Engine_KismetTextLibrary_PolyglotDataToText_Param
	{
	public:

		struct FPolyglotTextData PolyglotData; // 0x00(0xb8)
		struct FText ReturnValue; // 0xb8(0x18)
	};

	struct Function_Engine_KismetTextLibrary_NotEqual_TextText_Param
	{
	public:

		struct FText A; // 0x00(0x18)
		struct FText B; // 0x18(0x18)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_Engine_KismetTextLibrary_NotEqual_IgnoreCase_TextText_Param
	{
	public:

		struct FText A; // 0x00(0x18)
		struct FText B; // 0x18(0x18)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_Engine_KismetTextLibrary_IsPolyglotDataValid_Param
	{
	public:

		struct FPolyglotTextData PolyglotData; // 0x00(0xb8)
		bool IsValid; // 0xb8(0x01)
		char pad_B9[0x7]; // 0xb9(0x07)
		struct FText ErrorMessage; // 0xc0(0x18)
	};

	struct Function_Engine_KismetTextLibrary_GetEmptyText_Param
	{
	public:

		struct FText ReturnValue; // 0x00(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Format_Param
	{
	public:

		struct FText InPattern; // 0x00(0x18)
		struct TArray<struct FFormatArgumentData> InArgs; // 0x18(0x10)
		struct FText ReturnValue; // 0x28(0x18)
	};

	struct Function_Engine_KismetTextLibrary_FindTextInLocalizationTable_Param
	{
	public:

		struct FString Namespace; // 0x00(0x10)
		struct FString Key; // 0x10(0x10)
		struct FText OutText; // 0x20(0x18)
		bool ReturnValue; // 0x38(0x01)
	};

	struct Function_Engine_KismetTextLibrary_EqualEqual_TextText_Param
	{
	public:

		struct FText A; // 0x00(0x18)
		struct FText B; // 0x18(0x18)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_Engine_KismetTextLibrary_EqualEqual_IgnoreCase_TextText_Param
	{
	public:

		struct FText A; // 0x00(0x18)
		struct FText B; // 0x18(0x18)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_Engine_KismetTextLibrary_Conv_VectorToText_Param
	{
	public:

		struct FVector InVec; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FText ReturnValue; // 0x10(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_Vector2dToText_Param
	{
	public:

		struct FVector2D InVec; // 0x00(0x08)
		struct FText ReturnValue; // 0x08(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_TransformToText_Param
	{
	public:

		struct FTransform InTrans; // 0x00(0x30)
		struct FText ReturnValue; // 0x30(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_TextToString_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_KismetTextLibrary_Conv_StringToText_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
		struct FText ReturnValue; // 0x10(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_RotatorToText_Param
	{
	public:

		struct FRotator InRot; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FText ReturnValue; // 0x10(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_ObjectToText_Param
	{
	public:

		struct UObject* InObj; // 0x00(0x08)
		struct FText ReturnValue; // 0x08(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_NameToText_Param
	{
	public:

		struct FName InName; // 0x00(0x08)
		struct FText ReturnValue; // 0x08(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_IntToText_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
		bool bAlwaysSign; // 0x04(0x01)
		bool bUseGrouping; // 0x05(0x01)
		char pad_6[0x2]; // 0x06(0x02)
		int32_t MinimumIntegralDigits; // 0x08(0x04)
		int32_t MaximumIntegralDigits; // 0x0c(0x04)
		struct FText ReturnValue; // 0x10(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_Int64ToText_Param
	{
	public:

		int64_t Value; // 0x00(0x08)
		bool bAlwaysSign; // 0x08(0x01)
		bool bUseGrouping; // 0x09(0x01)
		char pad_A[0x2]; // 0x0a(0x02)
		int32_t MinimumIntegralDigits; // 0x0c(0x04)
		int32_t MaximumIntegralDigits; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_FloatToText_Param
	{
	public:

		float Value; // 0x00(0x04)
		enum class ERoundingMode RoundingMode; // 0x04(0x01)
		bool bAlwaysSign; // 0x05(0x01)
		bool bUseGrouping; // 0x06(0x01)
		char pad_7[0x1]; // 0x07(0x01)
		int32_t MinimumIntegralDigits; // 0x08(0x04)
		int32_t MaximumIntegralDigits; // 0x0c(0x04)
		int32_t MinimumFractionalDigits; // 0x10(0x04)
		int32_t MaximumFractionalDigits; // 0x14(0x04)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_ColorToText_Param
	{
	public:

		struct FLinearColor InColor; // 0x00(0x10)
		struct FText ReturnValue; // 0x10(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_ByteToText_Param
	{
	public:

		char Value; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FText ReturnValue; // 0x08(0x18)
	};

	struct Function_Engine_KismetTextLibrary_Conv_BoolToText_Param
	{
	public:

		bool InBool; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FText ReturnValue; // 0x08(0x18)
	};

	struct Function_Engine_KismetTextLibrary_AsTimeZoneTime_DateTime_Param
	{
	public:

		struct FDateTime InDateTime; // 0x00(0x08)
		struct FString InTimeZone; // 0x08(0x10)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_AsTimeZoneDateTime_DateTime_Param
	{
	public:

		struct FDateTime InDateTime; // 0x00(0x08)
		struct FString InTimeZone; // 0x08(0x10)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_AsTimeZoneDate_DateTime_Param
	{
	public:

		struct FDateTime InDateTime; // 0x00(0x08)
		struct FString InTimeZone; // 0x08(0x10)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_AsTimespan_Timespan_Param
	{
	public:

		struct FTimespan InTimespan; // 0x00(0x08)
		struct FText ReturnValue; // 0x08(0x18)
	};

	struct Function_Engine_KismetTextLibrary_AsTime_DateTime_Param
	{
	public:

		struct FDateTime In; // 0x00(0x08)
		struct FText ReturnValue; // 0x08(0x18)
	};

	struct Function_Engine_KismetTextLibrary_AsPercent_Float_Param
	{
	public:

		float Value; // 0x00(0x04)
		enum class ERoundingMode RoundingMode; // 0x04(0x01)
		bool bAlwaysSign; // 0x05(0x01)
		bool bUseGrouping; // 0x06(0x01)
		char pad_7[0x1]; // 0x07(0x01)
		int32_t MinimumIntegralDigits; // 0x08(0x04)
		int32_t MaximumIntegralDigits; // 0x0c(0x04)
		int32_t MinimumFractionalDigits; // 0x10(0x04)
		int32_t MaximumFractionalDigits; // 0x14(0x04)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_AsDateTime_DateTime_Param
	{
	public:

		struct FDateTime In; // 0x00(0x08)
		struct FText ReturnValue; // 0x08(0x18)
	};

	struct Function_Engine_KismetTextLibrary_AsDate_DateTime_Param
	{
	public:

		struct FDateTime InDateTime; // 0x00(0x08)
		struct FText ReturnValue; // 0x08(0x18)
	};

	struct Function_Engine_KismetTextLibrary_AsCurrencyBase_Param
	{
	public:

		int32_t BaseValue; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString CurrencyCode; // 0x08(0x10)
		struct FText ReturnValue; // 0x18(0x18)
	};

	struct Function_Engine_KismetTextLibrary_AsCurrency_Integer_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
		enum class ERoundingMode RoundingMode; // 0x04(0x01)
		bool bAlwaysSign; // 0x05(0x01)
		bool bUseGrouping; // 0x06(0x01)
		char pad_7[0x1]; // 0x07(0x01)
		int32_t MinimumIntegralDigits; // 0x08(0x04)
		int32_t MaximumIntegralDigits; // 0x0c(0x04)
		int32_t MinimumFractionalDigits; // 0x10(0x04)
		int32_t MaximumFractionalDigits; // 0x14(0x04)
		struct FString CurrencyCode; // 0x18(0x10)
		struct FText ReturnValue; // 0x28(0x18)
	};

	struct Function_Engine_KismetTextLibrary_AsCurrency_Float_Param
	{
	public:

		float Value; // 0x00(0x04)
		enum class ERoundingMode RoundingMode; // 0x04(0x01)
		bool bAlwaysSign; // 0x05(0x01)
		bool bUseGrouping; // 0x06(0x01)
		char pad_7[0x1]; // 0x07(0x01)
		int32_t MinimumIntegralDigits; // 0x08(0x04)
		int32_t MaximumIntegralDigits; // 0x0c(0x04)
		int32_t MinimumFractionalDigits; // 0x10(0x04)
		int32_t MaximumFractionalDigits; // 0x14(0x04)
		struct FString CurrencyCode; // 0x18(0x10)
		struct FText ReturnValue; // 0x28(0x18)
	};

	struct Function_Engine_MeshVertexPainterKismetLibrary_RemovePaintedVertices_Param
	{
	public:

		struct UStaticMeshComponent* StaticMeshComponent; // 0x00(0x08)
	};

	struct Function_Engine_MeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Param
	{
	public:

		struct UStaticMeshComponent* StaticMeshComponent; // 0x00(0x08)
		struct FLinearColor FillColor; // 0x08(0x10)
		bool bConvertToSRGB; // 0x18(0x01)
	};

	struct Function_Engine_MeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Param
	{
	public:

		struct UStaticMeshComponent* StaticMeshComponent; // 0x00(0x08)
		struct FLinearColor StartColor; // 0x08(0x10)
		struct FLinearColor EndColor; // 0x18(0x10)
		enum class EVertexPaintAxis Axis; // 0x28(0x01)
		bool bConvertToSRGB; // 0x29(0x01)
	};

	struct Function_Engine_StereoLayerFunctionLibrary_ShowSplashScreen_Param
	{
	public:

	};

	struct Function_Engine_StereoLayerFunctionLibrary_SetSplashScreen_Param
	{
	public:

		struct UTexture* Texture; // 0x00(0x08)
		struct FVector2D Scale; // 0x08(0x08)
		struct FVector offset; // 0x10(0x0c)
		bool bShowLoadingMovie; // 0x1c(0x01)
		bool bShowOnSet; // 0x1d(0x01)
	};

	struct Function_Engine_StereoLayerFunctionLibrary_HideSplashScreen_Param
	{
	public:

	};

	struct Function_Engine_StereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Param
	{
	public:

		bool InAutoShowEnabled; // 0x00(0x01)
	};

	struct Function_Engine_SubsystemBlueprintLibrary_GetWorldSubsystem_Param
	{
	public:

		struct UObject* ContextObject; // 0x00(0x08)
		struct UClass* Class; // 0x08(0x08)
		struct UWorldSubsystem* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_SubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Param
	{
	public:

		struct APlayerController* PlayerController; // 0x00(0x08)
		struct UClass* Class; // 0x08(0x08)
		struct ULocalPlayerSubsystem* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_SubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Param
	{
	public:

		struct UObject* ContextObject; // 0x00(0x08)
		struct UClass* Class; // 0x08(0x08)
		struct ULocalPlayerSubsystem* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_SubsystemBlueprintLibrary_GetGameInstanceSubsystem_Param
	{
	public:

		struct UObject* ContextObject; // 0x00(0x08)
		struct UClass* Class; // 0x08(0x08)
		struct UGameInstanceSubsystem* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_SubsystemBlueprintLibrary_GetEngineSubsystem_Param
	{
	public:

		struct UClass* Class; // 0x00(0x08)
		struct UEngineSubsystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_VisualLoggerKismetLibrary_RedirectVislog_Param
	{
	public:

		struct UObject* SourceOwner; // 0x00(0x08)
		struct UObject* DestinationOwner; // 0x08(0x08)
	};

	struct Function_Engine_VisualLoggerKismetLibrary_LogText_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FString Text; // 0x08(0x10)
		struct FName LogCategory; // 0x18(0x08)
		bool bAddToMessageLog; // 0x20(0x01)
	};

	struct Function_Engine_VisualLoggerKismetLibrary_LogSegment_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector SegmentStart; // 0x08(0x0c)
		struct FVector SegmentEnd; // 0x14(0x0c)
		struct FString Text; // 0x20(0x10)
		struct FLinearColor ObjectColor; // 0x30(0x10)
		float Thickness; // 0x40(0x04)
		struct FName CategoryName; // 0x44(0x08)
		bool bAddToMessageLog; // 0x4c(0x01)
	};

	struct Function_Engine_VisualLoggerKismetLibrary_LogLocation_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString Text; // 0x18(0x10)
		struct FLinearColor ObjectColor; // 0x28(0x10)
		float radius; // 0x38(0x04)
		struct FName LogCategory; // 0x3c(0x08)
		bool bAddToMessageLog; // 0x44(0x01)
	};

	struct Function_Engine_VisualLoggerKismetLibrary_LogBox_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FBox BoxShape; // 0x08(0x1c)
		char pad_24[0x4]; // 0x24(0x04)
		struct FString Text; // 0x28(0x10)
		struct FLinearColor ObjectColor; // 0x38(0x10)
		struct FName LogCategory; // 0x48(0x08)
		bool bAddToMessageLog; // 0x50(0x01)
	};

	struct Function_Engine_VisualLoggerKismetLibrary_EnableRecording_Param
	{
	public:

		bool bEnabled; // 0x00(0x01)
	};

	struct Function_Engine_VOIPStatics_SetMicThreshold_Param
	{
	public:

		float InThreshold; // 0x00(0x04)
	};

	struct Function_Engine_Pawn_SpawnDefaultController_Param
	{
	public:

	};

	struct Function_Engine_Pawn_SetCanAffectNavigationGeneration_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
		bool bForceUpdate; // 0x01(0x01)
	};

	struct Function_Engine_Pawn_ReceiveUnpossessed_Param
	{
	public:

		struct AController* OldController; // 0x00(0x08)
	};

	struct Function_Engine_Pawn_ReceivePossessed_Param
	{
	public:

		struct AController* NewController; // 0x00(0x08)
	};

	struct Function_Engine_Pawn_PawnMakeNoise_Param
	{
	public:

		float Loudness; // 0x00(0x04)
		struct FVector NoiseLocation; // 0x04(0x0c)
		bool bUseNoiseMakerLocation; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct AActor* NoiseMaker; // 0x18(0x08)
	};

	struct Function_Engine_Pawn_OnRep_PlayerState_Param
	{
	public:

	};

	struct Function_Engine_Pawn_OnRep_Controller_Param
	{
	public:

	};

	struct Function_Engine_Pawn_LaunchPawn_Param
	{
	public:

		struct FVector LaunchVelocity; // 0x00(0x0c)
		bool bXYOverride; // 0x0c(0x01)
		bool bZOverride; // 0x0d(0x01)
	};

	struct Function_Engine_Pawn_K2_GetMovementInputVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Pawn_IsPlayerControlled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Pawn_IsPawnControlled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Pawn_IsMoveInputIgnored_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Pawn_IsLocallyControlled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Pawn_IsControlled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Pawn_IsBotControlled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Pawn_GetPendingMovementInputVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Pawn_GetNavAgentLocation_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Pawn_GetMovementComponent_Param
	{
	public:

		struct UPawnMovementComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Pawn_GetMovementBaseActor_Param
	{
	public:

		struct APawn* Pawn; // 0x00(0x08)
		struct AActor* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_Pawn_GetLastMovementInputVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Pawn_GetControlRotation_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Pawn_GetController_Param
	{
	public:

		struct AController* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Pawn_GetBaseAimRotation_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Pawn_DetachFromControllerPendingDestroy_Param
	{
	public:

	};

	struct Function_Engine_Pawn_ConsumeMovementInputVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Pawn_AddMovementInput_Param
	{
	public:

		struct FVector WorldDirection; // 0x00(0x0c)
		float ScaleValue; // 0x0c(0x04)
		bool bForce; // 0x10(0x01)
	};

	struct Function_Engine_Pawn_AddControllerYawInput_Param
	{
	public:

		float Val; // 0x00(0x04)
	};

	struct Function_Engine_Pawn_AddControllerRollInput_Param
	{
	public:

		float Val; // 0x00(0x04)
	};

	struct Function_Engine_Pawn_AddControllerPitchInput_Param
	{
	public:

		float Val; // 0x00(0x04)
	};

	struct Function_Engine_Controller_UnPossess_Param
	{
	public:

	};

	struct Function_Engine_Controller_StopMovement_Param
	{
	public:

	};

	struct Function_Engine_Controller_SetInitialLocationAndRotation_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
		struct FRotator NewRotation; // 0x0c(0x0c)
	};

	struct Function_Engine_Controller_SetIgnoreMoveInput_Param
	{
	public:

		bool bNewMoveInput; // 0x00(0x01)
	};

	struct Function_Engine_Controller_SetIgnoreLookInput_Param
	{
	public:

		bool bNewLookInput; // 0x00(0x01)
	};

	struct Function_Engine_Controller_SetControlRotation_Param
	{
	public:

		struct FRotator NewRotation; // 0x00(0x0c)
	};

	struct Function_Engine_Controller_ResetIgnoreMoveInput_Param
	{
	public:

	};

	struct Function_Engine_Controller_ResetIgnoreLookInput_Param
	{
	public:

	};

	struct Function_Engine_Controller_ResetIgnoreInputFlags_Param
	{
	public:

	};

	struct Function_Engine_Controller_ReceiveUnPossess_Param
	{
	public:

		struct APawn* UnpossessedPawn; // 0x00(0x08)
	};

	struct Function_Engine_Controller_ReceivePossess_Param
	{
	public:

		struct APawn* PossessedPawn; // 0x00(0x08)
	};

	struct Function_Engine_Controller_ReceiveInstigatedAnyDamage_Param
	{
	public:

		float Damage; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UDamageType* DamageType; // 0x08(0x08)
		struct AActor* DamagedActor; // 0x10(0x08)
		struct AActor* DamageCauser; // 0x18(0x08)
	};

	struct Function_Engine_Controller_Possess_Param
	{
	public:

		struct APawn* InPawn; // 0x00(0x08)
	};

	struct Function_Engine_Controller_OnRep_PlayerState_Param
	{
	public:

	};

	struct Function_Engine_Controller_OnRep_Pawn_Param
	{
	public:

	};

	struct Function_Engine_Controller_LineOfSightTo_Param
	{
	public:

		struct AActor* Other; // 0x00(0x08)
		struct FVector ViewPoint; // 0x08(0x0c)
		bool bAlternateChecks; // 0x14(0x01)
		bool ReturnValue; // 0x15(0x01)
	};

	struct Function_Engine_Controller_K2_GetPawn_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Controller_IsPlayerController_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Controller_IsMoveInputIgnored_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Controller_IsLookInputIgnored_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Controller_IsLocalPlayerController_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Controller_IsLocalController_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Controller_GetViewTarget_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_Controller_GetDesiredRotation_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Controller_GetControlRotation_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_Controller_ClientSetRotation_Param
	{
	public:

		struct FRotator NewRotation; // 0x00(0x0c)
		bool bResetCamera; // 0x0c(0x01)
	};

	struct Function_Engine_Controller_ClientSetLocation_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
		struct FRotator NewRotation; // 0x0c(0x0c)
	};

	struct Function_Engine_Controller_CastToPlayerController_Param
	{
	public:

		struct APlayerController* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_HUD_ShowHud_Param
	{
	public:

	};

	struct Function_Engine_HUD_ShowDebugToggleSubCategory_Param
	{
	public:

		struct FName Category; // 0x00(0x08)
	};

	struct Function_Engine_HUD_ShowDebugForReticleTargetToggle_Param
	{
	public:

		struct UClass* DesiredClass; // 0x00(0x08)
	};

	struct Function_Engine_HUD_ShowDebug_Param
	{
	public:

		struct FName DebugType; // 0x00(0x08)
	};

	struct Function_Engine_HUD_RemoveDebugText_Param
	{
	public:

		struct AActor* SrcActor; // 0x00(0x08)
		bool bLeaveDurationText; // 0x08(0x01)
	};

	struct Function_Engine_HUD_RemoveAllDebugStrings_Param
	{
	public:

	};

	struct Function_Engine_HUD_ReceiveHitBoxRelease_Param
	{
	public:

		struct FName BoxName; // 0x00(0x08)
	};

	struct Function_Engine_HUD_ReceiveHitBoxEndCursorOver_Param
	{
	public:

		struct FName BoxName; // 0x00(0x08)
	};

	struct Function_Engine_HUD_ReceiveHitBoxClick_Param
	{
	public:

		struct FName BoxName; // 0x00(0x08)
	};

	struct Function_Engine_HUD_ReceiveHitBoxBeginCursorOver_Param
	{
	public:

		struct FName BoxName; // 0x00(0x08)
	};

	struct Function_Engine_HUD_ReceiveDrawHUD_Param
	{
	public:

		int32_t SizeX; // 0x00(0x04)
		int32_t SizeY; // 0x04(0x04)
	};

	struct Function_Engine_HUD_Project_Param
	{
	public:

		struct FVector Location; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_HUD_PreviousDebugTarget_Param
	{
	public:

	};

	struct Function_Engine_HUD_NextDebugTarget_Param
	{
	public:

	};

	struct Function_Engine_HUD_GetTextSize_Param
	{
	public:

		struct FString Text; // 0x00(0x10)
		float OutWidth; // 0x10(0x04)
		float OutHeight; // 0x14(0x04)
		struct UFont* Font; // 0x18(0x08)
		float Scale; // 0x20(0x04)
	};

	struct Function_Engine_HUD_GetOwningPlayerController_Param
	{
	public:

		struct APlayerController* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_HUD_GetOwningPawn_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_HUD_GetActorsInSelectionRectangle_Param
	{
	public:

		struct UClass* ClassFilter; // 0x00(0x08)
		struct FVector2D FirstPoint; // 0x08(0x08)
		struct FVector2D SecondPoint; // 0x10(0x08)
		struct TArray<struct AActor*> OutActors; // 0x18(0x10)
		bool bIncludeNonCollidingComponents; // 0x28(0x01)
		bool bActorMustBeFullyEnclosed; // 0x29(0x01)
	};

	struct Function_Engine_HUD_DrawTextureSimple_Param
	{
	public:

		struct UTexture* Texture; // 0x00(0x08)
		float ScreenX; // 0x08(0x04)
		float ScreenY; // 0x0c(0x04)
		float Scale; // 0x10(0x04)
		bool bScalePosition; // 0x14(0x01)
	};

	struct Function_Engine_HUD_DrawTexture_Param
	{
	public:

		struct UTexture* Texture; // 0x00(0x08)
		float ScreenX; // 0x08(0x04)
		float ScreenY; // 0x0c(0x04)
		float ScreenW; // 0x10(0x04)
		float ScreenH; // 0x14(0x04)
		float TextureU; // 0x18(0x04)
		float TextureV; // 0x1c(0x04)
		float TextureUWidth; // 0x20(0x04)
		float TextureVHeight; // 0x24(0x04)
		struct FLinearColor TintColor; // 0x28(0x10)
		enum class EBlendMode BlendMode; // 0x38(0x01)
		char pad_39[0x3]; // 0x39(0x03)
		float Scale; // 0x3c(0x04)
		bool bScalePosition; // 0x40(0x01)
		char pad_41[0x3]; // 0x41(0x03)
		float Rotation; // 0x44(0x04)
		struct FVector2D RotPivot; // 0x48(0x08)
	};

	struct Function_Engine_HUD_DrawText_Param
	{
	public:

		struct FString Text; // 0x00(0x10)
		struct FLinearColor TextColor; // 0x10(0x10)
		float ScreenX; // 0x20(0x04)
		float ScreenY; // 0x24(0x04)
		struct UFont* Font; // 0x28(0x08)
		float Scale; // 0x30(0x04)
		bool bScalePosition; // 0x34(0x01)
	};

	struct Function_Engine_HUD_DrawRect_Param
	{
	public:

		struct FLinearColor RectColor; // 0x00(0x10)
		float ScreenX; // 0x10(0x04)
		float ScreenY; // 0x14(0x04)
		float ScreenW; // 0x18(0x04)
		float ScreenH; // 0x1c(0x04)
	};

	struct Function_Engine_HUD_DrawMaterialTriangle_Param
	{
	public:

		struct UMaterialInterface* Material; // 0x00(0x08)
		struct FVector2D V0_Pos; // 0x08(0x08)
		struct FVector2D V1_Pos; // 0x10(0x08)
		struct FVector2D V2_Pos; // 0x18(0x08)
		struct FVector2D V0_UV; // 0x20(0x08)
		struct FVector2D V1_UV; // 0x28(0x08)
		struct FVector2D V2_UV; // 0x30(0x08)
		struct FLinearColor V0_Color; // 0x38(0x10)
		struct FLinearColor V1_Color; // 0x48(0x10)
		struct FLinearColor V2_Color; // 0x58(0x10)
	};

	struct Function_Engine_HUD_DrawMaterialSimple_Param
	{
	public:

		struct UMaterialInterface* Material; // 0x00(0x08)
		float ScreenX; // 0x08(0x04)
		float ScreenY; // 0x0c(0x04)
		float ScreenW; // 0x10(0x04)
		float ScreenH; // 0x14(0x04)
		float Scale; // 0x18(0x04)
		bool bScalePosition; // 0x1c(0x01)
	};

	struct Function_Engine_HUD_DrawMaterial_Param
	{
	public:

		struct UMaterialInterface* Material; // 0x00(0x08)
		float ScreenX; // 0x08(0x04)
		float ScreenY; // 0x0c(0x04)
		float ScreenW; // 0x10(0x04)
		float ScreenH; // 0x14(0x04)
		float MaterialU; // 0x18(0x04)
		float MaterialV; // 0x1c(0x04)
		float MaterialUWidth; // 0x20(0x04)
		float MaterialVHeight; // 0x24(0x04)
		float Scale; // 0x28(0x04)
		bool bScalePosition; // 0x2c(0x01)
		char pad_2D[0x3]; // 0x2d(0x03)
		float Rotation; // 0x30(0x04)
		struct FVector2D RotPivot; // 0x34(0x08)
	};

	struct Function_Engine_HUD_DrawLine_Param
	{
	public:

		float StartScreenX; // 0x00(0x04)
		float StartScreenY; // 0x04(0x04)
		float EndScreenX; // 0x08(0x04)
		float EndScreenY; // 0x0c(0x04)
		struct FLinearColor LineColor; // 0x10(0x10)
		float LineThickness; // 0x20(0x04)
	};

	struct Function_Engine_HUD_Deproject_Param
	{
	public:

		float ScreenX; // 0x00(0x04)
		float ScreenY; // 0x04(0x04)
		struct FVector WorldPosition; // 0x08(0x0c)
		struct FVector WorldDirection; // 0x14(0x0c)
	};

	struct Function_Engine_HUD_AddHitBox_Param
	{
	public:

		struct FVector2D Position; // 0x00(0x08)
		struct FVector2D size; // 0x08(0x08)
		struct FName InName; // 0x10(0x08)
		bool bConsumesInput; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		int32_t Priority; // 0x1c(0x04)
	};

	struct Function_Engine_HUD_AddDebugText_Param
	{
	public:

		struct FString DebugText; // 0x00(0x10)
		struct AActor* SrcActor; // 0x10(0x08)
		float Duration; // 0x18(0x04)
		struct FVector offset; // 0x1c(0x0c)
		struct FVector DesiredOffset; // 0x28(0x0c)
		struct FColor TextColor; // 0x34(0x04)
		bool bSkipOverwriteCheck; // 0x38(0x01)
		bool bAbsoluteLocation; // 0x39(0x01)
		bool bKeepAttachedToActor; // 0x3a(0x01)
		char pad_3B[0x5]; // 0x3b(0x05)
		struct UFont* InFont; // 0x40(0x08)
		float FontScale; // 0x48(0x04)
		bool bDrawShadow; // 0x4c(0x01)
	};

	struct Function_Engine_CameraActor_GetAutoActivatePlayerIndex_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_StaticMeshActor_SetMobility_Param
	{
	public:

		enum class EComponentMobility InMobility; // 0x00(0x01)
	};

	struct Function_Engine_PlayerCameraManager_StopCameraShake_Param
	{
	public:

		struct UCameraShake* ShakeInstance; // 0x00(0x08)
		bool bImmediately; // 0x08(0x01)
	};

	struct Function_Engine_PlayerCameraManager_StopCameraFade_Param
	{
	public:

	};

	struct Function_Engine_PlayerCameraManager_StopCameraAnimInst_Param
	{
	public:

		struct UCameraAnimInst* AnimInst; // 0x00(0x08)
		bool bImmediate; // 0x08(0x01)
	};

	struct Function_Engine_PlayerCameraManager_StopAllInstancesOfCameraShake_Param
	{
	public:

		struct UClass* Shake; // 0x00(0x08)
		bool bImmediately; // 0x08(0x01)
	};

	struct Function_Engine_PlayerCameraManager_StopAllInstancesOfCameraAnim_Param
	{
	public:

		struct UCameraAnim* Anim; // 0x00(0x08)
		bool bImmediate; // 0x08(0x01)
	};

	struct Function_Engine_PlayerCameraManager_StopAllCameraShakes_Param
	{
	public:

		bool bImmediately; // 0x00(0x01)
	};

	struct Function_Engine_PlayerCameraManager_StopAllCameraAnims_Param
	{
	public:

		bool bImmediate; // 0x00(0x01)
	};

	struct Function_Engine_PlayerCameraManager_StartCameraFade_Param
	{
	public:

		float FromAlpha; // 0x00(0x04)
		float ToAlpha; // 0x04(0x04)
		float Duration; // 0x08(0x04)
		struct FLinearColor Color; // 0x0c(0x10)
		bool bShouldFadeAudio; // 0x1c(0x01)
		bool bHoldWhenFinished; // 0x1d(0x01)
	};

	struct Function_Engine_PlayerCameraManager_SetManualCameraFade_Param
	{
	public:

		float InFadeAmount; // 0x00(0x04)
		struct FLinearColor Color; // 0x04(0x10)
		bool bInFadeAudio; // 0x14(0x01)
	};

	struct Function_Engine_PlayerCameraManager_SetGameCameraCutThisFrame_Param
	{
	public:

	};

	struct Function_Engine_PlayerCameraManager_RemoveCameraModifier_Param
	{
	public:

		struct UCameraModifier* ModifierToRemove; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_PlayerCameraManager_RemoveCameraLensEffect_Param
	{
	public:

		struct AEmitterCameraLensEffectBase* Emitter; // 0x00(0x08)
	};

	struct Function_Engine_PlayerCameraManager_PlayCameraShake_Param
	{
	public:

		struct UClass* ShakeClass; // 0x00(0x08)
		float Scale; // 0x08(0x04)
		enum class ECameraAnimPlaySpace PlaySpace; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FRotator UserPlaySpaceRot; // 0x10(0x0c)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UCameraShake* ReturnValue; // 0x20(0x08)
	};

	struct Function_Engine_PlayerCameraManager_PlayCameraAnim_Param
	{
	public:

		struct UCameraAnim* Anim; // 0x00(0x08)
		float Rate; // 0x08(0x04)
		float Scale; // 0x0c(0x04)
		float BlendInTime; // 0x10(0x04)
		float BlendOutTime; // 0x14(0x04)
		bool bLoop; // 0x18(0x01)
		bool bRandomStartTime; // 0x19(0x01)
		char pad_1A[0x2]; // 0x1a(0x02)
		float Duration; // 0x1c(0x04)
		enum class ECameraAnimPlaySpace PlaySpace; // 0x20(0x01)
		char pad_21[0x3]; // 0x21(0x03)
		struct FRotator UserPlaySpaceRot; // 0x24(0x0c)
		struct UCameraAnimInst* ReturnValue; // 0x30(0x08)
	};

	struct Function_Engine_PlayerCameraManager_PhotographyCameraModify_Param
	{
	public:

		struct FVector NewCameraLocation; // 0x00(0x0c)
		struct FVector PreviousCameraLocation; // 0x0c(0x0c)
		struct FVector OriginalCameraLocation; // 0x18(0x0c)
		struct FVector ResultCameraLocation; // 0x24(0x0c)
	};

	struct Function_Engine_PlayerCameraManager_OnPhotographySessionStart_Param
	{
	public:

	};

	struct Function_Engine_PlayerCameraManager_OnPhotographySessionEnd_Param
	{
	public:

	};

	struct Function_Engine_PlayerCameraManager_OnPhotographyMultiPartCaptureStart_Param
	{
	public:

	};

	struct Function_Engine_PlayerCameraManager_OnPhotographyMultiPartCaptureEnd_Param
	{
	public:

	};

	struct Function_Engine_PlayerCameraManager_GetOwningPlayerController_Param
	{
	public:

		struct APlayerController* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_PlayerCameraManager_GetFOVAngle_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_PlayerCameraManager_GetCameraRotation_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_PlayerCameraManager_GetCameraLocation_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_PlayerCameraManager_FindCameraModifierByClass_Param
	{
	public:

		struct UClass* ModifierClass; // 0x00(0x08)
		struct UCameraModifier* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_PlayerCameraManager_ClearCameraLensEffects_Param
	{
	public:

	};

	struct Function_Engine_PlayerCameraManager_BlueprintUpdateCamera_Param
	{
	public:

		struct AActor* CameraTarget; // 0x00(0x08)
		struct FVector NewCameraLocation; // 0x08(0x0c)
		struct FRotator NewCameraRotation; // 0x14(0x0c)
		float NewCameraFOV; // 0x20(0x04)
		bool ReturnValue; // 0x24(0x01)
	};

	struct Function_Engine_PlayerCameraManager_AddNewCameraModifier_Param
	{
	public:

		struct UClass* ModifierClass; // 0x00(0x08)
		struct UCameraModifier* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_PlayerCameraManager_AddCameraLensEffect_Param
	{
	public:

		struct UClass* LensEffectEmitterClass; // 0x00(0x08)
		struct AEmitterCameraLensEffectBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_SkeletalMeshActor_OnRep_ReplicatedPhysAsset_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshActor_OnRep_ReplicatedMesh_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshActor_OnRep_ReplicatedMaterial1_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshActor_OnRep_ReplicatedMaterial0_Param
	{
	public:

	};

	struct Function_Engine_Emitter_ToggleActive_Param
	{
	public:

	};

	struct Function_Engine_Emitter_SetVectorParameter_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct FVector Param; // 0x08(0x0c)
	};

	struct Function_Engine_Emitter_SetTemplate_Param
	{
	public:

		struct UParticleSystem* NewTemplate; // 0x00(0x08)
	};

	struct Function_Engine_Emitter_SetMaterialParameter_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct UMaterialInterface* Param; // 0x08(0x08)
	};

	struct Function_Engine_Emitter_SetFloatParameter_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		float Param; // 0x08(0x04)
	};

	struct Function_Engine_Emitter_SetColorParameter_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct FLinearColor Param; // 0x08(0x10)
	};

	struct Function_Engine_Emitter_SetActorParameter_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct AActor* Param; // 0x08(0x08)
	};

	struct Function_Engine_Emitter_OnRep_bCurrentlyActive_Param
	{
	public:

	};

	struct Function_Engine_Emitter_OnParticleSystemFinished_Param
	{
	public:

		struct UParticleSystemComponent* FinishedComponent; // 0x00(0x08)
	};

	struct Function_Engine_Emitter_IsActive_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Emitter_Deactivate_Param
	{
	public:

	};

	struct Function_Engine_Emitter_Activate_Param
	{
	public:

	};

	struct Function_Engine_DecalActor_SetDecalMaterial_Param
	{
	public:

		struct UMaterialInterface* NewDecalMaterial; // 0x00(0x08)
	};

	struct Function_Engine_DecalActor_GetDecalMaterial_Param
	{
	public:

		struct UMaterialInterface* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_DecalActor_CreateDynamicMaterialInstance_Param
	{
	public:

		struct UMaterialInstanceDynamic* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_AmbientSound_Stop_Param
	{
	public:

	};

	struct Function_Engine_AmbientSound_Play_Param
	{
	public:

		float StartTime; // 0x00(0x04)
	};

	struct Function_Engine_AmbientSound_FadeOut_Param
	{
	public:

		float FadeOutDuration; // 0x00(0x04)
		float FadeVolumeLevel; // 0x04(0x04)
	};

	struct Function_Engine_AmbientSound_FadeIn_Param
	{
	public:

		float FadeInDuration; // 0x00(0x04)
		float FadeVolumeLevel; // 0x04(0x04)
	};

	struct Function_Engine_AmbientSound_AdjustVolume_Param
	{
	public:

		float AdjustVolumeDuration; // 0x00(0x04)
		float AdjustVolumeLevel; // 0x04(0x04)
	};

	struct Function_Engine_Light_ToggleEnabled_Param
	{
	public:

	};

	struct Function_Engine_Light_SetLightFunctionScale_Param
	{
	public:

		struct FVector NewLightFunctionScale; // 0x00(0x0c)
	};

	struct Function_Engine_Light_SetLightFunctionMaterial_Param
	{
	public:

		struct UMaterialInterface* NewLightFunctionMaterial; // 0x00(0x08)
	};

	struct Function_Engine_Light_SetLightFunctionFadeDistance_Param
	{
	public:

		float NewLightFunctionFadeDistance; // 0x00(0x04)
	};

	struct Function_Engine_Light_SetLightColor_Param
	{
	public:

		struct FLinearColor NewLightColor; // 0x00(0x10)
	};

	struct Function_Engine_Light_SetEnabled_Param
	{
	public:

		bool bSetEnabled; // 0x00(0x01)
	};

	struct Function_Engine_Light_SetCastShadows_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_Light_SetBrightness_Param
	{
	public:

		float NewBrightness; // 0x00(0x04)
	};

	struct Function_Engine_Light_SetAffectTranslucentLighting_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_Light_OnRep_bEnabled_Param
	{
	public:

	};

	struct Function_Engine_Light_IsEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_Light_GetLightColor_Param
	{
	public:

		struct FLinearColor ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_Light_GetBrightness_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_LevelScriptActor_WorldOriginLocationChanged_Param
	{
	public:

		struct FIntVector OldOriginLocation; // 0x00(0x0c)
		struct FIntVector NewOriginLocation; // 0x0c(0x0c)
	};

	struct Function_Engine_LevelScriptActor_SetCinematicMode_Param
	{
	public:

		bool bCinematicMode; // 0x00(0x01)
		bool bHidePlayer; // 0x01(0x01)
		bool bAffectsHUD; // 0x02(0x01)
		bool bAffectsMovement; // 0x03(0x01)
		bool bAffectsTurning; // 0x04(0x01)
	};

	struct Function_Engine_LevelScriptActor_RemoteEvent_Param
	{
	public:

		struct FName EventName; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_LevelScriptActor_LevelReset_Param
	{
	public:

	};

	struct Function_Engine_MatineeActor_Stop_Param
	{
	public:

	};

	struct Function_Engine_MatineeActor_SetPosition_Param
	{
	public:

		float NewPosition; // 0x00(0x04)
		bool bJump; // 0x04(0x01)
	};

	struct Function_Engine_MatineeActor_SetLoopingState_Param
	{
	public:

		bool bNewLooping; // 0x00(0x01)
	};

	struct Function_Engine_MatineeActor_Reverse_Param
	{
	public:

	};

	struct Function_Engine_MatineeActor_Play_Param
	{
	public:

	};

	struct Function_Engine_MatineeActor_Pause_Param
	{
	public:

	};

	struct Function_Engine_MatineeActor_EnableGroupByName_Param
	{
	public:

		struct FString GroupName; // 0x00(0x10)
		bool bEnable; // 0x10(0x01)
	};

	struct Function_Engine_MatineeActor_ChangePlaybackDirection_Param
	{
	public:

	};

	struct Function_Engine_NZSkyBoxActor_SetSuspension_Param
	{
	public:

		bool bSuspended; // 0x00(0x01)
	};

	struct Function_Engine_NZSkyBoxActor_OnRep_bEnabled_Param
	{
	public:

	};

	struct Function_Engine_SceneComponent_ToggleVisibility_Param
	{
	public:

		bool bPropagateToChildren; // 0x00(0x01)
	};

	struct Function_Engine_SceneComponent_SnapTo_Param
	{
	public:

		struct USceneComponent* InParent; // 0x00(0x08)
		struct FName InSocketName; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_SceneComponent_SetWorldScale3D_Param
	{
	public:

		struct FVector NewScale; // 0x00(0x0c)
	};

	struct Function_Engine_SceneComponent_SetVisibility_Param
	{
	public:

		bool bNewVisibility; // 0x00(0x01)
		bool bPropagateToChildren; // 0x01(0x01)
	};

	struct Function_Engine_SceneComponent_SetShouldUpdatePhysicsVolume_Param
	{
	public:

		bool bInShouldUpdatePhysicsVolume; // 0x00(0x01)
	};

	struct Function_Engine_SceneComponent_SetRelativeScale3D_Param
	{
	public:

		struct FVector NewScale3D; // 0x00(0x0c)
	};

	struct Function_Engine_SceneComponent_SetMobility_Param
	{
	public:

		enum class EComponentMobility NewMobility; // 0x00(0x01)
	};

	struct Function_Engine_SceneComponent_SetHiddenInGame_Param
	{
	public:

		bool NewHidden; // 0x00(0x01)
		bool bPropagateToChildren; // 0x01(0x01)
	};

	struct Function_Engine_SceneComponent_SetAbsolute_Param
	{
	public:

		bool bNewAbsoluteLocation; // 0x00(0x01)
		bool bNewAbsoluteRotation; // 0x01(0x01)
		bool bNewAbsoluteScale; // 0x02(0x01)
	};

	struct Function_Engine_SceneComponent_ResetRelativeTransform_Param
	{
	public:

	};

	struct Function_Engine_SceneComponent_OnRep_Visibility_Param
	{
	public:

		bool OldValue; // 0x00(0x01)
	};

	struct Function_Engine_SceneComponent_OnRep_Transform_Param
	{
	public:

	};

	struct Function_Engine_SceneComponent_OnRep_AttachSocketName_Param
	{
	public:

	};

	struct Function_Engine_SceneComponent_OnRep_AttachParent_Param
	{
	public:

	};

	struct Function_Engine_SceneComponent_OnRep_AttachChildren_Param
	{
	public:

	};

	struct Function_Engine_SceneComponent_K2_SetWorldTransform_Param
	{
	public:

		struct FTransform NewTransform; // 0x00(0x30)
		bool bSweep; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FHitResult SweepHitResult; // 0x34(0x88)
		bool bTeleport; // 0xbc(0x01)
	};

	struct Function_Engine_SceneComponent_K2_SetWorldRotation_Param
	{
	public:

		struct FRotator NewRotation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_SceneComponent_K2_SetWorldLocationAndRotation_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
		struct FRotator NewRotation; // 0x0c(0x0c)
		bool bSweep; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		struct FHitResult SweepHitResult; // 0x1c(0x88)
		bool bTeleport; // 0xa4(0x01)
	};

	struct Function_Engine_SceneComponent_K2_SetWorldLocation_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_SceneComponent_K2_SetRelativeTransform_Param
	{
	public:

		struct FTransform NewTransform; // 0x00(0x30)
		bool bSweep; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FHitResult SweepHitResult; // 0x34(0x88)
		bool bTeleport; // 0xbc(0x01)
	};

	struct Function_Engine_SceneComponent_K2_SetRelativeRotation_Param
	{
	public:

		struct FRotator NewRotation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_SceneComponent_K2_SetRelativeLocationAndRotation_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
		struct FRotator NewRotation; // 0x0c(0x0c)
		bool bSweep; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		struct FHitResult SweepHitResult; // 0x1c(0x88)
		bool bTeleport; // 0xa4(0x01)
	};

	struct Function_Engine_SceneComponent_K2_SetRelativeLocation_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_SceneComponent_K2_GetComponentToWorld_Param
	{
	public:

		struct FTransform ReturnValue; // 0x00(0x30)
	};

	struct Function_Engine_SceneComponent_K2_GetComponentScale_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SceneComponent_K2_GetComponentRotation_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SceneComponent_K2_GetComponentLocation_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SceneComponent_K2_DetachFromComponent_Param
	{
	public:

		enum class EDetachmentRule LocationRule; // 0x00(0x01)
		enum class EDetachmentRule RotationRule; // 0x01(0x01)
		enum class EDetachmentRule ScaleRule; // 0x02(0x01)
		bool bCallModify; // 0x03(0x01)
	};

	struct Function_Engine_SceneComponent_K2_AttachToComponent_Param
	{
	public:

		struct USceneComponent* Parent; // 0x00(0x08)
		struct FName SocketName; // 0x08(0x08)
		enum class EAttachmentRule LocationRule; // 0x10(0x01)
		enum class EAttachmentRule RotationRule; // 0x11(0x01)
		enum class EAttachmentRule ScaleRule; // 0x12(0x01)
		bool bWeldSimulatedBodies; // 0x13(0x01)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_SceneComponent_K2_AttachTo_Param
	{
	public:

		struct USceneComponent* InParent; // 0x00(0x08)
		struct FName InSocketName; // 0x08(0x08)
		enum class EAttachLocation AttachType; // 0x10(0x01)
		bool bWeldSimulatedBodies; // 0x11(0x01)
		bool ReturnValue; // 0x12(0x01)
	};

	struct Function_Engine_SceneComponent_K2_AddWorldTransform_Param
	{
	public:

		struct FTransform DeltaTransform; // 0x00(0x30)
		bool bSweep; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FHitResult SweepHitResult; // 0x34(0x88)
		bool bTeleport; // 0xbc(0x01)
	};

	struct Function_Engine_SceneComponent_K2_AddWorldRotation_Param
	{
	public:

		struct FRotator DeltaRotation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_SceneComponent_K2_AddWorldOffset_Param
	{
	public:

		struct FVector DeltaLocation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_SceneComponent_K2_AddRelativeRotation_Param
	{
	public:

		struct FRotator DeltaRotation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_SceneComponent_K2_AddRelativeLocation_Param
	{
	public:

		struct FVector DeltaLocation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_SceneComponent_K2_AddLocalTransform_Param
	{
	public:

		struct FTransform DeltaTransform; // 0x00(0x30)
		bool bSweep; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FHitResult SweepHitResult; // 0x34(0x88)
		bool bTeleport; // 0xbc(0x01)
	};

	struct Function_Engine_SceneComponent_K2_AddLocalRotation_Param
	{
	public:

		struct FRotator DeltaRotation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_SceneComponent_K2_AddLocalOffset_Param
	{
	public:

		struct FVector DeltaLocation; // 0x00(0x0c)
		bool bSweep; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FHitResult SweepHitResult; // 0x10(0x88)
		bool bTeleport; // 0x98(0x01)
	};

	struct Function_Engine_SceneComponent_IsVisible_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SceneComponent_IsSimulatingPhysics_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_SceneComponent_IsAnySimulatingPhysics_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SceneComponent_GetUpVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SceneComponent_GetSocketTransform_Param
	{
	public:

		struct FName InSocketName; // 0x00(0x08)
		enum class ERelativeTransformSpace TransformSpace; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_Engine_SceneComponent_GetSocketRotation_Param
	{
	public:

		struct FName InSocketName; // 0x00(0x08)
		struct FRotator ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SceneComponent_GetSocketQuaternion_Param
	{
	public:

		struct FName InSocketName; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FQuat ReturnValue; // 0x10(0x10)
	};

	struct Function_Engine_SceneComponent_GetSocketLocation_Param
	{
	public:

		struct FName InSocketName; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SceneComponent_GetShouldUpdatePhysicsVolume_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SceneComponent_GetRightVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SceneComponent_GetRelativeTransform_Param
	{
	public:

		struct FTransform ReturnValue; // 0x00(0x30)
	};

	struct Function_Engine_SceneComponent_GetPhysicsVolume_Param
	{
	public:

		struct APhysicsVolume* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SceneComponent_GetParentComponents_Param
	{
	public:

		struct TArray<struct USceneComponent*> Parents; // 0x00(0x10)
	};

	struct Function_Engine_SceneComponent_GetNumChildrenComponents_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SceneComponent_GetForwardVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SceneComponent_GetComponentVelocity_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SceneComponent_GetChildrenComponents_Param
	{
	public:

		bool bIncludeAllDescendants; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct TArray<struct USceneComponent*> Children; // 0x08(0x10)
	};

	struct Function_Engine_SceneComponent_GetChildComponent_Param
	{
	public:

		int32_t ChildIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct USceneComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_SceneComponent_GetAttachSocketName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SceneComponent_GetAttachParent_Param
	{
	public:

		struct USceneComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SceneComponent_GetAllSocketNames_Param
	{
	public:

		struct TArray<struct FName> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_SceneComponent_DoesSocketExist_Param
	{
	public:

		struct FName InSocketName; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_SceneComponent_DetachFromParent_Param
	{
	public:

		bool bMaintainWorldPosition; // 0x00(0x01)
		bool bCallModify; // 0x01(0x01)
	};

	struct Function_Engine_MovementComponent_StopMovementImmediately_Param
	{
	public:

	};

	struct Function_Engine_MovementComponent_SnapUpdatedComponentToPlane_Param
	{
	public:

	};

	struct Function_Engine_MovementComponent_SetUpdatedComponent_Param
	{
	public:

		struct USceneComponent* NewUpdatedComponent; // 0x00(0x08)
	};

	struct Function_Engine_MovementComponent_SetPlaneConstraintOrigin_Param
	{
	public:

		struct FVector PlaneOrigin; // 0x00(0x0c)
	};

	struct Function_Engine_MovementComponent_SetPlaneConstraintNormal_Param
	{
	public:

		struct FVector PlaneNormal; // 0x00(0x0c)
	};

	struct Function_Engine_MovementComponent_SetPlaneConstraintFromVectors_Param
	{
	public:

		struct FVector Forward; // 0x00(0x0c)
		struct FVector Up; // 0x0c(0x0c)
	};

	struct Function_Engine_MovementComponent_SetPlaneConstraintEnabled_Param
	{
	public:

		bool bEnabled; // 0x00(0x01)
	};

	struct Function_Engine_MovementComponent_SetPlaneConstraintAxisSetting_Param
	{
	public:

		enum class EPlaneConstraintAxisSetting NewAxisSetting; // 0x00(0x01)
	};

	struct Function_Engine_MovementComponent_PhysicsVolumeChanged_Param
	{
	public:

		struct APhysicsVolume* NewVolume; // 0x00(0x08)
	};

	struct Function_Engine_MovementComponent_K2_MoveUpdatedComponent_Param
	{
	public:

		struct FVector Delta; // 0x00(0x0c)
		struct FRotator NewRotation; // 0x0c(0x0c)
		struct FHitResult OutHit; // 0x18(0x88)
		bool bSweep; // 0xa0(0x01)
		bool bTeleport; // 0xa1(0x01)
		bool ReturnValue; // 0xa2(0x01)
	};

	struct Function_Engine_MovementComponent_K2_GetModifiedMaxSpeed_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_MovementComponent_K2_GetMaxSpeedModifier_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_MovementComponent_IsExceedingMaxSpeed_Param
	{
	public:

		float MaxSpeed; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_Engine_MovementComponent_GetPlaneConstraintOrigin_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_MovementComponent_GetPlaneConstraintNormal_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_MovementComponent_GetPlaneConstraintAxisSetting_Param
	{
	public:

		enum class EPlaneConstraintAxisSetting ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_MovementComponent_GetPhysicsVolume_Param
	{
	public:

		struct APhysicsVolume* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_MovementComponent_GetMaxSpeed_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_MovementComponent_GetGravityZ_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_MovementComponent_ConstrainNormalToPlane_Param
	{
	public:

		struct FVector Normal; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_MovementComponent_ConstrainLocationToPlane_Param
	{
	public:

		struct FVector Location; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_MovementComponent_ConstrainDirectionToPlane_Param
	{
	public:

		struct FVector Direction; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_PhysicalAnimationComponent_SetStrengthMultiplyer_Param
	{
	public:

		float InStrengthMultiplyer; // 0x00(0x04)
	};

	struct Function_Engine_PhysicalAnimationComponent_SetSkeletalMeshComponent_Param
	{
	public:

		struct USkeletalMeshComponent* InSkeletalMeshComponent; // 0x00(0x08)
	};

	struct Function_Engine_PhysicalAnimationComponent_GetBodyTargetTransform_Param
	{
	public:

		struct FName BodyName; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_Engine_PhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Param
	{
	public:

		struct FName BodyName; // 0x00(0x08)
		struct FPhysicalAnimationData PhysicalAnimationData; // 0x08(0x24)
		bool bIncludeSelf; // 0x2c(0x01)
	};

	struct Function_Engine_PhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Param
	{
	public:

		struct FName BodyName; // 0x00(0x08)
		struct FPhysicalAnimationData PhysicalAnimationData; // 0x08(0x24)
	};

	struct Function_Engine_PhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Param
	{
	public:

		struct FName BodyName; // 0x00(0x08)
		struct FName ProfileName; // 0x08(0x08)
		bool bIncludeSelf; // 0x10(0x01)
		bool bClearNotFound; // 0x11(0x01)
	};

	struct Function_Engine_InputComponent_WasControllerKeyJustReleased_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_InputComponent_WasControllerKeyJustPressed_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_InputComponent_IsControllerKeyDown_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_InputComponent_GetTouchState_Param
	{
	public:

		int32_t FingerIndex; // 0x00(0x04)
		float LocationX; // 0x04(0x04)
		float LocationY; // 0x08(0x04)
		bool bIsCurrentlyPressed; // 0x0c(0x01)
	};

	struct Function_Engine_InputComponent_GetControllerVectorKeyState_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_InputComponent_GetControllerMouseDelta_Param
	{
	public:

		float DeltaX; // 0x00(0x04)
		float DeltaY; // 0x04(0x04)
	};

	struct Function_Engine_InputComponent_GetControllerKeyTimeDown_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_InputComponent_GetControllerAnalogStickState_Param
	{
	public:

		enum class EControllerAnalogStick WhichStick; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float StickX; // 0x04(0x04)
		float StickY; // 0x08(0x04)
	};

	struct Function_Engine_InputComponent_GetControllerAnalogKeyState_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_PawnNoiseEmitterComponent_MakeNoise_Param
	{
	public:

		struct AActor* NoiseMaker; // 0x00(0x08)
		float Loudness; // 0x08(0x04)
		struct FVector NoiseLocation; // 0x0c(0x0c)
	};

	struct Function_Engine_PhysicsHandleComponent_SetTargetRotation_Param
	{
	public:

		struct FRotator NewRotation; // 0x00(0x0c)
	};

	struct Function_Engine_PhysicsHandleComponent_SetTargetLocationAndRotation_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
		struct FRotator NewRotation; // 0x0c(0x0c)
	};

	struct Function_Engine_PhysicsHandleComponent_SetTargetLocation_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
	};

	struct Function_Engine_PhysicsHandleComponent_SetLinearStiffness_Param
	{
	public:

		float NewLinearStiffness; // 0x00(0x04)
	};

	struct Function_Engine_PhysicsHandleComponent_SetLinearDamping_Param
	{
	public:

		float NewLinearDamping; // 0x00(0x04)
	};

	struct Function_Engine_PhysicsHandleComponent_SetInterpolationSpeed_Param
	{
	public:

		float NewInterpolationSpeed; // 0x00(0x04)
	};

	struct Function_Engine_PhysicsHandleComponent_SetAngularStiffness_Param
	{
	public:

		float NewAngularStiffness; // 0x00(0x04)
	};

	struct Function_Engine_PhysicsHandleComponent_SetAngularDamping_Param
	{
	public:

		float NewAngularDamping; // 0x00(0x04)
	};

	struct Function_Engine_PhysicsHandleComponent_ReleaseComponent_Param
	{
	public:

	};

	struct Function_Engine_PhysicsHandleComponent_GrabComponentAtLocationWithRotation_Param
	{
	public:

		struct UPrimitiveComponent* Component; // 0x00(0x08)
		struct FName InBoneName; // 0x08(0x08)
		struct FVector Location; // 0x10(0x0c)
		struct FRotator Rotation; // 0x1c(0x0c)
	};

	struct Function_Engine_PhysicsHandleComponent_GrabComponentAtLocation_Param
	{
	public:

		struct UPrimitiveComponent* Component; // 0x00(0x08)
		struct FName InBoneName; // 0x08(0x08)
		struct FVector GrabLocation; // 0x10(0x0c)
	};

	struct Function_Engine_PhysicsHandleComponent_GrabComponent_Param
	{
	public:

		struct UPrimitiveComponent* Component; // 0x00(0x08)
		struct FName InBoneName; // 0x08(0x08)
		struct FVector GrabLocation; // 0x10(0x0c)
		bool bConstrainRotation; // 0x1c(0x01)
	};

	struct Function_Engine_PhysicsHandleComponent_GetTargetLocationAndRotation_Param
	{
	public:

		struct FVector TargetLocation; // 0x00(0x0c)
		struct FRotator TargetRotation; // 0x0c(0x0c)
	};

	struct Function_Engine_PhysicsHandleComponent_GetGrabbedComponent_Param
	{
	public:

		struct UPrimitiveComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_PlatformEventsComponent_SupportsConvertibleLaptops_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct DelegateFunction_Engine_PlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Param
	{
	public:

	};

	struct Function_Engine_PlatformEventsComponent_IsInTabletMode_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PlatformEventsComponent_IsInLaptopMode_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_TimelineComponent_Stop_Param
	{
	public:

	};

	struct Function_Engine_TimelineComponent_SetVectorCurve_Param
	{
	public:

		struct UCurveVector* NewVectorCurve; // 0x00(0x08)
		struct FName VectorTrackName; // 0x08(0x08)
	};

	struct Function_Engine_TimelineComponent_SetTimelineLengthMode_Param
	{
	public:

		enum class ETimelineLengthMode NewLengthMode; // 0x00(0x01)
	};

	struct Function_Engine_TimelineComponent_SetTimelineLength_Param
	{
	public:

		float NewLength; // 0x00(0x04)
	};

	struct Function_Engine_TimelineComponent_SetPlayRate_Param
	{
	public:

		float NewRate; // 0x00(0x04)
	};

	struct Function_Engine_TimelineComponent_SetPlaybackPosition_Param
	{
	public:

		float NewPosition; // 0x00(0x04)
		bool bFireEvents; // 0x04(0x01)
		bool bFireUpdate; // 0x05(0x01)
	};

	struct Function_Engine_TimelineComponent_SetNewTime_Param
	{
	public:

		float NewTime; // 0x00(0x04)
	};

	struct Function_Engine_TimelineComponent_SetLooping_Param
	{
	public:

		bool bNewLooping; // 0x00(0x01)
	};

	struct Function_Engine_TimelineComponent_SetLinearColorCurve_Param
	{
	public:

		struct UCurveLinearColor* NewLinearColorCurve; // 0x00(0x08)
		struct FName LinearColorTrackName; // 0x08(0x08)
	};

	struct Function_Engine_TimelineComponent_SetIgnoreTimeDilation_Param
	{
	public:

		bool bNewIgnoreTimeDilation; // 0x00(0x01)
	};

	struct Function_Engine_TimelineComponent_SetFloatCurve_Param
	{
	public:

		struct UCurveFloat* NewFloatCurve; // 0x00(0x08)
		struct FName FloatTrackName; // 0x08(0x08)
	};

	struct Function_Engine_TimelineComponent_ReverseFromEnd_Param
	{
	public:

	};

	struct Function_Engine_TimelineComponent_Reverse_Param
	{
	public:

	};

	struct Function_Engine_TimelineComponent_PlayFromStart_Param
	{
	public:

	};

	struct Function_Engine_TimelineComponent_Play_Param
	{
	public:

	};

	struct Function_Engine_TimelineComponent_OnRep_Timeline_Param
	{
	public:

	};

	struct Function_Engine_TimelineComponent_IsReversing_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_TimelineComponent_IsPlaying_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_TimelineComponent_IsLooping_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_TimelineComponent_GetTimelineLength_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_TimelineComponent_GetPlayRate_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_TimelineComponent_GetPlaybackPosition_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_TimelineComponent_GetIgnoreTimeDilation_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_VOIPTalker_RegisterWithPlayerState_Param
	{
	public:

		struct APlayerState* OwningState; // 0x00(0x08)
	};

	struct Function_Engine_VOIPTalker_GetVoiceLevel_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_VOIPTalker_CreateTalkerForPlayer_Param
	{
	public:

		struct APlayerState* OwningState; // 0x00(0x08)
		struct UVOIPTalker* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_VOIPTalker_BPOnTalkingEnd_Param
	{
	public:

	};

	struct Function_Engine_VOIPTalker_BPOnTalkingBegin_Param
	{
	public:

		struct UAudioComponent* AudioComponent; // 0x00(0x08)
	};

	struct Function_Engine_AsyncActionHandleSaveGame_AsyncSaveGameToSlot_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct USaveGame* SaveGameObject; // 0x08(0x08)
		struct FString SlotName; // 0x10(0x10)
		int32_t UserIndex; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct UAsyncActionHandleSaveGame* ReturnValue; // 0x28(0x08)
	};

	struct Function_Engine_AsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FString SlotName; // 0x08(0x10)
		int32_t UserIndex; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UAsyncActionHandleSaveGame* ReturnValue; // 0x20(0x08)
	};

	struct Function_Engine_StaticMesh_SetStaticMaterials_Param
	{
	public:

		struct TArray<struct FStaticMaterial> InStaticMaterials; // 0x00(0x10)
	};

	struct Function_Engine_StaticMesh_RemoveSocket_Param
	{
	public:

		struct UStaticMeshSocket* Socket; // 0x00(0x08)
	};

	struct Function_Engine_StaticMesh_GetStaticMaterials_Param
	{
	public:

		struct TArray<struct FStaticMaterial> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_StaticMesh_GetNumSections_Param
	{
	public:

		int32_t inLOD; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_StaticMesh_GetNumLODs_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_StaticMesh_GetMinimumLODForPlatforms_Param
	{
	public:

		struct TMap<struct FName, int32_t> PlatformMinimumLODs; // 0x00(0x50)
	};

	struct Function_Engine_StaticMesh_GetMinimumLODForPlatform_Param
	{
	public:

		struct FName PlatformName; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_StaticMesh_GetMaterialIndex_Param
	{
	public:

		struct FName MaterialSlotName; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_StaticMesh_GetMaterial_Param
	{
	public:

		int32_t MaterialIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UMaterialInterface* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_StaticMesh_GetBounds_Param
	{
	public:

		struct FBoxSphereBounds ReturnValue; // 0x00(0x1c)
	};

	struct Function_Engine_StaticMesh_GetBoundingBox_Param
	{
	public:

		struct FBox ReturnValue; // 0x00(0x1c)
	};

	struct Function_Engine_StaticMesh_FindSocket_Param
	{
	public:

		struct FName InSocketName; // 0x00(0x08)
		struct UStaticMeshSocket* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_StaticMesh_CreateStaticMeshDescription_Param
	{
	public:

		struct UObject* Outer; // 0x00(0x08)
		struct UStaticMeshDescription* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_StaticMesh_BuildFromStaticMeshDescriptions_Param
	{
	public:

		struct TArray<struct UStaticMeshDescription*> StaticMeshDescriptions; // 0x00(0x10)
	};

	struct Function_Engine_StaticMesh_AddSocket_Param
	{
	public:

		struct UStaticMeshSocket* Socket; // 0x00(0x08)
	};

	struct Function_Engine_StaticMesh_AddMaterial_Param
	{
	public:

		struct UMaterialInterface* Material; // 0x00(0x08)
		struct FName ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_SkeletalMesh_SetLODSettings_Param
	{
	public:

		struct USkeletalMeshLODSettings* InLODSettings; // 0x00(0x08)
	};

	struct Function_Engine_SkeletalMesh_NumSockets_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMesh_K2_GetAllMorphTargetNames_Param
	{
	public:

		struct TArray<struct FString> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_SkeletalMesh_IsSectionUsingCloth_Param
	{
	public:

		int32_t InSectionIndex; // 0x00(0x04)
		bool bCheckCorrespondingSections; // 0x04(0x01)
		bool ReturnValue; // 0x05(0x01)
	};

	struct Function_Engine_SkeletalMesh_GetSocketByIndex_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct USkeletalMeshSocket* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_SkeletalMesh_GetNodeMappingContainer_Param
	{
	public:

		struct UBlueprint* SourceAsset; // 0x00(0x08)
		struct UNodeMappingContainer* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_SkeletalMesh_GetImportedBounds_Param
	{
	public:

		struct FBoxSphereBounds ReturnValue; // 0x00(0x1c)
	};

	struct Function_Engine_SkeletalMesh_GetBounds_Param
	{
	public:

		struct FBoxSphereBounds ReturnValue; // 0x00(0x1c)
	};

	struct Function_Engine_SkeletalMesh_FindSocketInfo_Param
	{
	public:

		struct FName InSocketName; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform OutTransform; // 0x10(0x30)
		int32_t OutBoneIndex; // 0x40(0x04)
		int32_t OutIndex; // 0x44(0x04)
		struct USkeletalMeshSocket* ReturnValue; // 0x48(0x08)
	};

	struct Function_Engine_SkeletalMesh_FindSocketAndIndex_Param
	{
	public:

		struct FName InSocketName; // 0x00(0x08)
		int32_t OutIndex; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct USkeletalMeshSocket* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_SkeletalMesh_FindSocket_Param
	{
	public:

		struct FName InSocketName; // 0x00(0x08)
		struct USkeletalMeshSocket* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_LevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Param
	{
	public:

	};

	struct Function_Engine_LevelStreamingDynamic_LoadLevelInstance_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FString LevelName; // 0x08(0x10)
		struct FVector Location; // 0x18(0x0c)
		struct FRotator Rotation; // 0x24(0x0c)
		bool bOutSuccess; // 0x30(0x01)
		char pad_31[0x7]; // 0x31(0x07)
		struct ULevelStreamingDynamic* ReturnValue; // 0x38(0x08)
	};

	struct Function_Engine_AnimNotifyState_Trail_OverridePSTemplate_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		struct UAnimSequenceBase* Animation; // 0x08(0x08)
		struct UParticleSystem* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_AnimSingleNodeInstance_StopAnim_Param
	{
	public:

	};

	struct Function_Engine_AnimSingleNodeInstance_SetReverse_Param
	{
	public:

		bool bInReverse; // 0x00(0x01)
	};

	struct Function_Engine_AnimSingleNodeInstance_SetPreviewCurveOverride_Param
	{
	public:

		struct FName PoseName; // 0x00(0x08)
		float Value; // 0x08(0x04)
		bool bRemoveIfZero; // 0x0c(0x01)
	};

	struct Function_Engine_AnimSingleNodeInstance_SetPositionWithPreviousTime_Param
	{
	public:

		float InPosition; // 0x00(0x04)
		float InPreviousTime; // 0x04(0x04)
		bool bFireNotifies; // 0x08(0x01)
	};

	struct Function_Engine_AnimSingleNodeInstance_SetPosition_Param
	{
	public:

		float InPosition; // 0x00(0x04)
		bool bFireNotifies; // 0x04(0x01)
	};

	struct Function_Engine_AnimSingleNodeInstance_SetPlayRate_Param
	{
	public:

		float InPlayRate; // 0x00(0x04)
	};

	struct Function_Engine_AnimSingleNodeInstance_SetPlaying_Param
	{
	public:

		bool bIsPlaying; // 0x00(0x01)
	};

	struct Function_Engine_AnimSingleNodeInstance_SetLooping_Param
	{
	public:

		bool bIsLooping; // 0x00(0x01)
	};

	struct Function_Engine_AnimSingleNodeInstance_SetBlendSpaceInput_Param
	{
	public:

		struct FVector InBlendInput; // 0x00(0x0c)
	};

	struct Function_Engine_AnimSingleNodeInstance_SetAnimationAsset_Param
	{
	public:

		struct UAnimationAsset* NewAsset; // 0x00(0x08)
		bool bIsLooping; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		float InPlayRate; // 0x0c(0x04)
	};

	struct Function_Engine_AnimSingleNodeInstance_PlayAnim_Param
	{
	public:

		bool bIsLooping; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float InPlayRate; // 0x04(0x04)
		float InStartPosition; // 0x08(0x04)
	};

	struct Function_Engine_AnimSingleNodeInstance_GetLength_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_AnimSingleNodeInstance_GetAnimationAsset_Param
	{
	public:

		struct UAnimationAsset* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_GameViewportClient_SSSwapControllers_Param
	{
	public:

	};

	struct Function_Engine_GameViewportClient_ShowTitleSafeArea_Param
	{
	public:

	};

	struct Function_Engine_GameViewportClient_SetConsoleTarget_Param
	{
	public:

		int32_t PlayerIndex; // 0x00(0x04)
	};

	struct Function_Engine_AnimSequenceBase_GetPlayLength_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_TwitterIntegrationBase_TwitterRequest_Param
	{
	public:

		struct FString URL; // 0x00(0x10)
		struct TArray<struct FString> ParamKeysAndValues; // 0x10(0x10)
		enum class ETwitterRequestMethod RequestMethod; // 0x20(0x01)
		char pad_21[0x3]; // 0x21(0x03)
		int32_t AccountIndex; // 0x24(0x04)
		bool ReturnValue; // 0x28(0x01)
	};

	struct Function_Engine_TwitterIntegrationBase_ShowTweetUI_Param
	{
	public:

		struct FString InitialMessage; // 0x00(0x10)
		struct FString URL; // 0x10(0x10)
		struct FString Picture; // 0x20(0x10)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_Engine_TwitterIntegrationBase_Init_Param
	{
	public:

	};

	struct Function_Engine_TwitterIntegrationBase_GetNumAccounts_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_TwitterIntegrationBase_GetAccountName_Param
	{
	public:

		int32_t AccountIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_TwitterIntegrationBase_CanShowTweetUI_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_TwitterIntegrationBase_AuthorizeAccounts_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_CurveFloat_GetFloatValue_Param
	{
	public:

		float InTime; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_CurveLinearColor_GetLinearColorValue_Param
	{
	public:

		float InTime; // 0x00(0x04)
		struct FLinearColor ReturnValue; // 0x04(0x10)
	};

	struct Function_Engine_CurveLinearColor_GetClampedLinearColorValue_Param
	{
	public:

		float InTime; // 0x00(0x04)
		struct FLinearColor ReturnValue; // 0x04(0x10)
	};

	struct Function_Engine_CurveVector_GetVectorValue_Param
	{
	public:

		float InTime; // 0x00(0x04)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_ParticleSystem_WillBecomeZombie_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_ParticleSystem_IsLooping_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_ParticleSystem_IsImmortal_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_ParticleSystem_ContainsEmitterType_Param
	{
	public:

		struct UClass* TypeData; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_SystemTimeTimecodeProvider_SetFrameRate_Param
	{
	public:

		struct FFrameRate InFrameRate; // 0x00(0x08)
	};

	struct Function_Engine_WorldSettings_OnRep_WorldGravityZ_Param
	{
	public:

	};

	struct Function_Engine_WorldSettings_IsEnableLightmapShareLOD_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_WorldSettings_DoDelayActorBeginPlay_Param
	{
	public:

	};

	struct Function_Engine_GameModeBase_StartPlay_Param
	{
	public:

	};

	struct Function_Engine_GameModeBase_SpawnDefaultPawnFor_Param
	{
	public:

		struct AController* NewPlayer; // 0x00(0x08)
		struct AActor* StartSpot; // 0x08(0x08)
		struct APawn* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_GameModeBase_SpawnDefaultPawnAtTransform_Param
	{
	public:

		struct AController* NewPlayer; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform SpawnTransform; // 0x10(0x30)
		struct APawn* ReturnValue; // 0x40(0x08)
	};

	struct Function_Engine_GameModeBase_ShouldReset_Param
	{
	public:

		struct AActor* ActorToReset; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_GameModeBase_ReturnToMainMenuHost_Param
	{
	public:

	};

	struct Function_Engine_GameModeBase_RestartPlayerAtTransform_Param
	{
	public:

		struct AController* NewPlayer; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform SpawnTransform; // 0x10(0x30)
	};

	struct Function_Engine_GameModeBase_RestartPlayerAtPlayerStart_Param
	{
	public:

		struct AController* NewPlayer; // 0x00(0x08)
		struct AActor* StartSpot; // 0x08(0x08)
	};

	struct Function_Engine_GameModeBase_RestartPlayer_Param
	{
	public:

		struct AController* NewPlayer; // 0x00(0x08)
	};

	struct Function_Engine_GameModeBase_ResetLevel_Param
	{
	public:

	};

	struct Function_Engine_GameModeBase_PlayerCanRestart_Param
	{
	public:

		struct APlayerController* Player; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_GameModeBase_MustSpectate_Param
	{
	public:

		struct APlayerController* NewPlayerController; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_GameModeBase_K2_PostLogin_Param
	{
	public:

		struct APlayerController* NewPlayer; // 0x00(0x08)
	};

	struct Function_Engine_GameModeBase_K2_OnSwapPlayerControllers_Param
	{
	public:

		struct APlayerController* OldPC; // 0x00(0x08)
		struct APlayerController* NewPC; // 0x08(0x08)
	};

	struct Function_Engine_GameModeBase_K2_OnRestartPlayer_Param
	{
	public:

		struct AController* NewPlayer; // 0x00(0x08)
	};

	struct Function_Engine_GameModeBase_K2_OnLogout_Param
	{
	public:

		struct AController* ExitingController; // 0x00(0x08)
	};

	struct Function_Engine_GameModeBase_K2_OnChangeName_Param
	{
	public:

		struct AController* Other; // 0x00(0x08)
		struct FString NewName; // 0x08(0x10)
		bool bNameChange; // 0x18(0x01)
	};

	struct Function_Engine_GameModeBase_K2_FindPlayerStart_Param
	{
	public:

		struct AController* Player; // 0x00(0x08)
		struct FString IncomingName; // 0x08(0x10)
		struct AActor* ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_GameModeBase_InitStartSpot_Param
	{
	public:

		struct AActor* StartSpot; // 0x00(0x08)
		struct AController* NewPlayer; // 0x08(0x08)
	};

	struct Function_Engine_GameModeBase_InitializeHUDForPlayer_Param
	{
	public:

		struct APlayerController* NewPlayer; // 0x00(0x08)
	};

	struct Function_Engine_GameModeBase_HasMatchStarted_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameModeBase_HandleStartingNewPlayer_Param
	{
	public:

		struct APlayerController* NewPlayer; // 0x00(0x08)
	};

	struct Function_Engine_GameModeBase_GetNumSpectators_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameModeBase_GetNumPlayers_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameModeBase_GetDefaultPawnClassForController_Param
	{
	public:

		struct AController* InController; // 0x00(0x08)
		struct UClass* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_GameModeBase_FindPlayerStart_Param
	{
	public:

		struct AController* Player; // 0x00(0x08)
		struct FString IncomingName; // 0x08(0x10)
		struct AActor* ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_GameModeBase_ChoosePlayerStart_Param
	{
	public:

		struct AController* Player; // 0x00(0x08)
		struct AActor* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_GameModeBase_ChangeName_Param
	{
	public:

		struct AController* Controller; // 0x00(0x08)
		struct FString NewName; // 0x08(0x10)
		bool bNameChange; // 0x18(0x01)
	};

	struct Function_Engine_GameModeBase_CanSpectate_Param
	{
	public:

		struct APlayerController* Viewer; // 0x00(0x08)
		struct APlayerState* ViewTarget; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_GameStateBase_OnRep_SpectatorClass_Param
	{
	public:

	};

	struct Function_Engine_GameStateBase_OnRep_ReplicatedWorldTimeSeconds_Param
	{
	public:

	};

	struct Function_Engine_GameStateBase_OnRep_ReplicatedHasBegunPlay_Param
	{
	public:

	};

	struct Function_Engine_GameStateBase_OnRep_GameModeClass_Param
	{
	public:

	};

	struct Function_Engine_GameStateBase_HasMatchStarted_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameStateBase_HasBegunPlay_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameStateBase_GetServerWorldTimeSeconds_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_GameStateBase_GetPlayerStartTime_Param
	{
	public:

		struct AController* Controller; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_GameStateBase_GetPlayerRespawnDelay_Param
	{
	public:

		struct AController* Controller; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_PlayerState_ReceiveOverrideWith_Param
	{
	public:

		struct APlayerState* OldPlayerState; // 0x00(0x08)
	};

	struct Function_Engine_PlayerState_ReceiveCopyProperties_Param
	{
	public:

		struct APlayerState* NewPlayerState; // 0x00(0x08)
	};

	struct Function_Engine_PlayerState_OnRep_UniqueId_Param
	{
	public:

	};

	struct Function_Engine_PlayerState_OnRep_Score_Param
	{
	public:

	};

	struct Function_Engine_PlayerState_OnRep_PlayerName_Param
	{
	public:

	};

	struct Function_Engine_PlayerState_OnRep_PlayerId_Param
	{
	public:

	};

	struct Function_Engine_PlayerState_OnRep_bIsInactive_Param
	{
	public:

	};

	struct Function_Engine_PlayerState_GetPlayerName_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_SkyLight_OnRep_bEnabled_Param
	{
	public:

	};

	struct Function_Engine_ExponentialHeightFog_OnRep_bEnabled_Param
	{
	public:

	};

	struct Function_Engine_CHARACTER_UnCrouch_Param
	{
	public:

		bool bClientSimulation; // 0x00(0x01)
	};

	struct Function_Engine_CHARACTER_StopJumping_Param
	{
	public:

	};

	struct Function_Engine_CHARACTER_StopAnimMontage_Param
	{
	public:

		struct UAnimMontage* AnimMontage; // 0x00(0x08)
	};

	struct Function_Engine_CHARACTER_ServerMoveOld_Param
	{
	public:

		float OldTimeStamp; // 0x00(0x04)
		struct FVector_NetQuantize10 OldAccel; // 0x04(0x0c)
		uint32_t OldMoveFlags; // 0x10(0x04)
	};

	struct Function_Engine_CHARACTER_ServerMoveNoBase_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		struct FVector_NetQuantize10 InAccel; // 0x04(0x0c)
		struct FVector_NetQuantize100 ClientLoc; // 0x10(0x0c)
		uint32_t CompressedMoveFlags; // 0x1c(0x04)
		char ClientRoll; // 0x20(0x01)
		char pad_21[0x3]; // 0x21(0x03)
		uint32_t View; // 0x24(0x04)
		char ClientMovementMode; // 0x28(0x01)
	};

	struct Function_Engine_CHARACTER_ServerMoveDualNoBase_Param
	{
	public:

		float TimeStamp0; // 0x00(0x04)
		struct FVector_NetQuantize10 InAccel0; // 0x04(0x0c)
		uint32_t PendingFlags; // 0x10(0x04)
		uint32_t View0; // 0x14(0x04)
		float Timestamp; // 0x18(0x04)
		struct FVector_NetQuantize10 InAccel; // 0x1c(0x0c)
		struct FVector_NetQuantize100 ClientLoc; // 0x28(0x0c)
		uint32_t NewFlags; // 0x34(0x04)
		char ClientRoll; // 0x38(0x01)
		char pad_39[0x3]; // 0x39(0x03)
		uint32_t View; // 0x3c(0x04)
		char ClientMovementMode; // 0x40(0x01)
	};

	struct Function_Engine_CHARACTER_ServerMoveDualHybridRootMotion_Param
	{
	public:

		float TimeStamp0; // 0x00(0x04)
		struct FVector_NetQuantize10 InAccel0; // 0x04(0x0c)
		uint32_t PendingFlags; // 0x10(0x04)
		uint32_t View0; // 0x14(0x04)
		float Timestamp; // 0x18(0x04)
		struct FVector_NetQuantize10 InAccel; // 0x1c(0x0c)
		struct FVector_NetQuantize100 ClientLoc; // 0x28(0x0c)
		uint32_t NewFlags; // 0x34(0x04)
		char ClientRoll; // 0x38(0x01)
		char pad_39[0x3]; // 0x39(0x03)
		uint32_t View; // 0x3c(0x04)
		struct UPrimitiveComponent* ClientMovementBase; // 0x40(0x08)
		struct FName ClientBaseBoneName; // 0x48(0x08)
		char ClientMovementMode; // 0x50(0x01)
	};

	struct Function_Engine_CHARACTER_ServerMoveDual_Param
	{
	public:

		float TimeStamp0; // 0x00(0x04)
		struct FVector_NetQuantize10 InAccel0; // 0x04(0x0c)
		uint32_t PendingFlags; // 0x10(0x04)
		uint32_t View0; // 0x14(0x04)
		float Timestamp; // 0x18(0x04)
		struct FVector_NetQuantize10 InAccel; // 0x1c(0x0c)
		struct FVector_NetQuantize100 ClientLoc; // 0x28(0x0c)
		uint32_t NewFlags; // 0x34(0x04)
		char ClientRoll; // 0x38(0x01)
		char pad_39[0x3]; // 0x39(0x03)
		uint32_t View; // 0x3c(0x04)
		struct UPrimitiveComponent* ClientMovementBase; // 0x40(0x08)
		struct FName ClientBaseBoneName; // 0x48(0x08)
		char ClientMovementMode; // 0x50(0x01)
	};

	struct Function_Engine_CHARACTER_ServerMove_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		struct FVector_NetQuantize10 InAccel; // 0x04(0x0c)
		struct FVector_NetQuantize100 ClientLoc; // 0x10(0x0c)
		uint32_t CompressedMoveFlags; // 0x1c(0x04)
		char ClientRoll; // 0x20(0x01)
		char pad_21[0x3]; // 0x21(0x03)
		uint32_t View; // 0x24(0x04)
		struct UPrimitiveComponent* ClientMovementBase; // 0x28(0x08)
		struct FName ClientBaseBoneName; // 0x30(0x08)
		char ClientMovementMode; // 0x38(0x01)
	};

	struct Function_Engine_CHARACTER_RootMotionDebugClientPrintOnScreen_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
	};

	struct Function_Engine_CHARACTER_PlayAnimMontage_Param
	{
	public:

		struct UAnimMontage* AnimMontage; // 0x00(0x08)
		float InPlayRate; // 0x08(0x04)
		struct FName StartSectionName; // 0x0c(0x08)
		float ReturnValue; // 0x14(0x04)
	};

	struct Function_Engine_CHARACTER_OnWalkingOffLedge_Param
	{
	public:

		struct FVector PreviousFloorImpactNormal; // 0x00(0x0c)
		struct FVector PreviousFloorContactNormal; // 0x0c(0x0c)
		struct FVector PreviousLocation; // 0x18(0x0c)
		float TimeDelta; // 0x24(0x04)
	};

	struct Function_Engine_CHARACTER_OnRep_RootMotion_Param
	{
	public:

	};

	struct Function_Engine_CHARACTER_OnRep_ReplicatedBasedMovement_Param
	{
	public:

	};

	struct Function_Engine_CHARACTER_OnRep_ReplayLastTransformUpdateTimeStamp_Param
	{
	public:

	};

	struct Function_Engine_CHARACTER_OnRep_IsCrouched_Param
	{
	public:

	};

	struct Function_Engine_CHARACTER_OnLaunched_Param
	{
	public:

		struct FVector LaunchVelocity; // 0x00(0x0c)
		bool bXYOverride; // 0x0c(0x01)
		bool bZOverride; // 0x0d(0x01)
	};

	struct Function_Engine_CHARACTER_OnLanded_Param
	{
	public:

		struct FHitResult Hit; // 0x00(0x88)
	};

	struct Function_Engine_CHARACTER_OnJumped_Param
	{
	public:

	};

	struct Function_Engine_CHARACTER_LaunchCharacter_Param
	{
	public:

		struct FVector LaunchVelocity; // 0x00(0x0c)
		bool bXYOverride; // 0x0c(0x01)
		bool bZOverride; // 0x0d(0x01)
	};

	struct Function_Engine_CHARACTER_K2_UpdateCustomMovement_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_Engine_CHARACTER_K2_OnStartCrouch_Param
	{
	public:

		float HalfHeightAdjust; // 0x00(0x04)
		float ScaledHalfHeightAdjust; // 0x04(0x04)
	};

	struct Function_Engine_CHARACTER_K2_OnMovementModeChanged_Param
	{
	public:

		enum class EMovementMode PrevMovementMode; // 0x00(0x01)
		enum class EMovementMode NewMovementMode; // 0x01(0x01)
		char PrevCustomMode; // 0x02(0x01)
		char NewCustomMode; // 0x03(0x01)
	};

	struct Function_Engine_CHARACTER_K2_OnEndCrouch_Param
	{
	public:

		float HalfHeightAdjust; // 0x00(0x04)
		float ScaledHalfHeightAdjust; // 0x04(0x04)
	};

	struct Function_Engine_CHARACTER_Jump_Param
	{
	public:

	};

	struct Function_Engine_CHARACTER_IsPlayingRootMotion_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_CHARACTER_IsPlayingNetworkedRootMotionMontage_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_CHARACTER_IsJumpProvidingForce_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_CHARACTER_HasAnyRootMotion_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_CHARACTER_GetCurrentMontage_Param
	{
	public:

		struct UAnimMontage* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_CHARACTER_GetBaseTranslationOffset_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_CHARACTER_GetBaseRotationOffsetRotator_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_CHARACTER_GetAnimRootMotionTranslationScale_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CHARACTER_Crouch_Param
	{
	public:

		bool bClientSimulation; // 0x00(0x01)
	};

	struct Function_Engine_CHARACTER_ClientVeryShortAdjustPosition_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		struct FVector NewLoc; // 0x04(0x0c)
		struct UPrimitiveComponent* NewBase; // 0x10(0x08)
		struct FName NewBaseBoneName; // 0x18(0x08)
		bool bHasBase; // 0x20(0x01)
		bool bBaseRelativePosition; // 0x21(0x01)
		char ServerMovementMode; // 0x22(0x01)
	};

	struct Function_Engine_CHARACTER_ClientCheatWalk_Param
	{
	public:

	};

	struct Function_Engine_CHARACTER_ClientCheatGhost_Param
	{
	public:

	};

	struct Function_Engine_CHARACTER_ClientCheatFly_Param
	{
	public:

	};

	struct Function_Engine_CHARACTER_ClientAdjustRootMotionSourcePosition_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FRootMotionSourceGroup ServerRootMotion; // 0x08(0xf8)
		bool bHasAnimRootMotion; // 0x100(0x01)
		char pad_101[0x3]; // 0x101(0x03)
		float ServerMontageTrackPosition; // 0x104(0x04)
		struct FVector ServerLoc; // 0x108(0x0c)
		struct FVector_NetQuantizeNormal ServerRotation; // 0x114(0x0c)
		float ServerVelZ; // 0x120(0x04)
		char pad_124[0x4]; // 0x124(0x04)
		struct UPrimitiveComponent* ServerBase; // 0x128(0x08)
		struct FName ServerBoneName; // 0x130(0x08)
		bool bHasBase; // 0x138(0x01)
		bool bBaseRelativePosition; // 0x139(0x01)
		char ServerMovementMode; // 0x13a(0x01)
	};

	struct Function_Engine_CHARACTER_ClientAdjustRootMotionPosition_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		float ServerMontageTrackPosition; // 0x04(0x04)
		struct FVector ServerLoc; // 0x08(0x0c)
		struct FVector_NetQuantizeNormal ServerRotation; // 0x14(0x0c)
		float ServerVelZ; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct UPrimitiveComponent* ServerBase; // 0x28(0x08)
		struct FName ServerBoneName; // 0x30(0x08)
		bool bHasBase; // 0x38(0x01)
		bool bBaseRelativePosition; // 0x39(0x01)
		char ServerMovementMode; // 0x3a(0x01)
	};

	struct Function_Engine_CHARACTER_ClientAdjustPosition_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		struct FVector NewLoc; // 0x04(0x0c)
		struct FVector NewVel; // 0x10(0x0c)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UPrimitiveComponent* NewBase; // 0x20(0x08)
		struct FName NewBaseBoneName; // 0x28(0x08)
		bool bHasBase; // 0x30(0x01)
		bool bBaseRelativePosition; // 0x31(0x01)
		char ServerMovementMode; // 0x32(0x01)
	};

	struct Function_Engine_CHARACTER_ClientAckGoodMove_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		char RecvTimeOffset; // 0x04(0x01)
	};

	struct Function_Engine_CHARACTER_CanJumpInternal_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_CHARACTER_CanJump_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_CHARACTER_CanCrouch_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_CHARACTER_CacheInitialMeshOffset_Param
	{
	public:

		struct FVector MeshRelativeLocation; // 0x00(0x0c)
		struct FRotator MeshRelativeRotation; // 0x0c(0x0c)
	};

	struct Function_Engine_DefaultPawn_TurnAtRate_Param
	{
	public:

		float Rate; // 0x00(0x04)
	};

	struct Function_Engine_DefaultPawn_MoveUp_World_Param
	{
	public:

		float Val; // 0x00(0x04)
	};

	struct Function_Engine_DefaultPawn_MoveRight_Param
	{
	public:

		float Val; // 0x00(0x04)
	};

	struct Function_Engine_DefaultPawn_MoveForward_Param
	{
	public:

		float Val; // 0x00(0x04)
	};

	struct Function_Engine_DefaultPawn_LookUpAtRate_Param
	{
	public:

		float Rate; // 0x00(0x04)
	};

	struct Function_Engine_PlayerController_WasInputKeyJustReleased_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_PlayerController_WasInputKeyJustPressed_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_PlayerController_ToggleSpeaking_Param
	{
	public:

		bool bInSpeaking; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_TestServerLevelVisibilityChange_Param
	{
	public:

		struct FName PackageName; // 0x00(0x08)
		struct FName Filename; // 0x08(0x08)
	};

	struct Function_Engine_PlayerController_SwitchLevel_Param
	{
	public:

		struct FString URL; // 0x00(0x10)
	};

	struct Function_Engine_PlayerController_StopHapticEffect_Param
	{
	public:

		enum class EControllerHand Hand; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_StartFire_Param
	{
	public:

		char FireModeNum; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_SetVirtualJoystickVisibility_Param
	{
	public:

		bool bVisible; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_SetViewTargetWithBlend_Param
	{
	public:

		struct AActor* NewViewTarget; // 0x00(0x08)
		float BlendTime; // 0x08(0x04)
		enum class EViewTargetBlendFunction BlendFunc; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		float BlendExp; // 0x10(0x04)
		bool bLockOutgoing; // 0x14(0x01)
	};

	struct Function_Engine_PlayerController_SetName_Param
	{
	public:

		struct FString S; // 0x00(0x10)
	};

	struct Function_Engine_PlayerController_SetMouseLocation_Param
	{
	public:

		int32_t X; // 0x00(0x04)
		int32_t Y; // 0x04(0x04)
	};

	struct Function_Engine_PlayerController_SetMouseCursorWidget_Param
	{
	public:

		enum class EMouseCursor Cursor; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UUserWidget* CursorWidget; // 0x08(0x08)
	};

	struct Function_Engine_PlayerController_SetHapticsByValue_Param
	{
	public:

		float frequency; // 0x00(0x04)
		float Amplitude; // 0x04(0x04)
		enum class EControllerHand Hand; // 0x08(0x01)
	};

	struct Function_Engine_PlayerController_SetDisableHaptics_Param
	{
	public:

		bool bNewDisabled; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_SetControllerLightColor_Param
	{
	public:

		struct FColor Color; // 0x00(0x04)
	};

	struct Function_Engine_PlayerController_SetCinematicMode_Param
	{
	public:

		bool bInCinematicMode; // 0x00(0x01)
		bool bHidePlayer; // 0x01(0x01)
		bool bAffectsHUD; // 0x02(0x01)
		bool bAffectsMovement; // 0x03(0x01)
		bool bAffectsTurning; // 0x04(0x01)
	};

	struct Function_Engine_PlayerController_SetAudioListenerOverride_Param
	{
	public:

		struct USceneComponent* AttachToComponent; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		struct FRotator Rotation; // 0x14(0x0c)
	};

	struct Function_Engine_PlayerController_SetAudioListenerAttenuationOverride_Param
	{
	public:

		struct USceneComponent* AttachToComponent; // 0x00(0x08)
		struct FVector AttenuationLocationOVerride; // 0x08(0x0c)
	};

	struct Function_Engine_PlayerController_ServerViewSelf_Param
	{
	public:

		struct FViewTargetTransitionParams TransitionParams; // 0x00(0x10)
	};

	struct Function_Engine_PlayerController_ServerViewPrevPlayer_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ServerViewNextPlayer_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ServerVerifyViewTarget_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ServerUpdateMultipleLevelsVisibility_Param
	{
	public:

		struct TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities; // 0x00(0x10)
	};

	struct Function_Engine_PlayerController_ServerUpdateLevelVisibility_Param
	{
	public:

		struct FUpdateLevelVisibilityLevelInfo LevelVisibility; // 0x00(0x14)
	};

	struct Function_Engine_PlayerController_ServerUpdateCamera_Param
	{
	public:

		struct FVector_NetQuantize CamLoc; // 0x00(0x0c)
		int32_t CamPitchAndYaw; // 0x0c(0x04)
	};

	struct Function_Engine_PlayerController_ServerUnmutePlayer_Param
	{
	public:

		struct FUniqueNetIdRepl PlayerId; // 0x00(0x28)
	};

	struct Function_Engine_PlayerController_ServerToggleAILogging_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ServerShortTimeout_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ServerSetSpectatorWaiting_Param
	{
	public:

		bool bWaiting; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_ServerSetSpectatorLocation_Param
	{
	public:

		struct FVector NewLoc; // 0x00(0x0c)
		struct FRotator NewRot; // 0x0c(0x0c)
	};

	struct Function_Engine_PlayerController_ServerRestartPlayer_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ServerPause_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ServerNotifyLoadedWorld_Param
	{
	public:

		struct FName WorldPackageName; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_ServerMutePlayer_Param
	{
	public:

		struct FUniqueNetIdRepl PlayerId; // 0x00(0x28)
	};

	struct Function_Engine_PlayerController_ServerExecRPC_Param
	{
	public:

		struct FString Msg; // 0x00(0x10)
	};

	struct Function_Engine_PlayerController_ServerExec_Param
	{
	public:

		struct FString Msg; // 0x00(0x10)
	};

	struct Function_Engine_PlayerController_ServerCheckClientPossessionReliable_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ServerCheckClientPossession_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ServerChangeName_Param
	{
	public:

		struct FString S; // 0x00(0x10)
	};

	struct Function_Engine_PlayerController_ServerCamera_Param
	{
	public:

		struct FName NewMode; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_ServerAcknowledgePossession_Param
	{
	public:

		struct APawn* P; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_SendToConsole_Param
	{
	public:

		struct FString Command; // 0x00(0x10)
	};

	struct Function_Engine_PlayerController_RestartLevel_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ResetControllerLightColor_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ProjectWorldLocationToScreen_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		struct FVector2D ScreenLocation; // 0x0c(0x08)
		bool bPlayerViewportRelative; // 0x14(0x01)
		bool ReturnValue; // 0x15(0x01)
	};

	struct Function_Engine_PlayerController_PlayHapticEffect_Param
	{
	public:

		struct UHapticFeedbackEffect_Base* HapticEffect; // 0x00(0x08)
		enum class EControllerHand Hand; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		float Scale; // 0x0c(0x04)
		bool bLoop; // 0x10(0x01)
	};

	struct Function_Engine_PlayerController_PlayDynamicForceFeedback_Param
	{
	public:

		float Intensity; // 0x00(0x04)
		float Duration; // 0x04(0x04)
		bool bAffectsLeftLarge; // 0x08(0x01)
		bool bAffectsLeftSmall; // 0x09(0x01)
		bool bAffectsRightLarge; // 0x0a(0x01)
		bool bAffectsRightSmall; // 0x0b(0x01)
		enum class EDynamicForceFeedbackAction Action; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FLatentActionInfo LatentInfo; // 0x10(0x18)
	};

	struct Function_Engine_PlayerController_Pause_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_OnServerStartedVisualLogger_Param
	{
	public:

		bool bIsLogging; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_LocalTravel_Param
	{
	public:

		struct FString URL; // 0x00(0x10)
	};

	struct Function_Engine_PlayerController_K2_ClientPlayForceFeedback_Param
	{
	public:

		struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
		struct FName Tag; // 0x08(0x08)
		bool bLooping; // 0x10(0x01)
		bool bIgnoreTimeDilation; // 0x11(0x01)
		bool bPlayWhilePaused; // 0x12(0x01)
	};

	struct Function_Engine_PlayerController_IsInputKeyDown_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Engine_PlayerController_GetViewportSize_Param
	{
	public:

		int32_t SizeX; // 0x00(0x04)
		int32_t SizeY; // 0x04(0x04)
	};

	struct Function_Engine_PlayerController_GetSpectatorPawn_Param
	{
	public:

		struct ASpectatorPawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_GetMousePosition_Param
	{
	public:

		float LocationX; // 0x00(0x04)
		float LocationY; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_PlayerController_GetInputVectorKeyState_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_Engine_PlayerController_GetInputTouchState_Param
	{
	public:

		enum class ETouchIndex FingerIndex; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float LocationX; // 0x04(0x04)
		float LocationY; // 0x08(0x04)
		bool bIsCurrentlyPressed; // 0x0c(0x01)
	};

	struct Function_Engine_PlayerController_GetInputMouseDelta_Param
	{
	public:

		float DeltaX; // 0x00(0x04)
		float DeltaY; // 0x04(0x04)
	};

	struct Function_Engine_PlayerController_GetInputMotionState_Param
	{
	public:

		struct FVector Tilt; // 0x00(0x0c)
		struct FVector RotationRate; // 0x0c(0x0c)
		struct FVector Gravity; // 0x18(0x0c)
		struct FVector Acceleration; // 0x24(0x0c)
	};

	struct Function_Engine_PlayerController_GetInputKeyTimeDown_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_PlayerController_GetInputAnalogStickState_Param
	{
	public:

		enum class EControllerAnalogStick WhichStick; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float StickX; // 0x04(0x04)
		float StickY; // 0x08(0x04)
	};

	struct Function_Engine_PlayerController_GetInputAnalogKeyState_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_Engine_PlayerController_GetHUD_Param
	{
	public:

		struct AHUD* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_GetHitResultUnderFingerForObjects_Param
	{
	public:

		enum class ETouchIndex FingerIndex; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x08(0x10)
		bool bTraceComplex; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		struct FHitResult HitResult; // 0x1c(0x88)
		bool ReturnValue; // 0xa4(0x01)
	};

	struct Function_Engine_PlayerController_GetHitResultUnderFingerByChannel_Param
	{
	public:

		enum class ETouchIndex FingerIndex; // 0x00(0x01)
		enum class ETraceTypeQuery TraceChannel; // 0x01(0x01)
		bool bTraceComplex; // 0x02(0x01)
		char pad_3[0x1]; // 0x03(0x01)
		struct FHitResult HitResult; // 0x04(0x88)
		bool ReturnValue; // 0x8c(0x01)
	};

	struct Function_Engine_PlayerController_GetHitResultUnderFinger_Param
	{
	public:

		enum class ETouchIndex FingerIndex; // 0x00(0x01)
		enum class ECollisionChannel TraceChannel; // 0x01(0x01)
		bool bTraceComplex; // 0x02(0x01)
		char pad_3[0x1]; // 0x03(0x01)
		struct FHitResult HitResult; // 0x04(0x88)
		bool ReturnValue; // 0x8c(0x01)
	};

	struct Function_Engine_PlayerController_GetHitResultUnderCursorForObjects_Param
	{
	public:

		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x00(0x10)
		bool bTraceComplex; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FHitResult HitResult; // 0x14(0x88)
		bool ReturnValue; // 0x9c(0x01)
	};

	struct Function_Engine_PlayerController_GetHitResultUnderCursorByChannel_Param
	{
	public:

		enum class ETraceTypeQuery TraceChannel; // 0x00(0x01)
		bool bTraceComplex; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		struct FHitResult HitResult; // 0x04(0x88)
		bool ReturnValue; // 0x8c(0x01)
	};

	struct Function_Engine_PlayerController_GetHitResultUnderCursor_Param
	{
	public:

		enum class ECollisionChannel TraceChannel; // 0x00(0x01)
		bool bTraceComplex; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		struct FHitResult HitResult; // 0x04(0x88)
		bool ReturnValue; // 0x8c(0x01)
	};

	struct Function_Engine_PlayerController_GetFocalLocation_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_PlayerController_FOV_Param
	{
	public:

		float NewFOV; // 0x00(0x04)
	};

	struct Function_Engine_PlayerController_EnableCheats_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_DeprojectScreenPositionToWorld_Param
	{
	public:

		float ScreenX; // 0x00(0x04)
		float ScreenY; // 0x04(0x04)
		struct FVector WorldLocation; // 0x08(0x0c)
		struct FVector WorldDirection; // 0x14(0x0c)
		bool bPlayerViewportRelative; // 0x20(0x01)
		bool ReturnValue; // 0x21(0x01)
	};

	struct Function_Engine_PlayerController_DeprojectMousePositionToWorld_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		struct FVector WorldDirection; // 0x0c(0x0c)
		bool bPlayerViewportRelative; // 0x18(0x01)
		bool ReturnValue; // 0x19(0x01)
	};

	struct Function_Engine_PlayerController_ConsoleKey_Param
	{
	public:

		struct FKey Key; // 0x00(0x18)
	};

	struct Function_Engine_PlayerController_ClientWasKicked_Param
	{
	public:

		struct FText KickReason; // 0x00(0x18)
	};

	struct Function_Engine_PlayerController_ClientVoiceHandshakeComplete_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ClientUpdateMultipleLevelsStreamingStatus_Param
	{
	public:

		struct TArray<struct FUpdateLevelStreamingLevelStatus> LevelStatuses; // 0x00(0x10)
	};

	struct Function_Engine_PlayerController_ClientUpdateLevelStreamingStatus_Param
	{
	public:

		struct FName PackageName; // 0x00(0x08)
		bool bNewShouldBeLoaded; // 0x08(0x01)
		bool bNewShouldBeVisible; // 0x09(0x01)
		bool bNewShouldBlockOnLoad; // 0x0a(0x01)
		char pad_B[0x1]; // 0x0b(0x01)
		int32_t LodIndex; // 0x0c(0x04)
	};

	struct Function_Engine_PlayerController_ClientUnmutePlayer_Param
	{
	public:

		struct FUniqueNetIdRepl PlayerId; // 0x00(0x28)
	};

	struct Function_Engine_PlayerController_ClientTravelInternal_Param
	{
	public:

		struct FString URL; // 0x00(0x10)
		enum class ETravelType TravelType; // 0x10(0x01)
		bool bSeamless; // 0x11(0x01)
		char pad_12[0x2]; // 0x12(0x02)
		struct FGuid MapPackageGuid; // 0x14(0x10)
	};

	struct Function_Engine_PlayerController_ClientTravel_Param
	{
	public:

		struct FString URL; // 0x00(0x10)
		enum class ETravelType TravelType; // 0x10(0x01)
		bool bSeamless; // 0x11(0x01)
		char pad_12[0x2]; // 0x12(0x02)
		struct FGuid MapPackageGuid; // 0x14(0x10)
	};

	struct Function_Engine_PlayerController_ClientTeamMessage_Param
	{
	public:

		struct APlayerState* SenderPlayerState; // 0x00(0x08)
		struct FString S; // 0x08(0x10)
		struct FName Type; // 0x18(0x08)
		float MsgLifeTime; // 0x20(0x04)
	};

	struct Function_Engine_PlayerController_ClientStopForceFeedback_Param
	{
	public:

		struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
		struct FName Tag; // 0x08(0x08)
	};

	struct Function_Engine_PlayerController_ClientStopCameraShake_Param
	{
	public:

		struct UClass* Shake; // 0x00(0x08)
		bool bImmediately; // 0x08(0x01)
	};

	struct Function_Engine_PlayerController_ClientStopCameraAnim_Param
	{
	public:

		struct UCameraAnim* AnimToStop; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_ClientStartOnlineSession_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ClientSpawnCameraLensEffect_Param
	{
	public:

		struct UClass* LensEffectEmitterClass; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_ClientSetViewTarget_Param
	{
	public:

		struct AActor* A; // 0x00(0x08)
		struct FViewTargetTransitionParams TransitionParams; // 0x08(0x10)
	};

	struct Function_Engine_PlayerController_ClientSetSpectatorWaiting_Param
	{
	public:

		bool bWaiting; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_ClientSetHUD_Param
	{
	public:

		struct UClass* NewHUDClass; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_ClientSetForceMipLevelsToBeResident_Param
	{
	public:

		struct UMaterialInterface* Material; // 0x00(0x08)
		float ForceDuration; // 0x08(0x04)
		int32_t CinematicTextureGroups; // 0x0c(0x04)
	};

	struct Function_Engine_PlayerController_ClientSetCinematicMode_Param
	{
	public:

		bool bInCinematicMode; // 0x00(0x01)
		bool bAffectsMovement; // 0x01(0x01)
		bool bAffectsTurning; // 0x02(0x01)
		bool bAffectsHUD; // 0x03(0x01)
	};

	struct Function_Engine_PlayerController_ClientSetCameraMode_Param
	{
	public:

		struct FName NewCamMode; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_ClientSetCameraFade_Param
	{
	public:

		bool bEnableFading; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FColor FadeColor; // 0x04(0x04)
		struct FVector2D FadeAlpha; // 0x08(0x08)
		float FadeTime; // 0x10(0x04)
		bool bFadeAudio; // 0x14(0x01)
	};

	struct Function_Engine_PlayerController_ClientSetBlockOnAsyncLoading_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ClientReturnToMainMenuWithTextReason_Param
	{
	public:

		struct FText ReturnReason; // 0x00(0x18)
	};

	struct Function_Engine_PlayerController_ClientReturnToMainMenu_Param
	{
	public:

		struct FString ReturnReason; // 0x00(0x10)
	};

	struct Function_Engine_PlayerController_ClientRetryClientRestart_Param
	{
	public:

		struct APawn* NewPawn; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_ClientRestart_Param
	{
	public:

		struct APawn* NewPawn; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_ClientReset_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ClientRepObjRef_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_ClientReceiveLocalizedMessage_Param
	{
	public:

		struct UClass* Message; // 0x00(0x08)
		int32_t Switch; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct APlayerState* RelatedPlayerState_2; // 0x10(0x08)
		struct APlayerState* RelatedPlayerState_3; // 0x18(0x08)
		struct UObject* OptionalObject; // 0x20(0x08)
	};

	struct Function_Engine_PlayerController_ClientPrestreamTextures_Param
	{
	public:

		struct AActor* ForcedActor; // 0x00(0x08)
		float ForceDuration; // 0x08(0x04)
		bool bEnableStreaming; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		int32_t CinematicTextureGroups; // 0x10(0x04)
	};

	struct Function_Engine_PlayerController_ClientPrepareMapChange_Param
	{
	public:

		struct FName LevelName; // 0x00(0x08)
		bool bFirst; // 0x08(0x01)
		bool bLast; // 0x09(0x01)
	};

	struct Function_Engine_PlayerController_ClientPlaySoundAtLocation_Param
	{
	public:

		struct USoundBase* Sound; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		float VolumeMultiplier; // 0x14(0x04)
		float PitchMultiplier; // 0x18(0x04)
	};

	struct Function_Engine_PlayerController_ClientPlaySound_Param
	{
	public:

		struct USoundBase* Sound; // 0x00(0x08)
		float VolumeMultiplier; // 0x08(0x04)
		float PitchMultiplier; // 0x0c(0x04)
	};

	struct Function_Engine_PlayerController_ClientPlayForceFeedback_Internal_Param
	{
	public:

		struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
		struct FForceFeedbackParameters Params; // 0x08(0x0c)
	};

	struct Function_Engine_PlayerController_ClientPlayCameraShake_Param
	{
	public:

		struct UClass* Shake; // 0x00(0x08)
		float Scale; // 0x08(0x04)
		enum class ECameraAnimPlaySpace PlaySpace; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FRotator UserPlaySpaceRot; // 0x10(0x0c)
	};

	struct Function_Engine_PlayerController_ClientPlayCameraAnim_Param
	{
	public:

		struct UCameraAnim* AnimToPlay; // 0x00(0x08)
		float Scale; // 0x08(0x04)
		float Rate; // 0x0c(0x04)
		float BlendInTime; // 0x10(0x04)
		float BlendOutTime; // 0x14(0x04)
		bool bLoop; // 0x18(0x01)
		bool bRandomStartTime; // 0x19(0x01)
		enum class ECameraAnimPlaySpace Space; // 0x1a(0x01)
		char pad_1B[0x1]; // 0x1b(0x01)
		struct FRotator CustomPlaySpace; // 0x1c(0x0c)
	};

	struct Function_Engine_PlayerController_ClientMutePlayer_Param
	{
	public:

		struct FUniqueNetIdRepl PlayerId; // 0x00(0x28)
	};

	struct Function_Engine_PlayerController_ClientMessage_Param
	{
	public:

		struct FString S; // 0x00(0x10)
		struct FName Type; // 0x10(0x08)
		float MsgLifeTime; // 0x18(0x04)
	};

	struct Function_Engine_PlayerController_ClientIgnoreMoveInput_Param
	{
	public:

		bool bIgnore; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_ClientIgnoreLookInput_Param
	{
	public:

		bool bIgnore; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_ClientGotoState_Param
	{
	public:

		struct FName NewState; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_ClientGameEnded_Param
	{
	public:

		struct AActor* EndGameFocus; // 0x00(0x08)
		bool bIsWinner; // 0x08(0x01)
	};

	struct Function_Engine_PlayerController_ClientForceGarbageCollection_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ClientFlushLevelStreaming_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ClientEndOnlineSession_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ClientEnableNetworkVoice_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_ClientCommitMapChange_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ClientClearCameraLensEffects_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ClientCapBandwidth_Param
	{
	public:

		int32_t Cap; // 0x00(0x04)
	};

	struct Function_Engine_PlayerController_ClientCancelPendingMapChange_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ClientAddTextureStreamingLoc_Param
	{
	public:

		struct FVector InLoc; // 0x00(0x0c)
		float Duration; // 0x0c(0x04)
		bool bOverrideLocation; // 0x10(0x01)
	};

	struct Function_Engine_PlayerController_ClearAudioListenerOverride_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_ClearAudioListenerAttenuationOverride_Param
	{
	public:

	};

	struct Function_Engine_PlayerController_CanRestartPlayer_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PlayerController_Camera_Param
	{
	public:

		struct FName NewMode; // 0x00(0x08)
	};

	struct Function_Engine_PlayerController_AddYawInput_Param
	{
	public:

		float Val; // 0x00(0x04)
	};

	struct Function_Engine_PlayerController_AddRollInput_Param
	{
	public:

		float Val; // 0x00(0x04)
	};

	struct Function_Engine_PlayerController_AddPitchInput_Param
	{
	public:

		float Val; // 0x00(0x04)
	};

	struct Function_Engine_PlayerController_ActivateTouchInterface_Param
	{
	public:

		struct UTouchInterface* NewTouchInterface; // 0x00(0x08)
	};

	struct Function_Engine_SpotLight_SetOuterConeAngle_Param
	{
	public:

		float NewOuterConeAngle; // 0x00(0x04)
	};

	struct Function_Engine_SpotLight_SetInnerConeAngle_Param
	{
	public:

		float NewInnerConeAngle; // 0x00(0x04)
	};

	struct Function_Engine_PointLight_SetRadius_Param
	{
	public:

		float NewRadius; // 0x00(0x04)
	};

	struct Function_Engine_PointLight_SetLightFalloffExponent_Param
	{
	public:

		float NewLightFalloffExponent; // 0x00(0x04)
	};

	struct Function_Engine_RadialForceActor_ToggleForce_Param
	{
	public:

	};

	struct Function_Engine_RadialForceActor_FireImpulse_Param
	{
	public:

	};

	struct Function_Engine_RadialForceActor_EnableForce_Param
	{
	public:

	};

	struct Function_Engine_RadialForceActor_DisableForce_Param
	{
	public:

	};

	struct Function_Engine_PlanarReflection_OnInterpToggle_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_Engine_SceneCapture2D_OnInterpToggle_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_Engine_SceneCaptureCube_OnInterpToggle_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_WakeRigidBody_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
	};

	struct Function_Engine_PrimitiveComponent_WakeAllRigidBodies_Param
	{
	public:

	};

	struct Function_Engine_PrimitiveComponent_SetWalkableSlopeOverride_Param
	{
	public:

		struct FWalkableSlopeOverride NewOverride; // 0x00(0x10)
	};

	struct Function_Engine_PrimitiveComponent_SetVisibleInRayTracing_Param
	{
	public:

		bool bNewVisibleInRayTracing; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetUseCCD_Param
	{
	public:

		bool InUseCCD; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName BoneName; // 0x04(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetTranslucentSortPriority_Param
	{
	public:

		int32_t NewTranslucentSortPriority; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_SetSpecifyWorldScaleType_Param
	{
	public:

		enum class EPreferredWorldScaleType WorldScaleType; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetSoftDepthOffset_Param
	{
	public:

		float bValue; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_SetSingleSampleShadowFromStationaryLights_Param
	{
	public:

		bool bNewSingleSampleShadowFromStationaryLights; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetSimulatePhysics_Param
	{
	public:

		bool bSimulate; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetRenderInMainPass_Param
	{
	public:

		bool bValue; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetRenderCustomDepth_Param
	{
	public:

		bool bValue; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetReceivesDecals_Param
	{
	public:

		bool bNewReceivesDecals; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetPhysMaterialOverride_Param
	{
	public:

		struct UPhysicalMaterial* NewPhysMaterial; // 0x00(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetPhysicsMaxAngularVelocityInRadians_Param
	{
	public:

		float NewMaxAngVel; // 0x00(0x04)
		bool bAddToCurrent; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FName BoneName; // 0x08(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetPhysicsMaxAngularVelocityInDegrees_Param
	{
	public:

		float NewMaxAngVel; // 0x00(0x04)
		bool bAddToCurrent; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FName BoneName; // 0x08(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetPhysicsMaxAngularVelocity_Param
	{
	public:

		float NewMaxAngVel; // 0x00(0x04)
		bool bAddToCurrent; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FName BoneName; // 0x08(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetPhysicsLinearVelocity_Param
	{
	public:

		struct FVector NewVel; // 0x00(0x0c)
		bool bAddToCurrent; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FName BoneName; // 0x10(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetPhysicsAngularVelocityInRadians_Param
	{
	public:

		struct FVector NewAngVel; // 0x00(0x0c)
		bool bAddToCurrent; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FName BoneName; // 0x10(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetPhysicsAngularVelocityInDegrees_Param
	{
	public:

		struct FVector NewAngVel; // 0x00(0x0c)
		bool bAddToCurrent; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FName BoneName; // 0x10(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetPhysicsAngularVelocity_Param
	{
	public:

		struct FVector NewAngVel; // 0x00(0x0c)
		bool bAddToCurrent; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FName BoneName; // 0x10(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetOwnerNoSee_Param
	{
	public:

		bool bNewOwnerNoSee; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetOnlyOwnerSee_Param
	{
	public:

		bool bNewOnlyOwnerSee; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetNotifyRigidBodyCollision_Param
	{
	public:

		bool bNewNotifyRigidBodyCollision; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetMaterialSoftPtr_Param
	{
	public:

	};

	struct Function_Engine_PrimitiveComponent_SetMaterialByName_Param
	{
	public:

		struct FName MaterialSlotName; // 0x00(0x08)
		struct UMaterialInterface* Material; // 0x08(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetMaterial_Param
	{
	public:

		int32_t ElementIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UMaterialInterface* Material; // 0x08(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetMassScale_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		float InMassScale; // 0x08(0x04)
	};

	struct Function_Engine_PrimitiveComponent_SetMassOverrideInKg_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		float MassInKg; // 0x08(0x04)
		bool bOverrideMass; // 0x0c(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetLinearDamping_Param
	{
	public:

		float InDamping; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_SetLightAttachmentsAsGroup_Param
	{
	public:

		bool bInLightAttachmentsAsGroup; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetLazyLODParentPrimitive_Param
	{
	public:

		struct UPrimitiveComponent* InLODParentPrimitive; // 0x00(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetHiddenVisibleInRayTracing_Param
	{
	public:

		bool bNewVisibleInRayTracing; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetGenerateOverlapEvents_Param
	{
	public:

		bool bInGenerateOverlapEvents; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetExcludeFromLightAttachmentGroup_Param
	{
	public:

		bool bInExcludeFromLightAttachmentGroup; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetEnableUpdateShadowCacheState_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetEnableGravity_Param
	{
	public:

		bool bGravityEnabled; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetCustomPrimitiveDataVector4_Param
	{
	public:

		int32_t DataIndex; // 0x00(0x04)
		char pad_4[0xc]; // 0x04(0x0c)
		struct FVector4 Value; // 0x10(0x10)
	};

	struct Function_Engine_PrimitiveComponent_SetCustomPrimitiveDataVector3_Param
	{
	public:

		int32_t DataIndex; // 0x00(0x04)
		struct FVector Value; // 0x04(0x0c)
	};

	struct Function_Engine_PrimitiveComponent_SetCustomPrimitiveDataVector2_Param
	{
	public:

		int32_t DataIndex; // 0x00(0x04)
		struct FVector2D Value; // 0x04(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetCustomPrimitiveDataFloat_Param
	{
	public:

		int32_t DataIndex; // 0x00(0x04)
		float Value; // 0x04(0x04)
	};

	struct Function_Engine_PrimitiveComponent_SetCustomDepthStencilWriteMask_Param
	{
	public:

		enum class ERendererStencilMask WriteMaskBit; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetCustomDepthStencilValue_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_SetCullDistance_Param
	{
	public:

		float NewCullDistance; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_SetConstraintMode_Param
	{
	public:

		enum class EDOFMode ConstraintMode; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetCollisionResponseToChannel_Param
	{
	public:

		enum class ECollisionChannel Channel; // 0x00(0x01)
		enum class ECollisionResponse NewResponse; // 0x01(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetCollisionResponseToAllChannels_Param
	{
	public:

		enum class ECollisionResponse NewResponse; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetCollisionProfileName_Param
	{
	public:

		struct FName InCollisionProfileName; // 0x00(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetCollisionObjectType_Param
	{
	public:

		enum class ECollisionChannel Channel; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetCollisionEnabled_Param
	{
	public:

		enum class ECollisionEnabled NewType; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetCenterOfMass_Param
	{
	public:

		struct FVector CenterOfMassOffset; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
	};

	struct Function_Engine_PrimitiveComponent_SetCastThirdPersonShadow_Param
	{
	public:

		bool bInCastThirdPersonShadow; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetCastStationaryPerObjectShadow_Param
	{
	public:

		bool NewCastShadow; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetCastShadow_Param
	{
	public:

		bool NewCastShadow; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetCastInsetShadow_Param
	{
	public:

		bool bInCastInsetShadow; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetBoundsScale_Param
	{
	public:

		float NewBoundsScale; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_SetAngularDamping_Param
	{
	public:

		float InDamping; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_SetAllUseCCD_Param
	{
	public:

		bool InUseCCD; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetAllPhysicsLinearVelocity_Param
	{
	public:

		struct FVector NewVel; // 0x00(0x0c)
		bool bAddToCurrent; // 0x0c(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetAllPhysicsAngularVelocityInRadians_Param
	{
	public:

		struct FVector NewAngVel; // 0x00(0x0c)
		bool bAddToCurrent; // 0x0c(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetAllPhysicsAngularVelocityInDegrees_Param
	{
	public:

		struct FVector NewAngVel; // 0x00(0x0c)
		bool bAddToCurrent; // 0x0c(0x01)
	};

	struct Function_Engine_PrimitiveComponent_SetAllMassScale_Param
	{
	public:

		float InMassScale; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_ScaleByMomentOfInertia_Param
	{
	public:

		struct FVector InputVector; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		struct FVector ReturnValue; // 0x14(0x0c)
	};

	struct Function_Engine_PrimitiveComponent_PutRigidBodyToSleep_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
	};

	struct Function_Engine_PrimitiveComponent_K2_SphereTraceComponent_Param
	{
	public:

		struct FVector TraceStart; // 0x00(0x0c)
		struct FVector TraceEnd; // 0x0c(0x0c)
		float SphereRadius; // 0x18(0x04)
		bool bTraceComplex; // 0x1c(0x01)
		bool bShowTrace; // 0x1d(0x01)
		bool bPersistentShowTrace; // 0x1e(0x01)
		char pad_1F[0x1]; // 0x1f(0x01)
		struct FVector HitLocation; // 0x20(0x0c)
		struct FVector HitNormal; // 0x2c(0x0c)
		struct FName BoneName; // 0x38(0x08)
		struct FHitResult OutHit; // 0x40(0x88)
		bool ReturnValue; // 0xc8(0x01)
	};

	struct Function_Engine_PrimitiveComponent_K2_SphereOverlapComponent_Param
	{
	public:

		struct FVector InSphereCentre; // 0x00(0x0c)
		float InSphereRadius; // 0x0c(0x04)
		bool bTraceComplex; // 0x10(0x01)
		bool bShowTrace; // 0x11(0x01)
		bool bPersistentShowTrace; // 0x12(0x01)
		char pad_13[0x1]; // 0x13(0x01)
		struct FVector HitLocation; // 0x14(0x0c)
		struct FVector HitNormal; // 0x20(0x0c)
		struct FName BoneName; // 0x2c(0x08)
		struct FHitResult OutHit; // 0x34(0x88)
		bool ReturnValue; // 0xbc(0x01)
	};

	struct Function_Engine_PrimitiveComponent_K2_LineTraceComponent_Param
	{
	public:

		struct FVector TraceStart; // 0x00(0x0c)
		struct FVector TraceEnd; // 0x0c(0x0c)
		bool bTraceComplex; // 0x18(0x01)
		bool bShowTrace; // 0x19(0x01)
		bool bPersistentShowTrace; // 0x1a(0x01)
		char pad_1B[0x1]; // 0x1b(0x01)
		struct FVector HitLocation; // 0x1c(0x0c)
		struct FVector HitNormal; // 0x28(0x0c)
		struct FName BoneName; // 0x34(0x08)
		struct FHitResult OutHit; // 0x3c(0x88)
		bool ReturnValue; // 0xc4(0x01)
	};

	struct Function_Engine_PrimitiveComponent_K2_IsQueryCollisionEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_K2_IsPhysicsCollisionEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_K2_IsCollisionEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_K2_BoxOverlapComponent_Param
	{
	public:

		struct FVector InBoxCentre; // 0x00(0x0c)
		struct FBox InBox; // 0x0c(0x1c)
		bool bTraceComplex; // 0x28(0x01)
		bool bShowTrace; // 0x29(0x01)
		bool bPersistentShowTrace; // 0x2a(0x01)
		char pad_2B[0x1]; // 0x2b(0x01)
		struct FVector HitLocation; // 0x2c(0x0c)
		struct FVector HitNormal; // 0x38(0x0c)
		struct FName BoneName; // 0x44(0x08)
		struct FHitResult OutHit; // 0x4c(0x88)
		bool ReturnValue; // 0xd4(0x01)
	};

	struct Function_Engine_PrimitiveComponent_IsOverlappingComponent_Param
	{
	public:

		struct UPrimitiveComponent* OtherComp; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_PrimitiveComponent_IsOverlappingActor_Param
	{
	public:

		struct AActor* Other; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_PrimitiveComponent_IsGravityEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_IsAnyRigidBodyAwake_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_IgnoreComponentWhenMoving_Param
	{
	public:

		struct UPrimitiveComponent* Component; // 0x00(0x08)
		bool bShouldIgnore; // 0x08(0x01)
	};

	struct Function_Engine_PrimitiveComponent_IgnoreActorWhenMoving_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		bool bShouldIgnore; // 0x08(0x01)
	};

	struct Function_Engine_PrimitiveComponent_GetWalkableSlopeOverride_Param
	{
	public:

		struct FWalkableSlopeOverride ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_PrimitiveComponent_GetPhysicsLinearVelocityAtPoint_Param
	{
	public:

		struct FVector Point; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		struct FVector ReturnValue; // 0x14(0x0c)
	};

	struct Function_Engine_PrimitiveComponent_GetPhysicsLinearVelocity_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_PrimitiveComponent_GetPhysicsAngularVelocityInRadians_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_PrimitiveComponent_GetPhysicsAngularVelocityInDegrees_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_PrimitiveComponent_GetPhysicsAngularVelocity_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_PrimitiveComponent_GetOverlappingComponents_Param
	{
	public:

		struct TArray<struct UPrimitiveComponent*> OutOverlappingComponents; // 0x00(0x10)
	};

	struct Function_Engine_PrimitiveComponent_GetOverlappingActors_Param
	{
	public:

		struct TArray<struct AActor*> OverlappingActors; // 0x00(0x10)
		struct UClass* ClassFilter; // 0x10(0x08)
	};

	struct Function_Engine_PrimitiveComponent_GetNumMaterials_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_GetMaterialFromCollisionFaceIndex_Param
	{
	public:

		int32_t FaceIndex; // 0x00(0x04)
		int32_t SectionIndex; // 0x04(0x04)
		struct UMaterialInterface* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_PrimitiveComponent_GetMaterial_Param
	{
	public:

		int32_t ElementIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UMaterialInterface* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_PrimitiveComponent_GetMassScale_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_PrimitiveComponent_GetMass_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_GetLODParentPrimitive_Param
	{
	public:

		struct UPrimitiveComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_PrimitiveComponent_GetLinearDamping_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_GetLazyLODParentPrimitive_Param
	{
	public:

		struct UPrimitiveComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_PrimitiveComponent_GetInertiaTensor_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_PrimitiveComponent_GetGenerateOverlapEvents_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_GetCullingDistance_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_GetCollisionResponseToChannel_Param
	{
	public:

		enum class ECollisionChannel Channel; // 0x00(0x01)
		enum class ECollisionResponse ReturnValue; // 0x01(0x01)
	};

	struct Function_Engine_PrimitiveComponent_GetCollisionProfileName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_PrimitiveComponent_GetCollisionObjectType_Param
	{
	public:

		enum class ECollisionChannel ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_GetCollisionEnabled_Param
	{
	public:

		enum class ECollisionEnabled ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PrimitiveComponent_GetClosestPointOnCollision_Param
	{
	public:

		struct FVector Point; // 0x00(0x0c)
		struct FVector OutPointOnBody; // 0x0c(0x0c)
		struct FName BoneName; // 0x18(0x08)
		float ReturnValue; // 0x20(0x04)
	};

	struct Function_Engine_PrimitiveComponent_GetCenterOfMass_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_PrimitiveComponent_GetAngularDamping_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_CreateDynamicMaterialInstance_Param
	{
	public:

		int32_t ElementIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UMaterialInterface* SourceMaterial; // 0x08(0x08)
		struct FName OptionalName; // 0x10(0x08)
		struct UMaterialInstanceDynamic* ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_PrimitiveComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Param
	{
	public:

		int32_t ElementIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UMaterialInterface* Parent; // 0x08(0x08)
		struct UMaterialInstanceDynamic* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_PrimitiveComponent_CreateAndSetMaterialInstanceDynamic_Param
	{
	public:

		int32_t ElementIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UMaterialInstanceDynamic* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_PrimitiveComponent_CopyArrayOfMoveIgnoreComponents_Param
	{
	public:

		struct TArray<struct UPrimitiveComponent*> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_PrimitiveComponent_CopyArrayOfMoveIgnoreActors_Param
	{
	public:

		struct TArray<struct AActor*> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_PrimitiveComponent_ClearMoveIgnoreComponents_Param
	{
	public:

	};

	struct Function_Engine_PrimitiveComponent_ClearMoveIgnoreActors_Param
	{
	public:

	};

	struct Function_Engine_PrimitiveComponent_ChangePrimitiveDynamicShadowState_Param
	{
	public:

		float Duration; // 0x00(0x04)
	};

	struct Function_Engine_PrimitiveComponent_CanCharacterStepUp_Param
	{
	public:

		struct APawn* Pawn; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_PrimitiveComponent_AddTorqueInRadians_Param
	{
	public:

		struct FVector Torque; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		bool bAccelChange; // 0x14(0x01)
	};

	struct Function_Engine_PrimitiveComponent_AddTorqueInDegrees_Param
	{
	public:

		struct FVector Torque; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		bool bAccelChange; // 0x14(0x01)
	};

	struct Function_Engine_PrimitiveComponent_AddTorque_Param
	{
	public:

		struct FVector Torque; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		bool bAccelChange; // 0x14(0x01)
	};

	struct Function_Engine_PrimitiveComponent_AddRadialImpulse_Param
	{
	public:

		struct FVector Origin; // 0x00(0x0c)
		float radius; // 0x0c(0x04)
		float Strength; // 0x10(0x04)
		enum class ERadialImpulseFalloff Falloff; // 0x14(0x01)
		bool bVelChange; // 0x15(0x01)
	};

	struct Function_Engine_PrimitiveComponent_AddRadialForce_Param
	{
	public:

		struct FVector Origin; // 0x00(0x0c)
		float radius; // 0x0c(0x04)
		float Strength; // 0x10(0x04)
		enum class ERadialImpulseFalloff Falloff; // 0x14(0x01)
		bool bAccelChange; // 0x15(0x01)
	};

	struct Function_Engine_PrimitiveComponent_AddImpulseAtLocation_Param
	{
	public:

		struct FVector Impulse; // 0x00(0x0c)
		struct FVector Location; // 0x0c(0x0c)
		struct FName BoneName; // 0x18(0x08)
	};

	struct Function_Engine_PrimitiveComponent_AddImpulse_Param
	{
	public:

		struct FVector Impulse; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		bool bVelChange; // 0x14(0x01)
	};

	struct Function_Engine_PrimitiveComponent_AddForceAtLocationLocal_Param
	{
	public:

		struct FVector Force; // 0x00(0x0c)
		struct FVector Location; // 0x0c(0x0c)
		struct FName BoneName; // 0x18(0x08)
	};

	struct Function_Engine_PrimitiveComponent_AddForceAtLocation_Param
	{
	public:

		struct FVector Force; // 0x00(0x0c)
		struct FVector Location; // 0x0c(0x0c)
		struct FName BoneName; // 0x18(0x08)
	};

	struct Function_Engine_PrimitiveComponent_AddForce_Param
	{
	public:

		struct FVector Force; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		bool bAccelChange; // 0x14(0x01)
	};

	struct Function_Engine_PrimitiveComponent_AddAngularImpulseInRadians_Param
	{
	public:

		struct FVector Impulse; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		bool bVelChange; // 0x14(0x01)
	};

	struct Function_Engine_PrimitiveComponent_AddAngularImpulseInDegrees_Param
	{
	public:

		struct FVector Impulse; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		bool bVelChange; // 0x14(0x01)
	};

	struct Function_Engine_PrimitiveComponent_AddAngularImpulse_Param
	{
	public:

		struct FVector Impulse; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		bool bVelChange; // 0x14(0x01)
	};

	struct Function_Engine_AudioComponent_StopDelayed_Param
	{
	public:

		float DelayTime; // 0x00(0x04)
	};

	struct Function_Engine_AudioComponent_Stop_Param
	{
	public:

	};

	struct Function_Engine_AudioComponent_SetWaveParameter_Param
	{
	public:

		struct FName InName; // 0x00(0x08)
		struct USoundWave* InWave; // 0x08(0x08)
	};

	struct Function_Engine_AudioComponent_SetVolumeMultiplier_Param
	{
	public:

		float NewVolumeMultiplier; // 0x00(0x04)
	};

	struct Function_Engine_AudioComponent_SetUISound_Param
	{
	public:

		bool bInUISound; // 0x00(0x01)
	};

	struct Function_Engine_AudioComponent_SetSubmixSend_Param
	{
	public:

		struct USoundSubmix* Submix; // 0x00(0x08)
		float SendLevel; // 0x08(0x04)
	};

	struct Function_Engine_AudioComponent_SetSourceBusSendPreEffect_Param
	{
	public:

		struct USoundSourceBus* SoundSourceBus; // 0x00(0x08)
		float SourceBusSendLevel; // 0x08(0x04)
	};

	struct Function_Engine_AudioComponent_SetSourceBusSendPostEffect_Param
	{
	public:

		struct USoundSourceBus* SoundSourceBus; // 0x00(0x08)
		float SourceBusSendLevel; // 0x08(0x04)
	};

	struct Function_Engine_AudioComponent_SetSound_Param
	{
	public:

		struct USoundBase* NewSound; // 0x00(0x08)
	};

	struct Function_Engine_AudioComponent_SetPitchMultiplier_Param
	{
	public:

		float NewPitchMultiplier; // 0x00(0x04)
	};

	struct Function_Engine_AudioComponent_SetPaused_Param
	{
	public:

		bool bPause; // 0x00(0x01)
	};

	struct Function_Engine_AudioComponent_SetLowPassFilterFrequency_Param
	{
	public:

		float InLowPassFilterFrequency; // 0x00(0x04)
	};

	struct Function_Engine_AudioComponent_SetLowPassFilterEnabled_Param
	{
	public:

		bool InLowPassFilterEnabled; // 0x00(0x01)
	};

	struct Function_Engine_AudioComponent_SetIntParameter_Param
	{
	public:

		struct FName InName; // 0x00(0x08)
		int32_t inInt; // 0x08(0x04)
	};

	struct Function_Engine_AudioComponent_SetFloatParameter_Param
	{
	public:

		struct FName InName; // 0x00(0x08)
		float InFloat; // 0x08(0x04)
	};

	struct Function_Engine_AudioComponent_SetBoolParameter_Param
	{
	public:

		struct FName InName; // 0x00(0x08)
		bool InBool; // 0x08(0x01)
	};

	struct Function_Engine_AudioComponent_Play_Param
	{
	public:

		float StartTime; // 0x00(0x04)
	};

	struct Function_Engine_AudioComponent_IsPlaying_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_AudioComponent_HasCookedFFTData_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_AudioComponent_HasCookedAmplitudeEnvelopeData_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_AudioComponent_GetPlayState_Param
	{
	public:

		enum class EAudioComponentPlayState ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_AudioComponent_GetCookedFFTDataForAllPlayingSounds_Param
	{
	public:

		struct TArray<struct FSoundWaveSpectralDataPerSound> OutSoundWaveSpectralData; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_AudioComponent_GetCookedFFTData_Param
	{
	public:

		struct TArray<float> FrequenciesToGet; // 0x00(0x10)
		struct TArray<struct FSoundWaveSpectralData> OutSoundWaveSpectralData; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_Engine_AudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Param
	{
	public:

		struct TArray<struct FSoundWaveEnvelopeDataPerSound> OutEnvelopeData; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_AudioComponent_GetCookedEnvelopeData_Param
	{
	public:

		float OutEnvelopeData; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_Engine_AudioComponent_FadeOut_Param
	{
	public:

		float FadeOutDuration; // 0x00(0x04)
		float FadeVolumeLevel; // 0x04(0x04)
		enum class EAudioFaderCurve FadeCurve; // 0x08(0x01)
	};

	struct Function_Engine_AudioComponent_FadeIn_Param
	{
	public:

		float FadeInDuration; // 0x00(0x04)
		float FadeVolumeLevel; // 0x04(0x04)
		float StartTime; // 0x08(0x04)
		enum class EAudioFaderCurve FadeCurve; // 0x0c(0x01)
	};

	struct Function_Engine_AudioComponent_BP_GetAttenuationSettingsToApply_Param
	{
	public:

		struct FSoundAttenuationSettings OutAttenuationSettings; // 0x00(0x350)
		bool ReturnValue; // 0x350(0x01)
	};

	struct Function_Engine_AudioComponent_AdjustVolume_Param
	{
	public:

		float AdjustVolumeDuration; // 0x00(0x04)
		float AdjustVolumeLevel; // 0x04(0x04)
		enum class EAudioFaderCurve FadeCurve; // 0x08(0x01)
	};

	struct Function_Engine_AudioComponent_AdjustAttenuation_Param
	{
	public:

		struct FSoundAttenuationSettings InAttenuationSettings; // 0x00(0x350)
	};

	struct Function_Engine_CameraComponent_SetUseFieldOfViewForLOD_Param
	{
	public:

		bool bInUseFieldOfViewForLOD; // 0x00(0x01)
	};

	struct Function_Engine_CameraComponent_SetProjectionMode_Param
	{
	public:

		enum class ECameraProjectionMode InProjectionMode; // 0x00(0x01)
	};

	struct Function_Engine_CameraComponent_SetPostProcessBlendWeight_Param
	{
	public:

		float InPostProcessBlendWeight; // 0x00(0x04)
	};

	struct Function_Engine_CameraComponent_SetOrthoWidth_Param
	{
	public:

		float InOrthoWidth; // 0x00(0x04)
	};

	struct Function_Engine_CameraComponent_SetOrthoNearClipPlane_Param
	{
	public:

		float InOrthoNearClipPlane; // 0x00(0x04)
	};

	struct Function_Engine_CameraComponent_SetOrthoFarClipPlane_Param
	{
	public:

		float InOrthoFarClipPlane; // 0x00(0x04)
	};

	struct Function_Engine_CameraComponent_SetFieldOfView_Param
	{
	public:

		float InFieldOfView; // 0x00(0x04)
	};

	struct Function_Engine_CameraComponent_SetConstraintAspectRatio_Param
	{
	public:

		bool bInConstrainAspectRatio; // 0x00(0x01)
	};

	struct Function_Engine_CameraComponent_SetAspectRatio_Param
	{
	public:

		float InAspectRatio; // 0x00(0x04)
	};

	struct Function_Engine_CameraComponent_RemoveBlendable_Param
	{
	public:

	};

	struct Function_Engine_CameraComponent_OnCameraMeshHiddenChanged_Param
	{
	public:

	};

	struct Function_Engine_CameraComponent_GetCameraView_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
		char pad_4[0xc]; // 0x04(0x0c)
		struct FMinimalViewInfo DesiredView; // 0x10(0x9e0)
	};

	struct Function_Engine_CameraComponent_AddOrUpdateBlendable_Param
	{
	public:

	};

	struct Function_Engine_SpringArmComponent_IsCollisionFixApplied_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SpringArmComponent_GetUnfixedCameraPosition_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SpringArmComponent_GetTargetRotation_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SceneCaptureComponent_ShowOnlyComponent_Param
	{
	public:

		struct UPrimitiveComponent* InComponent; // 0x00(0x08)
	};

	struct Function_Engine_SceneCaptureComponent_ShowOnlyActorComponents_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
	};

	struct Function_Engine_SceneCaptureComponent_SetUseLiteRenderer_Param
	{
	public:

		bool bInUseLiteRenderer; // 0x00(0x01)
	};

	struct Function_Engine_SceneCaptureComponent_SetupIndependentFOV_Param
	{
	public:

		float InFOV; // 0x00(0x04)
	};

	struct Function_Engine_SceneCaptureComponent_SetCaptureSortPriority_Param
	{
	public:

		int32_t NewCaptureSortPriority; // 0x00(0x04)
	};

	struct Function_Engine_SceneCaptureComponent_RemoveShowOnlyComponent_Param
	{
	public:

		struct UPrimitiveComponent* InComponent; // 0x00(0x08)
	};

	struct Function_Engine_SceneCaptureComponent_RemoveShowOnlyActorComponents_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
	};

	struct Function_Engine_SceneCaptureComponent_HideComponent_Param
	{
	public:

		struct UPrimitiveComponent* InComponent; // 0x00(0x08)
	};

	struct Function_Engine_SceneCaptureComponent_HideActorComponents_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
	};

	struct Function_Engine_SceneCaptureComponent_ClearShowOnlyComponents_Param
	{
	public:

	};

	struct Function_Engine_SceneCaptureComponent_ClearHiddenComponents_Param
	{
	public:

	};

	struct Function_Engine_AtmosphericFogComponent_StartPrecompute_Param
	{
	public:

	};

	struct Function_Engine_AtmosphericFogComponent_SetSunMultiplier_Param
	{
	public:

		float NewSunMultiplier; // 0x00(0x04)
	};

	struct Function_Engine_AtmosphericFogComponent_SetStartDistance_Param
	{
	public:

		float NewStartDistance; // 0x00(0x04)
	};

	struct Function_Engine_AtmosphericFogComponent_SetPrecomputeParams_Param
	{
	public:

		float DensityHeight; // 0x00(0x04)
		int32_t MaxScatteringOrder; // 0x04(0x04)
		int32_t InscatterAltitudeSampleNum; // 0x08(0x04)
	};

	struct Function_Engine_AtmosphericFogComponent_SetFogMultiplier_Param
	{
	public:

		float NewFogMultiplier; // 0x00(0x04)
	};

	struct Function_Engine_AtmosphericFogComponent_SetDistanceScale_Param
	{
	public:

		float NewDistanceScale; // 0x00(0x04)
	};

	struct Function_Engine_AtmosphericFogComponent_SetDistanceOffset_Param
	{
	public:

		float NewDistanceOffset; // 0x00(0x04)
	};

	struct Function_Engine_AtmosphericFogComponent_SetDensityOffset_Param
	{
	public:

		float NewDensityOffset; // 0x00(0x04)
	};

	struct Function_Engine_AtmosphericFogComponent_SetDensityMultiplier_Param
	{
	public:

		float NewDensityMultiplier; // 0x00(0x04)
	};

	struct Function_Engine_AtmosphericFogComponent_SetDefaultLightColor_Param
	{
	public:

		struct FLinearColor NewLightColor; // 0x00(0x10)
	};

	struct Function_Engine_AtmosphericFogComponent_SetDefaultBrightness_Param
	{
	public:

		float NewBrightness; // 0x00(0x04)
	};

	struct Function_Engine_AtmosphericFogComponent_SetAltitudeScale_Param
	{
	public:

		float NewAltitudeScale; // 0x00(0x04)
	};

	struct Function_Engine_AtmosphericFogComponent_DisableSunDisk_Param
	{
	public:

		bool NewSunDisk; // 0x00(0x01)
	};

	struct Function_Engine_AtmosphericFogComponent_DisableGroundScattering_Param
	{
	public:

		bool NewGroundScattering; // 0x00(0x01)
	};

	struct Function_Engine_ChildActorComponent_SetChildActorClass_Param
	{
	public:

		struct UClass* InClass; // 0x00(0x08)
	};

	struct Function_Engine_DecalComponent_SetSortOrder_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_Engine_DecalComponent_SetFadeScreenSize_Param
	{
	public:

		float NewFadeScreenSize; // 0x00(0x04)
	};

	struct Function_Engine_DecalComponent_SetFadeOut_Param
	{
	public:

		float StartDelay; // 0x00(0x04)
		float Duration; // 0x04(0x04)
		bool DestroyOwnerAfterFade; // 0x08(0x01)
	};

	struct Function_Engine_DecalComponent_SetFadeIn_Param
	{
	public:

		float StartDelay; // 0x00(0x04)
		float Duaration; // 0x04(0x04)
	};

	struct Function_Engine_DecalComponent_SetDecalMaterial_Param
	{
	public:

		struct UMaterialInterface* NewDecalMaterial; // 0x00(0x08)
	};

	struct Function_Engine_DecalComponent_GetFadeStartDelay_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_DecalComponent_GetFadeInStartDelay_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_DecalComponent_GetFadeInDuration_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_DecalComponent_GetFadeDuration_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_DecalComponent_GetDecalMaterial_Param
	{
	public:

		struct UMaterialInterface* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_DecalComponent_CreateDynamicMaterialInstance_Param
	{
	public:

		struct UMaterialInstanceDynamic* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_LightComponentBase_SetSamplesPerPixel_Param
	{
	public:

		int32_t NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponentBase_SetCastVolumetricShadow_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponentBase_SetCastShadows_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponentBase_SetCastRaytracedShadow_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponentBase_SetCastPreShadow_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponentBase_SetCastDeepShadow_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponentBase_SetAffectWorlds_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponentBase_SetAffectVolumetricFogOnly_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponentBase_SetAffectReflection_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponentBase_SetAffectGlobalIllumination_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponentBase_GetLightColor_Param
	{
	public:

		struct FLinearColor ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetVolumetricLocalLight_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetVolumetricFogEmissive_Param
	{
	public:

		struct FLinearColor NewValue; // 0x00(0x10)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetVolumetricFogDistance_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetVolumetricFogAlbedo_Param
	{
	public:

		struct FColor NewValue; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetVolumetricFog_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetVolumetricExclude_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetStartDistance_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetSecondFogStartDistance_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetSecondFogHeightOffset_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetSecondFogHeightFalloff_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetSecondFogDensity_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetOverrideVolumetricFogDistance_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetIntroSecondFog_Param
	{
	public:

		bool Value; // 0x00(0x01)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetInscatteringTextureTint_Param
	{
	public:

		struct FLinearColor Value; // 0x00(0x10)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetInscatteringColorCubemap_Param
	{
	public:

		struct UTextureCube* Value; // 0x00(0x08)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetFogMaxOpacity_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetFogMapScaleOffset_Param
	{
	public:

		struct FVector4 Value; // 0x00(0x10)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetFogMapHeight3_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetFogMapHeight2_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetFogMapHeight1_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetFogInscatteringColor_Param
	{
	public:

		struct FLinearColor Value; // 0x00(0x10)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetFogHeightFalloff_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetFogDensity_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetFogCutoffDistance_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetDirectionalScale_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetDirectionalInscatteringColor_Param
	{
	public:

		struct FLinearColor Value; // 0x00(0x10)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetBPFogExtinctionOverride_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_ExponentialHeightFogComponent_SetBPFogAlbedoOverride_Param
	{
	public:

		struct FColor NewValue; // 0x00(0x04)
	};

	struct Function_Engine_ForceFeedbackComponent_Stop_Param
	{
	public:

	};

	struct Function_Engine_ForceFeedbackComponent_SetIntensityMultiplier_Param
	{
	public:

		float NewIntensityMultiplier; // 0x00(0x04)
	};

	struct Function_Engine_ForceFeedbackComponent_SetForceFeedbackEffect_Param
	{
	public:

		struct UForceFeedbackEffect* NewForceFeedbackEffect; // 0x00(0x08)
	};

	struct Function_Engine_ForceFeedbackComponent_Play_Param
	{
	public:

		float StartTime; // 0x00(0x04)
	};

	struct Function_Engine_ForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Param
	{
	public:

		struct FForceFeedbackAttenuationSettings OutAttenuationSettings; // 0x00(0xc8)
		bool ReturnValue; // 0xc8(0x01)
	};

	struct Function_Engine_ForceFeedbackComponent_AdjustAttenuation_Param
	{
	public:

		struct FForceFeedbackAttenuationSettings InAttenuationSettings; // 0x00(0xc8)
	};

	struct Function_Engine_NZSkyBoxComponent_SetFixedCameraStatus_Param
	{
	public:

		bool bFixed; // 0x00(0x01)
	};

	struct Function_Engine_NZSkyBoxComponent_GetIsInExposureVolume_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_NZSkyBoxComponent_DetectInteriorVolumeGap_Param
	{
	public:

		float GapSizeToDetect; // 0x00(0x04)
		float GapSizeAllowed; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Param
	{
	public:

		bool bEnableTwistDrive; // 0x00(0x01)
		bool bEnableSwingDrive; // 0x01(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetOrientationDriveSLERP_Param
	{
	public:

		bool bEnableSLERP; // 0x00(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetLinearZLimit_Param
	{
	public:

		enum class ELinearConstraintMotion ConstraintType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float LimitSize; // 0x04(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetLinearYLimit_Param
	{
	public:

		enum class ELinearConstraintMotion ConstraintType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float LimitSize; // 0x04(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetLinearXLimit_Param
	{
	public:

		enum class ELinearConstraintMotion ConstraintType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float LimitSize; // 0x04(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetLinearVelocityTarget_Param
	{
	public:

		struct FVector InVelTarget; // 0x00(0x0c)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetLinearVelocityDrive_Param
	{
	public:

		bool bEnableDriveX; // 0x00(0x01)
		bool bEnableDriveY; // 0x01(0x01)
		bool bEnableDriveZ; // 0x02(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetLinearPositionTarget_Param
	{
	public:

		struct FVector InPosTarget; // 0x00(0x0c)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetLinearPositionDrive_Param
	{
	public:

		bool bEnableDriveX; // 0x00(0x01)
		bool bEnableDriveY; // 0x01(0x01)
		bool bEnableDriveZ; // 0x02(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetLinearDriveParams_Param
	{
	public:

		float PositionStrength; // 0x00(0x04)
		float VelocityStrength; // 0x04(0x04)
		float InForceLimit; // 0x08(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetLinearBreakable_Param
	{
	public:

		bool bLinearBreakable; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float LinearBreakThreshold; // 0x04(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetDisableCollision_Param
	{
	public:

		bool bDisableCollision; // 0x00(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetConstraintReferencePosition_Param
	{
	public:

		enum class EConstraintFrame Frame; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector RefPosition; // 0x04(0x0c)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetConstraintReferenceOrientation_Param
	{
	public:

		enum class EConstraintFrame Frame; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector PriAxis; // 0x04(0x0c)
		struct FVector SecAxis; // 0x10(0x0c)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetConstraintReferenceFrame_Param
	{
	public:

		enum class EConstraintFrame Frame; // 0x00(0x01)
		char pad_1[0xf]; // 0x01(0x0f)
		struct FTransform RefFrame; // 0x10(0x30)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetConstrainedComponents_Param
	{
	public:

		struct UPrimitiveComponent* Component1; // 0x00(0x08)
		struct FName BoneName1; // 0x08(0x08)
		struct UPrimitiveComponent* Component2; // 0x10(0x08)
		struct FName BoneName2; // 0x18(0x08)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularVelocityTarget_Param
	{
	public:

		struct FVector InVelTarget; // 0x00(0x0c)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Param
	{
	public:

		bool bEnableTwistDrive; // 0x00(0x01)
		bool bEnableSwingDrive; // 0x01(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Param
	{
	public:

		bool bEnableSLERP; // 0x00(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularVelocityDrive_Param
	{
	public:

		bool bEnableSwingDrive; // 0x00(0x01)
		bool bEnableTwistDrive; // 0x01(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularTwistLimit_Param
	{
	public:

		enum class EAngularConstraintMotion ConstraintType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float TwistLimitAngle; // 0x04(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularSwing2Limit_Param
	{
	public:

		enum class EAngularConstraintMotion MotionType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Swing2LimitAngle; // 0x04(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularSwing1Limit_Param
	{
	public:

		enum class EAngularConstraintMotion MotionType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Swing1LimitAngle; // 0x04(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularOrientationTarget_Param
	{
	public:

		struct FRotator InPosTarget; // 0x00(0x0c)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularOrientationDrive_Param
	{
	public:

		bool bEnableSwingDrive; // 0x00(0x01)
		bool bEnableTwistDrive; // 0x01(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularDriveParams_Param
	{
	public:

		float PositionStrength; // 0x00(0x04)
		float VelocityStrength; // 0x04(0x04)
		float InForceLimit; // 0x08(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularDriveMode_Param
	{
	public:

		enum class EAngularDriveMode DriveMode; // 0x00(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_SetAngularBreakable_Param
	{
	public:

		bool bAngularBreakable; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float AngularBreakThreshold; // 0x04(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_IsBroken_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PhysicsConstraintComponent_GetCurrentTwist_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_GetCurrentSwing2_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_GetCurrentSwing1_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_PhysicsConstraintComponent_GetConstraintForce_Param
	{
	public:

		struct FVector OutLinearForce; // 0x00(0x0c)
		struct FVector OutAngularForce; // 0x0c(0x0c)
	};

	struct Function_Engine_PhysicsConstraintComponent_BreakConstraint_Param
	{
	public:

	};

	struct Function_Engine_PhysicsSpringComponent_GetSpringRestingPoint_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_PhysicsSpringComponent_GetSpringDirection_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_PhysicsSpringComponent_GetSpringCurrentEndPoint_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_PhysicsSpringComponent_GetNormalizedCompressionScalar_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_PostProcessComponent_AddOrUpdateBlendable_Param
	{
	public:

	};

	struct Function_Engine_RadialForceComponent_RemoveObjectTypeToAffect_Param
	{
	public:

		enum class EObjectTypeQuery ObjectType; // 0x00(0x01)
	};

	struct Function_Engine_RadialForceComponent_FireImpulse_Param
	{
	public:

	};

	struct Function_Engine_RadialForceComponent_AddObjectTypeToAffect_Param
	{
	public:

		enum class EObjectTypeQuery ObjectType; // 0x00(0x01)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetSkyLuminanceFactor_Param
	{
	public:

		struct FLinearColor NewValue; // 0x00(0x10)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetRayleighScatteringScale_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetRayleighScattering_Param
	{
	public:

		struct FLinearColor NewValue; // 0x00(0x10)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetRayleighExponentialDistribution_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetOtherAbsorptionScale_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetOtherAbsorption_Param
	{
	public:

		struct FLinearColor NewValue; // 0x00(0x10)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetMieScatteringScale_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetMieScattering_Param
	{
	public:

		struct FLinearColor NewValue; // 0x00(0x10)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetMieExponentialDistribution_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetMieAnisotropy_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetMieAbsorptionScale_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetMieAbsorption_Param
	{
	public:

		struct FLinearColor NewValue; // 0x00(0x10)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetHeightFogContribution_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_SkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_SkyAtmosphereComponent_OverrideAtmosphereLightDirection_Param
	{
	public:

		int32_t AtmosphereLightIndex; // 0x00(0x04)
		struct FVector LightDirection; // 0x04(0x0c)
	};

	struct Function_Engine_StereoLayerComponent_SetUVRect_Param
	{
	public:

		struct FBox2D InUVRect; // 0x00(0x14)
	};

	struct Function_Engine_StereoLayerComponent_SetTexture_Param
	{
	public:

		struct UTexture* InTexture; // 0x00(0x08)
	};

	struct Function_Engine_StereoLayerComponent_SetQuadSize_Param
	{
	public:

		struct FVector2D InQuadSize; // 0x00(0x08)
	};

	struct Function_Engine_StereoLayerComponent_SetPriority_Param
	{
	public:

		int32_t InPriority; // 0x00(0x04)
	};

	struct Function_Engine_StereoLayerComponent_SetLeftTexture_Param
	{
	public:

		struct UTexture* InTexture; // 0x00(0x08)
	};

	struct Function_Engine_StereoLayerComponent_SetEquirectProps_Param
	{
	public:

		struct FEquirectProps InScaleBiases; // 0x00(0x48)
	};

	struct Function_Engine_StereoLayerComponent_MarkTextureForUpdate_Param
	{
	public:

	};

	struct Function_Engine_StereoLayerComponent_GetUVRect_Param
	{
	public:

		struct FBox2D ReturnValue; // 0x00(0x14)
	};

	struct Function_Engine_StereoLayerComponent_GetTexture_Param
	{
	public:

		struct UTexture* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_StereoLayerComponent_GetQuadSize_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_StereoLayerComponent_GetPriority_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_StereoLayerComponent_GetLeftTexture_Param
	{
	public:

		struct UTexture* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_WindDirectionalSourceComponent_SetWindType_Param
	{
	public:

		enum class EWindSourceType InNewType; // 0x00(0x01)
	};

	struct Function_Engine_WindDirectionalSourceComponent_SetStrength_Param
	{
	public:

		float InNewStrength; // 0x00(0x04)
	};

	struct Function_Engine_WindDirectionalSourceComponent_SetSpeed_Param
	{
	public:

		float InNewSpeed; // 0x00(0x04)
	};

	struct Function_Engine_WindDirectionalSourceComponent_SetRadius_Param
	{
	public:

		float InNewRadius; // 0x00(0x04)
	};

	struct Function_Engine_WindDirectionalSourceComponent_SetMinimumGustAmount_Param
	{
	public:

		float InNewMinGust; // 0x00(0x04)
	};

	struct Function_Engine_WindDirectionalSourceComponent_SetMaximumGustAmount_Param
	{
	public:

		float InNewMaxGust; // 0x00(0x04)
	};

	struct Function_Engine_ProjectileMovementComponent_StopSimulating_Param
	{
	public:

		struct FHitResult HitResult; // 0x00(0x88)
	};

	struct Function_Engine_ProjectileMovementComponent_SetVelocityInLocalSpace_Param
	{
	public:

		struct FVector NewVelocity; // 0x00(0x0c)
	};

	struct Function_Engine_ProjectileMovementComponent_SetInterpolatedComponent_Param
	{
	public:

		struct USceneComponent* Component; // 0x00(0x08)
	};

	struct Function_Engine_ProjectileMovementComponent_ResetInterpolation_Param
	{
	public:

	};

	struct DelegateFunction_Engine_ProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
	};

	struct DelegateFunction_Engine_ProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
		struct FVector ImpactVelocity; // 0x88(0x0c)
	};

	struct Function_Engine_ProjectileMovementComponent_MoveInterpolationTarget_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
		struct FRotator NewRotation; // 0x0c(0x0c)
	};

	struct Function_Engine_ProjectileMovementComponent_LimitVelocity_Param
	{
	public:

		struct FVector NewVelocity; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_ProjectileMovementComponent_IsVelocityUnderSimulationThreshold_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_ProjectileMovementComponent_IsInterpolationComplete_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_NavMovementComponent_StopMovementKeepPathing_Param
	{
	public:

	};

	struct Function_Engine_NavMovementComponent_StopActiveMovement_Param
	{
	public:

	};

	struct Function_Engine_NavMovementComponent_IsSwimming_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_NavMovementComponent_IsMovingOnGround_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_NavMovementComponent_IsFlying_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_NavMovementComponent_IsFalling_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_NavMovementComponent_IsCrouching_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_InterpToMovementComponent_StopSimulating_Param
	{
	public:

		struct FHitResult HitResult; // 0x00(0x88)
	};

	struct Function_Engine_InterpToMovementComponent_RestartMovement_Param
	{
	public:

		float InitialDirection; // 0x00(0x04)
	};

	struct DelegateFunction_Engine_InterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
		float Time; // 0x88(0x04)
	};

	struct DelegateFunction_Engine_InterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
		float Time; // 0x88(0x04)
	};

	struct DelegateFunction_Engine_InterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
		float Time; // 0x88(0x04)
	};

	struct DelegateFunction_Engine_InterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
		float Time; // 0x88(0x04)
	};

	struct DelegateFunction_Engine_InterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
		float Time; // 0x88(0x04)
	};

	struct Function_Engine_InterpToMovementComponent_FinaliseControlPoints_Param
	{
	public:

	};

	struct Function_Engine_AsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FPrimaryAssetId PrimaryAsset; // 0x08(0x10)
		struct TArray<struct FName> LoadBundles; // 0x18(0x10)
		struct UAsyncActionLoadPrimaryAsset* ReturnValue; // 0x28(0x08)
	};

	struct Function_Engine_AsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FPrimaryAssetId PrimaryAsset; // 0x08(0x10)
		struct TArray<struct FName> LoadBundles; // 0x18(0x10)
		struct UAsyncActionLoadPrimaryAssetClass* ReturnValue; // 0x28(0x08)
	};

	struct Function_Engine_AsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct TArray<struct FPrimaryAssetId> PrimaryAssetList; // 0x08(0x10)
		struct TArray<struct FName> LoadBundles; // 0x18(0x10)
		struct UAsyncActionLoadPrimaryAssetList* ReturnValue; // 0x28(0x08)
	};

	struct Function_Engine_AsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct TArray<struct FPrimaryAssetId> PrimaryAssetList; // 0x08(0x10)
		struct TArray<struct FName> LoadBundles; // 0x18(0x10)
		struct UAsyncActionLoadPrimaryAssetClassList* ReturnValue; // 0x28(0x08)
	};

	struct Function_Engine_AsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct TArray<struct FPrimaryAssetId> PrimaryAssetList; // 0x08(0x10)
		struct TArray<struct FName> AddBundles; // 0x18(0x10)
		struct TArray<struct FName> RemoveBundles; // 0x28(0x10)
		struct UAsyncActionChangePrimaryAssetBundles* ReturnValue; // 0x38(0x08)
	};

	struct Function_Engine_AsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct TArray<struct FName> NewBundles; // 0x08(0x10)
		struct TArray<struct FName> OldBundles; // 0x18(0x10)
		struct UAsyncActionChangePrimaryAssetBundles* ReturnValue; // 0x28(0x08)
	};

	struct Function_Engine_Texture2D_Blueprint_GetSizeY_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_Texture2D_Blueprint_GetSizeX_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_RuntimeStaticMesh_CreateRuntimeStaticMesh_Param
	{
	public:

		struct UPackage* Package; // 0x00(0x08)
		struct URuntimeStaticMesh* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_RuntimeSkeletalMesh_CreateRuntimeSkeletalMesh_Param
	{
	public:

		struct UPackage* Package; // 0x00(0x08)
		struct URuntimeSkeletalMesh* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_MaterialInstanceConstant_K2_GetVectorParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct FLinearColor ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_MaterialInstanceConstant_K2_GetTextureParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct UTexture* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_MaterialInstanceConstant_K2_GetScalarParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_MaterialInstanceDynamic_SetVectorParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct FLinearColor Value; // 0x08(0x10)
	};

	struct Function_Engine_MaterialInstanceDynamic_SetTextureParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct UTexture* Value; // 0x08(0x08)
	};

	struct Function_Engine_MaterialInstanceDynamic_SetSpriteTextureParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct UObject* Value; // 0x08(0x08)
	};

	struct Function_Engine_MaterialInstanceDynamic_SetScalarParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		float Value; // 0x08(0x04)
	};

	struct Function_Engine_MaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Param
	{
	public:

		struct UMaterialInstance* SourceA; // 0x00(0x08)
		struct UMaterialInstance* SourceB; // 0x08(0x08)
		float Alpha; // 0x10(0x04)
	};

	struct Function_Engine_MaterialInstanceDynamic_K2_GetVectorParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct FLinearColor ReturnValue; // 0x08(0x10)
	};

	struct Function_Engine_MaterialInstanceDynamic_K2_GetTextureParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct UTexture* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_MaterialInstanceDynamic_K2_GetScalarParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_MaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Param
	{
	public:

		struct UMaterialInterface* Source; // 0x00(0x08)
		bool bQuickParametersOnly; // 0x08(0x01)
	};

	struct Function_Engine_MaterialInstanceDynamic_CopyParameterOverrides_Param
	{
	public:

		struct UMaterialInstance* MaterialInstance; // 0x00(0x08)
	};

	struct Function_Engine_MaterialInstanceDynamic_CopyInterpParameters_Param
	{
	public:

		struct UMaterialInstance* Source; // 0x00(0x08)
	};

	struct Function_Engine_GameMode_StartMatch_Param
	{
	public:

	};

	struct Function_Engine_GameMode_SetBandwidthLimit_Param
	{
	public:

		float AsyncIOBandwidthLimit; // 0x00(0x04)
	};

	struct Function_Engine_GameMode_Say_Param
	{
	public:

		struct FString Msg; // 0x00(0x10)
	};

	struct Function_Engine_GameMode_RestartGame_Param
	{
	public:

	};

	struct Function_Engine_GameMode_ReadyToStartMatch_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameMode_ReadyToEndMatch_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameMode_K2_OnSetMatchState_Param
	{
	public:

		struct FName NewState; // 0x00(0x08)
	};

	struct Function_Engine_GameMode_IsMatchInProgress_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameMode_HasMatchEnded_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_GameMode_GetMatchState_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_GameMode_EndMatch_Param
	{
	public:

	};

	struct Function_Engine_GameMode_AbortMatch_Param
	{
	public:

	};

	struct Function_Engine_GameState_OnRep_MatchState_Param
	{
	public:

	};

	struct Function_Engine_GameState_OnRep_ElapsedTime_Param
	{
	public:

	};

	struct Function_Engine_AudioVolume_SetReverbSettings_Param
	{
	public:

		struct FReverbSettings NewReverbSettings; // 0x00(0x20)
	};

	struct Function_Engine_AudioVolume_SetPriority_Param
	{
	public:

		float NewPriority; // 0x00(0x04)
	};

	struct Function_Engine_AudioVolume_SetInteriorSettings_Param
	{
	public:

		struct FInteriorSettings NewInteriorSettings; // 0x00(0x24)
	};

	struct Function_Engine_AudioVolume_SetEnabled_Param
	{
	public:

		bool bNewEnabled; // 0x00(0x01)
	};

	struct Function_Engine_AudioVolume_OnRep_bEnabled_Param
	{
	public:

	};

	struct Function_Engine_PostProcessVolume_SetAsyncLMT_LUT_Param
	{
	public:

	};

	struct Function_Engine_PostProcessVolume_SetAsyncColorGradingLUT_Param
	{
	public:

	};

	struct Function_Engine_PostProcessVolume_AddOrUpdateBlendableViewSize_Param
	{
	public:

	};

	struct Function_Engine_PostProcessVolume_AddOrUpdateBlendable_Param
	{
	public:

	};

	struct Function_Engine_DebugCameraController_ToggleDisplay_Param
	{
	public:

	};

	struct Function_Engine_DebugCameraController_ShowDebugSelectedInfo_Param
	{
	public:

	};

	struct Function_Engine_DebugCameraController_SetPawnMovementSpeedScale_Param
	{
	public:

		float NewSpeedScale; // 0x00(0x04)
	};

	struct Function_Engine_DebugCameraController_ReceiveOnDeactivate_Param
	{
	public:

		struct APlayerController* RestoredPC; // 0x00(0x08)
	};

	struct Function_Engine_DebugCameraController_ReceiveOnActorSelected_Param
	{
	public:

		struct AActor* NewSelectedActor; // 0x00(0x08)
		struct FVector SelectHitLocation; // 0x08(0x0c)
		struct FVector SelectHitNormal; // 0x14(0x0c)
		struct FHitResult Hit; // 0x20(0x88)
	};

	struct Function_Engine_DebugCameraController_ReceiveOnActivate_Param
	{
	public:

		struct APlayerController* OriginalPC; // 0x00(0x08)
	};

	struct Function_Engine_DebugCameraController_GetSelectedActor_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SplineComponent_UpdateSpline_Param
	{
	public:

	};

	struct Function_Engine_SplineComponent_SetWorldLocationAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		struct FVector InLocation; // 0x04(0x0c)
	};

	struct Function_Engine_SplineComponent_SetUpVectorAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		struct FVector InUpVector; // 0x04(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x10(0x01)
		bool bUpdateSpline; // 0x11(0x01)
	};

	struct Function_Engine_SplineComponent_SetUnselectedSplineSegmentColor_Param
	{
	public:

		struct FLinearColor SegmentColor; // 0x00(0x10)
	};

	struct Function_Engine_SplineComponent_SetTangentsAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		struct FVector InArriveTangent; // 0x04(0x0c)
		struct FVector InLeaveTangent; // 0x10(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x1c(0x01)
		bool bUpdateSpline; // 0x1d(0x01)
	};

	struct Function_Engine_SplineComponent_SetTangentAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		struct FVector InTangent; // 0x04(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x10(0x01)
		bool bUpdateSpline; // 0x11(0x01)
	};

	struct Function_Engine_SplineComponent_SetSplineWorldPoints_Param
	{
	public:

		struct TArray<struct FVector> Points; // 0x00(0x10)
	};

	struct Function_Engine_SplineComponent_SetSplinePointType_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplinePointType Type; // 0x04(0x01)
		bool bUpdateSpline; // 0x05(0x01)
	};

	struct Function_Engine_SplineComponent_SetSplinePoints_Param
	{
	public:

		struct TArray<struct FVector> Points; // 0x00(0x10)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x10(0x01)
		bool bUpdateSpline; // 0x11(0x01)
	};

	struct Function_Engine_SplineComponent_SetSplineLocalPoints_Param
	{
	public:

		struct TArray<struct FVector> Points; // 0x00(0x10)
	};

	struct Function_Engine_SplineComponent_SetSelectedSplineSegmentColor_Param
	{
	public:

		struct FLinearColor SegmentColor; // 0x00(0x10)
	};

	struct Function_Engine_SplineComponent_SetLocationAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		struct FVector InLocation; // 0x04(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x10(0x01)
		bool bUpdateSpline; // 0x11(0x01)
	};

	struct Function_Engine_SplineComponent_SetDrawDebug_Param
	{
	public:

		bool bShow; // 0x00(0x01)
	};

	struct Function_Engine_SplineComponent_SetDefaultUpVector_Param
	{
	public:

		struct FVector UpVector; // 0x00(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x0c(0x01)
	};

	struct Function_Engine_SplineComponent_SetClosedLoopAtPosition_Param
	{
	public:

		bool bInClosedLoop; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Key; // 0x04(0x04)
		bool bUpdateSpline; // 0x08(0x01)
	};

	struct Function_Engine_SplineComponent_SetClosedLoop_Param
	{
	public:

		bool bInClosedLoop; // 0x00(0x01)
		bool bUpdateSpline; // 0x01(0x01)
	};

	struct Function_Engine_SplineComponent_RemoveSplinePoint_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		bool bUpdateSpline; // 0x04(0x01)
	};

	struct Function_Engine_SplineComponent_IsClosedLoop_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SplineComponent_GetWorldTangentAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_SplineComponent_GetWorldRotationAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		bool bUseConstantVelocity; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FRotator ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetWorldRotationAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		struct FRotator ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_SplineComponent_GetWorldLocationAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		bool bUseConstantVelocity; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetWorldLocationAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_SplineComponent_GetWorldLocationAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_SplineComponent_GetWorldDirectionAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		bool bUseConstantVelocity; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetWorldDirectionAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_SplineComponent_GetVectorPropertyAtSplinePoint_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		struct FName PropertyName; // 0x04(0x08)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_SplineComponent_GetVectorPropertyAtSplineInputKey_Param
	{
	public:

		float InKey; // 0x00(0x04)
		struct FName PropertyName; // 0x04(0x08)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_SplineComponent_GetUpVectorAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		bool bUseConstantVelocity; // 0x05(0x01)
		char pad_6[0x2]; // 0x06(0x02)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetUpVectorAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetUpVectorAtSplineInputKey_Param
	{
	public:

		float InKey; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetUpVectorAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetTransformAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		bool bUseConstantVelocity; // 0x05(0x01)
		bool bUseScale; // 0x06(0x01)
		char pad_7[0x9]; // 0x07(0x09)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_Engine_SplineComponent_GetTransformAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		bool bUseScale; // 0x05(0x01)
		char pad_6[0xa]; // 0x06(0x0a)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_Engine_SplineComponent_GetTransformAtSplineInputKey_Param
	{
	public:

		float InKey; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		bool bUseScale; // 0x05(0x01)
		char pad_6[0xa]; // 0x06(0x0a)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_Engine_SplineComponent_GetTransformAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		bool bUseScale; // 0x05(0x01)
		char pad_6[0xa]; // 0x06(0x0a)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_Engine_SplineComponent_GetTangentAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		bool bUseConstantVelocity; // 0x05(0x01)
		char pad_6[0x2]; // 0x06(0x02)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetTangentAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetTangentAtSplineInputKey_Param
	{
	public:

		float InKey; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetTangentAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetSplinePointType_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplinePointType ReturnValue; // 0x04(0x01)
	};

	struct Function_Engine_SplineComponent_GetSplineLength_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SplineComponent_GetScaleAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		bool bUseConstantVelocity; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetScaleAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_SplineComponent_GetScaleAtSplineInputKey_Param
	{
	public:

		float InKey; // 0x00(0x04)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_SplineComponent_GetScaleAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_SplineComponent_GetRotationAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		bool bUseConstantVelocity; // 0x05(0x01)
		char pad_6[0x2]; // 0x06(0x02)
		struct FRotator ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetRotationAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FRotator ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetRotationAtSplineInputKey_Param
	{
	public:

		float InKey; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FRotator ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetRotationAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FRotator ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetRollAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		bool bUseConstantVelocity; // 0x05(0x01)
		char pad_6[0x2]; // 0x06(0x02)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_SplineComponent_GetRollAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_SplineComponent_GetRollAtSplineInputKey_Param
	{
	public:

		float InKey; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_SplineComponent_GetRollAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_SplineComponent_GetRightVectorAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		bool bUseConstantVelocity; // 0x05(0x01)
		char pad_6[0x2]; // 0x06(0x02)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetRightVectorAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetRightVectorAtSplineInputKey_Param
	{
	public:

		float InKey; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetRightVectorAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetNumberOfSplineSegments_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SplineComponent_GetNumberOfSplinePoints_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SplineComponent_GetLocationAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		bool bUseConstantVelocity; // 0x05(0x01)
		char pad_6[0x2]; // 0x06(0x02)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetLocationAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetLocationAtSplineInputKey_Param
	{
	public:

		float InKey; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetLocationAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetLocationAndTangentAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		struct FVector Location; // 0x04(0x0c)
		struct FVector Tangent; // 0x10(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x1c(0x01)
	};

	struct Function_Engine_SplineComponent_GetLocalLocationAndTangentAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		struct FVector LocalLocation; // 0x04(0x0c)
		struct FVector LocalTangent; // 0x10(0x0c)
	};

	struct Function_Engine_SplineComponent_GetLeaveTangentAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetInputKeyAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_SplineComponent_GetFloatPropertyAtSplinePoint_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		struct FName PropertyName; // 0x04(0x08)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_SplineComponent_GetFloatPropertyAtSplineInputKey_Param
	{
	public:

		float InKey; // 0x00(0x04)
		struct FName PropertyName; // 0x04(0x08)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_SplineComponent_GetDistanceAlongSplineAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_Engine_SplineComponent_GetDirectionAtTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		bool bUseConstantVelocity; // 0x05(0x01)
		char pad_6[0x2]; // 0x06(0x02)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetDirectionAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetDirectionAtSplineInputKey_Param
	{
	public:

		float InKey; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetDirectionAtDistanceAlongSpline_Param
	{
	public:

		float Distance; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_GetDefaultUpVector_Param
	{
	public:

		enum class ESplineCoordinateSpace CoordinateSpace; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_SplineComponent_GetArriveTangentAtSplinePoint_Param
	{
	public:

		int32_t PointIndex; // 0x00(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_Engine_SplineComponent_FindUpVectorClosestToWorldLocation_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_SplineComponent_FindTransformClosestToWorldLocation_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x0c(0x01)
		bool bUseScale; // 0x0d(0x01)
		char pad_E[0x2]; // 0x0e(0x02)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_Engine_SplineComponent_FindTangentClosestToWorldLocation_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_SplineComponent_FindScaleClosestToWorldLocation_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_SplineComponent_FindRotationClosestToWorldLocation_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FRotator ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_SplineComponent_FindRollClosestToWorldLocation_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_Engine_SplineComponent_FindRightVectorClosestToWorldLocation_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_SplineComponent_FindLocationClosestToWorldLocation_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_SplineComponent_FindInputKeyClosestToWorldLocation_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_SplineComponent_FindDirectionClosestToWorldLocation_Param
	{
	public:

		struct FVector WorldLocation; // 0x00(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_Engine_SplineComponent_ClearSplinePoints_Param
	{
	public:

		bool bUpdateSpline; // 0x00(0x01)
	};

	struct Function_Engine_SplineComponent_AddSplineWorldPoint_Param
	{
	public:

		struct FVector Position; // 0x00(0x0c)
	};

	struct Function_Engine_SplineComponent_AddSplinePointAtIndex_Param
	{
	public:

		struct FVector Position; // 0x00(0x0c)
		int32_t Index; // 0x0c(0x04)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x10(0x01)
		bool bUpdateSpline; // 0x11(0x01)
	};

	struct Function_Engine_SplineComponent_AddSplinePoint_Param
	{
	public:

		struct FVector Position; // 0x00(0x0c)
		enum class ESplineCoordinateSpace CoordinateSpace; // 0x0c(0x01)
		bool bUpdateSpline; // 0x0d(0x01)
	};

	struct Function_Engine_SplineComponent_AddSplineLocalPoint_Param
	{
	public:

		struct FVector Position; // 0x00(0x0c)
	};

	struct Function_Engine_SplineComponent_AddPoints_Param
	{
	public:

		struct TArray<struct FSplinePoint> Points; // 0x00(0x10)
		bool bUpdateSpline; // 0x10(0x01)
	};

	struct Function_Engine_SplineComponent_AddPoint_Param
	{
	public:

		struct FSplinePoint Point; // 0x00(0x44)
		bool bUpdateSpline; // 0x44(0x01)
	};

	struct Function_Engine_MeshComponent_SetVectorParameterValueOnMaterials_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct FVector ParameterValue; // 0x08(0x0c)
	};

	struct Function_Engine_MeshComponent_SetScalarParameterValueOnMaterials_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		float ParameterValue; // 0x08(0x04)
	};

	struct Function_Engine_MeshComponent_PrestreamTextures_Param
	{
	public:

		float Seconds; // 0x00(0x04)
		bool bPrioritizeCharacterTextures; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		int32_t CinematicTextureGroups; // 0x08(0x04)
	};

	struct Function_Engine_MeshComponent_IsMaterialSlotNameValid_Param
	{
	public:

		struct FName MaterialSlotName; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_MeshComponent_GetMaterialSlotNames_Param
	{
	public:

		struct TArray<struct FName> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_MeshComponent_GetMaterials_Param
	{
	public:

		struct TArray<struct UMaterialInterface*> ReturnValue; // 0x00(0x10)
	};

	struct Function_Engine_MeshComponent_GetMaterialIndex_Param
	{
	public:

		struct FName MaterialSlotName; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_FXSystemComponent_SetVectorParameter_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct FVector Param; // 0x08(0x0c)
	};

	struct Function_Engine_FXSystemComponent_SetUseAutoManageAttachment_Param
	{
	public:

		bool bAutoManage; // 0x00(0x01)
	};

	struct Function_Engine_FXSystemComponent_SetFloatParameter_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		float Param; // 0x08(0x04)
	};

	struct Function_Engine_FXSystemComponent_SetEmitterEnable_Param
	{
	public:

		struct FName EmitterName; // 0x00(0x08)
		bool bNewEnableState; // 0x08(0x01)
	};

	struct Function_Engine_FXSystemComponent_SetColorParameter_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct FLinearColor Param; // 0x08(0x10)
	};

	struct Function_Engine_FXSystemComponent_SetAutoAttachmentParameters_Param
	{
	public:

		struct USceneComponent* Parent; // 0x00(0x08)
		struct FName SocketName; // 0x08(0x08)
		enum class EAttachmentRule LocationRule; // 0x10(0x01)
		enum class EAttachmentRule RotationRule; // 0x11(0x01)
		enum class EAttachmentRule ScaleRule; // 0x12(0x01)
	};

	struct Function_Engine_FXSystemComponent_SetActorParameter_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct AActor* Param; // 0x08(0x08)
	};

	struct Function_Engine_FXSystemComponent_ReleaseToPool_Param
	{
	public:

	};

	struct Function_Engine_FXSystemComponent_GetFXSystemAsset_Param
	{
	public:

		struct UFXSystemAsset* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_ArrowComponent_SetArrowColor_Param
	{
	public:

		struct FLinearColor NewColor; // 0x00(0x10)
	};

	struct Function_Engine_BillboardComponent_SetUV_Param
	{
	public:

		int32_t NewU; // 0x00(0x04)
		int32_t NewUL; // 0x04(0x04)
		int32_t NewV; // 0x08(0x04)
		int32_t NewVL; // 0x0c(0x04)
	};

	struct Function_Engine_BillboardComponent_SetSpriteAndUV_Param
	{
	public:

		struct UTexture2D* NewSprite; // 0x00(0x08)
		int32_t NewU; // 0x08(0x04)
		int32_t NewUL; // 0x0c(0x04)
		int32_t NewV; // 0x10(0x04)
		int32_t NewVL; // 0x14(0x04)
	};

	struct Function_Engine_BillboardComponent_SetSprite_Param
	{
	public:

		struct UTexture2D* NewSprite; // 0x00(0x08)
	};

	struct Function_Engine_MaterialBillboardComponent_SetElements_Param
	{
	public:

		struct TArray<struct FMaterialSpriteElement> NewElements; // 0x00(0x10)
	};

	struct Function_Engine_MaterialBillboardComponent_AddElement_Param
	{
	public:

		struct UMaterialInterface* Material; // 0x00(0x08)
		struct UCurveFloat* DistanceToOpacityCurve; // 0x08(0x08)
		bool bSizeIsInScreenSpace; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float BaseSizeX; // 0x14(0x04)
		float BaseSizeY; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x08)
	};

	struct Function_Engine_TextRenderComponent_SetYScale_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_TextRenderComponent_SetXScale_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_TextRenderComponent_SetWorldSize_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_TextRenderComponent_SetVertSpacingAdjust_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_TextRenderComponent_SetVerticalAlignment_Param
	{
	public:

		enum class EVerticalTextAligment Value; // 0x00(0x01)
	};

	struct Function_Engine_TextRenderComponent_SetTextRenderColor_Param
	{
	public:

		struct FColor Value; // 0x00(0x04)
	};

	struct Function_Engine_TextRenderComponent_SetTextMaterial_Param
	{
	public:

		struct UMaterialInterface* Material; // 0x00(0x08)
	};

	struct Function_Engine_TextRenderComponent_SetText_Param
	{
	public:

		struct FString Value; // 0x00(0x10)
	};

	struct Function_Engine_TextRenderComponent_SetHorizSpacingAdjust_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_Engine_TextRenderComponent_SetHorizontalAlignment_Param
	{
	public:

		enum class EHorizTextAligment Value; // 0x00(0x01)
	};

	struct Function_Engine_TextRenderComponent_SetFont_Param
	{
	public:

		struct UFont* Value; // 0x00(0x08)
	};

	struct Function_Engine_TextRenderComponent_K2_SetText_Param
	{
	public:

		struct FText Value; // 0x00(0x18)
	};

	struct Function_Engine_TextRenderComponent_GetTextWorldSize_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_TextRenderComponent_GetTextLocalSize_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_VectorFieldComponent_SetIntensity_Param
	{
	public:

		float NewIntensity; // 0x00(0x04)
	};

	struct Function_Engine_SceneCaptureComponent2D_CaptureScene_Param
	{
	public:

	};

	struct Function_Engine_SceneCaptureComponent2D_AddOrUpdateBlendable_Param
	{
	public:

	};

	struct Function_Engine_SceneCaptureComponentCube_CaptureScene_Param
	{
	public:

	};

	struct Function_Engine_LightComponent_SetWaterCausticsPrecision_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetWaterCausticsMapCascadeScale_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetVolumetricScatteringIntensity_Param
	{
	public:

		float NewIntensity; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetUseIESBrightness_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponent_SetTransmission_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponent_SetTemperature_Param
	{
	public:

		float NewTemperature; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetSpecularScale_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetShadowSlopeBias_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetShadowBias_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetNumWaterCausticsMapCascades_Param
	{
	public:

		int32_t NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetMeshCausticsResolution_Param
	{
	public:

		enum class ERayTracingMeshCausticsResolution NewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponent_SetMaxDrawDistance_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetLightFunctionScale_Param
	{
	public:

		struct FVector NewLightFunctionScale; // 0x00(0x0c)
	};

	struct Function_Engine_LightComponent_SetLightFunctionMaterial_Param
	{
	public:

		struct UMaterialInterface* NewLightFunctionMaterial; // 0x00(0x08)
	};

	struct Function_Engine_LightComponent_SetLightFunctionFadeDistance_Param
	{
	public:

		float NewLightFunctionFadeDistance; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetLightFunctionDisabledBrightness_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetLightColor_Param
	{
	public:

		struct FLinearColor NewLightColor; // 0x00(0x10)
		bool bSRGB; // 0x10(0x01)
	};

	struct Function_Engine_LightComponent_SetIsUseTemperature_Param
	{
	public:

		bool UseTemperature; // 0x00(0x01)
	};

	struct Function_Engine_LightComponent_SetIntensity_Param
	{
	public:

		float NewIntensity; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetIndirectLightingIntensity_Param
	{
	public:

		float NewIntensity; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetIESTexture_Param
	{
	public:

		struct UTextureLightProfile* NewValue; // 0x00(0x08)
	};

	struct Function_Engine_LightComponent_SetIESBrightnessScale_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetForceCachedShadowsForMovablePrimitives_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponent_SetEnableLightShaftBloom_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponent_SetBloomTint_Param
	{
	public:

		struct FColor NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetBloomThreshold_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetBloomScale_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetBloomMaxBrightness_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LightComponent_SetAsyncLightFunctionMaterial_Param
	{
	public:

	};

	struct Function_Engine_LightComponent_SetAffectWaterCaustics_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponent_SetAffectTranslucentLighting_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponent_SetAffectMeshCaustics_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponent_SetAffectDynamicIndirectLighting_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_LightComponent_GetMaxDrawDistance_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkyLightComponent_SetVolumetricScatteringIntensity_Param
	{
	public:

		float NewIntensity; // 0x00(0x04)
	};

	struct Function_Engine_SkyLightComponent_SetReflectionCubemap_Param
	{
	public:

		struct UTextureCube* NewCubemap; // 0x00(0x08)
	};

	struct Function_Engine_SkyLightComponent_SetOcclusionTint_Param
	{
	public:

		struct FColor InTint; // 0x00(0x04)
	};

	struct Function_Engine_SkyLightComponent_SetOcclusionExponent_Param
	{
	public:

		float InOcclusionExponent; // 0x00(0x04)
	};

	struct Function_Engine_SkyLightComponent_SetOcclusionContrast_Param
	{
	public:

		float InOcclusionContrast; // 0x00(0x04)
	};

	struct Function_Engine_SkyLightComponent_SetMinOcclusion_Param
	{
	public:

		float InMinOcclusion; // 0x00(0x04)
	};

	struct Function_Engine_SkyLightComponent_SetLowerHemisphereColor_Param
	{
	public:

		struct FLinearColor InLowerHemisphereColor; // 0x00(0x10)
	};

	struct Function_Engine_SkyLightComponent_SetLightColor_Param
	{
	public:

		struct FLinearColor NewLightColor; // 0x00(0x10)
	};

	struct Function_Engine_SkyLightComponent_SetIntensity_Param
	{
	public:

		float NewIntensity; // 0x00(0x04)
	};

	struct Function_Engine_SkyLightComponent_SetIndirectLightingIntensity_Param
	{
	public:

		float NewIntensity; // 0x00(0x04)
	};

	struct Function_Engine_SkyLightComponent_SetCubemapBlend_Param
	{
	public:

		struct UTextureCube* SourceCubemap; // 0x00(0x08)
		struct UTextureCube* DestinationCubemap; // 0x08(0x08)
		float InBlendFraction; // 0x10(0x04)
	};

	struct Function_Engine_SkyLightComponent_SetCubemap_Param
	{
	public:

		struct UTextureCube* NewCubemap; // 0x00(0x08)
	};

	struct Function_Engine_SkyLightComponent_SetAsyncLoadCubemap_Param
	{
	public:

	};

	struct Function_Engine_SkyLightComponent_RecaptureSky_Param
	{
	public:

	};

	struct Function_Engine_PawnMovementComponent_K2_GetInputVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_PawnMovementComponent_IsMoveInputIgnored_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_PawnMovementComponent_GetPendingInputVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_PawnMovementComponent_GetPawnOwner_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_PawnMovementComponent_GetLastInputVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_PawnMovementComponent_ConsumeInputVector_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_PawnMovementComponent_AddInputVector_Param
	{
	public:

		struct FVector WorldVector; // 0x00(0x0c)
		bool bForce; // 0x0c(0x01)
	};

	struct Function_Engine_CurveLinearColorAtlas_GetCurvePosition_Param
	{
	public:

		struct UCurveLinearColor* InCurve; // 0x00(0x08)
		float Position; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_Engine_AnimMontage_GetDefaultBlendOutTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_StaticMeshComponent_SetStaticMesh_Param
	{
	public:

		struct UStaticMesh* NewMesh; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_StaticMeshComponent_SetReverseCulling_Param
	{
	public:

		bool ReverseCulling; // 0x00(0x01)
	};

	struct Function_Engine_StaticMeshComponent_SetForcedLodModel_Param
	{
	public:

		int32_t NewForcedLodModel; // 0x00(0x04)
	};

	struct Function_Engine_StaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_Engine_StaticMeshComponent_SetEvaluateWorldPositionOffset_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_Engine_StaticMeshComponent_SetDistanceFieldSelfShadowBias_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_StaticMeshComponent_SetCustomLocalBoundsForLOD_Param
	{
	public:

		bool bUseCustomBounds; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FBoxSphereBounds NewBounds; // 0x04(0x1c)
	};

	struct Function_Engine_StaticMeshComponent_OnRep_StaticMesh_Param
	{
	public:

		struct UStaticMesh* OldStaticMesh; // 0x00(0x08)
	};

	struct Function_Engine_StaticMeshComponent_GetLocalBounds_Param
	{
	public:

		struct FVector Min; // 0x00(0x0c)
		struct FVector Max; // 0x0c(0x0c)
	};

	struct Function_Engine_StaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_UnloadSkinWeightProfile_Param
	{
	public:

		struct FName InProfileName; // 0x00(0x08)
	};

	struct Function_Engine_SkinnedMeshComponent_UnHideBoneByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
	};

	struct Function_Engine_SkinnedMeshComponent_TransformToBoneSpace_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FVector InPosition; // 0x08(0x0c)
		struct FRotator InRotation; // 0x14(0x0c)
		struct FVector OutPosition; // 0x20(0x0c)
		struct FRotator OutRotation; // 0x2c(0x0c)
	};

	struct Function_Engine_SkinnedMeshComponent_TransformFromBoneSpace_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FVector InPosition; // 0x08(0x0c)
		struct FRotator InRotation; // 0x14(0x0c)
		struct FVector OutPosition; // 0x20(0x0c)
		struct FRotator OutRotation; // 0x2c(0x0c)
	};

	struct Function_Engine_SkinnedMeshComponent_ShowMaterialSection_Param
	{
	public:

		int32_t MaterialID; // 0x00(0x04)
		int32_t SectionIndex; // 0x04(0x04)
		bool bShow; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		int32_t LodIndex; // 0x0c(0x04)
	};

	struct Function_Engine_SkinnedMeshComponent_ShowAllMaterialSections_Param
	{
	public:

		int32_t LodIndex; // 0x00(0x04)
	};

	struct Function_Engine_SkinnedMeshComponent_SetVertexColorOverride_LinearColor_Param
	{
	public:

		int32_t LodIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FLinearColor> VertexColors; // 0x08(0x10)
	};

	struct Function_Engine_SkinnedMeshComponent_SetSkinWeightProfile_Param
	{
	public:

		struct FName InProfileName; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_SetSkinWeightOverride_Param
	{
	public:

		int32_t LodIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FSkelMeshSkinWeightInfo> SkinWeights; // 0x08(0x10)
	};

	struct Function_Engine_SkinnedMeshComponent_SetSkeletalMesh_Param
	{
	public:

		struct USkeletalMesh* NewMesh; // 0x00(0x08)
		bool bReinitPose; // 0x08(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_SetSecondPassMaterial_Param
	{
	public:

		struct TArray<struct UMaterialInterface*> InSecondPassMaterial; // 0x00(0x10)
		bool bInDrawSecondPass; // 0x10(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_SetRenderStatic_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_SetPhysicsAsset_Param
	{
	public:

		struct UPhysicsAsset* NewPhysicsAsset; // 0x00(0x08)
		bool bForceReInit; // 0x08(0x01)
		bool bForceRefreshBone; // 0x09(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_SetMultiDrawEffect_Param
	{
	public:

		bool bDrawMultiEffect; // 0x00(0x01)
		bool bReverseCulling; // 0x01(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_SetMinLOD_Param
	{
	public:

		int32_t InNewMinLOD; // 0x00(0x04)
	};

	struct Function_Engine_SkinnedMeshComponent_SetMasterPoseComponent_Param
	{
	public:

		struct USkinnedMeshComponent* NewMasterBoneComponent; // 0x00(0x08)
		bool bForceUpdate; // 0x08(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_SetForcedLOD_Param
	{
	public:

		int32_t InNewForcedLOD; // 0x00(0x04)
	};

	struct Function_Engine_SkinnedMeshComponent_SetCastCapsuleIndirectShadow_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_SetCastCapsuleDirectShadow_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_SkinnedMeshComponent_IsUsingSkinWeightProfile_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_IsMaterialSectionShown_Param
	{
	public:

		int32_t MaterialID; // 0x00(0x04)
		int32_t LodIndex; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_IsBoneHiddenByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_HideBoneByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		enum class EPhysBodyOp PhysBodyOption; // 0x08(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		float OutTwistAngle; // 0x08(0x04)
		float OutSwingAngle; // 0x0c(0x04)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_SkinnedMeshComponent_GetSocketBoneName_Param
	{
	public:

		struct FName InSocketName; // 0x00(0x08)
		struct FName ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_SkinnedMeshComponent_GetRefPosePosition_Param
	{
	public:

		int32_t BoneIndex; // 0x00(0x04)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_Engine_SkinnedMeshComponent_GetParentBone_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FName ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_SkinnedMeshComponent_GetNumLODs_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkinnedMeshComponent_GetNumBones_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkinnedMeshComponent_GetForcedLOD_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkinnedMeshComponent_GetDeltaTransformFromRefPose_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FName BaseName; // 0x08(0x08)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_Engine_SkinnedMeshComponent_GetCurrentSkinWeightProfileName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SkinnedMeshComponent_GetBoneName_Param
	{
	public:

		int32_t BoneIndex; // 0x00(0x04)
		struct FName ReturnValue; // 0x04(0x08)
	};

	struct Function_Engine_SkinnedMeshComponent_GetBoneIndex_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_SkinnedMeshComponent_FindClosestBone_K2_Param
	{
	public:

		struct FVector TestLocation; // 0x00(0x0c)
		struct FVector BoneLocation; // 0x0c(0x0c)
		float IgnoreScale; // 0x18(0x04)
		bool bRequirePhysicsAsset; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FName ReturnValue; // 0x20(0x08)
	};

	struct Function_Engine_SkinnedMeshComponent_ClearVertexColorOverride_Param
	{
	public:

		int32_t LodIndex; // 0x00(0x04)
	};

	struct Function_Engine_SkinnedMeshComponent_ClearSkinWeightProfile_Param
	{
	public:

	};

	struct Function_Engine_SkinnedMeshComponent_ClearSkinWeightOverride_Param
	{
	public:

		int32_t LodIndex; // 0x00(0x04)
	};

	struct Function_Engine_SkinnedMeshComponent_BoneIsChildOf_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FName ParentBoneName; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_ParticleSystemComponent_SetTrailSourceData_Param
	{
	public:

		struct FName InFirstSocketName; // 0x00(0x08)
		struct FName InSecondSocketName; // 0x08(0x08)
		enum class ETrailWidthMode InWidthMode; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float InWidth; // 0x14(0x04)
	};

	struct Function_Engine_ParticleSystemComponent_SetTemplate_Param
	{
	public:

		struct UParticleSystem* NewTemplate; // 0x00(0x08)
	};

	struct Function_Engine_ParticleSystemComponent_SetMaterialParameter_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct UMaterialInterface* Param; // 0x08(0x08)
	};

	struct Function_Engine_ParticleSystemComponent_SetBeamTargetTangent_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		struct FVector NewTangentPoint; // 0x04(0x0c)
		int32_t TargetIndex; // 0x10(0x04)
	};

	struct Function_Engine_ParticleSystemComponent_SetBeamTargetStrength_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		float NewTargetStrength; // 0x04(0x04)
		int32_t TargetIndex; // 0x08(0x04)
	};

	struct Function_Engine_ParticleSystemComponent_SetBeamTargetPoint_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		struct FVector NewTargetPoint; // 0x04(0x0c)
		int32_t TargetIndex; // 0x10(0x04)
	};

	struct Function_Engine_ParticleSystemComponent_SetBeamSourceTangent_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		struct FVector NewTangentPoint; // 0x04(0x0c)
		int32_t SourceIndex; // 0x10(0x04)
	};

	struct Function_Engine_ParticleSystemComponent_SetBeamSourceStrength_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		float NewSourceStrength; // 0x04(0x04)
		int32_t SourceIndex; // 0x08(0x04)
	};

	struct Function_Engine_ParticleSystemComponent_SetBeamSourcePoint_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		struct FVector NewSourcePoint; // 0x04(0x0c)
		int32_t SourceIndex; // 0x10(0x04)
	};

	struct Function_Engine_ParticleSystemComponent_SetBeamEndPoint_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		struct FVector NewEndPoint; // 0x04(0x0c)
	};

	struct Function_Engine_ParticleSystemComponent_SetAutoAttachParams_Param
	{
	public:

		struct USceneComponent* Parent; // 0x00(0x08)
		struct FName SocketName; // 0x08(0x08)
		enum class EAttachLocation LocationType; // 0x10(0x01)
	};

	struct Function_Engine_ParticleSystemComponent_GetNumActiveParticles_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_ParticleSystemComponent_GetNamedMaterial_Param
	{
	public:

		struct FName InName; // 0x00(0x08)
		struct UMaterialInterface* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_ParticleSystemComponent_GetBeamTargetTangent_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		int32_t TargetIndex; // 0x04(0x04)
		struct FVector OutTangentPoint; // 0x08(0x0c)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_ParticleSystemComponent_GetBeamTargetStrength_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		int32_t TargetIndex; // 0x04(0x04)
		float OutTargetStrength; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_Engine_ParticleSystemComponent_GetBeamTargetPoint_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		int32_t TargetIndex; // 0x04(0x04)
		struct FVector OutTargetPoint; // 0x08(0x0c)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_ParticleSystemComponent_GetBeamSourceTangent_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		int32_t SourceIndex; // 0x04(0x04)
		struct FVector OutTangentPoint; // 0x08(0x0c)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_ParticleSystemComponent_GetBeamSourceStrength_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		int32_t SourceIndex; // 0x04(0x04)
		float OutSourceStrength; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_Engine_ParticleSystemComponent_GetBeamSourcePoint_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		int32_t SourceIndex; // 0x04(0x04)
		struct FVector OutSourcePoint; // 0x08(0x0c)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_Engine_ParticleSystemComponent_GetBeamEndPoint_Param
	{
	public:

		int32_t EmitterIndex; // 0x00(0x04)
		struct FVector OutEndPoint; // 0x04(0x0c)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_Engine_ParticleSystemComponent_GenerateParticleEvent_Param
	{
	public:

		struct FName InEventName; // 0x00(0x08)
		float InEmitterTime; // 0x08(0x04)
		struct FVector InLocation; // 0x0c(0x0c)
		struct FVector InDirection; // 0x18(0x0c)
		struct FVector InVelocity; // 0x24(0x0c)
	};

	struct Function_Engine_ParticleSystemComponent_EndTrails_Param
	{
	public:

	};

	struct Function_Engine_ParticleSystemComponent_CreateNamedDynamicMaterialInstance_Param
	{
	public:

		struct FName InName; // 0x00(0x08)
		struct UMaterialInterface* SourceMaterial; // 0x08(0x08)
		struct UMaterialInstanceDynamic* ReturnValue; // 0x10(0x08)
	};

	struct Function_Engine_ParticleSystemComponent_BeginTrails_Param
	{
	public:

		struct FName InFirstSocketName; // 0x00(0x08)
		struct FName InSecondSocketName; // 0x08(0x08)
		enum class ETrailWidthMode InWidthMode; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float InWidth; // 0x14(0x04)
	};

	struct Function_Engine_CapsuleComponent_SetCapsuleSize_Param
	{
	public:

		float InRadius; // 0x00(0x04)
		float InHalfHeight; // 0x04(0x04)
		bool bUpdateOverlaps; // 0x08(0x01)
	};

	struct Function_Engine_CapsuleComponent_SetCapsuleRadius_Param
	{
	public:

		float radius; // 0x00(0x04)
		bool bUpdateOverlaps; // 0x04(0x01)
	};

	struct Function_Engine_CapsuleComponent_SetCapsuleHalfHeight_Param
	{
	public:

		float HalfHeight; // 0x00(0x04)
		bool bUpdateOverlaps; // 0x04(0x01)
	};

	struct Function_Engine_CapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Param
	{
	public:

		float OutRadius; // 0x00(0x04)
		float OutHalfHeightWithoutHemisphere; // 0x04(0x04)
	};

	struct Function_Engine_CapsuleComponent_GetUnscaledCapsuleSize_Param
	{
	public:

		float OutRadius; // 0x00(0x04)
		float OutHalfHeight; // 0x04(0x04)
	};

	struct Function_Engine_CapsuleComponent_GetUnscaledCapsuleRadius_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CapsuleComponent_GetUnscaledCapsuleHalfHeight_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CapsuleComponent_GetShapeScale_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Param
	{
	public:

		float OutRadius; // 0x00(0x04)
		float OutHalfHeightWithoutHemisphere; // 0x04(0x04)
	};

	struct Function_Engine_CapsuleComponent_GetScaledCapsuleSize_Param
	{
	public:

		float OutRadius; // 0x00(0x04)
		float OutHalfHeight; // 0x04(0x04)
	};

	struct Function_Engine_CapsuleComponent_GetScaledCapsuleRadius_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CapsuleComponent_GetScaledCapsuleHalfHeight_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SphereComponent_SetSphereRadius_Param
	{
	public:

		float InSphereRadius; // 0x00(0x04)
		bool bUpdateOverlaps; // 0x04(0x01)
	};

	struct Function_Engine_SphereComponent_GetUnscaledSphereRadius_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SphereComponent_GetShapeScale_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SphereComponent_GetScaledSphereRadius_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_BoxComponent_SetBoxExtent_Param
	{
	public:

		struct FVector InBoxExtent; // 0x00(0x0c)
		bool bUpdateOverlaps; // 0x0c(0x01)
	};

	struct Function_Engine_BoxComponent_GetUnscaledBoxExtent_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_BoxComponent_GetScaledBoxExtent_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_BoxComponent_ForceNavMeshUpdate_Param
	{
	public:

	};

	struct Function_Engine_DirectionalLightComponent_SetUseInsetShadowsForMovableObjects_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_Engine_DirectionalLightComponent_SetShadowDistanceFadeoutFraction_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_DirectionalLightComponent_SetShadowAmount_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_DirectionalLightComponent_SetOcclusionMaskDarkness_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_DirectionalLightComponent_SetLightShaftOverrideDirection_Param
	{
	public:

		struct FVector NewValue; // 0x00(0x0c)
	};

	struct Function_Engine_DirectionalLightComponent_SetEnableLightShaftOcclusion_Param
	{
	public:

		bool bNewValue; // 0x00(0x01)
	};

	struct Function_Engine_DirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_DirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_DirectionalLightComponent_SetDynamicShadowCascades_Param
	{
	public:

		int32_t NewValue; // 0x00(0x04)
	};

	struct Function_Engine_DirectionalLightComponent_SetCascadeTransitionFraction_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_DirectionalLightComponent_SetCascadeDistributionExponent_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_DirectionalLightComponent_BakeShadowDepth_Param
	{
	public:

	};

	struct Function_Engine_LocalLightComponent_SetShadowRadiusScale_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_LocalLightComponent_SetIntensityUnits_Param
	{
	public:

		enum class ELightUnits NewIntensityUnits; // 0x00(0x01)
	};

	struct Function_Engine_LocalLightComponent_SetCastPerObjectShadow_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_Engine_LocalLightComponent_SetCacheStaticShadow_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_Engine_LocalLightComponent_SetAttenuationRadius_Param
	{
	public:

		float NewRadius; // 0x00(0x04)
	};

	struct Function_Engine_LocalLightComponent_GetUnitsConversionFactor_Param
	{
	public:

		enum class ELightUnits SrcUnits; // 0x00(0x01)
		enum class ELightUnits TargetUnits; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		float CosHalfConeAngle; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_SetWalkableFloorZ_Param
	{
	public:

		float InWalkableFloorZ; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_SetWalkableFloorAngle_Param
	{
	public:

		float InWalkableFloorAngle; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_SetMovementMode_Param
	{
	public:

		enum class EMovementMode NewMovementMode; // 0x00(0x01)
		char NewCustomMode; // 0x01(0x01)
	};

	struct Function_Engine_CharacterMovementComponent_SetGroupsToIgnoreMask_Param
	{
	public:

		struct FNavAvoidanceMask GroupMask; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_SetGroupsToIgnore_Param
	{
	public:

		int32_t GroupFlags; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_SetGroupsToAvoidMask_Param
	{
	public:

		struct FNavAvoidanceMask GroupMask; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_SetGroupsToAvoid_Param
	{
	public:

		int32_t GroupFlags; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_SetAvoidanceGroupMask_Param
	{
	public:

		struct FNavAvoidanceMask GroupMask; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_SetAvoidanceGroup_Param
	{
	public:

		int32_t GroupFlags; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_SetAvoidanceEnabled_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_Engine_CharacterMovementComponent_K2_GetWalkableFloorZ_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_K2_GetWalkableFloorAngle_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_K2_GetModifiedMaxAcceleration_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_K2_FindFloor_Param
	{
	public:

		struct FVector CapsuleLocation; // 0x00(0x0c)
		struct FFindFloorResult FloorResult; // 0x0c(0x94)
	};

	struct Function_Engine_CharacterMovementComponent_K2_ComputeFloorDist_Param
	{
	public:

		struct FVector CapsuleLocation; // 0x00(0x0c)
		float LineDistance; // 0x0c(0x04)
		float SweepDistance; // 0x10(0x04)
		float SweepRadius; // 0x14(0x04)
		struct FFindFloorResult FloorResult; // 0x18(0x94)
	};

	struct Function_Engine_CharacterMovementComponent_IsWalking_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_CharacterMovementComponent_IsWalkable_Param
	{
	public:

		struct FHitResult Hit; // 0x00(0x88)
		bool ReturnValue; // 0x88(0x01)
	};

	struct Function_Engine_CharacterMovementComponent_GetValidPerchRadius_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_GetPerchRadiusThreshold_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_GetMovementBase_Param
	{
	public:

		struct UPrimitiveComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_CharacterMovementComponent_GetMinAnalogSpeed_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_GetMaxJumpHeight_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_GetMaxBrakingDeceleration_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_GetMaxAcceleration_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_GetLastUpdateVelocity_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_CharacterMovementComponent_GetLastUpdateRotation_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_CharacterMovementComponent_GetLastUpdateLocation_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_CharacterMovementComponent_GetImpartedMovementBaseVelocity_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_CharacterMovementComponent_GetCurrentAcceleration_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_CharacterMovementComponent_GetCharacterOwner_Param
	{
	public:

		struct ACHARACTER* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_CharacterMovementComponent_GetAnalogInputModifier_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_DisableMovement_Param
	{
	public:

	};

	struct Function_Engine_CharacterMovementComponent_ClearAccumulatedForces_Param
	{
	public:

	};

	struct Function_Engine_CharacterMovementComponent_CapsuleTouched_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComp; // 0x00(0x08)
		struct AActor* Other; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
		bool bFromSweep; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FHitResult SweepResult; // 0x20(0x88)
	};

	struct Function_Engine_CharacterMovementComponent_CalcVelocity_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
		float Friction; // 0x04(0x04)
		bool bFluid; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		float BrakingDeceleration; // 0x0c(0x04)
	};

	struct Function_Engine_CharacterMovementComponent_AddImpulse_Param
	{
	public:

		struct FVector Impulse; // 0x00(0x0c)
		bool bVelocityChange; // 0x0c(0x01)
	};

	struct Function_Engine_CharacterMovementComponent_AddForce_Param
	{
	public:

		struct FVector Force; // 0x00(0x0c)
	};

	struct Function_Engine_CanvasRenderTarget2D_UpdateResource_Param
	{
	public:

	};

	struct Function_Engine_CanvasRenderTarget2D_ReceiveUpdate_Param
	{
	public:

		struct UCanvas* Canvas; // 0x00(0x08)
		int32_t Width; // 0x08(0x04)
		int32_t Height; // 0x0c(0x04)
	};

	struct Function_Engine_CanvasRenderTarget2D_GetSize_Param
	{
	public:

		int32_t Width; // 0x00(0x04)
		int32_t Height; // 0x04(0x04)
	};

	struct Function_Engine_CanvasRenderTarget2D_CreateCanvasRenderTarget2D_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* CanvasRenderTarget2DClass; // 0x08(0x08)
		int32_t Width; // 0x10(0x04)
		int32_t Height; // 0x14(0x04)
		struct UCanvasRenderTarget2D* ReturnValue; // 0x18(0x08)
	};

	struct Function_Engine_InstancedStaticMeshComponent_UpdateInstanceTransform_Param
	{
	public:

		int32_t InstanceIndex; // 0x00(0x04)
		char pad_4[0xc]; // 0x04(0x0c)
		struct FTransform NewInstanceTransform; // 0x10(0x30)
		bool bWorldSpace; // 0x40(0x01)
		bool bMarkRenderStateDirty; // 0x41(0x01)
		bool bTeleport; // 0x42(0x01)
		bool ReturnValue; // 0x43(0x01)
	};

	struct Function_Engine_InstancedStaticMeshComponent_SetNumCustomDataFloats_Param
	{
	public:

		int32_t InNumCustomDataFloats; // 0x00(0x04)
		bool bMarkRenderStateDirty; // 0x04(0x01)
		bool ReturnValue; // 0x05(0x01)
	};

	struct Function_Engine_InstancedStaticMeshComponent_SetCustomDataValue_Param
	{
	public:

		int32_t InstanceIndex; // 0x00(0x04)
		int32_t CustomDataIndex; // 0x04(0x04)
		float CustomDataValue; // 0x08(0x04)
		bool bMarkRenderStateDirty; // 0x0c(0x01)
		bool ReturnValue; // 0x0d(0x01)
	};

	struct Function_Engine_InstancedStaticMeshComponent_SetCullDistances_Param
	{
	public:

		int32_t StartCullDistance; // 0x00(0x04)
		int32_t EndCullDistance; // 0x04(0x04)
	};

	struct Function_Engine_InstancedStaticMeshComponent_RemoveInstance_Param
	{
	public:

		int32_t InstanceIndex; // 0x00(0x04)
		bool bAllowSlack; // 0x04(0x01)
		bool ReturnValue; // 0x05(0x01)
	};

	struct Function_Engine_InstancedStaticMeshComponent_GetInstanceTransform_Param
	{
	public:

		int32_t InstanceIndex; // 0x00(0x04)
		char pad_4[0xc]; // 0x04(0x0c)
		struct FTransform OutInstanceTransform; // 0x10(0x30)
		bool bWorldSpace; // 0x40(0x01)
		bool ReturnValue; // 0x41(0x01)
	};

	struct Function_Engine_InstancedStaticMeshComponent_GetInstancesOverlappingSphere_Param
	{
	public:

		struct FVector Center; // 0x00(0x0c)
		float radius; // 0x0c(0x04)
		bool bSphereInWorldSpace; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct TArray<int32_t> ReturnValue; // 0x18(0x10)
	};

	struct Function_Engine_InstancedStaticMeshComponent_GetInstancesOverlappingBox_Param
	{
	public:

		struct FBox Box; // 0x00(0x1c)
		bool bBoxInWorldSpace; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct TArray<int32_t> ReturnValue; // 0x20(0x10)
	};

	struct Function_Engine_InstancedStaticMeshComponent_GetInstanceCount_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_InstancedStaticMeshComponent_ClearInstances_Param
	{
	public:

	};

	struct Function_Engine_InstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Param
	{
	public:

		int32_t StartInstanceIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FTransform> NewInstancesTransforms; // 0x08(0x10)
		bool bWorldSpace; // 0x18(0x01)
		bool bMarkRenderStateDirty; // 0x19(0x01)
		bool bTeleport; // 0x1a(0x01)
		bool ReturnValue; // 0x1b(0x01)
	};

	struct Function_Engine_InstancedStaticMeshComponent_BatchUpdateInstancesTransform_Param
	{
	public:

		int32_t StartInstanceIndex; // 0x00(0x04)
		int32_t NumInstances; // 0x04(0x04)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform NewInstancesTransform; // 0x10(0x30)
		bool bWorldSpace; // 0x40(0x01)
		bool bMarkRenderStateDirty; // 0x41(0x01)
		bool bTeleport; // 0x42(0x01)
		bool ReturnValue; // 0x43(0x01)
	};

	struct Function_Engine_InstancedStaticMeshComponent_AddInstanceWorldSpace_Param
	{
	public:

		struct FTransform WorldTransform; // 0x00(0x30)
		int32_t ReturnValue; // 0x30(0x04)
	};

	struct Function_Engine_InstancedStaticMeshComponent_AddInstance_Param
	{
	public:

		struct FTransform InstanceTransform; // 0x00(0x30)
		int32_t ReturnValue; // 0x30(0x04)
	};

	struct Function_Engine_DestructibleStaticMeshComponent_SetSubMeshesDestructed_Param
	{
	public:

		struct TArray<int32_t> InMeshes; // 0x00(0x10)
	};

	struct Function_Engine_DestructibleStaticMeshComponent_SetSubMeshDestructed_Param
	{
	public:

		int32_t MeshIndex; // 0x00(0x04)
	};

	struct Function_Engine_DestructibleStaticMeshComponent_OnRep_ChangeMeshDestructionStatus_Param
	{
	public:

	};

	struct Function_Engine_SplineMeshComponent_UpdateMesh_Param
	{
	public:

	};

	struct Function_Engine_SplineMeshComponent_SetStartTangent_Param
	{
	public:

		struct FVector StartTangent; // 0x00(0x0c)
		bool bUpdateMesh; // 0x0c(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetStartScale_Param
	{
	public:

		struct FVector2D StartScale; // 0x00(0x08)
		bool bUpdateMesh; // 0x08(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetStartRoll_Param
	{
	public:

		float StartRoll; // 0x00(0x04)
		bool bUpdateMesh; // 0x04(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetStartPosition_Param
	{
	public:

		struct FVector StartPos; // 0x00(0x0c)
		bool bUpdateMesh; // 0x0c(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetStartOffset_Param
	{
	public:

		struct FVector2D StartOffset; // 0x00(0x08)
		bool bUpdateMesh; // 0x08(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetStartAndEnd_Param
	{
	public:

		struct FVector StartPos; // 0x00(0x0c)
		struct FVector StartTangent; // 0x0c(0x0c)
		struct FVector EndPos; // 0x18(0x0c)
		struct FVector EndTangent; // 0x24(0x0c)
		bool bUpdateMesh; // 0x30(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetSplineUpDir_Param
	{
	public:

		struct FVector InSplineUpDir; // 0x00(0x0c)
		bool bUpdateMesh; // 0x0c(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetForwardAxis_Param
	{
	public:

		enum class ESplineMeshAxis InForwardAxis; // 0x00(0x01)
		bool bUpdateMesh; // 0x01(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetEndTangent_Param
	{
	public:

		struct FVector EndTangent; // 0x00(0x0c)
		bool bUpdateMesh; // 0x0c(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetEndScale_Param
	{
	public:

		struct FVector2D EndScale; // 0x00(0x08)
		bool bUpdateMesh; // 0x08(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetEndRoll_Param
	{
	public:

		float EndRoll; // 0x00(0x04)
		bool bUpdateMesh; // 0x04(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetEndPosition_Param
	{
	public:

		struct FVector EndPos; // 0x00(0x0c)
		bool bUpdateMesh; // 0x0c(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetEndOffset_Param
	{
	public:

		struct FVector2D EndOffset; // 0x00(0x08)
		bool bUpdateMesh; // 0x08(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetBoundaryMin_Param
	{
	public:

		float InBoundaryMin; // 0x00(0x04)
		bool bUpdateMesh; // 0x04(0x01)
	};

	struct Function_Engine_SplineMeshComponent_SetBoundaryMax_Param
	{
	public:

		float InBoundaryMax; // 0x00(0x04)
		bool bUpdateMesh; // 0x04(0x01)
	};

	struct Function_Engine_SplineMeshComponent_GetStartTangent_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SplineMeshComponent_GetStartScale_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SplineMeshComponent_GetStartRoll_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SplineMeshComponent_GetStartPosition_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SplineMeshComponent_GetStartOffset_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SplineMeshComponent_GetSplineUpDir_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SplineMeshComponent_GetForwardAxis_Param
	{
	public:

		enum class ESplineMeshAxis ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SplineMeshComponent_GetEndTangent_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SplineMeshComponent_GetEndScale_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SplineMeshComponent_GetEndRoll_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SplineMeshComponent_GetEndPosition_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SplineMeshComponent_GetEndOffset_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SplineMeshComponent_GetBoundaryMin_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SplineMeshComponent_GetBoundaryMax_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_UnlinkAnimClassLayers_Param
	{
	public:

		struct UClass* InClass; // 0x00(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_UnbindClothFromMasterPoseComponent_Param
	{
	public:

		bool bRestoreSimulationSpace; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_ToggleDisablePostProcessBlueprint_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_TermBodiesBelow_Param
	{
	public:

		struct FName ParentBoneName; // 0x00(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_SuspendClothingSimulation_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_Stop_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_SnapshotPose_Param
	{
	public:

		struct FPoseSnapshot Snapshot; // 0x00(0x38)
	};

	struct Function_Engine_SkeletalMeshComponent_SetUpdateAnimationInEditor_Param
	{
	public:

		bool NewUpdateState; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetTeleportRotationThreshold_Param
	{
	public:

		float ThresHold; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_SetTeleportDistanceThreshold_Param
	{
	public:

		float ThresHold; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_SetPosition_Param
	{
	public:

		float InPos; // 0x00(0x04)
		bool bFireNotifies; // 0x04(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetPlayRate_Param
	{
	public:

		float Rate; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_SetPhysicsBlendWeight_Param
	{
	public:

		float PhysicsBlendWeight; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Param
	{
	public:

		bool bNewNotifyRigidBodyCollision; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName BoneName; // 0x04(0x08)
		bool bIncludeSelf; // 0x0c(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetMorphTarget_Param
	{
	public:

		struct FName MorphTargetName; // 0x00(0x08)
		float Value; // 0x08(0x04)
		bool bRemoveZeroWeight; // 0x0c(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetEnablePhysicsBlending_Param
	{
	public:

		bool bNewBlendPhysics; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Param
	{
	public:

		bool bEnableGravity; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName BoneName; // 0x04(0x08)
		bool bIncludeSelf; // 0x0c(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetEnableBodyGravity_Param
	{
	public:

		bool bEnableGravity; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName BoneName; // 0x04(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_SetDisablePostProcessBlueprint_Param
	{
	public:

		bool bInDisablePostProcess; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetDisableAnimCurves_Param
	{
	public:

		bool bInDisableAnimCurves; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetConstraintProfileForAll_Param
	{
	public:

		struct FName ProfileName; // 0x00(0x08)
		bool bDefaultIfNotFound; // 0x08(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetConstraintProfile_Param
	{
	public:

		struct FName JointName; // 0x00(0x08)
		struct FName ProfileName; // 0x08(0x08)
		bool bDefaultIfNotFound; // 0x10(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetClothMaxDistanceScale_Param
	{
	public:

		float Scale; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Param
	{
	public:

		bool bNewNotifyRigidBodyCollision; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName BoneName; // 0x04(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAnimClass_Param
	{
	public:

		struct UClass* NewClass; // 0x00(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAnimationMode_Param
	{
	public:

		enum class EAnimationMode InAnimationMode; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAnimation_Param
	{
	public:

		struct UAnimationAsset* NewAnimToPlay; // 0x00(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAngularLimits_Param
	{
	public:

		struct FName InBoneName; // 0x00(0x08)
		float Swing1LimitAngle; // 0x08(0x04)
		float TwistLimitAngle; // 0x0c(0x04)
		float Swing2LimitAngle; // 0x10(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Param
	{
	public:

		struct TArray<struct FName> List; // 0x00(0x10)
		bool bAllow; // 0x10(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAllowAnimCurveEvaluation_Param
	{
	public:

		bool bInAllow; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Param
	{
	public:

		bool bEnableSwingDrive; // 0x00(0x01)
		bool bEnableTwistDrive; // 0x01(0x01)
		bool bSkipCustomPhysicsType; // 0x02(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Param
	{
	public:

		bool bEnableSwingDrive; // 0x00(0x01)
		bool bEnableTwistDrive; // 0x01(0x01)
		bool bSkipCustomPhysicsType; // 0x02(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAllMotorsAngularDriveParams_Param
	{
	public:

		float InSpring; // 0x00(0x04)
		float InDamping; // 0x04(0x04)
		float InForceLimit; // 0x08(0x04)
		bool bSkipCustomPhysicsType; // 0x0c(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAllBodiesSimulatePhysics_Param
	{
	public:

		bool bNewSimulate; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Param
	{
	public:

		float PhysicsBlendWeight; // 0x00(0x04)
		bool bSkipCustomPhysicsType; // 0x04(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Param
	{
	public:

		struct FName InBoneName; // 0x00(0x08)
		bool bNewSimulate; // 0x08(0x01)
		bool bIncludeSelf; // 0x09(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Param
	{
	public:

		struct FName InBoneName; // 0x00(0x08)
		float PhysicsBlendWeight; // 0x08(0x04)
		bool bSkipCustomPhysicsType; // 0x0c(0x01)
		bool bIncludeSelf; // 0x0d(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_ResumeClothingSimulation_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_ResetClothTeleportMode_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_ResetAnimInstanceDynamics_Param
	{
	public:

		enum class ETeleportType InTeleportType; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_PlayAnimation_Param
	{
	public:

		struct UAnimationAsset* NewAnimToPlay; // 0x00(0x08)
		bool bLooping; // 0x08(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_Play_Param
	{
	public:

		bool bLooping; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_OverrideAnimationData_Param
	{
	public:

		struct UAnimationAsset* InAnimToPlay; // 0x00(0x08)
		bool bIsLooping; // 0x08(0x01)
		bool bIsPlaying; // 0x09(0x01)
		char pad_A[0x2]; // 0x0a(0x02)
		float Position; // 0x0c(0x04)
		float PlayRate; // 0x10(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_OnMontageStarted_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_OnAllMontageEnded_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_LinkAnimGraphByTag_Param
	{
	public:

		struct FName InTag; // 0x00(0x08)
		struct UClass* InClass; // 0x08(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_LinkAnimClassLayers_Param
	{
	public:

		struct UClass* InClass; // 0x00(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Param
	{
	public:

		struct FVector WorldPosition; // 0x00(0x0c)
		struct FVector ClosestWorldPosition; // 0x0c(0x0c)
		struct FVector Normal; // 0x18(0x0c)
		struct FName BoneName; // 0x24(0x08)
		float Distance; // 0x2c(0x04)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_IsPlaying_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_IsClothingSimulationSuspended_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_IsBodyGravityEnabled_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_HasValidAnimationInstance_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_GetTeleportRotationThreshold_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_GetTeleportDistanceThreshold_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_GetSkeletalCenterOfMass_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_Engine_SkeletalMeshComponent_GetPostProcessInstance_Param
	{
	public:

		struct UAnimInstance* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_GetPosition_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_GetPlayRate_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_GetMorphTarget_Param
	{
	public:

		struct FName MorphTargetName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Param
	{
	public:

		struct FName InGroup; // 0x00(0x08)
		struct UAnimInstance* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Param
	{
	public:

		struct UClass* InClass; // 0x00(0x08)
		struct UAnimInstance* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Param
	{
	public:

		struct FName InTag; // 0x00(0x08)
		struct TArray<struct UAnimInstance*> OutLinkedInstances; // 0x08(0x10)
	};

	struct Function_Engine_SkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Param
	{
	public:

		struct FName InTag; // 0x00(0x08)
		struct UAnimInstance* ReturnValue; // 0x08(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_GetDisablePostProcessBlueprint_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_GetDisableAnimCurves_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_GetCurrentJointAngles_Param
	{
	public:

		struct FName InBoneName; // 0x00(0x08)
		float Swing1Angle; // 0x08(0x04)
		float TwistAngle; // 0x0c(0x04)
		float Swing2Angle; // 0x10(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_GetClothMaxDistanceScale_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_GetClothingSimulationInteractor_Param
	{
	public:

		struct UClothingSimulationInteractor* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_GetBoneMass_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		bool bScaleMass; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_Engine_SkeletalMeshComponent_GetAnimInstance_Param
	{
	public:

		struct UAnimInstance* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_GetAnimClass_Param
	{
	public:

		struct UClass* ReturnValue; // 0x00(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_GetAnimationMode_Param
	{
	public:

		enum class EAnimationMode ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_ForceClothNextUpdateTeleport_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_FindConstraintBoneName_Param
	{
	public:

		int32_t ConstraintIndex; // 0x00(0x04)
		struct FName ReturnValue; // 0x04(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_ClearMorphTargets_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_BreakConstraint_Param
	{
	public:

		struct FVector Impulse; // 0x00(0x0c)
		struct FVector HitLocation; // 0x0c(0x0c)
		struct FName InBoneName; // 0x18(0x08)
	};

	struct Function_Engine_SkeletalMeshComponent_BindClothToMasterPoseComponent_Param
	{
	public:

	};

	struct Function_Engine_SkeletalMeshComponent_AllowAnimCurveEvaluation_Param
	{
	public:

		struct FName NameOfCurve; // 0x00(0x08)
		bool bAllow; // 0x08(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_AddImpulseToAllBodiesBelow_Param
	{
	public:

		struct FVector Impulse; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		bool bVelChange; // 0x14(0x01)
		bool bIncludeSelf; // 0x15(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_AddForceToAllBodiesBelow_Param
	{
	public:

		struct FVector Force; // 0x00(0x0c)
		struct FName BoneName; // 0x0c(0x08)
		bool bAccelChange; // 0x14(0x01)
		bool bIncludeSelf; // 0x15(0x01)
	};

	struct Function_Engine_SkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Param
	{
	public:

		struct FName InBoneName; // 0x00(0x08)
		float AddPhysicsBlendWeight; // 0x08(0x04)
		bool bSkipCustomPhysicsType; // 0x0c(0x01)
	};

	struct Function_Engine_PoseableMeshComponent_SetBoneTransformByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform InTransform; // 0x10(0x30)
		enum class EBoneSpaces BoneSpace; // 0x40(0x01)
	};

	struct Function_Engine_PoseableMeshComponent_SetBoneScaleByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FVector InScale3D; // 0x08(0x0c)
		enum class EBoneSpaces BoneSpace; // 0x14(0x01)
	};

	struct Function_Engine_PoseableMeshComponent_SetBoneRotationByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FRotator InRotation; // 0x08(0x0c)
		enum class EBoneSpaces BoneSpace; // 0x14(0x01)
	};

	struct Function_Engine_PoseableMeshComponent_SetBoneLocationByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FVector InLocation; // 0x08(0x0c)
		enum class EBoneSpaces BoneSpace; // 0x14(0x01)
	};

	struct Function_Engine_PoseableMeshComponent_ResetBoneTransformByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
	};

	struct Function_Engine_PoseableMeshComponent_GetBoneTransformByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		enum class EBoneSpaces BoneSpace; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_Engine_PoseableMeshComponent_GetBoneScaleByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		enum class EBoneSpaces BoneSpace; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_PoseableMeshComponent_GetBoneRotationByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		enum class EBoneSpaces BoneSpace; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FRotator ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_PoseableMeshComponent_GetBoneLocationByName_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		enum class EBoneSpaces BoneSpace; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_Engine_PoseableMeshComponent_CopyPoseFromSkeletalComponent_Param
	{
	public:

		struct USkeletalMeshComponent* InComponentToCopy; // 0x00(0x08)
	};

	struct Function_Engine_PointLightComponent_SetUseInverseSquaredFalloff_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_Engine_PointLightComponent_SetSourceRadius_Param
	{
	public:

		float bNewValue; // 0x00(0x04)
	};

	struct Function_Engine_PointLightComponent_SetSourceLength_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_PointLightComponent_SetSoftSourceRadius_Param
	{
	public:

		float bNewValue; // 0x00(0x04)
	};

	struct Function_Engine_PointLightComponent_SetLightFalloffExponent_Param
	{
	public:

		float NewLightFalloffExponent; // 0x00(0x04)
	};

	struct Function_Engine_RectLightComponent_SetSourceWidth_Param
	{
	public:

		float bNewValue; // 0x00(0x04)
	};

	struct Function_Engine_RectLightComponent_SetSourceTexture_Param
	{
	public:

		struct UTexture* bNewValue; // 0x00(0x08)
	};

	struct Function_Engine_RectLightComponent_SetSourceHeight_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_RectLightComponent_SetBarnDoorLength_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_RectLightComponent_SetBarnDoorAngle_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_Engine_HierarchicalInstancedStaticMeshComponent_RemoveInstances_Param
	{
	public:

		struct TArray<int32_t> InstancesToRemove; // 0x00(0x10)
		bool bAllowSlack; // 0x10(0x01)
		bool ReturnValue; // 0x11(0x01)
	};

	struct Function_Engine_SpotLightComponent_SetOuterConeAngle_Param
	{
	public:

		float NewOuterConeAngle; // 0x00(0x04)
	};

	struct Function_Engine_SpotLightComponent_SetInnerConeAngle_Param
	{
	public:

		float NewInnerConeAngle; // 0x00(0x04)
	};

	struct Function_Engine_SpotLightComponent_BakeShadowDepth_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
