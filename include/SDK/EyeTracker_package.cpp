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
	 * 	Name: PredefinedFunction FEyeTrackerStereoGazeData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FEyeTrackerStereoGazeData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x45\x79\x65\x54\x72\x61\x63\x6b\x65\x72\x2e\x45\x79\x65\x54\x72\x61\x63\x6b\x65\x72\x53\x74\x65\x72\x65\x6f\x47\x61\x7a\x65\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FEyeTrackerGazeData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FEyeTrackerGazeData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x45\x79\x65\x54\x72\x61\x63\x6b\x65\x72\x2e\x45\x79\x65\x54\x72\x61\x63\x6b\x65\x72\x47\x61\x7a\x65\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UEyeTrackerFunctionLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UEyeTrackerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x45\x79\x65\x54\x72\x61\x63\x6b\x65\x72\x2e\x45\x79\x65\x54\x72\x61\x63\x6b\x65\x72\x46\x75\x6e\x63\x74\x69\x6f\x6e\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UEyeTrackerFunctionLibrary::STATIC_SetEyeTrackedPlayer(struct APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x45\x79\x65\x54\x72\x61\x63\x6b\x65\x72\x2e\x45\x79\x65\x54\x72\x61\x63\x6b\x65\x72\x46\x75\x6e\x63\x74\x69\x6f\x6e\x4c\x69\x62\x72\x61\x72\x79\x2e\x53\x65\x74\x45\x79\x65\x54\x72\x61\x63\x6b\x65\x64\x50\x6c\x61\x79\x65\x72");
		Function_EyeTracker_EyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Param params { };
		params.PlayerController = PlayerController;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}