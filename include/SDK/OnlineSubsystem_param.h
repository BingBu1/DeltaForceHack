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
	struct Function_OnlineSubsystem_TurnBasedMatchInterface_OnMatchReceivedTurn_Param
	{
	public:

		struct FString Match; // 0x00(0x10)
		bool bDidBecomeActive; // 0x10(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
