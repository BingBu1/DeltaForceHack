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
	struct Function_Swarms_TestSwarmsActor_SubCheckOverlapResult_Param
	{
	public:

		struct APawn* Char; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_Swarms_SwarmsComponent_UpdateInstances_Param
	{
	public:

	};

	struct Function_Swarms_SwarmsComponentCPU_UpdateTransArray_Low_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
