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
	 * 	Name: PredefinedFunction ALF_Lighting_Master_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALF_Lighting_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x4c\x46\x5f\x4c\x69\x67\x68\x74\x69\x6e\x67\x5f\x4d\x61\x73\x74\x65\x72\x2e\x4c\x46\x5f\x4c\x69\x67\x68\x74\x69\x6e\x67\x5f\x4d\x61\x73\x74\x65\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X36201D7C
	 * 	Name: Function LF_Lighting_Master.LF_Lighting_Master_C.VFXFunction
	 * 	Flags: (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALF_Lighting_Master_C::VFXFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4c\x46\x5f\x4c\x69\x67\x68\x74\x69\x6e\x67\x5f\x4d\x61\x73\x74\x65\x72\x2e\x4c\x46\x5f\x4c\x69\x67\x68\x74\x69\x6e\x67\x5f\x4d\x61\x73\x74\x65\x72\x5f\x43\x2e\x56\x46\x58\x46\x75\x6e\x63\x74\x69\x6f\x6e");
		Function_LF_Lighting_Master_LF_Lighting_Master_C_VFXFunction_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}