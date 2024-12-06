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
	 * 	Name: PredefinedFunction FUIAnimation.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUIAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x55\x49\x54\x77\x65\x65\x6e\x2e\x55\x49\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FUIAnimationTrack.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUIAnimationTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x55\x49\x54\x77\x65\x65\x6e\x2e\x55\x49\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x54\x72\x61\x63\x6b");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FUIAnimationController.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUIAnimationController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x55\x49\x54\x77\x65\x65\x6e\x2e\x55\x49\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTestUserWidget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTestUserWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x54\x77\x65\x65\x6e\x2e\x54\x65\x73\x74\x55\x73\x65\x72\x57\x69\x64\x67\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTweenUserWidget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTweenUserWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x54\x77\x65\x65\x6e\x2e\x54\x77\x65\x65\x6e\x55\x73\x65\x72\x57\x69\x64\x67\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUITweenLiteLib.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUITweenLiteLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x54\x77\x65\x65\x6e\x2e\x55\x49\x54\x77\x65\x65\x6e\x4c\x69\x74\x65\x4c\x69\x62");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UITween.TestUserWidget.OnBtnClick
	 * 	Flags: (Final, Native, Private)
	 */
	void UTestUserWidget::OnBtnClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x49\x54\x77\x65\x65\x6e\x2e\x54\x65\x73\x74\x55\x73\x65\x72\x57\x69\x64\x67\x65\x74\x2e\x4f\x6e\x42\x74\x6e\x43\x6c\x69\x63\x6b");
		Function_UITween_TestUserWidget_OnBtnClick_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UITween.UITweenLiteLib.StartupTween
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UUITweenLiteLib::STATIC_StartupTween()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x49\x54\x77\x65\x65\x6e\x2e\x55\x49\x54\x77\x65\x65\x6e\x4c\x69\x74\x65\x4c\x69\x62\x2e\x53\x74\x61\x72\x74\x75\x70\x54\x77\x65\x65\x6e");
		Function_UITween_UITweenLiteLib_StartupTween_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}