
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_VehicleLight_HD.BP_VehicleLight_HD_C
// Size: 0x3f8 (Inherited: 0x398)
class ABP_VehicleLight_HD_C : public ADFMLightGroup {
public:

	struct USpotLightComponent* Spot_04; // 0x398(0x08)
	struct UPointLightComponent* Point_02; // 0x3a0(0x08)
	struct URectLightComponent* Rect_03; // 0x3a8(0x08)
	struct URectLightComponent* Rect_02; // 0x3b0(0x08)
	struct URectLightComponent* Rect_01; // 0x3b8(0x08)
	struct USpotLightComponent* Spot_03; // 0x3c0(0x08)
	struct USpotLightComponent* Spot_02; // 0x3c8(0x08)
	struct USkyLightComponent* SkyLight; // 0x3d0(0x08)
	struct UPointLightComponent* Point_01; // 0x3d8(0x08)
	struct UDirectionalLightComponent* direct; // 0x3e0(0x08)
	struct USpotLightComponent* Spot_01; // 0x3e8(0x08)
	struct USceneComponent* SharedRoot; // 0x3f0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
