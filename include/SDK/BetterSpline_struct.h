
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum BetterSpline.EParamCurveMode
enum class EParamCurveMode : int {
	None = 0,
	Curve = 1,
	Linear = 2,
	Constant = 3,
	EParamCurveMode_MAX = 4
};

// ScriptStruct BetterSpline.ParamSplinePointParameter
// Size: 0x60 (Inherited: 0x00)
struct FParamSplinePointParameter {
public:

	float Width; // 0x00(0x04)
	float Depth; // 0x04(0x04)
	float WidthFalloff; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FString, float> CustomProperties; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BetterSpline.ParamSplineCurves
// Size: 0xb0 (Inherited: 0x00)
struct FParamSplineCurves {
public:

	struct FInterpCurveFloat Width; // 0x00(0x18)
	struct FInterpCurveFloat Depth; // 0x18(0x18)
	struct FInterpCurveFloat WidthFalloff; // 0x30(0x18)
	struct FInterpCurveFloat LeftWidth; // 0x48(0x18)
	struct TMap<struct FString, struct FInterpCurveFloat> CustomProperties; // 0x60(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BetterSpline.ParamSplineInstanceData
// Size: 0x2e8 (Inherited: 0x188)
struct FParamSplineInstanceData : public FSplineInstanceData {
public:

	struct FParamSplineCurves ParamSplineCurves; // 0x188(0xb0)
	struct FParamSplineCurves ParamSplineCurvesPreUCS; // 0x238(0xb0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
