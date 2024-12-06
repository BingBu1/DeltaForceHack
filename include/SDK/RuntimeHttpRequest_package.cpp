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
	 * 	Name: PredefinedFunction URuntimeHttpRequest.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* URuntimeHttpRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x52\x75\x6e\x74\x69\x6d\x65\x48\x74\x74\x70\x52\x65\x71\x75\x65\x73\x74\x2e\x52\x75\x6e\x74\x69\x6d\x65\x48\x74\x74\x70\x52\x65\x71\x75\x65\x73\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: DelegateFunction RuntimeHttpRequest.RuntimeHttpRequest.OnHttpRequestComplete__DelegateSignature
	 * 	Flags: (MulticastDelegate, Public, Delegate)
	 */
	void URuntimeHttpRequest::OnHttpRequestComplete__DelegateSignature(struct FString URL, bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x44\x65\x6c\x65\x67\x61\x74\x65\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x52\x75\x6e\x74\x69\x6d\x65\x48\x74\x74\x70\x52\x65\x71\x75\x65\x73\x74\x2e\x52\x75\x6e\x74\x69\x6d\x65\x48\x74\x74\x70\x52\x65\x71\x75\x65\x73\x74\x2e\x4f\x6e\x48\x74\x74\x70\x52\x65\x71\x75\x65\x73\x74\x43\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x5f\x44\x65\x6c\x65\x67\x61\x74\x65\x53\x69\x67\x6e\x61\x74\x75\x72\x65");
		DelegateFunction_RuntimeHttpRequest_RuntimeHttpRequest_OnHttpRequestComplete__DelegateSignature_Param params { };
		params.URL = URL;
		params.Result = Result;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}