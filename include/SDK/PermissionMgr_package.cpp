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
	 * 	Name: PredefinedFunction UIDFPermissionMgr.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIDFPermissionMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x4d\x67\x72\x2e\x49\x44\x46\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x4d\x67\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFAndroidPermissionMgr.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFAndroidPermissionMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x4d\x67\x72\x2e\x44\x46\x41\x6e\x64\x72\x6f\x69\x64\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x4d\x67\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFiOSPermissionMgr.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFiOSPermissionMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x4d\x67\x72\x2e\x44\x46\x69\x4f\x53\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x4d\x67\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function PermissionMgr.IDFPermissionMgr.ShouldShowRequestPermissionRationale
	 * 	Flags: (Native, Public, BlueprintCallable)
	 */
	bool UIDFPermissionMgr::ShouldShowRequestPermissionRationale(enum class EDFPermissionType Permission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x4d\x67\x72\x2e\x49\x44\x46\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x4d\x67\x72\x2e\x53\x68\x6f\x75\x6c\x64\x53\x68\x6f\x77\x52\x65\x71\x75\x65\x73\x74\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x52\x61\x74\x69\x6f\x6e\x61\x6c\x65");
		Function_PermissionMgr_IDFPermissionMgr_ShouldShowRequestPermissionRationale_Param params { };
		params.Permission = Permission;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}