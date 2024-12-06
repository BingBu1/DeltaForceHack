
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMLocalization.DFMLocalizationIniConfig
// Size: 0x48 (Inherited: 0x30)
class UDFMLocalizationIniConfig : public UObject {
public:

	struct FSoftClassPath DFMLocalizationConfigPath; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLocalization.DFMLocalizationConfig
// Size: 0x80 (Inherited: 0x30)
class UDFMLocalizationConfig : public UObject {
public:

	struct TMap<struct FString, struct FAreaCultureSearchingData> CustomCultureSearchingChainMap; // 0x30(0x50)

	void RefreshCustomCultureRedirects(); // Function DFMLocalization.DFMLocalizationConfig.RefreshCustomCultureRedirects // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLocalization.DFMLocalizationManager
// Size: 0x80 (Inherited: 0x38)
class UDFMLocalizationManager : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnCultureChanged[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnTextCultureChanged[0x10]; // 0x48(0x10)
	struct FString FallbackCulture; // 0x58(0x10)
	struct UDFMLocalizationSettings* DFMLocalizationSettings; // 0x68(0x08)
	struct UBasePathConfig* LocalizeBasePath; // 0x70(0x08)
	struct UDFMLocalizationConfig* DFMLocalizationConfig; // 0x78(0x08)

	bool UpdateDisplayString(struct FString& SourceString, struct FString& NewString, struct FString& Namespace, struct FString& Key); // Function DFMLocalization.DFMLocalizationManager.UpdateDisplayString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLocalization.DFMLocalizationSettings
// Size: 0xb0 (Inherited: 0x30)
class UDFMLocalizationSettings : public UObject {
public:

	struct TArray<struct FString> LocalizedCultures; // 0x30(0x10)
	struct FString CurrentCulture; // 0x40(0x10)
	struct FString CurrentTextCulture; // 0x50(0x10)
	struct FString CurrentVoiceCulture; // 0x60(0x10)
	struct FString DefaultCulture; // 0x70(0x10)
	struct FString DefaultLanguage; // 0x80(0x10)
	bool bIsFirstOpen; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct FHotPatchVersionEntry> HotPatchVersion; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)

	void UpdateConfig(); // Function DFMLocalization.DFMLocalizationSettings.UpdateConfig // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLocalization.BasePathConfig
// Size: 0x88 (Inherited: 0x30)
class UBasePathConfig : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FString BaseRootPath; // 0x38(0x10)
	struct FString DefaultHotfixFile; // 0x48(0x10)
	struct FString DefaultServerDataFile; // 0x58(0x10)
	struct FString DefaultServerHotPatchFile; // 0x68(0x10)
	struct FString DefaultPufferLocPath; // 0x78(0x10)

	struct FString GetPufferLocPath(); // Function DFMLocalization.BasePathConfig.GetPufferLocPath // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLocalization.DFMTextFormatData
// Size: 0xb8 (Inherited: 0x30)
class UDFMTextFormatData : public UObject {
public:

	char pad_30[0x88]; // 0x30(0x88)

	void SetFormatText(struct FText& InText); // Function DFMLocalization.DFMTextFormatData.SetFormatText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLocalization.KismetLocalizationLibrary
// Size: 0x30 (Inherited: 0x30)
class UKismetLocalizationLibrary : public UBlueprintFunctionLibrary {
public:


	struct FString STATIC_Loc_NormalizeNumber2Str_Int64(int64_t InNum, struct FString InTargetCulture, int32_t MaximumFractionalDigits); // Function DFMLocalization.KismetLocalizationLibrary.Loc_NormalizeNumber2Str_Int64 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLocalization.LocalizeTimeConfigManager
// Size: 0x40 (Inherited: 0x38)
class ULocalizeTimeConfigManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLocalization.LocalizeNumberConfigManager
// Size: 0x1c8 (Inherited: 0x38)
class ULocalizeNumberConfigManager : public UGameInstanceSubsystem {
public:

	char pad_38[0x190]; // 0x38(0x190)

	void UpdateSeparatorStr(struct FString InCulture); // Function DFMLocalization.LocalizeNumberConfigManager.UpdateSeparatorStr // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLocalization.LocalizeCommonTextOutGameConfigManager
// Size: 0x58 (Inherited: 0x38)
class ULocalizeCommonTextOutGameConfigManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x20]; // 0x38(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLocalization.LocalizeCommonTextInGameConfigManager
// Size: 0x58 (Inherited: 0x38)
class ULocalizeCommonTextInGameConfigManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x20]; // 0x38(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
