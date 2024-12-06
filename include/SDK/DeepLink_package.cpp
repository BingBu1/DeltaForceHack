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
	 * 	Name: PredefinedFunction UDeepLink.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDeepLink::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x65\x65\x70\x4c\x69\x6e\x6b\x2e\x44\x65\x65\x70\x4c\x69\x6e\x6b");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: DelegateFunction DeepLink.DeepLink.OnDeepLinkDelegate__DelegateSignature
	 * 	Flags: (MulticastDelegate, Public, Delegate)
	 */
	void UDeepLink::OnDeepLinkDelegate__DelegateSignature(struct FString DeepLinkUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x44\x65\x6c\x65\x67\x61\x74\x65\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x65\x65\x70\x4c\x69\x6e\x6b\x2e\x44\x65\x65\x70\x4c\x69\x6e\x6b\x2e\x4f\x6e\x44\x65\x65\x70\x4c\x69\x6e\x6b\x44\x65\x6c\x65\x67\x61\x74\x65\x5f\x5f\x44\x65\x6c\x65\x67\x61\x74\x65\x53\x69\x67\x6e\x61\x74\x75\x72\x65");
		DelegateFunction_DeepLink_DeepLink_OnDeepLinkDelegate__DelegateSignature_Param params { };
		params.DeepLinkUrl = DeepLinkUrl;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}