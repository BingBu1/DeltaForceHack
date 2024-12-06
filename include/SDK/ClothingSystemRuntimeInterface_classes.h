
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x30 (Inherited: 0x30)
class UClothConfigBase : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x50 (Inherited: 0x30)
class UClothingAssetBase : public UObject {
public:

	struct FString ImportedFilePath; // 0x30(0x10)
	struct FGuid AssetGuid; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x30 (Inherited: 0x30)
class UClothingSimulationFactory : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x38 (Inherited: 0x30)
class UClothingSimulationInteractor : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	void PhysicsAssetUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase
// Size: 0xe8 (Inherited: 0x30)
class UClothPhysicalMeshDataBase : public UObject {
public:

	struct TArray<struct FVector> Vertices; // 0x30(0x10)
	struct TArray<struct FVector> Normals; // 0x40(0x10)
	struct TArray<uint32_t> Indices; // 0x50(0x10)
	struct TArray<float> InverseMasses; // 0x60(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x70(0x10)
	int32_t NumFixedVerts; // 0x80(0x04)
	int32_t MaxBoneWeights; // 0x84(0x04)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x88(0x10)
	char pad_98[0x50]; // 0x98(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
