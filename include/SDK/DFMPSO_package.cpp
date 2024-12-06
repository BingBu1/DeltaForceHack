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
	 * 	Name: PredefinedFunction UDFMPSOAutomation.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMPSOAutomation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x50\x53\x4f\x2e\x44\x46\x4d\x50\x53\x4f\x41\x75\x74\x6f\x6d\x61\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMPSOCacheSystem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMPSOCacheSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x50\x53\x4f\x2e\x44\x46\x4d\x50\x53\x4f\x43\x61\x63\x68\x65\x53\x79\x73\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMPSO.DFMPSOAutomation.OnOpenWorldProfileState
	 * 	Flags: (Final, Native, Protected)
	 */
	void UDFMPSOAutomation::OnOpenWorldProfileState(int32_t State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x50\x53\x4f\x2e\x44\x46\x4d\x50\x53\x4f\x41\x75\x74\x6f\x6d\x61\x74\x69\x6f\x6e\x2e\x4f\x6e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x50\x72\x6f\x66\x69\x6c\x65\x53\x74\x61\x74\x65");
		Function_DFMPSO_DFMPSOAutomation_OnOpenWorldProfileState_Param params { };
		params.State = State;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMPSO.DFMPSOCacheSystem.StopPrecompile
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UDFMPSOCacheSystem::StopPrecompile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x50\x53\x4f\x2e\x44\x46\x4d\x50\x53\x4f\x43\x61\x63\x68\x65\x53\x79\x73\x74\x65\x6d\x2e\x53\x74\x6f\x70\x50\x72\x65\x63\x6f\x6d\x70\x69\x6c\x65");
		Function_DFMPSO_DFMPSOCacheSystem_StopPrecompile_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}