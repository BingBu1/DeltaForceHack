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
	struct Function_GPCutScene_GPSequenceActorStream_StopSequenceStream_Param
	{
	public:

	};

	struct Function_GPCutScene_GPSequenceBindingComponent_TestSetTPPMode_Param
	{
	public:

	};

	struct Function_GPCutScene_GPSequenceBindingTags_GetVehicleTag_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		struct FName ReturnValue; // 0x04(0x08)
	};

	struct Function_GPCutScene_GPSequenceDebugActor_LoadLevel_Param
	{
	public:

	};

	struct Function_GPCutScene_GPSequenceMannequin_OnSequenceEnd_Param
	{
	public:

		struct AGPSequenceActor* InOwnerSequence; // 0x00(0x08)
	};

	struct Function_GPCutScene_GPSequencePrepareComponent_TestPreload_Param
	{
	public:

	};

	struct Function_GPCutScene_GPSequencePreSpawnComponent_OnTriggerPrespawn_Param
	{
	public:

		struct AActor* OverlappedActor; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
	};

	struct Function_GPCutScene_GPSequenceSystem_ResumeCurrentPlayingSequence_Param
	{
	public:

	};

	struct Function_GPCutScene_GPSubLevelPreloader_TestPreload_Param
	{
	public:

	};

	struct Function_GPCutScene_GPSequenceMaster_OnSetPerspectiveMode_Param
	{
	public:

		enum class EGPSequencePerspectiveMode Mode; // 0x00(0x01)
	};

	struct Function_GPCutScene_GPSequenceActor_UnloadLevels_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
