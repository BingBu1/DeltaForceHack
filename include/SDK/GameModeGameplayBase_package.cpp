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
	 * 	Name: PredefinedFunction AGameModeGameplayBase_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AGameModeGameplayBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x4d\x6f\x64\x65\x47\x61\x6d\x65\x70\x6c\x61\x79\x42\x61\x73\x65\x2e\x47\x61\x6d\x65\x4d\x6f\x64\x65\x47\x61\x6d\x65\x70\x6c\x61\x79\x42\x61\x73\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X9B73A852
	 * 	Name: Function GameModeGameplayBase.GameModeGameplayBase_C.SetAddLightInttensityValueOnLightMaterialCollection
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void AGameModeGameplayBase_C::SetAddLightInttensityValueOnLightMaterialCollection(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x4d\x6f\x64\x65\x47\x61\x6d\x65\x70\x6c\x61\x79\x42\x61\x73\x65\x2e\x47\x61\x6d\x65\x4d\x6f\x64\x65\x47\x61\x6d\x65\x70\x6c\x61\x79\x42\x61\x73\x65\x5f\x43\x2e\x53\x65\x74\x41\x64\x64\x4c\x69\x67\x68\x74\x49\x6e\x74\x74\x65\x6e\x73\x69\x74\x79\x56\x61\x6c\x75\x65\x4f\x6e\x4c\x69\x67\x68\x74\x4d\x61\x74\x65\x72\x69\x61\x6c\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e");
		Function_GameModeGameplayBase_GameModeGameplayBase_C_SetAddLightInttensityValueOnLightMaterialCollection_Param params { };
		params.Value = Value;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}