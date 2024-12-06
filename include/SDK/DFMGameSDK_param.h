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
	struct Function_DFMGameSDK_BaseBackground_UpdateLoadingTips_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
	};

	struct Function_DFMGameSDK_CDNInfoManager_ResetInfo_Param
	{
	public:

	};

	struct Function_DFMGameSDK_CDNPathConfig_UpdateTimeStamp_Param
	{
	public:

		int64_t InNewTimestamp; // 0x00(0x08)
	};

	struct Function_DFMGameSDK_CommonTipView_SetShowText_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
	};

	struct Function_DFMGameSDK_DFMGameMaple_RequestQueryLeafInfo_Param
	{
	public:

		int32_t TreeId; // 0x00(0x04)
		int32_t LeafId; // 0x04(0x04)
	};

	struct Function_DFMGameSDK_DFMLocalizationCrashsightManager_ToggleInvalidKeyReport_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMGameSDK_GameIdcSelectorInterface_RoundTripDirRequest_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMGameSDK_GameSDKManager_UnloadWebBrowser_Param
	{
	public:

	};

	struct Function_DFMGameSDK_GameSDKStatics_RequestClientExit_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool bForce; // 0x08(0x01)
	};

	struct Function_DFMGameSDK_LitePackageWrapper_UnRegisterTgpaCallBack_Param
	{
	public:

	};

	struct Function_DFMGameSDK_LoginTipWidget_SetSpaceLimit_Param
	{
	public:

	};

	struct Function_DFMGameSDK_PufferInterface_UpdatePollCall_Param
	{
	public:

	};

	struct Function_DFMGameSDK_PufferModule_UpdatePollCall_Param
	{
	public:

	};

	struct Function_DFMGameSDK_QRCodeUtil_GenerateQRCode_Param
	{
	public:

		struct FString QRCodeName; // 0x00(0x10)
		struct FString str; // 0x10(0x10)
		int32_t Version; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct UObject* Outer; // 0x28(0x08)
		enum class EQRencodeMode QrencodeMode; // 0x30(0x01)
		enum class EQRecLevel QrecLevel; // 0x31(0x01)
		char pad_32[0x2]; // 0x32(0x02)
		int32_t casesensitive; // 0x34(0x04)
		struct FLinearColor Color1; // 0x38(0x10)
		struct FLinearColor color2; // 0x48(0x10)
		bool bSRGB; // 0x58(0x01)
		bool bUseAlpha; // 0x59(0x01)
		char pad_5A[0x6]; // 0x5a(0x06)
		struct UTexture2D* ReturnValue; // 0x60(0x08)
	};

	struct Function_DFMGameSDK_DFGameMatchReport_SetGameMode_Param
	{
	public:

		int32_t GameMode; // 0x00(0x04)
	};

	struct Function_DFMGameSDK_DFMCrashSight_SetUserId_Param
	{
	public:

		struct FString OpenId; // 0x00(0x10)
	};

	struct Function_DFMGameSDK_DFMGameAnnounce_LoadNoticeData_Param
	{
	public:

		struct FString NoticeGroup; // 0x00(0x10)
		struct FString Language; // 0x10(0x10)
		struct FString Region; // 0x20(0x10)
		struct FString Partition; // 0x30(0x10)
		struct FString extraJson; // 0x40(0x10)
		float CacheClearInterval; // 0x50(0x04)
		char pad_54[0x4]; // 0x54(0x04)
		struct FString ReturnValue; // 0x58(0x10)
	};

	struct Function_DFMGameSDK_DFMGameBrowser_SimpleOpenUrl_Param
	{
	public:

		struct FString URL; // 0x00(0x10)
	};

	struct Function_DFMGameSDK_DFMGameCentauri_ReapplyReceipt_Param
	{
	public:

	};

	struct Function_DFMGameSDK_DFMGameConnect_TestChar_Param
	{
	public:

		struct TMap<struct FString, struct FString> ntf; // 0x00(0x50)
	};

	struct Function_DFMGameSDK_DFMGameFriend_ShareLua_Param
	{
	public:

		struct FString Channel; // 0x00(0x10)
		int32_t Type; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString User; // 0x18(0x10)
		struct FString Title; // 0x28(0x10)
		struct FString Desc; // 0x38(0x10)
		struct FString link; // 0x48(0x10)
		struct FString thumbPath; // 0x58(0x10)
		struct FString mediaPath; // 0x68(0x10)
		struct FString extraJson; // 0x78(0x10)
		struct FString ImagePath; // 0x88(0x10)
	};

	struct Function_DFMGameSDK_DFMGameGPM_UpdateStoryStateGameInfo_Param
	{
	public:

		int32_t State; // 0x00(0x04)
	};

	struct Function_DFMGameSDK_DFMGameIdcSelector_SetUdpPlayerId_Param
	{
	public:

		struct FString _playerId; // 0x00(0x10)
	};

	struct Function_DFMGameSDK_DFMGameLBS_GetNearby_Param
	{
	public:

	};

	struct Function_DFMGameSDK_DFMGamelet_Tick_Param
	{
	public:

		float fDeltaTime; // 0x00(0x04)
	};

	struct Function_DFMGameSDK_DFMGameLogin_SwitchUser_Param
	{
	public:

		bool State; // 0x00(0x01)
	};

	struct Function_DFMGameSDK_DFMGameMidas_Reprovide_Param
	{
	public:

	};

	struct Function_DFMGameSDK_DFMGameNetBar_ReqNetBarLevel_Param
	{
	public:

		struct FString opneId; // 0x00(0x10)
		int32_t GameId; // 0x10(0x04)
		int32_t ZoneID; // 0x14(0x04)
		struct FString tickctBuffer; // 0x18(0x10)
	};

	struct Function_DFMGameSDK_DFMGameNotch_UpdateApplicationSafeZone_Param
	{
	public:

	};

	struct Function_DFMGameSDK_DFMGameOneSDK_SetOpenId_Param
	{
	public:

		struct FString OpenId; // 0x00(0x10)
	};

	struct Function_DFMGameSDK_DFMGamePlayerInfo_SetUsername_Param
	{
	public:

		struct FString userName; // 0x00(0x10)
	};

	struct Function_DFMGameSDK_DFMGameProtocol_OnStateChanged_Param
	{
	public:

		struct FConnectorResultInfo ConnectorResultInfo; // 0x00(0x50)
	};

	struct Function_DFMGameSDK_DFMGamePush_UnregisterPush_Param
	{
	public:

	};

	struct Function_DFMGameSDK_DFMGameReport_SetDeviceLevel_Param
	{
	public:

		int32_t Level; // 0x00(0x04)
	};

	struct Function_DFMGameSDK_DFMGameTDM_TDMReportFile_Param
	{
	public:

		struct FString fFilePath; // 0x00(0x10)
	};

	struct Function_DFMGameSDK_DFMGameTss_SetUserInfo_Param
	{
	public:

		int32_t entry_id; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString open_id; // 0x08(0x10)
	};

	struct Function_DFMGameSDK_DFMGameVoice_UploadRecordedFile_Param
	{
	public:

	};

	struct Function_DFMGameSDK_DolphinManager_PrepareDolphinConfig_Debug_Param
	{
	public:

	};

	struct Function_DFMGameSDK_PufferManager_StopDownload_Param
	{
	public:

		struct FString ModuleName; // 0x00(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
