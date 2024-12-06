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
	struct Function_GM_PlayerGMComponentRaid_ServerSetBreakableActorHP_Param
	{
	public:

		int32_t DesHP; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AActor* Target; // 0x08(0x08)
		struct FName ActorsTag; // 0x10(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
