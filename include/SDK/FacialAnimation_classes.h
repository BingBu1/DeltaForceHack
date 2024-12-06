
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class FacialAnimation.AudioCurveSourceComponent
// Size: 0x810 (Inherited: 0x7d0)
class UAudioCurveSourceComponent : public UAudioComponent {
public:

	char pad_7D0[0x8]; // 0x7d0(0x08)
	struct FName CurveSourceBindingName; // 0x7d8(0x08)
	float CurveSyncOffset; // 0x7e0(0x04)
	char pad_7E4[0x2c]; // 0x7e4(0x2c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
