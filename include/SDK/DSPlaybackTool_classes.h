
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DSPlaybackTool.DSPlaybackManager
// Size: 0x178 (Inherited: 0x38)
class UDSPlaybackManager : public UGameInstanceSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	int32_t MaxUpdateNumPerFrame; // 0x40(0x04)
	int32_t MaxMemoryBufferSize; // 0x44(0x04)
	bool bDSEnablePlayback; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	uint32_t DefaultTotalSendNum; // 0x4c(0x04)
	uint32_t DefaultWaitSendNum; // 0x50(0x04)
	char pad_54[0x124]; // 0x54(0x124)

	struct UDSPlaybackManager* STATIC_Get(struct UObject* WorldContextObject); // Function DSPlaybackTool.DSPlaybackManager.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
