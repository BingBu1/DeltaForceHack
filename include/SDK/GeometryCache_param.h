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
	struct Function_GeometryCache_GeometryCacheActor_GetGeometryCacheComponent_Param
	{
	public:

		struct UGeometryCacheComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GeometryCache_GeometryCacheComponent_TickAtThisTime_Param
	{
	public:

		float Time; // 0x00(0x04)
		bool bInIsRunning; // 0x04(0x01)
		bool bInBackwards; // 0x05(0x01)
		bool bInIsLooping; // 0x06(0x01)
	};

	struct Function_GeometryCache_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Param
	{
	public:

		struct FGeometryCacheMeshData MeshData; // 0x00(0xa8)
		float SampleTime; // 0xa8(0x04)
	};

	struct Function_GeometryCache_GeometryCacheTrack_TransformAnimation_SetMesh_Param
	{
	public:

		struct FGeometryCacheMeshData NewMeshData; // 0x00(0xa8)
	};

	struct Function_GeometryCache_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Param
	{
	public:

		struct FGeometryCacheMeshData NewMeshData; // 0x00(0xa8)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
