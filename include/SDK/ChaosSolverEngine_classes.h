
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0x108 (Inherited: 0x100)
class UChaosDebugDrawComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x30 (Inherited: 0x30)
class UChaosNotifyHandlerInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	struct FHitResult STATIC_ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x30 (Inherited: 0x30)
class UChaosSolver : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x400 (Inherited: 0x378)
class AChaosSolverActor : public AActor {
public:

	float TimeStepMultiplier; // 0x378(0x04)
	int32_t CollisionIterations; // 0x37c(0x04)
	int32_t PushOutIterations; // 0x380(0x04)
	int32_t PushOutPairIterations; // 0x384(0x04)
	float ClusterConnectionFactor; // 0x388(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x38c(0x01)
	bool DoGenerateCollisionData; // 0x38d(0x01)
	char pad_38E[0x2]; // 0x38e(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x390(0x10)
	bool DoGenerateBreakingData; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x3a4(0x10)
	bool DoGenerateTrailingData; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x3b8(0x10)
	bool bHasFloor; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	float FloorHeight; // 0x3cc(0x04)
	float MassScale; // 0x3d0(0x04)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x3d4(0x03)
	char pad_3D7[0x1]; // 0x3d7(0x01)
	struct UBillboardComponent* SpriteComponent; // 0x3d8(0x08)
	char pad_3E0[0x18]; // 0x3e0(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x3f8(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x60 (Inherited: 0x40)
class UChaosSolverSettings : public UDeveloperSettings {
public:

	char pad_40[0x8]; // 0x40(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0x108 (Inherited: 0x100)
class UChaosEventListenerComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x2c0 (Inherited: 0x108)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent {
public:

	char pad_108[0x110]; // 0x108(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x218(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x268(0x50)
	char pad_2B8[0x8]; // 0x2b8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
