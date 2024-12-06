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
	struct Function_GPLineRenderer_GPLineRendererComponent_UpdateLine_Param
	{
	public:

		int32_t SectionIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FVector> Vertices; // 0x08(0x10)
		struct TArray<struct FVector> Normals; // 0x18(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
