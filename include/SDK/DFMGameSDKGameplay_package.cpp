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
	 * 	Name: PredefinedFunction UDFMGameGPMManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMGameGPMManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x47\x61\x6d\x65\x53\x44\x4b\x47\x61\x6d\x65\x70\x6c\x61\x79\x2e\x44\x46\x4d\x47\x61\x6d\x65\x47\x50\x4d\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMGameSDKGameplay.DFMGameGPMManager.UploadMetaperfInfoToApm
	 * 	Flags: (Final, Native, Public)
	 */
	void UDFMGameGPMManager::UploadMetaperfInfoToApm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x47\x61\x6d\x65\x53\x44\x4b\x47\x61\x6d\x65\x70\x6c\x61\x79\x2e\x44\x46\x4d\x47\x61\x6d\x65\x47\x50\x4d\x4d\x61\x6e\x61\x67\x65\x72\x2e\x55\x70\x6c\x6f\x61\x64\x4d\x65\x74\x61\x70\x65\x72\x66\x49\x6e\x66\x6f\x54\x6f\x41\x70\x6d");
		Function_DFMGameSDKGameplay_DFMGameGPMManager_UploadMetaperfInfoToApm_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}