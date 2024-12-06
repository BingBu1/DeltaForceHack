
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPGameInput.GPInputDelegates
// Size: 0x58 (Inherited: 0x38)
class UGPInputDelegates : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnInputModeChanged[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnInputGateChanged[0x10]; // 0x48(0x10)

	struct UGPInputDelegates* STATIC_Get(struct UObject* WorldContext); // Function GPGameInput.GPInputDelegates.Get // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameInput.GPInputHelper
// Size: 0xa8 (Inherited: 0x38)
class UGPInputHelper : public UGameInstanceSubsystem {
public:

	char pad_38[0x70]; // 0x38(0x70)

	void STATIC_WantInputMode_UIOnly(struct UObject* WorldContext, struct FName ID, bool bEnable, bool bPersistent); // Function GPGameInput.GPInputHelper.WantInputMode_UIOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameInput.MobileInputButton
// Size: 0x48 (Inherited: 0x30)
class UMobileInputButton : public UObject {
public:

	char pad_30[0x18]; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameInput.MobileInputConfig
// Size: 0x230 (Inherited: 0x30)
class UMobileInputConfig : public UObject {
public:

	struct FMobileButtonStyleConfig ButtonStyleConfig; // 0x30(0x3c)
	struct FMobileButtonConfig DefaultButtonConfig; // 0x6c(0xe0)
	struct FMobileButtonConfig CustomButtonConfig; // 0x14c(0xe0)
	char pad_22C[0x4]; // 0x22c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameInput.GPPlayerInput
// Size: 0x450 (Inherited: 0x3b0)
class UGPPlayerInput : public UPlayerInput {
public:

	char pad_3B0[0xa0]; // 0x3b0(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameInput.MobileGameHandle
// Size: 0x3f0 (Inherited: 0x30)
class UMobileGameHandle : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)
	struct UMobileMoveHandleImpl* MoveHandleImpl; // 0x40(0x08)
	struct UClientSensitivitySetting* ClientSensitivitySetting; // 0x48(0x08)
	struct UClientVehicleSetting* ClientVehicleSetting; // 0x50(0x08)
	struct UClientControlSetting* ClientControlSetting; // 0x58(0x08)
	struct UClientBaseSetting* ClientBaseSetting; // 0x60(0x08)
	struct TMap<enum class EMobileControlButtonType, struct FControlButtonInfo> ControlButtons; // 0x68(0x50)
	struct TArray<enum class EMobileControlButtonType> ReleaseButtonInfo; // 0xb8(0x10)
	char pad_C8[0x328]; // 0xc8(0x328)

	void UpdateSprintTriggerSensitivity(); // Function GPGameInput.MobileGameHandle.UpdateSprintTriggerSensitivity // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameInput.MobileMoveHandleImpl
// Size: 0x40 (Inherited: 0x30)
class UMobileMoveHandleImpl : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameInput.MobilePlayerInput
// Size: 0x620 (Inherited: 0x450)
class UMobilePlayerInput : public UGPPlayerInput {
public:

	float NormalSensitivityX; // 0x450(0x04)
	float NormalSensitivityY; // 0x454(0x04)
	struct FVector2D LockSensitivity; // 0x458(0x08)
	float LockMoveAngle; // 0x460(0x04)
	float SprintTriggerDistFactorMax; // 0x464(0x04)
	float SprintTriggerDistFactorMin; // 0x468(0x04)
	float SprintTriggerSensitivityDivideNum; // 0x46c(0x04)
	float SprintTriggerPhysicalSizeScalarMin; // 0x470(0x04)
	float SprintTriggerPhysicalSizeScalarMax; // 0x474(0x04)
	float SprintTriggerSizeStandard; // 0x478(0x04)
	float SprintTriggerSizeZooming; // 0x47c(0x04)
	float SuperSprintTriggerSizeStandard; // 0x480(0x04)
	float SprintAnimTriggerSizeStandard; // 0x484(0x04)
	float SilentWalkTriggerSize; // 0x488(0x04)
	float AllowSprintAngle; // 0x48c(0x04)
	float ShowLockMoveShowAngle; // 0x490(0x04)
	enum class ERotationMethodType RotationMethod; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	float PhysicalSizeScalarMin; // 0x498(0x04)
	float PhysicalSizeScalarMax; // 0x49c(0x04)
	float GyroRotationFactor; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct UCurveFloat* SmoothRotationByFrameCurve; // 0x4a8(0x08)
	struct FVector2D StandardResolution; // 0x4b0(0x08)
	struct FVector2D StandardScreenXYInch; // 0x4b8(0x08)
	float StandardPPI; // 0x4c0(0x04)
	float StandardRotationAngleHalfScreen; // 0x4c4(0x04)
	float StandardPixelNumHalfScreen; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct TArray<struct FString> MobileInputAllowDisableInputReason; // 0x4d0(0x10)
	struct TArray<float> HotFixArray; // 0x4e0(0x10)
	struct TArray<enum class EMobileControlButtonType> ButtonTypeForbidRotateInMovementArea; // 0x4f0(0x10)
	struct FVector2D RotationInputLocation; // 0x500(0x08)
	char pad_508[0x8]; // 0x508(0x08)
	struct UMobileGameHandle* GameHandle; // 0x510(0x08)
	char pad_518[0x10]; // 0x518(0x10)
	struct TArray<struct FMobileInputData> MobileInputDataList; // 0x528(0x10)
	struct TArray<struct FMobileInputData> MobileInputDataList_Complete; // 0x538(0x10)
	char pad_548[0x20]; // 0x548(0x20)
	struct TArray<struct FSmoothTouchData> SmoothTouchDataList; // 0x568(0x10)
	char pad_578[0xa8]; // 0x578(0xa8)

	void UnRegisterInterestedTouchIndex(enum class ETouchIndex FingerIndex); // Function GPGameInput.MobilePlayerInput.UnRegisterInterestedTouchIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameInput.MobileFixedFireGameHandle
// Size: 0x3f0 (Inherited: 0x3f0)
class UMobileFixedFireGameHandle : public UMobileGameHandle {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameInput.MobileMoveJoystickHandleImpl
// Size: 0x40 (Inherited: 0x40)
class UMobileMoveJoystickHandleImpl : public UMobileMoveHandleImpl {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameInput.HDPlayerInput
// Size: 0x670 (Inherited: 0x620)
class UHDPlayerInput : public UMobilePlayerInput {
public:

	float CachedFinalSensitivity; // 0x620(0x04)
	float CachedFinalSensitivityX; // 0x624(0x04)
	float CachedFinalSensitivityY; // 0x628(0x04)
	struct FHDAimingDebugInfo CachedDebugInfo; // 0x62c(0x10)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct FString LuaPath; // 0x640(0x10)
	struct UClientSensitivitySettingHD* ClientSensitivitySettingHD; // 0x650(0x08)
	struct UClientVehicleSettingHD* ClientVehicleSettingHD; // 0x658(0x08)
	/*struct FMulticastInlineDelegate*/char OnHDAimingDebugInfo[0x10]; // 0x660(0x10)

	void OnZoomRateChanged(float NewRate); // Function GPGameInput.HDPlayerInput.OnZoomRateChanged // (Native|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
