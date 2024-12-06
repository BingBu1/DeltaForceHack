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
	struct Function_StaticMeshDescription_StaticMeshDescription_SetVertexInstanceUV_Param
	{
	public:

		struct FVertexInstanceID VertexInstanceID; // 0x00(0x04)
		struct FVector2D UV; // 0x04(0x08)
		int32_t UVIndex; // 0x0c(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
