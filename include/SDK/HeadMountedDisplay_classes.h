
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x620 (Inherited: 0x560)
class UMotionControllerComponent : public UPrimitiveComponent {
public:

	int32_t PlayerIndex; // 0x560(0x04)
	enum class EControllerHand Hand; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)
	struct FName MotionSource; // 0x568(0x08)
	char bDisableLowLatencyUpdate : 1; // 0x570(0x01)
	char pad_570_1 : 7; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x574(0x01)
	bool bDisplayDeviceModel; // 0x575(0x01)
	char pad_576[0x2]; // 0x576(0x02)
	struct FName DisplayModelSource; // 0x578(0x08)
	struct UStaticMesh* CustomDisplayMesh; // 0x580(0x08)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x588(0x10)
	char pad_598[0x68]; // 0x598(0x68)
	struct UPrimitiveComponent* DisplayComponent; // 0x600(0x08)
	char pad_608[0x18]; // 0x608(0x18)

	void SetTrackingSource(enum class EControllerHand NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x190 (Inherited: 0x100)
class UVRNotificationsComponent : public UActorComponent {
public:

	/*struct FMulticastInlineDelegate*/char HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate[0x10]; // 0x100(0x10)
	/*struct FMulticastInlineDelegate*/char HMDTrackingInitializedDelegate[0x10]; // 0x110(0x10)
	/*struct FMulticastInlineDelegate*/char HMDRecenteredDelegate[0x10]; // 0x120(0x10)
	/*struct FMulticastInlineDelegate*/char HMDLostDelegate[0x10]; // 0x130(0x10)
	/*struct FMulticastInlineDelegate*/char HMDReconnectedDelegate[0x10]; // 0x140(0x10)
	/*struct FMulticastInlineDelegate*/char HMDConnectCanceledDelegate[0x10]; // 0x150(0x10)
	/*struct FMulticastInlineDelegate*/char HMDPutOnHeadDelegate[0x10]; // 0x160(0x10)
	/*struct FMulticastInlineDelegate*/char HMDRemovedFromHeadDelegate[0x10]; // 0x170(0x10)
	/*struct FMulticastInlineDelegate*/char VRControllerRecenteredDelegate[0x10]; // 0x180(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary {
public:


	struct UPrimitiveComponent* STATIC_AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x68 (Inherited: 0x38)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnModelLoaded[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnLoadFailure[0x10]; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct UPrimitiveComponent* SpawnedComponent; // 0x60(0x08)

	struct UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_ShowLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
