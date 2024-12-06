
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C
// Size: 0xc0 (Inherited: 0x90)
class UBP_GFStage_LobbyToGame_C : public UGameFlowStage {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct TArray<struct FName> MP_LevelNames; // 0x98(0x10)
	bool bMPMode; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString PerfGearInGame; // 0xb0(0x10)

	void MarkLoadingLevel(struct FString URL); // Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.MarkLoadingLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
