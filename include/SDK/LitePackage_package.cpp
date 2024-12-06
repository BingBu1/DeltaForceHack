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
	 * 	Name: PredefinedFunction FMultiModuleInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMultiModuleInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4c\x69\x74\x65\x50\x61\x63\x6b\x61\x67\x65\x2e\x4d\x75\x6c\x74\x69\x4d\x6f\x64\x75\x6c\x65\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FModulePakInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FModulePakInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4c\x69\x74\x65\x50\x61\x63\x6b\x61\x67\x65\x2e\x4d\x6f\x64\x75\x6c\x65\x50\x61\x6b\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULiteModuleInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULiteModuleInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4c\x69\x74\x65\x50\x61\x63\x6b\x61\x67\x65\x2e\x4c\x69\x74\x65\x4d\x6f\x64\x75\x6c\x65\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULiteMultiModuleInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULiteMultiModuleInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4c\x69\x74\x65\x50\x61\x63\x6b\x61\x67\x65\x2e\x4c\x69\x74\x65\x4d\x75\x6c\x74\x69\x4d\x6f\x64\x75\x6c\x65\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function LitePackage.LiteModuleInfo.WriteDefaultConfigValueToIni
	 * 	Flags: (Final, Native, Static, Public)
	 */
	void ULiteModuleInfo::STATIC_WriteDefaultConfigValueToIni()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4c\x69\x74\x65\x50\x61\x63\x6b\x61\x67\x65\x2e\x4c\x69\x74\x65\x4d\x6f\x64\x75\x6c\x65\x49\x6e\x66\x6f\x2e\x57\x72\x69\x74\x65\x44\x65\x66\x61\x75\x6c\x74\x43\x6f\x6e\x66\x69\x67\x56\x61\x6c\x75\x65\x54\x6f\x49\x6e\x69");
		Function_LitePackage_LiteModuleInfo_WriteDefaultConfigValueToIni_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function LitePackage.LiteMultiModuleInfo.WriteDefaultConfigValueToIni
	 * 	Flags: (Final, Native, Static, Public)
	 */
	void ULiteMultiModuleInfo::STATIC_WriteDefaultConfigValueToIni()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4c\x69\x74\x65\x50\x61\x63\x6b\x61\x67\x65\x2e\x4c\x69\x74\x65\x4d\x75\x6c\x74\x69\x4d\x6f\x64\x75\x6c\x65\x49\x6e\x66\x6f\x2e\x57\x72\x69\x74\x65\x44\x65\x66\x61\x75\x6c\x74\x43\x6f\x6e\x66\x69\x67\x56\x61\x6c\x75\x65\x54\x6f\x49\x6e\x69");
		Function_LitePackage_LiteMultiModuleInfo_WriteDefaultConfigValueToIni_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}