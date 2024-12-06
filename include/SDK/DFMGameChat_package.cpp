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
	 * 	Name: PredefinedFunction UDFMGameChat.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMGameChat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x47\x61\x6d\x65\x43\x68\x61\x74\x2e\x44\x46\x4d\x47\x61\x6d\x65\x43\x68\x61\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMGameChat.DFMGameChat.ServerAISendChatPreset
	 * 	Flags: (Net, NetReliable, Native, Event, Public, NetServer)
	 */
	void UDFMGameChat::ServerAISendChatPreset(struct AController* Controller, struct FName PresetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x47\x61\x6d\x65\x43\x68\x61\x74\x2e\x44\x46\x4d\x47\x61\x6d\x65\x43\x68\x61\x74\x2e\x53\x65\x72\x76\x65\x72\x41\x49\x53\x65\x6e\x64\x43\x68\x61\x74\x50\x72\x65\x73\x65\x74");
		Function_DFMGameChat_DFMGameChat_ServerAISendChatPreset_Param params { };
		params.Controller = Controller;
		params.PresetId = PresetId;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}