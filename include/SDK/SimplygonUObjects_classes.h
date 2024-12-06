
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class SimplygonUObjects.SimplygonStandinPipeline
// Size: 0x68 (Inherited: 0x30)
class USimplygonStandinPipeline : public UObject {
public:

	struct FChartAggregatorSettings ChartAggregatorSettings; // 0x30(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.SimplygonPipeline
// Size: 0x30 (Inherited: 0x30)
class USimplygonPipeline : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.SimplygonMaterialCaster
// Size: 0x30 (Inherited: 0x30)
class USimplygonMaterialCaster : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.StandinNearPipeline
// Size: 0x228 (Inherited: 0x68)
class UStandinNearPipeline : public USimplygonStandinPipeline {
public:

	struct FAggregationPipelineSettings Settings; // 0x68(0x1c0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.StandinFarPipeline
// Size: 0x240 (Inherited: 0x68)
class UStandinFarPipeline : public USimplygonStandinPipeline {
public:

	struct FRemeshingPipelineSettings Settings; // 0x68(0x1d8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.BillboardCloudPipeline
// Size: 0x170 (Inherited: 0x68)
class UBillboardCloudPipeline : public USimplygonStandinPipeline {
public:

	struct FBillboardCloudPipelineSettings Settings; // 0x68(0x108)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.FlipbookPipeline
// Size: 0x130 (Inherited: 0x30)
class UFlipbookPipeline : public USimplygonPipeline {
public:

	struct FFlipbookPipelineSettings Settings; // 0x30(0x100)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.BillboardCloudVegetationPipeline
// Size: 0x138 (Inherited: 0x30)
class UBillboardCloudVegetationPipeline : public USimplygonPipeline {
public:

	struct FBillboardCloudVegetationPipelineSettings Settings; // 0x30(0x108)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.RemeshingPipeline
// Size: 0x208 (Inherited: 0x30)
class URemeshingPipeline : public USimplygonPipeline {
public:

	struct FRemeshingPipelineSettings Settings; // 0x30(0x1d8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.HighDensityMeshReductionPipeline
// Size: 0x60 (Inherited: 0x30)
class UHighDensityMeshReductionPipeline : public USimplygonPipeline {
public:

	struct FHighDensityMeshReductionPipelineSettings Settings; // 0x30(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.ReductionPipeline
// Size: 0x260 (Inherited: 0x30)
class UReductionPipeline : public USimplygonPipeline {
public:

	struct FReductionPipelineSettings Settings; // 0x30(0x230)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.AggregationPipeline
// Size: 0x1f0 (Inherited: 0x30)
class UAggregationPipeline : public USimplygonPipeline {
public:

	struct FAggregationPipelineSettings Settings; // 0x30(0x1c0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.SimplygonColorCaster
// Size: 0x60 (Inherited: 0x30)
class USimplygonColorCaster : public USimplygonMaterialCaster {
public:

	struct FColorCasterSettings ColorCasterSettings; // 0x30(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.SimplygonNormalCaster
// Size: 0x60 (Inherited: 0x30)
class USimplygonNormalCaster : public USimplygonMaterialCaster {
public:

	struct FNormalCasterSettings NormalCasterSettings; // 0x30(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.SimplygonOpacityCaster
// Size: 0x60 (Inherited: 0x30)
class USimplygonOpacityCaster : public USimplygonMaterialCaster {
public:

	struct FOpacityCasterSettings OpacityCasterSettings; // 0x30(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.SimplygonDisplacementCaster
// Size: 0x68 (Inherited: 0x30)
class USimplygonDisplacementCaster : public USimplygonMaterialCaster {
public:

	struct FDisplacementCasterSettings DisplacementCasterSettings; // 0x30(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.SimplygonAmbientOcclusionCaster
// Size: 0x70 (Inherited: 0x30)
class USimplygonAmbientOcclusionCaster : public USimplygonMaterialCaster {
public:

	struct FAmbientOcclusionCasterSettings AmbientOcclusionCasterSettings; // 0x30(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.SimplygonGeometryDataCaster
// Size: 0x90 (Inherited: 0x30)
class USimplygonGeometryDataCaster : public USimplygonMaterialCaster {
public:

	struct FGeometryDataCasterSettings GeometryDataCasterSettings; // 0x30(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.SimplygonVertexColorCaster
// Size: 0x78 (Inherited: 0x30)
class USimplygonVertexColorCaster : public USimplygonMaterialCaster {
public:

	struct FVertexColorCasterSettings VertexColorCasterSettings; // 0x30(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.SimplygonComputeCaster
// Size: 0x68 (Inherited: 0x30)
class USimplygonComputeCaster : public USimplygonMaterialCaster {
public:

	struct FComputeCasterSettings ComputeCasterSettings; // 0x30(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.BaseColorCaster
// Size: 0x60 (Inherited: 0x60)
class UBaseColorCaster : public USimplygonColorCaster {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.NormalCaster
// Size: 0x60 (Inherited: 0x60)
class UNormalCaster : public USimplygonNormalCaster {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.OpacityCaster
// Size: 0x60 (Inherited: 0x60)
class UOpacityCaster : public USimplygonOpacityCaster {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.OpacityMaskCaster
// Size: 0x60 (Inherited: 0x60)
class UOpacityMaskCaster : public USimplygonOpacityCaster {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.MetallicCaster
// Size: 0x60 (Inherited: 0x60)
class UMetallicCaster : public UBaseColorCaster {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.SpecualarCaster
// Size: 0x60 (Inherited: 0x60)
class USpecualarCaster : public UBaseColorCaster {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.RoughnessCaster
// Size: 0x60 (Inherited: 0x60)
class URoughnessCaster : public UBaseColorCaster {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.EmissiveCaster
// Size: 0x60 (Inherited: 0x60)
class UEmissiveCaster : public UBaseColorCaster {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SimplygonUObjects.AmbientOcclusionMaskCaster
// Size: 0x60 (Inherited: 0x60)
class UAmbientOcclusionMaskCaster : public UBaseColorCaster {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
