
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class StandinActor.StandInMeshActor
// Size: 0x380 (Inherited: 0x378)
class AStandInMeshActor : public AActor {
public:

	struct UStaticMeshComponent* StaticMeshComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class StandinActor.StandinProxyContainer
// Size: 0x40 (Inherited: 0x30)
class UStandinProxyContainer : public UObject {
public:

	struct TArray<struct FStandinProxyEntry> Standins; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
