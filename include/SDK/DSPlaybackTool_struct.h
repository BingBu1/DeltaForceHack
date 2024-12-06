
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DSPlaybackTool.EPlaybackStructAce_ActionType
enum class EPlaybackStructAce_ActionType : int {
	Default = 0,
	Reload = 1,
	Crouch = 2,
	Prone = 3,
	Stand = 4,
	Zoom = 5,
	LeftLean = 6,
	RightLean = 7,
	NoneLean = 8,
	SlidingTackle = 9,
	EndZoom = 10,
	EPlaybackStructAce_MAX = 11
};

// Enum DSPlaybackTool.EPlaybackStructType
enum class EPlaybackStructType : int {
	Default = 0,
	Common_ClickPoint = 1,
	Common_Points = 2,
	Common_Line = 3,
	Common_Path = 4,
	Common_BoxLine = 5,
	Common_BoxFill = 6,
	Nav_Agent = 7,
	Nav_AgentMove = 8,
	Nav_AgentEQS = 9,
	Nav_AgentFind = 10,
	Nav_Fire = 11,
	Ace_Start = 12,
	Ace_Summary = 13,
	Ace_Position = 14,
	Ace_WorldToScreen = 15,
	Ace_Fire = 16,
	Ace_Hit = 17,
	Ace_HitDown = 18,
	Ace_Death = 19,
	Ace_Action = 20,
	Ace_MatchStart = 21,
	EPlaybackStructType_MAX = 22
};

// Enum DSPlaybackTool.EPlaybackDataType
enum class EPlaybackDataType : int {
	Default = 0,
	Nav = 1,
	AI = 2,
	Player = 3,
	Weapon = 4,
	ACE = 5,
	EPlaybackDataType_MAX = 6
};

// ScriptStruct DSPlaybackTool.AceEnemyInfo
// Size: 0x30 (Inherited: 0x00)
struct FAceEnemyInfo {
public:

	uint64_t EnemyId; // 0x00(0x08)
	char EnemyVisible; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector EnemyLoc; // 0x0c(0x0c)
	struct FVector2D EnemyScreenLoc; // 0x18(0x08)
	struct FVector2D EnemyHeadScreenLoc; // 0x20(0x08)
	float EnemyScreenDist; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.C2SAceEnemyInfoPackage
// Size: 0x18 (Inherited: 0x00)
struct FC2SAceEnemyInfoPackage {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FC2SAceEnemyInfoArray> C2SC2SAceEnemyInfoPackages; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.C2SAceEnemyInfoArray
// Size: 0x10 (Inherited: 0x00)
struct FC2SAceEnemyInfoArray {
public:

	struct TArray<struct FC2SAceEnemyInfo> C2SAceEnemyInfos; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.C2SAceEnemyInfo
// Size: 0x10 (Inherited: 0x00)
struct FC2SAceEnemyInfo {
public:

	uint32_t ID; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.SendRateLimit
// Size: 0x14 (Inherited: 0x00)
struct FSendRateLimit {
public:

	uint32_t CurNum; // 0x00(0x04)
	uint32_t TotalSendNum; // 0x04(0x04)
	uint32_t LastUpdateTick; // 0x08(0x04)
	uint32_t MaxSendNum; // 0x0c(0x04)
	uint32_t MaxWaitSendNum; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.PlaybackRateLimit
// Size: 0x20 (Inherited: 0x10)
struct FPlaybackRateLimit : public FDescRowBase {
public:

	enum class EPlaybackDataType PlaybackDataType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t MaxSendNum; // 0x14(0x04)
	int32_t MaxWaitSendNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback
// Size: 0x10 (Inherited: 0x00)
struct FPlayback {
public:

	char pad_0[0x8]; // 0x00(0x08)
	enum class EPlaybackDataType PlaybackDataType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.AceRotator
// Size: 0x08 (Inherited: 0x00)
struct FAceRotator {
public:

	float Pitch; // 0x00(0x04)
	float Yaw; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AceBase
// Size: 0x18 (Inherited: 0x10)
struct FPlayback_AceBase : public FPlayback {
public:

	uint64_t BaseGameTimeTick; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_Fire
// Size: 0x38 (Inherited: 0x10)
struct FPlayback_Fire : public FPlayback {
public:

	uint64_t Uin; // 0x10(0x08)
	uint64_t FrameCounter; // 0x18(0x08)
	struct FVector FireStart; // 0x20(0x0c)
	struct FVector FireEnd; // 0x2c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AgentFind
// Size: 0x60 (Inherited: 0x10)
struct FPlayback_AgentFind : public FPlayback {
public:

	uint64_t Uin; // 0x10(0x08)
	uint64_t FrameCounter; // 0x18(0x08)
	struct FVector StartLoc; // 0x20(0x0c)
	struct FVector EndLoc; // 0x2c(0x0c)
	bool bFoundPath; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<float> Points; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AgentEQS
// Size: 0x40 (Inherited: 0x10)
struct FPlayback_AgentEQS : public FPlayback {
public:

	uint64_t Uin; // 0x10(0x08)
	uint64_t FrameCounter; // 0x18(0x08)
	struct TArray<float> Path; // 0x20(0x10)
	struct TArray<bool> FoundPath; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AgentMove
// Size: 0x38 (Inherited: 0x10)
struct FPlayback_AgentMove : public FPlayback {
public:

	uint64_t Uin; // 0x10(0x08)
	uint64_t FrameCounter; // 0x18(0x08)
	uint64_t Time; // 0x20(0x08)
	struct FVector Loc; // 0x28(0x0c)
	float Yaw; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_Agent
// Size: 0x38 (Inherited: 0x10)
struct FPlayback_Agent : public FPlayback {
public:

	uint64_t Uin; // 0x10(0x08)
	int32_t AgentMode; // 0x18(0x04)
	struct FVector Loc; // 0x1c(0x0c)
	struct FString AgentName; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_BoxFill
// Size: 0x48 (Inherited: 0x10)
struct FPlayback_BoxFill : public FPlayback {
public:

	uint64_t Time; // 0x10(0x08)
	struct FVector CenterLoc; // 0x18(0x0c)
	struct FVector Scale; // 0x24(0x0c)
	struct FRotator Rotator; // 0x30(0x0c)
	uint32_t Color; // 0x3c(0x04)
	float During; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_BoxLine
// Size: 0x48 (Inherited: 0x10)
struct FPlayback_BoxLine : public FPlayback {
public:

	uint64_t Time; // 0x10(0x08)
	struct FVector CenterLoc; // 0x18(0x0c)
	struct FVector Scale; // 0x24(0x0c)
	struct FRotator Rotator; // 0x30(0x0c)
	float Width; // 0x3c(0x04)
	uint32_t Color; // 0x40(0x04)
	float During; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_Path
// Size: 0x40 (Inherited: 0x10)
struct FPlayback_Path : public FPlayback {
public:

	uint64_t Time; // 0x10(0x08)
	int32_t LocNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> Points; // 0x20(0x10)
	float Width; // 0x30(0x04)
	uint32_t Color; // 0x34(0x04)
	float During; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_Line
// Size: 0x40 (Inherited: 0x10)
struct FPlayback_Line : public FPlayback {
public:

	uint64_t Time; // 0x10(0x08)
	struct FVector StartLoc; // 0x18(0x0c)
	struct FVector EndLoc; // 0x24(0x0c)
	float Width; // 0x30(0x04)
	uint32_t Color; // 0x34(0x04)
	float During; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_Points
// Size: 0x40 (Inherited: 0x10)
struct FPlayback_Points : public FPlayback {
public:

	uint64_t Time; // 0x10(0x08)
	int32_t LocNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> Points; // 0x20(0x10)
	float size; // 0x30(0x04)
	uint32_t Color; // 0x34(0x04)
	float During; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_ClickPoint
// Size: 0x48 (Inherited: 0x10)
struct FPlayback_ClickPoint : public FPlayback {
public:

	uint64_t Time; // 0x10(0x08)
	struct FVector Loc; // 0x18(0x0c)
	float size; // 0x24(0x04)
	uint32_t Color; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString Format; // 0x30(0x10)
	float During; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AceAction
// Size: 0x28 (Inherited: 0x18)
struct FPlayback_AceAction : public FPlayback_AceBase {
public:

	uint64_t PlayerId; // 0x18(0x08)
	char ActionId; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AceDeath
// Size: 0x40 (Inherited: 0x18)
struct FPlayback_AceDeath : public FPlayback_AceBase {
public:

	uint64_t PlayerId; // 0x18(0x08)
	uint64_t AttackValueId; // 0x20(0x08)
	struct FVector Loc; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	uint64_t AttackerPlayerId; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AceHitDown
// Size: 0x68 (Inherited: 0x18)
struct FPlayback_AceHitDown : public FPlayback_AceBase {
public:

	uint64_t PlayerId; // 0x18(0x08)
	uint64_t TakerId; // 0x20(0x08)
	struct FVector MakerCharacterLoc; // 0x28(0x0c)
	struct FVector TakerCharacterLoc; // 0x34(0x0c)
	char bVisiblity; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FRotator MakerViewRot; // 0x44(0x0c)
	uint64_t WeaponID; // 0x50(0x08)
	struct FVector TakerHitLoc; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AceHit
// Size: 0xa0 (Inherited: 0x18)
struct FPlayback_AceHit : public FPlayback_AceBase {
public:

	uint64_t PlayerId; // 0x18(0x08)
	uint64_t TakerId; // 0x20(0x08)
	struct FVector MakerCharacterLoc; // 0x28(0x0c)
	struct FVector TakerCharacterLoc; // 0x34(0x0c)
	char bVisiblity; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FRotator MakerViewRot; // 0x44(0x0c)
	uint64_t WeaponID; // 0x50(0x08)
	struct FVector TakerHitLoc; // 0x58(0x0c)
	float HPDamage; // 0x64(0x04)
	float HPRemain; // 0x68(0x04)
	float ArmorDamage; // 0x6c(0x04)
	uint64_t ArmorId; // 0x70(0x08)
	float ArmorRemain; // 0x78(0x04)
	char bIsImpendingDeath; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float ImpendingDeathHP; // 0x80(0x04)
	char HitDamagePart; // 0x84(0x01)
	char pad_85[0x1b]; // 0x85(0x1b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AceFire
// Size: 0x38 (Inherited: 0x18)
struct FPlayback_AceFire : public FPlayback_AceBase {
public:

	uint64_t PlayerId; // 0x18(0x08)
	uint64_t WeaponID; // 0x20(0x08)
	struct FRotator Rotator; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AceWorldToScreen
// Size: 0x48 (Inherited: 0x18)
struct FPlayback_AceWorldToScreen : public FPlayback_AceBase {
public:

	uint64_t PlayerId; // 0x18(0x08)
	struct FVector PlayerLoc; // 0x20(0x0c)
	struct FAceRotator PlayerRot; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FAceEnemyInfo> EnemyInfos; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AcePosition
// Size: 0x48 (Inherited: 0x18)
struct FPlayback_AcePosition : public FPlayback_AceBase {
public:

	uint64_t PlayerId; // 0x18(0x08)
	struct FVector PlayerLoc; // 0x20(0x0c)
	struct FRotator PlayerViewRot; // 0x2c(0x0c)
	struct FVector Velocity; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AceSummary
// Size: 0x50 (Inherited: 0x18)
struct FPlayback_AceSummary : public FPlayback_AceBase {
public:

	uint64_t PlayerId; // 0x18(0x08)
	char MatchOverReason; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Duration; // 0x24(0x04)
	int32_t Team; // 0x28(0x04)
	int32_t Camp; // 0x2c(0x04)
	int32_t Score; // 0x30(0x04)
	uint32_t KillNum; // 0x34(0x04)
	uint32_t DeadNum; // 0x38(0x04)
	uint32_t HeadShotNum; // 0x3c(0x04)
	uint32_t AssistsNum; // 0x40(0x04)
	float TotalDamage; // 0x44(0x04)
	float CarryIn; // 0x48(0x04)
	float CarryOut; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AceMatchStart
// Size: 0x20 (Inherited: 0x18)
struct FPlayback_AceMatchStart : public FPlayback_AceBase {
public:

	uint32_t FPS; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DSPlaybackTool.Playback_AceStart
// Size: 0x68 (Inherited: 0x18)
struct FPlayback_AceStart : public FPlayback_AceBase {
public:

	uint64_t PlayerId; // 0x18(0x08)
	struct FString PlayerNickName; // 0x20(0x10)
	uint32_t PlayerLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	uint64_t GameModeId; // 0x38(0x08)
	uint64_t MapID; // 0x40(0x08)
	uint64_t RoomId; // 0x48(0x08)
	struct FString GameVersion; // 0x50(0x10)
	int32_t TeamId; // 0x60(0x04)
	int32_t CampId; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
