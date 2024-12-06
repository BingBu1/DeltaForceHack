
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMDeviceSettings.DFMDeviceFrameDataAsset
// Size: 0x98 (Inherited: 0x38)
class UDFMDeviceFrameDataAsset : public UDataAsset {
public:

	struct TArray<struct FString> BlackListFor90fps; // 0x38(0x10)
	struct TArray<struct FString> BlackListFor120fps; // 0x48(0x10)
	struct TArray<struct FString> BlackListFor144fps; // 0x58(0x10)
	struct TArray<struct FString> WhiteListFor90fps; // 0x68(0x10)
	struct TArray<struct FString> WhiteListFor120fps; // 0x78(0x10)
	struct TArray<struct FString> WhiteListFor144fps; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMDeviceSettings.DFMDeviceFrameSettings
// Size: 0x38 (Inherited: 0x30)
class UDFMDeviceFrameSettings : public UObject {
public:

	struct UDFMDeviceFrameDataAsset* DataAsset; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
