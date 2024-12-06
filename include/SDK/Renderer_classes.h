
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class Renderer.PRTBufferAllocationSettings
// Size: 0x48 (Inherited: 0x30)
class UPRTBufferAllocationSettings : public UObject {
public:

	int32_t MinBufferSizeWithPool; // 0x30(0x04)
	float MaxBufferSizeWasteRatio; // 0x34(0x04)
	struct TArray<struct FPRTBufferAllocationBucketSetting> BucketSettings; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
