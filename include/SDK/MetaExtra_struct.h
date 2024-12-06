
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum MetaExtra.EMTTestEnum1
enum class EMTTestEnum1 : int {
	Excellent = 0,
	Good = 1,
	Normal = 2,
	Underperformed = 3,
	Bad = 4,
	EMTTestEnum1_MAX = 5
};

// ScriptStruct MetaExtra.MTIOTestData2
// Size: 0x3c0 (Inherited: 0x00)
struct FMTIOTestData2 {
public:

	int8_t IntVal0; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	int16_t IntVal1; // 0x02(0x02)
	int32_t IntVal2; // 0x04(0x04)
	int64_t IntVal3; // 0x08(0x08)
	char IntVal4; // 0x10(0x01)
	char pad_11[0x1]; // 0x11(0x01)
	uint16_t IntVal5; // 0x12(0x02)
	uint32_t IntVal6; // 0x14(0x04)
	uint64_t IntVal7; // 0x18(0x08)
	bool BoolVal0; // 0x20(0x01)
	bool BoolVal1; // 0x21(0x01)
	char BoolVal2 : 1; // 0x22(0x01)
	char BoolVal3 : 1; // 0x22(0x01)
	char pad_22_2 : 6; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	float FloatVal0; // 0x24(0x04)
	double FloatVal1; // 0x28(0x08)
	struct FVector Vec0; // 0x30(0x0c)
	struct FVector2D Vec1; // 0x3c(0x08)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FVector4 Vec2; // 0x50(0x10)
	struct FQuat Quat; // 0x60(0x10)
	struct FTransform Trans; // 0x70(0x30)
	struct FLinearColor Color; // 0xa0(0x10)
	struct FMatrix Mat; // 0xb0(0x40)
	struct FRotator Rot; // 0xf0(0x0c)
	struct FBoxSphereBounds BoxSphereBounds; // 0xfc(0x1c)
	struct FOrientedBox OrientedBox; // 0x118(0x3c)
	/*struct FRay*/char Ray[0x18]; // 0x154(0x18)
	/*struct FSphere*/char Sphere[0x10]; // 0x16c(0x10)
	/*struct FCapsuleShape*/char CapsuleShape[0x20]; // 0x17c(0x20)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FPlane Plane; // 0x1a0(0x10)
	struct TArray<int64_t> IntArray; // 0x1b0(0x10)
	struct TArray<struct UObject*> UObjArray; // 0x1c0(0x10)
	struct TArray<struct UClass*> UObjSubClassArray; // 0x1d0(0x10)
	struct TMap<int64_t, int64_t> IntMap; // 0x1e0(0x50)
	struct TMap<int64_t, struct UObject*> UObjMap; // 0x230(0x50)
	struct TMap<int64_t, struct UClass*> UObjSubClassMap; // 0x280(0x50)
	/*struct TSet<int64_t>*/char IntSet[0x50]; // 0x2d0(0x50)
	/*struct TSet<struct UObject*>*/char UObjSet[0x50]; // 0x320(0x50)
	/*struct TSet<struct UClass*>*/char UObjSubClassSet[0x50]; // 0x370(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
