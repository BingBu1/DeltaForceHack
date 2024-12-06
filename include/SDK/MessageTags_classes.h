
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MessageTags.BlueprintMessageTagLibrary
// Size: 0x30 (Inherited: 0x30)
class UBlueprintMessageTagLibrary : public UBlueprintFunctionLibrary {
public:


	bool STATIC_RemoveMessageTag(struct FMessageTagContainer& TagContainer, struct FMessageTag Tag); // Function MessageTags.BlueprintMessageTagLibrary.RemoveMessageTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.MessageTagAssetInterface
// Size: 0x30 (Inherited: 0x30)
class UMessageTagAssetInterface : public UInterface {
public:


	bool HasMatchingMessageTag(struct FMessageTag TagToCheck); // Function MessageTags.MessageTagAssetInterface.HasMatchingMessageTag // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.EditableMessageTagQuery
// Size: 0xa0 (Inherited: 0x30)
class UEditableMessageTagQuery : public UObject {
public:

	struct FString UserDescription; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	struct UEditableMessageTagQueryExpression* RootExpression; // 0x50(0x08)
	struct FMessageTagQuery TagQueryExportText_Helper; // 0x58(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.MessageTagsManager
// Size: 0x1b8 (Inherited: 0x30)
class UMessageTagsManager : public UObject {
public:

	char pad_30[0x98]; // 0x30(0x98)
	struct TArray<struct FMessageTagSource> TagSources; // 0xc8(0x10)
	char pad_D8[0x80]; // 0xd8(0x80)
	struct TArray<struct UDataTable*> MessageTagTables; // 0x158(0x10)
	char pad_168[0x50]; // 0x168(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.RestrictedMessageTagsList
// Size: 0x50 (Inherited: 0x30)
class URestrictedMessageTagsList : public UObject {
public:

	struct FString ConfigFileName; // 0x30(0x10)
	struct TArray<struct FRestrictedMessageTagTableRow> RestrictedMessageTagList; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.MessageTagsDeveloperSettings
// Size: 0x40 (Inherited: 0x30)
class UMessageTagsDeveloperSettings : public UObject {
public:

	struct FString DeveloperConfigName; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.EditableMessageTagQueryExpression
// Size: 0x30 (Inherited: 0x30)
class UEditableMessageTagQueryExpression : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.MessageTagsList
// Size: 0x50 (Inherited: 0x30)
class UMessageTagsList : public UObject {
public:

	struct FString ConfigFileName; // 0x30(0x10)
	struct TArray<struct FMessageTagTableRow> MessageTagList; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.EditableMessageTagQueryExpression_AnyTagsMatch
// Size: 0x50 (Inherited: 0x30)
class UEditableMessageTagQueryExpression_AnyTagsMatch : public UEditableMessageTagQueryExpression {
public:

	struct FMessageTagContainer Tags; // 0x30(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.EditableMessageTagQueryExpression_AllTagsMatch
// Size: 0x50 (Inherited: 0x30)
class UEditableMessageTagQueryExpression_AllTagsMatch : public UEditableMessageTagQueryExpression {
public:

	struct FMessageTagContainer Tags; // 0x30(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.EditableMessageTagQueryExpression_NoTagsMatch
// Size: 0x50 (Inherited: 0x30)
class UEditableMessageTagQueryExpression_NoTagsMatch : public UEditableMessageTagQueryExpression {
public:

	struct FMessageTagContainer Tags; // 0x30(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.EditableMessageTagQueryExpression_AnyExprMatch
// Size: 0x40 (Inherited: 0x30)
class UEditableMessageTagQueryExpression_AnyExprMatch : public UEditableMessageTagQueryExpression {
public:

	struct TArray<struct UEditableMessageTagQueryExpression*> Expressions; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.EditableMessageTagQueryExpression_AllExprMatch
// Size: 0x40 (Inherited: 0x30)
class UEditableMessageTagQueryExpression_AllExprMatch : public UEditableMessageTagQueryExpression {
public:

	struct TArray<struct UEditableMessageTagQueryExpression*> Expressions; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.EditableMessageTagQueryExpression_NoExprMatch
// Size: 0x40 (Inherited: 0x30)
class UEditableMessageTagQueryExpression_NoExprMatch : public UEditableMessageTagQueryExpression {
public:

	struct TArray<struct UEditableMessageTagQueryExpression*> Expressions; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MessageTags.MessageTagsSettings
// Size: 0xc0 (Inherited: 0x50)
class UMessageTagsSettings : public UMessageTagsList {
public:

	bool ImportTagsFromConfig; // 0x50(0x01)
	bool WarnOnInvalidTags; // 0x51(0x01)
	bool FastReplication; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FString InvalidTagCharacters; // 0x58(0x10)
	struct TArray<struct FMessageTagCategoryRemap> CategoryRemapping; // 0x68(0x10)
	struct TArray<struct FSoftObjectPath> MessageTagTableList; // 0x78(0x10)
	struct TArray<struct FMessageTagRedirect> MessageTagRedirects; // 0x88(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x98(0x10)
	int32_t NumBitsForContainerSize; // 0xa8(0x04)
	int32_t NetIndexFirstBitSegment; // 0xac(0x04)
	struct TArray<struct FRestrictedMessageCfg> RestrictedConfigFiles; // 0xb0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
