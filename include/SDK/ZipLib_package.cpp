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
	 * 	Name: PredefinedFunction FFileToZip.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FFileToZip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x5a\x69\x70\x4c\x69\x62\x2e\x46\x69\x6c\x65\x54\x6f\x5a\x69\x70");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FUnzipFileInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUnzipFileInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x5a\x69\x70\x4c\x69\x62\x2e\x55\x6e\x7a\x69\x70\x46\x69\x6c\x65\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUnzipper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUnzipper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x5a\x69\x70\x4c\x69\x62\x2e\x55\x6e\x7a\x69\x70\x70\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UZipLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UZipLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x5a\x69\x70\x4c\x69\x62\x2e\x5a\x69\x70\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UZipper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UZipper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x5a\x69\x70\x4c\x69\x62\x2e\x5a\x69\x70\x70\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UZipAsyncBase.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UZipAsyncBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x5a\x69\x70\x4c\x69\x62\x2e\x5a\x69\x70\x41\x73\x79\x6e\x63\x42\x61\x73\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUnzipAsyncBase.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUnzipAsyncBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x5a\x69\x70\x4c\x69\x62\x2e\x55\x6e\x7a\x69\x70\x41\x73\x79\x6e\x63\x42\x61\x73\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UZipDirectoryProxy.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UZipDirectoryProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x5a\x69\x70\x4c\x69\x62\x2e\x5a\x69\x70\x44\x69\x72\x65\x63\x74\x6f\x72\x79\x50\x72\x6f\x78\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UZipFilesProxy.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UZipFilesProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x5a\x69\x70\x4c\x69\x62\x2e\x5a\x69\x70\x46\x69\x6c\x65\x73\x50\x72\x6f\x78\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUnzipArchiveProxy.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUnzipArchiveProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x5a\x69\x70\x4c\x69\x62\x2e\x55\x6e\x7a\x69\x70\x41\x72\x63\x68\x69\x76\x65\x50\x72\x6f\x78\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ZipLib.Unzipper.UnzipAllAsync
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UUnzipper::UnzipAllAsync(struct FString TargetLocation, struct FString Password, bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x5a\x69\x70\x4c\x69\x62\x2e\x55\x6e\x7a\x69\x70\x70\x65\x72\x2e\x55\x6e\x7a\x69\x70\x41\x6c\x6c\x41\x73\x79\x6e\x63");
		Function_ZipLib_Unzipper_UnzipAllAsync_Param params { };
		params.TargetLocation = TargetLocation;
		params.Password = Password;
		params.bForce = bForce;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ZipLib.ZipLibrary.UnZipCompletedSetFlag
	 * 	Flags: (Final, Native, Static, Public)
	 */
	void UZipLibrary::STATIC_UnZipCompletedSetFlag(bool bSuccess, int64_t FilesZippedCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x5a\x69\x70\x4c\x69\x62\x2e\x5a\x69\x70\x4c\x69\x62\x72\x61\x72\x79\x2e\x55\x6e\x5a\x69\x70\x43\x6f\x6d\x70\x6c\x65\x74\x65\x64\x53\x65\x74\x46\x6c\x61\x67");
		Function_ZipLib_ZipLibrary_UnZipCompletedSetFlag_Param params { };
		params.bSuccess = bSuccess;
		params.FilesZippedCount = FilesZippedCount;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ZipLib.Zipper.ZipAsync
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UZipper::ZipAsync(struct FString TargetLocation, struct FString Password, enum class EZipCompressLevel CompressLevel, enum class EZipCreationFlag CreationFlag, int64_t CheckSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x5a\x69\x70\x4c\x69\x62\x2e\x5a\x69\x70\x70\x65\x72\x2e\x5a\x69\x70\x41\x73\x79\x6e\x63");
		Function_ZipLib_Zipper_ZipAsync_Param params { };
		params.TargetLocation = TargetLocation;
		params.Password = Password;
		params.CompressLevel = CompressLevel;
		params.CreationFlag = CreationFlag;
		params.CheckSize = CheckSize;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ZipLib.ZipDirectoryProxy.ZipDirectory
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UZipDirectoryProxy* UZipDirectoryProxy::STATIC_ZipDirectory(struct FString DirectoryToZip, struct FString ResultLocation, struct FString Password, enum class EZipCreationFlag CreationFlag, enum class EZipCompressLevel Compression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x5a\x69\x70\x4c\x69\x62\x2e\x5a\x69\x70\x44\x69\x72\x65\x63\x74\x6f\x72\x79\x50\x72\x6f\x78\x79\x2e\x5a\x69\x70\x44\x69\x72\x65\x63\x74\x6f\x72\x79");
		Function_ZipLib_ZipDirectoryProxy_ZipDirectory_Param params { };
		params.DirectoryToZip = DirectoryToZip;
		params.ResultLocation = ResultLocation;
		params.Password = Password;
		params.CreationFlag = CreationFlag;
		params.Compression = Compression;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ZipLib.ZipFilesProxy.ZipFiles
	 * 	Flags: (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 */
	struct UZipFilesProxy* UZipFilesProxy::STATIC_ZipFiles(struct TArray<struct FFileToZip>& FilesToZip, struct FString ResultLocation, struct FString Password, enum class EZipCreationFlag CreationFlag, enum class EZipCompressLevel Compression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x5a\x69\x70\x4c\x69\x62\x2e\x5a\x69\x70\x46\x69\x6c\x65\x73\x50\x72\x6f\x78\x79\x2e\x5a\x69\x70\x46\x69\x6c\x65\x73");
		Function_ZipLib_ZipFilesProxy_ZipFiles_Param params { };
		params.FilesToZip = FilesToZip;
		params.ResultLocation = ResultLocation;
		params.Password = Password;
		params.CreationFlag = CreationFlag;
		params.Compression = Compression;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		FilesToZip = params.FilesToZip;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ZipLib.UnzipArchiveProxy.UnzipZipArchive
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UUnzipArchiveProxy* UUnzipArchiveProxy::STATIC_UnzipZipArchive(struct FString ZipArchiveLocation, struct FString ResultLocation, struct FString Password, bool bOverwrite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x5a\x69\x70\x4c\x69\x62\x2e\x55\x6e\x7a\x69\x70\x41\x72\x63\x68\x69\x76\x65\x50\x72\x6f\x78\x79\x2e\x55\x6e\x7a\x69\x70\x5a\x69\x70\x41\x72\x63\x68\x69\x76\x65");
		Function_ZipLib_UnzipArchiveProxy_UnzipZipArchive_Param params { };
		params.ZipArchiveLocation = ZipArchiveLocation;
		params.ResultLocation = ResultLocation;
		params.Password = Password;
		params.bOverwrite = bOverwrite;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}