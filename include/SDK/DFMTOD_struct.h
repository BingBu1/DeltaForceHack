
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct DFMTOD.BlueprintAndOffset
// Size: 0x58 (Inherited: 0x00)
struct FBlueprintAndOffset {
public:

	/*struct TSoftObjectPtr<UBlueprint>*/char Blueprint[0x28]; // 0x00(0x28)
	struct FVector offset; // 0x28(0x0c)
	struct FVector Scale; // 0x34(0x0c)
	struct FRotator Rotator; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct AActor* BlueprintActor; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMTOD.MeshAndOffset
// Size: 0x58 (Inherited: 0x00)
struct FMeshAndOffset {
public:

	/*struct TSoftObjectPtr<UStaticMesh>*/char StaticMesh[0x28]; // 0x00(0x28)
	struct FVector offset; // 0x28(0x0c)
	struct FVector Scale; // 0x34(0x0c)
	struct FRotator Rotator; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UStaticMeshComponent* MeshComponent; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
