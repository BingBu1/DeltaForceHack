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
	struct Function_LiteSequence_LiteSequenceConsoleCommand_TestPlayLiteSequence_Param
	{
	public:

		struct FName SequenceName; // 0x00(0x08)
	};

	struct Function_LiteSequence_LiteSequencePerformanceTest_PerformanceTestStart_Param
	{
	public:

		bool bTestLevelSequence; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float InRate; // 0x04(0x04)
	};

	struct Function_LiteSequence_LiteSequencePlayerComponent_TryLoadAudioInternal_Param
	{
	public:

		struct FSoftObjectPath AudioPath; // 0x00(0x18)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
