
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_RaidDebugJumpComponent.BP_RaidDebugJumpComponent_C
// Size: 0x108 (Inherited: 0x100)
class UBP_RaidDebugJumpComponent_C : public UActorComponent {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)

	void GotoStage(int32_t QuestID, struct FString StageName); // Function BP_RaidDebugJumpComponent.BP_RaidDebugJumpComponent_C.GotoStage // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x41d7fffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
