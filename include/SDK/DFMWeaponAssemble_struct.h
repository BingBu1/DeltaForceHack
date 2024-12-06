
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMWeaponAssemble.EWeaponLoadStatus
enum class EWeaponLoadStatus : int {
	None = 0,
	LoadingMesh = 1,
	LoadingMaterial = 2,
	Success = 3,
	Faild = 4,
	EWeaponLoadStatus_MAX = 5
};

// Enum DFMWeaponAssemble.EFastEquipOpreationCode
enum class EFastEquipOpreationCode : int {
	Deault = 0,
	Add = 1,
	Remove = 2,
	Conflict = 3,
	VirtualPrepare = 4,
	VirtualPost = 5,
	EFastEquipOpreationCode_MAX = 6
};

// Enum DFMWeaponAssemble.EAssemblePartSocketType
enum class EAssemblePartSocketType : int {
	None = 0,
	Default = 1,
	RulesSocket = 2,
	EAssemblePartSocketType_MAX = 3
};

// Enum DFMWeaponAssemble.ECaptureRTResult
enum class ECaptureRTResult : int {
	Waiting = 0,
	Success = 1,
	Fail_WeaponIsNULL = 2,
	Fail_ConfigIsError = 3,
	Fail_RTSizeIsZero = 4,
	Fail_RTIsNULL = 5,
	Fail_WeaponBoundsIsZero = 6,
	ECaptureRTResult_MAX = 7
};

// Enum DFMWeaponAssemble.ERTICaptureType
enum class ERTICaptureType : int {
	Game = 0,
	Editor = 1,
	ERTICaptureType_MAX = 2
};

// Enum DFMWeaponAssemble.ERTICaptureMeshProcess
enum class ERTICaptureMeshProcess : int {
	CaptureNone = 0,
	CaptureLowIcon = 1,
	CaptureHighIcon = 2,
	ERTICaptureMeshProcess_MAX = 3
};

// Enum DFMWeaponAssemble.ERTICaptureState
enum class ERTICaptureState : int {
	RTICaptureWaiting = 0,
	RTICaptureFail = 1,
	RTICaptureSuccess = 2,
	ERTICaptureState_MAX = 3
};

// Enum DFMWeaponAssemble.ERTIActionProcess
enum class ERTIActionProcess : int {
	Init = 0,
	Loading = 1,
	LoadFail = 2,
	LoadSuccess = 3,
	Capturing = 4,
	CaptureFail = 5,
	CaptureSuccess = 6,
	MergeSuccessOrFallBack = 7,
	Discard = 8,
	ERTIActionProcess_MAX = 9
};

// Enum DFMWeaponAssemble.ERTIMerge
enum class ERTIMerge : int {
	Close = 0,
	AllIcon = 1,
	OnlyWeaponIcon = 2,
	OnlyStaticIcon = 3,
	ERTIMerge_MAX = 4
};

// Enum DFMWeaponAssemble.ERTIEnable
enum class ERTIEnable : int {
	DisableAll = 0,
	EnableAll = 1,
	EnableWeaponIcon = 2,
	EnableStaticIcon = 3,
	ERTIEnable_MAX = 4
};

// Enum DFMWeaponAssemble.EWeaponPresetGenerateType
enum class EWeaponPresetGenerateType : int {
	CompletelyRandom = 0,
	MainAttribute = 1,
	OnlyMainAttribute = 2,
	EWeaponPresetGenerateType_MAX = 3
};

// ScriptStruct DFMWeaponAssemble.FastEquipResult
// Size: 0x78 (Inherited: 0x00)
struct FFastEquipResult {
public:

	char bSuccess : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<uint64_t> RecyclePartGids; // 0x08(0x10)
	struct TArray<uint64_t> RecyclePartItemIds; // 0x18(0x10)
	struct TArray<uint32_t> RecyclePartIndexs; // 0x28(0x10)
	struct TArray<uint32_t> RecyclePartSocketIds; // 0x38(0x10)
	struct TArray<uint64_t> RecycleSocketGUIDs; // 0x48(0x10)
	struct TArray<struct FItemInfoContext> RecycleItemInfos; // 0x58(0x10)
	struct TArray<struct FFastEquipResultDebugInfo> DebugInfos; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.FastEquipResultDebugInfo
// Size: 0x20 (Inherited: 0x00)
struct FFastEquipResultDebugInfo {
public:

	char OpreationCode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t OpreationID; // 0x08(0x08)
	uint64_t FromID; // 0x10(0x08)
	uint64_t SocketGUID; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.PinchParams
// Size: 0x18 (Inherited: 0x00)
struct FPinchParams {
public:

	float PinchSpeed; // 0x00(0x04)
	float FovFactorWhenPinch; // 0x04(0x04)
	float FovFactorForReturn; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.CameraResetParamsRow
// Size: 0x20 (Inherited: 0x10)
struct FCameraResetParamsRow : public FDescRowBase {
public:

	enum class EAssemblerCamPoint CameraPoint; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ResetCamLength; // 0x14(0x04)
	char bResetOffsetYToZero : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.GunSlideParamsRow
// Size: 0x20 (Inherited: 0x10)
struct FGunSlideParamsRow : public FDescRowBase {
public:

	struct TArray<struct FSlideScreenParamsRow> SlideConfigs; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.SlideScreenParamsRow
// Size: 0x40 (Inherited: 0x10)
struct FSlideScreenParamsRow : public FDescRowBase {
public:

	enum class EAssemblerCamPoint PointType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FSlideConfig> SlideConfigs; // 0x18(0x10)
	struct TArray<enum class EAssemblerCamPoint> AdditionLerpPointList; // 0x28(0x10)
	float AdditionPointLength; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.SlideConfig
// Size: 0x14 (Inherited: 0x00)
struct FSlideConfig {
public:

	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	float MinDist; // 0x08(0x04)
	float MaxDuration; // 0x0c(0x04)
	enum class EAssemblerCamPoint PointType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.AssemblerCameraParamsRow
// Size: 0x20 (Inherited: 0x08)
struct FAssemblerCameraParamsRow : public FTableRowBase {
public:

	uint64_t RecID; // 0x08(0x08)
	struct TArray<struct FGunCameraParamsRow> Params; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.LoadAnimSeqHandle
// Size: 0x38 (Inherited: 0x00)
struct FLoadAnimSeqHandle {
public:

	char pad_0[0x38]; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.LoadMeshHandle
// Size: 0x50 (Inherited: 0x00)
struct FLoadMeshHandle {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.StyleRecognitionInfo
// Size: 0x18 (Inherited: 0x00)
struct FStyleRecognitionInfo {
public:

	uint64_t StyleId; // 0x00(0x08)
	uint64_t RecognizeId; // 0x08(0x08)
	bool bValid; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.GPAssemblePartNode
// Size: 0x58 (Inherited: 0x00)
struct FGPAssemblePartNode {
public:

	int32_t IndexInDesc; // 0x00(0x04)
	int16_t IndexInArray; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
	uint64_t ItemID; // 0x08(0x08)
	enum class EAssemblerCamPoint CamPoint; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	uint64_t Guid; // 0x18(0x08)
	uint64_t SocketGUID; // 0x20(0x08)
	int16_t ParentIndex; // 0x28(0x02)
	int16_t ParentSocketIndex; // 0x2a(0x02)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FGPAssemblePartSocket> AllSocketList; // 0x30(0x10)
	uint64_t AppearanceId; // 0x40(0x08)
	uint64_t Durability; // 0x48(0x08)
	enum class EModularPartNodeType NodeType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.GPAssemblePartSocket
// Size: 0x58 (Inherited: 0x00)
struct FGPAssemblePartSocket {
public:

	uint32_t SocketId; // 0x00(0x04)
	int16_t SocketIndex; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
	struct FName SocketName; // 0x08(0x08)
	struct TArray<uint64_t> ValidPartItemList; // 0x10(0x10)
	int16_t ParentPartIndex; // 0x20(0x02)
	char bOccupy : 1; // 0x22(0x01)
	char pad_22_1 : 7; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	int16_t AttachPartIndex; // 0x24(0x02)
	char pad_26[0x2]; // 0x26(0x02)
	uint64_t AttachItemId; // 0x28(0x08)
	uint64_t AttachItemGUID; // 0x30(0x08)
	int16_t Depth; // 0x38(0x02)
	char pad_3A[0x6]; // 0x3a(0x06)
	uint64_t SocketGUID; // 0x40(0x08)
	enum class EAssemblePartSocketType SocketType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	uint64_t Flag; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.RTIOriginLightComponentData
// Size: 0x04 (Inherited: 0x00)
struct FRTIOriginLightComponentData {
public:

	char pad_0[0x4]; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.RTILightBPData
// Size: 0x10 (Inherited: 0x00)
struct FRTILightBPData {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* LightBPActor; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.RTIPreLoadRuntimeIconData
// Size: 0x18 (Inherited: 0x00)
struct FRTIPreLoadRuntimeIconData {
public:

	struct AAssembleWeaponActor* Weapon_PreLoad; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.WeaponAllPresetGenerateContext
// Size: 0x98 (Inherited: 0x00)
struct FWeaponAllPresetGenerateContext {
public:

	char pad_0[0x20]; // 0x00(0x20)
	struct TMap<uint32_t, int32_t> GunMap; // 0x20(0x50)
	char pad_70[0x18]; // 0x70(0x18)
	struct UGPModularWeaponDesc* Desc; // 0x88(0x08)
	struct UAssembleWeaponNodeTree* AssembleWeaponNodeTree; // 0x90(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.WeaponGeneratePresetRow
// Size: 0x128 (Inherited: 0x08)
struct FWeaponGeneratePresetRow : public FTableRowBase {
public:

	uint64_t Key; // 0x08(0x08)
	struct FString Name; // 0x10(0x10)
	uint32_t DescHash; // 0x20(0x04)
	float Price; // 0x24(0x04)
	uint64_t RecID; // 0x28(0x08)
	uint64_t Part1; // 0x30(0x08)
	uint64_t Part2; // 0x38(0x08)
	uint64_t Part3; // 0x40(0x08)
	uint64_t Part4; // 0x48(0x08)
	uint64_t Part5; // 0x50(0x08)
	uint64_t Part6; // 0x58(0x08)
	uint64_t Part7; // 0x60(0x08)
	uint64_t Part8; // 0x68(0x08)
	uint64_t Part9; // 0x70(0x08)
	uint64_t Part10; // 0x78(0x08)
	uint64_t Part11; // 0x80(0x08)
	uint64_t Part12; // 0x88(0x08)
	uint64_t Part13; // 0x90(0x08)
	uint64_t Part14; // 0x98(0x08)
	uint64_t Part15; // 0xa0(0x08)
	uint64_t Part16; // 0xa8(0x08)
	uint64_t Part17; // 0xb0(0x08)
	uint64_t Part18; // 0xb8(0x08)
	uint64_t Part19; // 0xc0(0x08)
	uint64_t Part20; // 0xc8(0x08)
	uint64_t Part21; // 0xd0(0x08)
	uint64_t Part22; // 0xd8(0x08)
	uint64_t Part23; // 0xe0(0x08)
	uint64_t Part24; // 0xe8(0x08)
	uint64_t Part25; // 0xf0(0x08)
	uint64_t Part26; // 0xf8(0x08)
	uint64_t Part27; // 0x100(0x08)
	uint64_t Part28; // 0x108(0x08)
	uint64_t Part29; // 0x110(0x08)
	uint64_t Part30; // 0x118(0x08)
	uint64_t Part31; // 0x120(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.WeaponPresetGeneratePartSocket
// Size: 0x18 (Inherited: 0x00)
struct FWeaponPresetGeneratePartSocket {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.WeaponPresetGenerateParam
// Size: 0x10 (Inherited: 0x00)
struct FWeaponPresetGenerateParam {
public:

	enum class EWeaponPresetGenerateType GenerateType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MainAttributeId; // 0x04(0x04)
	int32_t MaxPrice; // 0x08(0x04)
	int32_t MaxPartsNum; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.WeaponTestWeaponPresetConfig
// Size: 0x18 (Inherited: 0x10)
struct FWeaponTestWeaponPresetConfig : public FDescRowBase {
public:

	uint64_t PresetId; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.WeaponTestCharacterConfig
// Size: 0x30 (Inherited: 0x10)
struct FWeaponTestCharacterConfig : public FDescRowBase {
public:

	uint64_t AvatarID; // 0x10(0x08)
	uint64_t BagId; // 0x18(0x08)
	uint64_t ChestId; // 0x20(0x08)
	uint64_t BreastPlateID; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.TestWeaponParam
// Size: 0x18 (Inherited: 0x00)
struct FTestWeaponParam {
public:

	uint64_t WeaponPresetId; // 0x00(0x08)
	uint64_t SkinId; // 0x08(0x08)
	uint64_t SkinAppId; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.TestCharacterParam
// Size: 0x40 (Inherited: 0x00)
struct FTestCharacterParam {
public:

	uint64_t AvatarID; // 0x00(0x08)
	uint64_t BagId; // 0x08(0x08)
	uint64_t ChestId; // 0x10(0x08)
	uint64_t BreastPlateID; // 0x18(0x08)
	struct FVector Location; // 0x20(0x0c)
	struct FRotator Rotator; // 0x2c(0x0c)
	int32_t Index; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.MobileDOFInfo
// Size: 0x34 (Inherited: 0x00)
struct FMobileDOFInfo {
public:

	char bOpen : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DOFFocalRegion; // 0x04(0x04)
	float DOFNearRegion; // 0x08(0x04)
	float DOFFarRegion; // 0x0c(0x04)
	float DOFScale; // 0x10(0x04)
	float DOFNearBlurSize; // 0x14(0x04)
	float DOFFarBlurSize; // 0x18(0x04)
	float DepthOfFieldSensorWidth; // 0x1c(0x04)
	float DepthOfFieldSqueezeFactor; // 0x20(0x04)
	float DepthOfFieldFocalDistance; // 0x24(0x04)
	float DepthOfFieldDepthBlurAmount; // 0x28(0x04)
	float DepthOfFieldDepthBlurRadius; // 0x2c(0x04)
	float DepthOfFieldFstop; // 0x30(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.GunCameraParamsRow
// Size: 0xa0 (Inherited: 0x08)
struct FGunCameraParamsRow : public FTableRowBase {
public:

	uint64_t ID; // 0x08(0x08)
	bool bAutoSize; // 0x10(0x01)
	enum class EAssemblerCamPoint PointType; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector offset; // 0x20(0x0c)
	struct FRotator WeaponRotation; // 0x2c(0x0c)
	struct FVector WeaponLocation; // 0x38(0x0c)
	struct FVector WeaponScale3D; // 0x44(0x0c)
	float CameraDistance; // 0x50(0x04)
	float FOV; // 0x54(0x04)
	float LerpSpeed; // 0x58(0x04)
	struct FMobileDOFInfo MobileDOFInfo; // 0x5c(0x34)
	struct FVector FocusCenterOffset; // 0x90(0x0c)
	float FocusCenterDistanceRatio; // 0x9c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMWeaponAssemble.BeginCamParams
// Size: 0x148 (Inherited: 0x00)
struct FBeginCamParams {
public:

	struct FGunCameraParamsRow CamParamsOnBegin; // 0x00(0xa0)
	struct FGunCameraParamsRow CamParamsOnDiplay; // 0xa0(0xa0)
	float CamSpeed; // 0x140(0x04)
	char bActiveBeginCam : 1; // 0x144(0x01)
	char pad_144_1 : 7; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
