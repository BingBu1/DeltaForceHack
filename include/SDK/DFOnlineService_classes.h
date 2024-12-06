
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFOnlineService.DFSteamServiceAgent
// Size: 0xf0 (Inherited: 0x38)
class UDFSteamServiceAgent : public UGameInstanceSubsystem {
public:

	char pad_38[0x90]; // 0x38(0x90)
	/*struct FMulticastInlineDelegate*/char OnGameJoinReceived[0x10]; // 0xc8(0x10)
	char pad_D8[0x18]; // 0xd8(0x18)

	void UninstallDLC(struct FString APPID); // Function DFOnlineService.DFSteamServiceAgent.UninstallDLC // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
