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
	struct Function_RuntimeFilesDownloader_CDNIconDownManager_TransferImagePathToSavePath_Param
	{
	public:

		struct FString ImagePath; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_RuntimeFilesDownloader_RuntimeFilesDownloaderProxy_Reset_Param
	{
	public:

	};

	struct Function_RuntimeFilesDownloader_RuntimeFilesDownloaderLibrary_GetLogDirAbsolutePath_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
