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
	struct Function_DFMGameLaunch_DFBHDHelper_SetDFExhibitionChange_Param
	{
	public:

		bool bConnectBHD; // 0x00(0x01)
	};

	struct Function_DFMGameLaunch_DFDevopsTest_IsBlueprintClassExist_Param
	{
	public:

		struct FString InClassPath; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_DFMGameLaunch_DFGameLaunchManager_StartPreCompilePSO_Param
	{
	public:

	};

	struct Function_DFMGameLaunch_DFGameLaunchUserCache_UpdateConfig_Param
	{
	public:

	};

	struct Function_DFMGameLaunch_DFGameLaunchStepFlowManager_RunStep_Param
	{
	public:

	};

	struct Function_DFMGameLaunch_DFGameLaunchStepBase_UpdateBackgroundInfo_Param
	{
	public:

		struct FText InTipText; // 0x00(0x18)
		float InLoadingPercent; // 0x18(0x04)
	};

	struct Function_DFMGameLaunch_DFGameLaunchStepBPBase_EndStep_Param
	{
	public:

		enum class ELaunchStepResult Result; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FString ErrorCode; // 0x08(0x10)
	};

	struct Function_DFMGameLaunch_GLS_CheckNetStatus_OnConfirmBtnClicked_Param
	{
	public:

	};

	struct Function_DFMGameLaunch_GLS_CheckPhysicSpace_OnConfirmBtnClicked_Param
	{
	public:

	};

	struct Function_DFMGameLaunch_GLS_OpenHealthTip_WarmupSteps_Param
	{
	public:

	};

	struct Function_DFMGameLaunch_GLS_RequestMapleData_StartRequestMapleData_Param
	{
	public:

	};

	struct Function_DFMGameLaunch_GLS_RequestCDNMeta_RequestMetaFile_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
