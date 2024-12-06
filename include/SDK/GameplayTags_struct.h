
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : int {
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EGameplayTagQueryExprType_MAX = 7
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : int {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : int {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2
};

// Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : int {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : int {
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EGameplayTagSourceType_MAX = 6
};

// ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagContainer {
public:

	struct TArray<struct FGameplayTag> GameplayTags; // 0x00(0x10)
	struct TArray<struct FGameplayTag> ParentTags; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameplayTags.GameplayTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayTag {
public:

	struct FName TagName; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x00)
struct FGameplayTagQuery {
public:

	int32_t TokenStreamVersion; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameplayTag> TagDictionary; // 0x08(0x10)
	struct TArray<char> QueryTokenStream; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString AutoDescription; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// Size: 0x01 (Inherited: 0x00)
struct FGameplayTagCreationWidgetHelper {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x10 (Inherited: 0x00)
struct FGameplayTagReferenceHelper {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameplayTags.GameplayTagNode
// Size: 0x50 (Inherited: 0x00)
struct FGameplayTagNode {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameplayTags.GameplayTagSource
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagSource {
public:

	struct FName SourceName; // 0x00(0x08)
	enum class EGameplayTagSourceType SourceType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UGameplayTagsList* SourceTagList; // 0x10(0x08)
	struct URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameplayTags.RestrictedConfigInfo
// Size: 0x20 (Inherited: 0x00)
struct FRestrictedConfigInfo {
public:

	struct FString RestrictedConfigName; // 0x00(0x10)
	struct TArray<struct FString> Owners; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagCategoryRemap {
public:

	struct FString BaseCategory; // 0x00(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameplayTags.GameplayTagRedirect
// Size: 0x10 (Inherited: 0x00)
struct FGameplayTagRedirect {
public:

	struct FName OldTagName; // 0x00(0x08)
	struct FName NewTagName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x20 (Inherited: 0x08)
struct FGameplayTagTableRow : public FTableRowBase {
public:

	struct FName Tag; // 0x08(0x08)
	struct FString DevComment; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// Size: 0x28 (Inherited: 0x20)
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow {
public:

	bool bAllowNonRestrictedChildren; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
