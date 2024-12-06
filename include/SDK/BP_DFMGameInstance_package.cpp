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
	 * 	Name: PredefinedFunction UBP_DFMGameInstance_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_DFMGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x44\x46\x4d\x47\x61\x6d\x65\x49\x6e\x73\x74\x61\x6e\x63\x65\x2e\x42\x50\x5f\x44\x46\x4d\x47\x61\x6d\x65\x49\x6e\x73\x74\x61\x6e\x63\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_DFMGameInstance.BP_DFMGameInstance_C.Show Network Error
	 * 	Flags: (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DFMGameInstance_C::Show_Network_Error(enum class ENetworkFailure Type, bool IsServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x44\x46\x4d\x47\x61\x6d\x65\x49\x6e\x73\x74\x61\x6e\x63\x65\x2e\x42\x50\x5f\x44\x46\x4d\x47\x61\x6d\x65\x49\x6e\x73\x74\x61\x6e\x63\x65\x5f\x43\x2e\x53\x68\x6f\x77\x20\x4e\x65\x74\x77\x6f\x72\x6b\x20\x45\x72\x72\x6f\x72");
		Function_BP_DFMGameInstance_BP_DFMGameInstance_C_Show_Network_Error_Param params { };
		params.Type = Type;
		params.IsServer = IsServer;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}