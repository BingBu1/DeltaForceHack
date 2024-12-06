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
	 * 	Name: PredefinedFunction UGraphicMathUtils.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGraphicMathUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x72\x61\x70\x68\x69\x63\x4d\x61\x74\x68\x55\x74\x69\x6c\x73\x2e\x47\x72\x61\x70\x68\x69\x63\x4d\x61\x74\x68\x55\x74\x69\x6c\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GraphicMathUtils.GraphicMathUtils.VanDerCorputSequence
	 * 	Flags: (Final, Native, Static, Private, BlueprintCallable)
	 */
	float UGraphicMathUtils::STATIC_VanDerCorputSequence(int32_t I)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x72\x61\x70\x68\x69\x63\x4d\x61\x74\x68\x55\x74\x69\x6c\x73\x2e\x47\x72\x61\x70\x68\x69\x63\x4d\x61\x74\x68\x55\x74\x69\x6c\x73\x2e\x56\x61\x6e\x44\x65\x72\x43\x6f\x72\x70\x75\x74\x53\x65\x71\x75\x65\x6e\x63\x65");
		Function_GraphicMathUtils_GraphicMathUtils_VanDerCorputSequence_Param params { };
		params.I = I;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}