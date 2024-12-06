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
	 * 	Name: PredefinedFunction ABP_DFMCharacter_Iris_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_DFMCharacter_Iris_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x44\x46\x4d\x43\x68\x61\x72\x61\x63\x74\x65\x72\x5f\x49\x72\x69\x73\x2e\x42\x50\x5f\x44\x46\x4d\x43\x68\x61\x72\x61\x63\x74\x65\x72\x5f\x49\x72\x69\x73\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0740000
	 * 	Name: Function BP_DFMCharacter_Iris.BP_DFMCharacter_Iris_C.GMFly Path
	 * 	Flags: (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DFMCharacter_Iris_C::GMFly_Path(int32_t PathID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x44\x46\x4d\x43\x68\x61\x72\x61\x63\x74\x65\x72\x5f\x49\x72\x69\x73\x2e\x42\x50\x5f\x44\x46\x4d\x43\x68\x61\x72\x61\x63\x74\x65\x72\x5f\x49\x72\x69\x73\x5f\x43\x2e\x47\x4d\x46\x6c\x79\x20\x50\x61\x74\x68");
		Function_BP_DFMCharacter_Iris_BP_DFMCharacter_Iris_C_GMFly_Path_Param params { };
		params.PathID = PathID;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}