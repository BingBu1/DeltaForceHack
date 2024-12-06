
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum UMGSplineArea.EUMGSplineAreaType
enum class EUMGSplineAreaType : int {
	Linear = 0,
	Curve = 1,
	EUMGSplineAreaType_MAX = 2
};

// ScriptStruct UMGSplineArea.UMGSplineAreaInfo
// Size: 0x50 (Inherited: 0x00)
struct FUMGSplineAreaInfo {
public:

	enum class EUMGSplineAreaType SplineType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Thickness; // 0x04(0x04)
	struct TArray<struct FUMGSplineAreaPoint> Points; // 0x08(0x10)
	struct TArray<struct FUMGSplineAreaPoint> TrianglePoints; // 0x18(0x10)
	bool bClosedLoop; // 0x28(0x01)
	bool bSplitLine; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FLinearColor TintColor; // 0x2c(0x10)
	struct FLinearColor AreaTintColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMGSplineArea.UMGSplineAreaPoint
// Size: 0x18 (Inherited: 0x00)
struct FUMGSplineAreaPoint {
public:

	struct FVector2D Location; // 0x00(0x08)
	struct FVector2D Direction; // 0x08(0x08)
	struct FVector2D UV; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
