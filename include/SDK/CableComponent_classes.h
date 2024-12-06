
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class CableComponent.CableActor
// Size: 0x380 (Inherited: 0x378)
class ACableActor : public AActor {
public:

	struct UCableComponent* CableComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class CableComponent.CableComponent
// Size: 0x760 (Inherited: 0x6c8)
class UCableComponent : public UMeshComponent {
public:

	bool bAttachStart; // 0x6c8(0x01)
	bool bAttachEnd; // 0x6c9(0x01)
	char pad_6CA[0x6]; // 0x6ca(0x06)
	struct FComponentReference AttachEndTo; // 0x6d0(0x28)
	struct FName AttachEndToSocketName; // 0x6f8(0x08)
	struct FVector EndLocation; // 0x700(0x0c)
	float CableLength; // 0x70c(0x04)
	int32_t NumSegments; // 0x710(0x04)
	float subStepTime; // 0x714(0x04)
	int32_t SolverIterations; // 0x718(0x04)
	bool bEnableStiffness; // 0x71c(0x01)
	bool bEnableCollision; // 0x71d(0x01)
	char pad_71E[0x2]; // 0x71e(0x02)
	float CollisionFriction; // 0x720(0x04)
	struct FVector CableForce; // 0x724(0x0c)
	float CableGravityScale; // 0x730(0x04)
	float CableWidth; // 0x734(0x04)
	int32_t NumSides; // 0x738(0x04)
	float TileMaterial; // 0x73c(0x04)
	char pad_740[0x20]; // 0x740(0x20)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
