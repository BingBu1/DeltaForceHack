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
	 * 	Name: PredefinedFunction UWBP_DFCommonFoldCheckBox_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_DFCommonFoldCheckBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x46\x6f\x6c\x64\x43\x68\x65\x63\x6b\x42\x6f\x78\x2e\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x46\x6f\x6c\x64\x43\x68\x65\x63\x6b\x42\x6f\x78\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XBFFFFFFF
	 * 	Name: Function WBP_DFCommonFoldCheckBox.WBP_DFCommonFoldCheckBox_C.ArrowCheckStyle
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DFCommonFoldCheckBox_C::ArrowCheckStyle(bool Checked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x46\x6f\x6c\x64\x43\x68\x65\x63\x6b\x42\x6f\x78\x2e\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x46\x6f\x6c\x64\x43\x68\x65\x63\x6b\x42\x6f\x78\x5f\x43\x2e\x41\x72\x72\x6f\x77\x43\x68\x65\x63\x6b\x53\x74\x79\x6c\x65");
		Function_WBP_DFCommonFoldCheckBox_WBP_DFCommonFoldCheckBox_C_ArrowCheckStyle_Param params { };
		params.Checked = Checked;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}