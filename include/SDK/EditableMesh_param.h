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
	struct Function_EditableMesh_EditableMesh_WeldVertices_Param
	{
	public:

		struct TArray<struct FVertexID> VertexIDs; // 0x00(0x10)
		struct FVertexID OutNewVertexID; // 0x10(0x04)
	};

	struct Function_EditableMesh_EditableMeshFactory_MakeEditableMesh_Param
	{
	public:

		struct UPrimitiveComponent* PrimitiveComponent; // 0x00(0x08)
		int32_t LodIndex; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct UEditableMesh* ReturnValue; // 0x10(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
