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
	struct Function_UploadToolsModule_UploadToolsModuleBPTools_UploadZippedFile_Param
	{
	public:

		struct FUploadFileNtf UploadNtf; // 0x00(0x70)
		enum class EUploadFileType Type; // 0x70(0x01)
	};

	struct Function_UploadToolsModule_UploadToolsModuleDelegates_Get_Param
	{
	public:

		struct UUploadToolsModuleDelegates* ReturnValue; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
