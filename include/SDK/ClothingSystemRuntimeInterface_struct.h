
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// Size: 0x40 (Inherited: 0x00)
struct FClothCollisionData {
public:

	struct TArray<struct FClothCollisionPrim_Sphere> Spheres; // 0x00(0x10)
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10(0x10)
	struct TArray<struct FClothCollisionPrim_Convex> Convexes; // 0x20(0x10)
	struct TArray<struct FClothCollisionPrim_Box> Boxes; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// Size: 0x1c (Inherited: 0x00)
struct FClothCollisionPrim_Box {
public:

	int32_t BoneIndex; // 0x00(0x04)
	struct FVector LocalMin; // 0x04(0x0c)
	struct FVector LocalMax; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// Size: 0x18 (Inherited: 0x00)
struct FClothCollisionPrim_Convex {
public:

	struct TArray<struct FPlane> Planes; // 0x00(0x10)
	int32_t BoneIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// Size: 0x08 (Inherited: 0x00)
struct FClothCollisionPrim_SphereConnection {
public:

	int32_t SphereIndices[0x2]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// Size: 0x14 (Inherited: 0x00)
struct FClothCollisionPrim_Sphere {
public:

	int32_t BoneIndex; // 0x00(0x04)
	float radius; // 0x04(0x04)
	struct FVector LocalPosition; // 0x08(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
// Size: 0x34 (Inherited: 0x00)
struct FClothVertBoneData {
public:

	int32_t NumInfluences; // 0x00(0x04)
	uint16_t BoneIndices[0x8]; // 0x04(0x10)
	float BoneWeights[0x8]; // 0x14(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ClothingSystemRuntimeInterface.PointWeightMap
// Size: 0x28 (Inherited: 0x00)
struct FPointWeightMap {
public:

	struct FName Name; // 0x00(0x08)
	char CurrentTarget; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<float> Values; // 0x10(0x10)
	bool bEnabled; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
