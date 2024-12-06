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
	struct Function_HotPatcherRuntime_FlibPakHelper_UnMountPak_Param
	{
	public:

		struct FString PakPath; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_HotPatcherRuntime_FlibPatchParserHelper_ReloadShaderbytecode_Param
	{
	public:

	};

	struct Function_HotPatcherRuntime_FlibShaderPipelineCacheHelper_SavePipelineFileCache_Param
	{
	public:

		enum class EPSOSaveMode Mode; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_HotPatcherRuntime_MountListener_Init_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
