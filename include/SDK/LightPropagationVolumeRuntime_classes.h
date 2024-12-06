
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// Size: 0x80 (Inherited: 0x30)
class ULightPropagationVolumeBlendable : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FLightPropagationVolumeSettings Settings; // 0x38(0x40)
	float BlendWeight; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
