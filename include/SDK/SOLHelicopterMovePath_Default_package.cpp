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
	 * 	Name: PredefinedFunction ASOLHelicopterMovePath_Default_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ASOLHelicopterMovePath_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x53\x4f\x4c\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x4d\x6f\x76\x65\x50\x61\x74\x68\x5f\x44\x65\x66\x61\x75\x6c\x74\x2e\x53\x4f\x4c\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x4d\x6f\x76\x65\x50\x61\x74\x68\x5f\x44\x65\x66\x61\x75\x6c\x74\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000001
	 * 	Name: Function SOLHelicopterMovePath_Default.SOLHelicopterMovePath_Default_C.GetSplinePercentByCurve
	 * 	Flags: (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void ASOLHelicopterMovePath_Default_C::GetSplinePercentByCurve(float Time, float& Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x4f\x4c\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x4d\x6f\x76\x65\x50\x61\x74\x68\x5f\x44\x65\x66\x61\x75\x6c\x74\x2e\x53\x4f\x4c\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x4d\x6f\x76\x65\x50\x61\x74\x68\x5f\x44\x65\x66\x61\x75\x6c\x74\x5f\x43\x2e\x47\x65\x74\x53\x70\x6c\x69\x6e\x65\x50\x65\x72\x63\x65\x6e\x74\x42\x79\x43\x75\x72\x76\x65");
		Function_SOLHelicopterMovePath_Default_SOLHelicopterMovePath_Default_C_GetSplinePercentByCurve_Param params { };
		params.Time = Time;
		params.Percent = Percent;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Percent = params.Percent;
	}
}