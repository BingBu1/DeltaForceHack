
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum AssetPackerRuntime.FAssetPackerAssetType
enum class FAssetPackerAssetType : int {
	UFS = 0,
	NonUFS = 1,
	FAssetPackerAssetType_MAX = 2
};

// Enum AssetPackerRuntime.EPackagingConfigurations
enum class EPackagingConfigurations : int {
	Shipping = 0,
	Test = 1,
	Deprecated = 2,
	EPackagingConfigurations_MAX = 3
};

// ScriptStruct AssetPackerRuntime.AssetPakerPakPolicyRow
// Size: 0x70 (Inherited: 0x08)
struct FAssetPakerPakPolicyRow : public FTableRowBase {
public:

	struct FName ID; // 0x08(0x08)
	struct FName Tag; // 0x10(0x08)
	struct FName Category; // 0x18(0x08)
	struct FSoftObjectPath DefaultPath; // 0x20(0x18)
	struct FString DefaultUFSPath; // 0x38(0x10)
	struct FString DefaultNonUFSPath; // 0x48(0x10)
	char bPure : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FName FallbackId; // 0x5c(0x08)
	enum class EPackagingConfigurations PublishType; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FName RowDescription; // 0x68(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetPackerRuntime.AssetPackerAssetInfoContainer
// Size: 0x10 (Inherited: 0x00)
struct FAssetPackerAssetInfoContainer {
public:

	struct TArray<struct FAssetPackerAssetInfo> AssetInfos; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetPackerRuntime.AssetPackerAssetInfo
// Size: 0xb8 (Inherited: 0x00)
struct FAssetPackerAssetInfo {
public:

	uint64_t ID; // 0x00(0x08)
	enum class FAssetPackerAssetType AssetType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString OriginObjectPath; // 0x10(0x10)
	struct FString LowQualityObjectPath; // 0x20(0x10)
	struct FString HighQualityObjectPath; // 0x30(0x10)
	struct FString ObjectPath_HD; // 0x40(0x10)
	struct FString LowQualityObjectPath_HD; // 0x50(0x10)
	struct FString HighQualityObjectPath_HD; // 0x60(0x10)
	struct TArray<struct FString> L10Ns; // 0x70(0x10)
	struct FName OriginRowName; // 0x80(0x08)
	struct FName OriginRowDesc; // 0x88(0x08)
	struct FString PropertyPath; // 0x90(0x10)
	struct FName PakCategory; // 0xa0(0x08)
	struct FName OriginModuleName; // 0xa8(0x08)
	struct FName TagName; // 0xb0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetPackerRuntime.AssetPakerCollectorConfigRow
// Size: 0x38 (Inherited: 0x08)
struct FAssetPakerCollectorConfigRow : public FTableRowBase {
public:

	/*struct TSoftObjectPtr<UDataTable>*/char PolicyTable[0x28]; // 0x08(0x28)
	struct FName RowDescription; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetPackerRuntime.AssetPackerSimpleCollectorConfigRow
// Size: 0x38 (Inherited: 0x08)
struct FAssetPackerSimpleCollectorConfigRow : public FTableRowBase {
public:

	/*struct TSoftObjectPtr<UDataTable>*/char PolicyTable[0x28]; // 0x08(0x28)
	struct FName RowDescription; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetPackerRuntime.AssetPakerCollectorDependencyTreeNodeRow
// Size: 0x50 (Inherited: 0x08)
struct FAssetPakerCollectorDependencyTreeNodeRow : public FTableRowBase {
public:

	struct FName ParentNodeName; // 0x08(0x08)
	struct FName ParentKeyFieldName; // 0x10(0x08)
	/*struct TSoftObjectPtr<UDataTable>*/char RefTable[0x28]; // 0x18(0x28)
	struct FName KeyFieldName; // 0x40(0x08)
	struct FName RowDescription; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetPackerRuntime.AssetPakerCollectorDependencyTreeNode
// Size: 0x38 (Inherited: 0x00)
struct FAssetPakerCollectorDependencyTreeNode {
public:

	char pad_0[0x20]; // 0x00(0x20)
	struct UDataTable* SourceTable; // 0x20(0x08)
	char pad_28[0x10]; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetPackerRuntime.AssetPakerPakItemRow
// Size: 0x50 (Inherited: 0x08)
struct FAssetPakerPakItemRow : public FTableRowBase {
public:

	struct FName ID; // 0x08(0x08)
	struct FName Name; // 0x10(0x08)
	struct FString ExplicitPaths; // 0x18(0x10)
	bool bApplyRecursively; // 0x28(0x01)
	enum class EPrimaryAssetPakRule PakRule; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FName ModuleName; // 0x2c(0x08)
	enum class EPrimaryAssetPakRule LitePakRule; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t Priority; // 0x38(0x04)
	struct FName ParentName; // 0x3c(0x08)
	bool bAlwaysCook; // 0x44(0x01)
	char PakRuleForAndroid; // 0x45(0x01)
	char PakRuleForIOS; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	struct FName RowDescription; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetPackerRuntime.AssetPakerDescRowBase
// Size: 0x10 (Inherited: 0x08)
struct FAssetPakerDescRowBase : public FTableRowBase {
public:

	struct FName RowDescription; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
