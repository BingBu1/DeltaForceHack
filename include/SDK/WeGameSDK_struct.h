
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum WeGameSDK.EWeGameLoginState
enum class EWeGameLoginState : int {
	InValidState = 0,
	QQ = 1,
	WeChat = 2,
	Email = 3,
	EWeGameLoginState_MAX = 4
};

// Enum WeGameSDK.EWeGamePlatformType
enum class EWeGamePlatformType : int {
	PlatformTypeUnknow = 0,
	PlatformTypeLauncher = 1,
	PlatformTypeSteam = 2,
	PlatformTypeEpic = 3,
	EWeGamePlatformType_MAX = 4
};

// Enum WeGameSDK.EWeGameLoginErrType
enum class EWeGameLoginErrType : int {
	PlatformExit = 0,
	SDKInitErr = 1,
	InValidLoginChannel = 2,
	MSDKErr = 3,
	EWeGameLoginErrType_MAX = 4
};

// ScriptStruct WeGameSDK.WeGameLoginRet
// Size: 0xa0 (Inherited: 0x00)
struct FWeGameLoginRet {
public:

	int32_t error_code; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString error_msg; // 0x08(0x10)
	struct FString OpenId; // 0x18(0x10)
	struct FString Token; // 0x28(0x10)
	int32_t token_expire_time; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString Channel; // 0x40(0x10)
	int32_t channel_id; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString pf; // 0x58(0x10)
	struct FString user_name; // 0x68(0x10)
	bool real_name_auth; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString pf_key; // 0x80(0x10)
	struct FString picture_url; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct WeGameSDK.WeGameAcccountInfo
// Size: 0xa8 (Inherited: 0x00)
struct FWeGameAcccountInfo {
public:

	int32_t ErrorCode; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ErrorMsg; // 0x08(0x10)
	struct FString OpenId; // 0x18(0x10)
	struct FString Token; // 0x28(0x10)
	int32_t TokenExpireTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString Channel; // 0x40(0x10)
	struct FString pf; // 0x50(0x10)
	struct FString userName; // 0x60(0x10)
	bool realNameAuth; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString pfKey; // 0x78(0x10)
	struct FString pictureUrl; // 0x88(0x10)
	struct FString ExtStr; // 0x98(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct WeGameSDK.WeGameAbroadLoginAccountInfo
// Size: 0x28 (Inherited: 0x00)
struct FWeGameAbroadLoginAccountInfo {
public:

	struct FString OpenId; // 0x00(0x10)
	struct FString Token; // 0x10(0x10)
	uint32_t channelID; // 0x20(0x04)
	uint32_t ZoneID; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct WeGameSDK.WeGameConnectSvrInfo
// Size: 0x58 (Inherited: 0x00)
struct FWeGameConnectSvrInfo {
public:

	int64_t ZoneID; // 0x00(0x08)
	struct FString ZoneName_en; // 0x08(0x10)
	struct FString ZoneName_zh; // 0x18(0x10)
	struct FString Address; // 0x28(0x10)
	struct FString Description; // 0x38(0x10)
	struct FString MetaData; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
