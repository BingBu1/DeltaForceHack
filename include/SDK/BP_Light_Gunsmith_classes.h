
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_Light_Gunsmith.BP_Light_Gunsmith_C
// Size: 0x3d0 (Inherited: 0x398)
class ABP_Light_Gunsmith_C : public ADFMLightGroup {
public:

	struct UDirectionalLightComponent* DirectionalLight; // 0x398(0x08)
	struct USpotLightComponent* SpotLight_Side; // 0x3a0(0x08)
	struct USpotLightComponent* SpotLight_Back; // 0x3a8(0x08)
	struct USpotLightComponent* SpotLight_keylight; // 0x3b0(0x08)
	struct USkyLightComponent* SkyLight_Gunsmith; // 0x3b8(0x08)
	struct URectLightComponent* RectLight_Top; // 0x3c0(0x08)
	struct USceneComponent* SharedRoot; // 0x3c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
