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
	 * 	Name: PredefinedFunction UBP_DFMIrisEnterComponent_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_DFMIrisEnterComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x44\x46\x4d\x49\x72\x69\x73\x45\x6e\x74\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x42\x50\x5f\x44\x46\x4d\x49\x72\x69\x73\x45\x6e\x74\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X271AD6AA
	 * 	Name: Function BP_DFMIrisEnterComponent.BP_DFMIrisEnterComponent_C.StartGetOnHelicopter
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DFMIrisEnterComponent_C::StartGetOnHelicopter(struct ASafeHouseHelicopter* Helicopter, struct ABP_HelicopterPovitActor_C* PovitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x44\x46\x4d\x49\x72\x69\x73\x45\x6e\x74\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x42\x50\x5f\x44\x46\x4d\x49\x72\x69\x73\x45\x6e\x74\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x5f\x43\x2e\x53\x74\x61\x72\x74\x47\x65\x74\x4f\x6e\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72");
		Function_BP_DFMIrisEnterComponent_BP_DFMIrisEnterComponent_C_StartGetOnHelicopter_Param params { };
		params.Helicopter = Helicopter;
		params.PovitActor = PovitActor;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}