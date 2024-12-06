
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass SOLHelicopterMovePath_Default.SOLHelicopterMovePath_Default_C
// Size: 0x3d0 (Inherited: 0x3a8)
class ASOLHelicopterMovePath_Default_C : public AEnterMovePath {
public:

	struct UArrowComponent* Arrow; // 0x3a8(0x08)
	struct UStaticMeshComponent* StartPoint; // 0x3b0(0x08)
	struct UStaticMeshComponent* TopPoint; // 0x3b8(0x08)
	struct UCurveFloat* FlyPercentAndTimeCurve; // 0x3c0(0x08)
	int32_t PathID; // 0x3c8(0x04)
	float PathTime; // 0x3cc(0x04)

	void GetSplinePercentByCurve(float Time, float& Percent); // Function SOLHelicopterMovePath_Default.SOLHelicopterMovePath_Default_C.GetSplinePercentByCurve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xfffffffec0000001
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
