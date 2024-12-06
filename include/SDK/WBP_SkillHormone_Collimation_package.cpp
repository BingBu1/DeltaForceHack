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
	 * 	Name: PredefinedFunction UWBP_SkillHormone_Collimation_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_SkillHormone_Collimation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x53\x6b\x69\x6c\x6c\x48\x6f\x72\x6d\x6f\x6e\x65\x5f\x43\x6f\x6c\x6c\x69\x6d\x61\x74\x69\x6f\x6e\x2e\x57\x42\x50\x5f\x53\x6b\x69\x6c\x6c\x48\x6f\x72\x6d\x6f\x6e\x65\x5f\x43\x6f\x6c\x6c\x69\x6d\x61\x74\x69\x6f\x6e\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000070
	 * 	Name: Function WBP_SkillHormone_Collimation.WBP_SkillHormone_Collimation_C.GetAimOutlineComponent
	 * 	Flags: (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void UWBP_SkillHormone_Collimation_C::GetAimOutlineComponent(struct UWeaponFuncComponentAimOutline*& Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x53\x6b\x69\x6c\x6c\x48\x6f\x72\x6d\x6f\x6e\x65\x5f\x43\x6f\x6c\x6c\x69\x6d\x61\x74\x69\x6f\x6e\x2e\x57\x42\x50\x5f\x53\x6b\x69\x6c\x6c\x48\x6f\x72\x6d\x6f\x6e\x65\x5f\x43\x6f\x6c\x6c\x69\x6d\x61\x74\x69\x6f\x6e\x5f\x43\x2e\x47\x65\x74\x41\x69\x6d\x4f\x75\x74\x6c\x69\x6e\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		Function_WBP_SkillHormone_Collimation_WBP_SkillHormone_Collimation_C_GetAimOutlineComponent_Param params { };
		params.Component = Component;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Component = params.Component;
	}
}