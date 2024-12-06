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
	 * 	Name: PredefinedFunction UBP_GFStage_LaunchToLogin_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_GFStage_LaunchToLogin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x4c\x61\x75\x6e\x63\x68\x54\x6f\x4c\x6f\x67\x69\x6e\x2e\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x4c\x61\x75\x6e\x63\x68\x54\x6f\x4c\x6f\x67\x69\x6e\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_GFStage_LaunchToLogin.BP_GFStage_LaunchToLogin_C.InitFlowName
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GFStage_LaunchToLogin_C::InitFlowName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x4c\x61\x75\x6e\x63\x68\x54\x6f\x4c\x6f\x67\x69\x6e\x2e\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x4c\x61\x75\x6e\x63\x68\x54\x6f\x4c\x6f\x67\x69\x6e\x5f\x43\x2e\x49\x6e\x69\x74\x46\x6c\x6f\x77\x4e\x61\x6d\x65");
		Function_BP_GFStage_LaunchToLogin_BP_GFStage_LaunchToLogin_C_InitFlowName_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}