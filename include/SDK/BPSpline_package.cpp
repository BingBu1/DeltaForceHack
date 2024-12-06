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
	 * 	Name: PredefinedFunction UBPSplineCatenaryFunctions.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBPSplineCatenaryFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x50\x53\x70\x6c\x69\x6e\x65\x2e\x42\x50\x53\x70\x6c\x69\x6e\x65\x43\x61\x74\x65\x6e\x61\x72\x79\x46\x75\x6e\x63\x74\x69\x6f\x6e\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UBPSplineBlueprintFunctionHelper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBPSplineBlueprintFunctionHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x50\x53\x70\x6c\x69\x6e\x65\x2e\x42\x50\x53\x70\x6c\x69\x6e\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x46\x75\x6e\x63\x74\x69\x6f\x6e\x48\x65\x6c\x70\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BPSpline.BPSplineCatenaryFunctions.CreateCatenaryPoints
	 * 	Flags: (Final, Native, Static, Private, HasDefaults, BlueprintCallable)
	 */
	struct TArray<struct FVector> UBPSplineCatenaryFunctions::STATIC_CreateCatenaryPoints(struct FVector Point1, struct FVector Point2, float Length, struct FVector Up, int32_t NumPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x53\x70\x6c\x69\x6e\x65\x2e\x42\x50\x53\x70\x6c\x69\x6e\x65\x43\x61\x74\x65\x6e\x61\x72\x79\x46\x75\x6e\x63\x74\x69\x6f\x6e\x73\x2e\x43\x72\x65\x61\x74\x65\x43\x61\x74\x65\x6e\x61\x72\x79\x50\x6f\x69\x6e\x74\x73");
		Function_BPSpline_BPSplineCatenaryFunctions_CreateCatenaryPoints_Param params { };
		params.Point1 = Point1;
		params.Point2 = Point2;
		params.Length = Length;
		params.Up = Up;
		params.NumPoints = NumPoints;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BPSpline.BPSplineBlueprintFunctionHelper.SnapToGround
	 * 	Flags: (Final, Native, Static, Private, BlueprintCallable)
	 */
	void UBPSplineBlueprintFunctionHelper::STATIC_SnapToGround(struct USplineComponent* SplineComp, bool bInAlign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x53\x70\x6c\x69\x6e\x65\x2e\x42\x50\x53\x70\x6c\x69\x6e\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x46\x75\x6e\x63\x74\x69\x6f\x6e\x48\x65\x6c\x70\x65\x72\x2e\x53\x6e\x61\x70\x54\x6f\x47\x72\x6f\x75\x6e\x64");
		Function_BPSpline_BPSplineBlueprintFunctionHelper_SnapToGround_Param params { };
		params.SplineComp = SplineComp;
		params.bInAlign = bInAlign;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}