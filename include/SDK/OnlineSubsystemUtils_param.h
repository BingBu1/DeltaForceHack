/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_OnlineSubsystemUtils_AchievementBlueprintLibrary_GetCachedAchievementProgress_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* PlayerController; // 0x08(0x08)
		struct FName AchievementId; // 0x10(0x08)
		bool bFoundID; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		float Progress; // 0x1c(0x04)
	};

	struct Function_OnlineSubsystemUtils_AchievementQueryCallbackProxy_CacheAchievements_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* PlayerController; // 0x08(0x08)
		struct UAchievementQueryCallbackProxy* ReturnValue; // 0x10(0x08)
	};

	struct Function_OnlineSubsystemUtils_AchievementWriteCallbackProxy_WriteAchievementProgress_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* PlayerController; // 0x08(0x08)
		struct FName AchievementName; // 0x10(0x08)
		float Progress; // 0x18(0x04)
		int32_t UserTag; // 0x1c(0x04)
		struct UAchievementWriteCallbackProxy* ReturnValue; // 0x20(0x08)
	};

	struct Function_OnlineSubsystemUtils_ConnectionCallbackProxy_ConnectToService_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* PlayerController; // 0x08(0x08)
		struct UConnectionCallbackProxy* ReturnValue; // 0x10(0x08)
	};

	struct Function_OnlineSubsystemUtils_CreateSessionCallbackProxy_CreateSession_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* PlayerController; // 0x08(0x08)
		int32_t PublicConnections; // 0x10(0x04)
		bool bUseLAN; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		struct UCreateSessionCallbackProxy* ReturnValue; // 0x18(0x08)
	};

	struct Function_OnlineSubsystemUtils_DestroySessionCallbackProxy_DestroySession_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* PlayerController; // 0x08(0x08)
		struct UDestroySessionCallbackProxy* ReturnValue; // 0x10(0x08)
	};

	struct Function_OnlineSubsystemUtils_EndMatchCallbackProxy_EndMatch_Param
	{
	public:

	};

	struct Function_OnlineSubsystemUtils_EndTurnCallbackProxy_EndTurn_Param
	{
	public:

	};

	struct Function_OnlineSubsystemUtils_FindSessionsCallbackProxy_GetServerName_Param
	{
	public:

		struct FBlueprintSessionResult Result; // 0x00(0xb8)
		struct FString ReturnValue; // 0xb8(0x10)
	};

	struct Function_OnlineSubsystemUtils_FindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Param
	{
	public:

	};

	struct Function_OnlineSubsystemUtils_InAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Param
	{
	public:

		struct APlayerController* PlayerController; // 0x00(0x08)
		struct FInAppPurchaseProductRequest ProductRequest; // 0x08(0x18)
		struct UInAppPurchaseCallbackProxy* ReturnValue; // 0x20(0x08)
	};

	struct Function_OnlineSubsystemUtils_InAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Param
	{
	public:

		struct APlayerController* PlayerController; // 0x00(0x08)
		struct TArray<struct FString> ProductIdentifiers; // 0x08(0x10)
		struct UInAppPurchaseQueryCallbackProxy* ReturnValue; // 0x18(0x08)
	};

	struct Function_OnlineSubsystemUtils_InAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Param
	{
	public:

		struct TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags; // 0x00(0x10)
		struct APlayerController* PlayerController; // 0x10(0x08)
		struct UInAppPurchaseRestoreCallbackProxy* ReturnValue; // 0x18(0x08)
	};

	struct Function_OnlineSubsystemUtils_JoinSessionCallbackProxy_JoinSession_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* PlayerController; // 0x08(0x08)
		struct FBlueprintSessionResult SearchResult; // 0x10(0xb8)
		struct UJoinSessionCallbackProxy* ReturnValue; // 0xc8(0x08)
	};

	struct Function_OnlineSubsystemUtils_LeaderboardBlueprintLibrary_WriteLeaderboardInteger_Param
	{
	public:

		struct APlayerController* PlayerController; // 0x00(0x08)
		struct FName StatName; // 0x08(0x08)
		int32_t StatValue; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_OnlineSubsystemUtils_LeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Param
	{
	public:

		struct APlayerController* PlayerController; // 0x00(0x08)
		struct FName SessionName; // 0x08(0x08)
		struct ULeaderboardFlushCallbackProxy* ReturnValue; // 0x10(0x08)
	};

	struct Function_OnlineSubsystemUtils_LeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Param
	{
	public:

		struct APlayerController* PlayerController; // 0x00(0x08)
		struct FName StatName; // 0x08(0x08)
		struct ULeaderboardQueryCallbackProxy* ReturnValue; // 0x10(0x08)
	};

	struct Function_OnlineSubsystemUtils_LogoutCallbackProxy_Logout_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* PlayerController; // 0x08(0x08)
		struct ULogoutCallbackProxy* ReturnValue; // 0x10(0x08)
	};

	struct Function_OnlineSubsystemUtils_QuitMatchCallbackProxy_QuitMatch_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* PlayerController; // 0x08(0x08)
		struct FString MatchID; // 0x10(0x10)
		enum class EMPMatchOutcome Outcome; // 0x20(0x01)
		char pad_21[0x3]; // 0x21(0x03)
		int32_t TurnTimeoutInSeconds; // 0x24(0x04)
		struct UQuitMatchCallbackProxy* ReturnValue; // 0x28(0x08)
	};

	struct Function_OnlineSubsystemUtils_ShowLoginUICallbackProxy_ShowExternalLoginUI_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* InPlayerController; // 0x08(0x08)
		struct UShowLoginUICallbackProxy* ReturnValue; // 0x10(0x08)
	};

	struct Function_OnlineSubsystemUtils_TurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* PlayerController; // 0x08(0x08)
		struct UObject* Object; // 0x10(0x08)
	};

	struct Function_OnlineSubsystemUtils_VoipListenerSynthComponent_IsIdling_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_OnlineSubsystemUtils_OnlineBeaconClient_ClientOnConnected_Param
	{
	public:

	};

	struct Function_OnlineSubsystemUtils_PartyBeaconClient_ServerUpdateReservationRequest_Param
	{
	public:

		struct FString SessionId; // 0x00(0x10)
		struct FPartyReservation ReservationUpdate; // 0x10(0x50)
	};

	struct Function_OnlineSubsystemUtils_SpectatorBeaconClient_ServerReservationRequest_Param
	{
	public:

		struct FString SessionId; // 0x00(0x10)
		struct FSpectatorReservation Reservation; // 0x10(0x78)
	};

	struct Function_OnlineSubsystemUtils_TestBeaconClient_ServerPong_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
