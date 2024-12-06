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
	 * 	Name: PredefinedFunction ABP_HallCharacter_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_HallCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x48\x61\x6c\x6c\x43\x68\x61\x72\x61\x63\x74\x65\x72\x2e\x42\x50\x5f\x48\x61\x6c\x6c\x43\x68\x61\x72\x61\x63\x74\x65\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function BP_HallCharacter.BP_HallCharacter_C.SyncFaceAnim
	 * 	Flags: (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HallCharacter_C::SyncFaceAnim(struct UAnimSequenceBase* BodyAnim, struct UAnimSequenceBase* FaceAnim, bool IsResetPlay, bool SetOrGet, struct UAnimSequenceBase*& GetBodyAnim, struct UAnimSequenceBase*& GetFaceAnim, bool& GetIsResetPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x48\x61\x6c\x6c\x43\x68\x61\x72\x61\x63\x74\x65\x72\x2e\x42\x50\x5f\x48\x61\x6c\x6c\x43\x68\x61\x72\x61\x63\x74\x65\x72\x5f\x43\x2e\x53\x79\x6e\x63\x46\x61\x63\x65\x41\x6e\x69\x6d");
		Function_BP_HallCharacter_BP_HallCharacter_C_SyncFaceAnim_Param params { };
		params.BodyAnim = BodyAnim;
		params.FaceAnim = FaceAnim;
		params.IsResetPlay = IsResetPlay;
		params.SetOrGet = SetOrGet;
		params.GetBodyAnim = GetBodyAnim;
		params.GetFaceAnim = GetFaceAnim;
		params.GetIsResetPlay = GetIsResetPlay;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		GetBodyAnim = params.GetBodyAnim;
		GetFaceAnim = params.GetFaceAnim;
		GetIsResetPlay = params.GetIsResetPlay;
	}
}