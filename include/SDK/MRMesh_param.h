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
	struct Function_MRMesh_MeshReconstructorBase_StopReconstruction_Param
	{
	public:

	};

	struct DelegateFunction_MRMesh_MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FVector> Vertices; // 0x08(0x10)
		struct TArray<int32_t> Triangles; // 0x18(0x10)
		struct TArray<struct FVector> Normals; // 0x28(0x10)
		struct TArray<float> Confidence; // 0x38(0x10)
	};

	struct Function_MRMesh_MRMeshComponent_IsConnected_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
