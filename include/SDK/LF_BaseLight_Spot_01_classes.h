
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass LF_BaseLight_Spot_01.LF_BaseLight_Spot_01_C
// Size: 0x3f5 (Inherited: 0x378)
class ALF_BaseLight_Spot_01_C : public AActor {
public:

	struct USpotLightComponent* SpotLight; // 0x378(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x380(0x08)
	float Lumens; // 0x388(0x04)
	bool OFF; // 0x38c(0x01)
	enum class Temperature ChoseTemperature; // 0x38d(0x01)
	char pad_38E[0x2]; // 0x38e(0x02)
	float Temperature; // 0x390(0x04)
	bool ResetLightColor; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct FLinearColor LightColor; // 0x398(0x10)
	enum class EComponentMobility Mobility; // 0x3a8(0x01)
	enum class EComponentMobility movable; // 0x3a9(0x01)
	char pad_3AA[0x2]; // 0x3aa(0x02)
	float AttenuationRadius; // 0x3ac(0x04)
	float SpotInnerAngle; // 0x3b0(0x04)
	float SpotOuterAngle; // 0x3b4(0x04)
	float 实时光SpecularScale; // 0x3b8(0x04)
	enum class EComponentMobility Static; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	float IndirectLigtingIntensity; // 0x3c0(0x04)
	float ShadowBias; // 0x3c4(0x04)
	float ContactShadowLength; // 0x3c8(0x04)
	float SoftSourceRadius; // 0x3cc(0x04)
	bool SetCastPreBake; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	int32_t PreBakeShadowMapResolution; // 0x3d4(0x04)
	struct UPreBakeShadowDepthMap* PreBakeShadowDepthData; // 0x3d8(0x08)
	enum class EComponentMobility Stationary; // 0x3e0(0x01)
	bool UseInverseSquaredFalloff; // 0x3e1(0x01)
	char pad_3E2[0x2]; // 0x3e2(0x02)
	float LightFalloffExponent; // 0x3e4(0x04)
	float SourceLength; // 0x3e8(0x04)
	float SourceRadius; // 0x3ec(0x04)
	float MaxDrawDistance; // 0x3f0(0x04)
	bool Static_CastShadow; // 0x3f4(0x01)

	void SetupPrebakeShadow(); // Function LF_BaseLight_Spot_01.LF_BaseLight_Spot_01_C.SetupPrebakeShadow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
