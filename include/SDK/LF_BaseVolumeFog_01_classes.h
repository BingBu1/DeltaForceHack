
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass LF_BaseVolumeFog_01.LF_BaseVolumeFog_01_C
// Size: 0x420 (Inherited: 0x378)
class ALF_BaseVolumeFog_01_C : public AActor {
public:

	struct USceneComponent* DefaultSceneRoot; // 0x378(0x08)
	bool OFF; // 0x380(0x01)
	enum class LF_GodLightingType VLFGodLightType; // 0x381(0x01)
	enum class Temperature ChoseTemperature; // 0x382(0x01)
	char pad_383[0x1]; // 0x383(0x01)
	float Temperature; // 0x384(0x04)
	float VolumetricScatteringIntensity; // 0x388(0x04)
	float SetVLFLightIntensity; // 0x38c(0x04)
	struct FLinearColor LightColor; // 0x390(0x10)
	bool OpenSetVLFLightColor; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	struct FLinearColor VLFLightColor; // 0x3a4(0x10)
	float VLFAttenuationRadius; // 0x3b4(0x04)
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct FTransform VLFGogLightTrans; // 0x3c0(0x30)
	float VLFSpotInner; // 0x3f0(0x04)
	float VLFSpotOuter; // 0x3f4(0x04)
	float VLFSourceLength; // 0x3f8(0x04)
	float VLFSourceRadius; // 0x3fc(0x04)
	float MaxDrawDistance; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)
	struct ULightComponent* LFVLightComp; // 0x408(0x08)
	float VLFRectHei; // 0x410(0x04)
	float VLFRectWid; // 0x414(0x04)
	float VLFRectAngle; // 0x418(0x04)
	float VLFRectBarnDoorLength; // 0x41c(0x04)

	void UseSwitchTempertuare(); // Function LF_BaseVolumeFog_01.LF_BaseVolumeFog_01_C.UseSwitchTempertuare // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x8200156ea01824a5
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
