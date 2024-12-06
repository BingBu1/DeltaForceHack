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
	 * 	Name: PredefinedFunction UBP_CameraModifier_Fire_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_CameraModifier_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x43\x61\x6d\x65\x72\x61\x4d\x6f\x64\x69\x66\x69\x65\x72\x5f\x46\x69\x72\x65\x2e\x42\x50\x5f\x43\x61\x6d\x65\x72\x61\x4d\x6f\x64\x69\x66\x69\x65\x72\x5f\x46\x69\x72\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_CameraModifier_Fire.BP_CameraModifier_Fire_C.ExecuteUbergraph_BP_CameraModifier_Fire
	 * 	Flags: (Final, UbergraphFunction)
	 */
	void UBP_CameraModifier_Fire_C::ExecuteUbergraph_BP_CameraModifier_Fire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x43\x61\x6d\x65\x72\x61\x4d\x6f\x64\x69\x66\x69\x65\x72\x5f\x46\x69\x72\x65\x2e\x42\x50\x5f\x43\x61\x6d\x65\x72\x61\x4d\x6f\x64\x69\x66\x69\x65\x72\x5f\x46\x69\x72\x65\x5f\x43\x2e\x45\x78\x65\x63\x75\x74\x65\x55\x62\x65\x72\x67\x72\x61\x70\x68\x5f\x42\x50\x5f\x43\x61\x6d\x65\x72\x61\x4d\x6f\x64\x69\x66\x69\x65\x72\x5f\x46\x69\x72\x65");
		Function_BP_CameraModifier_Fire_BP_CameraModifier_Fire_C_ExecuteUbergraph_BP_CameraModifier_Fire_Param params { };
		params.EntryPoint = EntryPoint;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}