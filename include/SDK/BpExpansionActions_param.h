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
	struct Function_BpExpansionActions_BpExpansionActions_SetStaticMeshCullingScreenSize_Param
	{
	public:

		struct UStaticMeshComponent* InStaticMeshComponent; // 0x00(0x08)
		float CullingScreenSize; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
