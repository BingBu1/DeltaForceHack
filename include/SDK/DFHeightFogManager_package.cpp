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
	 * 	Name: PredefinedFunction ADFHeightFogActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ADFHeightFogActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x48\x65\x69\x67\x68\x74\x46\x6f\x67\x4d\x61\x6e\x61\x67\x65\x72\x2e\x44\x46\x48\x65\x69\x67\x68\x74\x46\x6f\x67\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFHeightFogSubsystem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFHeightFogSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x48\x65\x69\x67\x68\x74\x46\x6f\x67\x4d\x61\x6e\x61\x67\x65\x72\x2e\x44\x46\x48\x65\x69\x67\x68\x74\x46\x6f\x67\x53\x75\x62\x73\x79\x73\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFHeightFogManager.DFHeightFogSubsystem.Get
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UDFHeightFogSubsystem* UDFHeightFogSubsystem::STATIC_Get(struct UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x48\x65\x69\x67\x68\x74\x46\x6f\x67\x4d\x61\x6e\x61\x67\x65\x72\x2e\x44\x46\x48\x65\x69\x67\x68\x74\x46\x6f\x67\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x47\x65\x74");
		Function_DFHeightFogManager_DFHeightFogSubsystem_Get_Param params { };
		params.WorldContextObject = WorldContextObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}