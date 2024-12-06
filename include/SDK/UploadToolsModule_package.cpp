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
	 * 	Name: PredefinedFunction FUploadFinishTlogInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUploadFinishTlogInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x2e\x55\x70\x6c\x6f\x61\x64\x46\x69\x6e\x69\x73\x68\x54\x6c\x6f\x67\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FUploadFileNtf.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUploadFileNtf::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x2e\x55\x70\x6c\x6f\x61\x64\x46\x69\x6c\x65\x4e\x74\x66");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FUploadFileRequestInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUploadFileRequestInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x2e\x55\x70\x6c\x6f\x61\x64\x46\x69\x6c\x65\x52\x65\x71\x75\x65\x73\x74\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UCOSConfig.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UCOSConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x2e\x43\x4f\x53\x43\x6f\x6e\x66\x69\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUploadToolsModuleBPTools.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUploadToolsModuleBPTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x2e\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x42\x50\x54\x6f\x6f\x6c\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUploadToolsModuleDelegates.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUploadToolsModuleDelegates::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x2e\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x44\x65\x6c\x65\x67\x61\x74\x65\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UploadToolsModule.UploadToolsModuleBPTools.UploadZippedFile
	 * 	Flags: (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 */
	void UUploadToolsModuleBPTools::STATIC_UploadZippedFile(struct FUploadFileNtf& UploadNtf, enum class EUploadFileType& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x2e\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x42\x50\x54\x6f\x6f\x6c\x73\x2e\x55\x70\x6c\x6f\x61\x64\x5a\x69\x70\x70\x65\x64\x46\x69\x6c\x65");
		Function_UploadToolsModule_UploadToolsModuleBPTools_UploadZippedFile_Param params { };
		params.UploadNtf = UploadNtf;
		params.Type = Type;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		UploadNtf = params.UploadNtf;
		Type = params.Type;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UploadToolsModule.UploadToolsModuleDelegates.Get
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UUploadToolsModuleDelegates* UUploadToolsModuleDelegates::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x2e\x55\x70\x6c\x6f\x61\x64\x54\x6f\x6f\x6c\x73\x4d\x6f\x64\x75\x6c\x65\x44\x65\x6c\x65\x67\x61\x74\x65\x73\x2e\x47\x65\x74");
		Function_UploadToolsModule_UploadToolsModuleDelegates_Get_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}