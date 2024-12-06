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
	 * 	Name: PredefinedFunction UDiscordAPI.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDiscordAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x69\x73\x63\x6f\x72\x64\x2e\x44\x69\x73\x63\x6f\x72\x64\x41\x50\x49");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Discord.DiscordAPI.UpdateActivity
	 * 	Flags: (Final, Native, Public)
	 */
	bool UDiscordAPI::UpdateActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x69\x73\x63\x6f\x72\x64\x2e\x44\x69\x73\x63\x6f\x72\x64\x41\x50\x49\x2e\x55\x70\x64\x61\x74\x65\x41\x63\x74\x69\x76\x69\x74\x79");
		Function_Discord_DiscordAPI_UpdateActivity_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}