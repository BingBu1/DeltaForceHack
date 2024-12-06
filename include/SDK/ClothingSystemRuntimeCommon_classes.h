
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// Size: 0x30 (Inherited: 0x30)
class UClothingAssetCustomData : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// Size: 0xb0 (Inherited: 0x50)
class UClothingAssetCommon : public UClothingAssetBase {
public:

	struct UPhysicsAsset* PhysicsAsset; // 0x50(0x08)
	struct UClothConfigBase* ClothSimConfig; // 0x58(0x08)
	struct TArray<struct UClothLODDataBase*> ClothLODData; // 0x60(0x10)
	struct TArray<int32_t> LodMap; // 0x70(0x10)
	struct TArray<struct FName> UsedBoneNames; // 0x80(0x10)
	struct TArray<int32_t> UsedBoneIndices; // 0x90(0x10)
	int32_t ReferenceBoneIndex; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UClothingAssetCustomData* CustomData; // 0xa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ClothingSystemRuntimeCommon.ClothLODDataBase
// Size: 0x98 (Inherited: 0x30)
class UClothLODDataBase : public UObject {
public:

	struct UClothPhysicalMeshDataBase* PhysicalMeshData; // 0x30(0x08)
	struct FClothCollisionData CollisionData; // 0x38(0x40)
	char pad_78[0x20]; // 0x78(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
