
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_FogType_Near.BP_FogType_Near_C
// Size: 0x454 (Inherited: 0x378)
class ABP_FogType_Near_C : public AActor {
public:

	struct UStaticMeshComponent* NearCube; // 0x378(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x380(0x08)
	struct UMaterialInstanceDynamic* FogNearInstance; // 0x388(0x08)
	struct FLinearColor FogColor; // 0x390(0x10)
	struct FLinearColor FogColor1; // 0x3a0(0x10)
	float FogOpacity; // 0x3b0(0x04)
	float Emissive_; // 0x3b4(0x04)
	float Wind; // 0x3b8(0x04)
	bool GlobalWind; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	float SpeedX; // 0x3c0(0x04)
	float SpeedY; // 0x3c4(0x04)
	bool UseNoise; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	float NoiseTilling; // 0x3cc(0x04)
	float NoiseContrast; // 0x3d0(0x04)
	float FogRange; // 0x3d4(0x04)
	float NoiseOffset; // 0x3d8(0x04)
	float GodRayOffset; // 0x3dc(0x04)
	float GodRayTilling; // 0x3e0(0x04)
	float GodRayContrast; // 0x3e4(0x04)
	float NoiseTilling1; // 0x3e8(0x04)
	float NoiseTilling2; // 0x3ec(0x04)
	float Mirror; // 0x3f0(0x04)
	float SpeedZ; // 0x3f4(0x04)
	enum class NearFogType FogType; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct UMaterialInterface* Source_Material_Cloud; // 0x400(0x08)
	struct UMaterialInterface* Source_MaterialSmoke; // 0x408(0x08)
	struct UMaterialInterface* Source_Material_LightShaft; // 0x410(0x08)
	struct UMaterialInterface* Source_Material_SmokeAdvanced; // 0x418(0x08)
	bool GradientColor; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UMaterialInterface* LightShaftGradient_Material; // 0x428(0x08)
	struct UMaterialInterface* Source_Material_LightShaftIIndoor; // 0x430(0x08)
	float NoiseOffset1; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UMaterialInterface* Source_Material_SmokeIndoor; // 0x440(0x08)
	float ExcludeMode; // 0x448(0x04)
	float CameraFadeDistance; // 0x44c(0x04)
	float StartDistance; // 0x450(0x04)

	void UserConstructionScript(); // Function BP_FogType_Near.BP_FogType_Near_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x15e305b4c6971564
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
