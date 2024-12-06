
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class WmfMediaFactory.WmfMediaSettings
// Size: 0x38 (Inherited: 0x30)
class UWmfMediaSettings : public UObject {
public:

	bool AllowNonStandardCodecs; // 0x30(0x01)
	bool LowLatency; // 0x31(0x01)
	bool NativeAudioOut; // 0x32(0x01)
	bool HardwareAcceleratedVideoDecoding; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
