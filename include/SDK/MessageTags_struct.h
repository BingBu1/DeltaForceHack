
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum MessageTags.EMessageTagQueryExprType
enum class EMessageTagQueryExprType : int {
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EMessageTagQueryExprType_MAX = 7
};

// Enum MessageTags.EMessageContainerMatchType
enum class EMessageContainerMatchType : int {
	Any = 0,
	All = 1,
	EMessageContainerMatchType_MAX = 2
};

// Enum MessageTags.EMessageTagMatchType
enum class EMessageTagMatchType : int {
	Explicit = 0,
	IncludeParentTags = 1,
	EMessageTagMatchType_MAX = 2
};

// Enum MessageTags.EMessageTagSelectionType
enum class EMessageTagSelectionType : int {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EMessageTagSelectionType_MAX = 4
};

// Enum MessageTags.EMessageTagSourceType
enum class EMessageTagSourceType : int {
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EMessageTagSourceType_MAX = 6
};

// ScriptStruct MessageTags.MessageTag
// Size: 0x08 (Inherited: 0x00)
struct FMessageTag {
public:

	struct FName TagName; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.MessageTagQuery
// Size: 0x48 (Inherited: 0x00)
struct FMessageTagQuery {
public:

	int32_t TokenStreamVersion; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMessageTag> TagDictionary; // 0x08(0x10)
	struct TArray<char> QueryTokenStream; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString AutoDescription; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.MessageTagCreationWidgetHelper
// Size: 0x01 (Inherited: 0x00)
struct FMessageTagCreationWidgetHelper {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.MessageTagReferenceHelper
// Size: 0x10 (Inherited: 0x00)
struct FMessageTagReferenceHelper {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.MessageTagContainer
// Size: 0x20 (Inherited: 0x00)
struct FMessageTagContainer {
public:

	struct TArray<struct FMessageTag> MessageTags; // 0x00(0x10)
	struct TArray<struct FMessageTag> ParentTags; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.MessageTagNode
// Size: 0x50 (Inherited: 0x00)
struct FMessageTagNode {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.MessageTagSource
// Size: 0x20 (Inherited: 0x00)
struct FMessageTagSource {
public:

	struct FName SourceName; // 0x00(0x08)
	enum class EMessageTagSourceType SourceType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UMessageTagsList* SourceTagList; // 0x10(0x08)
	struct URestrictedMessageTagsList* SourceRestrictedTagList; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.MessageParameter
// Size: 0x10 (Inherited: 0x00)
struct FMessageParameter {
public:

	struct FName Name; // 0x00(0x08)
	struct FName Type; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.RestrictedMessageCfg
// Size: 0x20 (Inherited: 0x00)
struct FRestrictedMessageCfg {
public:

	struct FString RestrictedConfigName; // 0x00(0x10)
	struct TArray<struct FString> Owners; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.MessageTagCategoryRemap
// Size: 0x20 (Inherited: 0x00)
struct FMessageTagCategoryRemap {
public:

	struct FString BaseCategory; // 0x00(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.MessageTagRedirect
// Size: 0x10 (Inherited: 0x00)
struct FMessageTagRedirect {
public:

	struct FName OldTagName; // 0x00(0x08)
	struct FName NewTagName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.MessageTagTableRow
// Size: 0x20 (Inherited: 0x08)
struct FMessageTagTableRow : public FTableRowBase {
public:

	struct FName Tag; // 0x08(0x08)
	struct FString DevComment; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MessageTags.RestrictedMessageTagTableRow
// Size: 0x28 (Inherited: 0x20)
struct FRestrictedMessageTagTableRow : public FMessageTagTableRow {
public:

	bool bAllowNonRestrictedChildren; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
