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
	 * 	Name: PredefinedFunction UBP_MobileHUD_GMButton_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_MobileHUD_GMButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x4d\x6f\x62\x69\x6c\x65\x48\x55\x44\x5f\x47\x4d\x42\x75\x74\x74\x6f\x6e\x2e\x42\x50\x5f\x4d\x6f\x62\x69\x6c\x65\x48\x55\x44\x5f\x47\x4d\x42\x75\x74\x74\x6f\x6e\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X71EAAAE
	 * 	Name: Function BP_MobileHUD_GMButton.BP_MobileHUD_GMButton_C.ListenMessage_BP_MobileHUD_GMButton_K2Node_ListenMessage_0_1
	 * 	Flags: (HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MobileHUD_GMButton_C::ListenMessage_BP_MobileHUD_GMButton_K2Node_ListenMessage_0_1(struct UObject* Sender, struct FString MessageId, struct TArray<struct FMessageAny>& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x4d\x6f\x62\x69\x6c\x65\x48\x55\x44\x5f\x47\x4d\x42\x75\x74\x74\x6f\x6e\x2e\x42\x50\x5f\x4d\x6f\x62\x69\x6c\x65\x48\x55\x44\x5f\x47\x4d\x42\x75\x74\x74\x6f\x6e\x5f\x43\x2e\x4c\x69\x73\x74\x65\x6e\x4d\x65\x73\x73\x61\x67\x65\x5f\x42\x50\x5f\x4d\x6f\x62\x69\x6c\x65\x48\x55\x44\x5f\x47\x4d\x42\x75\x74\x74\x6f\x6e\x5f\x4b\x32\x4e\x6f\x64\x65\x5f\x4c\x69\x73\x74\x65\x6e\x4d\x65\x73\x73\x61\x67\x65\x5f\x30\x5f\x31");
		Function_BP_MobileHUD_GMButton_BP_MobileHUD_GMButton_C_ListenMessage_BP_MobileHUD_GMButton_K2Node_ListenMessage_0_1_Param params { };
		params.Sender = Sender;
		params.MessageId = MessageId;
		params.Params = Params;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Params = params.Params;
	}
}