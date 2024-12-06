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
	struct Function_AugmentedReality_ARBlueprintLibrary_UnpinComponent_Param
	{
	public:

		struct USceneComponent* ComponentToUnpin; // 0x00(0x08)
	};

	struct Function_AugmentedReality_ARTraceResultLibrary_GetTrackedGeometry_Param
	{
	public:

		struct FARTraceResult TraceResult; // 0x00(0x60)
		struct UARTrackedGeometry* ReturnValue; // 0x60(0x08)
	};

	struct Function_AugmentedReality_ARPin_GetTrackingState_Param
	{
	public:

		enum class EARTrackingState ReturnValue; // 0x00(0x01)
	};

	struct Function_AugmentedReality_ARSessionConfig_ShouldResetTrackedObjects_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_AugmentedReality_ARSharedWorldGameMode_SetPreviewImageData_Param
	{
	public:

		struct TArray<char> ImageData; // 0x00(0x10)
	};

	struct Function_AugmentedReality_ARSharedWorldGameState_K2_OnARWorldMapIsReady_Param
	{
	public:

	};

	struct Function_AugmentedReality_ARSharedWorldPlayerController_ServerMarkReadyForReceiving_Param
	{
	public:

	};

	struct Function_AugmentedReality_ARSkyLight_SetEnvironmentCaptureProbe_Param
	{
	public:

		struct UAREnvironmentCaptureProbe* InCaptureProbe; // 0x00(0x08)
	};

	struct Function_AugmentedReality_ARCandidateImage_GetPhysicalWidth_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_AugmentedReality_ARCandidateObject_SetFriendlyName_Param
	{
	public:

		struct FString NewName; // 0x00(0x10)
	};

	struct Function_AugmentedReality_ARTrackedGeometry_IsTracked_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_AugmentedReality_ARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue; // 0x08(0x08)
	};

	struct Function_AugmentedReality_ARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		struct FVector Extent; // 0x14(0x0c)
		struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue; // 0x20(0x08)
	};

	struct Function_AugmentedReality_ARBasicLightEstimate_GetAmbientIntensityLumens_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_AugmentedReality_ARPlaneGeometry_GetSubsumedBy_Param
	{
	public:

		struct UARPlaneGeometry* ReturnValue; // 0x00(0x08)
	};

	struct Function_AugmentedReality_ARTrackedImage_GetEstimateSize_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_AugmentedReality_ARFaceGeometry_GetWorldSpaceEyeTransform_Param
	{
	public:

		enum class EAREye Eye; // 0x00(0x01)
		char pad_1[0xf]; // 0x01(0x0f)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_AugmentedReality_AREnvironmentCaptureProbe_GetExtent_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_AugmentedReality_ARTrackedObject_GetDetectedObject_Param
	{
	public:

		struct UARCandidateObject* ReturnValue; // 0x00(0x08)
	};

	struct Function_AugmentedReality_ARTrackedPose_GetTrackedPoseData_Param
	{
	public:

		struct FARPose3D ReturnValue; // 0x00(0x50)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
