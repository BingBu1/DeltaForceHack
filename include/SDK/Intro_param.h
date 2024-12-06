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
	struct Function_Intro_IntroGameMode_SetPlayerVisiable_Param
	{
	public:

		int32_t PlayerIndex; // 0x00(0x04)
		bool bVisiblity; // 0x04(0x01)
	};

	struct Function_Intro_IntroPlayerState_SetPlayerVisiable_Param
	{
	public:

		bool bPlayerVisiable; // 0x00(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
