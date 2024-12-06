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
	struct Function_DFMReplaySystem_DFMNetworkPlayerReplayComponent_TryStopReplayRecording_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMReplaySystem_DFMNetworkReplaySubsystem_OnGameFlowLeave_Param
	{
	public:

		enum class EGameFlowStageType GameFlowStage; // 0x00(0x01)
	};

	struct Function_DFMReplaySystem_DFMReplayInstance_StopReplayRecording_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMReplaySystem_DFMReplayPlayerController_OnUnregisterActor_Param
	{
	public:

		struct AActor* ChangedActor; // 0x00(0x08)
	};

	struct Function_DFMReplaySystem_DFMReplaySystemBlueprintHelper_StartParseProtocolFile_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FString FilePath; // 0x08(0x10)
	};

	struct Function_DFMReplaySystem_KillCamHUDView_StopKillCam_Param
	{
	public:

	};

	struct Function_DFMReplaySystem_ProtocolFileDebugItem_OnClickPlayButton_Param
	{
	public:

	};

	struct Function_DFMReplaySystem_ReplayControllerView_TrySkipReplayTime_Param
	{
	public:

	};

	struct Function_DFMReplaySystem_ReplayDebugFileItemView_PlayReplay_Param
	{
	public:

	};

	struct Function_DFMReplaySystem_ReplayDebugMainView_RemoveFromViewPortHide_Param
	{
	public:

	};

	struct Function_DFMReplaySystem_ReplayListDisplayView_RemoveFromViewPortHide_Param
	{
	public:

	};

	struct Function_DFMReplaySystem_ReplayOBView_OnClientCharacterListChanged_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
