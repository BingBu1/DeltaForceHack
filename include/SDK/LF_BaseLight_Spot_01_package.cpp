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
	 * 	Name: PredefinedFunction ALF_BaseLight_Spot_01_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALF_BaseLight_Spot_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x4c\x46\x5f\x42\x61\x73\x65\x4c\x69\x67\x68\x74\x5f\x53\x70\x6f\x74\x5f\x30\x31\x2e\x4c\x46\x5f\x42\x61\x73\x65\x4c\x69\x67\x68\x74\x5f\x53\x70\x6f\x74\x5f\x30\x31\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function LF_BaseLight_Spot_01.LF_BaseLight_Spot_01_C.SetupPrebakeShadow
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALF_BaseLight_Spot_01_C::SetupPrebakeShadow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4c\x46\x5f\x42\x61\x73\x65\x4c\x69\x67\x68\x74\x5f\x53\x70\x6f\x74\x5f\x30\x31\x2e\x4c\x46\x5f\x42\x61\x73\x65\x4c\x69\x67\x68\x74\x5f\x53\x70\x6f\x74\x5f\x30\x31\x5f\x43\x2e\x53\x65\x74\x75\x70\x50\x72\x65\x62\x61\x6b\x65\x53\x68\x61\x64\x6f\x77");
		Function_LF_BaseLight_Spot_01_LF_BaseLight_Spot_01_C_SetupPrebakeShadow_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}