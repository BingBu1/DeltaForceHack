
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMGameSDK.EMetaError
enum class EMetaError : int {
	NOT_FOUND = 0,
	DOWNLOAD_FAIL = 1,
	DECRYPT_FAIL = 2,
	RETRY_FAIL = 3,
	EMetaError_MAX = 4
};

// Enum DFMGameSDK.EConfigState
enum class EConfigState : int {
	Success = 0,
	DOWNLOAD_FAILED = 1,
	DECRYPT_FAILED = 2,
	LOAD_FILE_FAILED = 3,
	EConfigState_MAX = 4
};

// Enum DFMGameSDK.EMapleError
enum class EMapleError : int {
	InnerError = 0,
	NetworkException = 1,
	Timeout = 2,
	InvalidArgument = 3,
	LengthError = 4,
	Unknown = 5,
	Empty = 6,
	NotInitialized = 7,
	NotSupported = 8,
	NotInstalled = 9,
	SystemError = 10,
	NoPermission = 11,
	InvalidGameId = 12,
	InvalidToken = 13,
	NoToken = 14,
	AccessTokenExpired = 15,
	RefreshTokenExpired = 16,
	PayTokenExpired = 17,
	LoginFailed = 18,
	UserCancel = 19,
	UserDenied = 20,
	Checking = 21,
	NeedRealNameAuth = 22,
	NetworkError = 23,
	SendError = 24,
	RecvError = 25,
	LeafNotFound = 26,
	PlatformNotFound = 27,
	InvalidErrorCode = 28,
	Success = 29,
	MapleNotInit = 30,
	FetchDataOutOfTime = 31,
	HandleDataFailed = 32,
	EMapleError_MAX = 33
};

// Enum DFMGameSDK.EMatchFlowStep
enum class EMatchFlowStep : int {
	Start = 0,
	PrepareJoinMatch = 1,
	MatchVerify = 2,
	PlayerJoinMatch = 3,
	DsLink = 4,
	Success = 5,
	DSCore = 6,
	EMatchFlowStep_MAX = 7
};

// Enum DFMGameSDK.DFMGameDataKeyForControlState
enum class DFMGameDataKeyForControlState : int {
	FiringStart = 0,
	FiringEnd = 1,
	BeginZoom3 = 2,
	EndZoom3 = 3,
	BeginZoom6 = 4,
	EndZoom6 = 5,
	BeginZoom7 = 6,
	EndZoom7 = 7,
	BeginHurt = 8,
	EndHurt = 9,
	BeginLooting = 10,
	EndLooting = 11,
	OpenBag = 12,
	CloseBag = 13,
	BeginBlueprintHolder = 14,
	EndBlueprintHolder = 15,
	BeginSeamLessEnterGame = 16,
	EndSeamLessEnterGame = 17,
	BeginRedeploy = 18,
	EndRedeploy = 19,
	BeginGetOnVehicle = 20,
	EndGetOnVehicle = 21,
	DFMGameDataKeyForControlState_MAX = 22
};

// Enum DFMGameSDK.DFMGameDataKeyForStoryState
enum class DFMGameDataKeyForStoryState : int {
	Launch = 0,
	VersionUpdate = 1,
	Loading = 2,
	Lobby = 3,
	CommonEnterGame = 4,
	CommonGame = 5,
	POI = 6,
	BattleField = 7,
	SOLExit = 8,
	Settlement = 9,
	DFMGameDataKeyForStoryState_MAX = 10
};

// Enum DFMGameSDK.EGVoiceButtonType
enum class EGVoiceButtonType : int {
	GVoiceButtonType_Close = 0,
	GVoiceButtonType_ClosePress = 1,
	GVoiceButtonType_Team = 2,
	GVoiceButtonType_TeamPress = 3,
	GVoiceButtonType_All = 4,
	GVoiceButtonType_AllPress = 5,
	GVoiceButtonType_MossPress = 6,
	GVoiceButtonType_MAX = 7
};

// Enum DFMGameSDK.EGVoiceRoomChannel
enum class EGVoiceRoomChannel : int {
	GVoiceRoomChannel_None = 0,
	GVoiceRoomChannel_Team = 1,
	GVoiceRoomChannel_All = 2,
	GVoiceRoomChannel_Moss = 3,
	GVoiceRoomChannel_MAX = 4
};

// Enum DFMGameSDK.EDolphinVersionUpdateStep
enum class EDolphinVersionUpdateStep : int {
	None = 0,
	Begin = 1,
	CheckClearFiles = 2,
	App = 3,
	Extract = 4,
	Resource = 5,
	CheckResource = 6,
	Finish = 7,
	EDolphinVersionUpdateStep_MAX = 8
};

// Enum DFMGameSDK.EQRencodeMode
enum class EQRencodeMode : int {
	QR_MODE_NUL = 0,
	QR_MODE_NUM = 1,
	QR_MODE_AN = 2,
	QR_MODE_9 = 3,
	QR_MODE_KANJI = 4,
	QR_MODE_STRUCTURE = 5,
	QR_MODE_ECI = 6,
	QR_MODE_FNC1FIRST = 7,
	QR_MODE_FNC1SECOND = 8,
	QR_MODE_MAX = 9
};

// Enum DFMGameSDK.EQRecLevel
enum class EQRecLevel : int {
	QR_ECLEVEL_L = 0,
	QR_ECLEVEL_M = 1,
	QR_ECLEVEL_Q = 2,
	QR_ECLEVEL_H = 3,
	QR_ECLEVEL_MAX = 4
};

// ScriptStruct DFMGameSDK.LuaRecvBufferInfo
// Size: 0x18 (Inherited: 0x00)
struct FLuaRecvBufferInfo {
public:

	struct FString buf; // 0x00(0x10)
	int32_t Len; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.ConnectServerInfo
// Size: 0x90 (Inherited: 0x00)
struct FConnectServerInfo {
public:

	struct FString Ip; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DebugName; // 0x18(0x10)
	struct FName SocketType; // 0x28(0x08)
	uint32_t AuthType; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString APPID; // 0x38(0x10)
	int32_t Channel; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString OpenId; // 0x50(0x10)
	struct FString Token; // 0x60(0x10)
	int64_t Expire; // 0x70(0x08)
	struct TArray<struct FString> Urls; // 0x78(0x10)
	bool bClear; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.ConnectorResultInfo
// Size: 0x50 (Inherited: 0x00)
struct FConnectorResultInfo {
public:

	int32_t State; // 0x00(0x04)
	int32_t ErrorCode; // 0x04(0x04)
	struct FString reason; // 0x08(0x10)
	bool isSuccess; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString RealIP; // 0x20(0x10)
	struct FString URL; // 0x30(0x10)
	int32_t WaitingQueuePosition; // 0x40(0x04)
	int32_t WaitingQueueLen; // 0x44(0x04)
	int32_t WaitingEstimateTime; // 0x48(0x04)
	bool IsConnected; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DFNoticeRet
// Size: 0x20 (Inherited: 0x00)
struct FDFNoticeRet {
public:

	struct FString ReqId; // 0x00(0x10)
	struct TArray<struct FDFNoticeInfo> NoticeInfos; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DFNoticePictureInfo
// Size: 0xa8 (Inherited: 0x00)
struct FDFNoticePictureInfo {
public:

	struct FString NoticePicUrl; // 0x00(0x10)
	struct FString NoticePicHashcode; // 0x10(0x10)
	struct FString NoticePicTitle; // 0x20(0x10)
	struct FString NoticePicSize; // 0x30(0x10)
	int32_t ScreenDir; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString PicRedirectUrl; // 0x48(0x10)
	struct TMap<struct FString, struct FString> ExtraData; // 0x58(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.LBSRelationRet
// Size: 0x88 (Inherited: 0x00)
struct FLBSRelationRet {
public:

	struct FString OpenId; // 0x00(0x10)
	struct FString userName; // 0x10(0x10)
	int32_t gender; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString pictureUrl; // 0x28(0x10)
	struct FString country; // 0x38(0x10)
	struct FString province; // 0x48(0x10)
	struct FString city; // 0x58(0x10)
	struct FString Language; // 0x68(0x10)
	double Distance; // 0x78(0x08)
	int32_t isFriend; // 0x80(0x04)
	int32_t Timestamp; // 0x84(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.MetaInfo
// Size: 0x10 (Inherited: 0x00)
struct FMetaInfo {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.MapleData
// Size: 0x90 (Inherited: 0x00)
struct FMapleData {
public:

	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString NodeName; // 0x08(0x10)
	int32_t ParentId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ServerUrl; // 0x20(0x10)
	int32_t CustomNum_2; // 0x30(0x04)
	int32_t CustomNum_3; // 0x34(0x04)
	struct TMap<struct FString, struct FString> CustomData; // 0x38(0x50)
	bool bIsInReview; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.HttpBatch
// Size: 0x30 (Inherited: 0x00)
struct FHttpBatch {
public:

	char pad_0[0x30]; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.CDNNoticeInfo
// Size: 0x38 (Inherited: 0x00)
struct FCDNNoticeInfo {
public:

	struct FString Title; // 0x00(0x10)
	struct FString Content; // 0x10(0x10)
	bool bIsUsable; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t NoticeType; // 0x24(0x04)
	struct FString Version; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.APPUpdateInfo
// Size: 0x28 (Inherited: 0x00)
struct FAPPUpdateInfo {
public:

	struct FString URL; // 0x00(0x10)
	struct FString Notice; // 0x10(0x10)
	bool bIsUsable; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DFMCrashSightExtraDataStruct
// Size: 0x190 (Inherited: 0x00)
struct FDFMCrashSightExtraDataStruct {
public:

	char pad_0[0x190]; // 0x00(0x190)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DfmFriendReqInfo
// Size: 0x88 (Inherited: 0x00)
struct FDfmFriendReqInfo {
public:

	int32_t Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString User; // 0x08(0x10)
	struct FString Title; // 0x18(0x10)
	struct FString Desc; // 0x28(0x10)
	struct FString ImagePath; // 0x38(0x10)
	struct FString thumbPath; // 0x48(0x10)
	struct FString mediaPath; // 0x58(0x10)
	struct FString link; // 0x68(0x10)
	struct FString extraJson; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DFMLocalNotification_IOS
// Size: 0x88 (Inherited: 0x00)
struct FDFMLocalNotification_IOS {
public:

	int32_t RepeatType; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t FireTime; // 0x08(0x08)
	int32_t Badge; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString AlertBody; // 0x18(0x10)
	struct FString AlertAction; // 0x28(0x10)
	struct TMap<struct FString, struct FString> UserInfo; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DFMLocalNotification_Android
// Size: 0x108 (Inherited: 0x00)
struct FDFMLocalNotification_Android {
public:

	int32_t Type; // 0x00(0x04)
	int32_t ActionType; // 0x04(0x04)
	int32_t IconType; // 0x08(0x04)
	int32_t Lights; // 0x0c(0x04)
	int32_t Ring; // 0x10(0x04)
	int32_t Vibrate; // 0x14(0x04)
	int32_t StyleId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t BuilderID; // 0x20(0x08)
	struct FString Content; // 0x28(0x10)
	struct FString CustomContent; // 0x38(0x10)
	struct FString Activity; // 0x48(0x10)
	struct FString PackageDownloadUrl; // 0x58(0x10)
	struct FString PackageName; // 0x68(0x10)
	struct FString IconRes; // 0x78(0x10)
	struct FString Date; // 0x88(0x10)
	struct FString Hour; // 0x98(0x10)
	struct FString Min; // 0xa8(0x10)
	struct FString Title; // 0xb8(0x10)
	struct FString Intent; // 0xc8(0x10)
	struct FString URL; // 0xd8(0x10)
	struct FString RingRaw; // 0xe8(0x10)
	struct FString SmallIcon; // 0xf8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.GVoiceRoom
// Size: 0x98 (Inherited: 0x00)
struct FGVoiceRoom {
public:

	char pad_0[0x48]; // 0x00(0x48)
	struct TMap<struct FString, struct FGVoiceRoomMember> RoomMembers; // 0x48(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.GVoiceRoomMember
// Size: 0x20 (Inherited: 0x00)
struct FGVoiceRoomMember {
public:

	int32_t MemberId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString OpenId; // 0x08(0x10)
	bool IsSpeaking; // 0x18(0x01)
	bool IsMicrophoneOpen; // 0x19(0x01)
	bool IsForbidden; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	uint32_t Volume; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.RecvBufferInfo
// Size: 0x10 (Inherited: 0x00)
struct FRecvBufferInfo {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.OnlineConnectResult
// Size: 0x02 (Inherited: 0x00)
struct FOnlineConnectResult {
public:

	char pad_0[0x2]; // 0x00(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DFNoticeTextInfo
// Size: 0xc0 (Inherited: 0x00)
struct FDFNoticeTextInfo {
public:

	struct FString NoticeTitle; // 0x00(0x10)
	struct FString NoticeContent; // 0x10(0x10)
	struct FString NoticeRedirectUrl; // 0x20(0x10)
	int32_t ContentId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString AppContentId; // 0x38(0x10)
	struct FString LanguageType; // 0x48(0x10)
	int32_t UpdateTime; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TMap<struct FString, struct FString> ExtraData; // 0x60(0x50)
	struct TArray<struct FDFNoticePictureInfo> ContentPictureList; // 0xb0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DfmBaseRet
// Size: 0x40 (Inherited: 0x00)
struct FDfmBaseRet {
public:

	int32_t methodNameID; // 0x00(0x04)
	int32_t retCode; // 0x04(0x04)
	struct FString retMsg; // 0x08(0x10)
	int32_t thirdCode; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString thirdMsg; // 0x20(0x10)
	struct FString extraJson; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DFNoticeInfo
// Size: 0x1c0 (Inherited: 0x00)
struct FDFNoticeInfo {
public:

	int32_t NoticeID; // 0x00(0x04)
	int32_t BeginTime; // 0x04(0x04)
	int32_t EndTime; // 0x08(0x04)
	int32_t UpdateTime; // 0x0c(0x04)
	struct TArray<struct FDFNoticePictureInfo> PicUrlList; // 0x10(0x10)
	int32_t NoticeType; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString NoticeGroup; // 0x28(0x10)
	int32_t Order; // 0x38(0x04)
	int32_t ContentType; // 0x3c(0x04)
	struct FString Language; // 0x40(0x10)
	struct FString WebUrl; // 0x50(0x10)
	struct FDFNoticeTextInfo TextInfo; // 0x60(0xc0)
	struct FString APPID; // 0x120(0x10)
	struct FString AppNoticeId; // 0x130(0x10)
	int32_t Status; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString AreaList; // 0x148(0x10)
	struct TArray<struct FDFNoticeTextInfo> TextInfoList; // 0x158(0x10)
	struct TMap<struct FString, struct FString> ExtraData; // 0x168(0x50)
	bool IsUsable; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DfmLoginRet
// Size: 0x140 (Inherited: 0x40)
struct FDfmLoginRet : public FDfmBaseRet {
public:

	struct FString OpenId; // 0x40(0x10)
	struct FString Token; // 0x50(0x10)
	int64_t tokenExpire; // 0x60(0x08)
	int32_t firstLogin; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString regChannelDis; // 0x70(0x10)
	struct FString userName; // 0x80(0x10)
	int32_t gender; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString birthdate; // 0x98(0x10)
	struct FString pictureUrl; // 0xa8(0x10)
	struct FString pf; // 0xb8(0x10)
	struct FString pfKey; // 0xc8(0x10)
	bool realNameAuth; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32_t channelID; // 0xdc(0x04)
	struct FString Channel; // 0xe0(0x10)
	struct FString channelInfo; // 0xf0(0x10)
	struct FString confirmCode; // 0x100(0x10)
	int64_t confirmCodeExpireTime; // 0x110(0x08)
	struct FString bindList; // 0x118(0x10)
	struct FString RegionCode; // 0x128(0x10)
	int32_t playerAdultState; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DfmQrCodeRet
// Size: 0x68 (Inherited: 0x40)
struct FDfmQrCodeRet : public FDfmBaseRet {
public:

	int32_t loginChanelId; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString loginChanel; // 0x48(0x10)
	struct FString qrCodeUrl; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DfVoiceControlRet
// Size: 0x50 (Inherited: 0x40)
struct FDfVoiceControlRet : public FDfmBaseRet {
public:

	int32_t NeedVoiceControl; // 0x40(0x04)
	int32_t VoiceControlStatus; // 0x44(0x04)
	int32_t NeedVoiceControlIngame; // 0x48(0x04)
	int32_t NeedVoiceControlParentCert; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameSDK.DFINTLComplianceRet
// Size: 0x108 (Inherited: 0x40)
struct FDFINTLComplianceRet : public FDfmBaseRet {
public:

	int32_t adultStatus; // 0x40(0x04)
	int32_t parentCertificateStatus; // 0x44(0x04)
	struct FString parentCertificateStatusExpiration; // 0x48(0x10)
	int32_t eUUserAgreeStatus; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString countryCode; // 0x60(0x10)
	int32_t adultAge; // 0x70(0x04)
	int32_t gameGrade; // 0x74(0x04)
	int32_t certificateType; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString adultStatusExpiration; // 0x80(0x10)
	struct FString tS; // 0x90(0x10)
	bool isEEA; // 0xa0(0x01)
	bool isDMA; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString Region; // 0xa8(0x10)
	struct FString Email; // 0xb8(0x10)
	int32_t realNameAuthStatus; // 0xc8(0x04)
	int32_t needRealNameAuth; // 0xcc(0x04)
	bool needLICertification; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FString adultAgeMap; // 0xd8(0x10)
	struct FString gameGradeMap; // 0xe8(0x10)
	int32_t NeedVoiceControl; // 0xf8(0x04)
	int32_t VoiceControlStatus; // 0xfc(0x04)
	int32_t NeedVoiceControlIngame; // 0x100(0x04)
	int32_t NeedVoiceControlParentCert; // 0x104(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
