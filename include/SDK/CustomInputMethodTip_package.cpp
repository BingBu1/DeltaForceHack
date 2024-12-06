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
	 * 	Name: PredefinedFunction UCustomInputMethodTipBPLib.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UCustomInputMethodTipBPLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x75\x73\x74\x6f\x6d\x49\x6e\x70\x75\x74\x4d\x65\x74\x68\x6f\x64\x54\x69\x70\x2e\x43\x75\x73\x74\x6f\x6d\x49\x6e\x70\x75\x74\x4d\x65\x74\x68\x6f\x64\x54\x69\x70\x42\x50\x4c\x69\x62");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UCustomInputMethodTipSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UCustomInputMethodTipSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x75\x73\x74\x6f\x6d\x49\x6e\x70\x75\x74\x4d\x65\x74\x68\x6f\x64\x54\x69\x70\x2e\x43\x75\x73\x74\x6f\x6d\x49\x6e\x70\x75\x74\x4d\x65\x74\x68\x6f\x64\x54\x69\x70\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UInputMethodCandidateList.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UInputMethodCandidateList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x75\x73\x74\x6f\x6d\x49\x6e\x70\x75\x74\x4d\x65\x74\x68\x6f\x64\x54\x69\x70\x2e\x49\x6e\x70\x75\x74\x4d\x65\x74\x68\x6f\x64\x43\x61\x6e\x64\x69\x64\x61\x74\x65\x4c\x69\x73\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function CustomInputMethodTip.CustomInputMethodTipBPLib.IsCanddateListVisible
	 * 	Flags: (Final, Native, Static, Private, BlueprintCallable)
	 */
	bool UCustomInputMethodTipBPLib::STATIC_IsCanddateListVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x43\x75\x73\x74\x6f\x6d\x49\x6e\x70\x75\x74\x4d\x65\x74\x68\x6f\x64\x54\x69\x70\x2e\x43\x75\x73\x74\x6f\x6d\x49\x6e\x70\x75\x74\x4d\x65\x74\x68\x6f\x64\x54\x69\x70\x42\x50\x4c\x69\x62\x2e\x49\x73\x43\x61\x6e\x64\x64\x61\x74\x65\x4c\x69\x73\x74\x56\x69\x73\x69\x62\x6c\x65");
		Function_CustomInputMethodTip_CustomInputMethodTipBPLib_IsCanddateListVisible_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function CustomInputMethodTip.InputMethodCandidateList.SetReadingString
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UInputMethodCandidateList::SetReadingString(struct FString Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x43\x75\x73\x74\x6f\x6d\x49\x6e\x70\x75\x74\x4d\x65\x74\x68\x6f\x64\x54\x69\x70\x2e\x49\x6e\x70\x75\x74\x4d\x65\x74\x68\x6f\x64\x43\x61\x6e\x64\x69\x64\x61\x74\x65\x4c\x69\x73\x74\x2e\x53\x65\x74\x52\x65\x61\x64\x69\x6e\x67\x53\x74\x72\x69\x6e\x67");
		Function_CustomInputMethodTip_InputMethodCandidateList_SetReadingString_Param params { };
		params.Text = Text;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}