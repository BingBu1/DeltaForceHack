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
	 * 	Name: PredefinedFunction FSMTextSerializer.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSMTextSerializer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x4d\x45\x78\x74\x65\x6e\x64\x65\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x53\x4d\x54\x65\x78\x74\x53\x65\x72\x69\x61\x6c\x69\x7a\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSMTextNodeWidgetInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSMTextNodeWidgetInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x4d\x45\x78\x74\x65\x6e\x64\x65\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x53\x4d\x54\x65\x78\x74\x4e\x6f\x64\x65\x57\x69\x64\x67\x65\x74\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSMTextGraphProperty.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSMTextGraphProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x4d\x45\x78\x74\x65\x6e\x64\x65\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x53\x4d\x54\x65\x78\x74\x47\x72\x61\x70\x68\x50\x72\x6f\x70\x65\x72\x74\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USMExtendedGraphPropertyHelpers.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USMExtendedGraphPropertyHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x4d\x45\x78\x74\x65\x6e\x64\x65\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x53\x4d\x45\x78\x74\x65\x6e\x64\x65\x64\x47\x72\x61\x70\x68\x50\x72\x6f\x70\x65\x72\x74\x79\x48\x65\x6c\x70\x65\x72\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.BreakTextGraphProperty
	 * 	Flags: (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 */
	void USMExtendedGraphPropertyHelpers::STATIC_BreakTextGraphProperty(struct FSMTextGraphProperty& GraphProperty, struct FText& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x4d\x45\x78\x74\x65\x6e\x64\x65\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x53\x4d\x45\x78\x74\x65\x6e\x64\x65\x64\x47\x72\x61\x70\x68\x50\x72\x6f\x70\x65\x72\x74\x79\x48\x65\x6c\x70\x65\x72\x73\x2e\x42\x72\x65\x61\x6b\x54\x65\x78\x74\x47\x72\x61\x70\x68\x50\x72\x6f\x70\x65\x72\x74\x79");
		Function_SMExtendedRuntime_SMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Param params { };
		params.GraphProperty = GraphProperty;
		params.Result = Result;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		GraphProperty = params.GraphProperty;
		Result = params.Result;
	}
}