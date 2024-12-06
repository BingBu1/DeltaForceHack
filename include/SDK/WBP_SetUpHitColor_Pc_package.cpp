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
	 * 	Name: PredefinedFunction UWBP_SetUpHitColor_Pc_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_SetUpHitColor_Pc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x53\x65\x74\x55\x70\x48\x69\x74\x43\x6f\x6c\x6f\x72\x5f\x50\x63\x2e\x57\x42\x50\x5f\x53\x65\x74\x55\x70\x48\x69\x74\x43\x6f\x6c\x6f\x72\x5f\x50\x63\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC000003E
	 * 	Name: Function WBP_SetUpHitColor_Pc.WBP_SetUpHitColor_Pc_C.SetColor
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_SetUpHitColor_Pc_C::SetColor(int32_t ColorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x53\x65\x74\x55\x70\x48\x69\x74\x43\x6f\x6c\x6f\x72\x5f\x50\x63\x2e\x57\x42\x50\x5f\x53\x65\x74\x55\x70\x48\x69\x74\x43\x6f\x6c\x6f\x72\x5f\x50\x63\x5f\x43\x2e\x53\x65\x74\x43\x6f\x6c\x6f\x72");
		Function_WBP_SetUpHitColor_Pc_WBP_SetUpHitColor_Pc_C_SetColor_Param params { };
		params.ColorIndex = ColorIndex;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}