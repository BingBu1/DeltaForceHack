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
	 * 	Name: PredefinedFunction UDFCommonMediaView_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFCommonMediaView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x4d\x65\x64\x69\x61\x56\x69\x65\x77\x2e\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x4d\x65\x64\x69\x61\x56\x69\x65\x77\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function DFCommonMediaView.DFCommonMediaView_C.Finished_FCBDC8AC4185B41801046DA43AEF311B
	 * 	Flags: (BlueprintCallable, BlueprintEvent)
	 */
	void UDFCommonMediaView_C::Finished_FCBDC8AC4185B41801046DA43AEF311B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x4d\x65\x64\x69\x61\x56\x69\x65\x77\x2e\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x4d\x65\x64\x69\x61\x56\x69\x65\x77\x5f\x43\x2e\x46\x69\x6e\x69\x73\x68\x65\x64\x5f\x46\x43\x42\x44\x43\x38\x41\x43\x34\x31\x38\x35\x42\x34\x31\x38\x30\x31\x30\x34\x36\x44\x41\x34\x33\x41\x45\x46\x33\x31\x31\x42");
		Function_DFCommonMediaView_DFCommonMediaView_C_Finished_FCBDC8AC4185B41801046DA43AEF311B_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}