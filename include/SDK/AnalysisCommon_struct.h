
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum AnalysisCommon.EAssetType
enum class EAssetType : int {
	Texture2D = 0,
	TextureCube = 1,
	TextureRenderTarget2D = 2,
	LightMapTexture2D = 3,
	Texture2DArray = 4,
	VolumeTexture = 5,
	StaticMesh = 6,
	SkeletalMesh = 7,
	Material = 8,
	MaterialInstanceConstant = 9,
	MaterialInstanceDynamic = 10,
	ParticleSystem = 11,
	AnimSequence = 12,
	Max = 13
};

// Enum AnalysisCommon.ERenderPerformField
enum class ERenderPerformField : int {
	MeshDrawCalls = 0,
	ParticleDrawCalls = 1,
	RHITriangles = 2,
	SkelMeshTriangles = 3,
	StaticMeshTriangles = 4,
	CPUSkinVertices = 5,
	GPUSkinVertices = 6,
	MaxOrInvalid = 7,
	ERenderPerformField_MAX = 8
};

// Enum AnalysisCommon.ECPUPerformField
enum class ECPUPerformField : int {
	FrameTime = 0,
	TickTime = 1,
	EventWait = 2,
	WorldTickTime = 3,
	UpdateCameraTime = 4,
	MaxOrInvalid = 5,
	ECPUPerformField_MAX = 6
};

// Enum AnalysisCommon.EMemPerformField
enum class EMemPerformField : int {
	TextureMemory = 0,
	UsedPhysical = 1,
	UsedVirtual = 2,
	TotalSummaryLLM = 3,
	MeshesSummaryLLM = 4,
	TexturesSummaryLLM = 5,
	UObjectSummaryLLM = 6,
	AnimationSummaryLLM = 7,
	StaticMeshSummaryLLM = 8,
	MaterialsSummaryLLM = 9,
	ParticlesSummaryLLM = 10,
	UISummaryLLM = 11,
	MaxOrInvalid = 12,
	EMemPerformField_MAX = 13
};

// ScriptStruct AnalysisCommon.AnalysisServiceRequest
// Size: 0x04 (Inherited: 0x00)
struct FAnalysisServiceRequest {
public:

	uint32_t Request; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServiceObjRefs
// Size: 0x18 (Inherited: 0x00)
struct FAnalysisServiceObjRefs {
public:

	bool bRequestedOpenObjRefsState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString AssetRefsResultSavePath; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServicePreview
// Size: 0x01 (Inherited: 0x00)
struct FAnalysisServicePreview {
public:

	bool bRequestedPreviewState; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServiceCapture
// Size: 0x01 (Inherited: 0x00)
struct FAnalysisServiceCapture {
public:

	bool bRequestedCaptureState; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServiceUnsubscribe
// Size: 0x20 (Inherited: 0x00)
struct FAnalysisServiceUnsubscribe {
public:

	struct FGuid SessionId; // 0x00(0x10)
	struct FGuid instanceid; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServiceSubscribe
// Size: 0x20 (Inherited: 0x00)
struct FAnalysisServiceSubscribe {
public:

	struct FGuid SessionId; // 0x00(0x10)
	struct FGuid instanceid; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServiceClearAllData
// Size: 0x01 (Inherited: 0x00)
struct FAnalysisServiceClearAllData {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServicePong
// Size: 0x01 (Inherited: 0x00)
struct FAnalysisServicePong {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServicePing
// Size: 0x01 (Inherited: 0x00)
struct FAnalysisServicePing {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServiceFileChunk
// Size: 0x50 (Inherited: 0x00)
struct FAnalysisServiceFileChunk {
public:

	struct FGuid instanceid; // 0x00(0x10)
	struct FString Filename; // 0x10(0x10)
	struct FString HexData; // 0x20(0x10)
	struct TArray<char> Header; // 0x30(0x10)
	struct TArray<char> ChunkHash; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServicePreviewAck
// Size: 0x10 (Inherited: 0x00)
struct FAnalysisServicePreviewAck {
public:

	struct FGuid instanceid; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServiceData2
// Size: 0x30 (Inherited: 0x00)
struct FAnalysisServiceData2 {
public:

	struct FGuid instanceid; // 0x00(0x10)
	int64_t Frame; // 0x10(0x08)
	int32_t CompressedSize; // 0x18(0x04)
	int32_t UncompressedSize; // 0x1c(0x04)
	struct FString HexData; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnalysisCommon.AnalysisServiceAuthorize
// Size: 0x20 (Inherited: 0x00)
struct FAnalysisServiceAuthorize {
public:

	struct FGuid SessionId; // 0x00(0x10)
	struct FGuid instanceid; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
