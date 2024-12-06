
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class CustomStats.CustomGameStats
// Size: 0xd0 (Inherited: 0x38)
class UCustomGameStats : public UGameInstanceSubsystem {
public:

	char pad_38[0x98]; // 0x38(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class CustomStats.GameStatsOnFetchBaseSystem
// Size: 0x58 (Inherited: 0x38)
class UGameStatsOnFetchBaseSystem : public UGameInstanceSubsystem {
public:

	char pad_38[0x20]; // 0x38(0x20)

	void StatsEvent(); // Function CustomStats.GameStatsOnFetchBaseSystem.StatsEvent // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
