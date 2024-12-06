
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPPhysics.GPPhysicsSimulatableComponent
// Size: 0x100 (Inherited: 0x100)
class UGPPhysicsSimulatableComponent : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPPhysics.GPPhysics
// Size: 0x30 (Inherited: 0x30)
class UGPPhysics : public UObject {
public:


	bool STATIC_WeaponTraceSingle(struct UWorld* World, struct TArray<struct AActor*>& IgnoreActors, struct FVector& Start, struct FVector& End, bool IgnoreHidden, struct FHitResult& OutHitResult); // Function GPPhysics.GPPhysics.WeaponTraceSingle // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPPhysics.GPPhysicsContactModifiable
// Size: 0x30 (Inherited: 0x30)
class UGPPhysicsContactModifiable : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
