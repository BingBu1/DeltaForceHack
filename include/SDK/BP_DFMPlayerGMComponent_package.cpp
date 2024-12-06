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
	 * 	Name: PredefinedFunction UBP_DFMPlayerGMComponent_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_DFMPlayerGMComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x44\x46\x4d\x50\x6c\x61\x79\x65\x72\x47\x4d\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x42\x50\x5f\x44\x46\x4d\x50\x6c\x61\x79\x65\x72\x47\x4d\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000001
	 * 	Name: Function BP_DFMPlayerGMComponent.BP_DFMPlayerGMComponent_C.BP_GMWhoIsYourDaddy
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void UBP_DFMPlayerGMComponent_C::BP_GMWhoIsYourDaddy(int32_t Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x44\x46\x4d\x50\x6c\x61\x79\x65\x72\x47\x4d\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x42\x50\x5f\x44\x46\x4d\x50\x6c\x61\x79\x65\x72\x47\x4d\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x5f\x43\x2e\x42\x50\x5f\x47\x4d\x57\x68\x6f\x49\x73\x59\x6f\x75\x72\x44\x61\x64\x64\x79");
		Function_BP_DFMPlayerGMComponent_BP_DFMPlayerGMComponent_C_BP_GMWhoIsYourDaddy_Param params { };
		params.Health = Health;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}