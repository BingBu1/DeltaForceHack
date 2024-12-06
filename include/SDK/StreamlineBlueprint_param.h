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
	struct Function_StreamlineBlueprint_StreamlineLibraryDLSSG_SetDLSSGMode_Param
	{
	public:

		enum class UStreamlineDLSSGMode DLSSGMode; // 0x00(0x01)
	};

	struct Function_StreamlineBlueprint_StreamlineLibraryReflex_SetReflexMode_Param
	{
	public:

		enum class UStreamlineReflexMode Mode; // 0x00(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
