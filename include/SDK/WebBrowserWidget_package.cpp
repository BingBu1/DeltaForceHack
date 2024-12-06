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
	 * 	Name: PredefinedFunction UWebBrowser.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWebBrowser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x57\x65\x62\x42\x72\x6f\x77\x73\x65\x72\x57\x69\x64\x67\x65\x74\x2e\x57\x65\x62\x42\x72\x6f\x77\x73\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UWebBrowserAssetManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWebBrowserAssetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x57\x65\x62\x42\x72\x6f\x77\x73\x65\x72\x57\x69\x64\x67\x65\x74\x2e\x57\x65\x62\x42\x72\x6f\x77\x73\x65\x72\x41\x73\x73\x65\x74\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	 * 	Flags: (MulticastDelegate, Public, Delegate, HasOutParms)
	 */
	void UWebBrowser::OnUrlChanged__DelegateSignature(struct FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x44\x65\x6c\x65\x67\x61\x74\x65\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x65\x62\x42\x72\x6f\x77\x73\x65\x72\x57\x69\x64\x67\x65\x74\x2e\x57\x65\x62\x42\x72\x6f\x77\x73\x65\x72\x2e\x4f\x6e\x55\x72\x6c\x43\x68\x61\x6e\x67\x65\x64\x5f\x5f\x44\x65\x6c\x65\x67\x61\x74\x65\x53\x69\x67\x6e\x61\x74\x75\x72\x65");
		DelegateFunction_WebBrowserWidget_WebBrowser_OnUrlChanged__DelegateSignature_Param params { };
		params.Text = Text;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Text = params.Text;
	}
}