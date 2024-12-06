
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_GameMode_IrisSafehouse.BP_GameMode_IrisSafeHouse_C
// Size: 0x7e8 (Inherited: 0x7d0)
class ABP_GameMode_IrisSafeHouse_C : public AGameMode_SafeHouse {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UStartSpotAllocateComponent* StartSpotAllocate; // 0x7d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x7e0(0x08)

	void ReceiveBeginPlay(); // Function BP_GameMode_IrisSafehouse.BP_GameMode_IrisSafeHouse_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
