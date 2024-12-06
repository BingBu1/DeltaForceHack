
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct OpenWorldPhysicsStreaming.PhysXSerialActor
// Size: 0x30 (Inherited: 0x00)
struct FPhysXSerialActor {
public:

	uint32_t Flag; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FQuat Rotation; // 0x10(0x10)
	struct TArray<struct FPhysXSerialBodyInstance> Instances; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldPhysicsStreaming.PhysXSerialBodyInstance
// Size: 0xa0 (Inherited: 0x00)
struct FPhysXSerialBodyInstance {
public:

	uint32_t Flag; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Scaling; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0x30(0x08)
	struct UPhysXSerialBodySetup* BodySetup; // 0x38(0x08)
	struct TArray<struct UPhysXSerialBlendMask*> OverrideBlendMasks; // 0x40(0x10)
	struct TArray<int32_t> DisabledBlendMasks; // 0x50(0x10)
	struct TArray<char> OverrideFilterDataBytes; // 0x60(0x10)
	struct FName SourceInfo; // 0x70(0x08)
	char pad_78[0x28]; // 0x78(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
