
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class SkeletalMeshMergeRuntime.SkeletalMeshMergeRuntimeSubsystem
// Size: 0x1a8 (Inherited: 0x38)
class USkeletalMeshMergeRuntimeSubsystem : public UWorldSubsystem {
public:

	char pad_38[0xd0]; // 0x38(0xd0)
	struct TMap<struct URuntimeSkeletalMesh*, struct FSkeletalMeshes> RuntimeSkeletalMeshes; // 0x108(0x50)
	struct TMap<struct URuntimeSkeletalMesh*, struct FTextureMergeStructInfo> RuntimeSkeMeshTextureMergeInfos; // 0x158(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
