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
	 * 	Name: PredefinedFunction UDFMLightCoordinateSubsystem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMLightCoordinateSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4c\x69\x67\x68\x74\x43\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2e\x44\x46\x4d\x4c\x69\x67\x68\x74\x43\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x53\x75\x62\x73\x79\x73\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ADFMLightGroup.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ADFMLightGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4c\x69\x67\x68\x74\x43\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2e\x44\x46\x4d\x4c\x69\x67\x68\x74\x47\x72\x6f\x75\x70");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMLightCoordinate.DFMLightCoordinateSubsystem.Get
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UDFMLightCoordinateSubsystem* UDFMLightCoordinateSubsystem::STATIC_Get(struct UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4c\x69\x67\x68\x74\x43\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2e\x44\x46\x4d\x4c\x69\x67\x68\x74\x43\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x47\x65\x74");
		Function_DFMLightCoordinate_DFMLightCoordinateSubsystem_Get_Param params { };
		params.WorldContextObject = WorldContextObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMLightCoordinate.DFMLightGroup.DeactivateLightGroup
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void ADFMLightGroup::DeactivateLightGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4c\x69\x67\x68\x74\x43\x6f\x6f\x72\x64\x69\x6e\x61\x74\x65\x2e\x44\x46\x4d\x4c\x69\x67\x68\x74\x47\x72\x6f\x75\x70\x2e\x44\x65\x61\x63\x74\x69\x76\x61\x74\x65\x4c\x69\x67\x68\x74\x47\x72\x6f\x75\x70");
		Function_DFMLightCoordinate_DFMLightGroup_DeactivateLightGroup_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}