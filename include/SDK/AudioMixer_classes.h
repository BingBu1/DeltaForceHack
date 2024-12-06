
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AudioMixer.SynthComponent
// Size: 0x6d0 (Inherited: 0x240)
class USynthComponent : public USceneComponent {
public:

	char bAutoDestroy : 1; // 0x240(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x240(0x01)
	char bAllowSpatialization : 1; // 0x240(0x01)
	char bOverrideAttenuation : 1; // 0x240(0x01)
	char pad_240_4 : 4; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	char bOutputToBusOnly : 1; // 0x244(0x01)
	char pad_244_1 : 7; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct USoundAttenuation* AttenuationSettings; // 0x248(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x250(0x350)
	struct USoundConcurrency* ConcurrencySettings; // 0x5a0(0x08)
	/*struct TSet<struct USoundConcurrency*>*/char ConcurrencySet[0x50]; // 0x5a8(0x50)
	struct USoundClass* SoundClass; // 0x5f8(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x600(0x08)
	struct USoundSubmix* SoundSubmix; // 0x608(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x610(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x620(0x10)
	struct FSoundModulation Modulation; // 0x630(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x640(0x10)
	char bIsUISound : 1; // 0x650(0x01)
	char bIsPreviewSound : 1; // 0x650(0x01)
	char pad_650_2 : 6; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	int32_t EnvelopeFollowerAttackTime; // 0x654(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x658(0x04)
	char pad_65C[0x4]; // 0x65c(0x04)
	/*struct FMulticastInlineDelegate*/char OnAudioEnvelopeValue[0x10]; // 0x660(0x10)
	char pad_670[0x20]; // 0x670(0x20)
	struct USynthSound* Synth; // 0x690(0x08)
	struct UAudioComponent* AudioComponent; // 0x698(0x08)
	char pad_6A0[0x30]; // 0x6a0(0x30)

	void Stop(); // Function AudioMixer.SynthComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AudioMixer.AudioGenerator
// Size: 0xb0 (Inherited: 0x30)
class UAudioGenerator : public UObject {
public:

	char pad_30[0x80]; // 0x30(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	float STATIC_TrimAudioCache(float InMegabytesToFree); // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0xc0 (Inherited: 0x48)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset {
public:

	char pad_48[0x50]; // 0x48(0x50)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0x98(0x28)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& InSettings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0x90 (Inherited: 0x48)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset {
public:

	char pad_48[0x38]; // 0x48(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0x80(0x10)

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0xd8 (Inherited: 0x48)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset {
public:

	char pad_48[0x5c]; // 0x48(0x5c)
	struct FSubmixEffectReverbSettings Settings; // 0xa4(0x34)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// Size: 0xd8 (Inherited: 0x48)
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset {
public:

	char pad_48[0x5c]; // 0x48(0x5c)
	struct FSubmixEffectReverbFastSettings Settings; // 0xa4(0x34)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AudioMixer.SynthSound
// Size: 0x400 (Inherited: 0x3e0)
class USynthSound : public USoundWaveProcedural {
public:

	struct USynthComponent* OwningSynthComponent; // 0x3e0(0x08)
	char pad_3E8[0x18]; // 0x3e8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
