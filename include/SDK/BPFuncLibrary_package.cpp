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
	 * 	Name: PredefinedFunction UBPFuncLibrary_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBPFuncLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x46\x75\x6e\x63\x4c\x69\x62\x72\x61\x72\x79\x2e\x42\x50\x46\x75\x6e\x63\x4c\x69\x62\x72\x61\x72\x79\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XBFFFFFFF
	 * 	Name: Function BPFuncLibrary.BPFuncLibrary_C.SetTextWidthToFontMaterial
	 * 	Flags: (Static, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFuncLibrary_C::STATIC_SetTextWidthToFontMaterial(struct UTextBlock* TextBlock, struct UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x46\x75\x6e\x63\x4c\x69\x62\x72\x61\x72\x79\x2e\x42\x50\x46\x75\x6e\x63\x4c\x69\x62\x72\x61\x72\x79\x5f\x43\x2e\x53\x65\x74\x54\x65\x78\x74\x57\x69\x64\x74\x68\x54\x6f\x46\x6f\x6e\x74\x4d\x61\x74\x65\x72\x69\x61\x6c");
		Function_BPFuncLibrary_BPFuncLibrary_C_SetTextWidthToFontMaterial_Param params { };
		params.TextBlock = TextBlock;
		params.__WorldContext = __WorldContext;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}