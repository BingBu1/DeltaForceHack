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
	 * 	Name: PredefinedFunction UBP_QuestDebugJumpComponent_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_QuestDebugJumpComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x51\x75\x65\x73\x74\x44\x65\x62\x75\x67\x4a\x75\x6d\x70\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x42\x50\x5f\x51\x75\x65\x73\x74\x44\x65\x62\x75\x67\x4a\x75\x6d\x70\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_QuestDebugJumpComponent.BP_QuestDebugJumpComponent_C.GotoStage
	 * 	Flags: (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_QuestDebugJumpComponent_C::GotoStage(int32_t QuestID, struct FString StageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x51\x75\x65\x73\x74\x44\x65\x62\x75\x67\x4a\x75\x6d\x70\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x42\x50\x5f\x51\x75\x65\x73\x74\x44\x65\x62\x75\x67\x4a\x75\x6d\x70\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x5f\x43\x2e\x47\x6f\x74\x6f\x53\x74\x61\x67\x65");
		Function_BP_QuestDebugJumpComponent_BP_QuestDebugJumpComponent_C_GotoStage_Param params { };
		params.QuestID = QuestID;
		params.StageName = StageName;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}