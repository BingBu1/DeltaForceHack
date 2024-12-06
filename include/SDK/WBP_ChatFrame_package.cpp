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
	 * 	Name: PredefinedFunction UWBP_ChatFrame_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_ChatFrame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x43\x68\x61\x74\x46\x72\x61\x6d\x65\x2e\x57\x42\x50\x5f\x43\x68\x61\x74\x46\x72\x61\x6d\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0918940
	 * 	Name: Function WBP_ChatFrame.WBP_ChatFrame_C.SetAngle
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_ChatFrame_C::SetAngle(int32_t Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x43\x68\x61\x74\x46\x72\x61\x6d\x65\x2e\x57\x42\x50\x5f\x43\x68\x61\x74\x46\x72\x61\x6d\x65\x5f\x43\x2e\x53\x65\x74\x41\x6e\x67\x6c\x65");
		Function_WBP_ChatFrame_WBP_ChatFrame_C_SetAngle_Param params { };
		params.Angle = Angle;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}