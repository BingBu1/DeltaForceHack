/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_ZipLib_Unzipper_UnzipAllAsync_Param
	{
	public:

		struct FString TargetLocation; // 0x00(0x10)
		struct FString Password; // 0x10(0x10)
		bool bForce; // 0x20(0x01)
	};

	struct Function_ZipLib_ZipLibrary_UnZipCompletedSetFlag_Param
	{
	public:

		bool bSuccess; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		int64_t FilesZippedCount; // 0x08(0x08)
	};

	struct Function_ZipLib_Zipper_ZipAsync_Param
	{
	public:

		struct FString TargetLocation; // 0x00(0x10)
		struct FString Password; // 0x10(0x10)
		enum class EZipCompressLevel CompressLevel; // 0x20(0x01)
		enum class EZipCreationFlag CreationFlag; // 0x21(0x01)
		char pad_22[0x6]; // 0x22(0x06)
		int64_t CheckSize; // 0x28(0x08)
	};

	struct Function_ZipLib_ZipDirectoryProxy_ZipDirectory_Param
	{
	public:

		struct FString DirectoryToZip; // 0x00(0x10)
		struct FString ResultLocation; // 0x10(0x10)
		struct FString Password; // 0x20(0x10)
		enum class EZipCreationFlag CreationFlag; // 0x30(0x01)
		enum class EZipCompressLevel Compression; // 0x31(0x01)
		char pad_32[0x6]; // 0x32(0x06)
		struct UZipDirectoryProxy* ReturnValue; // 0x38(0x08)
	};

	struct Function_ZipLib_ZipFilesProxy_ZipFiles_Param
	{
	public:

		struct TArray<struct FFileToZip> FilesToZip; // 0x00(0x10)
		struct FString ResultLocation; // 0x10(0x10)
		struct FString Password; // 0x20(0x10)
		enum class EZipCreationFlag CreationFlag; // 0x30(0x01)
		enum class EZipCompressLevel Compression; // 0x31(0x01)
		char pad_32[0x6]; // 0x32(0x06)
		struct UZipFilesProxy* ReturnValue; // 0x38(0x08)
	};

	struct Function_ZipLib_UnzipArchiveProxy_UnzipZipArchive_Param
	{
	public:

		struct FString ZipArchiveLocation; // 0x00(0x10)
		struct FString ResultLocation; // 0x10(0x10)
		struct FString Password; // 0x20(0x10)
		bool bOverwrite; // 0x30(0x01)
		char pad_31[0x7]; // 0x31(0x07)
		struct UUnzipArchiveProxy* ReturnValue; // 0x38(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
