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
	 * 	Name: PredefinedFunction FWeGameLoginRet.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FWeGameLoginRet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x2e\x57\x65\x47\x61\x6d\x65\x4c\x6f\x67\x69\x6e\x52\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FWeGameAcccountInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FWeGameAcccountInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x2e\x57\x65\x47\x61\x6d\x65\x41\x63\x63\x63\x6f\x75\x6e\x74\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FWeGameAbroadLoginAccountInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FWeGameAbroadLoginAccountInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x2e\x57\x65\x47\x61\x6d\x65\x41\x62\x72\x6f\x61\x64\x4c\x6f\x67\x69\x6e\x41\x63\x63\x6f\x75\x6e\x74\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FWeGameConnectSvrInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FWeGameConnectSvrInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x2e\x57\x65\x47\x61\x6d\x65\x43\x6f\x6e\x6e\x65\x63\x74\x53\x76\x72\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UWeGameSDKDelegates.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWeGameSDKDelegates::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x2e\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x44\x65\x6c\x65\x67\x61\x74\x65\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UWeGameSDKManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWeGameSDKManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x2e\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WeGameSDK.WeGameSDKDelegates.Get
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UWeGameSDKDelegates* UWeGameSDKDelegates::STATIC_Get(struct UObject* GameContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x2e\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x44\x65\x6c\x65\x67\x61\x74\x65\x73\x2e\x47\x65\x74");
		Function_WeGameSDK_WeGameSDKDelegates_Get_Param params { };
		params.GameContextObject = GameContextObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WeGameSDK.WeGameSDKManager.TryAutoLogin
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UWeGameSDKManager::TryAutoLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x2e\x57\x65\x47\x61\x6d\x65\x53\x44\x4b\x4d\x61\x6e\x61\x67\x65\x72\x2e\x54\x72\x79\x41\x75\x74\x6f\x4c\x6f\x67\x69\x6e");
		Function_WeGameSDK_WeGameSDKManager_TryAutoLogin_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}