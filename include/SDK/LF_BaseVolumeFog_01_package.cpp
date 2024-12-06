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
	 * 	Name: PredefinedFunction ALF_BaseVolumeFog_01_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALF_BaseVolumeFog_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x4c\x46\x5f\x42\x61\x73\x65\x56\x6f\x6c\x75\x6d\x65\x46\x6f\x67\x5f\x30\x31\x2e\x4c\x46\x5f\x42\x61\x73\x65\x56\x6f\x6c\x75\x6d\x65\x46\x6f\x67\x5f\x30\x31\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XA01824A5
	 * 	Name: Function LF_BaseVolumeFog_01.LF_BaseVolumeFog_01_C.UseSwitchTempertuare
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALF_BaseVolumeFog_01_C::UseSwitchTempertuare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4c\x46\x5f\x42\x61\x73\x65\x56\x6f\x6c\x75\x6d\x65\x46\x6f\x67\x5f\x30\x31\x2e\x4c\x46\x5f\x42\x61\x73\x65\x56\x6f\x6c\x75\x6d\x65\x46\x6f\x67\x5f\x30\x31\x5f\x43\x2e\x55\x73\x65\x53\x77\x69\x74\x63\x68\x54\x65\x6d\x70\x65\x72\x74\x75\x61\x72\x65");
		Function_LF_BaseVolumeFog_01_LF_BaseVolumeFog_01_C_UseSwitchTempertuare_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}