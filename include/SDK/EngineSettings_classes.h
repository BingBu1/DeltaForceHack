
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class EngineSettings.ConsoleSettings
// Size: 0x78 (Inherited: 0x30)
class UConsoleSettings : public UObject {
public:

	int32_t MaxScrollbackSize; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList; // 0x38(0x10)
	struct TArray<struct FString> AutoCompleteMapPaths; // 0x48(0x10)
	float BackgroundOpacityPercentage; // 0x58(0x04)
	bool bOrderTopToBottom; // 0x5c(0x01)
	bool bDisplayHelpInAutoComplete; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	struct FColor InputColor; // 0x60(0x04)
	struct FColor HistoryColor; // 0x64(0x04)
	struct FColor AutoCompleteCommandColor; // 0x68(0x04)
	struct FColor AutoCompleteCVarColor; // 0x6c(0x04)
	struct FColor AutoCompleteFadedColor; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class EngineSettings.GameMapsSettings
// Size: 0xf8 (Inherited: 0x30)
class UGameMapsSettings : public UObject {
public:

	struct FString LocalMapOptions; // 0x30(0x10)
	struct FSoftObjectPath TransitionMap; // 0x40(0x18)
	bool bUseSplitscreen; // 0x58(0x01)
	enum class ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; // 0x59(0x01)
	enum class EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout; // 0x5a(0x01)
	enum class EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x5b(0x01)
	bool bOffsetPlayerGamepadIds; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FSoftClassPath GameInstanceClass; // 0x60(0x18)
	struct FSoftObjectPath GameDefaultMap; // 0x78(0x18)
	struct FSoftObjectPath ServerDefaultMap; // 0x90(0x18)
	struct FSoftClassPath GlobalDefaultGameMode; // 0xa8(0x18)
	struct FSoftClassPath GlobalDefaultServerGameMode; // 0xc0(0x18)
	struct TArray<struct FGameModeName> GameModeMapPrefixes; // 0xd8(0x10)
	struct TArray<struct FGameModeName> GameModeClassAliases; // 0xe8(0x10)

	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer); // Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1 // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class EngineSettings.GameNetworkManagerSettings
// Size: 0x60 (Inherited: 0x30)
class UGameNetworkManagerSettings : public UObject {
public:

	int32_t MinDynamicBandwidth; // 0x30(0x04)
	int32_t MaxDynamicBandwidth; // 0x34(0x04)
	int32_t TotalNetBandwidth; // 0x38(0x04)
	int32_t BadPingThreshold; // 0x3c(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float StandbyRxCheatTime; // 0x44(0x04)
	float StandbyTxCheatTime; // 0x48(0x04)
	float PercentMissingForRxStandby; // 0x4c(0x04)
	float PercentMissingForTxStandby; // 0x50(0x04)
	float PercentForBadPing; // 0x54(0x04)
	float JoinInProgressStandbyWaitTime; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class EngineSettings.GameSessionSettings
// Size: 0x40 (Inherited: 0x30)
class UGameSessionSettings : public UObject {
public:

	int32_t MaxSpectators; // 0x30(0x04)
	int32_t MaxPlayers; // 0x34(0x04)
	char bRequiresPushToTalk : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class EngineSettings.GeneralEngineSettings
// Size: 0x30 (Inherited: 0x30)
class UGeneralEngineSettings : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class EngineSettings.GeneralProjectSettings
// Size: 0x120 (Inherited: 0x30)
class UGeneralProjectSettings : public UObject {
public:

	struct FString CompanyName; // 0x30(0x10)
	struct FString CompanyDistinguishedName; // 0x40(0x10)
	struct FString CopyrightNotice; // 0x50(0x10)
	struct FString Description; // 0x60(0x10)
	struct FString Homepage; // 0x70(0x10)
	struct FString LicensingTerms; // 0x80(0x10)
	struct FString PrivacyPolicy; // 0x90(0x10)
	struct FGuid ProjectID; // 0xa0(0x10)
	struct FString ProjectName; // 0xb0(0x10)
	struct FString ProjectVersion; // 0xc0(0x10)
	struct FString SupportContact; // 0xd0(0x10)
	struct FText ProjectDisplayedTitle; // 0xe0(0x18)
	struct FText ProjectDebugTitleInfo; // 0xf8(0x18)
	bool bShouldWindowPreserveAspectRatio; // 0x110(0x01)
	bool bUseBorderlessWindow; // 0x111(0x01)
	bool bStartInVR; // 0x112(0x01)
	bool bStartInAR; // 0x113(0x01)
	bool bSupportAR; // 0x114(0x01)
	bool bAllowWindowResize; // 0x115(0x01)
	bool bAllowClose; // 0x116(0x01)
	bool bAllowMaximize; // 0x117(0x01)
	bool bAllowMinimize; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class EngineSettings.HudSettings
// Size: 0x48 (Inherited: 0x30)
class UHudSettings : public UObject {
public:

	char bShowHUD : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FName> DebugDisplay; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
