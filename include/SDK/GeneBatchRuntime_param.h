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
	struct Function_GeneBatchRuntime_GeneBatchRuntimeComponent_SetQuality_Param
	{
	public:

		int32_t InQuality; // 0x00(0x04)
	};

	struct Function_GeneBatchRuntime_BatchStaticMesh_RequestBatch_Param
	{
	public:

		struct UGeneBatchRuntimeSubsystem* GBRuntime; // 0x00(0x08)
		int32_t BatchType; // 0x08(0x04)
		int32_t MeshID; // 0x0c(0x04)
		struct UBatchStaticMesh* ReturnValue; // 0x10(0x08)
	};

	struct Function_GeneBatchRuntime_GeneBatchRuntimeSubsystem_FindLeafHLODChildrenCurrent_Param
	{
	public:

		struct UPrimitiveComponent* PrimitiveComponent; // 0x00(0x08)
		struct TArray<struct UPrimitiveComponent*> ReturnValue; // 0x08(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
