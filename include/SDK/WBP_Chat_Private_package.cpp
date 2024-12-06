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
	 * 	Name: PredefinedFunction UWBP_Chat_Private_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_Chat_Private_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x43\x68\x61\x74\x5f\x50\x72\x69\x76\x61\x74\x65\x2e\x57\x42\x50\x5f\x43\x68\x61\x74\x5f\x50\x72\x69\x76\x61\x74\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC000003E
	 * 	Name: Function WBP_Chat_Private.WBP_Chat_Private_C.Get_Image_340_Visibility_1
	 * 	Flags: (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	enum class ESlateVisibility UWBP_Chat_Private_C::Get_Image_340_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x43\x68\x61\x74\x5f\x50\x72\x69\x76\x61\x74\x65\x2e\x57\x42\x50\x5f\x43\x68\x61\x74\x5f\x50\x72\x69\x76\x61\x74\x65\x5f\x43\x2e\x47\x65\x74\x5f\x49\x6d\x61\x67\x65\x5f\x33\x34\x30\x5f\x56\x69\x73\x69\x62\x69\x6c\x69\x74\x79\x5f\x31");
		Function_WBP_Chat_Private_WBP_Chat_Private_C_Get_Image_340_Visibility_1_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}