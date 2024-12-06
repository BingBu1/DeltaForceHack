
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass LF_BaseLight_Point_01.LF_BaseLight_Point_01_C
// Size: 0x421 (Inherited: 0x378)
class ALF_BaseLight_Point_01_C : public AActor {
public:

	struct UPointLightComponent* PointLight; // 0x378(0x08)
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
	char pad_3A9[0x3]; // 0x3a9(0x03)
	float AttenuationRadius; // 0x3ac(0x04)
	bool Static_CastShadow; // 0x3b0(0x01)
	enum class EComponentMobility Static; // 0x3b1(0x01)
	char pad_3B2[0x2]; // 0x3b2(0x02)
	float 实时光SpecularScale; // 0x3b4(0x04)
	float ShadowBias; // 0x3b8(0x04)
	float IndirectLightingIntensity; // 0x3bc(0x04)
	float SoftSourceRadius; // 0x3c0(0x04)
	bool UseInverseSquaredFalloff; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	float LightFalloffExponent; // 0x3c8(0x04)
	float SourceLength; // 0x3cc(0x04)
	float SourceRadius; // 0x3d0(0x04)
	float MaxDrawDistance; // 0x3d4(0x04)
	bool OpenVFXLensflare; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct AFXProxyActor* FXProxyActorRef; // 0x3e0(0x08)
	char pad_3E8[0x8]; // 0x3e8(0x08)
	struct FTransform VFXLensflareTrans; // 0x3f0(0x30)
	bool MoblieMovable; // 0x420(0x01)

	void UserConstructionScript(); // Function LF_BaseLight_Point_01.LF_BaseLight_Point_01_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb999699a3b80cb8d
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
