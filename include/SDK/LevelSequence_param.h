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
	struct Function_LevelSequence_LevelSequenceActor_ShowBurnin_Param
	{
	public:

	};

	struct Function_LevelSequence_LevelSequenceDirector_OnCreated_Param
	{
	public:

	};

	struct Function_LevelSequence_InteriorFogComponent_SetExtinctionScale_Param
	{
	public:

		float NewExtinctionScale; // 0x00(0x04)
	};

	struct Function_LevelSequence_LevelSequence_RemoveMetaDataByClass_Param
	{
	public:

		struct UClass* InClass; // 0x00(0x08)
	};

	struct Function_LevelSequence_LevelSequenceBurnInOptions_SetBurnIn_Param
	{
	public:

		struct FSoftClassPath InBurnInClass; // 0x00(0x18)
	};

	struct Function_LevelSequence_LevelSequenceBurnIn_SetSettings_Param
	{
	public:

		struct UObject* InSettings; // 0x00(0x08)
	};

	struct Function_LevelSequence_LevelSequencePlayer_GetActiveCameraComponent_Param
	{
	public:

		struct UCameraComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_LevelSequence_SubLevelSequenceVolume_SetVolumeSequence_Param
	{
	public:

		struct FString SequenceNameInManager; // 0x00(0x10)
		struct FSoftObjectPath Path; // 0x10(0x18)
		int32_t Priority; // 0x28(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
