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
	struct Function_ChaosSolverEngine_ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Param
	{
	public:

		struct FChaosPhysicsCollisionInfo PhysicsCollision; // 0x00(0x70)
		struct FHitResult ReturnValue; // 0x70(0x88)
	};

	struct Function_ChaosSolverEngine_ChaosSolverActor_SetSolverActive_Param
	{
	public:

		bool bActive; // 0x00(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
