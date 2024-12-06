
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ResourceLoadTracker.ResourceLoadTrackerProxy
// Size: 0xb8 (Inherited: 0x30)
class UResourceLoadTrackerProxy : public UObject {
public:

	char pad_30[0x88]; // 0x30(0x88)

	void OnProcessPreEnterGameFlowStage(enum class EGameFlowStageType GameFlowStage); // Function ResourceLoadTracker.ResourceLoadTrackerProxy.OnProcessPreEnterGameFlowStage // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
