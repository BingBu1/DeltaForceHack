
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_FogType.BP_FogType_C
// Size: 0x405 (Inherited: 0x378)
class ABP_FogType_C : public AActor {
public:

	struct UStaticMeshComponent* NearCube; // 0x378(0x08)
	struct UStaticMeshComponent* FarPlane; // 0x380(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x388(0x08)
	float Wind; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct UMaterialInstanceDynamic* FogFarInstance; // 0x398(0x08)
	struct UMaterialInstanceDynamic* FogNearInstance; // 0x3a0(0x08)
	struct FLinearColor BaseColorTint; // 0x3a8(0x10)
	float FogDensity; // 0x3b8(0x04)
	float Emissive_Intensity; // 0x3bc(0x04)
	float WindSpeedX; // 0x3c0(0x04)
	float WindSpeedY; // 0x3c4(0x04)
	float WindNoiseTilling; // 0x3c8(0x04)
	float WindNoiseContrast; // 0x3cc(0x04)
	struct UTexture* BaseColorMap; // 0x3d0(0x08)
	struct UTexture* Opacit_Map; // 0x3d8(0x08)
	struct UTexture* Normal_Map; // 0x3e0(0x08)
	float GeometryFade; // 0x3e8(0x04)
	float CameraFade; // 0x3ec(0x04)
	float NormalMapIntensity; // 0x3f0(0x04)
	float ViewAngleFade; // 0x3f4(0x04)
	bool CardVisibility; // 0x3f8(0x01)
	bool CubeVisibility; // 0x3f9(0x01)
	char pad_3FA[0x2]; // 0x3fa(0x02)
	float Emissive_IntensityCube; // 0x3fc(0x04)
	float CardFade; // 0x400(0x04)
	bool GlobalWind; // 0x404(0x01)

	void UserConstructionScript(); // Function BP_FogType.BP_FogType_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1f5675c00cd785
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
