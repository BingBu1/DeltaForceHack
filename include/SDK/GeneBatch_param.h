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
	struct Function_GeneBatch_GeneBatchLibrary_RegexSearchCapture_Param
	{
	public:

		struct FString inString; // 0x00(0x10)
		struct FString InRegexPattern; // 0x10(0x10)
		struct TArray<int32_t> InCaptureIndex; // 0x20(0x10)
		struct TArray<struct FString> OutCaptureGroup; // 0x30(0x10)
		int32_t BeginIndex; // 0x40(0x04)
		int32_t EndIndex; // 0x44(0x04)
		bool ReturnValue; // 0x48(0x01)
	};

	struct Function_GeneBatch_GeneBatchPOIVolume_UpdatePOISettingsObject_Param
	{
	public:

		struct UGeneBatchPOISettingsObject* NewPOISettingsObject; // 0x00(0x08)
	};

	struct Function_GeneBatch_GeneBatchPOISettingsObject_GetPOIGeneBatchSettings_Param
	{
	public:

		struct TArray<struct UGeneBatchSettingsObject*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GeneBatch_GeneBatchSettingsFunctionalConfiguration_MeshBakeMethod_Param
	{
	public:

		struct FGeneBatchTableRowResultHLODData HLODData; // 0x00(0x260)
		int32_t TotalNumVertices; // 0x260(0x04)
		char pad_264[0x4]; // 0x264(0x04)
		struct TArray<int32_t> MeshInstanceCounts; // 0x268(0x10)
		enum class EGeneBatchBakeMethod ReturnValue; // 0x278(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
