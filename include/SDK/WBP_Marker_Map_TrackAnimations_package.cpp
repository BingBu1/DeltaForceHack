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
	 * 	Name: PredefinedFunction UWBP_Marker_Map_TrackAnimations_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_Marker_Map_TrackAnimations_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x4d\x61\x72\x6b\x65\x72\x5f\x4d\x61\x70\x5f\x54\x72\x61\x63\x6b\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x73\x2e\x57\x42\x50\x5f\x4d\x61\x72\x6b\x65\x72\x5f\x4d\x61\x70\x5f\x54\x72\x61\x63\x6b\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x73\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XF1586F3D
	 * 	Name: Function WBP_Marker_Map_TrackAnimations.WBP_Marker_Map_TrackAnimations_C.Finished_6B7C5BD84B810214459DD09A319DDB35
	 * 	Flags: (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_Marker_Map_TrackAnimations_C::Finished_6B7C5BD84B810214459DD09A319DDB35()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x4d\x61\x72\x6b\x65\x72\x5f\x4d\x61\x70\x5f\x54\x72\x61\x63\x6b\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x73\x2e\x57\x42\x50\x5f\x4d\x61\x72\x6b\x65\x72\x5f\x4d\x61\x70\x5f\x54\x72\x61\x63\x6b\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x73\x5f\x43\x2e\x46\x69\x6e\x69\x73\x68\x65\x64\x5f\x36\x42\x37\x43\x35\x42\x44\x38\x34\x42\x38\x31\x30\x32\x31\x34\x34\x35\x39\x44\x44\x30\x39\x41\x33\x31\x39\x44\x44\x42\x33\x35");
		Function_WBP_Marker_Map_TrackAnimations_WBP_Marker_Map_TrackAnimations_C_Finished_6B7C5BD84B810214459DD09A319DDB35_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}