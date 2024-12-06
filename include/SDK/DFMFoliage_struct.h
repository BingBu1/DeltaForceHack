
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMFoliage.EFoliageCollisionName
enum class EFoliageCollisionName : int {
	FoliageCollisionName_None = 0,
	FoliageCollisionName_AI = 1,
	FoliageCollisionName_Sound = 2,
	FoliageCollisionType_Max = 3,
	EFoliageCollisionName_MAX = 4
};

// Enum DFMFoliage.EFoliageCollisionType
enum class EFoliageCollisionType : int {
	FoliageCollisionType_BoundBox = 0,
	FoliageCollisionType_Voxel = 1,
	FoliageCollisionType_Max = 2
};

// ScriptStruct DFMFoliage.FoliageData
// Size: 0x90 (Inherited: 0x00)
struct FFoliageData {
public:

	struct FName Category; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FBox Box; // 0x40(0x1c)
	char pad_5C[0x4]; // 0x5c(0x04)
	/*struct TSoftObjectPtr<UStaticMesh>*/char FoliageMesh[0x28]; // 0x60(0x28)
	char pad_88[0x8]; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMFoliage.FoliageCollisionCategory
// Size: 0x58 (Inherited: 0x00)
struct FFoliageCollisionCategory {
public:

	struct FName Category; // 0x00(0x08)
	/*struct TSet<struct TSoftObjectPtr<UStaticMesh>>*/char ImportFoliageTypes[0x50]; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
