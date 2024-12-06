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
	struct Function_GPGameInput_GPInputDelegates_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct UGPInputDelegates* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameInput_GPInputHelper_WantInputMode_UIOnly_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FName ID; // 0x08(0x08)
		bool bEnable; // 0x10(0x01)
		bool bPersistent; // 0x11(0x01)
	};

	struct Function_GPGameInput_MobileGameHandle_UpdateSprintTriggerSensitivity_Param
	{
	public:

	};

	struct Function_GPGameInput_MobilePlayerInput_UnRegisterInterestedTouchIndex_Param
	{
	public:

		enum class ETouchIndex FingerIndex; // 0x00(0x01)
	};

	struct Function_GPGameInput_HDPlayerInput_OnZoomRateChanged_Param
	{
	public:

		float NewRate; // 0x00(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
