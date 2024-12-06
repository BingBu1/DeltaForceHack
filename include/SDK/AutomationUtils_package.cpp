/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#include "../SDK.h"

namespace Dumper
{
	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UAutomationUtilsBlueprintLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAutomationUtilsBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x75\x74\x6f\x6d\x61\x74\x69\x6f\x6e\x55\x74\x69\x6c\x73\x2e\x41\x75\x74\x6f\x6d\x61\x74\x69\x6f\x6e\x55\x74\x69\x6c\x73\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAutomationUtilsBlueprintLibrary::STATIC_TakeGameplayAutomationScreenshot(struct FString ScreenshotName, float MaxGlobalError, float MaxLocalError, struct FString MapNameOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x75\x74\x6f\x6d\x61\x74\x69\x6f\x6e\x55\x74\x69\x6c\x73\x2e\x41\x75\x74\x6f\x6d\x61\x74\x69\x6f\x6e\x55\x74\x69\x6c\x73\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x4c\x69\x62\x72\x61\x72\x79\x2e\x54\x61\x6b\x65\x47\x61\x6d\x65\x70\x6c\x61\x79\x41\x75\x74\x6f\x6d\x61\x74\x69\x6f\x6e\x53\x63\x72\x65\x65\x6e\x73\x68\x6f\x74");
		Function_AutomationUtils_AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Param params { };
		params.ScreenshotName = ScreenshotName;
		params.MaxGlobalError = MaxGlobalError;
		params.MaxLocalError = MaxLocalError;
		params.MapNameOverride = MapNameOverride;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}