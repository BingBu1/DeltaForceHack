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
	 * 	Name: PredefinedFunction UIFileMgr.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIFileMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x46\x69\x6c\x65\x4d\x67\x72\x2e\x49\x46\x69\x6c\x65\x4d\x67\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UAndroidFileMgr.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAndroidFileMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x46\x69\x6c\x65\x4d\x67\x72\x2e\x41\x6e\x64\x72\x6f\x69\x64\x46\x69\x6c\x65\x4d\x67\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UIOSFileMgr.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIOSFileMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x46\x69\x6c\x65\x4d\x67\x72\x2e\x49\x4f\x53\x46\x69\x6c\x65\x4d\x67\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function FileMgr.IFileMgr.SaveToAlbum
	 * 	Flags: (Native, Public, BlueprintCallable)
	 */
	bool UIFileMgr::SaveToAlbum(struct FString AbsolutePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x46\x69\x6c\x65\x4d\x67\x72\x2e\x49\x46\x69\x6c\x65\x4d\x67\x72\x2e\x53\x61\x76\x65\x54\x6f\x41\x6c\x62\x75\x6d");
		Function_FileMgr_IFileMgr_SaveToAlbum_Param params { };
		params.AbsolutePath = AbsolutePath;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}