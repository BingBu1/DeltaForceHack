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
	struct Function_DFMVehicle_AIHelicopterWeaponInterface_UpdateDir_Param
	{
	public:

		struct FVector dir; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct AActor* LockTarget; // 0x10(0x08)
	};

	struct Function_DFMVehicle_AITankAimTargetComponent_ResetCannonDesireRotation_Param
	{
	public:

	};

	struct Function_DFMVehicle_AITankPhaseComponent_OnTakeDamage_Param
	{
	public:

		struct FDamageResultInfo DamageResult; // 0x00(0x5e0)
	};

	struct Function_DFMVehicle_DFInteractableCompProxy_Vehicle_IsLocalPlayerOnVehicle_Param
	{
	public:

		struct ADFMVehicleBase* InVehicle; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_DFMVehicle_DFMAIHelicopterPilotComponent_On_RepAITransportHelicopterStateParam_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMBoatMovementComponent_SetThrottleInput_Param
	{
	public:

		float Throttle; // 0x00(0x04)
	};

	struct Function_DFMVehicle_DFMBrokenVehiclePhysicsComponent_OnRep_OnPhysicsStateChange_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMFSM_AutoDriveVehicleCheckAction_OnTryStartAutoDraiveVehicleEvent_Param
	{
	public:

		enum class ECharacterFSMEventDefine FSMEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
	};

	struct Function_DFMVehicle_DFMFSM_CharacterVehicleControlAction_SwithCameraModeBtnClicked_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMFSM_CharacterVehicleInputControlAction_TryTexiOffCar_Param
	{
	public:

		enum class ECharacterFSMEventDefine FSMEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
	};

	struct Function_DFMVehicle_DFMFSM_VehicleCheckAction_TryTexiCar_Param
	{
	public:

		enum class ECharacterFSMEventDefine FSMEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
	};

	struct Function_DFMVehicle_DFMFSM_VehicleDriveMoveAndRotateAction_WheelieUp_Param
	{
	public:

		enum class ECharacterFSMEventDefine FSMEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Val; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
	};

	struct Function_DFMVehicle_DFMHelicopterMovementComponent_SetUpInput_Param
	{
	public:

		float Steering; // 0x00(0x04)
	};

	struct Function_DFMVehicle_DFMTrain_UpdateSkeletalMeshCompTickStatus_Param
	{
	public:

		bool bIsCanTick; // 0x00(0x01)
	};

	struct Function_DFMVehicle_DFMTrainDoorComponent_UpdateDoorLoc_Param
	{
	public:

		bool Open; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float InterpValue; // 0x04(0x04)
	};

	struct Function_DFMVehicle_DFMTrainStateComponent_OnRep_CurrentStateEnum_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMVehicleActingComponent_TickDustEffect_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMVehicleADS_SetInterceptDataInternal_Param
	{
	public:

		float NewInterceptRadius; // 0x00(0x04)
		struct FVector NewInterceptFirePos; // 0x04(0x0c)
	};

	struct Function_DFMVehicle_DFMVehicleAIController_UnBindDrama_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMVehicleAnimInteractorComponent_OnRep_DoorStateChange_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMVehicleAssembledComponent_OnCheckServerDeployStateTimer_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMVehicleAssembledPartInterface_ClearBrokenEffects_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMVehicleCollisionComponent_ServerMakeDamageToActor_Param
	{
	public:

		struct AActor* TargetActor; // 0x00(0x08)
		struct UPrimitiveComponent* TargetComp; // 0x08(0x08)
		int32_t TargetBodyIndex; // 0x10(0x04)
		struct FVector HitPoint; // 0x14(0x0c)
		float VelocitySize; // 0x20(0x04)
	};

	struct Function_DFMVehicle_DFMVehicleDataCollectionSubsystem_OnPostMakeDamageNtf_Param
	{
	public:

		struct FDamageResultInfo DamageResult; // 0x00(0x5e0)
	};

	struct Function_DFMVehicle_DFMVehicleDestroyDestructibleComponent_OnComponentBeginOverlapTriggered_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
		bool bFromSweep; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FHitResult SweepResult; // 0x20(0x88)
	};

	struct Function_DFMVehicle_DFMVehicleGlobalUtils_GetSkillWidgetConfig_Param
	{
	public:

		struct ADFMVehicleBase* Vehicle; // 0x00(0x08)
		struct AActor* CHARACTER; // 0x08(0x08)
		struct TMap<struct FString, struct FName> ReturnValue; // 0x10(0x50)
	};

	struct Function_DFMVehicle_DFMVehicleMovementInterface_IsRollover_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMVehicle_DFMVehicleMultiInteractor_RefreshInteractPanel_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMVehiclePathFollowComponent_RequestToStop_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMVehicle_DFMVehiclePathFollowingComponent_SetPathFollowingVelocity_Param
	{
	public:

		float Velocity; // 0x00(0x04)
	};

	struct Function_DFMVehicle_VehicleNavmeshBlockerComponent_SetCanAffectNavigation_Param
	{
	public:

		bool Value; // 0x00(0x01)
	};

	struct Function_DFMVehicle_DFMVehiclePathFollowPath_GetWayPointActor_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct ADFMVehiclePathFollowWayPoint* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMVehicle_DFMVehiclePreviewPlacementActor_IsInValidPosition_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMVehicle_DFMVehicleResourceManager_OnResourceLoadComplete_Param
	{
	public:

		struct FSoftObjectPath ResourcePath; // 0x00(0x18)
	};

	struct Function_DFMVehicle_DFMVehicleSequenceBindingComponent_StartAutoDrive_Param
	{
	public:

		float ExpectVelocity; // 0x00(0x04)
		float ExpectDuration; // 0x04(0x04)
	};

	struct Function_DFMVehicle_DFMVehicleSkillComponent_ServerInterruptVehicleSkills_Param
	{
	public:

		struct TArray<struct FString> KeyArray; // 0x00(0x10)
	};

	struct Function_DFMVehicle_DFMVehicleSkillInstance_OnRep_SkillStatus_Param
	{
	public:

		enum class EDFMVehicleSkillStatus OldSkillStatus; // 0x00(0x01)
	};

	struct Function_DFMVehicle_DFMVehicleSupplyStation_OnEndOverlap_Param
	{
	public:

		struct AActor* OverlappedActor; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
	};

	struct Function_DFMVehicle_DFMVehicleThermalSmoke_OnTriggerEndOverlapped_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

	struct Function_DFMVehicle_DramaAreaVehicle_SpawnVehicleAI_Param
	{
	public:

	};

	struct Function_DFMVehicle_InteractorVehicleExecutor_IsSeatFull_Param
	{
	public:

		struct AActor* Interactor; // 0x00(0x08)
		int32_t Index; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_DFMVehicle_LaserPointerLogic_RefreshLockingState_Param
	{
	public:

	};

	struct Function_DFMVehicle_SOLTrainComponent_ToggleLocomotiveSound_Param
	{
	public:

		bool bToggle; // 0x00(0x01)
	};

	struct Function_DFMVehicle_VehicleAreaDrama_SpawnVehicleAI_Param
	{
	public:

	};

	struct Function_DFMVehicle_VehicleFrontendActor_Setup_Param
	{
	public:

	};

	struct Function_DFMVehicle_VehicleFrontendContext_SetSkin_Param
	{
	public:

		uint64_t InSkinId; // 0x00(0x08)
	};

	struct Function_DFMVehicle_VehicleFrontendContextHelper_Remove_Param
	{
	public:

		struct UVehicleFrontendContext* InContext; // 0x00(0x08)
		uint64_t SocketGUID; // 0x08(0x08)
		struct FVehicleFrontendContextUpdateResult ReturnValue; // 0x10(0x01)
	};

	struct Function_DFMVehicle_VehicleFrontendLoadServices_Setup_Param
	{
	public:

	};

	struct Function_DFMVehicle_VehicleFrontendSubsystem_ProcessPrepare_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMVehicle_VehicleSpawnerDataTableManager_GetBattleFieldSpawnerDataRow_Param
	{
	public:

		int32_t InMapID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FBattleFieldSpawnerDataRow OutBattleFieldSpawnerDataRow; // 0x08(0x68)
	};

	struct Function_DFMVehicle_VehicleSpawnManager_ResetSpawned_Param
	{
	public:

	};

	struct Function_DFMVehicle_VehicleSpawner_SpawnAndRegister_Param
	{
	public:

		struct FTransform Transform; // 0x00(0x30)
		struct ADFMVehicleBase* ReturnValue; // 0x30(0x08)
	};

	struct Function_DFMVehicle_VehicleAutoSpawner_SpawnAndRegister_Param
	{
	public:

		struct FTransform Transform; // 0x00(0x30)
		struct ADFMVehicleBase* ReturnValue; // 0x30(0x08)
	};

	struct Function_DFMVehicle_WeaponBulletDynamicallyTrackingTarget_SetTrackingTargetLocation_Param
	{
	public:

		struct FVector InTrackingTargetLocation; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct AActor* HitTargetActor; // 0x10(0x08)
	};

	struct Function_DFMVehicle_DFMVehicleBase_VehicleReset_Param
	{
	public:

		enum class EVehicleResetType Flag; // 0x00(0x01)
	};

	struct Function_DFMVehicle_DFMVehicleAudioComponent_OnVehicleHitCallback_Param
	{
	public:

		struct AActor* SelfActor; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct FVector NormalImpulse; // 0x10(0x0c)
		struct FHitResult Hit; // 0x1c(0x88)
	};

	struct Function_DFMVehicle_DFMVehicleHealthComponent_SetVehicleCamp_Param
	{
	public:

		int32_t Camp; // 0x00(0x04)
	};

	struct Function_DFMVehicle_DFMVehiclePhysicsReplicationComponent_SendAutonomousFrameDataToServer_Param
	{
	public:

		int32_t ClientCorrectId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FDFMVehicleAutonomousFrameData> FrameDatas; // 0x08(0x10)
	};

	struct Function_DFMVehicle_DFMVehicleEffectComponent_TickMovingEffect_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMBrokenVehiclePart_OnRep_OnVehicleOwnerPhysicsStateChange_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMVehicleSprintComponent_OnCharacterSwitchSeat_Param
	{
	public:

		struct AActor* CHARACTER; // 0x00(0x08)
		struct FName OldSeatName; // 0x08(0x08)
		struct FName NewSeatName; // 0x10(0x08)
	};

	struct Function_DFMVehicle_DFMVehicleMoveComp_SetWheelActingSpeed_Param
	{
	public:

		float Speed; // 0x00(0x04)
	};

	struct Function_DFMVehicle_DFMTrainStateBase_OnUpdate_Param
	{
	public:

		struct ADFMTrain* Train; // 0x00(0x08)
		float DeltaTime; // 0x08(0x04)
	};

	struct Function_DFMVehicle_VehicleFrontendLoadProcessor_Setup_Param
	{
	public:

		uint64_t InID; // 0x00(0x08)
	};

	struct Function_DFMVehicle_DFMBoatVehicle_TryDestroy_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMAIHelicopterHealthComponent_Crash_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMBoatRadarExtension_OnCharacterSwitchSeat_Param
	{
	public:

		struct AActor* CHARACTER; // 0x00(0x08)
		struct FName OldSeatName; // 0x08(0x08)
		struct FName NewSeatName; // 0x10(0x08)
	};

	struct Function_DFMVehicle_DFMVehicleDashBoardExtension_OnXPPChange_Param
	{
	public:

		bool bIsFPP; // 0x00(0x01)
	};

	struct Function_DFMVehicle_DFMVehicleAssembleSteeringWheelExtension_OnCharacterSwitchSeat_Param
	{
	public:

		struct AActor* CHARACTER; // 0x00(0x08)
		struct FName OldSeatName; // 0x08(0x08)
		struct FName NewSeatName; // 0x10(0x08)
	};

	struct Function_DFMVehicle_DFMVehicleAssembleEmissionExtension_OnCharacterSwitchSeat_Param
	{
	public:

		struct AActor* CHARACTER; // 0x00(0x08)
		struct FName OldSeatName; // 0x08(0x08)
		struct FName NewSeatName; // 0x10(0x08)
	};

	struct Function_DFMVehicle_DFMVehicleAssembleDoorExtension_OnCharacterSwitchSeat_Param
	{
	public:

		struct AActor* CHARACTER; // 0x00(0x08)
		struct FName OldSeatName; // 0x08(0x08)
		struct FName NewSeatName; // 0x10(0x08)
	};

	struct Function_DFMVehicle_DFMBrokenHelicopterPart_OnHitCallback_Param
	{
	public:

		struct AActor* SelfActor; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct FVector NormalImpulse; // 0x10(0x0c)
		struct FHitResult Hit; // 0x1c(0x88)
	};

	struct Function_DFMVehicle_DFMMotorCycleMovementComponent_StartWheelie_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMVehicleADSSkillExecutor_OnCooldown_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMVehicleRebornBeaconSkillExecutor_OnPreviewPlacementLoaded_Param
	{
	public:

		struct FSoftObjectPath ResourcePath; // 0x00(0x18)
		struct UObject* ResourceObject; // 0x18(0x08)
	};

	struct Function_DFMVehicle_DFMVehicleScanSkillExecutor_OnScan_Param
	{
	public:

	};

	struct Function_DFMVehicle_DFMVehicleRepairSkillExecutor_OnVehicleTakeDamage_Param
	{
	public:

		struct FDamageResultInfo DamageResultInfo; // 0x00(0x5e0)
	};

	struct Function_DFMVehicle_DFMVehicleAssembledPartComponent_NetExtend_OnRep_GlassCrackStep_Param
	{
	public:

	};

	struct Function_DFMVehicle_VehicleFrontendLoadMaterialProcessor_SetMaterialBaseParam_Param
	{
	public:

		struct UMaterialInterface* OriginMaterial; // 0x00(0x08)
		struct UMaterialInstanceDynamic* DynamicMaterial; // 0x08(0x08)
	};

	struct Function_DFMVehicle_VehicleFrontendLoadResourcesProcessor_OnLoadCallback_Param
	{
	public:

		struct FVehicleFrontendLoadContext Context; // 0x00(0x30)
		struct FVehicleFrontendResourcesPak Pak; // 0x30(0x18)
	};

	struct Function_DFMVehicle_DFMAIHelicopter_UpdateHelicopterFightState_Param
	{
	public:

		enum class EAIHelicopterFightState State; // 0x00(0x01)
	};

	struct Function_DFMVehicle_DFMTank_SetBoneRelRotatorMap_Param
	{
	public:

		struct FName BoneName; // 0x00(0x08)
		struct FRotator BoneRotator; // 0x08(0x0c)
	};

	struct Function_DFMVehicle_DFMAITank_SetTankPhaseHP_Param
	{
	public:

		struct TMap<enum class EAITankPhase, float> AITankPhaseHPMap; // 0x00(0x50)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
