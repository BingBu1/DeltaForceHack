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
	 * 	Name: PredefinedFunction UImageStyleBlueprintFuncLib.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UImageStyleBlueprintFuncLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x46\x75\x6e\x63\x4c\x69\x62");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UImageStyleRuntimeManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UImageStyleRuntimeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ImageStyleRuntime.ImageStyleBlueprintFuncLib.SetImageStyle
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UImageStyleBlueprintFuncLib::STATIC_SetImageStyle(struct UImage* InImage, struct FName InStyleName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x46\x75\x6e\x63\x4c\x69\x62\x2e\x53\x65\x74\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65");
		Function_ImageStyleRuntime_ImageStyleBlueprintFuncLib_SetImageStyle_Param params { };
		params.InImage = InImage;
		params.InStyleName = InStyleName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ImageStyleRuntime.ImageStyleRuntimeManager.GetImageStyleCfgData
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	bool UImageStyleRuntimeManager::GetImageStyleCfgData(struct FName& InName, struct FImageStyle& OutCustomImageStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x72\x2e\x47\x65\x74\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x43\x66\x67\x44\x61\x74\x61");
		Function_ImageStyleRuntime_ImageStyleRuntimeManager_GetImageStyleCfgData_Param params { };
		params.InName = InName;
		params.OutCustomImageStyle = OutCustomImageStyle;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		InName = params.InName;
		OutCustomImageStyle = params.OutCustomImageStyle;
		return params.ReturnValue;
	}
}