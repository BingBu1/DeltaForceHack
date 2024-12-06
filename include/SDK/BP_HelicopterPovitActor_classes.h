
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_HelicopterPovitActor.BP_HelicopterPovitActor_C
// Size: 0x390 (Inherited: 0x378)
class ABP_HelicopterPovitActor_C : public AActor {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x380(0x08)
	bool BeginQuest; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	int32_t QuestID; // 0x38c(0x04)

	void ReceiveBeginPlay(); // Function BP_HelicopterPovitActor.BP_HelicopterPovitActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x26c0000001
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
