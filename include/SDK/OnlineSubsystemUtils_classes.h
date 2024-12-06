
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OnlineSubsystemUtils.IpConnection
// Size: 0x1de0 (Inherited: 0x1d80)
class UIpConnection : public UNetConnection {
public:

	char pad_1D80[0x50]; // 0x1d80(0x50)
	float SocketErrorDisconnectDelay; // 0x1dd0(0x04)
	char pad_1DD4[0xc]; // 0x1dd4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementId, bool& bFoundID, float& Progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x68 (Inherited: 0x30)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UAchievementQueryCallbackProxy* STATIC_CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x80 (Inherited: 0x30)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UConnectionCallbackProxy* STATIC_ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x98 (Inherited: 0x30)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UCreateSessionCallbackProxy* STATIC_CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UDestroySessionCallbackProxy* STATIC_DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x80 (Inherited: 0x30)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UEndMatchCallbackProxy* STATIC_EndMatch(/*struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome*/); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x78 (Inherited: 0x30)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UEndTurnCallbackProxy* STATIC_EndTurn(/*struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface*/); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x90 (Inherited: 0x30)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct FString STATIC_GetServerName(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x88 (Inherited: 0x30)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct UFindTurnBasedMatchCallbackProxy* STATIC_FindTurnBasedMatch(/*struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches*/); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x88 (Inherited: 0x30)
class UInAppPurchaseCallbackProxy : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x98 (Inherited: 0x30)
class UInAppPurchaseQueryCallbackProxy : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x98 (Inherited: 0x30)
class UInAppPurchaseRestoreCallbackProxy : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UInAppPurchaseRestoreCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x808 (Inherited: 0x7b8)
class UIpNetDriver : public UNetDriver {
public:

	char LogPortUnreach : 1; // 0x7b8(0x01)
	char AllowPlayerPortUnreach : 1; // 0x7b8(0x01)
	char pad_7B8_2 : 6; // 0x7b8(0x01)
	char pad_7B9[0x3]; // 0x7b9(0x03)
	uint32_t MaxPortCountToTry; // 0x7bc(0x04)
	char pad_7C0[0xc]; // 0x7c0(0x0c)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x7cc(0x04)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x7d0(0x04)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x7d4(0x04)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x7d8(0x04)
	char pad_7DC[0x4]; // 0x7dc(0x04)
	double MaxSecondsInReceive; // 0x7e0(0x08)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x7e8(0x04)
	char pad_7EC[0x1c]; // 0x7ec(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x130 (Inherited: 0x30)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0xe0]; // 0x50(0xe0)

	struct UJoinSessionCallbackProxy* STATIC_JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	bool STATIC_WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x70 (Inherited: 0x30)
class ULeaderboardFlushCallbackProxy : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0xa0 (Inherited: 0x30)
class ULeaderboardQueryCallbackProxy : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x70 (Inherited: 0x38)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)

	struct ULogoutCallbackProxy* STATIC_Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x130 (Inherited: 0x30)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface {
public:

	struct FName VoiceSubsystemNameOverride; // 0x30(0x08)
	char pad_38[0xf8]; // 0x38(0xf8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x58 (Inherited: 0x40)
class UOnlinePIESettings : public UDeveloperSettings {
public:

	bool bOnlinePIEEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x198 (Inherited: 0x30)
class UOnlineSessionClient : public UOnlineSession {
public:

	char pad_30[0x160]; // 0x30(0x160)
	bool bIsFromInvite; // 0x190(0x01)
	bool bHandlingDisconnect; // 0x191(0x01)
	char pad_192[0x6]; // 0x192(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0x80 (Inherited: 0x30)
class UPartyBeaconState : public UObject {
public:

	struct FName SessionName; // 0x30(0x08)
	int32_t NumConsumedReservations; // 0x38(0x04)
	int32_t MaxReservations; // 0x3c(0x04)
	int32_t NumTeams; // 0x40(0x04)
	int32_t NumPlayersPerTeam; // 0x44(0x04)
	struct FName TeamAssignmentMethod; // 0x48(0x08)
	int32_t ReservedHostTeamNum; // 0x50(0x04)
	int32_t ForceTeamNum; // 0x54(0x04)
	bool bRestrictCrossConsole; // 0x58(0x01)
	bool bEnableRemovalRequests; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct TArray<struct FPartyReservation> Reservations; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x78 (Inherited: 0x30)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UQuitMatchCallbackProxy* STATIC_QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x68 (Inherited: 0x38)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)

	struct UShowLoginUICallbackProxy* STATIC_ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x68 (Inherited: 0x30)
class USpectatorBeaconState : public UObject {
public:

	struct FName SessionName; // 0x30(0x08)
	int32_t NumConsumedReservations; // 0x38(0x04)
	int32_t MaxReservations; // 0x3c(0x04)
	bool bRestrictCrossConsole; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x700 (Inherited: 0x6d0)
class UVoipListenerSynthComponent : public USynthComponent {
public:

	char pad_6D0[0x30]; // 0x6d0(0x30)

	bool IsIdling(); // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x3a8 (Inherited: 0x378)
class AOnlineBeacon : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)
	float BeaconConnectionInitialTimeout; // 0x380(0x04)
	float BeaconConnectionTimeout; // 0x384(0x04)
	struct UNetDriver* NetDriver; // 0x388(0x08)
	char pad_390[0x18]; // 0x390(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x3a0 (Inherited: 0x378)
class AOnlineBeaconHostObject : public AActor {
public:

	struct FString BeaconTypeName; // 0x378(0x10)
	struct UClass* ClientBeaconActorClass; // 0x388(0x08)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x390(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x408 (Inherited: 0x3a8)
class AOnlineBeaconClient : public AOnlineBeacon {
public:

	struct AOnlineBeaconHostObject* BeaconOwner; // 0x3a8(0x08)
	struct UNetConnection* BeaconConnection; // 0x3b0(0x08)
	enum class EBeaconConnectionState ConnectionState; // 0x3b8(0x01)
	char pad_3B9[0x4f]; // 0x3b9(0x4f)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x460 (Inherited: 0x3a8)
class AOnlineBeaconHost : public AOnlineBeacon {
public:

	int32_t ListenPort; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x3b0(0x10)
	char pad_3C0[0xa0]; // 0x3c0(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x418 (Inherited: 0x3a0)
class APartyBeaconHost : public AOnlineBeaconHostObject {
public:

	struct UPartyBeaconState* State; // 0x3a0(0x08)
	char pad_3A8[0x60]; // 0x3a8(0x60)
	bool bLogoutOnSessionTimeout; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float SessionTimeoutSecs; // 0x40c(0x04)
	float TravelSessionTimeoutSecs; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x418 (Inherited: 0x3a0)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject {
public:

	struct USpectatorBeaconState* State; // 0x3a0(0x08)
	char pad_3A8[0x60]; // 0x3a8(0x60)
	bool bLogoutOnSessionTimeout; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float SessionTimeoutSecs; // 0x40c(0x04)
	float TravelSessionTimeoutSecs; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x3a0 (Inherited: 0x3a0)
class ATestBeaconHost : public AOnlineBeaconHostObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x4c8 (Inherited: 0x408)
class APartyBeaconClient : public AOnlineBeaconClient {
public:

	char pad_408[0x30]; // 0x408(0x30)
	struct FString DestSessionId; // 0x438(0x10)
	struct FPartyReservation PendingReservation; // 0x448(0x50)
	enum class EClientRequestType RequestType; // 0x498(0x01)
	bool bPendingReservationSent; // 0x499(0x01)
	bool bCancelReservation; // 0x49a(0x01)
	char pad_49B[0x2d]; // 0x49b(0x2d)

	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x4f0 (Inherited: 0x408)
class ASpectatorBeaconClient : public AOnlineBeaconClient {
public:

	char pad_408[0x30]; // 0x408(0x30)
	struct FString DestSessionId; // 0x438(0x10)
	struct FSpectatorReservation PendingReservation; // 0x448(0x78)
	enum class ESpectatorClientRequestType RequestType; // 0x4c0(0x01)
	bool bPendingReservationSent; // 0x4c1(0x01)
	bool bCancelReservation; // 0x4c2(0x01)
	char pad_4C3[0x2d]; // 0x4c3(0x2d)

	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x408 (Inherited: 0x408)
class ATestBeaconClient : public AOnlineBeaconClient {
public:


	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
