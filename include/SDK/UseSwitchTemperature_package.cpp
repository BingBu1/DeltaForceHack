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
	 * 	Name: PredefinedFunction UUseSwitchTemperature_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUseSwitchTemperature_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x55\x73\x65\x53\x77\x69\x74\x63\x68\x54\x65\x6d\x70\x65\x72\x61\x74\x75\x72\x65\x2e\x55\x73\x65\x53\x77\x69\x74\x63\x68\x54\x65\x6d\x70\x65\x72\x61\x74\x75\x72\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0780065
	 * 	Name: Function UseSwitchTemperature.UseSwitchTemperature_C.SwitchTemperature
	 * 	Flags: (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UUseSwitchTemperature_C::STATIC_SwitchTemperature(char ChoseTemperature, struct UObject* __WorldContext, float& Temperature, struct FLinearColor& LightColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x73\x65\x53\x77\x69\x74\x63\x68\x54\x65\x6d\x70\x65\x72\x61\x74\x75\x72\x65\x2e\x55\x73\x65\x53\x77\x69\x74\x63\x68\x54\x65\x6d\x70\x65\x72\x61\x74\x75\x72\x65\x5f\x43\x2e\x53\x77\x69\x74\x63\x68\x54\x65\x6d\x70\x65\x72\x61\x74\x75\x72\x65");
		Function_UseSwitchTemperature_UseSwitchTemperature_C_SwitchTemperature_Param params { };
		params.ChoseTemperature = ChoseTemperature;
		params.__WorldContext = __WorldContext;
		params.Temperature = Temperature;
		params.LightColor = LightColor;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Temperature = params.Temperature;
		LightColor = params.LightColor;
	}
}