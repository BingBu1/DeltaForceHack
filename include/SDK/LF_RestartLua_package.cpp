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
	 * 	Name: PredefinedFunction ULF_RestartLua_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULF_RestartLua_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x4c\x46\x5f\x52\x65\x73\x74\x61\x72\x74\x4c\x75\x61\x2e\x4c\x46\x5f\x52\x65\x73\x74\x61\x72\x74\x4c\x75\x61\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function LF_RestartLua.LF_RestartLua_C.DoReconnectServer
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULF_RestartLua_C::DoReconnectServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4c\x46\x5f\x52\x65\x73\x74\x61\x72\x74\x4c\x75\x61\x2e\x4c\x46\x5f\x52\x65\x73\x74\x61\x72\x74\x4c\x75\x61\x5f\x43\x2e\x44\x6f\x52\x65\x63\x6f\x6e\x6e\x65\x63\x74\x53\x65\x72\x76\x65\x72");
		Function_LF_RestartLua_LF_RestartLua_C_DoReconnectServer_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}