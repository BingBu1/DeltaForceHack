
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GeneKit.GeneKitActor
// Size: 0x380 (Inherited: 0x378)
class AGeneKitActor : public AActor {
public:

	struct UGeneKitComponent* GeneKit; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneKit.GeneKitAnchorDataConfig
// Size: 0x68 (Inherited: 0x30)
class UGeneKitAnchorDataConfig : public UObject {
public:

	struct TArray<struct FGeneKitAnchorData> GeneKitSocketDatas; // 0x30(0x10)
	struct TArray<struct FGeneKitAnchorData> GeneKitPluginDatas; // 0x40(0x10)
	struct TArray<uint64_t> AnchorDataConnectIds; // 0x50(0x10)
	bool IgnorePick; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneKit.GeneKitAssetCollection
// Size: 0x30 (Inherited: 0x30)
class UGeneKitAssetCollection : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneKit.GeneKitComponent
// Size: 0x330 (Inherited: 0x240)
class UGeneKitComponent : public USceneComponent {
public:

	struct TArray<struct UGeneKitComponent*> ChildrenGeneKitComponents; // 0x240(0x10)
	struct UGeneKitComponent* ParentGeneKitComponent; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)
	struct UGeneKitAnchorDataConfig* GeneKitAnchorDataConfig; // 0x260(0x08)
	char pad_268[0x80]; // 0x268(0x80)
	/*struct TSoftObjectPtr<UGeneKitAnchorDataConfig>*/char GeneKitConfigAsset[0x28]; // 0x2e8(0x28)
	char pad_310[0x20]; // 0x310(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneKit.GeneKitPluginSettings
// Size: 0x88 (Inherited: 0x30)
class UGeneKitPluginSettings : public UObject {
public:

	/*struct TSoftObjectPtr<USocketPluginAssets>*/char AnchorTagAssetReference[0x28]; // 0x30(0x28)
	/*struct TSoftObjectPtr<UGeneKitRuntimeAssets>*/char GeneKitRuntimeAssetReference[0x28]; // 0x58(0x28)
	bool OpenDebug; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneKit.GeneKitRuntimeAssets
// Size: 0x40 (Inherited: 0x30)
class UGeneKitRuntimeAssets : public UObject {
public:

	struct TArray<struct FGeneKitPrefabInfo> LstGeneKitAssets; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneKit.SocketPluginAssets
// Size: 0x60 (Inherited: 0x30)
class USocketPluginAssets : public UObject {
public:

	struct TArray<struct FGeneKitSocketTag> DefineGeneKitSocketTags; // 0x30(0x10)
	struct TArray<struct FGeneKitPluginTag> DefineGeneKitPluginTags; // 0x40(0x10)
	struct TArray<struct FGeneKitSocketPluginBind> SocketPluginBinds; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
