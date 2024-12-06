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
	struct Function_AudioMixer_SynthComponent_Stop_Param
	{
	public:

	};

	struct Function_AudioMixer_AudioMixerBlueprintLibrary_TrimAudioCache_Param
	{
	public:

		float InMegabytesToFree; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_AudioMixer_SubmixEffectDynamicsProcessorPreset_SetSettings_Param
	{
	public:

		struct FSubmixEffectDynamicsProcessorSettings InSettings; // 0x00(0x28)
	};

	struct Function_AudioMixer_SubmixEffectSubmixEQPreset_SetSettings_Param
	{
	public:

		struct FSubmixEffectSubmixEQSettings InSettings; // 0x00(0x10)
	};

	struct Function_AudioMixer_SubmixEffectReverbPreset_SetSettingsWithReverbEffect_Param
	{
	public:

		struct UReverbEffect* InReverbEffect; // 0x00(0x08)
		float WetLevel; // 0x08(0x04)
		float DryLevel; // 0x0c(0x04)
	};

	struct Function_AudioMixer_SubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Param
	{
	public:

		struct UReverbEffect* InReverbEffect; // 0x00(0x08)
		float WetLevel; // 0x08(0x04)
		float DryLevel; // 0x0c(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
