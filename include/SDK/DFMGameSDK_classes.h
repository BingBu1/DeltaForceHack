
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMGameSDK.BaseBackground
// Size: 0x300 (Inherited: 0x298)
class UBaseBackground : public UUserWidget {
public:

	struct FName DefaultMovieRowName; // 0x298(0x08)
	struct UTextBlock* LoadingPercent_Text; // 0x2a0(0x08)
	struct UProgressBar* LoadingProgress; // 0x2a8(0x08)
	struct UTextBlock* LoadingLeftTime_Text; // 0x2b0(0x08)
	struct UTextBlock* LoadingTips_Text; // 0x2b8(0x08)
	struct FText DefaultPercentText; // 0x2c0(0x18)
	struct UProgressBar* LoadingProgressBar_PCMaterial; // 0x2d8(0x08)
	struct UDFCommonMediaView* CommonMediaView; // 0x2e0(0x08)
	struct UImage* BgImage; // 0x2e8(0x08)
	struct UTextBlock* VersionInfo_Text; // 0x2f0(0x08)
	struct UCanvasPanel* LoadingPanel; // 0x2f8(0x08)

	void UpdateLoadingTips(struct FText& InText); // Function DFMGameSDK.BaseBackground.UpdateLoadingTips // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.CDNInfoManager
// Size: 0x1e8 (Inherited: 0x38)
class UCDNInfoManager : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnGetMetaData[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnGetMetaData2MoLi[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnGetMaple2MoLi[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnGetMapleFailed2MoLi[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char OnMetaFailed[0x10]; // 0x78(0x10)
	/*struct FMulticastInlineDelegate*/char OnConfigDownloadSuccess[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char OnConfigFileLoaded[0x10]; // 0x98(0x10)
	char pad_A8[0x60]; // 0xa8(0x60)
	struct UCDNPathConfig* CDNPathConfig; // 0x108(0x08)
	struct FAPPUpdateInfo APPUpdateInfo; // 0x110(0x28)
	struct FCDNNoticeInfo CDNNoticeInfo; // 0x138(0x38)
	char pad_170[0x78]; // 0x170(0x78)

	void ResetInfo(); // Function DFMGameSDK.CDNInfoManager.ResetInfo // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.MapleSavedInfo
// Size: 0x38 (Inherited: 0x30)
class UMapleSavedInfo : public UObject {
public:

	int64_t LastTimeStamp; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.CDNPathConfig
// Size: 0x68 (Inherited: 0x30)
class UCDNPathConfig : public UObject {
public:

	struct FString BaseRootPath; // 0x30(0x10)
	struct FString DefaultMetaFile; // 0x40(0x10)
	struct FString DefaultConfigFile; // 0x50(0x10)
	struct UMapleSavedInfo* SavedInfo; // 0x60(0x08)

	void UpdateTimeStamp(int64_t& InNewTimestamp); // Function DFMGameSDK.CDNPathConfig.UpdateTimeStamp // (Final|Native|Public|HasOutParms|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.CommonTipView
// Size: 0x2e0 (Inherited: 0x298)
class UCommonTipView : public UUserWidget {
public:

	/*struct FMulticastInlineDelegate*/char OnCancelBtnClicked[0x10]; // 0x298(0x10)
	/*struct FMulticastInlineDelegate*/char OnConfirmBtnClicked[0x10]; // 0x2a8(0x10)
	bool bHasCloseAnim; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UDFCommonButton* CancelBtn; // 0x2c0(0x08)
	struct UDFCommonButton* ConfirmBtn; // 0x2c8(0x08)
	struct URichTextBlock* ShowText; // 0x2d0(0x08)
	bool bIsCloseSelfAfterConfirm; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)

	void SetShowText(struct FText& InText); // Function DFMGameSDK.CommonTipView.SetShowText // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMEditorGPM
// Size: 0x80 (Inherited: 0x38)
class UDFMEditorGPM : public UEngineSubsystem {
public:

	struct FString EditorGCloudId; // 0x38(0x10)
	struct FString EditorOpenId; // 0x48(0x10)
	struct FString EditorVersion; // 0x58(0x10)
	float EditorStatPostInterval; // 0x68(0x04)
	char pad_6C[0x14]; // 0x6c(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameMaple
// Size: 0x178 (Inherited: 0x38)
class UDFMGameMaple : public UGameInstanceSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	/*struct FMulticastInlineDelegate*/char OnGetQueryTreeData[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnGetDataFailed[0x10]; // 0x50(0x10)
	struct FString ServerUrl; // 0x60(0x10)
	char pad_70[0xf8]; // 0x70(0xf8)
	struct UCDNInfoManager* CDNInfoManager; // 0x168(0x08)
	bool bHasRequestCloseOnNextFrame; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)

	void RequestQueryLeafInfo(int32_t TreeId, int32_t LeafId); // Function DFMGameSDK.DFMGameMaple.RequestQueryLeafInfo // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameUdpMgr
// Size: 0x80 (Inherited: 0x30)
class UDFMGameUdpMgr : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnRecvUdpInfoDelegate[0x10]; // 0x30(0x10)
	bool UdpFlag; // 0x40(0x01)
	char pad_41[0x3f]; // 0x41(0x3f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMLocalizationCrashsightManager
// Size: 0x38 (Inherited: 0x38)
class UDFMLocalizationCrashsightManager : public UGameInstanceSubsystem {
public:


	bool STATIC_ToggleInvalidKeyReport(); // Function DFMGameSDK.DFMLocalizationCrashsightManager.ToggleInvalidKeyReport // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DolphinController
// Size: 0x220 (Inherited: 0x30)
class UDolphinController : public UObject {
public:

	char pad_30[0x1e0]; // 0x30(0x1e0)
	/*struct FMulticastInlineDelegate*/char OnDolphinUpdateProgressDelegate[0x10]; // 0x210(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.GameIdcSelectorInterface
// Size: 0x30 (Inherited: 0x30)
class UGameIdcSelectorInterface : public UInterface {
public:


	bool RoundTripDirRequest(); // Function DFMGameSDK.GameIdcSelectorInterface.RoundTripDirRequest // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.GameSDKManager
// Size: 0x110 (Inherited: 0x38)
class UGameSDKManager : public UGameInstanceSubsystem {
public:

	struct TArray<struct UDFMSDKBase*> GameSDKComponentList; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)
	/*struct FMulticastInlineDelegate*/char OnLaunchToLogin_OnHealthTipShowEnd[0x10]; // 0x68(0x10)
	char pad_78[0x60]; // 0x78(0x60)
	struct UCommonTipView* CommonTipViewCache; // 0xd8(0x08)
	struct UBaseBackground* BaseBackground; // 0xe0(0x08)
	struct UUserWidget* HealthTipView; // 0xe8(0x08)
	struct UUserWidget* WaitingView; // 0xf0(0x08)
	struct UClass* CommonTipAsset; // 0xf8(0x08)
	struct UClass* LoadingViewClass; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	void UnloadWebBrowser(); // Function DFMGameSDK.GameSDKManager.UnloadWebBrowser // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.GameSDKStatics
// Size: 0x30 (Inherited: 0x30)
class UGameSDKStatics : public UBlueprintFunctionLibrary {
public:


	void STATIC_RequestClientExit(struct UObject* WorldContextObject, bool bForce); // Function DFMGameSDK.GameSDKStatics.RequestClientExit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.LitePackageWrapper
// Size: 0xa0 (Inherited: 0x38)
class ULitePackageWrapper : public UGameInstanceSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	struct UPufferManager* PtrPufferMgr; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
	/*struct FMulticastInlineDelegate*/char OnLiteDownloadProgress[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnLiteDownloadReturn[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char OnLiteModuleCheckResult[0x10]; // 0x80(0x10)
	/*struct FMulticastInlineDelegate*/char OnLiteDownloadInitReturn[0x10]; // 0x90(0x10)

	void UnRegisterTgpaCallBack(); // Function DFMGameSDK.LitePackageWrapper.UnRegisterTgpaCallBack // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.LoginTipWidget
// Size: 0x298 (Inherited: 0x298)
class ULoginTipWidget : public UUserWidget {
public:


	void SetSpaceLimit(); // Function DFMGameSDK.LoginTipWidget.SetSpaceLimit // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.PufferInterface
// Size: 0x3c0 (Inherited: 0x38)
class UPufferInterface : public UGameInstanceSubsystem {
public:

	char pad_38[0x2a4]; // 0x38(0x2a4)
	float mUpdatePercentValue; // 0x2dc(0x04)
	struct FString mFGCloudUrl; // 0x2e0(0x10)
	struct FString mFGameKey; // 0x2f0(0x10)
	struct FString mFPufferProductID; // 0x300(0x10)
	struct FString mFDefaultPufferMaxDLSpeed; // 0x310(0x10)
	struct FString mFDefaultPufferMaxDLTask; // 0x320(0x10)
	struct FString mFDefaultPufferTaskId; // 0x330(0x10)
	struct FString mFDefaultPufferDownloadPriority; // 0x340(0x10)
	struct FString mUpdatePath; // 0x350(0x10)
	struct FString mFDefaultPufferGameId; // 0x360(0x10)
	struct FString mFDefaultPufferUpdateType; // 0x370(0x10)
	struct FString mFDefaultPufferDolphinProductId; // 0x380(0x10)
	struct FString mFDefaultDolphinAppVersion; // 0x390(0x10)
	struct FString mFDefaultDolphinResVersion; // 0x3a0(0x10)
	struct FString mShowFileList; // 0x3b0(0x10)

	void UpdatePollCall(); // Function DFMGameSDK.PufferInterface.UpdatePollCall // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.PufferModule
// Size: 0x310 (Inherited: 0x38)
class UPufferModule : public UGameInstanceSubsystem {
public:

	char pad_38[0x2d8]; // 0x38(0x2d8)

	void UpdatePollCall(); // Function DFMGameSDK.PufferModule.UpdatePollCall // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.PufferQuest
// Size: 0x90 (Inherited: 0x30)
class UPufferQuest : public UObject {
public:

	char pad_30[0x60]; // 0x30(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.QRCodeUtil
// Size: 0x30 (Inherited: 0x30)
class UQRCodeUtil : public UBlueprintFunctionLibrary {
public:


	struct UTexture2D* STATIC_GenerateQRCode(struct FString QRCodeName, struct FString str, int32_t Version, struct UObject* Outer, enum class EQRencodeMode QrencodeMode, enum class EQRecLevel QrecLevel, int32_t casesensitive, struct FLinearColor Color1, struct FLinearColor color2, bool bSRGB, bool bUseAlpha); // Function DFMGameSDK.QRCodeUtil.GenerateQRCode // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMSDKBase
// Size: 0x38 (Inherited: 0x30)
class UDFMSDKBase : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFGameMatchReport
// Size: 0x38 (Inherited: 0x38)
class UDFGameMatchReport : public UDFMSDKBase {
public:


	void STATIC_SetGameMode(int32_t GameMode); // Function DFMGameSDK.DFGameMatchReport.SetGameMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMCrashSight
// Size: 0x1e8 (Inherited: 0x38)
class UDFMCrashSight : public UDFMSDKBase {
public:

	char pad_38[0x1b0]; // 0x38(0x1b0)

	void STATIC_SetUserId(struct FString OpenId); // Function DFMGameSDK.DFMCrashSight.SetUserId // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameAnnounce
// Size: 0xe0 (Inherited: 0x38)
class UDFMGameAnnounce : public UDFMSDKBase {
public:

	char pad_38[0x8]; // 0x38(0x08)
	/*struct FMulticastInlineDelegate*/char OnLoadNoticeDataDelegate[0x10]; // 0x40(0x10)
	char pad_50[0x90]; // 0x50(0x90)

	struct FString LoadNoticeData(struct FString NoticeGroup, struct FString Language, struct FString Region, struct FString Partition, struct FString extraJson, float CacheClearInterval); // Function DFMGameSDK.DFMGameAnnounce.LoadNoticeData // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameBeacon
// Size: 0x38 (Inherited: 0x38)
class UDFMGameBeacon : public UDFMSDKBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameBrowser
// Size: 0x40 (Inherited: 0x38)
class UDFMGameBrowser : public UDFMSDKBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	void STATIC_SimpleOpenUrl(struct FString& URL); // Function DFMGameSDK.DFMGameBrowser.SimpleOpenUrl // (Final|Native|Static|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameCentauri
// Size: 0xe0 (Inherited: 0x38)
class UDFMGameCentauri : public UDFMSDKBase {
public:

	bool EnableLog; // 0x38(0x01)
	bool EnableSaveLog; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FString BusinessId; // 0x40(0x10)
	struct FString OfferId; // 0x50(0x10)
	struct FString OpenId; // 0x60(0x10)
	struct FString IDCInfo; // 0x70(0x10)
	struct FString RegionCode; // 0x80(0x10)
	struct FString CurrencyCode; // 0x90(0x10)
	bool bSandbox; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FString PayInfo; // 0xa8(0x10)
	struct FString ServerId; // 0xb8(0x10)
	int32_t PaymentMethod; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FString> SkuLists; // 0xd0(0x10)

	void ReapplyReceipt(); // Function DFMGameSDK.DFMGameCentauri.ReapplyReceipt // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameConnect
// Size: 0x350 (Inherited: 0x38)
class UDFMGameConnect : public UDFMSDKBase {
public:

	char pad_38[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnPackRecvDelegate[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnConnectBeginDelegate[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnConnectedDelegate[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateChangedDelegate[0x10]; // 0x78(0x10)
	/*struct FMulticastInlineDelegate*/char OnRelayConnectedDelegate[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char OnDisconnectDelegate[0x10]; // 0x98(0x10)
	/*struct FMulticastInlineDelegate*/char OnSendHeartbeatProtoDelegate[0x10]; // 0xa8(0x10)
	/*struct FMulticastInlineDelegate*/char OnACEConnectBeginDelegate[0x10]; // 0xb8(0x10)
	/*struct FMulticastInlineDelegate*/char OnACEConnectedDelegate[0x10]; // 0xc8(0x10)
	/*struct FMulticastInlineDelegate*/char OnACEDisconnectDelegate[0x10]; // 0xd8(0x10)
	/*struct FMulticastInlineDelegate*/char OnRestartReconnectedDelegate[0x10]; // 0xe8(0x10)
	struct UCommonTipView* ConnectQueueTipView; // 0xf8(0x08)
	char pad_100[0xf8]; // 0x100(0xf8)
	uint32_t GapTime; // 0x1f8(0x04)
	bool bUseNewProtoSystem; // 0x1fc(0x01)
	char pad_1FD[0x153]; // 0x1fd(0x153)

	void TestChar(struct TMap<struct FString, struct FString> ntf); // Function DFMGameSDK.DFMGameConnect.TestChar // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameFriend
// Size: 0x50 (Inherited: 0x38)
class UDFMGameFriend : public UDFMSDKBase {
public:

	char pad_38[0x8]; // 0x38(0x08)
	/*struct FMulticastInlineDelegate*/char OnBaseResultNotifyEvent[0x10]; // 0x40(0x10)

	void STATIC_ShareLua(struct FString Channel, int32_t Type, struct FString User, struct FString Title, struct FString Desc, struct FString link, struct FString thumbPath, struct FString mediaPath, struct FString extraJson, struct FString ImagePath); // Function DFMGameSDK.DFMGameFriend.ShareLua // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameGPM
// Size: 0x40 (Inherited: 0x38)
class UDFMGameGPM : public UDFMSDKBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	void STATIC_UpdateStoryStateGameInfo(int32_t State); // Function DFMGameSDK.DFMGameGPM.UpdateStoryStateGameInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameIdcSelector
// Size: 0x190 (Inherited: 0x38)
class UDFMGameIdcSelector : public UDFMSDKBase {
public:

	char pad_38[0x90]; // 0x38(0x90)
	struct UDFMGameUdpMgr* udpMgrIns; // 0xc8(0x08)
	char pad_D0[0x10]; // 0xd0(0x10)
	struct TArray<struct FString> IdcIPArray; // 0xe0(0x10)
	struct TArray<int32_t> IdcPortArray; // 0xf0(0x10)
	struct TArray<int32_t> udpSequenceIdArray; // 0x100(0x10)
	float timeoutTimeConfig; // 0x110(0x04)
	float tickTimeConfig; // 0x114(0x04)
	char pad_118[0x78]; // 0x118(0x78)

	void SetUdpPlayerId(struct FString _playerId); // Function DFMGameSDK.DFMGameIdcSelector.SetUdpPlayerId // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameLBS
// Size: 0x78 (Inherited: 0x38)
class UDFMGameLBS : public UDFMSDKBase {
public:

	/*struct FMulticastInlineDelegate*/char OnLBSLocationDelegate[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnLBSRelationDelegate[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnLBSIPInfoDelegate[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnLBSBaseDelegate[0x10]; // 0x68(0x10)

	void STATIC_GetNearby(); // Function DFMGameSDK.DFMGameLBS.GetNearby // (Final|Native|Static|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGamelet
// Size: 0x38 (Inherited: 0x38)
class UDFMGamelet : public UDFMSDKBase {
public:


	void Tick(float fDeltaTime); // Function DFMGameSDK.DFMGamelet.Tick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameLogin
// Size: 0x108 (Inherited: 0x38)
class UDFMGameLogin : public UDFMSDKBase {
public:

	char pad_38[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnLoginRetDelegate[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnLoginQueryUserInfoRetDelegate[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnQrCodeRetDelegate[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char OnBaseRetDelegate[0x10]; // 0x78(0x10)
	/*struct FMulticastInlineDelegate*/char DfVoiceControlRetDelegate[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char INTLComplianceResultDelegate[0x10]; // 0x98(0x10)
	/*struct FMulticastInlineDelegate*/char OnWebLoginDelegate[0x10]; // 0xa8(0x10)
	struct FTimerHandle CheckWebLoginRetTimer; // 0xb8(0x08)
	char pad_C0[0x4]; // 0xc0(0x04)
	bool bNeedShowTips; // 0xc4(0x01)
	char pad_C5[0x43]; // 0xc5(0x43)

	void SwitchUser(bool State); // Function DFMGameSDK.DFMGameLogin.SwitchUser // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameMidas
// Size: 0x1d0 (Inherited: 0x38)
class UDFMGameMidas : public UDFMSDKBase {
public:

	bool EnableLog; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString ProcessName; // 0x40(0x10)
	struct FString IDC; // 0x50(0x10)
	struct FString IDCInfo; // 0x60(0x10)
	struct FString env; // 0x70(0x10)
	struct FString BusinessId; // 0x80(0x10)
	struct FString OfferId; // 0x90(0x10)
	struct FString OpenId; // 0xa0(0x10)
	struct FString OpenKey; // 0xb0(0x10)
	struct FString SessionId; // 0xc0(0x10)
	struct FString SessionType; // 0xd0(0x10)
	struct FString ZoneID; // 0xe0(0x10)
	struct FString GoodsZoneId; // 0xf0(0x10)
	struct FString pf; // 0x100(0x10)
	struct FString pfKey; // 0x110(0x10)
	struct FString AppExtends; // 0x120(0x10)
	struct FString SaveValue; // 0x130(0x10)
	struct FString AcctType; // 0x140(0x10)
	struct FString extras; // 0x150(0x10)
	struct FString ProductId; // 0x160(0x10)
	struct FString ChannelExtras; // 0x170(0x10)
	struct FString PayChannel; // 0x180(0x10)
	struct FString GoodsTokenUrl; // 0x190(0x10)
	int32_t TokenType; // 0x1a0(0x04)
	bool AutoPay; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct FString ServiceCode; // 0x1a8(0x10)
	struct FString ServiceName; // 0x1b8(0x10)
	int32_t ServiceType; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)

	void Reprovide(); // Function DFMGameSDK.DFMGameMidas.Reprovide // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameNetBar
// Size: 0x40 (Inherited: 0x38)
class UDFMGameNetBar : public UDFMSDKBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	void ReqNetBarLevel(struct FString opneId, int32_t GameId, int32_t ZoneID, struct FString tickctBuffer); // Function DFMGameSDK.DFMGameNetBar.ReqNetBarLevel // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameNotch
// Size: 0x70 (Inherited: 0x38)
class UDFMGameNotch : public UDFMSDKBase {
public:

	char pad_38[0x28]; // 0x38(0x28)
	/*struct FMulticastInlineDelegate*/char OnFoldStatusChanged[0x10]; // 0x60(0x10)

	void UpdateApplicationSafeZone(); // Function DFMGameSDK.DFMGameNotch.UpdateApplicationSafeZone // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameOneSDK
// Size: 0x48 (Inherited: 0x38)
class UDFMGameOneSDK : public UDFMSDKBase {
public:

	uint64_t OpenId; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)

	void SetOpenId(struct FString OpenId); // Function DFMGameSDK.DFMGameOneSDK.SetOpenId // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGamePlayerInfo
// Size: 0x1e8 (Inherited: 0x38)
class UDFMGamePlayerInfo : public UDFMSDKBase {
public:

	char pad_38[0x1b0]; // 0x38(0x1b0)

	void SetUsername(struct FString userName); // Function DFMGameSDK.DFMGamePlayerInfo.SetUsername // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameProtocol
// Size: 0x3c0 (Inherited: 0x38)
class UDFMGameProtocol : public UDFMSDKBase {
public:

	char pad_38[0x36e]; // 0x38(0x36e)
	bool bRequestProto; // 0x3a6(0x01)
	bool bUseReconnectTimer; // 0x3a7(0x01)
	char pad_3A8[0x18]; // 0x3a8(0x18)

	void OnStateChanged(struct FConnectorResultInfo& ConnectorResultInfo); // Function DFMGameSDK.DFMGameProtocol.OnStateChanged // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGamePush
// Size: 0x1d8 (Inherited: 0x38)
class UDFMGamePush : public UDFMSDKBase {
public:

	struct FString Channel; // 0x38(0x10)
	struct FDFMLocalNotification_Android LocalNotification_Android; // 0x48(0x108)
	struct FDFMLocalNotification_IOS LocalNotification_IOS; // 0x150(0x88)

	void UnregisterPush(); // Function DFMGameSDK.DFMGamePush.UnregisterPush // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameReport
// Size: 0x38 (Inherited: 0x38)
class UDFMGameReport : public UDFMSDKBase {
public:


	void SetDeviceLevel(int32_t Level); // Function DFMGameSDK.DFMGameReport.SetDeviceLevel // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameTDM
// Size: 0x38 (Inherited: 0x38)
class UDFMGameTDM : public UDFMSDKBase {
public:


	void TDMReportFile(struct FString fFilePath); // Function DFMGameSDK.DFMGameTDM.TDMReportFile // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameTss
// Size: 0x60 (Inherited: 0x38)
class UDFMGameTss : public UDFMSDKBase {
public:

	char pad_38[0x28]; // 0x38(0x28)

	void SetUserInfo(int32_t entry_id, struct FString open_id); // Function DFMGameSDK.DFMGameTss.SetUserInfo // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DFMGameVoice
// Size: 0x278 (Inherited: 0x38)
class UDFMGameVoice : public UDFMSDKBase {
public:

	char pad_38[0x110]; // 0x38(0x110)
	/*struct FMulticastInlineDelegate*/char OnGVoiceRoomStateChangeDelegate[0x10]; // 0x148(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceSpeakStateChangeDelegate[0x10]; // 0x158(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceMicAndSpeakerStateChangeDelegate[0x10]; // 0x168(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceRoomMemberRoomStateChangeDelegate[0x10]; // 0x178(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceRoomMemberSpeakStateChangeDelegate[0x10]; // 0x188(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceRoomMemberForbidStateChangeDelegate[0x10]; // 0x198(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceEventDelegate[0x10]; // 0x1a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceSpeechToTextDelegate[0x10]; // 0x1b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceStreamSpeechToTextDelegate[0x10]; // 0x1c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceUploadVoiceFileDelegate[0x10]; // 0x1d8(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceDownloadVoiceFileDelegate[0x10]; // 0x1e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlayRecordedFileDelegate[0x10]; // 0x1f8(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceReportPlayerDelegate[0x10]; // 0x208(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceDeviceDelegate[0x10]; // 0x218(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceGetDeviceCountDelegate[0x10]; // 0x228(0x10)
	char pad_238[0x10]; // 0x238(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceRSTSSpeechToTextDelegate[0x10]; // 0x248(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceTextTranslateDelegate[0x10]; // 0x258(0x10)
	/*struct FMulticastInlineDelegate*/char OnGVoiceApplicationActiveDelegate[0x10]; // 0x268(0x10)

	void UploadRecordedFile(); // Function DFMGameSDK.DFMGameVoice.UploadRecordedFile // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.DolphinManager
// Size: 0x110 (Inherited: 0x38)
class UDolphinManager : public UDFMSDKBase {
public:

	char pad_38[0x20]; // 0x38(0x20)
	struct UDolphinController* DolphinController; // 0x58(0x08)
	bool EnableDebugLog; // 0x60(0x01)
	bool EnableErrorLog; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct FString AppUpdateSavePath; // 0x68(0x10)
	struct FString ResUpdateSavePath; // 0x78(0x10)
	int32_t RetryTimes; // 0x88(0x04)
	float RetryInterval; // 0x8c(0x04)
	float InstallInterval; // 0x90(0x04)
	bool bIsGrayUpdate; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FString GrayWorldId; // 0x98(0x10)
	struct FString GrayUserId; // 0xa8(0x10)
	struct FString GcloudURLDebug; // 0xb8(0x10)
	struct FString VersionURLDebug; // 0xc8(0x10)
	struct FString CDNURLDebug; // 0xd8(0x10)
	struct FString AppVersionDebug; // 0xe8(0x10)
	struct FString ResVersionDebug; // 0xf8(0x10)
	int32_t DolphinChannelIdDebug; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)

	void PrepareDolphinConfig_Debug(); // Function DFMGameSDK.DolphinManager.PrepareDolphinConfig_Debug // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameSDK.PufferManager
// Size: 0x108 (Inherited: 0x38)
class UPufferManager : public UDFMSDKBase {
public:

	char pad_38[0x28]; // 0x38(0x28)
	struct UPufferQuest* PtrCurrentDownloadQuest; // 0x60(0x08)
	struct UPufferQuest* PtrCurrentCheckQuest; // 0x68(0x08)
	struct TArray<struct UPufferQuest*> DownloadQuestQueue; // 0x70(0x10)
	struct TArray<struct UPufferQuest*> CancelQuestQueue; // 0x80(0x10)
	struct TArray<struct UPufferQuest*> CheckQuestQueue; // 0x90(0x10)
	char pad_A0[0x68]; // 0xa0(0x68)

	void StopDownload(struct FString ModuleName); // Function DFMGameSDK.PufferManager.StopDownload // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
