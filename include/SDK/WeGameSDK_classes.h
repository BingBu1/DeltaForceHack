
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class WeGameSDK.WeGameSDKDelegates
// Size: 0x48 (Inherited: 0x38)
class UWeGameSDKDelegates : public UGameInstanceSubsystem {
public:

	char pad_38[0x10]; // 0x38(0x10)

	struct UWeGameSDKDelegates* STATIC_Get(struct UObject* GameContextObject); // Function WeGameSDK.WeGameSDKDelegates.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class WeGameSDK.WeGameSDKManager
// Size: 0x50 (Inherited: 0x38)
class UWeGameSDKManager : public UGameInstanceSubsystem {
public:

	char pad_38[0x18]; // 0x38(0x18)

	void TryAutoLogin(); // Function WeGameSDK.WeGameSDKManager.TryAutoLogin // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
