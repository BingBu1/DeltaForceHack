
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct AsyncTraceSystem.GPEndAyncTickFunction
// Size: 0x70 (Inherited: 0x60)
struct FGPEndAyncTickFunction : public FTickFunction {
public:

	struct UGPAsyncTraceSystem* AsyncTraceSubSystem; // 0x60(0x08)
	bool bRunInPostPhysics; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AsyncTraceSystem.GPStartAyncTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FGPStartAyncTickFunction : public FTickFunction {
public:

	struct UGPAsyncTraceSystem* AsyncTraceSubSystem; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AsyncTraceSystem.GPAyncPredictProjectilePathParams
// Size: 0x68 (Inherited: 0x00)
struct FGPAyncPredictProjectilePathParams {
public:

	struct FVector StartLocation; // 0x00(0x0c)
	struct FRotator StartRotation; // 0x0c(0x0c)
	struct FVector LaunchVelocity; // 0x18(0x0c)
	bool bTraceWithCollision; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float ProjectileRadius; // 0x28(0x04)
	float ProjectileHalfHeight; // 0x2c(0x04)
	float MaxSimTime; // 0x30(0x04)
	bool bTraceWithChannel; // 0x34(0x01)
	enum class ECollisionChannel TraceChannel; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	struct TArray<enum class ECollisionChannel> ObjectTypes; // 0x38(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x48(0x10)
	float SimFrequency; // 0x58(0x04)
	float OverrideGravityZ; // 0x5c(0x04)
	bool bTraceComplex; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t TraceMaskFilter; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AsyncTraceSystem.GPAysncTraceDataBase
// Size: 0x10 (Inherited: 0x00)
struct FGPAysncTraceDataBase {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AsyncTraceSystem.GPAysncPredictProjectilePathPointData
// Size: 0x1c (Inherited: 0x00)
struct FGPAysncPredictProjectilePathPointData {
public:

	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Time; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AsyncTraceSystem.GPAysncPredictProjectileData
// Size: 0x140 (Inherited: 0x10)
struct FGPAysncPredictProjectileData : public FGPAysncTraceDataBase {
public:

	char pad_10[0x130]; // 0x10(0x130)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AsyncTraceSystem.GPAysncPredictProjectilePathResult
// Size: 0xb8 (Inherited: 0x00)
struct FGPAysncPredictProjectilePathResult {
public:

	struct TArray<struct FGPAysncPredictProjectilePathPointData> PathData; // 0x00(0x10)
	struct FGPAysncPredictProjectilePathPointData LastTraceDestination; // 0x10(0x1c)
	struct FHitResult HitResult; // 0x2c(0x88)
	bool bBlockingHit; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
