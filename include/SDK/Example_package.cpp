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
	 * 	Name: PredefinedFunction AExample_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AExample_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x45\x78\x61\x6d\x70\x6c\x65\x2e\x45\x78\x61\x6d\x70\x6c\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0700078
	 * 	Name: Function Example.Example_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 	Flags: (HasOutParms, BlueprintEvent)
	 */
	void AExample_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x45\x78\x61\x6d\x70\x6c\x65\x2e\x45\x78\x61\x6d\x70\x6c\x65\x5f\x43\x2e\x42\x6e\x64\x45\x76\x74\x5f\x5f\x42\x6f\x78\x5f\x4b\x32\x4e\x6f\x64\x65\x5f\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x42\x6f\x75\x6e\x64\x45\x76\x65\x6e\x74\x5f\x30\x5f\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x42\x65\x67\x69\x6e\x4f\x76\x65\x72\x6c\x61\x70\x53\x69\x67\x6e\x61\x74\x75\x72\x65\x5f\x5f\x44\x65\x6c\x65\x67\x61\x74\x65\x53\x69\x67\x6e\x61\x74\x75\x72\x65");
		Function_Example_Example_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Param params { };
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		SweepResult = params.SweepResult;
	}
}