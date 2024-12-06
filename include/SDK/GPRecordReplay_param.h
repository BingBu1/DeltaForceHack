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
	struct Function_GPRecordReplay_RecordReplaySystem_StartStopRecordingReplayOnServer_Param
	{
	public:

		bool bStartOrStop; // 0x00(0x01)
	};

	struct Function_GPRecordReplay_ReplayControlComponent_SwitchReplayPauseState_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPRecordReplay_ReplayFindComponent_PlayReplay_Param
	{
	public:

		struct FString ReplayName; // 0x00(0x10)
		struct FString StreamerType; // 0x10(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
