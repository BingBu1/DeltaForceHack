
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct OpenWorldInstancedStaticMeshProxy.InstancedStaticMeshInstancedData
// Size: 0x30 (Inherited: 0x00)
struct FInstancedStaticMeshInstancedData {
public:

	struct FTransform Transform; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldInstancedStaticMeshProxy.ComponentProperties
// Size: 0x28 (Inherited: 0x00)
struct FComponentProperties {
public:

	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	bool bForceSkylightReflection; // 0x08(0x01)
	bool bCastShadow; // 0x09(0x01)
	bool bReceiveShadow; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct AReflectionCapture* ManuallySpecifyReflectionCapture; // 0x10(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldInstancedStaticMeshProxy.StreamingCommand
// Size: 0x0c (Inherited: 0x00)
struct FStreamingCommand {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldInstancedStaticMeshProxy.InstancedStaticMeshComponentData
// Size: 0x40 (Inherited: 0x00)
struct FInstancedStaticMeshComponentData {
public:

	struct UClass* ComponentClass; // 0x00(0x08)
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
	bool bHiddenInGame; // 0x10(0x01)
	bool bCustomPhysicsCreating; // 0x11(0x01)
	bool bOverrideCullScreenSize; // 0x12(0x01)
	bool bForceSkylightReflection; // 0x13(0x01)
	bool bCastShadow; // 0x14(0x01)
	bool bReceiveShadow; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float CullingScreenSize; // 0x18(0x04)
	struct FName CollisionProfile; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct AReflectionCapture* ManuallySpecifyReflectionCapture; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldInstancedStaticMeshProxy.InstancedStaticMeshProxy
// Size: 0x50 (Inherited: 0x00)
struct FInstancedStaticMeshProxy {
public:

	struct FInstancedStaticMeshComponentData ComponentData; // 0x00(0x40)
	struct TArray<struct FInstancedStaticMeshInstancedData> InstancedData; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
