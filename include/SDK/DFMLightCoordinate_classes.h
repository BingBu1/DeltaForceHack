
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMLightCoordinate.DFMLightCoordinateSubsystem
// Size: 0x88 (Inherited: 0x38)
class UDFMLightCoordinateSubsystem : public UWorldSubsystem {
public:

	struct TMap<struct FName, struct ADFMLightGroup*> ManageredLightGroup; // 0x38(0x50)

	struct UDFMLightCoordinateSubsystem* STATIC_Get(struct UObject* WorldContextObject); // Function DFMLightCoordinate.DFMLightCoordinateSubsystem.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLightCoordinate.DFMLightGroup
// Size: 0x398 (Inherited: 0x378)
class ADFMLightGroup : public AActor {
public:

	struct FName LightGroupName; // 0x378(0x08)
	char pad_380[0x18]; // 0x380(0x18)

	void DeactivateLightGroup(); // Function DFMLightCoordinate.DFMLightGroup.DeactivateLightGroup // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
