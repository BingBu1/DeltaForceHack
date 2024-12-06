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
	struct Function_AutomationUtils_AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Param
	{
	public:

		struct FString ScreenshotName; // 0x00(0x10)
		float MaxGlobalError; // 0x10(0x04)
		float MaxLocalError; // 0x14(0x04)
		struct FString MapNameOverride; // 0x18(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
