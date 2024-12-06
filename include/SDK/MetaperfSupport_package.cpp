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
	 * 	Name: PredefinedFunction FMetaperfJankInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMetaperfJankInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x74\x61\x70\x65\x72\x66\x53\x75\x70\x70\x6f\x72\x74\x2e\x4d\x65\x74\x61\x70\x65\x72\x66\x4a\x61\x6e\x6b\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMetaperfRecordInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMetaperfRecordInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x74\x61\x70\x65\x72\x66\x53\x75\x70\x70\x6f\x72\x74\x2e\x4d\x65\x74\x61\x70\x65\x72\x66\x52\x65\x63\x6f\x72\x64\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMetaperfSystemInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMetaperfSystemInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x74\x61\x70\x65\x72\x66\x53\x75\x70\x70\x6f\x72\x74\x2e\x4d\x65\x74\x61\x70\x65\x72\x66\x53\x79\x73\x74\x65\x6d\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMetaperfUploader.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMetaperfUploader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x74\x61\x70\x65\x72\x66\x53\x75\x70\x70\x6f\x72\x74\x2e\x4d\x65\x74\x61\x70\x65\x72\x66\x55\x70\x6c\x6f\x61\x64\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MetaperfSupport.MetaperfUploader.UploadMetaperfFile
	 * 	Flags: (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 */
	void UMetaperfUploader::STATIC_UploadMetaperfFile(struct FUploadFileNtf& UploadNtf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x65\x74\x61\x70\x65\x72\x66\x53\x75\x70\x70\x6f\x72\x74\x2e\x4d\x65\x74\x61\x70\x65\x72\x66\x55\x70\x6c\x6f\x61\x64\x65\x72\x2e\x55\x70\x6c\x6f\x61\x64\x4d\x65\x74\x61\x70\x65\x72\x66\x46\x69\x6c\x65");
		Function_MetaperfSupport_MetaperfUploader_UploadMetaperfFile_Param params { };
		params.UploadNtf = UploadNtf;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		UploadNtf = params.UploadNtf;
	}
}