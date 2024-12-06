
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMAudio.FCharacterAudioState
enum class FCharacterAudioState : int {
	EState_1P = 0,
	EState_3P = 1,
	EState_TEAMATE_3P = 2,
	EState_ENEMY_3P = 3,
	EState_AIM_1P = 4,
	EState_AIM_3P = 5,
	EState_MAX = 6
};

// Enum DFMAudio.EDFMAudioAniNotifyType
enum class EDFMAudioAniNotifyType : int {
	EANI_CHANGLE_CLIP = 0,
	EANI_CHANGLE_2 = 1,
	EANI_CHANGLE_3 = 2,
	EANI_CHANGLE_4 = 3,
	EANI_CHANGLE_5 = 4,
	EANI_CHANGLE_6 = 5,
	EANI_CHANGLE_7 = 6,
	EANI_CHANGLE_8 = 7,
	EANI_CHANGLE_9 = 8,
	EANI_CHANGLE_10 = 9,
	EANI_CHANGLE_11 = 10,
	EANI_CHANGLE_12 = 11,
	EANI_CHANGLE_13 = 12,
	EANI_CHANGLE_14 = 13,
	EANI_CHANGLE_15 = 14,
	EANI_CHANGLE_16 = 15,
	EANI_CHANGLE_17 = 16,
	EANI_CHANGLE_18 = 17,
	EANI_CHANGLE_19 = 18,
	EANI_CHANGLE_20 = 19,
	EANI_CHANGLE_21 = 20,
	EANI_CHANGLE_22 = 21,
	EANI_CHANGLE_23 = 22,
	EANI_CHANGLE_24 = 23,
	EANI_CHANGLE_25 = 24,
	EANI_CHANGLE_26 = 25,
	EANI_CHANGLE_27 = 26,
	EANI_CHANGLE_28 = 27,
	EANI_CHANGLE_29 = 28,
	EANI_CHANGLE_30 = 29,
	EANI_CHANGLE_31 = 30,
	EANI_CHANGLE_32 = 31,
	EANI_CHANGLE_41 = 32,
	EANI_CHANGLE_42 = 33,
	EANI_CHANGLE_43 = 34,
	EANI_CHANGLE_44 = 35,
	EANI_CHANGLE_45 = 36,
	EANI_CHANGLE_46 = 37,
	EANI_CHANGLE_47 = 38,
	EANI_CHANGLE_48 = 39,
	EANI_CHANGLE_49 = 40,
	EANI_CHANGLE_50 = 41,
	EANI_CHANGLE_51 = 42,
	EANI_CHANGLE_52 = 43,
	EANI_CHANGLE_53 = 44,
	EANI_CHANGLE_54 = 45,
	EANI_CHANGLE_55 = 46,
	EANI_CHANGLE_56 = 47,
	EANI_CHANGLE_57 = 48,
	EANI_CHANGLE_58 = 49,
	EANI_CHANGLE_59 = 50,
	EANI_CHANGLE_60 = 51,
	EANI_CHANGLE_61 = 52,
	EANI_CHANGLE_62 = 53,
	EANI_CHANGLE_MAX = 54
};

// Enum DFMAudio.EUIAudioEvent
enum class EUIAudioEvent : int {
	NONE = 0,
	EBGM_GlobalInit = 1,
	EBGM_Login = 2,
	EBGM_Lobby = 3,
	EBGM_NONE = 4,
	EUI_ClickNormal = 5,
	EUI_ItemSearchWhite = 6,
	EUI_ItemSearchBlue = 7,
	EUI_ItemSearchPurple = 8,
	EUI_ItemSearchOrange = 9,
	EUI_MoveInContainer = 10,
	EUI_MoveAcrossContainer = 11,
	EUI_MoveIntoSafeBox = 12,
	EUI_CommonItemClick = 13,
	EUI_Drop_Ammo = 14,
	EUI_Drop_Consumable = 15,
	EUI_Drop_Equipment = 16,
	EUI_Drop_Weapon = 17,
	EUI_Drop_Common = 18,
	EUI_Login_Vedio_Sound = 19,
	EUI_Lobby_Vedio_Sound = 20,
	EUI_ModeHall_Vedio_Sound = 21,
	EUIAudioEvent_MAX = 22
};

// Enum DFMAudio.EWeapon3PFireType
enum class EWeapon3PFireType : int {
	ENone = 0,
	ENear = 1,
	EMedium = 2,
	EFar = 3,
	EDist = 4,
	EWeapon3PFireType_MAX = 5
};

// Enum DFMAudio.EAudioArea
enum class EAudioArea : int {
	EClsInView = 0,
	EClsOutView = 1,
	EFarInView = 2,
	EFarOutView = 3,
	ETeamMateInView = 4,
	ETeamMateOutView = 5,
	EAudioArea_MAX = 6
};

// Enum DFMAudio.EBulletFlyTraceDistance
enum class EBulletFlyTraceDistance : int {
	ENear = 0,
	EMedium = 1,
	EFar = 2,
	EOutOfRange = 3,
	EBulletFlyTraceDistance_MAX = 4
};

// Enum DFMAudio.FWeaponAudioMode
enum class FWeaponAudioMode : int {
	EWeapMode_None = 0,
	EWeapMode_1P = 1,
	EWeapMode_3P = 2,
	EWeapMode_MAX = 3
};

// ScriptStruct DFMAudio.DFMAudioEventData
// Size: 0x10 (Inherited: 0x00)
struct FDFMAudioEventData {
public:

	struct UGPAudioEventAsset* BeginAudioEvent; // 0x00(0x08)
	struct UGPAudioEventAsset* EndAudioEvent; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.SceneAudioLevelSettingRow
// Size: 0x20 (Inherited: 0x10)
struct FSceneAudioLevelSettingRow : public FDescRowBase {
public:

	struct FName SceneName; // 0x10(0x08)
	float SceneFactor; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.AudioLevelSettingDataTableRow
// Size: 0x38 (Inherited: 0x10)
struct FAudioLevelSettingDataTableRow : public FDescRowBase {
public:

	uint64_t AudioLevelSettingID; // 0x10(0x08)
	float ThreePWeaponFireAttenuationScalingFactor; // 0x18(0x04)
	float ThreePWeaponFireCloseDistance; // 0x1c(0x04)
	float ThreePWeaponFireMedDistance; // 0x20(0x04)
	float ThreePWeaponFireFarDistance; // 0x24(0x04)
	float ThreePWeaponFireAttenuationScalingFactor_Silencer; // 0x28(0x04)
	float ThreePWeaponFireCloseDistance_Silencer; // 0x2c(0x04)
	float ThreePWeaponFireMedDistance_Silencer; // 0x30(0x04)
	float ThreePWeaponFireFarDistance_Silencer; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponFireAudioEventRecord
// Size: 0x20 (Inherited: 0x00)
struct FWeaponFireAudioEventRecord {
public:

	struct UWeaponFuncComponentAudio* WeaponAudioSourse; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct ACHARACTER* CHARACTER; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.SeekAudioContext
// Size: 0x18 (Inherited: 0x00)
struct FSeekAudioContext {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UGPAudioEventAsset* EventAsset; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.UIAudioEvent
// Size: 0x18 (Inherited: 0x00)
struct FUIAudioEvent {
public:

	enum class EUIAudioEvent EventType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UGPAudioEventAsset* AudioEvent; // 0x08(0x08)
	int32_t EventPriority; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponLoopEventConfigList
// Size: 0x10 (Inherited: 0x00)
struct FWeaponLoopEventConfigList {
public:

	struct TArray<struct FWeaponLoopEventConfig> LoopEvents; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponLoopEventConfig
// Size: 0x68 (Inherited: 0x00)
struct FWeaponLoopEventConfig {
public:

	enum class EGPWeaponInnerEvent WeaponEvent; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LoopAudioEventStart[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LoopAudioEventEnd[0x28]; // 0x30(0x28)
	int32_t Priority; // 0x58(0x04)
	struct FName TypeName; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponLoopEventConfigAsset
// Size: 0x30 (Inherited: 0x00)
struct FWeaponLoopEventConfigAsset {
public:

	enum class EGPWeaponInnerEvent WeaponEvent; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UGPAudioEventAsset* LoopAudioEventStart; // 0x08(0x08)
	struct UGPAudioEventAsset* LoopAudioEventEnd; // 0x10(0x08)
	int32_t Priority; // 0x18(0x04)
	struct FName TypeName; // 0x1c(0x08)
	uint32_t PlayingId; // 0x24(0x04)
	enum class EAudioCharacterViewState LastPostedCharacterState; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponAudioConfigAsset
// Size: 0x10 (Inherited: 0x00)
struct FWeaponAudioConfigAsset {
public:

	struct TArray<struct FWeaponAudioEventAsset> AudioEvent; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponAudioEventAsset
// Size: 0x18 (Inherited: 0x00)
struct FWeaponAudioEventAsset {
public:

	enum class EGPWeaponInnerEvent EventType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UGPAudioEventAsset* AudioEvent; // 0x08(0x08)
	int32_t EventPriority; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponAudioEvent
// Size: 0x38 (Inherited: 0x00)
struct FWeaponAudioEvent {
public:

	enum class EGPWeaponInnerEvent EventType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioEvent[0x28]; // 0x08(0x28)
	int32_t EventPriority; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponControlAudioRow
// Size: 0x3e0 (Inherited: 0x08)
struct FWeaponControlAudioRow : public FTableRowBase {
public:

	uint64_t ControlAudioID; // 0x08(0x08)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EnterAudio[0x28]; // 0x10(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ExitAudio[0x28]; // 0x38(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ZoomInAudio[0x28]; // 0x60(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ZoomOutAudio[0x28]; // 0x88(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char RotateEndHorizontalAudio[0x28]; // 0xb0(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char RotateEndVerticalAudio[0x28]; // 0xd8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char RotateStartAudio[0x28]; // 0x100(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char RotateStopAudio[0x28]; // 0x128(0x28)
	float RotateHitCD; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FString RotateHorizontalSpeed; // 0x158(0x10)
	struct FString RotateVerticalSpeed; // 0x168(0x10)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char DestroyBeginAudio[0x28]; // 0x178(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char DestroyEndAudio[0x28]; // 0x1a0(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ExplodeAudio[0x28]; // 0x1c8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LowHPStartAudio[0x28]; // 0x1f0(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LowHPStopAudio[0x28]; // 0x218(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char BeginOverHeatAudio[0x28]; // 0x240(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EndOverHeatAudio[0x28]; // 0x268(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char CoolDownBeginAudio[0x28]; // 0x290(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char CoolDownEndOAudio[0x28]; // 0x2b8(0x28)
	struct FString OverHeatRTPC; // 0x2e0(0x10)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AimAudio[0x28]; // 0x2f0(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char StartLockLoopAudio[0x28]; // 0x318(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char StopLockLoopAudio[0x28]; // 0x340(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char BeAimedAudio[0x28]; // 0x368(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char StartBeLockedLoopAudio[0x28]; // 0x390(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char StopBeLockedLoopAudio[0x28]; // 0x3b8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponGameModeAudioEventRow
// Size: 0x68 (Inherited: 0x08)
struct FWeaponGameModeAudioEventRow : public FTableRowBase {
public:

	enum class EDFMGamePlayMode GameMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EventOfGameModeBegin[0x28]; // 0x10(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EventOfGameModeEnd[0x28]; // 0x38(0x28)
	struct FName RTPCName; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.Weapon1PFireCache
// Size: 0x20 (Inherited: 0x00)
struct FWeapon1PFireCache {
public:

	struct TArray<struct UObject*> CacheAudioAssetsInUse; // 0x00(0x10)
	struct TArray<struct UObject*> CacheAudioAssetsNoInUse; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponAudioAssetSet
// Size: 0x01 (Inherited: 0x00)
struct FWeaponAudioAssetSet {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.CharacterAudioComponents
// Size: 0x18 (Inherited: 0x00)
struct FCharacterAudioComponents {
public:

	struct UDFMListenerComponent* ListenerComponent; // 0x00(0x08)
	struct UDFMCharacterAmbientAudioFSM* CharacterAmbientAudioFSM; // 0x08(0x08)
	struct UDFMCharacterAudioComponent* CharacterAudioComponent; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.ShellDropAudioPriority
// Size: 0x10 (Inherited: 0x00)
struct FShellDropAudioPriority {
public:

	struct UShellDropAudioDataAsset* ShellBounceAudioData; // 0x00(0x08)
	int32_t Priority; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponTypeAudioPriority
// Size: 0x10 (Inherited: 0x00)
struct FWeaponTypeAudioPriority {
public:

	struct UWeaponTypeAudioDataAsset* BulletAudioDataAsset; // 0x00(0x08)
	int32_t Priority; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponAudioPriority
// Size: 0x10 (Inherited: 0x00)
struct FWeaponAudioPriority {
public:

	struct UGPAudioEventAsset* AudioEventAssetData; // 0x00(0x08)
	int32_t Priority; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.GPAudioBulletFlyTraceResult
// Size: 0x54 (Inherited: 0x00)
struct FGPAudioBulletFlyTraceResult {
public:

	char pad_0[0x54]; // 0x00(0x54)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.GPAudioBulletFlyTraceParam
// Size: 0x74 (Inherited: 0x00)
struct FGPAudioBulletFlyTraceParam {
public:

	char pad_0[0x74]; // 0x00(0x74)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponAudioConfig
// Size: 0x10 (Inherited: 0x00)
struct FWeaponAudioConfig {
public:

	struct TArray<struct FWeaponAudioEvent> AudioEvent; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAudio.WeaponMainAudioDataRow
// Size: 0x878 (Inherited: 0x08)
struct FWeaponMainAudioDataRow : public FTableRowBase {
public:

	struct FName ResourceId; // 0x08(0x08)
	struct FString Desc; // 0x10(0x10)
	struct FGPAudioMIDIEvent MIDIFireEvent; // 0x20(0x88)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LastFireOfClipAudioEvent[0x28]; // 0xa8(0x28)
	struct TArray<struct FWeaponLoopEventConfig> LoopAudioEvent; // 0xd0(0x10)
	struct FGPAudio3PFireEvent Close3PFireEvent; // 0xe0(0xc8)
	struct FGPAudio3PFireEvent Med3PFireEvent; // 0x1a8(0xc8)
	struct FGPAudio3PFireEvent Far3PFireEvent; // 0x270(0xc8)
	struct FGPAudio3PFireEvent Dist3PFireEvent; // 0x338(0xc8)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char DryfireAudioEvent[0x28]; // 0x400(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char RicochetEvent[0x28]; // 0x428(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char UnEquipEvent[0x28]; // 0x450(0x28)
	float UnEquipDelay; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EquipEvent[0x28]; // 0x480(0x28)
	float EquipDelay; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char SwitchFireModeEvent[0x28]; // 0x4b0(0x28)
	float SwitchFireModeDelay; // 0x4d8(0x04)
	bool SwitchFireMode_EnemyAudible; // 0x4dc(0x01)
	bool SwitchFireMode_FriendAudible; // 0x4dd(0x01)
	char pad_4DE[0x2]; // 0x4de(0x02)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char SwitchScopeEvent[0x28]; // 0x4e0(0x28)
	float SwitchScopeDelay; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ZoomInEvent[0x28]; // 0x510(0x28)
	float ZoomInDelay; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ZoomOutEvent[0x28]; // 0x540(0x28)
	float ZoomOutDelay; // 0x568(0x04)
	bool ZoomInOrOut_EnemyAudible; // 0x56c(0x01)
	bool ZoomInOrOut_FriendAudible; // 0x56d(0x01)
	char pad_56E[0x2]; // 0x56e(0x02)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char SwitchSildeAimEvent[0x28]; // 0x570(0x28)
	float SwitchSildeAimDelay; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char SwitchSecondaryAimEvent[0x28]; // 0x5a0(0x28)
	float SwitchSecondaryAimDelay; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char SwitchZoomRateEvent[0x28]; // 0x5d0(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char SwitchTacticalEquipEvent[0x28]; // 0x5f8(0x28)
	float SwitchTacticalEquipDelay; // 0x620(0x04)
	bool SwitchTacticalEquip_EnemyAudible; // 0x624(0x01)
	bool SwitchTacticalEquip_FriendAudible; // 0x625(0x01)
	char pad_626[0x2]; // 0x626(0x02)
	float PreThrowDelay; // 0x628(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char PreThrowEvent[0x28]; // 0x630(0x28)
	float ThrowDelay; // 0x658(0x04)
	char pad_65C[0x4]; // 0x65c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ThrowEvent[0x28]; // 0x660(0x28)
	float FastThrowDelay; // 0x688(0x04)
	char pad_68C[0x4]; // 0x68c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char FastThrowEvent[0x28]; // 0x690(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char PrefireStartEvent[0x28]; // 0x6b8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char PrefireEndEvent[0x28]; // 0x6e0(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char HoldIdleStartEvent[0x28]; // 0x708(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char HoldIdleEndEvent[0x28]; // 0x730(0x28)
	/*struct TSoftObjectPtr<UWeaponTypeAudioDataAsset>*/char BulletAudioDataAsset[0x28]; // 0x758(0x28)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UGPAudioEventAsset>>*/char AnimationAudios[0x50]; // 0x780(0x50)
	bool bEnableShellBounceAudioAfterfire; // 0x7d0(0x01)
	char pad_7D1[0x7]; // 0x7d1(0x07)
	/*struct TSoftObjectPtr<UShellDropAudioDataAsset>*/char ShellBounceAudioDataAsset[0x28]; // 0x7d8(0x28)
	struct FWeaponAudioConfig WeaponAudio; // 0x800(0x10)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char BulletWooshEvent[0x28]; // 0x810(0x28)
	bool bForceAISingleFire; // 0x838(0x01)
	char pad_839[0x3]; // 0x839(0x03)
	float fAILoopTailTime; // 0x83c(0x04)
	bool bUseAIStableFire; // 0x840(0x01)
	char pad_841[0x3]; // 0x841(0x03)
	float fAIStableFireTailTime; // 0x844(0x04)
	float CustomAIFireInterval; // 0x848(0x04)
	int32_t CustomContinuousFireNum; // 0x84c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AutoAddAmmoEvent[0x28]; // 0x850(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
