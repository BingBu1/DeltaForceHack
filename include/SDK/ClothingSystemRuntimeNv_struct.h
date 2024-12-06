
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum ClothingSystemRuntimeNv.EClothingWindMethod
enum class EClothingWindMethod : int {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2
};

// Enum ClothingSystemRuntimeNv.MaskTarget_PhysMesh
enum class MaskTarget_PhysMesh : int {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	MaskTarget_MAX = 5
};

// ScriptStruct ClothingSystemRuntimeNv.ClothParameterMask_PhysMesh
// Size: 0x30 (Inherited: 0x00)
struct FClothParameterMask_PhysMesh {
public:

	struct FName MaskName; // 0x00(0x08)
	enum class MaskTarget_PhysMesh CurrentTarget; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxValue; // 0x0c(0x04)
	float MinValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> Values; // 0x18(0x10)
	bool bEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetup
// Size: 0x10 (Inherited: 0x00)
struct FClothConstraintSetup {
public:

	float Stiffness; // 0x00(0x04)
	float StiffnessMultiplier; // 0x04(0x04)
	float StretchLimit; // 0x08(0x04)
	float CompressionLimit; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ClothingSystemRuntimeNv.ClothPhysicalMeshData
// Size: 0xa8 (Inherited: 0x00)
struct FClothPhysicalMeshData {
public:

	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FVector> Normals; // 0x10(0x10)
	struct TArray<uint32_t> Indices; // 0x20(0x10)
	struct TArray<float> MaxDistances; // 0x30(0x10)
	struct TArray<float> BackstopDistances; // 0x40(0x10)
	struct TArray<float> BackstopRadiuses; // 0x50(0x10)
	struct TArray<float> AnimDriveMultipliers; // 0x60(0x10)
	struct TArray<float> InverseMasses; // 0x70(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x80(0x10)
	int32_t MaxBoneWeights; // 0x90(0x04)
	int32_t NumFixedVerts; // 0x94(0x04)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x98(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ClothingSystemRuntimeNv.ClothConfig
// Size: 0xd4 (Inherited: 0x00)
struct FClothConfig {
public:

	enum class EClothingWindMethod WindMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FClothConstraintSetup VerticalConstraintConfig; // 0x04(0x10)
	struct FClothConstraintSetup HorizontalConstraintConfig; // 0x14(0x10)
	struct FClothConstraintSetup BendConstraintConfig; // 0x24(0x10)
	struct FClothConstraintSetup ShearConstraintConfig; // 0x34(0x10)
	float SelfCollisionRadius; // 0x44(0x04)
	float SelfCollisionStiffness; // 0x48(0x04)
	float SelfCollisionCullScale; // 0x4c(0x04)
	struct FVector Damping; // 0x50(0x0c)
	float Friction; // 0x5c(0x04)
	float WindDragCoefficient; // 0x60(0x04)
	float WindLiftCoefficient; // 0x64(0x04)
	struct FVector LinearDrag; // 0x68(0x0c)
	struct FVector AngularDrag; // 0x74(0x0c)
	struct FVector LinearInertiaScale; // 0x80(0x0c)
	struct FVector AngularInertiaScale; // 0x8c(0x0c)
	struct FVector CentrifugalInertiaScale; // 0x98(0x0c)
	float SolverFrequency; // 0xa4(0x04)
	float StiffnessFrequency; // 0xa8(0x04)
	float GravityScale; // 0xac(0x04)
	struct FVector GravityOverride; // 0xb0(0x0c)
	bool bUseGravityOverride; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float TetherStiffness; // 0xc0(0x04)
	float TetherLimit; // 0xc4(0x04)
	float CollisionThickness; // 0xc8(0x04)
	float AnimDriveSpringStiffness; // 0xcc(0x04)
	float AnimDriveDamperStiffness; // 0xd0(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ClothingSystemRuntimeNv.ClothLODData
// Size: 0x108 (Inherited: 0x00)
struct FClothLODData {
public:

	struct FClothPhysicalMeshData PhysicalMeshData; // 0x00(0xa8)
	struct FClothCollisionData CollisionData; // 0xa8(0x40)
	char pad_E8[0x20]; // 0xe8(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
