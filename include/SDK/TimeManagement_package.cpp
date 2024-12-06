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
	 * 	Name: PredefinedFunction UFixedFrameRateCustomTimeStep.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UFixedFrameRateCustomTimeStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x6d\x65\x6e\x74\x2e\x46\x69\x78\x65\x64\x46\x72\x61\x6d\x65\x52\x61\x74\x65\x43\x75\x73\x74\x6f\x6d\x54\x69\x6d\x65\x53\x74\x65\x70");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTimeManagementBlueprintLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTimeManagementBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x6d\x65\x6e\x74\x2e\x54\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x6d\x65\x6e\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTimeSynchronizationSource.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTimeSynchronizationSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x6d\x65\x6e\x74\x2e\x54\x69\x6d\x65\x53\x79\x6e\x63\x68\x72\x6f\x6e\x69\x7a\x61\x74\x69\x6f\x6e\x53\x6f\x75\x72\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	 * 	Flags: (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 */
	struct FFrameTime UTimeManagementBlueprintLibrary::STATIC_TransformTime(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& DestinationRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x54\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x6d\x65\x6e\x74\x2e\x54\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x6d\x65\x6e\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x4c\x69\x62\x72\x61\x72\x79\x2e\x54\x72\x61\x6e\x73\x66\x6f\x72\x6d\x54\x69\x6d\x65");
		Function_TimeManagement_TimeManagementBlueprintLibrary_TransformTime_Param params { };
		params.SourceTime = SourceTime;
		params.SourceRate = SourceRate;
		params.DestinationRate = DestinationRate;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		SourceTime = params.SourceTime;
		SourceRate = params.SourceRate;
		DestinationRate = params.DestinationRate;
		return params.ReturnValue;
	}
}