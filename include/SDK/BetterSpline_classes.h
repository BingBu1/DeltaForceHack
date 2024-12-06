
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class BetterSpline.BetterSplineSettings
// Size: 0x48 (Inherited: 0x40)
class UBetterSplineSettings : public UDeveloperSettings {
public:

	char bHideSubHandles : 1; // 0x40(0x01)
	char bShowParamSplineWhenEditingLandscape : 1; // 0x40(0x01)
	char bShowParamSplineOnlyWithPCGTool : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BetterSpline.ParamSplineComponent
// Size: 0x880 (Inherited: 0x650)
class UParamSplineComponent : public USplineComponent {
public:

	struct TMap<struct FString, float> SplineParameters; // 0x650(0x50)
	struct TMap<struct FString, struct FString> SplineStringParameters; // 0x6a0(0x50)
	struct TMap<struct FString, bool> SplineBooleanParameters; // 0x6f0(0x50)
	struct FParamSplineCurves ParamSplineCurves; // 0x740(0xb0)
	struct FParamSplinePointParameter DefaultSplinePointParameter; // 0x7f0(0x60)
	struct TArray<struct FString> ReplaceSections; // 0x850(0x10)
	bool bHasWidth; // 0x860(0x01)
	bool bHasDepth; // 0x861(0x01)
	bool bHasWidthFalloff; // 0x862(0x01)
	bool bAsymmetricWidth; // 0x863(0x01)
	bool bHasReplaceSection; // 0x864(0x01)
	bool bAutoSnap; // 0x865(0x01)
	char pad_866[0x2]; // 0x866(0x02)
	float SnapDistance; // 0x868(0x04)
	float DebugMeshGridSize; // 0x86c(0x04)
	float SplineResolution; // 0x870(0x04)
	enum class EParamCurveMode ForceSplineType; // 0x874(0x01)
	char pad_875[0xb]; // 0x875(0x0b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
