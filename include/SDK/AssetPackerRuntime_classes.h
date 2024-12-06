
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AssetPackerRuntime.AssetPackerAssetStore
// Size: 0x30 (Inherited: 0x30)
class UAssetPackerAssetStore : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AssetPackerRuntime.AssetPackerPlaceHolderAsset
// Size: 0x38 (Inherited: 0x38)
class UAssetPackerPlaceHolderAsset : public UDataAsset {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AssetPackerRuntime.CustomAssetManager
// Size: 0x4b0 (Inherited: 0x4b0)
class UCustomAssetManager : public UAssetManager {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AssetPackerRuntime.RuntimeAssetLabel
// Size: 0x48 (Inherited: 0x38)
class URuntimeAssetLabel : public UDataAsset {
public:

	struct TArray<struct FName> PackageNames; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
