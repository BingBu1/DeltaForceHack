
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFHeightFogManager.DFHeightFogActor
// Size: 0x390 (Inherited: 0x378)
class ADFHeightFogActor : public AActor {
public:

	struct FName HeightFogName; // 0x378(0x08)
	/*struct FMulticastInlineDelegate*/char OnToggleActiveHeightFog[0x10]; // 0x380(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFHeightFogManager.DFHeightFogSubsystem
// Size: 0x88 (Inherited: 0x38)
class UDFHeightFogSubsystem : public UWorldSubsystem {
public:

	struct TMap<struct FName, struct ADFHeightFogActor*> ManagedHeightFogs; // 0x38(0x50)

	struct UDFHeightFogSubsystem* STATIC_Get(struct UObject* WorldContextObject); // Function DFHeightFogManager.DFHeightFogSubsystem.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
