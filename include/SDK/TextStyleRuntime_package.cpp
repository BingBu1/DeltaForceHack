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
	 * 	Name: PredefinedFunction FCustomTextStyle.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FCustomTextStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x43\x75\x73\x74\x6f\x6d\x54\x65\x78\x74\x53\x74\x79\x6c\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FFontConfigData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FFontConfigData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x46\x6f\x6e\x74\x43\x6f\x6e\x66\x69\x67\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UFontStyleRuntimeManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UFontStyleRuntimeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x46\x6f\x6e\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UStyleTableConfigObj.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UStyleTableConfigObj::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x53\x74\x79\x6c\x65\x54\x61\x62\x6c\x65\x43\x6f\x6e\x66\x69\x67\x4f\x62\x6a");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTextStyleBlueprintLib.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTextStyleBlueprintLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x4c\x69\x62");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTextStyleRuntimeManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTextStyleRuntimeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function TextStyleRuntime.FontStyleRuntimeManager.WarmupText
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	void UFontStyleRuntimeManager::WarmupText(struct FName& InStyleName, struct FString InContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x46\x6f\x6e\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x72\x2e\x57\x61\x72\x6d\x75\x70\x54\x65\x78\x74");
		Function_TextStyleRuntime_FontStyleRuntimeManager_WarmupText_Param params { };
		params.InStyleName = InStyleName;
		params.InContent = InContent;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		InStyleName = params.InStyleName;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function TextStyleRuntime.TextStyleBlueprintLib.Blueprint_SetTextStyle
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTextStyleBlueprintLib::STATIC_Blueprint_SetTextStyle(struct UTextLayoutWidget* InTextWidget, struct FName InTextStyleIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x4c\x69\x62\x2e\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x5f\x53\x65\x74\x54\x65\x78\x74\x53\x74\x79\x6c\x65");
		Function_TextStyleRuntime_TextStyleBlueprintLib_Blueprint_SetTextStyle_Param params { };
		params.InTextWidget = InTextWidget;
		params.InTextStyleIdx = InTextStyleIdx;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function TextStyleRuntime.TextStyleRuntimeManager.GetTextStyleCfgData
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	bool UTextStyleRuntimeManager::GetTextStyleCfgData(struct FName& InName, struct FCustomTextStyle& OutCustomTextStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x52\x75\x6e\x74\x69\x6d\x65\x4d\x61\x6e\x61\x67\x65\x72\x2e\x47\x65\x74\x54\x65\x78\x74\x53\x74\x79\x6c\x65\x43\x66\x67\x44\x61\x74\x61");
		Function_TextStyleRuntime_TextStyleRuntimeManager_GetTextStyleCfgData_Param params { };
		params.InName = InName;
		params.OutCustomTextStyle = OutCustomTextStyle;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		InName = params.InName;
		OutCustomTextStyle = params.OutCustomTextStyle;
		return params.ReturnValue;
	}
}