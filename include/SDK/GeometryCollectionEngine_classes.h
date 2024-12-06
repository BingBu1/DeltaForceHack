
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x470 (Inherited: 0x240)
class UChaosDestructionListener : public USceneComponent {
public:

	char bIsCollisionEventListeningEnabled : 1; // 0x240(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x240(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x240(0x01)
	char pad_240_3 : 5; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x244(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x25c(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x274(0x18)
	char pad_28C[0x4]; // 0x28c(0x04)
	/*struct TSet<struct AChaosSolverActor*>*/char ChaosSolverActors[0x50]; // 0x290(0x50)
	/*struct TSet<struct AGeometryCollectionActor*>*/char GeometryCollectionActors[0x50]; // 0x2e0(0x50)
	/*struct FMulticastInlineDelegate*/char OnCollisionEvents[0x10]; // 0x330(0x10)
	/*struct FMulticastInlineDelegate*/char OnBreakingEvents[0x10]; // 0x340(0x10)
	/*struct FMulticastInlineDelegate*/char OnTrailingEvents[0x10]; // 0x350(0x10)
	char pad_360[0x110]; // 0x360(0x110)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x388 (Inherited: 0x378)
class AGeometryCollectionActor : public AActor {
public:

	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x378(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x380(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x58 (Inherited: 0x30)
class UGeometryCollectionCache : public UObject {
public:

	struct FRecordedTransformTrack RecordedData; // 0x30(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x40(0x08)
	struct FGuid CompatibleCollectionState; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0xac0 (Inherited: 0x6c8)
class UGeometryCollectionComponent : public UMeshComponent {
public:

	char pad_6C8[0x8]; // 0x6c8(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x6d0(0x08)
	char pad_6D8[0xe0]; // 0x6d8(0xe0)
	struct UGeometryCollection* RestCollection; // 0x7b8(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x7c0(0x10)
	bool Simulating; // 0x7d0(0x01)
	char pad_7D1[0x7]; // 0x7d1(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x7d8(0x01)
	bool EnableClustering; // 0x7d9(0x01)
	char pad_7DA[0x2]; // 0x7da(0x02)
	int32_t ClusterGroupIndex; // 0x7dc(0x04)
	int32_t MaxClusterLevel; // 0x7e0(0x04)
	char pad_7E4[0x4]; // 0x7e4(0x04)
	struct TArray<float> DamageThreshold; // 0x7e8(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x7f8(0x01)
	char pad_7F9[0x3]; // 0x7f9(0x03)
	int32_t CollisionGroup; // 0x7fc(0x04)
	float CollisionSampleFraction; // 0x800(0x04)
	char pad_804[0x4]; // 0x804(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x808(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x810(0x01)
	char pad_811[0x3]; // 0x811(0x03)
	struct FVector InitialLinearVelocity; // 0x814(0x0c)
	struct FVector InitialAngularVelocity; // 0x820(0x0c)
	char pad_82C[0x4]; // 0x82c(0x04)
	struct FGeomComponentCacheParameters CacheParameters; // 0x830(0x50)
	/*struct FMulticastInlineDelegate*/char NotifyGeometryCollectionPhysicsStateChange[0x10]; // 0x880(0x10)
	/*struct FMulticastInlineDelegate*/char NotifyGeometryCollectionPhysicsLoadingStateChange[0x10]; // 0x890(0x10)
	char pad_8A0[0x18]; // 0x8a0(0x18)
	/*struct FMulticastInlineDelegate*/char OnChaosBreakEvent[0x10]; // 0x8b8(0x10)
	float DesiredCacheTime; // 0x8c8(0x04)
	bool CachePlayback; // 0x8cc(0x01)
	char pad_8CD[0x3]; // 0x8cd(0x03)
	/*struct FMulticastInlineDelegate*/char OnChaosPhysicsCollision[0x10]; // 0x8d0(0x10)
	bool bNotifyBreaks; // 0x8e0(0x01)
	bool bNotifyCollisions; // 0x8e1(0x01)
	char pad_8E2[0x1be]; // 0x8e2(0x1be)
	struct UBodySetup* DummyBodySetup; // 0xaa0(0x08)
	char pad_AA8[0x18]; // 0xaa8(0x18)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x460 (Inherited: 0x378)
class AGeometryCollectionDebugDrawActor : public AActor {
public:

	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x380(0x18)
	bool bDebugDrawWholeCollection; // 0x398(0x01)
	bool bDebugDrawHierarchy; // 0x399(0x01)
	bool bDebugDrawClustering; // 0x39a(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x39b(0x01)
	bool bShowRigidBodyId; // 0x39c(0x01)
	bool bShowRigidBodyCollision; // 0x39d(0x01)
	bool bCollisionAtOrigin; // 0x39e(0x01)
	bool bShowRigidBodyTransform; // 0x39f(0x01)
	bool bShowRigidBodyInertia; // 0x3a0(0x01)
	bool bShowRigidBodyVelocity; // 0x3a1(0x01)
	bool bShowRigidBodyForce; // 0x3a2(0x01)
	bool bShowRigidBodyInfos; // 0x3a3(0x01)
	bool bShowTransformIndex; // 0x3a4(0x01)
	bool bShowTransform; // 0x3a5(0x01)
	bool bShowParent; // 0x3a6(0x01)
	bool bShowLevel; // 0x3a7(0x01)
	bool bShowConnectivityEdges; // 0x3a8(0x01)
	bool bShowGeometryIndex; // 0x3a9(0x01)
	bool bShowGeometryTransform; // 0x3aa(0x01)
	bool bShowBoundingBox; // 0x3ab(0x01)
	bool bShowFaces; // 0x3ac(0x01)
	bool bShowFaceIndices; // 0x3ad(0x01)
	bool bShowFaceNormals; // 0x3ae(0x01)
	bool bShowSingleFace; // 0x3af(0x01)
	int32_t SingleFaceIndex; // 0x3b0(0x04)
	bool bShowVertices; // 0x3b4(0x01)
	bool bShowVertexIndices; // 0x3b5(0x01)
	bool bShowVertexNormals; // 0x3b6(0x01)
	bool bUseActiveVisualization; // 0x3b7(0x01)
	float PointThickness; // 0x3b8(0x04)
	float LineThickness; // 0x3bc(0x04)
	bool bTextShadow; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	float TextScale; // 0x3c4(0x04)
	float NormalScale; // 0x3c8(0x04)
	float AxisScale; // 0x3cc(0x04)
	float ArrowScale; // 0x3d0(0x04)
	struct FColor RigidBodyIdColor; // 0x3d4(0x04)
	float RigidBodyTransformScale; // 0x3d8(0x04)
	struct FColor RigidBodyCollisionColor; // 0x3dc(0x04)
	struct FColor RigidBodyInertiaColor; // 0x3e0(0x04)
	struct FColor RigidBodyVelocityColor; // 0x3e4(0x04)
	struct FColor RigidBodyForceColor; // 0x3e8(0x04)
	struct FColor RigidBodyInfoColor; // 0x3ec(0x04)
	struct FColor TransformIndexColor; // 0x3f0(0x04)
	float TransformScale; // 0x3f4(0x04)
	struct FColor LevelColor; // 0x3f8(0x04)
	struct FColor ParentColor; // 0x3fc(0x04)
	float ConnectivityEdgeThickness; // 0x400(0x04)
	struct FColor GeometryIndexColor; // 0x404(0x04)
	float GeometryTransformScale; // 0x408(0x04)
	struct FColor BoundingBoxColor; // 0x40c(0x04)
	struct FColor FaceColor; // 0x410(0x04)
	struct FColor FaceIndexColor; // 0x414(0x04)
	struct FColor FaceNormalColor; // 0x418(0x04)
	struct FColor SingleFaceColor; // 0x41c(0x04)
	struct FColor VertexColor; // 0x420(0x04)
	struct FColor VertexIndexColor; // 0x424(0x04)
	struct FColor VertexNormalColor; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x430(0x08)
	char pad_438[0x28]; // 0x438(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0x118 (Inherited: 0x100)
class UGeometryCollectionDebugDrawComponent : public UActorComponent {
public:

	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0x100(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0xd8 (Inherited: 0x30)
class UGeometryCollection : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x48(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t MinLevelSetResolution; // 0x4c(0x04)
	int32_t MaxLevelSetResolution; // 0x50(0x04)
	int32_t MinClusterLevelSetResolution; // 0x54(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x58(0x04)
	float CollisionObjectReductionPercentage; // 0x5c(0x04)
	bool bMassAsDensity; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Mass; // 0x64(0x04)
	float MinimumMassClamp; // 0x68(0x04)
	float CollisionParticlesFraction; // 0x6c(0x04)
	int32_t MaximumCollisionParticles; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x78(0x10)
	bool EnableRemovePiecesOnFracture; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x90(0x10)
	struct FGuid PersistentGuid; // 0xa0(0x10)
	struct FGuid StateGuid; // 0xb0(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xc0(0x04)
	char pad_C4[0x14]; // 0xc4(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x410 (Inherited: 0x378)
class AGeometryCollectionRenderLevelSetActor : public AActor {
public:

	struct UVolumeTexture* TargetVolumeTexture; // 0x378(0x08)
	struct UMaterial* RayMarchMaterial; // 0x380(0x08)
	float SurfaceTolerance; // 0x388(0x04)
	float Isovalue; // 0x38c(0x04)
	bool Enabled; // 0x390(0x01)
	bool RenderVolumeBoundingBox; // 0x391(0x01)
	char pad_392[0x7e]; // 0x392(0x7e)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x188 (Inherited: 0x100)
class USkeletalMeshSimulationComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x108(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x110(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0x118(0x08)
	bool bSimulating; // 0x120(0x01)
	bool bNotifyCollisions; // 0x121(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0x122(0x01)
	char pad_123[0x1]; // 0x123(0x01)
	float Density; // 0x124(0x04)
	float MinMass; // 0x128(0x04)
	float MaxMass; // 0x12c(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0x134(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0x138(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0x13c(0x04)
	int32_t MinLevelSetResolution; // 0x140(0x04)
	int32_t MaxLevelSetResolution; // 0x144(0x04)
	int32_t CollisionGroup; // 0x148(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	struct FVector InitialLinearVelocity; // 0x150(0x0c)
	struct FVector InitialAngularVelocity; // 0x15c(0x0c)
	/*struct FMulticastInlineDelegate*/char OnChaosPhysicsCollision[0x10]; // 0x168(0x10)
	char pad_178[0x10]; // 0x178(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x188 (Inherited: 0x100)
class UStaticMeshSimulationComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	bool Simulating; // 0x108(0x01)
	bool bNotifyCollisions; // 0x109(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0x10a(0x01)
	char pad_10B[0x1]; // 0x10b(0x01)
	float Mass; // 0x10c(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0x110(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	int32_t MinLevelSetResolution; // 0x114(0x04)
	int32_t MaxLevelSetResolution; // 0x118(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FVector InitialLinearVelocity; // 0x120(0x0c)
	struct FVector InitialAngularVelocity; // 0x12c(0x0c)
	float DamageThreshold; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x140(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x148(0x08)
	/*struct FMulticastInlineDelegate*/char OnChaosPhysicsCollision[0x10]; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x170(0x10)
	char pad_180[0x8]; // 0x180(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
