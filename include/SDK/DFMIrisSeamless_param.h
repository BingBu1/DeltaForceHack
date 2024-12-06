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
	struct Function_DFMIrisSeamless_DFMFSM_IrisEnterGetOffHelicopterAction_StartGetOnRope_Param
	{
	public:

	};

	struct Function_DFMIrisSeamless_DFMFSM_IrisEnterGetOnHelicopterAction_OnStateUpdate_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_DFMIrisSeamless_DFMFSM_IrisEnterInHelicopterAction_TransportHelicopterToFlyPoint_Param
	{
	public:

		struct AActor* Helicopter; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
	};

	struct Function_DFMIrisSeamless_DFMIrisEnterSeamlessGameplayHelper_SwitchClientPlayer_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_DFMIrisSeamless_DFMIrisEnterSubsystem_WarmUpLoopSequence_Param
	{
	public:

	};

	struct Function_DFMIrisSeamless_DFMIrisEnterUtils_ReloadMap_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
	};

	struct Function_DFMIrisSeamless_QA_ClientSeamlessTravelStatusListener_UnListenClientSeamlessTravelStatus_Param
	{
	public:

	};

	struct Function_DFMIrisSeamless_SafeHouseHelicopter_ToggleCastShadow_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_DFMIrisSeamless_DFMIrisEnterStageBase_TrySwitchNextStage_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMIrisSeamless_DFMIrisEnterStage_Match_ProcessReferencePackage_Param
	{
	public:

	};

	struct Function_DFMIrisSeamless_DFMIrisEnterStage_GetOn_ProcessMovePath_Param
	{
	public:

	};

	struct Function_DFMIrisSeamless_DFMIrisEnterStage_EventShow_WarmUpSequence_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMIrisSeamless_DFMIrisEnterStage_PadShow_WarmUpSequence_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMIrisSeamless_DFMIrisEnterStage_InfoInteract_WarmUpSequence_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMIrisSeamless_DFMIrisEnterStage_Abseil_SetAbseilCompletet_Param
	{
	public:

	};

	struct Function_DFMIrisSeamless_DFMIrisEnterStage_Fail_TeleportBackSafeHouse_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
