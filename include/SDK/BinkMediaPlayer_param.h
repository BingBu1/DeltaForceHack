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
	struct Function_BinkMediaPlayer_BinkFunctionLibrary_BinkLoadingMovie_GetTime_Param
	{
	public:

		struct FTimespan ReturnValue; // 0x00(0x08)
	};

	struct Function_BinkMediaPlayer_BinkMediaPlayer_SupportsSeeking_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_BinkMediaPlayer_BinkMediaTexture_SetMediaPlayer_Param
	{
	public:

		struct UBinkMediaPlayer* InMediaPlayer; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
