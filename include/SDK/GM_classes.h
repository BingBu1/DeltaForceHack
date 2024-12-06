
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GM.CrashSightGameInfoCollectSys
// Size: 0x50 (Inherited: 0x38)
class UCrashSightGameInfoCollectSys : public UWorldSubsystem {
public:

	char pad_38[0x18]; // 0x38(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GM.PlayerGMComponentRaid
// Size: 0x570 (Inherited: 0x570)
class UPlayerGMComponentRaid : public UPlayerGMComponent {
public:


	void ServerSetBreakableActorHP(int32_t DesHP, struct AActor* Target, struct FName ActorsTag); // Function GM.PlayerGMComponentRaid.ServerSetBreakableActorHP // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
