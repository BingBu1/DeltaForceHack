
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MetaDorian.GPTMetaDorianNative
// Size: 0x58 (Inherited: 0x58)
class UGPTMetaDorianNative : public UGPToolBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MetaDorianUtils
// Size: 0x40 (Inherited: 0x38)
class UMetaDorianUtils : public UGameInstanceSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)

	struct UMetaDorianUtils* STATIC_Get(); // Function MetaDorian.MetaDorianUtils.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MetaDorianManager
// Size: 0x78 (Inherited: 0x38)
class UMetaDorianManager : public UEngineSubsystem {
public:

	char pad_38[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnDorianSOUpdaterComplete[0x10]; // 0x48(0x10)
	struct FString DorianSOStubPath; // 0x58(0x10)
	struct FString DorianSOLibPath; // 0x68(0x10)

	struct FString STATIC_TryGetLuaScriptRealPath(struct FString ScriptPath); // Function MetaDorian.MetaDorianManager.TryGetLuaScriptRealPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAndroidJNI
// Size: 0x30 (Inherited: 0x30)
class UMTAndroidJNI : public UObject {
public:


	bool STATIC_IsOverrideAndroidLogDir(); // Function MetaDorian.MTAndroidJNI.IsOverrideAndroidLogDir // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UWidget
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UWidget : public UObject {
public:


	bool STATIC_CanSafelyRouteEvent(struct UWidget* Self); // Function MetaDorian.MTAPI_UWidget.CanSafelyRouteEvent // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UPanelWidget
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UPanelWidget : public UObject {
public:


	bool STATIC_CanAddMoreChildren(struct UPanelWidget* Self); // Function MetaDorian.MTAPI_UPanelWidget.CanAddMoreChildren // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_FGameplayResourceSet
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_FGameplayResourceSet : public UObject {
public:


	struct FGameplayResourceSet STATIC_AddID(struct FGameplayResourceSet& Self, char ResourceId); // Function MetaDorian.MTAPI_FGameplayResourceSet.AddID // (Final|Native|Static|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UEngine
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UEngine : public UObject {
public:


	void STATIC_Tick(struct UEngine* Self, float DeltaSeconds, bool bIdleMode); // Function MetaDorian.MTAPI_UEngine.Tick // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UGameInstance
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UGameInstance : public UObject {
public:


	struct UGameInstanceSubsystem* STATIC_GetSubsystemBase(struct UGameInstance* Self, struct UClass* SubsystemClass); // Function MetaDorian.MTAPI_UGameInstance.GetSubsystemBase // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UWorld
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UWorld : public UObject {
public:


	float STATIC_TimeSince(struct UWorld* Self, float Time); // Function MetaDorian.MTAPI_UWorld.TimeSince // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UAssetManager
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UAssetManager : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_ABrush
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_ABrush : public UObject {
public:


	struct UBrushComponent* STATIC_GetBrushComponent(struct ABrush* Self); // Function MetaDorian.MTAPI_ABrush.GetBrushComponent // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_ASceneCapture2D
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_ASceneCapture2D : public UObject {
public:


	struct USceneCaptureComponent2D* STATIC_GetCaptureComponent2D(struct ASceneCapture2D* Self); // Function MetaDorian.MTAPI_ASceneCapture2D.GetCaptureComponent2D // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_AStaticMeshActor
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_AStaticMeshActor : public UObject {
public:


	struct UStaticMeshComponent* STATIC_GetStaticMeshComponent(struct AStaticMeshActor* Self); // Function MetaDorian.MTAPI_AStaticMeshActor.GetStaticMeshComponent // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_ATriggerBase
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_ATriggerBase : public UObject {
public:


	struct UShapeComponent* STATIC_GetCollisionComponent(struct ATriggerBase* Self); // Function MetaDorian.MTAPI_ATriggerBase.GetCollisionComponent // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_AActor
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_AActor : public UObject {
public:


	void STATIC_OnConstruction(struct AActor* Self, struct FTransform& Transform); // Function MetaDorian.MTAPI_AActor.OnConstruction // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_APlayerState
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_APlayerState : public UObject {
public:


	struct APawn* STATIC_GetPawn(struct APlayerState* Self); // Function MetaDorian.MTAPI_APlayerState.GetPawn // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_APlayerCameraManager
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_APlayerCameraManager : public UObject {
public:


	float STATIC_GetLockedFOV(struct APlayerCameraManager* Self); // Function MetaDorian.MTAPI_APlayerCameraManager.GetLockedFOV // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_ACameraActor
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_ACameraActor : public UObject {
public:


	struct UCameraComponent* STATIC_GetCameraComponent(struct ACameraActor* Self); // Function MetaDorian.MTAPI_ACameraActor.GetCameraComponent // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_AController
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_AController : public UObject {
public:


	bool STATIC_IsPlayerController(struct AController* Self); // Function MetaDorian.MTAPI_AController.IsPlayerController // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_APawn
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_APawn : public UObject {
public:


	void STATIC_SetupPlayerInputComponent(struct APawn* Self, struct UInputComponent* PlayerInputComponent); // Function MetaDorian.MTAPI_APawn.SetupPlayerInputComponent // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_ACharacter
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_ACharacter : public UObject {
public:


	bool STATIC_MovementBaseUtility_UseRelativeLocation(struct UPrimitiveComponent* MovementBase); // Function MetaDorian.MTAPI_ACharacter.MovementBaseUtility_UseRelativeLocation // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UNavMovementComponent
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UNavMovementComponent : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UMovementComponent
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UMovementComponent : public UObject {
public:


	void STATIC_StopMovementImmediately(struct UMovementComponent* Self); // Function MetaDorian.MTAPI_UMovementComponent.StopMovementImmediately // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UCharacterMovementComponent
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UCharacterMovementComponent : public UObject {
public:


	bool STATIC_IsWalking(struct UCharacterMovementComponent* Self); // Function MetaDorian.MTAPI_UCharacterMovementComponent.IsWalking // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UStaticMeshComponent
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UStaticMeshComponent : public UObject {
public:


	struct UStaticMesh* STATIC_GetStaticMesh(struct UStaticMeshComponent* Self); // Function MetaDorian.MTAPI_UStaticMeshComponent.GetStaticMesh // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UActorComponent
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UActorComponent : public UObject {
public:


	void STATIC_MarkAsEditorOnlySubobject(struct UActorComponent* Self); // Function MetaDorian.MTAPI_UActorComponent.MarkAsEditorOnlySubobject // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UPrimitiveComponent
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UPrimitiveComponent : public UObject {
public:


	void STATIC_SetRenderMatrixMode(struct UPrimitiveComponent* Self, enum class ERenderMatrixMode Mode); // Function MetaDorian.MTAPI_UPrimitiveComponent.SetRenderMatrixMode // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_USceneComponent
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_USceneComponent : public UObject {
public:


	void STATIC_UpdateComponentToWorld(struct USceneComponent* Self, int32_t UpdateTransformFlags, enum class ETeleportType Teleport); // Function MetaDorian.MTAPI_USceneComponent.UpdateComponentToWorld // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UObject
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UObject : public UObject {
public:


	void STATIC_SetFlags(struct UObject* Self, int32_t NewFlags); // Function MetaDorian.MTAPI_UObject.SetFlags // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_FUObjectArray
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_FUObjectArray : public UObject {
public:


	bool STATIC_IsDisregardForGC(struct UObject* Object); // Function MetaDorian.MTAPI_FUObjectArray.IsDisregardForGC // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_FScriptInterface
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_FScriptInterface : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_NameTypes
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_NameTypes : public UObject {
public:


	uint32_t STATIC_GetTypeHash(struct FName Name); // Function MetaDorian.MTAPI_NameTypes.GetTypeHash // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_TypeHash
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_TypeHash : public UObject {
public:


	uint32_t STATIC_HashCombine(uint32_t A, uint32_t C); // Function MetaDorian.MTAPI_TypeHash.HashCombine // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_CoreMisc
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_CoreMisc : public UObject {
public:


	bool STATIC_IsRunningGame(); // Function MetaDorian.MTAPI_CoreMisc.IsRunningGame // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_FGenericPlatformTime
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_FGenericPlatformTime : public UObject {
public:


	double STATIC_ToSeconds64(uint64_t Cycles); // Function MetaDorian.MTAPI_FGenericPlatformTime.ToSeconds64 // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_FGenericPlatformMisc
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_FGenericPlatformMisc : public UObject {
public:


	int32_t STATIC_GetNetworkConnectionType(); // Function MetaDorian.MTAPI_FGenericPlatformMisc.GetNetworkConnectionType // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_FGenericPlatformMemory
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_FGenericPlatformMemory : public UObject {
public:


	uint64_t STATIC_GetMemoryUsedFast(); // Function MetaDorian.MTAPI_FGenericPlatformMemory.GetMemoryUsedFast // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_FApp
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_FApp : public UObject {
public:


	double STATIC_GetCurrentTime(); // Function MetaDorian.MTAPI_FApp.GetCurrentTime // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_UnrealString
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_UnrealString : public UObject {
public:


	uint32_t STATIC_GetTypeHash(struct FString S); // Function MetaDorian.MTAPI_UnrealString.GetTypeHash // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_CoreGlobals
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_CoreGlobals : public UObject {
public:


	bool STATIC_IsRunningCommandlet(); // Function MetaDorian.MTAPI_CoreGlobals.IsRunningCommandlet // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAPI_Math
// Size: 0x30 (Inherited: 0x30)
class UMTAPI_Math : public UBlueprintFunctionLibrary {
public:


	void STATIC_WindRelativeAnglesDegrees(float InAngle0, float& InOutAngle1); // Function MetaDorian.MTAPI_Math.WindRelativeAnglesDegrees // (Final|Native|Static|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTAppUtils
// Size: 0x30 (Inherited: 0x30)
class UMTAppUtils : public UObject {
public:


	void STATIC_SetVolumeMultiplier(float InVolumeMultiplier); // Function MetaDorian.MTAppUtils.SetVolumeMultiplier // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTDorianSOVerInfo
// Size: 0x70 (Inherited: 0x30)
class UMTDorianSOVerInfo : public UObject {
public:

	struct FString TargetUrl; // 0x30(0x10)
	struct FString HashValue; // 0x40(0x10)
	struct FString Timestamp; // 0x50(0x10)
	struct FString Version; // 0x60(0x10)

	struct UMTDorianSOVerInfo* STATIC_Create(struct FString JsonText); // Function MetaDorian.MTDorianSOVerInfo.Create // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTDorianSOUpdater
// Size: 0x90 (Inherited: 0x30)
class UMTDorianSOUpdater : public UObject {
public:

	struct UMTDorianSOVerInfo* VerInfo; // 0x30(0x08)
	struct FString LibPath; // 0x38(0x10)
	struct FString StubPath; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)
	/*struct FMulticastInlineDelegate*/char OnComplete[0x10]; // 0x70(0x10)
	bool bDone; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct UMTHttpLoader* Loader; // 0x88(0x08)

	bool IsDone(); // Function MetaDorian.MTDorianSOUpdater.IsDone // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTFileUtils
// Size: 0x30 (Inherited: 0x30)
class UMTFileUtils : public UObject {
public:


	bool STATIC_UnzipFileSync(struct FString ZipFilePath, struct FString TargetLocation, struct FString Password, bool bForce); // Function MetaDorian.MTFileUtils.UnzipFileSync // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaDorian.MTHttpLoader
// Size: 0x80 (Inherited: 0x30)
class UMTHttpLoader : public UObject {
public:

	struct FString URL; // 0x30(0x10)
	struct FString ContentType; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)
	/*struct FDelegate*/char OnComplete[0x10]; // 0x70(0x10)

	bool Load(struct FString InURL, struct FString InContentType); // Function MetaDorian.MTHttpLoader.Load // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
