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
	 * 	Name: PredefinedFunction UStreamlineLibraryDLSSG.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UStreamlineLibraryDLSSG::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x74\x72\x65\x61\x6d\x6c\x69\x6e\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x2e\x53\x74\x72\x65\x61\x6d\x6c\x69\x6e\x65\x4c\x69\x62\x72\x61\x72\x79\x44\x4c\x53\x53\x47");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UStreamlineLibraryReflex.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UStreamlineLibraryReflex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x74\x72\x65\x61\x6d\x6c\x69\x6e\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x2e\x53\x74\x72\x65\x61\x6d\x6c\x69\x6e\x65\x4c\x69\x62\x72\x61\x72\x79\x52\x65\x66\x6c\x65\x78");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
	 * 	Flags: (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 */
	void UStreamlineLibraryDLSSG::STATIC_SetDLSSGMode(enum class UStreamlineDLSSGMode DLSSGMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x74\x72\x65\x61\x6d\x6c\x69\x6e\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x2e\x53\x74\x72\x65\x61\x6d\x6c\x69\x6e\x65\x4c\x69\x62\x72\x61\x72\x79\x44\x4c\x53\x53\x47\x2e\x53\x65\x74\x44\x4c\x53\x53\x47\x4d\x6f\x64\x65");
		Function_StreamlineBlueprint_StreamlineLibraryDLSSG_SetDLSSGMode_Param params { };
		params.DLSSGMode = DLSSGMode;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
	 * 	Flags: (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 */
	void UStreamlineLibraryReflex::STATIC_SetReflexMode(enum class UStreamlineReflexMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x74\x72\x65\x61\x6d\x6c\x69\x6e\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x2e\x53\x74\x72\x65\x61\x6d\x6c\x69\x6e\x65\x4c\x69\x62\x72\x61\x72\x79\x52\x65\x66\x6c\x65\x78\x2e\x53\x65\x74\x52\x65\x66\x6c\x65\x78\x4d\x6f\x64\x65");
		Function_StreamlineBlueprint_StreamlineLibraryReflex_SetReflexMode_Param params { };
		params.Mode = Mode;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}