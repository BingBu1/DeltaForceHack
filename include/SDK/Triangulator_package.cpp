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
	 * 	Name: PredefinedFunction FPolyline.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FPolyline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x54\x72\x69\x61\x6e\x67\x75\x6c\x61\x74\x6f\x72\x2e\x50\x6f\x6c\x79\x6c\x69\x6e\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTriangulatorBPLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTriangulatorBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x72\x69\x61\x6e\x67\x75\x6c\x61\x74\x6f\x72\x2e\x54\x72\x69\x61\x6e\x67\x75\x6c\x61\x74\x6f\x72\x42\x50\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Triangulator.TriangulatorBPLibrary.TriangulatorSampleFunction
	 * 	Flags: (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 */
	struct TArray<int32_t> UTriangulatorBPLibrary::STATIC_TriangulatorSampleFunction(struct TArray<struct FPolyline>& Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x54\x72\x69\x61\x6e\x67\x75\x6c\x61\x74\x6f\x72\x2e\x54\x72\x69\x61\x6e\x67\x75\x6c\x61\x74\x6f\x72\x42\x50\x4c\x69\x62\x72\x61\x72\x79\x2e\x54\x72\x69\x61\x6e\x67\x75\x6c\x61\x74\x6f\x72\x53\x61\x6d\x70\x6c\x65\x46\x75\x6e\x63\x74\x69\x6f\x6e");
		Function_Triangulator_TriangulatorBPLibrary_TriangulatorSampleFunction_Param params { };
		params.Param = Param;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Param = params.Param;
		return params.ReturnValue;
	}
}