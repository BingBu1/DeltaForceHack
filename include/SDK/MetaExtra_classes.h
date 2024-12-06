
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MetaExtra.MTTestUObject3
// Size: 0x48 (Inherited: 0x30)
class UMTTestUObject3 : public UObject {
public:

	struct FString Nation; // 0x30(0x10)
	int64_t ZipCode; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaExtra.MTIOTestData3
// Size: 0x3f0 (Inherited: 0x30)
class UMTIOTestData3 : public UObject {
public:

	int8_t IntVal0; // 0x30(0x01)
	char pad_31[0x1]; // 0x31(0x01)
	int16_t IntVal1; // 0x32(0x02)
	int32_t IntVal2; // 0x34(0x04)
	int64_t IntVal3; // 0x38(0x08)
	char IntVal4; // 0x40(0x01)
	char pad_41[0x1]; // 0x41(0x01)
	uint16_t IntVal5; // 0x42(0x02)
	uint32_t IntVal6; // 0x44(0x04)
	uint64_t IntVal7; // 0x48(0x08)
	bool BoolVal0; // 0x50(0x01)
	bool BoolVal1; // 0x51(0x01)
	char BoolVal2 : 1; // 0x52(0x01)
	char BoolVal3 : 1; // 0x52(0x01)
	char pad_52_2 : 6; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	float FloatVal0; // 0x54(0x04)
	double FloatVal1; // 0x58(0x08)
	struct FVector Vec0; // 0x60(0x0c)
	struct FVector2D Vec1; // 0x6c(0x08)
	char pad_74[0xc]; // 0x74(0x0c)
	struct FVector4 Vec2; // 0x80(0x10)
	struct FQuat Quat; // 0x90(0x10)
	struct FTransform Trans; // 0xa0(0x30)
	struct FLinearColor Color; // 0xd0(0x10)
	struct FMatrix Mat; // 0xe0(0x40)
	struct FRotator Rot; // 0x120(0x0c)
	struct FBoxSphereBounds BoxSphereBounds; // 0x12c(0x1c)
	struct FOrientedBox OrientedBox; // 0x148(0x3c)
	/*struct FRay*/char Ray[0x18]; // 0x184(0x18)
	/*struct FSphere*/char Sphere[0x10]; // 0x19c(0x10)
	/*struct FCapsuleShape*/char CapsuleShape[0x20]; // 0x1ac(0x20)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct FPlane Plane; // 0x1d0(0x10)
	struct TArray<int64_t> IntArray; // 0x1e0(0x10)
	struct TArray<struct UObject*> UObjArray; // 0x1f0(0x10)
	struct TArray<struct UClass*> UObjSubClassArray; // 0x200(0x10)
	struct TMap<int64_t, int64_t> IntMap; // 0x210(0x50)
	struct TMap<int64_t, struct UObject*> UObjMap; // 0x260(0x50)
	struct TMap<int64_t, struct UClass*> UObjSubClassMap; // 0x2b0(0x50)
	/*struct TSet<int64_t>*/char IntSet[0x50]; // 0x300(0x50)
	/*struct TSet<struct UObject*>*/char UObjSet[0x50]; // 0x350(0x50)
	/*struct TSet<struct UClass*>*/char UObjSubClassSet[0x50]; // 0x3a0(0x50)

	void TriggerContainerPassTest(); // Function MetaExtra.MTIOTestData3.TriggerContainerPassTest // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaExtra.MTTestUObject1
// Size: 0x50 (Inherited: 0x30)
class UMTTestUObject1 : public UObject {
public:

	struct FString Name; // 0x30(0x10)
	int64_t ID; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaExtra.MTTestUObject2
// Size: 0x58 (Inherited: 0x50)
class UMTTestUObject2 : public UMTTestUObject1 {
public:

	enum class EMTTestEnum1 Evaluation; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
