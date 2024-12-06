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
	struct Function_DFMultiprocessingSocket_DFSocketClient_SendToServer_Param
	{
	public:

		struct FString Message; // 0x00(0x10)
	};

	struct Function_DFMultiprocessingSocket_DFSocketServer_SendToClient_Param
	{
	public:

		struct FString Message; // 0x00(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
