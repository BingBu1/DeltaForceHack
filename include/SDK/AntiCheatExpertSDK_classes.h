
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AntiCheatExpertSDK.AntiCheatExpertSDKManager
// Size: 0x80 (Inherited: 0x38)
class UAntiCheatExpertSDKManager : public UGameInstanceSubsystem {
public:

	char pad_38[0x48]; // 0x38(0x48)

	void OnGetConnectResult(struct FConnectorResultInfo& ConnectResult); // Function AntiCheatExpertSDK.AntiCheatExpertSDKManager.OnGetConnectResult // (Final|Native|Private|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
