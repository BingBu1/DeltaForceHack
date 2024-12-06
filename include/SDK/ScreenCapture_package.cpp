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
	 * 	Name: PredefinedFunction UIScreenCapture.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIScreenCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x63\x72\x65\x65\x6e\x43\x61\x70\x74\x75\x72\x65\x2e\x49\x53\x63\x72\x65\x65\x6e\x43\x61\x70\x74\x75\x72\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UAndroidScreenCapture.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAndroidScreenCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x63\x72\x65\x65\x6e\x43\x61\x70\x74\x75\x72\x65\x2e\x41\x6e\x64\x72\x6f\x69\x64\x53\x63\x72\x65\x65\x6e\x43\x61\x70\x74\x75\x72\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UIOSScreenCapture.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIOSScreenCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x63\x72\x65\x65\x6e\x43\x61\x70\x74\x75\x72\x65\x2e\x49\x4f\x53\x53\x63\x72\x65\x65\x6e\x43\x61\x70\x74\x75\x72\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: DelegateFunction ScreenCapture.IScreenCapture.OnScreenCaptureDelegate__DelegateSignature
	 * 	Flags: (MulticastDelegate, Public, Delegate)
	 */
	void UIScreenCapture::OnScreenCaptureDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x44\x65\x6c\x65\x67\x61\x74\x65\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x63\x72\x65\x65\x6e\x43\x61\x70\x74\x75\x72\x65\x2e\x49\x53\x63\x72\x65\x65\x6e\x43\x61\x70\x74\x75\x72\x65\x2e\x4f\x6e\x53\x63\x72\x65\x65\x6e\x43\x61\x70\x74\x75\x72\x65\x44\x65\x6c\x65\x67\x61\x74\x65\x5f\x5f\x44\x65\x6c\x65\x67\x61\x74\x65\x53\x69\x67\x6e\x61\x74\x75\x72\x65");
		DelegateFunction_ScreenCapture_IScreenCapture_OnScreenCaptureDelegate__DelegateSignature_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}