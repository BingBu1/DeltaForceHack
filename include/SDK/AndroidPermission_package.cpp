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
	 * 	Name: PredefinedFunction UAndroidPermissionCallbackProxy.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAndroidPermissionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x6e\x64\x72\x6f\x69\x64\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x2e\x41\x6e\x64\x72\x6f\x69\x64\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x43\x61\x6c\x6c\x62\x61\x63\x6b\x50\x72\x6f\x78\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UAndroidPermissionFunctionLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAndroidPermissionFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x6e\x64\x72\x6f\x69\x64\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x2e\x41\x6e\x64\x72\x6f\x69\x64\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x46\x75\x6e\x63\x74\x69\x6f\x6e\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UAndroidPermissionFunctionLibrary::STATIC_CheckPermission(struct FString Permission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x6e\x64\x72\x6f\x69\x64\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x2e\x41\x6e\x64\x72\x6f\x69\x64\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x46\x75\x6e\x63\x74\x69\x6f\x6e\x4c\x69\x62\x72\x61\x72\x79\x2e\x43\x68\x65\x63\x6b\x50\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e");
		Function_AndroidPermission_AndroidPermissionFunctionLibrary_CheckPermission_Param params { };
		params.Permission = Permission;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}