
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_HallLight2.BP_HallLight2_C
// Size: 0x3d0 (Inherited: 0x398)
class ABP_HallLight2_C : public ADFMLightGroup {
public:

	struct USpotLightComponent* Spot_03; // 0x398(0x08)
	struct USpotLightComponent* Spot_02; // 0x3a0(0x08)
	struct USkyLightComponent* SkyLight; // 0x3a8(0x08)
	struct UPointLightComponent* LightComponent2; // 0x3b0(0x08)
	struct UDirectionalLightComponent* LightComponent1; // 0x3b8(0x08)
	struct USpotLightComponent* Spot_01; // 0x3c0(0x08)
	struct USceneComponent* SharedRoot; // 0x3c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
