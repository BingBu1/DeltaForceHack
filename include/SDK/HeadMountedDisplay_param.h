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
	struct Function_HeadMountedDisplay_HeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Param
	{
	public:

		struct FTransform ExternalTrackingTransform; // 0x00(0x30)
	};

	struct Function_HeadMountedDisplay_MotionControllerComponent_SetTrackingSource_Param
	{
	public:

		enum class EControllerHand NewSource; // 0x00(0x01)
	};

	struct Function_HeadMountedDisplay_MotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Param
	{
	public:

		bool Enable; // 0x00(0x01)
	};

	struct Function_HeadMountedDisplay_XRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		struct FName SystemName; // 0x08(0x08)
		struct FName DeviceName; // 0x10(0x08)
		bool bManualAttachment; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct FTransform RelativeTransform; // 0x20(0x30)
		struct FXRDeviceId XRDeviceId; // 0x50(0x0c)
		char pad_5C[0x4]; // 0x5c(0x04)
		struct UPrimitiveComponent* ReturnValue; // 0x60(0x08)
	};

	struct Function_HeadMountedDisplay_AsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		struct FName SystemName; // 0x08(0x08)
		struct FName DeviceName; // 0x10(0x08)
		bool bManualAttachment; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct FTransform RelativeTransform; // 0x20(0x30)
		struct FXRDeviceId XRDeviceId; // 0x50(0x0c)
		char pad_5C[0x4]; // 0x5c(0x04)
		struct UPrimitiveComponent* NewComponent; // 0x60(0x08)
		struct UAsyncTask_LoadXRDeviceVisComponent* ReturnValue; // 0x68(0x08)
	};

	struct Function_HeadMountedDisplay_XRLoadingScreenFunctionLibrary_ShowLoadingScreen_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
