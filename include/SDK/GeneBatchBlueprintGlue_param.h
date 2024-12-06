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
	struct Function_GeneBatchBlueprintGlue_BatchHelper_FilterByVolume_Param
	{
	public:

		struct TArray<struct UStaticMeshComponent*> InStaticMeshComps; // 0x00(0x10)
		float VolumeLimit; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct TArray<struct UStaticMeshComponent*> ReturnValue; // 0x18(0x10)
	};

	struct Function_GeneBatchBlueprintGlue_GeneBatchBlueprintGlue_TryCreateGeneBatchRuntime_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
		struct UGeneBatchSettingsObject* InSettingObject; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
