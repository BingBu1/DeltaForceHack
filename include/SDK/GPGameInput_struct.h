
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPGameInput.EMobileTouchType
enum class EMobileTouchType : int {
	Begin = 0,
	FirstMove = 1,
	Move = 2,
	End = 3,
	EMobileTouchType_MAX = 4
};

// Enum GPGameInput.EMobileControlButtonType
enum class EMobileControlButtonType : int {
	EControlButtonType_Jump = 0,
	EControlButtonType_Crouch = 1,
	EControlButtonType_Prone = 2,
	EControlButtonType_Aim = 3,
	EControlButtonType_Fire = 4,
	EControlButtonType_LeftPeek = 5,
	EControlButtonType_RightPeek = 6,
	EControlButtonType_LeftFire = 7,
	EControlButtonType_SilentWalk = 8,
	EControlButtonType_Eye = 9,
	EControlButtonType_SkillX = 10,
	EControlButtonType_SkillG = 11,
	EControlButtonType_SkillV = 12,
	EControlButtonType_Skill4 = 13,
	EControlButtonType_Skill5 = 14,
	EControlButtonType_SkillSelf = 15,
	EControlButtonType_SkillActiveMine = 16,
	EControlButtonType_SkillRecyleMine = 17,
	EControlButtonType_Marking = 18,
	EControlButtonType_Commercialization = 19,
	EControlButtonType_Reload = 20,
	EControlButtonType_ChangeScope = 21,
	EControlButtonType_VehicleSkill1 = 22,
	EControlButtonType_VehicleSkill2 = 23,
	EControlButtonType_VehicleSkill3 = 24,
	EControlButtonType_VehicleSkill4 = 25,
	EControlButtonType_VehicleFire = 26,
	EControlButtonType_VehicleLeftFire = 27,
	EControlButtonType_VehicleJoystickFire = 28,
	EControlButtonType_VehicleJoystickLeftFire = 29,
	EControlButtonType_SuperSprint = 30,
	EControlButtonType_VehicleSecondWeaponFire = 31,
	EControlButtonType_None = 32,
	EControlButtonType_MAX = 33
};

// Enum GPGameInput.EGPInputModeType
enum class EGPInputModeType : int {
	None = 0,
	GameOnly = 1,
	UIOnly = 2,
	GameAndUI = 3,
	ForceUIOnly = 4,
	Count = 5,
	EGPInputModeType_MAX = 6
};

// Enum GPGameInput.EJoystickMode
enum class EJoystickMode : int {
	EJoystickMode_Character = 0,
	EJoystickMode_Vehicle = 1,
	EJoystickMode_MAX = 2
};

// Enum GPGameInput.EMouseInputType
enum class EMouseInputType : int {
	ENormalWeapon = 0,
	EVehicleDriveWeapon = 1,
	EHelicopterDriveWeapon = 2,
	EVehicleWeapon = 3,
	EMouseInputType_MAX = 4
};

// Enum GPGameInput.EGyroscopeInputForbidReason
enum class EGyroscopeInputForbidReason : int {
	EForbidReason_NumMax = 0,
	EForbidReason_MAX = 1
};

// Enum GPGameInput.EMobileInputPhase
enum class EMobileInputPhase : int {
	MobileInputPhase_Began = 0,
	MobileInputPhase_Moved = 1,
	MobileInputPhase_Stationary = 2,
	MobileInputPhase_Ended = 3,
	MobileInputPhase_Canceled = 4,
	MobileInputPhase_MAX = 5
};

// Enum GPGameInput.EGPInputMode
enum class EGPInputMode : int {
	GameOnly = 0,
	GameAndUI = 1,
	UIOnly = 2,
	EGPInputMode_MAX = 3
};

// ScriptStruct GPGameInput.HDAimingDebugInfo
// Size: 0x10 (Inherited: 0x00)
struct FHDAimingDebugInfo {
public:

	float DeltaMouseX; // 0x00(0x04)
	float DeltaMouseY; // 0x04(0x04)
	float ScopeZoomRate; // 0x08(0x04)
	int32_t ADSIndex; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameInput.SmoothTouchData
// Size: 0x20 (Inherited: 0x00)
struct FSmoothTouchData {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameInput.MobileInputData
// Size: 0x58 (Inherited: 0x00)
struct FMobileInputData {
public:

	char pad_0[0x58]; // 0x00(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameInput.FireInputRecordData
// Size: 0x18 (Inherited: 0x00)
struct FFireInputRecordData {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameInput.FireInputRecordDataItem
// Size: 0x18 (Inherited: 0x00)
struct FFireInputRecordDataItem {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameInput.ControlButtonInfo
// Size: 0x20 (Inherited: 0x00)
struct FControlButtonInfo {
public:

	bool bAllowRotate; // 0x00(0x01)
	bool bInRotateLimitationArea; // 0x01(0x01)
	bool bIsPressed; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t FingerIndex; // 0x04(0x04)
	bool bAllowMove; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UObject* DelegateOwner; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameInput.MobileTouchEvent
// Size: 0x18 (Inherited: 0x00)
struct FMobileTouchEvent {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameInput.MobileButton
// Size: 0x1c (Inherited: 0x00)
struct FMobileButton {
public:

	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Scale; // 0x08(0x04)
	float MinScale; // 0x0c(0x04)
	float MaxScale; // 0x10(0x04)
	float Alpha; // 0x14(0x04)
	char AnchorType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameInput.MobileButtonStyle
// Size: 0x0c (Inherited: 0x00)
struct FMobileButtonStyle {
public:

	float Width; // 0x00(0x04)
	float Height; // 0x04(0x04)
	char Type; // 0x08(0x01)
	bool bFixed; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameInput.MobileButtonConfig
// Size: 0xe0 (Inherited: 0x00)
struct FMobileButtonConfig {
public:

	struct FMobileButton MovementButton; // 0x00(0x1c)
	struct FMobileButton RotationButton; // 0x1c(0x1c)
	struct FMobileButton FixedFireButton; // 0x38(0x1c)
	struct FMobileButton FollowFireButton; // 0x54(0x1c)
	struct FMobileButton MoveFireButton; // 0x70(0x1c)
	struct FMobileButton JumpButton; // 0x8c(0x1c)
	struct FMobileButton CrouchButton; // 0xa8(0x1c)
	struct FMobileButton RightHand; // 0xc4(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameInput.MobileButtonStyleConfig
// Size: 0x3c (Inherited: 0x00)
struct FMobileButtonStyleConfig {
public:

	struct FMobileButtonStyle MovementButton; // 0x00(0x0c)
	struct FMobileButtonStyle RotationButton; // 0x0c(0x0c)
	struct FMobileButtonStyle FireButton; // 0x18(0x0c)
	struct FMobileButtonStyle JumpButton; // 0x24(0x0c)
	struct FMobileButtonStyle CrouchButton; // 0x30(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
