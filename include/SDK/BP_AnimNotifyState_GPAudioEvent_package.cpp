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
	 * 	Name: PredefinedFunction UBP_AnimNotifyState_GPAudioEvent_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_AnimNotifyState_GPAudioEvent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x41\x6e\x69\x6d\x4e\x6f\x74\x69\x66\x79\x53\x74\x61\x74\x65\x5f\x47\x50\x41\x75\x64\x69\x6f\x45\x76\x65\x6e\x74\x2e\x42\x50\x5f\x41\x6e\x69\x6d\x4e\x6f\x74\x69\x66\x79\x53\x74\x61\x74\x65\x5f\x47\x50\x41\x75\x64\x69\x6f\x45\x76\x65\x6e\x74\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_AnimNotifyState_GPAudioEvent.BP_AnimNotifyState_GPAudioEvent_C.Received_NotifyEnd
	 * 	Flags: (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UBP_AnimNotifyState_GPAudioEvent_C::Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x41\x6e\x69\x6d\x4e\x6f\x74\x69\x66\x79\x53\x74\x61\x74\x65\x5f\x47\x50\x41\x75\x64\x69\x6f\x45\x76\x65\x6e\x74\x2e\x42\x50\x5f\x41\x6e\x69\x6d\x4e\x6f\x74\x69\x66\x79\x53\x74\x61\x74\x65\x5f\x47\x50\x41\x75\x64\x69\x6f\x45\x76\x65\x6e\x74\x5f\x43\x2e\x52\x65\x63\x65\x69\x76\x65\x64\x5f\x4e\x6f\x74\x69\x66\x79\x45\x6e\x64");
		Function_BP_AnimNotifyState_GPAudioEvent_BP_AnimNotifyState_GPAudioEvent_C_Received_NotifyEnd_Param params { };
		params.MeshComp = MeshComp;
		params.Animation = Animation;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}