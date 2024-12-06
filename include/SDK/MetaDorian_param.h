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
	struct Function_MetaDorian_MetaDorianUtils_Get_Param
	{
	public:

		struct UMetaDorianUtils* ReturnValue; // 0x00(0x08)
	};

	struct Function_MetaDorian_MetaDorianManager_TryGetLuaScriptRealPath_Param
	{
	public:

		struct FString ScriptPath; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_MetaDorian_MTAndroidJNI_IsOverrideAndroidLogDir_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_MetaDorian_MTAPI_UWidget_CanSafelyRouteEvent_Param
	{
	public:

		struct UWidget* Self; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_MetaDorian_MTAPI_UPanelWidget_CanAddMoreChildren_Param
	{
	public:

		struct UPanelWidget* Self; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_MetaDorian_MTAPI_FGameplayResourceSet_AddID_Param
	{
	public:

		struct FGameplayResourceSet Self; // 0x00(0x02)
		char ResourceId; // 0x02(0x01)
		char pad_3[0x1]; // 0x03(0x01)
		struct FGameplayResourceSet ReturnValue; // 0x04(0x02)
	};

	struct Function_MetaDorian_MTAPI_UEngine_Tick_Param
	{
	public:

		struct UEngine* Self; // 0x00(0x08)
		float DeltaSeconds; // 0x08(0x04)
		bool bIdleMode; // 0x0c(0x01)
	};

	struct Function_MetaDorian_MTAPI_UGameInstance_GetSubsystemBase_Param
	{
	public:

		struct UGameInstance* Self; // 0x00(0x08)
		struct UClass* SubsystemClass; // 0x08(0x08)
		struct UGameInstanceSubsystem* ReturnValue; // 0x10(0x08)
	};

	struct Function_MetaDorian_MTAPI_UWorld_TimeSince_Param
	{
	public:

		struct UWorld* Self; // 0x00(0x08)
		float Time; // 0x08(0x04)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_MetaDorian_MTAPI_ABrush_GetBrushComponent_Param
	{
	public:

		struct ABrush* Self; // 0x00(0x08)
		struct UBrushComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_MetaDorian_MTAPI_ASceneCapture2D_GetCaptureComponent2D_Param
	{
	public:

		struct ASceneCapture2D* Self; // 0x00(0x08)
		struct USceneCaptureComponent2D* ReturnValue; // 0x08(0x08)
	};

	struct Function_MetaDorian_MTAPI_AStaticMeshActor_GetStaticMeshComponent_Param
	{
	public:

		struct AStaticMeshActor* Self; // 0x00(0x08)
		struct UStaticMeshComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_MetaDorian_MTAPI_ATriggerBase_GetCollisionComponent_Param
	{
	public:

		struct ATriggerBase* Self; // 0x00(0x08)
		struct UShapeComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_MetaDorian_MTAPI_AActor_OnConstruction_Param
	{
	public:

		struct AActor* Self; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform Transform; // 0x10(0x30)
	};

	struct Function_MetaDorian_MTAPI_APlayerState_GetPawn_Param
	{
	public:

		struct APlayerState* Self; // 0x00(0x08)
		struct APawn* ReturnValue; // 0x08(0x08)
	};

	struct Function_MetaDorian_MTAPI_APlayerCameraManager_GetLockedFOV_Param
	{
	public:

		struct APlayerCameraManager* Self; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_MetaDorian_MTAPI_ACameraActor_GetCameraComponent_Param
	{
	public:

		struct ACameraActor* Self; // 0x00(0x08)
		struct UCameraComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_MetaDorian_MTAPI_AController_IsPlayerController_Param
	{
	public:

		struct AController* Self; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_MetaDorian_MTAPI_APawn_SetupPlayerInputComponent_Param
	{
	public:

		struct APawn* Self; // 0x00(0x08)
		struct UInputComponent* PlayerInputComponent; // 0x08(0x08)
	};

	struct Function_MetaDorian_MTAPI_ACharacter_MovementBaseUtility_UseRelativeLocation_Param
	{
	public:

		struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_MetaDorian_MTAPI_UMovementComponent_StopMovementImmediately_Param
	{
	public:

		struct UMovementComponent* Self; // 0x00(0x08)
	};

	struct Function_MetaDorian_MTAPI_UCharacterMovementComponent_IsWalking_Param
	{
	public:

		struct UCharacterMovementComponent* Self; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_MetaDorian_MTAPI_UStaticMeshComponent_GetStaticMesh_Param
	{
	public:

		struct UStaticMeshComponent* Self; // 0x00(0x08)
		struct UStaticMesh* ReturnValue; // 0x08(0x08)
	};

	struct Function_MetaDorian_MTAPI_UActorComponent_MarkAsEditorOnlySubobject_Param
	{
	public:

		struct UActorComponent* Self; // 0x00(0x08)
	};

	struct Function_MetaDorian_MTAPI_UPrimitiveComponent_SetRenderMatrixMode_Param
	{
	public:

		struct UPrimitiveComponent* Self; // 0x00(0x08)
		enum class ERenderMatrixMode Mode; // 0x08(0x01)
	};

	struct Function_MetaDorian_MTAPI_USceneComponent_UpdateComponentToWorld_Param
	{
	public:

		struct USceneComponent* Self; // 0x00(0x08)
		int32_t UpdateTransformFlags; // 0x08(0x04)
		enum class ETeleportType Teleport; // 0x0c(0x01)
	};

	struct Function_MetaDorian_MTAPI_UObject_SetFlags_Param
	{
	public:

		struct UObject* Self; // 0x00(0x08)
		int32_t NewFlags; // 0x08(0x04)
	};

	struct Function_MetaDorian_MTAPI_FUObjectArray_IsDisregardForGC_Param
	{
	public:

		struct UObject* Object; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_MetaDorian_MTAPI_NameTypes_GetTypeHash_Param
	{
	public:

		struct FName Name; // 0x00(0x08)
		uint32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_MetaDorian_MTAPI_TypeHash_HashCombine_Param
	{
	public:

		uint32_t A; // 0x00(0x04)
		uint32_t C; // 0x04(0x04)
		uint32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_MetaDorian_MTAPI_CoreMisc_IsRunningGame_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_MetaDorian_MTAPI_FGenericPlatformTime_ToSeconds64_Param
	{
	public:

		uint64_t Cycles; // 0x00(0x08)
		double ReturnValue; // 0x08(0x08)
	};

	struct Function_MetaDorian_MTAPI_FGenericPlatformMisc_GetNetworkConnectionType_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_MetaDorian_MTAPI_FGenericPlatformMemory_GetMemoryUsedFast_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_MetaDorian_MTAPI_FApp_GetCurrentTime_Param
	{
	public:

		double ReturnValue; // 0x00(0x08)
	};

	struct Function_MetaDorian_MTAPI_UnrealString_GetTypeHash_Param
	{
	public:

		struct FString S; // 0x00(0x10)
		uint32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_MetaDorian_MTAPI_CoreGlobals_IsRunningCommandlet_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_MetaDorian_MTAPI_Math_WindRelativeAnglesDegrees_Param
	{
	public:

		float InAngle0; // 0x00(0x04)
		float InOutAngle1; // 0x04(0x04)
	};

	struct Function_MetaDorian_MTAppUtils_SetVolumeMultiplier_Param
	{
	public:

		float InVolumeMultiplier; // 0x00(0x04)
	};

	struct Function_MetaDorian_MTDorianSOVerInfo_Create_Param
	{
	public:

		struct FString JsonText; // 0x00(0x10)
		struct UMTDorianSOVerInfo* ReturnValue; // 0x10(0x08)
	};

	struct Function_MetaDorian_MTDorianSOUpdater_IsDone_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_MetaDorian_MTFileUtils_UnzipFileSync_Param
	{
	public:

		struct FString ZipFilePath; // 0x00(0x10)
		struct FString TargetLocation; // 0x10(0x10)
		struct FString Password; // 0x20(0x10)
		bool bForce; // 0x30(0x01)
		bool ReturnValue; // 0x31(0x01)
	};

	struct Function_MetaDorian_MTHttpLoader_Load_Param
	{
	public:

		struct FString InURL; // 0x00(0x10)
		struct FString InContentType; // 0x10(0x10)
		bool ReturnValue; // 0x20(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
