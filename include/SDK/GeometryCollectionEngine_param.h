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
	struct Function_GeometryCollectionEngine_ChaosDestructionListener_SortTrailingEvents_Param
	{
	public:

		struct TArray<struct FChaosTrailingEventData> TrailingEvents; // 0x00(0x10)
		enum class EChaosTrailingSortMethod SortMethod; // 0x10(0x01)
	};

	struct Function_GeometryCollectionEngine_GeometryCollectionActor_RaycastSingle_Param
	{
	public:

		struct FVector Start; // 0x00(0x0c)
		struct FVector End; // 0x0c(0x0c)
		struct FHitResult OutHit; // 0x18(0x88)
		bool ReturnValue; // 0xa0(0x01)
	};

	struct Function_GeometryCollectionEngine_GeometryCollectionComponent_SetNotifyBreaks_Param
	{
	public:

		bool bNewNotifyBreaks; // 0x00(0x01)
	};

	struct Function_GeometryCollectionEngine_SkeletalMeshSimulationComponent_ReceivePhysicsCollision_Param
	{
	public:

		struct FChaosPhysicsCollisionInfo CollisionInfo; // 0x00(0x70)
	};

	struct Function_GeometryCollectionEngine_StaticMeshSimulationComponent_ReceivePhysicsCollision_Param
	{
	public:

		struct FChaosPhysicsCollisionInfo CollisionInfo; // 0x00(0x70)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
