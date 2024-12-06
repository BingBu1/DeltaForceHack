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
	struct Function_OpenWorldStreaming_FreezeRebasingVolume_EndOverlap_Param
	{
	public:

		struct AActor* ThisActor; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
	};

	struct Function_OpenWorldStreaming_GamePlayValidAreaActor_SaveAllToConfig_Param
	{
	public:

	};

	struct Function_OpenWorldStreaming_GeneralLevelVolume_ReCreateDebugLine_Param
	{
	public:

	};

	struct Function_OpenWorldStreaming_OpenWorldStreamingBlueprintTools_UploadMemReportFull_Param
	{
	public:

		struct FString InGameVersion; // 0x00(0x10)
	};

	struct Function_OpenWorldStreaming_LandscapeMeshFuncLib_LandscapeVTFlush_Param
	{
	public:

	};

	struct Function_OpenWorldStreaming_SimpleProfilerBlueprintTools_EndSimpleProfiler_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FString MapName; // 0x08(0x10)
		bool bReport; // 0x18(0x01)
		bool bSave; // 0x19(0x01)
	};

	struct Function_OpenWorldStreaming_OpenWorldPIESettings_Save_Param
	{
	public:

	};

	struct Function_OpenWorldStreaming_RoomVolume_EndOverlap_Param
	{
	public:

		struct AActor* ThisActor; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
	};

	struct Function_OpenWorldStreaming_CustomWorldComposition_UseStreamingSettings_Param
	{
	public:

		struct FName MapName; // 0x00(0x08)
		struct TArray<struct FName> InExtraScanningMaps; // 0x08(0x10)
		bool ReturnValue; // 0x18(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
