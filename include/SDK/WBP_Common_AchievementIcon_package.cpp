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
	 * 	Name: PredefinedFunction UWBP_Common_AchievementIcon_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_Common_AchievementIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x43\x6f\x6d\x6d\x6f\x6e\x5f\x41\x63\x68\x69\x65\x76\x65\x6d\x65\x6e\x74\x49\x63\x6f\x6e\x2e\x57\x42\x50\x5f\x43\x6f\x6d\x6d\x6f\x6e\x5f\x41\x63\x68\x69\x65\x76\x65\x6d\x65\x6e\x74\x49\x63\x6f\x6e\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WBP_Common_AchievementIcon.WBP_Common_AchievementIcon_C.SetColor
	 * 	Flags: (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_Common_AchievementIcon_C::SetColor(int32_t Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x43\x6f\x6d\x6d\x6f\x6e\x5f\x41\x63\x68\x69\x65\x76\x65\x6d\x65\x6e\x74\x49\x63\x6f\x6e\x2e\x57\x42\x50\x5f\x43\x6f\x6d\x6d\x6f\x6e\x5f\x41\x63\x68\x69\x65\x76\x65\x6d\x65\x6e\x74\x49\x63\x6f\x6e\x5f\x43\x2e\x53\x65\x74\x43\x6f\x6c\x6f\x72");
		Function_WBP_Common_AchievementIcon_WBP_Common_AchievementIcon_C_SetColor_Param params { };
		params.Color = Color;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}