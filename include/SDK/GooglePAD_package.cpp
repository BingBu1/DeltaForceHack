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
	 * 	Name: PredefinedFunction UGooglePADFunctionLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGooglePADFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x6f\x6f\x67\x6c\x65\x50\x41\x44\x2e\x47\x6f\x6f\x67\x6c\x65\x50\x41\x44\x46\x75\x6e\x63\x74\x69\x6f\x6e\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	enum class EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_ShowCellularDataConfirmation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x6f\x6f\x67\x6c\x65\x50\x41\x44\x2e\x47\x6f\x6f\x67\x6c\x65\x50\x41\x44\x46\x75\x6e\x63\x74\x69\x6f\x6e\x4c\x69\x62\x72\x61\x72\x79\x2e\x53\x68\x6f\x77\x43\x65\x6c\x6c\x75\x6c\x61\x72\x44\x61\x74\x61\x43\x6f\x6e\x66\x69\x72\x6d\x61\x74\x69\x6f\x6e");
		Function_GooglePAD_GooglePADFunctionLibrary_ShowCellularDataConfirmation_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}