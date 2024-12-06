
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum PrefabricatorRuntime.EPrefabricatorPivotPosition
enum class EPrefabricatorPivotPosition : int {
	ExtremeLeft = 0,
	ExtremeRight = 1,
	Center = 2,
	EPrefabricatorPivotPosition_MAX = 3
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorAssetCollectionItem
// Size: 0x30 (Inherited: 0x00)
struct FPrefabricatorAssetCollectionItem {
public:

	/*struct TSoftObjectPtr<UPrefabricatorAsset>*/char PrefabAsset[0x28]; // 0x00(0x28)
	float Weight; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorActorData
// Size: 0x90 (Inherited: 0x00)
struct FPrefabricatorActorData {
public:

	struct FGuid PrefabItemID; // 0x00(0x10)
	struct FTransform RelativeTransform; // 0x10(0x30)
	struct FString ClassPath; // 0x40(0x10)
	struct FSoftClassPath ClassPathRef; // 0x50(0x18)
	struct TArray<struct UPrefabricatorProperty*> Properties; // 0x68(0x10)
	struct TArray<struct FPrefabricatorComponentData> Components; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorComponentData
// Size: 0x50 (Inherited: 0x00)
struct FPrefabricatorComponentData {
public:

	struct FTransform RelativeTransform; // 0x00(0x30)
	struct FString ComponentName; // 0x30(0x10)
	struct TArray<struct UPrefabricatorProperty*> Properties; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorPropertyAssetMapping
// Size: 0x38 (Inherited: 0x00)
struct FPrefabricatorPropertyAssetMapping {
public:

	struct FSoftObjectPath AssetReference; // 0x00(0x18)
	struct FString AssetClassName; // 0x18(0x10)
	struct FName AssetObjectPath; // 0x28(0x08)
	bool bUseQuotes; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
