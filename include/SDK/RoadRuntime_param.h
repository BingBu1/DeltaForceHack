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
	struct Function_RoadRuntime_CrossActor_UpdateSideMesh_Param
	{
	public:

		struct UStaticMesh* InPrototype; // 0x00(0x08)
		struct FVector MeshRelativeLocation; // 0x08(0x0c)
		struct FRotator MeshRelativeRotation; // 0x14(0x0c)
		int32_t SocketIndex; // 0x20(0x04)
		bool IsEnable; // 0x24(0x01)
		bool IsNormalized; // 0x25(0x01)
	};

	struct Function_RoadRuntime_RoadActor_UpdateSplineMesh_Param
	{
	public:

		int32_t MeshIndex; // 0x00(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
