
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldHISM.BillboardBatchConfigRuntime
// Size: 0xf8 (Inherited: 0x38)
class UBillboardBatchConfigRuntime : public UDataAsset {
public:

	struct TMap<struct FString, int32_t> NameToParamID; // 0x38(0x50)
	struct TMap<struct FString, int32_t> NameToTypeID; // 0x88(0x50)
	struct TArray<struct FBillboardMIParamRuntime> ParamList; // 0xd8(0x10)
	struct TArray<struct FBillboardTransformParamRuntime> TransformList; // 0xe8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldHISM.OpenWorldBillboardBatchComponent
// Size: 0x4100 (Inherited: 0x7f0)
class UOpenWorldBillboardBatchComponent : public UStaticMeshComponent {
public:

	char pad_7F0[0x38f0]; // 0x7f0(0x38f0)
	struct FSoftObjectPath BillboardBatchConfigSoftPath; // 0x40e0(0x18)
	char pad_40F8[0x8]; // 0x40f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent
// Size: 0xab0 (Inherited: 0x7f0)
class UOpenWorldHierarchicalInstancedMeshComponent : public UStaticMeshComponent {
public:

	int32_t PerInstanceSMDataNum; // 0x7f0(0x04)
	char pad_7F4[0xac]; // 0x7f4(0xac)
	int32_t PerInstanceBillboardDataNum; // 0x8a0(0x04)
	char pad_8A4[0x164]; // 0x8a4(0x164)
	bool bUseFixedBounds; // 0xa08(0x01)
	char pad_A09[0x3]; // 0xa09(0x03)
	struct FBoxSphereBounds FixedBounds; // 0xa0c(0x1c)
	int32_t InstancingRandomSeed; // 0xa28(0x04)
	int32_t DesiredInstancesPerLeaf; // 0xa2c(0x04)
	int32_t MinVertsToSplitNode; // 0xa30(0x04)
	int32_t MinInstancesPerOcclusion; // 0xa34(0x04)
	bool bAutoRebuildTreeOnInstanceChanges; // 0xa38(0x01)
	char pad_A39[0x3]; // 0xa39(0x03)
	float DensityScalingFactor; // 0xa3c(0x04)
	float DensityScalingStart; // 0xa40(0x04)
	bool bEnableDitherLODPreCompute; // 0xa44(0x01)
	char pad_A45[0x6b]; // 0xa45(0x6b)

	void TestAddInstance(); // Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.TestAddInstance // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
