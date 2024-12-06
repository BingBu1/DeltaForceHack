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
	 * 	Name: PredefinedFunction AGPTweenUpdateManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AGPTweenUpdateManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x54\x77\x65\x65\x6e\x2e\x47\x50\x54\x77\x65\x65\x6e\x55\x70\x64\x61\x74\x65\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPTweenBase.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPTweenBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x54\x77\x65\x65\x6e\x2e\x47\x50\x54\x77\x65\x65\x6e\x42\x61\x73\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPTweenFloat.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPTweenFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x54\x77\x65\x65\x6e\x2e\x47\x50\x54\x77\x65\x65\x6e\x46\x6c\x6f\x61\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPTweenVector3D.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPTweenVector3D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x54\x77\x65\x65\x6e\x2e\x47\x50\x54\x77\x65\x65\x6e\x56\x65\x63\x74\x6f\x72\x33\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPTweenWidget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPTweenWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x54\x77\x65\x65\x6e\x2e\x47\x50\x54\x77\x65\x65\x6e\x57\x69\x64\x67\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPTween.GPTweenFloat.MakeFloatDamperImplicitVector2D
	 * 	Flags: (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 */
	struct FVector2D UGPTweenFloat::STATIC_MakeFloatDamperImplicitVector2D(struct FVector2D& InCurrentValue, struct FVector2D& InTargetValue, float HalfLife, float InDeltaTime, float eps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x54\x77\x65\x65\x6e\x2e\x47\x50\x54\x77\x65\x65\x6e\x46\x6c\x6f\x61\x74\x2e\x4d\x61\x6b\x65\x46\x6c\x6f\x61\x74\x44\x61\x6d\x70\x65\x72\x49\x6d\x70\x6c\x69\x63\x69\x74\x56\x65\x63\x74\x6f\x72\x32\x44");
		Function_GPTween_GPTweenFloat_MakeFloatDamperImplicitVector2D_Param params { };
		params.InCurrentValue = InCurrentValue;
		params.InTargetValue = InTargetValue;
		params.HalfLife = HalfLife;
		params.InDeltaTime = InDeltaTime;
		params.eps = eps;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		InCurrentValue = params.InCurrentValue;
		InTargetValue = params.InTargetValue;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPTween.GPTweenVector3D.MakeVector3DByCurve
	 * 	Flags: (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct UGPTweenVector3D* UGPTweenVector3D::STATIC_MakeVector3DByCurve(struct FString TweenName, float DurTime, struct FVector Start, struct FVector End, struct UCurveFloat* Curve, bool IsLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x54\x77\x65\x65\x6e\x2e\x47\x50\x54\x77\x65\x65\x6e\x56\x65\x63\x74\x6f\x72\x33\x44\x2e\x4d\x61\x6b\x65\x56\x65\x63\x74\x6f\x72\x33\x44\x42\x79\x43\x75\x72\x76\x65");
		Function_GPTween_GPTweenVector3D_MakeVector3DByCurve_Param params { };
		params.TweenName = TweenName;
		params.DurTime = DurTime;
		params.Start = Start;
		params.End = End;
		params.Curve = Curve;
		params.IsLoop = IsLoop;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPTween.GPTweenWidget.MakeLocalScale
	 * 	Flags: (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct UGPTweenWidget* UGPTweenWidget::STATIC_MakeLocalScale(struct FString TweenName, float DurTime, struct UWidget* UI, struct FVector2D StartScale, struct FVector2D EndScale, enum class EaseType EaseType, bool IsLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x54\x77\x65\x65\x6e\x2e\x47\x50\x54\x77\x65\x65\x6e\x57\x69\x64\x67\x65\x74\x2e\x4d\x61\x6b\x65\x4c\x6f\x63\x61\x6c\x53\x63\x61\x6c\x65");
		Function_GPTween_GPTweenWidget_MakeLocalScale_Param params { };
		params.TweenName = TweenName;
		params.DurTime = DurTime;
		params.UI = UI;
		params.StartScale = StartScale;
		params.EndScale = EndScale;
		params.EaseType = EaseType;
		params.IsLoop = IsLoop;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}