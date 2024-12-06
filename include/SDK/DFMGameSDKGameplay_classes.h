
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMGameSDKGameplay.DFMGameGPMManager
// Size: 0xd0 (Inherited: 0x38)
class UDFMGameGPMManager : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnLevelLoad[0x10]; // 0x38(0x10)
	char pad_48[0x88]; // 0x48(0x88)

	void UploadMetaperfInfoToApm(); // Function DFMGameSDKGameplay.DFMGameGPMManager.UploadMetaperfInfoToApm // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
