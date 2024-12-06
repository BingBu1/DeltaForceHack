
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AugmentedReality.ARBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_UnpinComponent(struct USceneComponent* ComponentToUnpin); // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTraceResultLibrary
// Size: 0x30 (Inherited: 0x30)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary {
public:


	struct UARTrackedGeometry* STATIC_GetTrackedGeometry(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.AROriginActor
// Size: 0x378 (Inherited: 0x378)
class AAROriginActor : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARPin
// Size: 0xf0 (Inherited: 0x30)
class UARPin : public UObject {
public:

	struct UARTrackedGeometry* TrackedGeometry; // 0x30(0x08)
	struct USceneComponent* PinnedComponent; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0x1f]; // 0xa1(0x1f)
	/*struct FMulticastInlineDelegate*/char OnARTrackingStateChanged[0x10]; // 0xc0(0x10)
	/*struct FMulticastInlineDelegate*/char OnARTransformUpdated[0x10]; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)

	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARSessionConfig
// Size: 0xb0 (Inherited: 0x38)
class UARSessionConfig : public UDataAsset {
public:

	bool bGenerateMeshDataFromTrackedGeometry; // 0x38(0x01)
	bool bGenerateCollisionForMeshData; // 0x39(0x01)
	bool bGenerateNavMeshForMeshData; // 0x3a(0x01)
	bool bUseMeshDataForOcclusion; // 0x3b(0x01)
	bool bRenderMeshDataInWireframe; // 0x3c(0x01)
	bool bTrackSceneObjects; // 0x3d(0x01)
	bool bUsePersonSegmentationForOcclusion; // 0x3e(0x01)
	enum class EARWorldAlignment WorldAlignment; // 0x3f(0x01)
	enum class EARSessionType SessionType; // 0x40(0x01)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x41(0x01)
	bool bHorizontalPlaneDetection; // 0x42(0x01)
	bool bVerticalPlaneDetection; // 0x43(0x01)
	bool bEnableAutoFocus; // 0x44(0x01)
	enum class EARLightEstimationMode LightEstimationMode; // 0x45(0x01)
	enum class EARFrameSyncMode FrameSyncMode; // 0x46(0x01)
	bool bEnableAutomaticCameraOverlay; // 0x47(0x01)
	bool bEnableAutomaticCameraTracking; // 0x48(0x01)
	bool bResetCameraTracking; // 0x49(0x01)
	bool bResetTrackedObjects; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x50(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x60(0x04)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<char> WorldMapData; // 0x68(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x78(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x88(0x0c)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x94(0x01)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
	struct TArray<char> SerializedARCandidateImageDatabase; // 0x98(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	bool ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x4c8 (Inherited: 0x460)
class AARSharedWorldGameMode : public AGameMode {
public:

	int32_t BufferSizePerChunk; // 0x460(0x04)
	char pad_464[0x64]; // 0x464(0x64)

	void SetPreviewImageData(struct TArray<char> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARSharedWorldGameState
// Size: 0x410 (Inherited: 0x3d8)
class AARSharedWorldGameState : public AGameState {
public:

	struct TArray<char> PreviewImageData; // 0x3d8(0x10)
	struct TArray<char> ARWorldData; // 0x3e8(0x10)
	int32_t PreviewImageBytesTotal; // 0x3f8(0x04)
	int32_t ARWorldBytesTotal; // 0x3fc(0x04)
	int32_t PreviewImageBytesDelivered; // 0x400(0x04)
	int32_t ARWorldBytesDelivered; // 0x404(0x04)
	char pad_408[0x8]; // 0x408(0x08)

	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x6d8 (Inherited: 0x6d0)
class AARSharedWorldPlayerController : public APlayerController {
public:

	char pad_6D0[0x8]; // 0x6d0(0x08)

	void ServerMarkReadyForReceiving(); // Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARSkyLight
// Size: 0x398 (Inherited: 0x388)
class AARSkyLight : public ASkyLight {
public:

	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x388(0x08)
	char pad_390[0x8]; // 0x390(0x08)

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x200 (Inherited: 0x1e0)
class UAREnvironmentCaptureProbeTexture : public UTextureCube {
public:

	enum class EARTextureType TextureType; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	float Timestamp; // 0x1e4(0x04)
	struct FGuid ExternalTextureGuid; // 0x1e8(0x10)
	struct FVector2D size; // 0x1f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTraceResultDummy
// Size: 0x30 (Inherited: 0x30)
class UARTraceResultDummy : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x250 (Inherited: 0x100)
class UARTrackableNotifyComponent : public UActorComponent {
public:

	/*struct FMulticastInlineDelegate*/char OnAddTrackedGeometry[0x10]; // 0x100(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdateTrackedGeometry[0x10]; // 0x110(0x10)
	/*struct FMulticastInlineDelegate*/char OnRemoveTrackedGeometry[0x10]; // 0x120(0x10)
	/*struct FMulticastInlineDelegate*/char OnAddTrackedPlane[0x10]; // 0x130(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdateTrackedPlane[0x10]; // 0x140(0x10)
	/*struct FMulticastInlineDelegate*/char OnRemoveTrackedPlane[0x10]; // 0x150(0x10)
	/*struct FMulticastInlineDelegate*/char OnAddTrackedPoint[0x10]; // 0x160(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdateTrackedPoint[0x10]; // 0x170(0x10)
	/*struct FMulticastInlineDelegate*/char OnRemoveTrackedPoint[0x10]; // 0x180(0x10)
	/*struct FMulticastInlineDelegate*/char OnAddTrackedImage[0x10]; // 0x190(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdateTrackedImage[0x10]; // 0x1a0(0x10)
	/*struct FMulticastInlineDelegate*/char OnRemoveTrackedImage[0x10]; // 0x1b0(0x10)
	/*struct FMulticastInlineDelegate*/char OnAddTrackedFace[0x10]; // 0x1c0(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdateTrackedFace[0x10]; // 0x1d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnRemoveTrackedFace[0x10]; // 0x1e0(0x10)
	/*struct FMulticastInlineDelegate*/char OnAddTrackedEnvProbe[0x10]; // 0x1f0(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdateTrackedEnvProbe[0x10]; // 0x200(0x10)
	/*struct FMulticastInlineDelegate*/char OnRemoveTrackedEnvProbe[0x10]; // 0x210(0x10)
	/*struct FMulticastInlineDelegate*/char OnAddTrackedObject[0x10]; // 0x220(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdateTrackedObject[0x10]; // 0x230(0x10)
	/*struct FMulticastInlineDelegate*/char OnRemoveTrackedObject[0x10]; // 0x240(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTypesDummyClass
// Size: 0x30 (Inherited: 0x30)
class UARTypesDummyClass : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARCandidateImage
// Size: 0x60 (Inherited: 0x38)
class UARCandidateImage : public UDataAsset {
public:

	struct UTexture2D* CandidateTexture; // 0x38(0x08)
	struct FString FriendlyName; // 0x40(0x10)
	float Width; // 0x50(0x04)
	float Height; // 0x54(0x04)
	enum class EARCandidateImageOrientation Orientation; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARCandidateObject
// Size: 0x78 (Inherited: 0x38)
class UARCandidateObject : public UDataAsset {
public:

	struct TArray<char> CandidateObjectData; // 0x38(0x10)
	struct FString FriendlyName; // 0x48(0x10)
	struct FBox BoundingBox; // 0x58(0x1c)
	char pad_74[0x4]; // 0x74(0x04)

	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x58 (Inherited: 0x38)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase {
public:

	char pad_38[0x20]; // 0x38(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARLightEstimate
// Size: 0x30 (Inherited: 0x30)
class UARLightEstimate : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTexture
// Size: 0x160 (Inherited: 0x140)
class UARTexture : public UTexture {
public:

	enum class EARTextureType TextureType; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	float Timestamp; // 0x144(0x04)
	struct FGuid ExternalTextureGuid; // 0x148(0x10)
	struct FVector2D size; // 0x158(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTrackedGeometry
// Size: 0xe8 (Inherited: 0x30)
class UARTrackedGeometry : public UObject {
public:

	struct FGuid UniqueId; // 0x30(0x10)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
	struct UMRMeshComponent* UnderlyingMesh; // 0xb0(0x08)
	enum class EARObjectClassification ObjectClassification; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)
	int32_t LastUpdateFrameNumber; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
	struct FName DebugName; // 0xe0(0x08)

	bool IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x88 (Inherited: 0x58)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailed[0x10]; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)

	struct UARSaveWorldAsyncTaskBlueprintProxy* STATIC_ARSaveWorld(struct UObject* WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0xa0 (Inherited: 0x58)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailed[0x10]; // 0x68(0x10)
	char pad_78[0x28]; // 0x78(0x28)

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* STATIC_ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARBasicLightEstimate
// Size: 0x48 (Inherited: 0x30)
class UARBasicLightEstimate : public UARLightEstimate {
public:

	float AmbientIntensityLumens; // 0x30(0x04)
	float AmbientColorTemperatureKelvin; // 0x34(0x04)
	struct FLinearColor AmbientColor; // 0x38(0x10)

	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTextureCameraImage
// Size: 0x160 (Inherited: 0x160)
class UARTextureCameraImage : public UARTexture {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTextureCameraDepth
// Size: 0x168 (Inherited: 0x160)
class UARTextureCameraDepth : public UARTexture {
public:

	enum class EARDepthQuality DepthQuality; // 0x160(0x01)
	enum class EARDepthAccuracy DepthAccuracy; // 0x161(0x01)
	bool bIsTemporallySmoothed; // 0x162(0x01)
	char pad_163[0x5]; // 0x163(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARPlaneGeometry
// Size: 0x120 (Inherited: 0xe8)
class UARPlaneGeometry : public UARTrackedGeometry {
public:

	enum class EARPlaneOrientation Orientation; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FVector Center; // 0xec(0x0c)
	struct FVector Extent; // 0xf8(0x0c)
	char pad_104[0x14]; // 0x104(0x14)
	struct UARPlaneGeometry* SubsumedBy; // 0x118(0x08)

	struct UARPlaneGeometry* GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTrackedPoint
// Size: 0xf0 (Inherited: 0xe8)
class UARTrackedPoint : public UARTrackedGeometry {
public:

	char pad_E8[0x8]; // 0xe8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTrackedImage
// Size: 0xf8 (Inherited: 0xe8)
class UARTrackedImage : public UARTrackedGeometry {
public:

	struct UARCandidateImage* DetectedImage; // 0xe8(0x08)
	struct FVector2D EstimatedSize; // 0xf0(0x08)

	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARFaceGeometry
// Size: 0x1e0 (Inherited: 0xe8)
class UARFaceGeometry : public UARTrackedGeometry {
public:

	struct FVector LookAtTarget; // 0xe8(0x0c)
	bool bIsTracked; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0xf8(0x50)
	char pad_148[0x98]; // 0x148(0x98)

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x100 (Inherited: 0xe8)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry {
public:

	char pad_E8[0x10]; // 0xe8(0x10)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0xf8(0x08)

	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTrackedObject
// Size: 0xf0 (Inherited: 0xe8)
class UARTrackedObject : public UARTrackedGeometry {
public:

	struct UARCandidateObject* DetectedObject; // 0xe8(0x08)

	struct UARCandidateObject* GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTrackedPose
// Size: 0x140 (Inherited: 0xe8)
class UARTrackedPose : public UARTrackedGeometry {
public:

	char pad_E8[0x58]; // 0xe8(0x58)

	struct FARPose3D GetTrackedPoseData(); // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AugmentedReality.ARTrackedQRCode
// Size: 0x110 (Inherited: 0xf8)
class UARTrackedQRCode : public UARTrackedImage {
public:

	struct FString QRCode; // 0xf8(0x10)
	int32_t Version; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
