
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : int {
	EndOfEvent = 0,
	Marker = 1,
	Duration = 2,
	Starvation = 3,
	MusicPlayStarted = 4,
	MusicSyncBeat = 5,
	MusicSyncBar = 6,
	MusicSyncEntry = 7,
	MusicSyncExit = 8,
	MusicSyncGrid = 9,
	MusicSyncUserCue = 10,
	MusicSyncPoint = 11,
	MIDIEvent = 12,
	EAkCallbackType_MAX = 13
};

// Enum AkAudio.EAkResult
enum class EAkResult : int {
	NotImplemented = 0,
	Success = 1,
	Fail = 2,
	PartialSuccess = 3,
	NotCompatible = 4,
	AlreadyConnected = 5,
	InvalidFile = 6,
	AudioFileHeaderTooLarge = 7,
	MaxReached = 8,
	InvalidID = 9,
	IDNotFound = 10,
	InvalidInstanceID = 11,
	NoMoreData = 12,
	InvalidStateGroup = 13,
	ChildAlreadyHasAParent = 14,
	InvalidLanguage = 15,
	CannotAddItseflAsAChild = 16,
	InvalidParameter = 17,
	ElementAlreadyInList = 18,
	PathNotFound = 19,
	PathNoVertices = 20,
	PathNotRunning = 21,
	PathNotPaused = 22,
	PathNodeAlreadyInList = 23,
	PathNodeNotInList = 24,
	DataNeeded = 25,
	NoDataNeeded = 26,
	DataReady = 27,
	NoDataReady = 28,
	InsufficientMemory = 29,
	Cancelled = 30,
	UnknownBankID = 31,
	BankReadError = 32,
	InvalidSwitchType = 33,
	FormatNotReady = 34,
	WrongBankVersion = 35,
	FileNotFound = 36,
	DeviceNotReady = 37,
	BankAlreadyLoaded = 38,
	RenderedFX = 39,
	ProcessNeeded = 40,
	ProcessDone = 41,
	MemManagerNotInitialized = 42,
	StreamMgrNotInitialized = 43,
	SSEInstructionsNotSupported = 44,
	Busy = 45,
	UnsupportedChannelConfig = 46,
	PluginMediaNotAvailable = 47,
	MustBeVirtualized = 48,
	CommandTooLarge = 49,
	RejectedByFilter = 50,
	InvalidCustomPlatformName = 51,
	DLLCannotLoad = 52,
	DLLPathNotFound = 53,
	NoJavaVM = 54,
	OpenSLError = 55,
	PluginNotRegistered = 56,
	DataAlignmentError = 57,
	EAkResult_MAX = 58
};

// Enum AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : int {
	AAudio = 0,
	OpenSL_ES = 1,
	EAkAndroidAudioAPI_MAX = 2
};

// Enum AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : int {
	Default = 0,
	VoiceChat = 1,
	GameChat = 2,
	VideoRecording = 3,
	Measurement = 4,
	MoviePlayback = 5,
	VideoChat = 6,
	EAkAudioSessionMode_MAX = 7
};

// Enum AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : int {
	MixWithOthers = 0,
	DuckOthers = 1,
	AllowBluetooth = 2,
	DefaultToSpeaker = 3,
	EAkAudioSessionCategoryOptions_MAX = 4
};

// Enum AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : int {
	Ambient = 0,
	SoloAmbient = 1,
	PlayAndRecord = 2,
	EAkAudioSessionCategory_MAX = 3
};

// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : int {
	Wall = 0,
	Ceiling = 1,
	Floor = 2,
	EReflectionFilterBits_MAX = 3
};

// Enum AkAudio.AkCodecId
enum class AkCodecId : int {
	None = 0,
	PCM = 1,
	ADPCM = 2,
	XMA = 3,
	Vorbis = 4,
	AAC = 5,
	ATRAC9 = 6,
	OpusNX = 7,
	AkOpus = 8,
	AkOpusWEM = 9,
	AkCodecId_MAX = 10
};

// Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : int {
	AkMidiCcBankSelectCoarse = 0,
	AkMidiCcModWheelCoarse = 1,
	AkMidiCcBreathCtrlCoarse = 2,
	AkMidiCcCtrl3Coarse = 3,
	AkMidiCcFootPedalCoarse = 4,
	AkMidiCcPortamentoCoarse = 5,
	AkMidiCcDataEntryCoarse = 6,
	AkMidiCcVolumeCoarse = 7,
	AkMidiCcBalanceCoarse = 8,
	AkMidiCcCtrl9Coarse = 9,
	AkMidiCcPanPositionCoarse = 10,
	AkMidiCcExpressionCoarse = 11,
	AkMidiCcEffectCtrl1Coarse = 12,
	AkMidiCcEffectCtrl2Coarse = 13,
	AkMidiCcCtrl14Coarse = 14,
	AkMidiCcCtrl15Coarse = 15,
	AkMidiCcGenSlider1 = 16,
	AkMidiCcGenSlider2 = 17,
	AkMidiCcGenSlider3 = 18,
	AkMidiCcGenSlider4 = 19,
	AkMidiCcCtrl20Coarse = 20,
	AkMidiCcCtrl21Coarse = 21,
	AkMidiCcCtrl22Coarse = 22,
	AkMidiCcCtrl23Coarse = 23,
	AkMidiCcCtrl24Coarse = 24,
	AkMidiCcCtrl25Coarse = 25,
	AkMidiCcCtrl26Coarse = 26,
	AkMidiCcCtrl27Coarse = 27,
	AkMidiCcCtrl28Coarse = 28,
	AkMidiCcCtrl29Coarse = 29,
	AkMidiCcCtrl30Coarse = 30,
	AkMidiCcCtrl31Coarse = 31,
	AkMidiCcBankSelectFine = 32,
	AkMidiCcModWheelFine = 33,
	AkMidiCcBreathCtrlFine = 34,
	AkMidiCcCtrl3Fine = 35,
	AkMidiCcFootPedalFine = 36,
	AkMidiCcPortamentoFine = 37,
	AkMidiCcDataEntryFine = 38,
	AkMidiCcVolumeFine = 39,
	AkMidiCcBalanceFine = 40,
	AkMidiCcCtrl9Fine = 41,
	AkMidiCcPanPositionFine = 42,
	AkMidiCcExpressionFine = 43,
	AkMidiCcEffectCtrl1Fine = 44,
	AkMidiCcEffectCtrl2Fine = 45,
	AkMidiCcCtrl14Fine = 46,
	AkMidiCcCtrl15Fine = 47,
	AkMidiCcCtrl20Fine = 48,
	AkMidiCcCtrl21Fine = 49,
	AkMidiCcCtrl22Fine = 50,
	AkMidiCcCtrl23Fine = 51,
	AkMidiCcCtrl24Fine = 52,
	AkMidiCcCtrl25Fine = 53,
	AkMidiCcCtrl26Fine = 54,
	AkMidiCcCtrl27Fine = 55,
	AkMidiCcCtrl28Fine = 56,
	AkMidiCcCtrl29Fine = 57,
	AkMidiCcCtrl30Fine = 58,
	AkMidiCcCtrl31Fine = 59,
	AkMidiCcHoldPedal = 60,
	AkMidiCcPortamentoOnOff = 61,
	AkMidiCcSustenutoPedal = 62,
	AkMidiCcSoftPedal = 63,
	AkMidiCcLegatoPedal = 64,
	AkMidiCcHoldPedal2 = 65,
	AkMidiCcSoundVariation = 66,
	AkMidiCcSoundTimbre = 67,
	AkMidiCcSoundReleaseTime = 68,
	AkMidiCcSoundAttackTime = 69,
	AkMidiCcSoundBrightness = 70,
	AkMidiCcSoundCtrl6 = 71,
	AkMidiCcSoundCtrl7 = 72,
	AkMidiCcSoundCtrl8 = 73,
	AkMidiCcSoundCtrl9 = 74,
	AkMidiCcSoundCtrl10 = 75,
	AkMidiCcGeneralButton1 = 76,
	AkMidiCcGeneralButton2 = 77,
	AkMidiCcGeneralButton3 = 78,
	AkMidiCcGeneralButton4 = 79,
	AkMidiCcReverbLevel = 80,
	AkMidiCcTremoloLevel = 81,
	AkMidiCcChorusLevel = 82,
	AkMidiCcCelesteLevel = 83,
	AkMidiCcPhaserLevel = 84,
	AkMidiCcDataButtonP1 = 85,
	AkMidiCcDataButtonM1 = 86,
	AkMidiCcNonRegisterCoarse = 87,
	AkMidiCcNonRegisterFine = 88,
	AkMidiCcAllSoundOff = 89,
	AkMidiCcAllControllersOff = 90,
	AkMidiCcLocalKeyboard = 91,
	AkMidiCcAllNotesOff = 92,
	AkMidiCcOmniModeOff = 93,
	AkMidiCcOmniModeOn = 94,
	AkMidiCcOmniMonophonicOn = 95,
	AkMidiCcOmniPolyphonicOn = 96,
	EAkMidiCcValues_MAX = 97
};

// Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : int {
	AkMidiEventTypeInvalid = 0,
	AkMidiEventTypeNoteOff = 1,
	AkMidiEventTypeNoteOn = 2,
	AkMidiEventTypeNoteAftertouch = 3,
	AkMidiEventTypeController = 4,
	AkMidiEventTypeProgramChange = 5,
	AkMidiEventTypeChannelAftertouch = 6,
	AkMidiEventTypePitchBend = 7,
	AkMidiEventTypeSysex = 8,
	AkMidiEventTypeEscape = 9,
	AkMidiEventTypeMeta = 10,
	EAkMidiEventType_MAX = 11
};

// Enum AkAudio.ERTPCValueType
enum class ERTPCValueType : int {
	Default = 0,
	Global = 1,
	GameObject = 2,
	PlayingID = 3,
	Unavailable = 4,
	ERTPCValueType_MAX = 5
};

// Enum AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : int {
	Log3 = 0,
	Sine = 1,
	Log1 = 2,
	InvSCurve = 3,
	Linear = 4,
	SCurve = 5,
	Exp1 = 6,
	SineRecip = 7,
	Exp3 = 8,
	LastFadeCurve = 9,
	Constant = 10,
	EAkCurveInterpolation_MAX = 11
};

// Enum AkAudio.AkActionOnEventType
enum class AkActionOnEventType : int {
	Stop = 0,
	Pause = 1,
	Resume = 2,
	Break = 3,
	ReleaseEnvelope = 4,
	AkActionOnEventType_MAX = 5
};

// Enum AkAudio.AkMultiPositionType
enum class AkMultiPositionType : int {
	SingleSource = 0,
	MultiSources = 1,
	MultiDirections = 2,
	AkMultiPositionType_MAX = 3
};

// Enum AkAudio.AkSpeakerConfiguration
enum class AkSpeakerConfiguration : int {
	Ak_Speaker_Front_Left = 0,
	Ak_Speaker_Front_Right = 1,
	Ak_Speaker_Front_Center = 2,
	Ak_Speaker_Low_Frequency = 3,
	Ak_Speaker_Back_Left = 4,
	Ak_Speaker_Back_Right = 5,
	Ak_Speaker_Back_Center = 6,
	Ak_Speaker_Side_Left = 7,
	Ak_Speaker_Side_Right = 8,
	Ak_Speaker_Top = 9,
	Ak_Speaker_Height_Front_Left = 10,
	Ak_Speaker_Height_Front_Center = 11,
	Ak_Speaker_Height_Front_Right = 12,
	Ak_Speaker_Height_Back_Left = 13,
	Ak_Speaker_Height_Back_Center = 14,
	Ak_Speaker_Height_Back_Right = 15,
	Ak_Speaker_MAX = 16
};

// Enum AkAudio.AkChannelConfiguration
enum class AkChannelConfiguration : int {
	Ak_Parent = 0,
	Ak_LFE = 1,
	Ak_1_1 = 2,
	Ak_2_1 = 3,
	Ak_2_2 = 4,
	Ak_3_1 = 5,
	Ak_3_2 = 6,
	Ak_4_1 = 7,
	Ak_4_2 = 8,
	Ak_5_1 = 9,
	Ak_5_2 = 10,
	Ak_7_2 = 11,
	Ak_5_1_3 = 12,
	Ak_7_1_3 = 13,
	Ak_7_1_5 = 14,
	Ak_Auro_9_2 = 15,
	Ak_Auro_10_2 = 16,
	Ak_Auro_11_2 = 17,
	Ak_Auro_13_2 = 18,
	Ak_Ambisonics_1st_order = 19,
	Ak_Ambisonics_2nd_order = 20,
	Ak_Ambisonics_3rd_order = 21,
	Ak_MAX = 22
};

// Enum AkAudio.AkAcousticPortalState
enum class AkAcousticPortalState : int {
	Closed = 0,
	Open = 1,
	AkAcousticPortalState_MAX = 2
};

// Enum AkAudio.PanningRule
enum class PanningRule : int {
	PanningRule_Speakers = 0,
	PanningRule_Headphones = 1,
	PanningRule_MAX = 2
};

// Enum AkAudio.LeakingMediaMemTickRule
enum class LeakingMediaMemTickRule : int {
	None = 0,
	TryUnsetMedia = 1,
	ForceUnsetMedia_NonPlaying = 2,
	LeakingMediaMemTickRule_MAX = 3
};

// Enum AkAudio.MediaMemReuseRule
enum class MediaMemReuseRule : int {
	None = 0,
	Only_Leaking = 1,
	Leaking_And_OnSetting = 2,
	MediaMemReuseRule_MAX = 3
};

// Enum AkAudio.AkMeshType
enum class AkMeshType : int {
	StaticMesh = 0,
	CollisionMesh = 1,
	AkMeshType_MAX = 2
};

// Enum AkAudio.EAkHololensAudioAPI
enum class EAkHololensAudioAPI : int {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkHololensAudioAPI_MAX = 3
};

// Enum AkAudio.EAkCommSystem
enum class EAkCommSystem : int {
	Socket = 0,
	HTCS = 1,
	EAkCommSystem_MAX = 2
};

// Enum AkAudio.EAkChannelMask
enum class EAkChannelMask : int {
	FrontLeft = 0,
	FrontRight = 1,
	FrontCenter = 2,
	LowFrequency = 3,
	BackLeft = 4,
	BackRight = 5,
	BackCenter = 6,
	SideLeft = 7,
	SideRight = 8,
	Top = 9,
	HeightFrontLeft = 10,
	HeightFrontCenter = 11,
	HeightFrontRight = 12,
	HeightBackLeft = 13,
	HeightBackCenter = 14,
	HeightBackRight = 15,
	EAkChannelMask_MAX = 16
};

// Enum AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : int {
	Anonymous = 0,
	Standard = 1,
	Ambisonic = 2,
	EAkChannelConfigType_MAX = 3
};

// Enum AkAudio.EAkDiffractionFlags
enum class EAkDiffractionFlags : int {
	UseBuiltInParam = 0,
	UseObstruction = 1,
	CalcEmitterVirtualPosition = 2,
	EAkDiffractionFlags_MAX = 3
};

// Enum AkAudio.EAkPanningRule
enum class EAkPanningRule : int {
	Speakers = 0,
	Headphones = 1,
	EAkPanningRule_MAX = 2
};

// Enum AkAudio.EAkOcclusionTraceType
enum class EAkOcclusionTraceType : int {
	Default = 0,
	OnlyListenerToSourceSurfaceTrace = 1,
	FourFurthestPointEvaluation = 2,
	EAkOcclusionTraceType_MAX = 3
};

// Enum AkAudio.EAkWindowsAudioAPI
enum class EAkWindowsAudioAPI : int {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkWindowsAudioAPI_MAX = 3
};

// ScriptStruct AkAudio.AKWaapiJsonObject
// Size: 0x10 (Inherited: 0x00)
struct FAKWaapiJsonObject {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkWaapiSubscriptionId
// Size: 0x08 (Inherited: 0x00)
struct FAkWaapiSubscriptionId {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// Size: 0x01 (Inherited: 0x00)
struct FAkAmbSoundCheckpointRecord {
public:

	bool bCurrentlyPlaying; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkAndroidDeviceSpecializeAudioApiInfo
// Size: 0x18 (Inherited: 0x00)
struct FAkAndroidDeviceSpecializeAudioApiInfo {
public:

	struct FString DeviceName; // 0x00(0x10)
	int32_t ApiLevel; // 0x10(0x04)
	uint32_t AudioAPI; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkAudioSession
// Size: 0x0c (Inherited: 0x00)
struct FAkAudioSession {
public:

	enum class EAkAudioSessionCategory AudioSessionCategory; // 0x00(0x04)
	uint32_t AudioSessionCategoryOptions; // 0x04(0x04)
	enum class EAkAudioSessionMode AudioSessionMode; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkExternalSourceInfo
// Size: 0x38 (Inherited: 0x00)
struct FAkExternalSourceInfo {
public:

	struct FString ExternalSrcName; // 0x00(0x10)
	enum class AkCodecId CodecID; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Filename; // 0x18(0x10)
	struct UAkExternalMediaAsset* ExternalSourceAsset; // 0x28(0x08)
	bool IsStreamed; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkSegmentInfo
// Size: 0x24 (Inherited: 0x00)
struct FAkSegmentInfo {
public:

	int32_t CurrentPosition; // 0x00(0x04)
	int32_t PreEntryDuration; // 0x04(0x04)
	int32_t ActiveDuration; // 0x08(0x04)
	int32_t PostExitDuration; // 0x0c(0x04)
	int32_t RemainingLookAheadTime; // 0x10(0x04)
	float BeatDuration; // 0x14(0x04)
	float BarDuration; // 0x18(0x04)
	float GridDuration; // 0x1c(0x04)
	float GridOffset; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkChannelMask
// Size: 0x04 (Inherited: 0x00)
struct FAkChannelMask {
public:

	int32_t ChannelMask; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkGeometrySurfaceOverride
// Size: 0x10 (Inherited: 0x00)
struct FAkGeometrySurfaceOverride {
public:

	struct UAkAcousticTexture* AcousticTexture; // 0x00(0x08)
	char bEnableOcclusionOverride : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float OcclusionValue; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkGeometryData
// Size: 0x50 (Inherited: 0x00)
struct FAkGeometryData {
public:

	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FAkAcousticSurface> Surfaces; // 0x10(0x10)
	struct TArray<struct FAkTriangle> Triangles; // 0x20(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideOcclusion; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkTriangle
// Size: 0x08 (Inherited: 0x00)
struct FAkTriangle {
public:

	uint16_t Point0; // 0x00(0x02)
	uint16_t Point1; // 0x02(0x02)
	uint16_t Point2; // 0x04(0x02)
	uint16_t Surface; // 0x06(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkAcousticSurface
// Size: 0x18 (Inherited: 0x00)
struct FAkAcousticSurface {
public:

	uint32_t Texture; // 0x00(0x04)
	float Occlusion; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkPluginInfo
// Size: 0x28 (Inherited: 0x00)
struct FAkPluginInfo {
public:

	struct FString Name; // 0x00(0x10)
	uint32_t PluginID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString dll; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkBoolPropertyToControl
// Size: 0x10 (Inherited: 0x00)
struct FAkBoolPropertyToControl {
public:

	struct FString ItemProperty; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkPropertyToControl
// Size: 0x10 (Inherited: 0x00)
struct FAkPropertyToControl {
public:

	struct FString ItemProperty; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
// Size: 0x30 (Inherited: 0x00)
struct FAkGeometrySurfacePropertiesToMap {
public:

	/*struct TSoftObjectPtr<UAkAcousticTexture>*/char AcousticTexture[0x28]; // 0x00(0x28)
	float OcclusionValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkPoly
// Size: 0x10 (Inherited: 0x00)
struct FAkPoly {
public:

	struct UAkAcousticTexture* Texture; // 0x00(0x08)
	float Occlusion; // 0x08(0x04)
	bool EnableSurface; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkWaapiFieldNames
// Size: 0x10 (Inherited: 0x00)
struct FAkWaapiFieldNames {
public:

	struct FString FieldName; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkWaapiUri
// Size: 0x10 (Inherited: 0x00)
struct FAkWaapiUri {
public:

	struct FString Uri; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
// Size: 0x08 (Inherited: 0x00)
struct FAkXboxOneApuHeapInitializationSettings {
public:

	uint32_t CachedSize; // 0x00(0x04)
	uint32_t NonCachedSize; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// Size: 0x20 (Inherited: 0x00)
struct FAkAudioEventTrackKey {
public:

	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate {
public:

	struct UMovieSceneAkAudioEventSection* Section; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate {
public:

	struct UMovieSceneAkAudioRTPCSection* Section; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneFloatChannelSerializationHelper {
public:

	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x00(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<int32_t> Times; // 0x08(0x10)
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values; // 0x18(0x10)
	float DefaultValue; // 0x28(0x04)
	bool bHasDefaultValue; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkAdvancedSpatialAudioSettings
// Size: 0x08 (Inherited: 0x00)
struct FAkAdvancedSpatialAudioSettings {
public:

	float DiffractionShadowAttenuationFactor; // 0x00(0x04)
	float DiffractionShadowDegrees; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkMidiEventBase
// Size: 0x02 (Inherited: 0x00)
struct FAkMidiEventBase {
public:

	enum class EAkMidiEventType Type; // 0x00(0x01)
	char Chan; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkSpatialAudioSettings
// Size: 0x20 (Inherited: 0x00)
struct FAkSpatialAudioSettings {
public:

	uint32_t MaxSoundPropagationDepth; // 0x00(0x04)
	uint32_t DiffractionFlags; // 0x04(0x04)
	float MovementThreshold; // 0x08(0x04)
	uint32_t NumberOfPrimaryRays; // 0x0c(0x04)
	uint32_t ReflectionOrder; // 0x10(0x04)
	bool EnableDiffractionOnReflections; // 0x14(0x01)
	bool EnableDirectPathDiffraction; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float MaximumPathLength; // 0x18(0x04)
	bool EnableTransmission; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkMainOutputSettings
// Size: 0x28 (Inherited: 0x00)
struct FAkMainOutputSettings {
public:

	struct FString AudioDeviceShareset; // 0x00(0x10)
	uint32_t DeviceID; // 0x10(0x04)
	enum class EAkPanningRule PanningRule; // 0x14(0x04)
	enum class EAkChannelConfigType ChannelConfigType; // 0x18(0x04)
	uint32_t ChannelMask; // 0x1c(0x04)
	uint32_t NumberOfChannels; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkCommunicationSettings
// Size: 0x20 (Inherited: 0x00)
struct FAkCommunicationSettings {
public:

	uint32_t PoolSize; // 0x00(0x04)
	uint16_t DiscoveryBroadcastPort; // 0x04(0x02)
	uint16_t CommandPort; // 0x06(0x02)
	uint16_t NotificationPort; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FString NetworkName; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkWwiseObjectDetails
// Size: 0x30 (Inherited: 0x00)
struct FAkWwiseObjectDetails {
public:

	struct FString ItemName; // 0x00(0x10)
	struct FString ItemPath; // 0x10(0x10)
	struct FString ItemID; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneTangentDataSerializationHelper {
public:

	float ArriveTangent; // 0x00(0x04)
	float LeaveTangent; // 0x04(0x04)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ArriveTangentWeight; // 0x0c(0x04)
	float LeaveTangentWeight; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettings
// Size: 0x34 (Inherited: 0x00)
struct FAkAdvancedInitializationSettings {
public:

	uint32_t IO_MemorySize; // 0x00(0x04)
	uint32_t IO_Granularity; // 0x04(0x04)
	float TargetAutoStreamBufferLength; // 0x08(0x04)
	bool UseStreamCache; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	uint32_t MaximumPinnedBytesInCache; // 0x10(0x04)
	bool EnableGameSyncPreparation; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	uint32_t ContinuousPlaybackLookAhead; // 0x18(0x04)
	uint32_t MonitorQueuePoolSize; // 0x1c(0x04)
	uint32_t MaximumHardwareTimeoutMs; // 0x20(0x04)
	bool DebugOutOfRangeCheckEnabled; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float DebugOutOfRangeLimit; // 0x28(0x04)
	struct FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x2c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkMidiProgramChange
// Size: 0x03 (Inherited: 0x02)
struct FAkMidiProgramChange : public FAkMidiEventBase {
public:

	char ProgramNum; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkMidiChannelAftertouch
// Size: 0x03 (Inherited: 0x02)
struct FAkMidiChannelAftertouch : public FAkMidiEventBase {
public:

	char Value; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkMidiNoteAftertouch
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiNoteAftertouch : public FAkMidiEventBase {
public:

	char Note; // 0x02(0x01)
	char Value; // 0x03(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkMidiPitchBend
// Size: 0x08 (Inherited: 0x02)
struct FAkMidiPitchBend : public FAkMidiEventBase {
public:

	char ValueLsb; // 0x02(0x01)
	char ValueMsb; // 0x03(0x01)
	int32_t FullValue; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkMidiCc
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiCc : public FAkMidiEventBase {
public:

	enum class EAkMidiCcValues Cc; // 0x02(0x01)
	char Value; // 0x03(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkMidiNoteOnOff
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiNoteOnOff : public FAkMidiEventBase {
public:

	char Note; // 0x02(0x01)
	char Velocity; // 0x03(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkMidiGeneric
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiGeneric : public FAkMidiEventBase {
public:

	char Param1; // 0x02(0x01)
	char Param2; // 0x03(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkCommonInitializationSettings
// Size: 0x60 (Inherited: 0x00)
struct FAkCommonInitializationSettings {
public:

	uint32_t MaximumNumberOfMemoryPools; // 0x00(0x04)
	uint32_t MaximumNumberOfPositioningPaths; // 0x04(0x04)
	uint32_t CommandQueueSize; // 0x08(0x04)
	uint32_t SamplesPerFrame; // 0x0c(0x04)
	struct FAkMainOutputSettings MainOutputSettings; // 0x10(0x28)
	float StreamingLookAheadRatio; // 0x38(0x04)
	uint16_t NumberOfRefillsInVoice; // 0x3c(0x02)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FAkSpatialAudioSettings SpatialAudioSettings; // 0x40(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
// Size: 0x28 (Inherited: 0x20)
struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings {
public:

	enum class EAkCommSystem CommunicationSystem; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
// Size: 0x28 (Inherited: 0x20)
struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings {
public:

	bool InitializeSystemComms; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkWwiseItemToControl
// Size: 0x40 (Inherited: 0x00)
struct FAkWwiseItemToControl {
public:

	struct FAkWwiseObjectDetails ItemPicked; // 0x00(0x30)
	struct FString ItemPath; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// Size: 0x1c (Inherited: 0x00)
struct FMovieSceneFloatValueSerializationHelper {
public:

	float Value; // 0x00(0x04)
	enum class ERichCurveInterpMode InterpMode; // 0x04(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FMovieSceneTangentDataSerializationHelper Tangent; // 0x08(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
// Size: 0x38 (Inherited: 0x34)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings {
public:

	bool EnableMultiCoreRendering; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
// Size: 0x68 (Inherited: 0x60)
struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings {
public:

	uint32_t SampleRate; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
// Size: 0x68 (Inherited: 0x38)
struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
public:

	uint32_t AudioAPI; // 0x38(0x04)
	bool RoundFrameSizeToHardwareSize; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t MiniAAudioAndroidApiLevel; // 0x40(0x04)
	int32_t MiniLevelMustUseAAudio; // 0x44(0x04)
	struct TArray<struct FString> AAudioBlackList; // 0x48(0x10)
	struct TArray<struct FAkAndroidDeviceSpecializeAudioApiInfo> SpecialDeviceList; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
public:

	uint32_t AudioAPI; // 0x38(0x04)
	bool GlobalFocus; // 0x3c(0x01)
	bool UseHeadMountedDisplayAudioDevice; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
public:

	uint32_t ACPBatchBufferSize; // 0x38(0x04)
	bool UseHardwareCodecLowLatencyMode; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
public:

	uint32_t AudioAPI; // 0x38(0x04)
	bool GlobalFocus; // 0x3c(0x01)
	bool UseHeadMountedDisplayAudioDevice; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
// Size: 0x3c (Inherited: 0x38)
struct FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
public:

	uint16_t MaximumNumberOfXMAVoices; // 0x38(0x02)
	bool UseHardwareCodecLowLatencyMode; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
