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
	 * 	Name: PredefinedFunction UWBP_ScreenMarkerMission_Raid_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_ScreenMarkerMission_Raid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x53\x63\x72\x65\x65\x6e\x4d\x61\x72\x6b\x65\x72\x4d\x69\x73\x73\x69\x6f\x6e\x5f\x52\x61\x69\x64\x2e\x57\x42\x50\x5f\x53\x63\x72\x65\x65\x6e\x4d\x61\x72\x6b\x65\x72\x4d\x69\x73\x73\x69\x6f\x6e\x5f\x52\x61\x69\x64\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WBP_ScreenMarkerMission_Raid.WBP_ScreenMarkerMission_Raid_C.SetArrow
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_ScreenMarkerMission_Raid_C::SetArrow(bool bIsOutScreen, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x53\x63\x72\x65\x65\x6e\x4d\x61\x72\x6b\x65\x72\x4d\x69\x73\x73\x69\x6f\x6e\x5f\x52\x61\x69\x64\x2e\x57\x42\x50\x5f\x53\x63\x72\x65\x65\x6e\x4d\x61\x72\x6b\x65\x72\x4d\x69\x73\x73\x69\x6f\x6e\x5f\x52\x61\x69\x64\x5f\x43\x2e\x53\x65\x74\x41\x72\x72\x6f\x77");
		Function_WBP_ScreenMarkerMission_Raid_WBP_ScreenMarkerMission_Raid_C_SetArrow_Param params { };
		params.bIsOutScreen = bIsOutScreen;
		params.Angle = Angle;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}