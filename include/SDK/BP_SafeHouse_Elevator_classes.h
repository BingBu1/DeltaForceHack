
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_SafeHouse_Elevator.BP_SafeHouse_Elevator_C
// Size: 0x5e8 (Inherited: 0x5c0)
class ABP_SafeHouse_Elevator_C : public ASOLRadarStationElevator {
public:

	struct UBoxComponent* ElevatorOverlapBox; // 0x5c0(0x08)
	struct UGameAkComponent* GameAk; // 0x5c8(0x08)
	struct UGPPathFollowComponent* GPPathFollow; // 0x5d0(0x08)
	struct USceneComponent* SharedRoot; // 0x5d8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x5e0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
