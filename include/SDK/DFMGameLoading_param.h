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
	struct Function_DFMGameLoading_DFMFlowManager_StartFlowsWithConfigIns_Param
	{
	public:

		struct ULoadingFlowStepsConfig* ConfigIns; // 0x00(0x08)
	};

	struct Function_DFMGameLoading_DFMGameLoadingManager_WarmUpLoadingView_Param
	{
	public:

	};

	struct Function_DFMGameLoading_LoadingSubDataWrapper_WarmUpNextMainStageData_Param
	{
	public:

		struct FLoadingGameFlowStageConfig PreLoadDataConfig; // 0x00(0x20)
	};

	struct Function_DFMGameLoading_LoadingViewContext_OnLoadingViewClassLoaded_Param
	{
	public:

	};

	struct Function_DFMGameLoading_DFMFlowBase_OnFlowStart_Param
	{
	public:

	};

	struct Function_DFMGameLoading_DFMFlowBPBase_BP_Tick_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_DFMGameLoading_DFMFlowLoadDataTable_OnPreloadFinish_Param
	{
	public:

		struct FDataTableUseSceneValue UseSceneType; // 0x00(0x08)
		int32_t LoadedNum; // 0x08(0x04)
	};

	struct Function_DFMGameLoading_DFMFlowOpenTargetLevel_LoadMapProgress_Param
	{
	public:

		float Progress; // 0x00(0x04)
	};

	struct Function_DFMGameLoading_DFMFlowPrepareStartupBP_OnPreloadFinished_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Paths; // 0x00(0x10)
	};

	struct Function_DFMGameLoading_DFMFlowRestartLuaBase_UpdateProgress_Param
	{
	public:

		float Progress; // 0x00(0x04)
	};

	struct Function_DFMGameLoading_DFMFlowStreamingLevelWatch_OnStreamingLevelLoadPercentage_Param
	{
	public:

		int32_t Percentage; // 0x00(0x04)
	};

	struct Function_DFMGameLoading_DFMFlowUIAsyncLoadWatch_OnUIAsyncLoadPercentage_Param
	{
	public:

		float Percentage; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FName> BlockGameFlowViewNameArray; // 0x08(0x10)
	};

	struct Function_DFMGameLoading_DFMSubFlowBPBase_BP_Tick_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_DFMGameLoading_DFMFlowPrepareSafeHouse_TeleportEnd_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
