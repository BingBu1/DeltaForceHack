
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GeometryCache.GeometryCache
// Size: 0x70 (Inherited: 0x30)
class UGeometryCache : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
	int32_t StartFrame; // 0x68(0x04)
	int32_t EndFrame; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x380 (Inherited: 0x378)
class AGeometryCacheActor : public AActor {
public:

	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x378(0x08)

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0x720 (Inherited: 0x6c8)
class UGeometryCacheComponent : public UMeshComponent {
public:

	struct UGeometryCache* GeometryCache; // 0x6c8(0x08)
	bool bRunning; // 0x6d0(0x01)
	bool bLooping; // 0x6d1(0x01)
	char pad_6D2[0x2]; // 0x6d2(0x02)
	float StartTimeOffset; // 0x6d4(0x04)
	float PlaybackSpeed; // 0x6d8(0x04)
	int32_t NumTracks; // 0x6dc(0x04)
	float ElapsedTime; // 0x6e0(0x04)
	char pad_6E4[0x30]; // 0x6e4(0x30)
	float Duration; // 0x714(0x04)
	bool bManualTick; // 0x718(0x01)
	char pad_719[0x7]; // 0x719(0x07)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x40 (Inherited: 0x30)
class UGeometryCacheCodecBase : public UObject {
public:

	struct TArray<int32_t> TopologyRanges; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCache.GeometryCacheTrack
// Size: 0x60 (Inherited: 0x30)
class UGeometryCacheTrack : public UObject {
public:

	float Duration; // 0x30(0x04)
	char pad_34[0x2c]; // 0x34(0x2c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x48 (Inherited: 0x40)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase {
public:

	int32_t DummyProperty; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x48 (Inherited: 0x40)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase {
public:

	char pad_40[0x8]; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x88 (Inherited: 0x60)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack {
public:

	uint32_t NumMeshSamples; // 0x60(0x04)
	char pad_64[0x24]; // 0x64(0x24)

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0x190 (Inherited: 0x60)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack {
public:

	struct UGeometryCacheCodecBase* Codec; // 0x60(0x08)
	char pad_68[0x120]; // 0x68(0x120)
	float StartSampleTime; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x108 (Inherited: 0x60)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack {
public:

	char pad_60[0xa8]; // 0x60(0xa8)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x108 (Inherited: 0x60)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack {
public:

	char pad_60[0xa8]; // 0x60(0xa8)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
