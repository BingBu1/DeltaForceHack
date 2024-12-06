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
	struct Function_GPDeformable_GPDeformableActor_UnRegisterBoxCollision_Param
	{
	public:

	};

	struct Function_GPDeformable_GPDeformableGameStateComponent_UpdateVolumetricViewDistance_Param
	{
	public:

	};

	struct Function_GPDeformable_GPUASActor_SyncMovePointToServer_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		struct FVector InMovePoint; // 0x04(0x0c)
		struct FVector InDirection; // 0x10(0x0c)
	};

	struct Function_GPDeformable_GPUASActorInterface_IsLocalControlled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPDeformable_GPUASMovementComponent_TickSimulateMove_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPDeformable_GPDeformableShapeComponentBase_ReadVibilityList_Param
	{
	public:

		struct TArray<bool> InList; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPDeformable_GPDeformableCubeRayMarchingComponent_TickRecalculateStep_Param
	{
	public:

	};

	struct Function_GPDeformable_GPDeformableMeshEmitComponent_ClearEmiter_Param
	{
	public:

	};

	struct Function_GPDeformable_GPDeformableVolumeRayMarchingComponent_TickExpandVertices_Param
	{
	public:

	};

	struct Function_GPDeformable_GPDeformableVolumeSmokeComponent_TickFadeOut_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
