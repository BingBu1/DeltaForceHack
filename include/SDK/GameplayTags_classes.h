
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x30 (Inherited: 0x30)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary {
public:


	bool STATIC_RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.GameplayTagAssetInterface
// Size: 0x30 (Inherited: 0x30)
class UGameplayTagAssetInterface : public UInterface {
public:


	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck); // Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.EditableGameplayTagQuery
// Size: 0xa0 (Inherited: 0x30)
class UEditableGameplayTagQuery : public UObject {
public:

	struct FString UserDescription; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	struct UEditableGameplayTagQueryExpression* RootExpression; // 0x50(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x58(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.GameplayTagsManager
// Size: 0x218 (Inherited: 0x30)
class UGameplayTagsManager : public UObject {
public:

	char pad_30[0x98]; // 0x30(0x98)
	struct TArray<struct FGameplayTagSource> TagSources; // 0xc8(0x10)
	char pad_D8[0xe0]; // 0xd8(0xe0)
	struct TArray<struct UDataTable*> GameplayTagTables; // 0x1b8(0x10)
	char pad_1C8[0x50]; // 0x1c8(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.RestrictedGameplayTagsList
// Size: 0x50 (Inherited: 0x30)
class URestrictedGameplayTagsList : public UObject {
public:

	struct FString ConfigFileName; // 0x30(0x10)
	struct TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x40 (Inherited: 0x30)
class UGameplayTagsDeveloperSettings : public UObject {
public:

	struct FString DeveloperConfigName; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.EditableGameplayTagQueryExpression
// Size: 0x30 (Inherited: 0x30)
class UEditableGameplayTagQueryExpression : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.GameplayTagsList
// Size: 0x50 (Inherited: 0x30)
class UGameplayTagsList : public UObject {
public:

	struct FString ConfigFileName; // 0x30(0x10)
	struct TArray<struct FGameplayTagTableRow> GameplayTagList; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Size: 0x50 (Inherited: 0x30)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression {
public:

	struct FGameplayTagContainer Tags; // 0x30(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Size: 0x50 (Inherited: 0x30)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression {
public:

	struct FGameplayTagContainer Tags; // 0x30(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Size: 0x50 (Inherited: 0x30)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression {
public:

	struct FGameplayTagContainer Tags; // 0x30(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Size: 0x40 (Inherited: 0x30)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression {
public:

	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Size: 0x40 (Inherited: 0x30)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression {
public:

	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Size: 0x40 (Inherited: 0x30)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression {
public:

	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xc0 (Inherited: 0x50)
class UGameplayTagsSettings : public UGameplayTagsList {
public:

	bool ImportTagsFromConfig; // 0x50(0x01)
	bool WarnOnInvalidTags; // 0x51(0x01)
	bool FastReplication; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FString InvalidTagCharacters; // 0x58(0x10)
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; // 0x68(0x10)
	struct TArray<struct FSoftObjectPath> GameplayTagTableList; // 0x78(0x10)
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects; // 0x88(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x98(0x10)
	int32_t NumBitsForContainerSize; // 0xa8(0x04)
	int32_t NetIndexFirstBitSegment; // 0xac(0x04)
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles; // 0xb0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
