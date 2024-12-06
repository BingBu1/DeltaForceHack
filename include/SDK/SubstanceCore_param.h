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
	struct Function_SubstanceCore_SubstanceGraphInstance_SetInputString_Param
	{
	public:

		struct FString Identifier; // 0x00(0x10)
		struct FString Value; // 0x10(0x10)
	};

	struct Function_SubstanceCore_SubstanceUtility_SyncRendering_Param
	{
	public:

		struct USubstanceGraphInstance* InstancesToRender; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
