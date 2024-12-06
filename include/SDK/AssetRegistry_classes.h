
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AssetRegistry.AssetRegistryImpl
// Size: 0x790 (Inherited: 0x30)
class UAssetRegistryImpl : public UObject {
public:

	char pad_30[0x760]; // 0x30(0x760)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AssetRegistry.AssetRegistryHelpers
// Size: 0x30 (Inherited: 0x30)
class UAssetRegistryHelpers : public UObject {
public:


	struct FSoftObjectPath STATIC_ToSoftObjectPath(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AssetRegistry.AssetRegistry
// Size: 0x30 (Inherited: 0x30)
class UAssetRegistry : public UInterface {
public:


	void UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AssetRegistry.CrossPlatformAssetInterface
// Size: 0x30 (Inherited: 0x30)
class UCrossPlatformAssetInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
