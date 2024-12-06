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
	 * 	Name: PredefinedFunction UResourceLoadTrackerProxy.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UResourceLoadTrackerProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x52\x65\x73\x6f\x75\x72\x63\x65\x4c\x6f\x61\x64\x54\x72\x61\x63\x6b\x65\x72\x2e\x52\x65\x73\x6f\x75\x72\x63\x65\x4c\x6f\x61\x64\x54\x72\x61\x63\x6b\x65\x72\x50\x72\x6f\x78\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ResourceLoadTracker.ResourceLoadTrackerProxy.OnProcessPreEnterGameFlowStage
	 * 	Flags: (Final, Native, Private)
	 */
	void UResourceLoadTrackerProxy::OnProcessPreEnterGameFlowStage(enum class EGameFlowStageType GameFlowStage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x52\x65\x73\x6f\x75\x72\x63\x65\x4c\x6f\x61\x64\x54\x72\x61\x63\x6b\x65\x72\x2e\x52\x65\x73\x6f\x75\x72\x63\x65\x4c\x6f\x61\x64\x54\x72\x61\x63\x6b\x65\x72\x50\x72\x6f\x78\x79\x2e\x4f\x6e\x50\x72\x6f\x63\x65\x73\x73\x50\x72\x65\x45\x6e\x74\x65\x72\x47\x61\x6d\x65\x46\x6c\x6f\x77\x53\x74\x61\x67\x65");
		Function_ResourceLoadTracker_ResourceLoadTrackerProxy_OnProcessPreEnterGameFlowStage_Param params { };
		params.GameFlowStage = GameFlowStage;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}