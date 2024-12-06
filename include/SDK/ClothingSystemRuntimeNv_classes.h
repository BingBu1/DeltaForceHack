
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ClothingSystemRuntimeNv.ClothConfigNv
// Size: 0x108 (Inherited: 0x30)
class UClothConfigNv : public UClothConfigBase {
public:

	enum class EClothingWindMethod WindMethod; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FClothConstraintSetup VerticalConstraintConfig; // 0x34(0x10)
	struct FClothConstraintSetup HorizontalConstraintConfig; // 0x44(0x10)
	struct FClothConstraintSetup BendConstraintConfig; // 0x54(0x10)
	struct FClothConstraintSetup ShearConstraintConfig; // 0x64(0x10)
	float SelfCollisionRadius; // 0x74(0x04)
	float SelfCollisionStiffness; // 0x78(0x04)
	float SelfCollisionCullScale; // 0x7c(0x04)
	struct FVector Damping; // 0x80(0x0c)
	float Friction; // 0x8c(0x04)
	float WindDragCoefficient; // 0x90(0x04)
	float WindLiftCoefficient; // 0x94(0x04)
	struct FVector LinearDrag; // 0x98(0x0c)
	struct FVector AngularDrag; // 0xa4(0x0c)
	struct FVector LinearInertiaScale; // 0xb0(0x0c)
	struct FVector AngularInertiaScale; // 0xbc(0x0c)
	struct FVector CentrifugalInertiaScale; // 0xc8(0x0c)
	float SolverFrequency; // 0xd4(0x04)
	float StiffnessFrequency; // 0xd8(0x04)
	float GravityScale; // 0xdc(0x04)
	struct FVector GravityOverride; // 0xe0(0x0c)
	bool bUseGravityOverride; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float TetherStiffness; // 0xf0(0x04)
	float TetherLimit; // 0xf4(0x04)
	float CollisionThickness; // 0xf8(0x04)
	float AnimDriveSpringStiffness; // 0xfc(0x04)
	float AnimDriveDamperStiffness; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ClothingSystemRuntimeNv.ClothingAssetNv
// Size: 0x198 (Inherited: 0xb0)
class UClothingAssetNv : public UClothingAssetCommon {
public:

	struct FClothConfig ClothConfig; // 0xb0(0xd4)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct FClothLODData> LODData; // 0x188(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// Size: 0x30 (Inherited: 0x30)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// Size: 0x48 (Inherited: 0x38)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor {
public:

	char pad_38[0x10]; // 0x38(0x10)

	void SetAnimDriveSpringStiffness(float InStiffness); // Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ClothingSystemRuntimeNv.ClothLODDataNv
// Size: 0x98 (Inherited: 0x98)
class UClothLODDataNv : public UClothLODDataBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv
// Size: 0x128 (Inherited: 0xe8)
class UClothPhysicalMeshDataNv : public UClothPhysicalMeshDataBase {
public:

	struct TArray<float> MaxDistances; // 0xe8(0x10)
	struct TArray<float> BackstopDistances; // 0xf8(0x10)
	struct TArray<float> BackstopRadiuses; // 0x108(0x10)
	struct TArray<float> AnimDriveMultipliers; // 0x118(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
