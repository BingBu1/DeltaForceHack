
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_QuestDebugJumpComponent.BP_QuestDebugJumpComponent_C
// Size: 0x108 (Inherited: 0x100)
class UBP_QuestDebugJumpComponent_C : public UActorComponent {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)

	void GotoStage(int32_t QuestID, struct FString StageName); // Function BP_QuestDebugJumpComponent.BP_QuestDebugJumpComponent_C.GotoStage // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
