
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMAbility.AbilityAttachBaseMesh
// Size: 0x3e0 (Inherited: 0x378)
class AAbilityAttachBaseMesh : public AActor {
public:

	char pad_378[0x18]; // 0x378(0x18)
	bool IsSnapToTarget; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	struct FName StaticMeshSocketName; // 0x394(0x08)
	struct FName SkeletalMeshSocketName; // 0x39c(0x08)
	bool bDefalutMeshIsStaticMesh; // 0x3a4(0x01)
	bool bSetMasterPose; // 0x3a5(0x01)
	bool bUseFromPool; // 0x3a6(0x01)
	bool bMeshEnable; // 0x3a7(0x01)
	enum class EAbiltyTemplateAttachMeshMode AttachMeshMode; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UGPSkeletalMeshComponent* CurSkeletalMeshComponent; // 0x3b0(0x08)
	struct UGPSkeletalMeshComponent* CurSkeletalMeshComponentMasterPose; // 0x3b8(0x08)
	struct UStaticMeshComponent* CurStaticMeshComponent; // 0x3c0(0x08)
	struct UGameAkComponent* CurGameAKComponent; // 0x3c8(0x08)
	int32_t CurSkeletalMeshComponentEnable; // 0x3d0(0x04)
	int32_t CurSkeletalMeshComponentMasterPoseEnable; // 0x3d4(0x04)
	int32_t CurStaticMeshComponentEnable; // 0x3d8(0x04)
	int32_t CurGameAKComponentEnable; // 0x3dc(0x04)

	void UpdatePostEffectVectorParameters(struct FName PostEffectName, struct FName ParameterName, struct FLinearColor Value); // Function DFMAbility.AbilityAttachBaseMesh.UpdatePostEffectVectorParameters // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityLauncherFireModeParams
// Size: 0x160 (Inherited: 0x120)
class UAbilityLauncherFireModeParams : public UGPWeaponFireModeParamsAbilityLauncher {
public:

	bool bIsC201Launcher; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UClass* LauncherBulletClass; // 0x128(0x08)
	struct UClass* LauncherBulletClass2; // 0x130(0x08)
	struct UClass* LauncherBulletClass3; // 0x138(0x08)
	struct FName SocketName; // 0x140(0x08)
	float IntersectionPointLength; // 0x148(0x04)
	struct FVector TargetOffset; // 0x14c(0x0c)
	float OwnerVelocityFactor; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityLauncherFireMode
// Size: 0x320 (Inherited: 0x100)
class UAbilityLauncherFireMode : public UGPWeaponFireModePhysicSimulate {
public:

	char pad_100[0x1e8]; // 0x100(0x1e8)
	struct UGPWeaponFireModeParamsAbilityLauncher* AbilityLauncherFireModeParams; // 0x2e8(0x08)
	char pad_2F0[0x10]; // 0x2f0(0x10)
	struct FTimerHandle SwitchWeaponNextFrameTimerHandle; // 0x300(0x08)
	bool bEnableSwitchWeaponInEndFire; // 0x308(0x01)
	bool bResetCurrentWeapon; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct UAbilityLauncherFireModeParams* DirectLauncherParams; // 0x310(0x08)
	int32_t SpawnBulletCnt; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)

	void TrySpawnFakeBullet(struct FWeaponFireRepInfo& RepInfo); // Function DFMAbility.AbilityLauncherFireMode.TrySpawnFakeBullet // (Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityMineAnimInstance
// Size: 0x9e0 (Inherited: 0x280)
class UAbilityMineAnimInstance : public UAnimInstance {
public:

	struct FAbilityMineAnimInstanceProxy LocalProxy; // 0x280(0x760)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityNodeTriggerInterface
// Size: 0x30 (Inherited: 0x30)
class UAbilityNodeTriggerInterface : public UInterface {
public:


	void SetTriggerType(int32_t Type); // Function DFMAbility.AbilityNodeTriggerInterface.SetTriggerType // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityOverloadBuffHandler
// Size: 0xf8 (Inherited: 0xe8)
class UAbilityOverloadBuffHandler : public UGPEffectCueHandler {
public:

	char pad_E8[0x10]; // 0xe8(0x10)

	void TrySendEvent(bool bIsAdd); // Function DFMAbility.AbilityOverloadBuffHandler.TrySendEvent // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityProjectileInterface
// Size: 0x30 (Inherited: 0x30)
class UAbilityProjectileInterface : public UInterface {
public:


	void SetVelocityStartPos(struct FVector pos); // Function DFMAbility.AbilityProjectileInterface.SetVelocityStartPos // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilitySpawnActorInterface
// Size: 0x30 (Inherited: 0x30)
class UAbilitySpawnActorInterface : public UInterface {
public:


	void StartFadeOut(); // Function DFMAbility.AbilitySpawnActorInterface.StartFadeOut // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityBlueprintsSpawnActorInterface
// Size: 0x30 (Inherited: 0x30)
class UAbilityBlueprintsSpawnActorInterface : public UInterface {
public:


	void BP_OnSetAbilitOwner(int32_t SkillEntityIndex, struct AActor* CHARACTER); // Function DFMAbility.AbilityBlueprintsSpawnActorInterface.BP_OnSetAbilitOwner // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityTraceTargetInterface
// Size: 0x30 (Inherited: 0x30)
class UAbilityTraceTargetInterface : public UInterface {
public:


	void SetTraceTargetPos(struct FVector pos, int32_t SkillEntityIndex); // Function DFMAbility.AbilityTraceTargetInterface.SetTraceTargetPos // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityVehicleAnimInstance
// Size: 0x280 (Inherited: 0x280)
class UAbilityVehicleAnimInstance : public UAnimInstance {
public:


	struct FVector GetSocketUpOffsetLoaction(struct FName Name, float offset, enum class ERelativeTransformSpace Space); // Function DFMAbility.AbilityVehicleAnimInstance.GetSocketUpOffsetLoaction // (Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityWeaponBulletGrenadeC4
// Size: 0xe40 (Inherited: 0xe38)
class AAbilityWeaponBulletGrenadeC4 : public AWeaponThrowableBulletProjectile {
public:

	char pad_E38[0x8]; // 0xe38(0x08)

	void BP_StickyToTarget(); // Function DFMAbility.AbilityWeaponBulletGrenadeC4.BP_StickyToTarget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ArtilleryShellingTemplate
// Size: 0x468 (Inherited: 0x378)
class AArtilleryShellingTemplate : public AActor {
public:

	bool bIsSpawnSmoke; // 0x378(0x01)
	bool bIsShowTips; // 0x379(0x01)
	char pad_37A[0x2]; // 0x37a(0x02)
	int32_t SkillId; // 0x37c(0x04)
	struct FBreakthroughEventRange ShellNumRange; // 0x380(0x08)
	enum class EArtilleryShellDropMethod DropMethod; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct TArray<struct FVector2D> DropOrder; // 0x390(0x10)
	float Extent; // 0x3a0(0x04)
	float ExtraRandomOffset; // 0x3a4(0x04)
	float FireInterval; // 0x3a8(0x04)
	float FireDelay; // 0x3ac(0x04)
	struct UClass* ShellTemplate; // 0x3b0(0x08)
	float ShellFireDistance; // 0x3b8(0x04)
	float ShellFireHeight; // 0x3bc(0x04)
	float ShellFlyTime; // 0x3c0(0x04)
	float GravityZ; // 0x3c4(0x04)
	float RemoveUseCountDelay; // 0x3c8(0x04)
	bool bEnableObstacleAvoidance; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	float ObstacleThreshold; // 0x3d0(0x04)
	bool bEnableObstacleAvoidance_Horizontal; // 0x3d4(0x01)
	char AvoidObstacleAngle; // 0x3d5(0x01)
	char AvoidObstacleAngleNum; // 0x3d6(0x01)
	bool bEnableObstacleAvoidance_Vertical; // 0x3d7(0x01)
	char AvoidObstacleAngleNum_Vertical; // 0x3d8(0x01)
	bool bUseSphereTrace; // 0x3d9(0x01)
	char pad_3DA[0x6e]; // 0x3da(0x6e)
	struct AGPCharacter* MakerInstigator; // 0x448(0x08)
	char pad_450[0x18]; // 0x450(0x18)

	void ClientDebugTraceLine(struct FVector Start, struct FVector End, struct FColor Color, struct FHitResult HitResult, float radius); // Function DFMAbility.ArtilleryShellingTemplate.ClientDebugTraceLine // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ArtilleryShellProjectileMovementComponent
// Size: 0x230 (Inherited: 0x220)
class UArtilleryShellProjectileMovementComponent : public UProjectileMovementComponent {
public:

	struct FVector Direction; // 0x220(0x0c)
	float Accelerate; // 0x22c(0x04)

	void Init(struct FVector InitVelocity, struct FArtilleryShellMovementParameter MovementParameter); // Function DFMAbility.ArtilleryShellProjectileMovementComponent.Init // (Final|Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.BowArrowMesh
// Size: 0x3c0 (Inherited: 0x378)
class ABowArrowMesh : public AActor {
public:

	struct FName FireArrowMeshTag; // 0x378(0x08)
	struct FName ProxSensorArrowMeshTag; // 0x380(0x08)
	struct UStaticMeshComponent* FireArrowMeshComponent; // 0x388(0x08)
	struct UStaticMeshComponent* ProxSensorArrowMeshComponent; // 0x390(0x08)
	struct UFXResourceContainerComponent* ArrowFX; // 0x398(0x08)
	struct FName FireArrowFXName; // 0x3a0(0x08)
	struct FName ProxSensorArrowFXName; // 0x3a8(0x08)
	char pad_3B0[0x10]; // 0x3b0(0x10)

	void SetArrowType(bool IsProxSensorArrow); // Function DFMAbility.BowArrowMesh.SetArrowType // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ChainHookComponent
// Size: 0x1f0 (Inherited: 0x100)
class UChainHookComponent : public UActorComponent {
public:

	bool bIsDrawDebugLine; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32_t MaxBendCount; // 0x104(0x04)
	int32_t TryBendUpStepSize; // 0x108(0x04)
	int32_t TryBendUpStepNum; // 0x10c(0x04)
	int32_t TryBendStepSize; // 0x110(0x04)
	int32_t TryBendStepForwardRate; // 0x114(0x04)
	int32_t TryBendStepNum; // 0x118(0x04)
	enum class ECollisionChannel CheckChannel; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	float CheckRadius; // 0x120(0x04)
	bool bIsInit; // 0x124(0x01)
	bool bIsCutOff; // 0x125(0x01)
	char pad_126[0x2]; // 0x126(0x02)
	struct FVector CurrStart; // 0x128(0x0c)
	struct FVector CurrEnd; // 0x134(0x0c)
	struct TArray<struct FVector> BendPoints; // 0x140(0x10)
	char pad_150[0xa0]; // 0x150(0xa0)

	bool UpdateLocation(struct FVector& Start, struct FVector& End); // Function DFMAbility.ChainHookComponent.UpdateLocation // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityBeacon
// Size: 0x2910 (Inherited: 0x2870)
class ADFMAbilityBeacon : public ADFMCharacter {
public:

	char pad_2870[0x18]; // 0x2870(0x18)
	int32_t OwnerCampID; // 0x2888(0x04)
	int32_t OwnerTeamID; // 0x288c(0x04)
	uint64_t OwnerUin; // 0x2890(0x08)
	float LeftTime; // 0x2898(0x04)
	struct TWeakObjectPtr<struct UDFMAbilityInstance> OwnerAbility; // 0x289c(0x08)
	char pad_28A4[0x4]; // 0x28a4(0x04)
	struct TMap<int64_t, struct FVector> EnemyLocationMap; // 0x28a8(0x50)
	char pad_28F8[0x18]; // 0x28f8(0x18)

	bool IsEnemy(); // Function DFMAbility.DFMAbilityBeacon.IsEnemy // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityBunkerPiece
// Size: 0x3a8 (Inherited: 0x378)
class ADFMAbilityBunkerPiece : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)
	int32_t PieceIndex; // 0x380(0x04)
	int32_t BrotherIndex; // 0x384(0x04)
	float Health; // 0x388(0x04)
	char pad_38C[0x1c]; // 0x38c(0x1c)

	void OnRep_Health(); // Function DFMAbility.DFMAbilityBunkerPiece.OnRep_Health // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityDamageTaker
// Size: 0x380 (Inherited: 0x378)
class ADFMAbilityDamageTaker : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)

	bool IsDestroy(); // Function DFMAbility.DFMAbilityDamageTaker.IsDestroy // (Native|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityDataSystem
// Size: 0x38 (Inherited: 0x38)
class UDFMAbilityDataSystem : public UGPAbilityDataSystem {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityDFMVehicle
// Size: 0x2a00 (Inherited: 0x2870)
class ADFMAbilityDFMVehicle : public ADFMCharacter {
public:

	char pad_2870[0x28]; // 0x2870(0x28)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerOperator; // 0x2898(0x08)
	char pad_28A0[0x10]; // 0x28a0(0x10)
	bool bTeammatePickUp; // 0x28b0(0x01)
	bool bEnermyPickUp; // 0x28b1(0x01)
	char pad_28B2[0x2]; // 0x28b2(0x02)
	struct FName VehiclePanelName; // 0x28b4(0x08)
	float MoveForwardValue; // 0x28bc(0x04)
	float MoveRightValue; // 0x28c0(0x04)
	float VehicleYaw; // 0x28c4(0x04)
	float VehicleTurnRate; // 0x28c8(0x04)
	float VehiclePitch; // 0x28cc(0x04)
	float VehicleLookUpTurnRate; // 0x28d0(0x04)
	char pad_28D4[0xc]; // 0x28d4(0x0c)
	bool bOnOperate; // 0x28e0(0x01)
	char pad_28E1[0x8]; // 0x28e1(0x08)
	bool bVehicleDestroyed; // 0x28e9(0x01)
	char pad_28EA[0x2]; // 0x28ea(0x02)
	float AssaultShockConfigTime; // 0x28ec(0x04)
	int32_t VehicleBehaviorForbit; // 0x28f0(0x04)
	float AssaultShockTime; // 0x28f4(0x04)
	bool BeAssaultShock; // 0x28f8(0x01)
	char pad_28F9[0x3]; // 0x28f9(0x03)
	struct FName LowPowerHudPanelName; // 0x28fc(0x08)
	int32_t OwnerCampID; // 0x2904(0x04)
	int32_t OwnerTeamID; // 0x2908(0x04)
	char pad_290C[0x4]; // 0x290c(0x04)
	uint64_t OwnerUin; // 0x2910(0x08)
	struct TArray<struct UClass*> DemageEffects; // 0x2918(0x10)
	struct TMap<int32_t, int32_t> DetectorHandlerMap; // 0x2928(0x50)
	struct FGameplayTagContainer InteractableTags; // 0x2978(0x20)
	struct FGameplayTag VehicleInteractorTag; // 0x2998(0x08)
	struct FText InteractText; // 0x29a0(0x18)
	struct FName LogicName; // 0x29b8(0x08)
	int32_t WeaponMarkableType; // 0x29c0(0x04)
	char pad_29C4[0x4]; // 0x29c4(0x04)
	struct FString WeaponMarkableName; // 0x29c8(0x10)
	struct FVector MarkerOffset; // 0x29d8(0x0c)
	struct FName MarkerSocket; // 0x29e4(0x08)
	char pad_29EC[0xc]; // 0x29ec(0x0c)
	float OffOperateDelay; // 0x29f8(0x04)
	float PhysicsDamageRate; // 0x29fc(0x04)

	void VehicleRecycle(); // Function DFMAbility.DFMAbilityDFMVehicle.VehicleRecycle // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityDun
// Size: 0x388 (Inherited: 0x378)
class ADFMAbilityDun : public AActor {
public:

	bool bDisableWhenSprint; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	struct TWeakObjectPtr<struct AGPCharacter> OwnerChar; // 0x37c(0x08)
	char pad_384[0x4]; // 0x384(0x04)

	void OnSprintStateChange(bool bCurSprintState); // Function DFMAbility.DFMAbilityDun.OnSprintStateChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityFlyRebot
// Size: 0x2970 (Inherited: 0x2870)
class ADFMAbilityFlyRebot : public ADFMCharacter {
public:

	char pad_2870[0x30]; // 0x2870(0x30)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerOperator; // 0x28a0(0x08)
	char pad_28A8[0x10]; // 0x28a8(0x10)
	bool bTeammatePickUp; // 0x28b8(0x01)
	bool bEnermyPickUp; // 0x28b9(0x01)
	char pad_28BA[0x2]; // 0x28ba(0x02)
	struct FName VehiclePanelName; // 0x28bc(0x08)
	float MoveForwardValue; // 0x28c4(0x04)
	float MoveRightValue; // 0x28c8(0x04)
	float VehicleYaw; // 0x28cc(0x04)
	float VehicleTurnRate; // 0x28d0(0x04)
	float VehiclePitch; // 0x28d4(0x04)
	float VehicleLookUpTurnRate; // 0x28d8(0x04)
	char pad_28DC[0xc]; // 0x28dc(0x0c)
	bool bOnOperate; // 0x28e8(0x01)
	char pad_28E9[0x8]; // 0x28e9(0x08)
	bool bVehicleDestroyed; // 0x28f1(0x01)
	char pad_28F2[0x2]; // 0x28f2(0x02)
	float AssaultShockConfigTime; // 0x28f4(0x04)
	int32_t VehicleBehaviorForbit; // 0x28f8(0x04)
	float AssaultShockTime; // 0x28fc(0x04)
	bool BeAssaultShock; // 0x2900(0x01)
	char pad_2901[0x3]; // 0x2901(0x03)
	struct FName LowPowerHudPanelName; // 0x2904(0x08)
	int32_t OwnerCampID; // 0x290c(0x04)
	int32_t OwnerTeamID; // 0x2910(0x04)
	char pad_2914[0x4]; // 0x2914(0x04)
	uint64_t OwnerUin; // 0x2918(0x08)
	char pad_2920[0x8]; // 0x2920(0x08)
	struct FGameplayTagContainer InteractableTags; // 0x2928(0x20)
	struct FGameplayTag VehicleInteractorTag; // 0x2948(0x08)
	struct FText InteractText; // 0x2950(0x18)
	struct FName LogicName; // 0x2968(0x08)

	void VehicleMovementModeChanged(struct ACHARACTER* CHARACTER, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function DFMAbility.DFMAbilityFlyRebot.VehicleMovementModeChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityGameStateComponent
// Size: 0x400 (Inherited: 0x248)
class UDFMAbilityGameStateComponent : public UGPAbilityGameStateComponent {
public:

	char pad_248[0x8]; // 0x248(0x08)
	struct TMap<int32_t, struct FSkillConfigData> SkillRowDataMap; // 0x250(0x50)
	struct TMap<int32_t, struct ADFMAbilityLogicTemplate*> AllAbilityTemplate; // 0x2a0(0x50)
	struct TArray<struct UCurveFloat*> AllScoreDiscountCurve; // 0x2f0(0x10)
	struct TMap<struct FName, struct FAbilityTempalteLoadData> AbilityTemplateLoadMaps; // 0x300(0x50)
	struct TMap<struct FName, uint64_t> AbilityTemplateLoadHandleMaps; // 0x350(0x50)
	struct TArray<struct FAbilityTemplateRepData> AbilityTemplateRepData; // 0x3a0(0x10)
	int64_t AbilityIndexRam; // 0x3b0(0x08)
	int64_t AbilityIndexRam2; // 0x3b8(0x08)
	char pad_3C0[0x24]; // 0x3c0(0x24)
	struct TWeakObjectPtr<struct UDFMAbilitySpawnActorSystem> SpawnActorSystem; // 0x3e4(0x08)
	struct TWeakObjectPtr<struct UDFMAbilityPreviewActorSystem> PreviewActorSystem; // 0x3ec(0x08)
	struct TWeakObjectPtr<struct UDFMAbilityDefaultSystem> DefaultSystem; // 0x3f4(0x08)
	char pad_3FC[0x4]; // 0x3fc(0x04)

	void Rep_AbilityTemplateRepData(); // Function DFMAbility.DFMAbilityGameStateComponent.Rep_AbilityTemplateRepData // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilitySerilizeUtils
// Size: 0x30 (Inherited: 0x30)
class UDFMAbilitySerilizeUtils : public UBlueprintFunctionLibrary {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityIncendiaryGrenade
// Size: 0xe50 (Inherited: 0xe38)
class ADFMAbilityIncendiaryGrenade : public AWeaponThrowableBulletProjectile {
public:

	struct UClass* IncendiaryActorClass; // 0xe38(0x08)
	float AutoFitWaterSurfaceMaxDist; // 0xe40(0x04)
	struct FRotator StartFireRotation; // 0xe44(0x0c)

	void TryIncendiaryActor(); // Function DFMAbility.DFMAbilityIncendiaryGrenade.TryIncendiaryActor // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityLevelActorManager
// Size: 0x3c8 (Inherited: 0x378)
class ADFMAbilityLevelActorManager : public ALevelSubsystem {
public:

	struct TArray<struct ADFMAbilityLevelActor*> AbilityLevelActorArray; // 0x378(0x10)
	struct TArray<struct AGPWeaponBulletBase*> ProjectileArray; // 0x388(0x10)
	struct TArray<struct ARebornFlag*> RebornFlags; // 0x398(0x10)
	struct TArray<struct AActor*> PlacementActorArray; // 0x3a8(0x10)
	struct TArray<struct ADFMAbilityActor*> AbilityActorArray; // 0x3b8(0x10)

	void UnRegisterProjectile(struct AGPWeaponBulletBase* InProjectile); // Function DFMAbility.DFMAbilityLevelActorManager.UnRegisterProjectile // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityLogicTemplate
// Size: 0x838 (Inherited: 0x460)
class ADFMAbilityLogicTemplate : public AGPAbilityLogicTemplate {
public:

	struct TArray<struct UQA_AbilityLogicTask*> LogicTemplates; // 0x460(0x10)
	struct TMap<struct FName, int32_t> LogicTemplateNameMap; // 0x470(0x50)
	char pad_4C0[0x10]; // 0x4c0(0x10)
	struct UQA_AbilityLogicTask* LastQA; // 0x4d0(0x08)
	struct FName LastStateName; // 0x4d8(0x08)
	enum class EAbilityTriggerType LastTriggerType; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct UQA_AbilityLogicTask* ListenerEntry; // 0x4e8(0x08)
	struct UQA_AbilityLogicTask* ListenerEntryBase; // 0x4f0(0x08)
	bool bCollectedFromDs; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	int32_t CollectProcess; // 0x4fc(0x04)
	struct FTimerHandle AutoPlayTimerHandle; // 0x500(0x08)
	struct FTimerHandle SpawnTimerHandle; // 0x508(0x08)
	struct TArray<struct UQA_AbilityLogicTask*> LogicCalls; // 0x510(0x10)
	bool bGenerateRepNode; // 0x520(0x01)
	char pad_521[0xf]; // 0x521(0x0f)
	struct FAbilityShareMemory AbilityShareMemory; // 0x530(0x20)
	struct TMap<enum class ESkillBehavior, struct FSkillBehaviorData> SkillBehaviorMap; // 0x550(0x50)
	struct TMap<enum class ESkillBehavior, struct FSkillBehaviorData> SkillBehaviorMapBase; // 0x5a0(0x50)
	struct TMap<enum class ESkillBtnCall, struct FSkillBtnCallData> BehaviorGroupMap; // 0x5f0(0x50)
	struct TMap<enum class ESkillBtnCall, struct FSkillBtnCallData> BehaviorGroupMapBase; // 0x640(0x50)
	struct TMap<enum class EFSMGamePlayStatusDefine, int32_t> FSMStatusMapBase; // 0x690(0x50)
	struct TArray<int32_t> EntryNames; // 0x6e0(0x10)
	struct TArray<struct FAbiltyTemplateAttachMeshConfig> AttachConfigList; // 0x6f0(0x10)
	struct FEndAbilityOption EndAbilityOption; // 0x700(0x03)
	bool bUseSoftPathPreLoad; // 0x703(0x01)
	char pad_704[0x4]; // 0x704(0x04)
	/*struct TArray<struct TSoftClassPtr<UObject>>*/char ActorClassSoftPathPreLoad[0x10]; // 0x708(0x10)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char ActorObjectSoftPathPreLoad[0x10]; // 0x718(0x10)
	struct FName LoadResouceNodeName; // 0x728(0x08)
	struct FName TemplateAssetName; // 0x730(0x08)
	/*struct TArray<struct TSoftObjectPtr<UAnimMontage>>*/char PreloadMontageToPlay[0x10]; // 0x738(0x10)
	struct TMap<struct FName, struct UObject*> MontageResouceMap; // 0x748(0x50)
	struct TMap<struct FName, struct FAbilityMontageLoadHadnle> LoadedResourceHandle; // 0x798(0x50)
	struct TMap<struct FName, uint64_t> PreloadHandle; // 0x7e8(0x50)

	void WeaponProjectileSpawnActorCallback(int32_t SkillEntityIndex, int32_t LogicID, struct AActor* Actor, struct FName ActorName); // Function DFMAbility.DFMAbilityLogicTemplate.WeaponProjectileSpawnActorCallback // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityParticleSmokeWallComponent
// Size: 0x3e0 (Inherited: 0x2d0)
class UDFMAbilityParticleSmokeWallComponent : public UGPDeformableShapeComponentBase {
public:

	char pad_2D0[0x8]; // 0x2d0(0x08)
	bool bInFadeOut; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float TickFadeOutTime; // 0x2dc(0x04)
	bool bInitGenerating; // 0x2e0(0x01)
	bool bIsGeneratingPath; // 0x2e1(0x01)
	char pad_2E2[0x6]; // 0x2e2(0x06)
	bool bIsMoveParticle; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	int32_t HonrizontalCubeCount; // 0x2ec(0x04)
	int32_t VerticalCubeCount; // 0x2f0(0x04)
	float HonrizontalCubeSize; // 0x2f4(0x04)
	float VerticalCubeSize; // 0x2f8(0x04)
	char pad_2FC[0x8]; // 0x2fc(0x08)
	bool bIsTickAnimation; // 0x304(0x01)
	char pad_305[0xb]; // 0x305(0x0b)
	struct TArray<struct FVector> PathList; // 0x310(0x10)
	struct TArray<float> PathDistList; // 0x320(0x10)
	char pad_330[0x8]; // 0x330(0x08)
	struct UFXResourceContainerComponent* MoveFxComponent; // 0x338(0x08)
	int32_t MoveFxComponentHandler; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct AActor* MoveFXActor; // 0x348(0x08)
	struct UParticleSystemComponent* ParticleSysmtem; // 0x350(0x08)
	struct UClass* MoveFXActorClass; // 0x358(0x08)
	struct UClass* MoveFXActorClassHQ; // 0x360(0x08)
	struct UClass* MoveFXActorClassHQHD; // 0x368(0x08)
	struct UClass* MoveFXActorClassTQ; // 0x370(0x08)
	int32_t StartMoveIndex; // 0x378(0x04)
	float DelayMoveTime; // 0x37c(0x04)
	float MoveSpeed; // 0x380(0x04)
	struct FName ResourceFXName; // 0x384(0x08)
	int32_t IteratorPathPointInFrame; // 0x38c(0x04)
	int32_t IteratorCreateCubeInFrame; // 0x390(0x04)
	int32_t IteratorDelayNewstMoveIndex; // 0x394(0x04)
	float IteratorPathZOffset; // 0x398(0x04)
	float SizeRandomMin; // 0x39c(0x04)
	float SizeRandomMax; // 0x3a0(0x04)
	struct FVector CubeRandomOffsetMin; // 0x3a4(0x0c)
	struct FVector CubeRandomOffsetMax; // 0x3b0(0x0c)
	float ForwardSizeScale; // 0x3bc(0x04)
	float MaxWidthSize; // 0x3c0(0x04)
	float FadeOutTime; // 0x3c4(0x04)
	struct TArray<struct FAbilityParticleSmokeWallParam> FadeParams; // 0x3c8(0x10)
	char pad_3D8[0x8]; // 0x3d8(0x08)

	void TickMoveParticle(float DeltaTime); // Function DFMAbility.DFMAbilityParticleSmokeWallComponent.TickMoveParticle // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilitySmokeDeformableActor
// Size: 0x848 (Inherited: 0x6b8)
class ADFMAbilitySmokeDeformableActor : public AGPDeformableActor {
public:

	char pad_6B8[0x10]; // 0x6b8(0x10)
	enum class EAbilitySmokeActorDetectionStage CurrentDetectionStage; // 0x6c8(0x01)
	bool bIsLocalCharCurrentInSide; // 0x6c9(0x01)
	char pad_6CA[0xa]; // 0x6ca(0x0a)
	float RuntimeDetectionCourseTime; // 0x6d4(0x04)
	float RuntimeDetectionVoxelTime; // 0x6d8(0x04)
	char pad_6DC[0x4]; // 0x6dc(0x04)
	struct ADFMCharacter* LocalCharActor; // 0x6e0(0x08)
	struct UDFMBattleFieldSystem* DFMBattleFieldSystem; // 0x6e8(0x08)
	struct UGPAbilityGameStateComponent* AbilityGS; // 0x6f0(0x08)
	struct TArray<int32_t> BoxUIDArray; // 0x6f8(0x10)
	struct TArray<uint64_t> VoxelIdArray; // 0x708(0x10)
	float BoxScaleValue; // 0x718(0x04)
	float DetectionCourseTime; // 0x71c(0x04)
	float DetectionVoxelTime; // 0x720(0x04)
	float HDDetectionScale; // 0x724(0x04)
	float EnterSmokeWantVoiceCDTime; // 0x728(0x04)
	struct FName EnterPostProcessFogName; // 0x72c(0x08)
	struct FVector ServerVoxelExtentOffset; // 0x734(0x0c)
	struct FVector ClientExtentOffset; // 0x740(0x0c)
	char pad_74C[0x4]; // 0x74c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char StartSoundEventName[0x28]; // 0x750(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EndSoundEventName[0x28]; // 0x778(0x28)
	uint64_t SoundEventPreLoadedHandle; // 0x7a0(0x08)
	bool bPlayStartSoundEvent; // 0x7a8(0x01)
	bool bPlayEndSoundEvent; // 0x7a9(0x01)
	char pad_7AA[0x6]; // 0x7aa(0x06)
	struct USceneComponent* GameAkComponent; // 0x7b0(0x08)
	float AudioCalculateAccuTime; // 0x7b8(0x04)
	float AudioCalculateCDTime; // 0x7bc(0x04)
	float AudioSmoothTime; // 0x7c0(0x04)
	float AudioSmoothSpeed; // 0x7c4(0x04)
	struct FVector PreLocalPawnHeadZeroBasedPos; // 0x7c8(0x0c)
	int32_t PreDeformableBoxCount; // 0x7d4(0x04)
	struct FVector CurrentAKZeroBasedLocation; // 0x7d8(0x0c)
	struct FVector TargetAKZeroBasedLocation; // 0x7e4(0x0c)
	float MaxAudioCalcCDTime; // 0x7f0(0x04)
	float MinAudioCalcCDTime; // 0x7f4(0x04)
	float MaxAudioCalcCDDistance; // 0x7f8(0x04)
	float MinAudioCalcCDDistance; // 0x7fc(0x04)
	float AudioSmoothConfigTime; // 0x800(0x04)
	float AudioSmoothConfigSpeed; // 0x804(0x04)
	struct TArray<struct FAbilityDeformableSmokeBox> AbilityDeformableBoxList; // 0x808(0x10)
	struct FVector DeformableMinPoint; // 0x818(0x0c)
	struct FVector DeformableMaxPoint; // 0x824(0x0c)
	struct FVector DeformableCenterPoint; // 0x830(0x0c)
	bool bIsAABBInit; // 0x83c(0x01)
	char pad_83D[0x3]; // 0x83d(0x03)
	struct UExtinguishIncendiaryComponent* ExtinguishComponent; // 0x840(0x08)

	void UpdateTickInterval(); // Function DFMAbility.DFMAbilitySmokeDeformableActor.UpdateTickInterval // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilitySmokeWallUAS
// Size: 0x760 (Inherited: 0x4a0)
class ADFMAbilitySmokeWallUAS : public AGPUASActor {
public:

	char pad_4A0[0x38]; // 0x4a0(0x38)
	bool bAutoStart; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct ADFMAbilitySmokeWallUAS* Master; // 0x4e0(0x08)
	bool bIsPlayedStopSound; // 0x4e8(0x01)
	bool bIsNotifyFired; // 0x4e9(0x01)
	char pad_4EA[0x6]; // 0x4ea(0x06)
	uint64_t SoundEventPreLoadedHandle; // 0x4f0(0x08)
	bool IsAsyncPlayParticle; // 0x4f8(0x01)
	bool IsAsyncPlayEnermyParticle; // 0x4f9(0x01)
	char pad_4FA[0x2]; // 0x4fa(0x02)
	int32_t AsyncPlayParticleIndex; // 0x4fc(0x04)
	int64_t CreatedGameFrame; // 0x500(0x08)
	bool UseTrace; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	float TraceOffset; // 0x50c(0x04)
	struct USkeletalMeshComponent* MeshA; // 0x510(0x08)
	struct USkeletalMeshComponent* MeshB; // 0x518(0x08)
	struct USkeletalMeshComponent* MeshC; // 0x520(0x08)
	struct FName MeshFlyFxName; // 0x528(0x08)
	struct UFXResourceContainerComponent* MeshAFXResourceContainer; // 0x530(0x08)
	char pad_538[0x8]; // 0x538(0x08)
	struct UFXResourceContainerComponent* MeshBFXResourceContainer; // 0x540(0x08)
	char pad_548[0x8]; // 0x548(0x08)
	struct UFXResourceContainerComponent* MeshCFXResourceContainer; // 0x550(0x08)
	char pad_558[0x4]; // 0x558(0x04)
	struct FName MeshLightFxName; // 0x55c(0x08)
	char pad_564[0x4]; // 0x564(0x04)
	struct UFXResourceContainerComponent* MeshALightFXResourceContainer; // 0x568(0x08)
	char pad_570[0x8]; // 0x570(0x08)
	struct UFXResourceContainerComponent* MeshBLightFXResourceContainer; // 0x578(0x08)
	char pad_580[0x8]; // 0x580(0x08)
	struct UFXResourceContainerComponent* MeshCLightFXResourceContainer; // 0x588(0x08)
	char pad_590[0x10]; // 0x590(0x10)
	struct FTransform LocalTransform; // 0x5a0(0x30)
	bool bUseInWeaponIdle; // 0x5d0(0x01)
	char pad_5D1[0x3]; // 0x5d1(0x03)
	struct FName LightMatPropoertyName; // 0x5d4(0x08)
	struct FColor FriendLightColor; // 0x5dc(0x04)
	struct FColor EnermyLightColor; // 0x5e0(0x04)
	bool bPreLoadEnable; // 0x5e4(0x01)
	char pad_5E5[0x3]; // 0x5e5(0x03)
	struct FString GunnerRobot; // 0x5e8(0x10)
	struct TMap<enum class EDFMGamePlayMode, float> ActionTimes; // 0x5f8(0x50)
	struct FText ActionBarDescText; // 0x648(0x18)
	float DistanceScale; // 0x660(0x04)
	struct FName ActionProgressBarName; // 0x664(0x08)
	bool bUpdatePercent; // 0x66c(0x01)
	bool bMobileAdditiveUpdateBar; // 0x66d(0x01)
	char pad_66E[0x2]; // 0x66e(0x02)
	struct UDFMUASActionCommonProgressBar* ActionProgressBar; // 0x670(0x08)
	struct UDFMAbilityUASActiveComponent* IdleComponent; // 0x678(0x08)
	struct UGPAudioEventAsset* FlyUpSoundEventAudioAsset; // 0x680(0x08)
	struct UGPAudioEventAsset* FlyStopEventAudioAsset; // 0x688(0x08)
	struct UGPAudioEventAsset* DestroySoundEventAudioAsset; // 0x690(0x08)
	enum class ESmokeWallUASStage ServerUASStage; // 0x698(0x01)
	char pad_699[0x3]; // 0x699(0x03)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerCharacter; // 0x69c(0x08)
	int32_t OwnerSkillId; // 0x6a4(0x04)
	int32_t SkillEntityUniqueID; // 0x6a8(0x04)
	int32_t SkillExcuteCount; // 0x6ac(0x04)
	enum class ESmokeWallUASStage UASStage; // 0x6b0(0x01)
	char pad_6B1[0x3]; // 0x6b1(0x03)
	struct FName RTC_Name; // 0x6b4(0x08)
	int32_t RTC_FriendCamp_Value; // 0x6bc(0x04)
	int32_t RTC_EnermyCamp_Value; // 0x6c0(0x04)
	char pad_6C4[0x4]; // 0x6c4(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char DestroySoundEventAudioPath[0x28]; // 0x6c8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char FlyUpSoundEventAudioPath[0x28]; // 0x6f0(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char FlyStopEventAudioPath[0x28]; // 0x718(0x28)
	uint64_t EffectWeaponItemId; // 0x740(0x08)
	enum class ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0x748(0x01)
	char pad_749[0x7]; // 0x749(0x07)
	struct UGPDeformableGameStateComponent* DeformableGameStateComponent; // 0x750(0x08)
	char pad_758[0x8]; // 0x758(0x08)

	void UnRegisterAbilityActor(); // Function DFMAbility.DFMAbilitySmokeWallUAS.UnRegisterAbilityActor // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityThrowBlocking
// Size: 0x570 (Inherited: 0x388)
class ADFMAbilityThrowBlocking : public ADFMAbilityThrowBlockingBaseActor {
public:

	char pad_388[0x30]; // 0x388(0x30)
	struct TArray<struct FAbilityThrowBlockingData> AllGameRoleData; // 0x3b8(0x10)
	bool bIsFullyExpanded; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	int32_t EdgeCheckMinPassNum; // 0x3cc(0x04)
	struct FVector CheckCenterOffset; // 0x3d0(0x0c)
	struct FVector EdgeCheckSize; // 0x3dc(0x0c)
	struct FVector EdgeCheckOffset; // 0x3e8(0x0c)
	struct FName BurningFX; // 0x3f4(0x08)
	float HPTickDelay; // 0x3fc(0x04)
	float MinDestroyDistance; // 0x400(0x04)
	float ParentDestroyedDelay; // 0x404(0x04)
	float DestroyDelay; // 0x408(0x04)
	enum class EHitEventType HitEventType; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	struct FName ThrowAttachableTag; // 0x410(0x08)
	float CharacterFallingCheckDistance; // 0x418(0x04)
	struct FName MtDamageParamName; // 0x41c(0x08)
	float MtDamageParamMaxVal; // 0x424(0x04)
	struct FName MtBurnParamName; // 0x428(0x08)
	float MtBurnParamMaxValue; // 0x430(0x04)
	float MtBurnParamLerpTime; // 0x434(0x04)
	float MtSpawnLerpTime; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct TArray<struct FAbilityThrowBlockingSpawnMaterialParameter> SpawnMaterialParameter; // 0x440(0x10)
	float SpawnAudioTimeSeconds; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct UGPAudioEventAsset* StartSpawnEvent; // 0x458(0x08)
	struct UGPAudioEventAsset* EndSpawnEvent; // 0x460(0x08)
	struct UGPAudioEventAsset* StartBurningEvent; // 0x468(0x08)
	struct UGPAudioEventAsset* EndBurningEvent; // 0x470(0x08)
	struct UGPAudioEventAsset* PartDamagedEvent; // 0x478(0x08)
	struct USceneComponent* SceneComponent; // 0x480(0x08)
	struct UBoxComponent* TriggerBox; // 0x488(0x08)
	struct UBoxComponent* NavBox; // 0x490(0x08)
	char pad_498[0x4]; // 0x498(0x04)
	int32_t CurrentDataIndex; // 0x49c(0x04)
	struct FAbilityThrowBlockingData CurrentData; // 0x4a0(0x30)
	struct UThrowBlockingPartComponent* MainPartComponent; // 0x4d0(0x08)
	struct TArray<struct UThrowBlockingPartComponent*> AllPartsArray; // 0x4d8(0x10)
	struct TArray<struct TWeakObjectPtr<struct AGPCharacter>> AllCheckCharacters; // 0x4e8(0x10)
	struct TArray<struct ADFMAbilityThrowBlocking*> AllOverlapBlockings; // 0x4f8(0x10)
	struct FTimerHandle SpawnTimerHandle; // 0x508(0x08)
	struct FTimerHandle SpawnSoundTimerHandle; // 0x510(0x08)
	struct FTimerHandle TickTimerHandle; // 0x518(0x08)
	struct FTimerHandle DestroyTimerHandle; // 0x520(0x08)
	struct TWeakObjectPtr<struct AActor> SpawnHitTarget; // 0x528(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> SpawnHitComponent; // 0x530(0x08)
	struct TArray<uint16_t> BlockBatchIdArray; // 0x538(0x10)
	bool bHasTakeDamage; // 0x548(0x01)
	bool bIsReachMaxHP; // 0x549(0x01)
	bool bEnableAttach; // 0x54a(0x01)
	bool bIsSpawning; // 0x54b(0x01)
	bool bIsBurning; // 0x54c(0x01)
	bool bIsDestroyAll; // 0x54d(0x01)
	char pad_54E[0x2]; // 0x54e(0x02)
	float BeginPlayTime; // 0x550(0x04)
	float LastHPRate; // 0x554(0x04)
	float LifeTimeSecond; // 0x558(0x04)
	float DestroyTimeSecond; // 0x55c(0x04)
	struct FVector LastLocation; // 0x560(0x0c)
	enum class ETacticalEquipmentMarkerType ChildMarkerType; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)

	void TryAddBreakThroughScore(struct FDamageResultInfo& DamageResult); // Function DFMAbility.DFMAbilityThrowBlocking.TryAddBreakThroughScore // (Final|Native|Private|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityThrowBlockingGrenade
// Size: 0xe80 (Inherited: 0xe38)
class ADFMAbilityThrowBlockingGrenade : public AWeaponThrowableBulletProjectile {
public:

	float DelayShowMeshTimeSeconds; // 0xe38(0x04)
	char pad_E3C[0x4]; // 0xe3c(0x04)
	struct UClass* FullyExpandedBlockingActorClass; // 0xe40(0x08)
	struct UClass* OnGroundBlockingActorClass; // 0xe48(0x08)
	struct UClass* OnWallBlockingActorClass; // 0xe50(0x08)
	struct FRotator StartFireRotation; // 0xe58(0x0c)
	char pad_E64[0x4]; // 0xe64(0x04)
	struct UWeaponFireModeParamsThrowBlocking* ThrowBlockingParams; // 0xe68(0x08)
	struct FTimerHandle DelayShowMeshTimerHandle; // 0xe70(0x08)
	char pad_E78[0x8]; // 0xe78(0x08)

	void TrySpawnBlockingActor(struct FHitResult& ImpactResult); // Function DFMAbility.DFMAbilityThrowBlockingGrenade.TrySpawnBlockingActor // (Final|Native|Private|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityTraceLine
// Size: 0x388 (Inherited: 0x378)
class ADFMAbilityTraceLine : public AActor {
public:

	bool bDisableWhenSprint; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	struct TWeakObjectPtr<struct AGPCharacter> OwnerChar; // 0x37c(0x08)
	char pad_384[0x4]; // 0x384(0x04)

	void OnSprintStateChange(bool bCurSprintState); // Function DFMAbility.DFMAbilityTraceLine.OnSprintStateChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityUASActiveComponent
// Size: 0x280 (Inherited: 0x100)
class UDFMAbilityUASActiveComponent : public UActorComponent {
public:

	struct USkeletalMeshComponent* MeshTargetA; // 0x100(0x08)
	struct USkeletalMeshComponent* MeshTargetB; // 0x108(0x08)
	struct USkeletalMeshComponent* MeshTargetC; // 0x110(0x08)
	bool bEnableInIdling; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float MeshAngleARoll; // 0x11c(0x04)
	float MeshAngleBRoll; // 0x120(0x04)
	float MeshAngleCRoll; // 0x124(0x04)
	struct FVector MeshACurrentOffset; // 0x128(0x0c)
	struct FVector MeshBCurrentOffset; // 0x134(0x0c)
	struct FVector MeshCCurrentOffset; // 0x140(0x0c)
	bool bIsInEquiping; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	float EquipAccumulateTime; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	float EquipMeshPosZ; // 0x158(0x04)
	struct FVector MeshAWorldPosition; // 0x15c(0x0c)
	struct FVector MeshBWorldPosition; // 0x168(0x0c)
	struct FVector MeshCWorldPosition; // 0x174(0x0c)
	char pad_180[0x24]; // 0x180(0x24)
	float MeshSyncTime; // 0x1a4(0x04)
	bool bIdleEnable; // 0x1a8(0x01)
	bool bIsInit; // 0x1a9(0x01)
	char pad_1AA[0x2]; // 0x1aa(0x02)
	struct FVector TargetPosition; // 0x1ac(0x0c)
	int32_t IdleState; // 0x1b8(0x04)
	float UndampedFrequency; // 0x1bc(0x04)
	float EquipTickTime; // 0x1c0(0x04)
	struct TWeakObjectPtr<struct ADFMCharacter> CharacterOwner; // 0x1c4(0x08)
	struct FVector MeshAOffset; // 0x1cc(0x0c)
	struct FVector MeshBOffset; // 0x1d8(0x0c)
	struct FVector MeshCOffset; // 0x1e4(0x0c)
	float MeshARollSpeed; // 0x1f0(0x04)
	float MeshBRollSpeed; // 0x1f4(0x04)
	float MeshCRollSpeed; // 0x1f8(0x04)
	struct FName MeshATargetSocket; // 0x1fc(0x08)
	struct FName MeshBTargetSocket; // 0x204(0x08)
	struct FName MeshCTargetSocket; // 0x20c(0x08)
	float SyncSocketMaxDistance; // 0x214(0x04)
	float SyncSocketLerpTime; // 0x218(0x04)
	struct FName TargetSocketName; // 0x21c(0x08)
	struct FVector SocketOffset; // 0x224(0x0c)
	float MaxEquipTime; // 0x230(0x04)
	float DampingRaio; // 0x234(0x04)
	float SpringTime; // 0x238(0x04)
	struct FVector MaxOffset; // 0x23c(0x0c)
	struct FVector TargetVelocity; // 0x248(0x0c)
	float MaxLegOffset; // 0x254(0x04)
	float LegOffsetLerp; // 0x258(0x04)
	float DeltaOffset; // 0x25c(0x04)
	uint64_t TargetWeaponID; // 0x260(0x08)
	float EquipBeinOffset; // 0x268(0x04)
	float EquipXYSpeed; // 0x26c(0x04)
	float EquipInitZSpeed; // 0x270(0x04)
	float EquipGravity; // 0x274(0x04)
	float EquipFallingGravity; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)

	void TickState(float DeltaTime); // Function DFMAbility.DFMAbilityUASActiveComponent.TickState // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityUtil
// Size: 0x30 (Inherited: 0x30)
class UDFMAbilityUtil : public UBlueprintFunctionLibrary {
public:


	void STATIC_ReleaseUIByName(struct UObject* World, struct FName PanelConfigName); // Function DFMAbility.DFMAbilityUtil.ReleaseUIByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityWheeledVehicleMovementComponent
// Size: 0x188 (Inherited: 0x188)
class UDFMAbilityWheeledVehicleMovementComponent : public UPawnMovementComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMCruiseMissileAnimInstance
// Size: 0xb80 (Inherited: 0xb70)
class UDFMCruiseMissileAnimInstance : public UGPModularWeaponAnimInstance {
public:

	bool HasFired; // 0xb70(0x01)
	char pad_B71[0xf]; // 0xb71(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMCruiseMissileFuncComponent
// Size: 0x178 (Inherited: 0x168)
class UDFMCruiseMissileFuncComponent : public UGPWeaponFuncComponentBase {
public:

	char pad_168[0x4]; // 0x168(0x04)
	struct FName ViewPanelName; // 0x16c(0x08)
	char pad_174[0x4]; // 0x174(0x04)

	void SwitchWeaponNextFrame(); // Function DFMAbility.DFMCruiseMissileFuncComponent.SwitchWeaponNextFrame // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.CruiseMissileConfig
// Size: 0xc8 (Inherited: 0x38)
class UCruiseMissileConfig : public UPrimaryDataAsset {
public:

	float MaxEnergy; // 0x38(0x04)
	float EnergyCostPerSec; // 0x3c(0x04)
	float SecondaryEnergyCostPerSec; // 0x40(0x04)
	float DefaultHp; // 0x44(0x04)
	float ViewTraceInterval; // 0x48(0x04)
	float ViewForwardTraceDistance; // 0x4c(0x04)
	float ViewMarkDistance; // 0x50(0x04)
	float MarkAreaRatio; // 0x54(0x04)
	float SubMissileSpawnAngle; // 0x58(0x04)
	float SubMissileSpawnSpeed; // 0x5c(0x04)
	struct UClass* SubMissileClass; // 0x60(0x08)
	float SecondaryAccelerateFovRatio; // 0x68(0x04)
	float FovLerpTime; // 0x6c(0x04)
	float SecondaryAccelerateFovMax; // 0x70(0x04)
	float SecondaryAccelerateFovMin; // 0x74(0x04)
	struct UCurveFloat* VelocityCurve; // 0x78(0x08)
	float RotateInputRate; // 0x80(0x04)
	float TurnAtRate; // 0x84(0x04)
	float LookUpRate; // 0x88(0x04)
	float TurnAtAngularAcc; // 0x8c(0x04)
	float LookUpAngularAcc; // 0x90(0x04)
	float SecondaryTurnAtRate; // 0x94(0x04)
	float SecondaryLookUpRate; // 0x98(0x04)
	float SecondaryTurnAtAngularAcc; // 0x9c(0x04)
	float SecondaryLookUpAngularAcc; // 0xa0(0x04)
	struct FVector2D NoInputDec; // 0xa4(0x08)
	float SecondaryAcceleration; // 0xac(0x04)
	float SecondaryMaxSpeed; // 0xb0(0x04)
	float RollBackRate; // 0xb4(0x04)
	float RollBackAccRate; // 0xb8(0x04)
	float AutoRollBackTime; // 0xbc(0x04)
	int32_t InputSize; // 0xc0(0x04)
	float NoInputTickTime; // 0xc4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMCruiseMissileMain
// Size: 0x8b0 (Inherited: 0x6f8)
class ADFMCruiseMissileMain : public AWeaponBulletPhysicsSimulate {
public:

	char pad_6F8[0x48]; // 0x6f8(0x48)
	struct UDFMCruiseMissileMovementComponent* CruiseMissileMovement; // 0x740(0x08)
	int32_t ThreatId; // 0x748(0x04)
	float MaxEnergy; // 0x74c(0x04)
	float EnergyCostPerSec; // 0x750(0x04)
	float SecondaryEnergyCostPerSec; // 0x754(0x04)
	float DefaultHp; // 0x758(0x04)
	struct FName ViewPanelName; // 0x75c(0x08)
	float ViewTraceInterval; // 0x764(0x04)
	float ViewForwardTraceDistance; // 0x768(0x04)
	float ViewMarkDistance; // 0x76c(0x04)
	float MarkAreaRatio; // 0x770(0x04)
	float SubMissileSpawnAngle; // 0x774(0x04)
	float SubMissileSpawnSpeed; // 0x778(0x04)
	char pad_77C[0x4]; // 0x77c(0x04)
	struct UClass* SubMissileClass; // 0x780(0x08)
	struct TArray<float> SubMissileExplosionTimeOffset; // 0x788(0x10)
	float SecondaryAccelerateFovRatio; // 0x798(0x04)
	float FovLerpTime; // 0x79c(0x04)
	float SecondaryAccelerateFovMax; // 0x7a0(0x04)
	float SecondaryAccelerateFovMin; // 0x7a4(0x04)
	struct FString HitVo; // 0x7a8(0x10)
	struct TMap<enum class EDFMGamePlayMode, struct UCruiseMissileConfig*> Hd_OverrideConfig; // 0x7b8(0x50)
	struct TMap<enum class EDFMGamePlayMode, struct UCruiseMissileConfig*> Mobile_OverrideConfig; // 0x808(0x50)
	char pad_858[0x20]; // 0x858(0x20)
	struct UDFMCruiseMissileView* CachedView; // 0x878(0x08)
	char pad_880[0x10]; // 0x880(0x10)
	struct TArray<struct AActor*> MarkTargets; // 0x890(0x10)
	char pad_8A0[0x10]; // 0x8a0(0x10)

	void UpdateViewData(); // Function DFMAbility.DFMCruiseMissileMain.UpdateViewData // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMCruiseMissileMovementComponent
// Size: 0x650 (Inherited: 0x5c0)
class UDFMCruiseMissileMovementComponent : public UGPWeaponProjectileMovementComponent {
public:

	char pad_5C0[0x20]; // 0x5c0(0x20)
	struct TArray<struct FCruiseMissileInputData> InputArray; // 0x5e0(0x10)
	char pad_5F0[0x10]; // 0x5f0(0x10)
	struct UCurveFloat* VelocityCurve; // 0x600(0x08)
	float RotateInputRate; // 0x608(0x04)
	float TurnAtRate; // 0x60c(0x04)
	float LookUpRate; // 0x610(0x04)
	float TurnAtAngularAcc; // 0x614(0x04)
	float LookUpAngularAcc; // 0x618(0x04)
	float SecondaryTurnAtRate; // 0x61c(0x04)
	float SecondaryLookUpRate; // 0x620(0x04)
	float SecondaryTurnAtAngularAcc; // 0x624(0x04)
	float SecondaryLookUpAngularAcc; // 0x628(0x04)
	struct FVector2D NoInputDec; // 0x62c(0x08)
	float SecondaryAcceleration; // 0x634(0x04)
	float SecondaryMaxSpeed; // 0x638(0x04)
	float RollBackRate; // 0x63c(0x04)
	float RollBackAccRate; // 0x640(0x04)
	float AutoRollBackTime; // 0x644(0x04)
	int32_t InputSize; // 0x648(0x04)
	float NoInputTickTime; // 0x64c(0x04)

	void StopReport(); // Function DFMAbility.DFMCruiseMissileMovementComponent.StopReport // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMDeformableMeshEmitComponent
// Size: 0x400 (Inherited: 0x3e0)
class UDFMDeformableMeshEmitComponent : public UGPDeformableMeshEmitComponent {
public:

	char pad_3E0[0x10]; // 0x3e0(0x10)
	float FXSmokeExpandRadius; // 0x3f0(0x04)
	char pad_3F4[0xc]; // 0x3f4(0x0c)

	void UnRegisterToFXDelegate(); // Function DFMAbility.DFMDeformableMeshEmitComponent.UnRegisterToFXDelegate // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMDelayHomingStingerMissile
// Size: 0x820 (Inherited: 0x808)
class ADFMDelayHomingStingerMissile : public AWeaponBulletStingerMissile {
public:

	struct AActor* DelayLockTarget; // 0x808(0x08)
	char pad_810[0x8]; // 0x810(0x08)
	bool bLockAllTheTime; // 0x818(0x01)
	char pad_819[0x3]; // 0x819(0x03)
	float DelayLockTime; // 0x81c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMDelayHomingStingMissileMovementComponent
// Size: 0x610 (Inherited: 0x5f0)
class UDFMDelayHomingStingMissileMovementComponent : public UStingerMissileProjectileMovementComponent {
public:

	char pad_5F0[0x4]; // 0x5f0(0x04)
	float MaxRotateUpAngle; // 0x5f4(0x04)
	bool IsUpWithInitialVelocity; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	float UpAcceleration; // 0x5fc(0x04)
	float MaxSpeedBeforeHoming; // 0x600(0x04)
	char pad_604[0xc]; // 0x604(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMFollowProjectileMovementComponent
// Size: 0x230 (Inherited: 0x220)
class UDFMFollowProjectileMovementComponent : public UProjectileMovementComponent {
public:

	struct TWeakObjectPtr<struct AActor> FollowTarget; // 0x220(0x08)
	float StopDistance; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMSupportPackSubSystem
// Size: 0xb8 (Inherited: 0x38)
class UDFMSupportPackSubSystem : public UWorldSubsystem {
public:

	struct AGPCharacter* LockTarget; // 0x38(0x08)
	struct UGPSupportLockerData* DataComp; // 0x40(0x08)
	bool bAmmoPackAddArmdedForceItem; // 0x48(0x01)
	bool bAsyncRayTracing; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct AActor* LastRayHitActor; // 0x50(0x08)
	struct TArray<struct AActor*> RayHitActors; // 0x58(0x10)
	struct TArray<uint64_t> LastSerchUins; // 0x68(0x10)
	char pad_78[0x20]; // 0x78(0x20)
	struct UGPSupportWeaponMarkerItem* ItemCache; // 0x98(0x08)
	struct AGPCharacter* CharacterOwner; // 0xa0(0x08)
	struct FTimerHandle MoveTimerTickHandle; // 0xa8(0x08)
	int32_t TickCounter; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	void SetSupportLockerData(int32_t SkillEntityIndex, struct UClass* LockerData); // Function DFMAbility.DFMSupportPackSubSystem.SetSupportLockerData // (Final|Native|Private|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMTracingLineActor
// Size: 0x3f0 (Inherited: 0x3f0)
class ADFMTracingLineActor : public AGPPreviewLineActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMVehicleSkillBoss04BulletRoot
// Size: 0x380 (Inherited: 0x378)
class ADFMVehicleSkillBoss04BulletRoot : public AActor {
public:

	struct USceneComponent* root; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMVehicleSkillBoss04Component
// Size: 0x240 (Inherited: 0x100)
class UDFMVehicleSkillBoss04Component : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	struct TWeakObjectPtr<struct AActor> CurrDamageMaker; // 0x108(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> CurrDamageTaker; // 0x110(0x08)
	struct TWeakObjectPtr<struct ADFMAIController> CurrDamageController; // 0x118(0x08)
	struct TArray<struct FVehicleBoss04WeaponInfo> WeaponConfig; // 0x120(0x10)
	struct TArray<struct UDFMVehicleSkillBoss04WeaponInstance*> WeaponInstance; // 0x130(0x10)
	bool bIsFiring; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	struct FName BodyMeshCompName; // 0x144(0x08)
	struct FVector CurDir; // 0x14c(0x0c)
	struct AActor* LockedTarget; // 0x158(0x08)
	char pad_160[0x10]; // 0x160(0x10)
	bool bShowDebug; // 0x170(0x01)
	bool bTrailDebug; // 0x171(0x01)
	char pad_172[0x6]; // 0x172(0x06)
	struct UMeshComponent* MeshComp; // 0x178(0x08)
	struct TMap<struct FName, struct UMeshComponent*> SocketMeshs; // 0x180(0x50)
	struct FVehicleBoss04SkillState CurrentSkillState; // 0x1d0(0x10)
	char pad_1E0[0x54]; // 0x1e0(0x54)
	float GunVoiceCD; // 0x234(0x04)
	char pad_238[0x8]; // 0x238(0x08)

	void ServerUpdateShootDir(struct FVector dir, struct AActor* LockTarget); // Function DFMAbility.DFMVehicleSkillBoss04Component.ServerUpdateShootDir // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMVehicleSkillBoss04WeaponBullet
// Size: 0x90 (Inherited: 0x30)
class UDFMVehicleSkillBoss04WeaponBullet : public UObject {
public:

	struct UStaticMeshComponent* MeshComponent; // 0x30(0x08)
	float Time; // 0x38(0x04)
	float Counter; // 0x3c(0x04)
	struct FVector StartLoc; // 0x40(0x0c)
	struct FVector TargetPoint; // 0x4c(0x0c)
	bool bIsServer; // 0x58(0x01)
	bool bDestoryed; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct TArray<struct FGPAudioFuturePlayingID> AudioId; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
	struct TArray<struct UFXResourceContainerComponent*> PSC; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMVehicleSkillBoss04WeaponInstance
// Size: 0x19c0 (Inherited: 0x30)
class UDFMVehicleSkillBoss04WeaponInstance : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FSoftObjectLoader MeshLoader; // 0x38(0x18)
	struct TArray<struct FVehicleBoss04SoundRuntimeInfo> SoundRuntimeInfos; // 0x50(0x10)
	struct ADFMVehicleSkillBoss04BulletRoot* BulletRoot; // 0x60(0x08)
	float bImpactLightMinTime; // 0x68(0x04)
	char pad_6C[0xac]; // 0x6c(0xac)
	struct AGPPlayerCameraManager* CachePlayerCameraManager; // 0x118(0x08)
	char pad_120[0x1848]; // 0x120(0x1848)
	struct TArray<struct UDFMVehicleSkillBoss04WeaponBullet*> Bullets; // 0x1968(0x10)
	struct TArray<float> MobileBulletsCount; // 0x1978(0x10)
	struct TArray<struct UDFMVehicleSkillBoss04WeaponBullet*> BulletsPool; // 0x1988(0x10)
	struct TArray<struct FWeaponEffectRes> CreatedBulletTracerSPList; // 0x1998(0x10)
	char pad_19A8[0x4]; // 0x19a8(0x04)
	struct FLinearColor LineColor; // 0x19ac(0x10)
	char pad_19BC[0x4]; // 0x19bc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMWeaponFuncComponentJavelin
// Size: 0x2d8 (Inherited: 0x2d8)
class UDFMWeaponFuncComponentJavelin : public UWeaponFuncComponentStingerMissile {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.EMPBuffCueHandler
// Size: 0xf0 (Inherited: 0xe8)
class UEMPBuffCueHandler : public UGPEffectCueHandler {
public:

	struct FName ScreenEffectName; // 0xe8(0x08)

	void RemoveScreenEffect(); // Function DFMAbility.EMPBuffCueHandler.RemoveScreenEffect // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ExtinguishIncendiaryComponent
// Size: 0x130 (Inherited: 0x100)
class UExtinguishIncendiaryComponent : public UActorComponent {
public:

	struct FName CheckRangeTag; // 0x100(0x08)
	enum class EIncendiaryAreaType ExtinguishAreaType; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UShapeComponent* RangeCheckCache; // 0x110(0x08)
	bool bIsAddExplosionEvent; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct TArray<struct FBox> CustomBoxes; // 0x120(0x10)

	void RemoveCustomBoxes(); // Function DFMAbility.ExtinguishIncendiaryComponent.RemoveCustomBoxes // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.FiringBleedingCueHandler
// Size: 0x100 (Inherited: 0xe8)
class UFiringBleedingCueHandler : public UGPEffectCueHandler {
public:

	bool bIsZoyaSwarms; // 0xe8(0x01)
	bool bIsCancelWeaponOperate; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	bool bIsActionTipsShow; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FTimerHandle TickTimerHandle; // 0xf8(0x08)

	void TryCancelWeaponOperate(); // Function DFMAbility.FiringBleedingCueHandler.TryCancelWeaponOperate // (Final|Native|Protected|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.GPWeaponFireModeParamsAbilityDirectLauncher
// Size: 0x148 (Inherited: 0x120)
class UGPWeaponFireModeParamsAbilityDirectLauncher : public UGPWeaponFireModeParamsAbilityLauncher {
public:

	struct UClass* LauncherBulletClass; // 0x120(0x08)
	struct FName SocketName; // 0x128(0x08)
	float IntersectionPointLength; // 0x130(0x04)
	struct FVector TargetOffset; // 0x134(0x0c)
	float OwnerVelocityFactor; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.GPWeaponAbilityFireModeDirectLauncher
// Size: 0x318 (Inherited: 0x310)
class UGPWeaponAbilityFireModeDirectLauncher : public UGPWeaponAbilityFireModeLauncher {
public:

	struct UGPWeaponFireModeParamsAbilityDirectLauncher* DirectLauncherParams; // 0x310(0x08)

	void SpawnGrenade(struct FVector& StartLocation, struct FVector& FireRotation, struct FVector& AffectInitVelocity, uint64_t& BulletGuid); // Function DFMAbility.GPWeaponAbilityFireModeDirectLauncher.SpawnGrenade // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.PreViewRebornFlag
// Size: 0x450 (Inherited: 0x450)
class APreViewRebornFlag : public AItemPreviewActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.SuppressionMinePreviewActor
// Size: 0x388 (Inherited: 0x388)
class ASuppressionMinePreviewActor : public APlacementPreviewActorBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.TestChainHookActor
// Size: 0x390 (Inherited: 0x378)
class ATestChainHookActor : public AActor {
public:

	struct AActor* TestStart; // 0x378(0x08)
	struct AActor* TestEnd; // 0x380(0x08)
	struct UChainHookComponent* ChainHookComponent; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ThrowBlockingAnimInstance
// Size: 0xa00 (Inherited: 0x280)
class UThrowBlockingAnimInstance : public UAnimInstance {
public:

	float MaxPlayTimeSeconds; // 0x280(0x04)
	char pad_284[0xc]; // 0x284(0x0c)
	struct FThrowBlockingAnimInstanceProxy LocalProxy; // 0x290(0x760)
	float PlayTimeSeconds; // 0x9f0(0x04)
	char pad_9F4[0xc]; // 0x9f4(0x0c)

	void CheckMaxPlayTimeSeconds(float DeltaSeconds); // Function DFMAbility.ThrowBlockingAnimInstance.CheckMaxPlayTimeSeconds // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ThrowBlockingPreviewActor
// Size: 0x450 (Inherited: 0x388)
class AThrowBlockingPreviewActor : public APlacementPreviewActorBase {
public:

	bool bOpenClientDebug; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	int32_t BaseCheckMinPassNum; // 0x38c(0x04)
	struct FVector BaseCheckCenterOffset; // 0x390(0x0c)
	struct FVector BaseCheckSize; // 0x39c(0x0c)
	struct FVector BaseCheckOffset; // 0x3a8(0x0c)
	int32_t OnGroundMinPassNum; // 0x3b4(0x04)
	struct FVector OnGroundCheckCenterOffset; // 0x3b8(0x0c)
	struct FVector OnGroundCheckSize; // 0x3c4(0x0c)
	struct FVector OnGroundCheckOffset; // 0x3d0(0x0c)
	struct FLinearColor CanUseColor1; // 0x3dc(0x10)
	struct FLinearColor CanNotUseColor1; // 0x3ec(0x10)
	struct FLinearColor CanUseColor2; // 0x3fc(0x10)
	struct FLinearColor CanNotUseColor2; // 0x40c(0x10)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct USceneComponent* FullyExpanded; // 0x420(0x08)
	struct USceneComponent* OnGround; // 0x428(0x08)
	struct USceneComponent* OnWall; // 0x430(0x08)
	struct UMaterialInstanceDynamic* MainMaterial; // 0x438(0x08)
	struct TArray<struct UThrowBlockingPreviewPartComponent*> AllPartsArray; // 0x440(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ThrowSpawnHelper
// Size: 0xe40 (Inherited: 0xe38)
class AThrowSpawnHelper : public AWeaponThrowableBulletProjectile {
public:

	char pad_E38[0x8]; // 0xe38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponFireModeSupport
// Size: 0x4f0 (Inherited: 0x4e8)
class UWeaponFireModeSupport : public UWeaponFireModePhysicSimulate {
public:

	char pad_4E8[0x8]; // 0x4e8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponFireModeSupportPack
// Size: 0x4e8 (Inherited: 0x4e8)
class UWeaponFireModeSupportPack : public UWeaponFireModePhysicSimulate {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponFireModeParamsSuppressionMinePlacement
// Size: 0x428 (Inherited: 0x400)
class UWeaponFireModeParamsSuppressionMinePlacement : public UWeaponFireModeParamsPlacement {
public:

	float MinConflictPlaceDistance; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)
	struct FText ConflictText; // 0x408(0x18)
	float TipDuration; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponFireModeSuppressionMinePlacement
// Size: 0x310 (Inherited: 0x308)
class UWeaponFireModeSuppressionMinePlacement : public UWeaponFireModePlacement {
public:

	struct UWeaponFireModeParamsSuppressionMinePlacement* SuppressionMinePlacementParam; // 0x308(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponFireModeSwarmsParams
// Size: 0x300 (Inherited: 0x258)
class UWeaponFireModeSwarmsParams : public UWeaponFireModeParamsThrowable {
public:

	bool bFireStopSprint_SOL; // 0x258(0x01)
	bool bFireStopMove_SOL; // 0x259(0x01)
	bool bFireStopSprint_BF; // 0x25a(0x01)
	bool bFireStopMove_BF; // 0x25b(0x01)
	char pad_25C[0x4]; // 0x25c(0x04)
	/*struct TSoftClassPtr<UObject>*/char SwarmsActorClassPath[0x28]; // 0x260(0x28)
	/*struct TSoftClassPtr<UObject>*/char SwarmsActorClassPath_HD[0x28]; // 0x288(0x28)
	float SwarmsActorOffsetLerpSpeed; // 0x2b0(0x04)
	float SwarmsActorOffsetZ; // 0x2b4(0x04)
	float SwarmsActorOffsetZ_Crouch; // 0x2b8(0x04)
	float SwarmsActorOffsetZ_Prone; // 0x2bc(0x04)
	/*struct TSoftClassPtr<UObject>*/char SwarmsPreviewActorClassPath[0x28]; // 0x2c0(0x28)
	struct FName SwarmsAimHud; // 0x2e8(0x08)
	struct FName AimScreenEffectName; // 0x2f0(0x08)
	float AimScreenEffectCD; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponFireModeSwarms
// Size: 0x240 (Inherited: 0x208)
class UWeaponFireModeSwarms : public UWeaponFireModeThrowable {
public:

	struct UWeaponFireModeSwarmsParams* SwarmsParams; // 0x208(0x08)
	struct AZoyaSwarmsPreviewActor* SwarmsPreviewActor; // 0x210(0x08)
	bool bIsPreviewHidden; // 0x218(0x01)
	char pad_219[0x3]; // 0x219(0x03)
	float LastActorOffsetZ; // 0x21c(0x04)
	float TargetActorOffsetZ; // 0x220(0x04)
	float NextShowScreenEffectTime; // 0x224(0x04)
	bool bFireStopSprint; // 0x228(0x01)
	bool bFireStopMove; // 0x229(0x01)
	bool bIsCanSwarmsFire; // 0x22a(0x01)
	char pad_22B[0xd]; // 0x22b(0x0d)
	float DataFlowEquipTime; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)

	void UpdatePreview(float DeltaTime); // Function DFMAbility.WeaponFireModeSwarms.UpdatePreview // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponFireModeParamsThrowableSpawnSmokeUAS
// Size: 0x2a0 (Inherited: 0x258)
class UWeaponFireModeParamsThrowableSpawnSmokeUAS : public UWeaponFireModeParamsThrowable {
public:

	struct UClass* ActorClass; // 0x258(0x08)
	/*struct TSoftClassPtr<UObject>*/char ActorClassPtr[0x28]; // 0x260(0x28)
	struct TArray<struct FGameModeSpawnSmokeUASConfig> GameModeActorClassArray; // 0x288(0x10)
	struct FName TargetSocketName; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponFireModeThrowableSpawnSmokeUAS
// Size: 0x220 (Inherited: 0x208)
class UWeaponFireModeThrowableSpawnSmokeUAS : public UWeaponFireModeThrowable {
public:

	struct UWeaponFireModeParamsThrowableSpawnSmokeUAS* LocalWeaponFireModeParams; // 0x208(0x08)
	uint64_t CurrentFireId; // 0x210(0x08)
	char pad_218[0x8]; // 0x218(0x08)

	void UnRegisterLocalUASActorInitiazliced(); // Function DFMAbility.WeaponFireModeThrowableSpawnSmokeUAS.UnRegisterLocalUASActorInitiazliced // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponFireModeParamsThrowBlocking
// Size: 0x420 (Inherited: 0x400)
class UWeaponFireModeParamsThrowBlocking : public UWeaponFireModeParamsPlacement {
public:

	float WallSurfaceMinAngle; // 0x400(0x04)
	float HorizontalToWallSurfaceMinAngle; // 0x404(0x04)
	float FullyExpandedStepbackDistance; // 0x408(0x04)
	struct FVector CheckCharacterAddExtent; // 0x40c(0x0c)
	struct FName SwitchButtonName; // 0x418(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponFireModeThrowBlocking
// Size: 0x328 (Inherited: 0x308)
class UWeaponFireModeThrowBlocking : public UWeaponFireModePlacement {
public:

	enum class EThrowBlockingExpansionType ExpansionType; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct UWeaponFireModeParamsThrowBlocking* ThrowBlockingPreviewParam; // 0x310(0x08)
	struct FVector LastHitResultNormal; // 0x318(0x0c)
	char pad_324[0x4]; // 0x324(0x04)

	void ShowSwitchButtonHUD(bool bActive); // Function DFMAbility.WeaponFireModeThrowBlocking.ShowSwitchButtonHUD // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponFuncComponentZoyaSwarmsItem
// Size: 0x170 (Inherited: 0x168)
class UWeaponFuncComponentZoyaSwarmsItem : public UGPWeaponFuncComponentBase {
public:

	struct FName SkillMeshName; // 0x168(0x08)

	void TrySpawnCastEffect_3P(); // Function DFMAbility.WeaponFuncComponentZoyaSwarmsItem.TrySpawnCastEffect_3P // (Final|Native|Private|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponThrowableDataComponentBubble
// Size: 0x5f8 (Inherited: 0x5f0)
class UWeaponThrowableDataComponentBubble : public UGPWeaponDataComponentBase {
public:

	enum class ESupportType SupportType; // 0x5f0(0x01)
	char pad_5F1[0x7]; // 0x5f1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponThrowBunkerDataComponentAnim
// Size: 0xa18 (Inherited: 0xa00)
class UWeaponThrowBunkerDataComponentAnim : public UWeaponThrowableDataComponentAnim {
public:

	int32_t WeaponHeroID; // 0xa00(0x04)
	char pad_A04[0x4]; // 0xa04(0x04)
	struct UGPAudioEventAsset* Sonic_Defense_Idle; // 0xa08(0x08)
	struct UGPAudioEventAsset* Sonic_Defense_Idle_Stop; // 0xa10(0x08)

	void PlayAudioStop(); // Function DFMAbility.WeaponThrowBunkerDataComponentAnim.PlayAudioStop // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponThrowMineDataComponentAnim
// Size: 0xa08 (Inherited: 0xa00)
class UWeaponThrowMineDataComponentAnim : public UWeaponThrowableDataComponentAnim {
public:

	int32_t WeaponHeroID; // 0xa00(0x04)
	char pad_A04[0x4]; // 0xa04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ZoyaSwarmsItemAnimInstance
// Size: 0x9f0 (Inherited: 0x290)
class UZoyaSwarmsItemAnimInstance : public UGPAbilityBaseAnimInstance {
public:

	struct FZoyaSwarmsItemAnimInstanceProxy LocalProxy; // 0x290(0x750)
	struct USkeletalMeshComponent* MasterPoseMesh; // 0x9e0(0x08)
	char pad_9E8[0x8]; // 0x9e8(0x08)

	void SetIsBindToTarget(bool bIsBindToTarget); // Function DFMAbility.ZoyaSwarmsItemAnimInstance.SetIsBindToTarget // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ZoyaSwarmsPreviewActor
// Size: 0x460 (Inherited: 0x378)
class AZoyaSwarmsPreviewActor : public AActor {
public:

	bool bIsDrawDebugBox; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct TArray<struct FVector> SpawnPoints; // 0x380(0x10)
	struct TArray<struct FVector> SpawnPoints_Crouch; // 0x390(0x10)
	struct TArray<struct FVector> SpawnPoints_Prone; // 0x3a0(0x10)
	float ProneCheckCenterOffset; // 0x3b0(0x04)
	struct FVector CheckSize; // 0x3b4(0x0c)
	float MoveTime; // 0x3c0(0x04)
	float MoveMinVal; // 0x3c4(0x04)
	float MoveMaxVal; // 0x3c8(0x04)
	struct FLinearColor BackColor; // 0x3cc(0x10)
	struct FLinearColor CanNotUseBackColor; // 0x3dc(0x10)
	struct FLinearColor LineColor1; // 0x3ec(0x10)
	struct FLinearColor CanNotUseLineColor1; // 0x3fc(0x10)
	struct FLinearColor LineColor2; // 0x40c(0x10)
	struct FLinearColor CanNotUseLineColor2; // 0x41c(0x10)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UMaterialInstanceDynamic* MainMaterial1; // 0x430(0x08)
	struct UMaterialInstanceDynamic* MainMaterial2; // 0x438(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerCharacter; // 0x440(0x08)
	float CurrMoveTime; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct USceneComponent* CheckPointRoot; // 0x450(0x08)
	struct USceneComponent* PreviewMeshRoot; // 0x458(0x08)

	void TickMove(float DeltaTime); // Function DFMAbility.ZoyaSwarmsPreviewActor.TickMove // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ZoyaSwarmsWeapon
// Size: 0x10d0 (Inherited: 0x10d0)
class AZoyaSwarmsWeapon : public ADFMWeapon {
public:


	bool CheckSwarmsCanFire(); // Function DFMAbility.ZoyaSwarmsWeapon.CheckSwarmsCanFire // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityWeaponThrowableBullet
// Size: 0xfa0 (Inherited: 0xfa0)
class ADFMAbilityWeaponThrowableBullet : public AAbilityWeaponThrowableBullet {
public:


	void DestroyLevelActorSpawnBySelf(struct AActor* SelfActor, enum class EAbilityLevelActorType ActorType); // Function DFMAbility.DFMAbilityWeaponThrowableBullet.DestroyLevelActorSpawnBySelf // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityActor
// Size: 0x388 (Inherited: 0x378)
class ADFMAbilityActor : public AActor {
public:

	struct TWeakObjectPtr<struct ADFMCharacter> AbilityActorOwner; // 0x378(0x08)
	enum class EBattleFieldPropType AbilityActorType; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ArtilleryShell
// Size: 0x468 (Inherited: 0x378)
class AArtilleryShell : public AActor {
public:

	char pad_378[0x18]; // 0x378(0x18)
	struct USphereComponent* SceneRoot; // 0x390(0x08)
	struct UArtilleryShellProjectileMovementComponent* ProjectileMovementComponent; // 0x398(0x08)
	struct FArtilleryShellMovementParameter MovementParameter; // 0x3a0(0x40)
	int64_t ExplodeAttackerValueId; // 0x3e0(0x08)
	struct TArray<struct UClass*> DamageEffect; // 0x3e8(0x10)
	bool bExplosionEffectDirUseImpactNormal; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	struct FRotator ExplosionEffectDirOffset; // 0x3fc(0x0c)
	struct FName ExplosionEffectId; // 0x408(0x08)
	struct FName ShellTrailEffectID; // 0x410(0x08)
	float DelayDisappearTime; // 0x418(0x04)
	bool bModifyDamage; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	float TeamMateDamageRatio; // 0x420(0x04)
	float TeamMateVehicleDamageRatio; // 0x424(0x04)
	float KnockDownRadius; // 0x428(0x04)
	enum class EExplosionType ExplosionType; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	float CameraShakeRadius; // 0x430(0x04)
	struct FName ScreenEffectName; // 0x434(0x08)
	float ScreenEffectRadius; // 0x43c(0x04)
	bool bEnableOptMoveTick; // 0x440(0x01)
	char OptMoveTickFrame; // 0x441(0x01)
	char pad_442[0x16]; // 0x442(0x16)
	struct UFXResourceContainerComponent* ShellTrailEffectContainer; // 0x458(0x08)
	char pad_460[0x8]; // 0x460(0x08)

	void UpdateDynamicCollisionElement(); // Function DFMAbility.ArtilleryShell.UpdateDynamicCollisionElement // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityProjectile
// Size: 0x3a8 (Inherited: 0x378)
class ADFMAbilityProjectile : public AActor {
public:

	char pad_378[0x18]; // 0x378(0x18)
	struct UDFMFollowProjectileMovementComponent* MovementComponent; // 0x390(0x08)
	float Speed; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct AActor* TargetCharacter; // 0x3a0(0x08)

	void OnRep_Target(); // Function DFMAbility.DFMAbilityProjectile.OnRep_Target // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilitySystemBase
// Size: 0x50 (Inherited: 0x30)
class UDFMAbilitySystemBase : public UObject {
public:

	enum class EDFMAbilityLogicType LogicType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FTimerHandle TickHandle; // 0x38(0x08)
	bool HasAuthority; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct TWeakObjectPtr<struct UDFMAbilityGameStateComponent> AbilityGSComponent; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)

	void Update(); // Function DFMAbility.DFMAbilitySystemBase.Update // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstance
// Size: 0x40 (Inherited: 0x40)
class UDFMAbilityInstance : public UGPAbilityInstance {
public:


	bool IsServer(); // Function DFMAbility.DFMAbilityInstance.IsServer // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityUASMovementComponent
// Size: 0x310 (Inherited: 0x2f8)
class UDFMAbilityUASMovementComponent : public UGPUASMovementComponent {
public:

	struct UGPDeformableGameStateComponent* DeformableGameStateComponent; // 0x2f8(0x08)
	bool EnableFollowDirection; // 0x300(0x01)
	bool EnableFollowDirectionDrawDebug; // 0x301(0x01)
	char pad_302[0x2]; // 0x302(0x02)
	float ForwardTargetDistanceFactor; // 0x304(0x04)
	float ForwardTargetMinDistance; // 0x308(0x04)
	float ForwardTargetChaseLerp; // 0x30c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityLogicTask
// Size: 0x180 (Inherited: 0x38)
class UQA_AbilityLogicTask : public UBlueprintAsyncActionBase {
public:

	struct FName LogicName; // 0x38(0x08)
	struct FName LogicThen; // 0x40(0x08)
	struct FName LogicTrigger; // 0x48(0x08)
	struct FName LogicUnTrigger; // 0x50(0x08)
	struct FName LogicEvent; // 0x58(0x08)
	int32_t LogicThenID; // 0x60(0x04)
	int32_t LogicTriggerID; // 0x64(0x04)
	int32_t LogicUnTriggerID; // 0x68(0x04)
	int32_t LogicEventID; // 0x6c(0x04)
	int32_t RepPos; // 0x70(0x04)
	int32_t LogicID; // 0x74(0x04)
	struct FTimerHandle SpawnTimerHandle; // 0x78(0x08)
	struct FName StateName; // 0x80(0x08)
	enum class EAbilityStateFlag Flag; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TMap<int32_t, int32_t> LogicNotifyMap; // 0x90(0x50)
	struct TArray<enum class EAbilityTriggerType> ExcutePaths; // 0xe0(0x10)
	bool IsStateNode; // 0xf0(0x01)
	bool IsFirstNodeFromState; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct UScriptStruct* DataType; // 0xf8(0x08)
	/*struct FMulticastInlineDelegate*/char OnThen[0x10]; // 0x100(0x10)
	/*struct FMulticastInlineDelegate*/char OnTrigger[0x10]; // 0x110(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnTrigger[0x10]; // 0x120(0x10)
	struct TWeakObjectPtr<struct ADFMAbilityLogicTemplate> AbilityLogicTemplate; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)
	struct TArray<struct UObject*> TaskLoadedResourceMap; // 0x148(0x10)
	struct TArray<int32_t> LoadedResourceSkills; // 0x158(0x10)
	uint64_t TaskPreloadHandle; // 0x168(0x08)
	struct TArray<struct FSoftObjectPath> TaskPreAssetName; // 0x170(0x10)

	void TickLogic(); // Function DFMAbility.QA_AbilityLogicTask.TickLogic // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ThrowBlockingPartComponent
// Size: 0x308 (Inherited: 0x240)
class UThrowBlockingPartComponent : public USceneComponent {
public:

	bool IsMain; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FName SpawnFX; // 0x244(0x08)
	struct FVector SpawnFXLocation; // 0x24c(0x0c)
	struct FRotator SpawnFXRotator; // 0x258(0x0c)
	struct FName DestroyFX; // 0x264(0x08)
	struct FName DestroyFX_Spawn; // 0x26c(0x08)
	float CurrHealth; // 0x274(0x04)
	float TotalDamage; // 0x278(0x04)
	bool bOpenClientDebug; // 0x27c(0x01)
	bool bIsBurning; // 0x27d(0x01)
	char pad_27E[0x2]; // 0x27e(0x02)
	float DamageRate; // 0x280(0x04)
	enum class EThrowBlockingPartState CurrState; // 0x284(0x01)
	enum class EThrowBlockingPartState LastState; // 0x285(0x01)
	char pad_286[0x2]; // 0x286(0x02)
	int32_t CheckGroupNumber; // 0x288(0x04)
	bool bInitChild; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UMeshComponent* StaticMesh; // 0x290(0x08)
	struct UBoxComponent* TriggerBox; // 0x298(0x08)
	struct UBoxComponent* HitBox; // 0x2a0(0x08)
	struct UBoxComponent* PawnBox; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* MainMaterial; // 0x2b0(0x08)
	float SpawnStartTime; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FTimerHandle SpawnTimerHandle; // 0x2c0(0x08)
	float BurningStartTime; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FTimerHandle BurningTimerHandle; // 0x2d0(0x08)
	struct UFXResourceContainerComponent* SpawnEffect; // 0x2d8(0x08)
	int32_t SpawnEffectHandleIndex; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct UFXResourceContainerComponent* BurningEffect; // 0x2e8(0x08)
	int32_t BurningEffectHandleIndex; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct UFXResourceContainerComponent* DestroyEffect; // 0x2f8(0x08)
	int32_t DestroyEffectHandleIndex; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)

	void UpdateState(); // Function DFMAbility.ThrowBlockingPartComponent.UpdateState // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponBulletBuff
// Size: 0x7a8 (Inherited: 0x6f8)
class AWeaponBulletBuff : public AWeaponBulletPhysicsSimulate {
public:

	char pad_6F8[0x8]; // 0x6f8(0x08)
	struct TArray<struct FAbilityDetectorBuffData> AddBuffIDs; // 0x700(0x10)
	struct TArray<struct FAbilityDetectorBuffData> AddBuffIDs_Zoom; // 0x710(0x10)
	struct TArray<struct FAbilityDetectorBuffData> HeadAddBuffIDs; // 0x720(0x10)
	struct TArray<struct FAbilityDetectorBuffData> SelfAddBuffIDs; // 0x730(0x10)
	bool UseZoom; // 0x740(0x01)
	char pad_741[0x7]; // 0x741(0x07)
	struct TArray<struct FName> IgnoreTags; // 0x748(0x10)
	char pad_758[0x8]; // 0x758(0x08)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char FPPBeHited_2DAudio[0x28]; // 0x760(0x28)
	struct FName HitTeammateFXID; // 0x788(0x08)
	struct FName HitTeammateHeadFXID; // 0x790(0x08)
	struct FName MaxDistanceDestroyFXID; // 0x798(0x08)
	bool ApplyKnockBack; // 0x7a0(0x01)
	char pad_7A1[0x7]; // 0x7a1(0x07)

	void ServerAEffectBuff(struct TArray<struct FAbilityDetectorBuffData> AddBuffs, struct ADFMCharacter* DFMCharacter, bool Add); // Function DFMAbility.WeaponBulletBuff.ServerAEffectBuff // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityWeaponBulletGrenade
// Size: 0xfa8 (Inherited: 0xfa0)
class AAbilityWeaponBulletGrenade : public ADFMAbilityWeaponThrowableBullet {
public:

	bool bStopAllMove; // 0xfa0(0x01)
	char pad_FA1[0x7]; // 0xfa1(0x07)

	void InitBulletGrenade(struct AActor* GrenadeOwner, struct FVector& FireStartLocation, struct FVector& InitVelocity); // Function DFMAbility.AbilityWeaponBulletGrenade.InitBulletGrenade // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityEMPBullet
// Size: 0xfe0 (Inherited: 0xfa0)
class ADFMAbilityEMPBullet : public ADFMAbilityWeaponThrowableBullet {
public:

	struct UClass* SubBulletActorClass; // 0xfa0(0x08)
	int32_t SubBulletNum; // 0xfa8(0x04)
	float SubBulletOffset; // 0xfac(0x04)
	float SubBulletBasePitch; // 0xfb0(0x04)
	float SubBulletBaseYaw; // 0xfb4(0x04)
	float SubBulletRandomDelay; // 0xfb8(0x04)
	char pad_FBC[0x4]; // 0xfbc(0x04)
	struct TArray<uint64_t> HitTakerUinArray; // 0xfc0(0x10)
	struct TArray<uint64_t> HitEnemyUinArray; // 0xfd0(0x10)

	void SpawnSubBullet(); // Function DFMAbility.DFMAbilityEMPBullet.SpawnSubBullet // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityEMPSubBullet
// Size: 0xfd0 (Inherited: 0xfa0)
class ADFMAbilityEMPSubBullet : public ADFMAbilityWeaponThrowableBullet {
public:

	struct TArray<enum class ECollisionChannel> AllTraceChannels; // 0xfa0(0x10)
	int32_t BuffId; // 0xfb0(0x04)
	float EffectTimeSeconds; // 0xfb4(0x04)
	float RandomExplosionDeLay; // 0xfb8(0x04)
	struct TWeakObjectPtr<struct ADFMAbilityEMPBullet> ParentBullet; // 0xfbc(0x08)
	char pad_FC4[0xc]; // 0xfc4(0x0c)

	void InitBulletInfo(struct ADFMAbilityEMPBullet* EMPBullet, struct FWeaponBulletBaseInitParam& ParentParam, struct FRotator& Rotator, float& RandomDelay); // Function DFMAbility.DFMAbilityEMPSubBullet.InitBulletInfo // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityWeaponThrowableKnife
// Size: 0x1070 (Inherited: 0xfa0)
class ADFMAbilityWeaponThrowableKnife : public ADFMAbilityWeaponThrowableBullet {
public:

	char pad_FA0[0x8]; // 0xfa0(0x08)
	int64_t AttackValueId_MP; // 0xfa8(0x08)
	int64_t AttackValueId_SOL; // 0xfb0(0x08)
	int32_t EMPBuffID; // 0xfb8(0x04)
	char pad_FBC[0x4]; // 0xfbc(0x04)
	struct TArray<enum class ECollisionChannel> AllTraceChannels; // 0xfc0(0x10)
	struct UGPAudioEventAsset* EMPStartAudio; // 0xfd0(0x08)
	struct UGPAudioEventAsset* HackAudio; // 0xfd8(0x08)
	struct UGPAudioEventAsset* LineStartAudio; // 0xfe0(0x08)
	struct UGPAudioEventAsset* LineEndAudio; // 0xfe8(0x08)
	struct UGPAudioEventAsset* EMPDestoryAudio; // 0xff0(0x08)
	float Health; // 0xff8(0x04)
	float EMPRange; // 0xffc(0x04)
	float EMPEffectTime; // 0x1000(0x04)
	float PrepareEMPTime; // 0x1004(0x04)
	struct UClass* PathActorClass; // 0x1008(0x08)
	struct UShapeComponent* EMPRangeComponent; // 0x1010(0x08)
	struct TArray<struct AActor*> EMPTargetList; // 0x1018(0x10)
	struct FTimerHandle EMPTimerHandle; // 0x1028(0x08)
	struct TArray<int32_t> EMPItemUinList; // 0x1030(0x10)
	struct FVector KnifeStartPos; // 0x1040(0x0c)
	char pad_104C[0x4]; // 0x104c(0x04)
	struct AGPPreviewLineActor* PathLineMesh; // 0x1050(0x08)
	struct TArray<struct FKnifeDrawPathData> KnifeDrawPathDataList; // 0x1058(0x10)
	char pad_1068[0x8]; // 0x1068(0x08)

	void TryInitPathMeshInstance(); // Function DFMAbility.DFMAbilityWeaponThrowableKnife.TryInitPathMeshInstance // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityLevelActor
// Size: 0x400 (Inherited: 0x388)
class ADFMAbilityLevelActor : public ADFMAbilityActor {
public:

	char pad_388[0x18]; // 0x388(0x18)
	enum class EAbilityLevelActorType AbilityLevelActorType; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	struct FName DeadPacicle; // 0x3a4(0x08)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct UDFMSkeletalMeshComponent* MeshComponent; // 0x3b0(0x08)
	struct UBoxComponent* CapsuleComponent; // 0x3b8(0x08)
	bool CanHurtBySelf; // 0x3c0(0x01)
	bool CanHurtByTeamMate; // 0x3c1(0x01)
	bool CanHurtByCampMate; // 0x3c2(0x01)
	char pad_3C3[0x1]; // 0x3c3(0x01)
	float Health; // 0x3c4(0x04)
	int32_t CampId; // 0x3c8(0x04)
	int32_t TeamId; // 0x3cc(0x04)
	int32_t CustomValue; // 0x3d0(0x04)
	bool IsAlive; // 0x3d4(0x01)
	char pad_3D5[0x3]; // 0x3d5(0x03)
	uint64_t OwnerPlayerId; // 0x3d8(0x08)
	bool ReplaceBySameOwner; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	float DelayDestroyTime; // 0x3e4(0x04)
	struct AActor* OwnerActor; // 0x3e8(0x08)
	char pad_3F0[0x8]; // 0x3f0(0x08)
	bool DoStartDestroySelf; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)

	void Rep_Destroy(); // Function DFMAbility.DFMAbilityLevelActor.Rep_Destroy // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityDetectorBase
// Size: 0x558 (Inherited: 0x388)
class ADFMAbilityDetectorBase : public ADFMAbilityActor {
public:

	struct TArray<struct TWeakObjectPtr<struct AActor>> TriggerActors; // 0x388(0x10)
	struct TArray<struct FName> IgnoreTags; // 0x398(0x10)
	struct TArray<struct FName> AddTags; // 0x3a8(0x10)
	struct TArray<struct FName> EnermyAddTags; // 0x3b8(0x10)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerChar; // 0x3c8(0x08)
	char pad_3D0[0x8]; // 0x3d0(0x08)
	float LeftTime; // 0x3d8(0x04)
	bool bClientAutoDestroy; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	int32_t LeftCount; // 0x3e0(0x04)
	int32_t LeftCountCur; // 0x3e4(0x04)
	float DestroyDelay; // 0x3e8(0x04)
	bool IsCheckBlock; // 0x3ec(0x01)
	char pad_3ED[0x13]; // 0x3ed(0x13)
	struct UShapeComponent* RangeCheckCache; // 0x400(0x08)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UAnimSequenceBase>>*/char AnimConfig[0x50]; // 0x408(0x50)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UGPAudioEventAsset>>*/char AudioConfig[0x50]; // 0x458(0x50)
	bool bOverlapCheckHitBlock; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	float RayCheckHeadHeight; // 0x4ac(0x04)
	bool bNeedBreakGlassWhenOverlap; // 0x4b0(0x01)
	char pad_4B1[0x1]; // 0x4b1(0x01)
	bool bDebug; // 0x4b2(0x01)
	char pad_4B3[0x5]; // 0x4b3(0x05)
	struct TMap<struct FName, struct UAnimSequenceBase*> AnimObjMap; // 0x4b8(0x50)
	struct TMap<struct FName, struct UGPAudioEventAsset*> AudioObjMap; // 0x508(0x50)

	bool SubCheckOverlapResult(struct AGPCharacter* Char); // Function DFMAbility.DFMAbilityDetectorBase.SubCheckOverlapResult // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ArtilleryShell_GuidedMissle
// Size: 0x510 (Inherited: 0x468)
class AArtilleryShell_GuidedMissle : public AArtilleryShell {
public:

	struct UGPAudioEventAsset* AlertStartAudioEvent; // 0x468(0x08)
	struct UGPAudioEventAsset* AlertStopAudioEvent; // 0x470(0x08)
	float AlertAudioDelay; // 0x478(0x04)
	float AlertAudioDuration; // 0x47c(0x04)
	struct UGPAudioEventAsset* FlyStartAudioEvent; // 0x480(0x08)
	struct UGPAudioEventAsset* FlyStopAudioEvent; // 0x488(0x08)
	float FlyAudioDelay; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct UGPAudioEventAsset* InCommingAudioEvent; // 0x498(0x08)
	float InCommingAudioHeight; // 0x4a0(0x04)
	struct FName LightEffectID; // 0x4a4(0x08)
	struct FVector LightEffectScale; // 0x4ac(0x0c)
	float LightEffectHideHeight; // 0x4b8(0x04)
	char pad_4BC[0x34]; // 0x4bc(0x34)
	struct UFXResourceContainerComponent* LightEffectContainer; // 0x4f0(0x08)
	char pad_4F8[0x18]; // 0x4f8(0x18)

	void StopFlyAudio(); // Function DFMAbility.ArtilleryShell_GuidedMissle.StopFlyAudio // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbility_MedicalSyringeProjectile
// Size: 0x3b8 (Inherited: 0x3a8)
class ADFMAbility_MedicalSyringeProjectile : public ADFMAbilityProjectile {
public:

	uint32_t AddBuffId; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct UGPAudioEventAsset* OnHitAudio; // 0x3b0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilitySingleSystem
// Size: 0x50 (Inherited: 0x50)
class UDFMAbilitySingleSystem : public UDFMAbilitySystemBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityDefaultSystem
// Size: 0x1d8 (Inherited: 0x50)
class UDFMAbilityDefaultSystem : public UDFMAbilitySystemBase {
public:

	struct FAbilityEntityQuery AttachMeshQuery; // 0x50(0xc0)
	char pad_110[0xc8]; // 0x110(0xc8)

	void RecycleAttachMesh(int32_t SkillEntityIndex, struct FName MeshName); // Function DFMAbility.DFMAbilityDefaultSystem.RecycleAttachMesh // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityFunctionSystem
// Size: 0x50 (Inherited: 0x50)
class UDFMAbilityFunctionSystem : public UDFMAbilitySystemBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityPreviewActorSystem
// Size: 0x50 (Inherited: 0x50)
class UDFMAbilityPreviewActorSystem : public UDFMAbilitySystemBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityProjectileActorSystem
// Size: 0x50 (Inherited: 0x50)
class UDFMAbilityProjectileActorSystem : public UDFMAbilitySystemBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilitySpawnActorSystem
// Size: 0x110 (Inherited: 0x50)
class UDFMAbilitySpawnActorSystem : public UDFMAbilitySystemBase {
public:

	struct FAbilityEntityQuery SpawnActorQuery; // 0x50(0xc0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityStateSystem
// Size: 0x50 (Inherited: 0x50)
class UDFMAbilityStateSystem : public UDFMAbilitySystemBase {
public:


	void OnLeaveStateSignal(struct UQA_AbilityLogicTask* QA, int32_t SkillEntityIndex, int32_t LogicID, enum class EAbilityTriggerType Trigger); // Function DFMAbility.DFMAbilityStateSystem.OnLeaveStateSignal // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityLeaveStateSystem
// Size: 0x50 (Inherited: 0x50)
class UDFMAbilityLeaveStateSystem : public UDFMAbilitySystemBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilitySystemInstanceBase
// Size: 0x68 (Inherited: 0x50)
class UDFMAbilitySystemInstanceBase : public UDFMAbilitySystemBase {
public:

	char pad_50[0x4]; // 0x50(0x04)
	struct FName LogicName; // 0x54(0x08)
	struct TWeakObjectPtr<struct UDFMAbilityInstance> AbilityInstance; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityWeaponProjectileActorSystem
// Size: 0x50 (Inherited: 0x50)
class UDFMAbilityWeaponProjectileActorSystem : public UDFMAbilitySystemBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceAdvancedScan
// Size: 0x60 (Inherited: 0x40)
class UDFMAbilityInstanceAdvancedScan : public UDFMAbilityInstance {
public:

	float ScanCDTime; // 0x40(0x04)
	float FindPathCDTime; // 0x44(0x04)
	float ScanDistance; // 0x48(0x04)
	float ScanFaceAngle; // 0x4c(0x04)
	struct FName FX_P_Scout_AcousticalDetector_Blue; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)

	void OnScanResult(int32_t InSkillID, struct TArray<struct AActor*>& InScanArray); // Function DFMAbility.DFMAbilityInstanceAdvancedScan.OnScanResult // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceRankSkill
// Size: 0x70 (Inherited: 0x40)
class UDFMAbilityInstanceRankSkill : public UDFMAbilityInstance {
public:

	/*struct FMulticastInlineDelegate*/char OnRankSkillFinalCastCheck[0x10]; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	void OnRefreshRankSkillUIState(char RefreshReason); // Function DFMAbility.DFMAbilityInstanceRankSkill.OnRefreshRankSkillUIState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceAssault
// Size: 0x40 (Inherited: 0x40)
class UDFMAbilityInstanceAssault : public UDFMAbilityInstance {
public:


	void OnPlayerSlidingTackle(struct AGPCharacter* GPChar); // Function DFMAbility.DFMAbilityInstanceAssault.OnPlayerSlidingTackle // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceCruiseMissile
// Size: 0x40 (Inherited: 0x40)
class UDFMAbilityInstanceCruiseMissile : public UDFMAbilityInstance {
public:


	void OnEscaping(); // Function DFMAbility.DFMAbilityInstanceCruiseMissile.OnEscaping // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceDetector
// Size: 0x40 (Inherited: 0x40)
class UDFMAbilityInstanceDetector : public UDFMAbilityInstance {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceEngineer
// Size: 0xa0 (Inherited: 0x40)
class UDFMAbilityInstanceEngineer : public UDFMAbilityInstance {
public:

	struct FAbilityBlackBorad_EngineerData BBData_EngineerData; // 0x40(0x38)
	char pad_78[0x10]; // 0x78(0x10)
	struct FEnginVehicleChargingData EnginVehicleChargingData; // 0x88(0x0c)
	bool InitButtonVisible; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float PowerChargingPercentRatePersec; // 0x98(0x04)
	float PowerChargingInterval; // 0x9c(0x04)

	void SetEngineVehicleRecycleData(float HealthPercent, float PowerPercent); // Function DFMAbility.DFMAbilityInstanceEngineer.SetEngineVehicleRecycleData // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceMine
// Size: 0x98 (Inherited: 0x40)
class UDFMAbilityInstanceMine : public UDFMAbilityInstance {
public:

	/*struct TSet<struct AActor*>*/char ReadyMineSet[0x50]; // 0x40(0x50)
	char pad_90[0x8]; // 0x90(0x08)

	void OnAbilitySpawnActorCreated(struct AActor* CharacterOwner, struct AActor* SpawnActor); // Function DFMAbility.DFMAbilityInstanceMine.OnAbilitySpawnActorCreated // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceRush
// Size: 0x68 (Inherited: 0x40)
class UDFMAbilityInstanceRush : public UDFMAbilityInstance {
public:

	int32_t TotalUseCount; // 0x40(0x04)
	int32_t CurrentUseCount; // 0x44(0x04)
	bool bIsRunning; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FText TipsText; // 0x50(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceSelfCure
// Size: 0x50 (Inherited: 0x40)
class UDFMAbilityInstanceSelfCure : public UDFMAbilityInstance {
public:

	char pad_40[0x8]; // 0x40(0x08)
	float HealthShowPercent; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	void OnCharaterHealthChange(); // Function DFMAbility.DFMAbilityInstanceSelfCure.OnCharaterHealthChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceSmokeWall
// Size: 0x50 (Inherited: 0x40)
class UDFMAbilityInstanceSmokeWall : public UDFMAbilityInstance {
public:

	char pad_40[0x8]; // 0x40(0x08)
	struct AActor* CurrentUAS; // 0x48(0x08)

	void OnClientInputLieDownEvent(enum class ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject); // Function DFMAbility.DFMAbilityInstanceSmokeWall.OnClientInputLieDownEvent // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceSupport
// Size: 0x48 (Inherited: 0x40)
class UDFMAbilityInstanceSupport : public UDFMAbilityInstance {
public:

	bool PlayingMedicRot; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMUASPilotMovementComponent
// Size: 0x330 (Inherited: 0x310)
class UDFMUASPilotMovementComponent : public UDFMAbilityUASMovementComponent {
public:

	bool bEnablePilot; // 0x310(0x01)
	bool bIsInit; // 0x311(0x01)
	bool bUsingPilot; // 0x312(0x01)
	char pad_313[0x1]; // 0x313(0x01)
	int32_t PilotUnit; // 0x314(0x04)
	struct TArray<struct FVector> MoveList; // 0x318(0x10)
	int32_t CurrentMoveIndex; // 0x328(0x04)
	float MoveRate; // 0x32c(0x04)

	void InitPilot(); // Function DFMAbility.DFMUASPilotMovementComponent.InitPilot // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityAddHealth
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityAddHealth : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityAddHealth(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct AActor* TargetCharacter, int32_t AddHealth); // Function DFMAbility.QA_AbilityAddHealth.QA_AbilityAddHealth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityAddSheild
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityAddSheild : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityAddSheild(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float AddSheildValue); // Function DFMAbility.QA_AbilityAddSheild.QA_AbilityAddSheild // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityAddSkillNum
// Size: 0x198 (Inherited: 0x180)
class UQA_AbilityAddSkillNum : public UQA_AbilityLogicTask {
public:

	char pad_180[0x18]; // 0x180(0x18)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityAddSkillNum(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t AddNum); // Function DFMAbility.QA_AbilityAddSkillNum.QA_AbilityAddSkillNum // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityAttachMeshAnim
// Size: 0x298 (Inherited: 0x180)
class UQA_AbilityAttachMeshAnim : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)
	struct TMap<struct FName, struct UObject*> LoadedResourceMap; // 0x190(0x50)
	struct TMap<struct FName, struct FAbilityAttachMeshLoadHadnle> LoadedResourceHandle; // 0x1e0(0x50)
	struct TMap<struct FName, uint64_t> PreloadHandle; // 0x230(0x50)
	/*struct FMulticastInlineDelegate*/char OnNotify[0x10]; // 0x280(0x10)
	char pad_290[0x8]; // 0x290(0x08)

	void SetAttachMesh(struct FAbilityBlackBorad_AttachMesh& AttachMeshData, struct AGPCharacter* CHARACTER, struct FName MeshName, struct UGPSkeletalMeshComponent* ItemMesh, bool IsBindMesh); // Function DFMAbility.QA_AbilityAttachMeshAnim.SetAttachMesh // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityDestroyMeshAnim
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityDestroyMeshAnim : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityDestroyMeshAnim* STATIC_QA_AbilityDestroyMeshAnim(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName _MeshName); // Function DFMAbility.QA_AbilityDestroyMeshAnim.QA_AbilityDestroyMeshAnim // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityTagMeshAnim
// Size: 0x198 (Inherited: 0x180)
class UQA_AbilityTagMeshAnim : public UQA_AbilityLogicTask {
public:

	char pad_180[0x18]; // 0x180(0x18)

	struct UQA_AbilityTagMeshAnim* STATIC_QA_AbilityTagMeshAnim(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InMeshName, struct FName InTag, bool InAdd, bool InCheck); // Function DFMAbility.QA_AbilityTagMeshAnim.QA_AbilityTagMeshAnim // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityAudio
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityAudio : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilityAudio(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UGPAudioEventAsset* InAudioEventAsset, enum class EGPAudioBlueprintType EType, float Duration, bool bNeedMakeNoise, bool bPreCutted, enum class EAudioRoleType RoleType); // Function DFMAbility.QA_AbilityAudio.QA_AbilityAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityResourceAudio
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityResourceAudio : public UQA_AbilityLogicTask {
public:

	struct FName ResouceID; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityResourceAudio(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InResouceID); // Function DFMAbility.QA_AbilityResourceAudio.QA_AbilityResourceAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityLogicState
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityLogicState : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_BeginAbilityState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName); // Function DFMAbility.QA_AbilityLogicState.QA_BeginAbilityState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityRevertBehaviorCall
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityRevertBehaviorCall : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityRevertSlotButton(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName); // Function DFMAbility.QA_AbilityRevertBehaviorCall.QA_AbilityRevertSlotButton // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityBuff
// Size: 0x3a0 (Inherited: 0x180)
class UQA_AbilityBuff : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailedNotify[0x10]; // 0x190(0x10)
	/*struct FMulticastInlineDelegate*/char OnKillPlayerNotify[0x10]; // 0x1a0(0x10)
	/*struct FMulticastInlineDelegate*/char OnKillAINotify[0x10]; // 0x1b0(0x10)
	char pad_1C0[0x18]; // 0x1c0(0x18)
	struct FAbilityBuffAwardConfig BF_AwardConfig; // 0x1d8(0xb8)
	struct FAbilityBuffAwardConfig SOL_AwardConfig; // 0x290(0xb8)
	char pad_348[0x8]; // 0x348(0x08)
	struct TMap<uint64_t, struct FInt32Range> CharacterBuffMap; // 0x350(0x50)

	struct UQA_AbilityBuff* STATIC_QA_AbilityBuff(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t BuffId, int32_t BFBuffID, int32_t HDBuffID, int32_t HDBFBuffID, enum class ECharacterPart Part, struct FAbilityBuffAwardConfig BF_AwardConfigIn, struct FAbilityBuffAwardConfig SOL_AwardConfigIn, bool AddOrRemove, bool RemoveBuffOnAbilityAbort, bool UseBFBuffWhenIsBF, bool UseHDBuffWhenIsHD); // Function DFMAbility.QA_AbilityBuff.QA_AbilityBuff // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_C302PassiveBuff
// Size: 0x180 (Inherited: 0x180)
class UQA_C302PassiveBuff : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_C302PassiveBuff(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float CD); // Function DFMAbility.QA_C302PassiveBuff.QA_C302PassiveBuff // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityCameraModifier
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityCameraModifier : public UQA_AbilityLogicTask {
public:

	struct UClass* ModifierClass; // 0x180(0x08)
	char pad_188[0x8]; // 0x188(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityCameraModifier(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UClass* NewModifierClass, bool AddOrRemove); // Function DFMAbility.QA_AbilityCameraModifier.QA_AbilityCameraModifier // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityCastWeaponAmmo
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityCastWeaponAmmo : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityCastWeaponAmmo(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ECharingSlot Slot, int32_t Cast); // Function DFMAbility.QA_AbilityCastWeaponAmmo.QA_AbilityCastWeaponAmmo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityCheckWeaponAmmo
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityCheckWeaponAmmo : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityCheckWeaponAmmo(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ECharingSlot Slot, struct FName Op, int32_t AmmoNum); // Function DFMAbility.QA_AbilityCheckWeaponAmmo.QA_AbilityCheckWeaponAmmo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityCD
// Size: 0x198 (Inherited: 0x180)
class UQA_AbilityCD : public UQA_AbilityLogicTask {
public:

	char pad_180[0x18]; // 0x180(0x18)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityCD(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float CD); // Function DFMAbility.QA_AbilityCD.QA_AbilityCD // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityUseCD
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityUseCD : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilityUseCD(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName); // Function DFMAbility.QA_AbilityUseCD.QA_AbilityUseCD // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityAddCD
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityAddCD : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityAddCD(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float Value, bool isPercent); // Function DFMAbility.QA_AbilityAddCD.QA_AbilityAddCD // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityCDEx
// Size: 0x198 (Inherited: 0x180)
class UQA_AbilityCDEx : public UQA_AbilityLogicTask {
public:

	char pad_180[0x18]; // 0x180(0x18)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityCDEx(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float CD); // Function DFMAbility.QA_AbilityCDEx.QA_AbilityCDEx // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityChangeCharacterAnimation
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityChangeCharacterAnimation : public UQA_AbilityLogicTask {
public:

	struct UBlendSpaceBase* StandMoveBS; // 0x180(0x08)
	struct UAnimSequence* IdleAnimation; // 0x188(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityChangeCharacterAnimation(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UBlendSpaceBase* MoveBS, struct UAnimSequence* IdleAnim); // Function DFMAbility.QA_AbilityChangeCharacterAnimation.QA_AbilityChangeCharacterAnimation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityChangeWeaponAnimMap
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityChangeWeaponAnimMap : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityChangeWeaponAnimMap(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, bool isClear, struct FName ItemID); // Function DFMAbility.QA_AbilityChangeWeaponAnimMap.QA_AbilityChangeWeaponAnimMap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityConsumeItem
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityConsumeItem : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilityConsumeItem(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName); // Function DFMAbility.QA_AbilityConsumeItem.QA_AbilityConsumeItem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityRecycleSpawnActor
// Size: 0x1d0 (Inherited: 0x180)
class UQA_AbilityRecycleSpawnActor : public UQA_AbilityLogicTask {
public:

	struct FAbilityRecycleSpawnActorData RecycleData; // 0x180(0x50)

	struct UQA_AbilityRecycleSpawnActor* STATIC_QA_AbilityRecycleSpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityRecycleSpawnActorData InRecycleData); // Function DFMAbility.QA_AbilityRecycleSpawnActor.QA_AbilityRecycleSpawnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityActiveSpawnActor
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityActiveSpawnActor : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityActiveSpawnActor* STATIC_QA_AbilityActiveSpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ECharingSlot ItemPos); // Function DFMAbility.QA_AbilityActiveSpawnActor.QA_AbilityActiveSpawnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityCostScore
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityCostScore : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityCostScore(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName); // Function DFMAbility.QA_AbilityCostScore.QA_AbilityCostScore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityCrosshairPercent
// Size: 0x198 (Inherited: 0x180)
class UQA_AbilityCrosshairPercent : public UQA_AbilityLogicTask {
public:

	bool bIsInSpectatingLogic; // 0x180(0x01)
	char pad_181[0x17]; // 0x181(0x17)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityCrosshairPercent(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float InSequenceLength); // Function DFMAbility.QA_AbilityCrosshairPercent.QA_AbilityCrosshairPercent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_SetSupportAmmo
// Size: 0x188 (Inherited: 0x180)
class UQA_SetSupportAmmo : public UQA_AbilityLogicTask {
public:

	struct FName MeshName; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_SetSupportAmmo(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InMeshName); // Function DFMAbility.QA_SetSupportAmmo.QA_SetSupportAmmo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityDelay
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityDelay : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityDelay(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float Delay); // Function DFMAbility.QA_AbilityDelay.QA_AbilityDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityCustomDelay
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityCustomDelay : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityCustomDelay(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float serverDelay, float clientDelay); // Function DFMAbility.QA_AbilityCustomDelay.QA_AbilityCustomDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityDriverFlyRebot
// Size: 0x1d8 (Inherited: 0x180)
class UQA_AbilityDriverFlyRebot : public UQA_AbilityLogicTask {
public:

	struct TMap<struct FName, struct FAbilityDriverFlyRebot> AbilityDriverVehicleData; // 0x180(0x50)
	char pad_1D0[0x8]; // 0x1d0(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityDriverFlyRebot(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName VehicleName); // Function DFMAbility.QA_AbilityDriverFlyRebot.QA_AbilityDriverFlyRebot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityDriverVehicle
// Size: 0x1d8 (Inherited: 0x180)
class UQA_AbilityDriverVehicle : public UQA_AbilityLogicTask {
public:

	struct TMap<struct FName, struct FAbilityDriverVehicle> AbilityDriverVehicleData; // 0x180(0x50)
	char pad_1D0[0x8]; // 0x1d0(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityDriverVehicle(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName VehicleName); // Function DFMAbility.QA_AbilityDriverVehicle.QA_AbilityDriverVehicle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityEnableLongPress
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityEnableLongPress : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityEnableLongPress(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, bool Enable); // Function DFMAbility.QA_AbilityEnableLongPress.QA_AbilityEnableLongPress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityEndLogic
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityEndLogic : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityEndLogic(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName); // Function DFMAbility.QA_AbilityEndLogic.QA_AbilityEndLogic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityEquipAnim
// Size: 0x1a0 (Inherited: 0x180)
class UQA_AbilityEquipAnim : public UQA_AbilityLogicTask {
public:

	char pad_180[0x20]; // 0x180(0x20)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityEquipAnim(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, bool Equip, int32_t IngoreSlot, int32_t QuietEquipSlot, float blendIn, float blendOut, float preTrigger, enum class EInteractivePutWeaponType PutWeaponType, enum class EInteractiveGetWeaponType GetWeaponType); // Function DFMAbility.QA_AbilityEquipAnim.QA_AbilityEquipAnim // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityEquipWeapon
// Size: 0x198 (Inherited: 0x180)
class UQA_AbilityEquipWeapon : public UQA_AbilityLogicTask {
public:

	char pad_180[0x18]; // 0x180(0x18)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityEquipWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, bool Equip, struct FName WeaponID, int32_t AttachPos, bool UniqueWeapon); // Function DFMAbility.QA_AbilityEquipWeapon.QA_AbilityEquipWeapon // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityFunction
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityFunction : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityFunction(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName); // Function DFMAbility.QA_AbilityFunction.QA_AbilityFunction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityHandleRush
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityHandleRush : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilityHandleRush(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ESkillActorEvent InEventName); // Function DFMAbility.QA_AbilityHandleRush.QA_AbilityHandleRush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityItemPreviewActor
// Size: 0x1b8 (Inherited: 0x180)
class UQA_AbilityItemPreviewActor : public UQA_AbilityLogicTask {
public:

	char pad_180[0x38]; // 0x180(0x38)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityItemPreviewActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityItemPreviewData AbilityItemPreviewData); // Function DFMAbility.QA_AbilityItemPreviewActor.QA_AbilityItemPreviewActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityRemoveItemPreviewActor
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityRemoveItemPreviewActor : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilityRemoveItemPreviewActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName); // Function DFMAbility.QA_AbilityRemoveItemPreviewActor.QA_AbilityRemoveItemPreviewActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityLineTrace
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityLineTrace : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityLineTrace(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ECollisionChannel _Channel, float _TraceLenth); // Function DFMAbility.QA_AbilityLineTrace.QA_AbilityLineTrace // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityLineTraceCheck
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityLineTraceCheck : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityLineTraceCheck(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ECollisionChannel _Channel, float _TraceLenth, float InForwardTraceLenth); // Function DFMAbility.QA_AbilityLineTraceCheck.QA_AbilityLineTraceCheck // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityLogicLeaveState
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityLogicLeaveState : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_EndAbilityState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class EAbilityTriggerType Trigger); // Function DFMAbility.QA_AbilityLogicLeaveState.QA_EndAbilityState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityEnd
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityEnd : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_EndAbility(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FEndAbilityOption EndOption); // Function DFMAbility.QA_AbilityEnd.QA_EndAbility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityCheckNormalBreak
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityCheckNormalBreak : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilityCheckNormalBreak(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName); // Function DFMAbility.QA_AbilityCheckNormalBreak.QA_AbilityCheckNormalBreak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityLogicTemplate
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityLogicTemplate : public UQA_AbilityLogicTask {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityMeshMaterialEffect
// Size: 0x248 (Inherited: 0x180)
class UQA_AbilityMeshMaterialEffect : public UQA_AbilityLogicTask {
public:

	struct TMap<struct FName, struct FMeshMatEffectConfig> MeshMatConfigs; // 0x180(0x50)
	struct TMap<struct FName, struct FMeshMatUpdateCache> MeshMatUpdateCache; // 0x1d0(0x50)
	char pad_220[0x8]; // 0x220(0x08)
	struct TArray<struct UCurveBase*> CurrCurves; // 0x228(0x10)
	struct TArray<int32_t> InstanceIDs; // 0x238(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityMeshMaterialEffect(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct TMap<struct FName, struct FMeshMatEffectConfig> Configs); // Function DFMAbility.QA_AbilityMeshMaterialEffect.QA_AbilityMeshMaterialEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityNotify
// Size: 0x198 (Inherited: 0x180)
class UQA_AbilityNotify : public UQA_AbilityLogicTask {
public:

	char pad_180[0x18]; // 0x180(0x18)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityNotify(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ESkillActorEvent InEventName); // Function DFMAbility.QA_AbilityNotify.QA_AbilityNotify // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityNotifyDSReplay
// Size: 0x198 (Inherited: 0x180)
class UQA_AbilityNotifyDSReplay : public UQA_AbilityLogicTask {
public:

	char pad_180[0x18]; // 0x180(0x18)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityNotifyDSReplay(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InReplayDebugName, float InDuration, float InRadius, struct FColor InColor); // Function DFMAbility.QA_AbilityNotifyDSReplay.QA_AbilityNotifyDSReplay // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityNotifyForwardScan
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityNotifyForwardScan : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityNotifyForwardScan(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, bool IsActive); // Function DFMAbility.QA_AbilityNotifyForwardScan.QA_AbilityNotifyForwardScan // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityNotifyRush
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityNotifyRush : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilityNotifyRush(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ESkillActorEvent InEventName); // Function DFMAbility.QA_AbilityNotifyRush.QA_AbilityNotifyRush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityRushSetting
// Size: 0x310 (Inherited: 0x180)
class UQA_AbilityRushSetting : public UQA_AbilityLogicTask {
public:

	struct FAbilityRushSettingConfig RushSettingConfig; // 0x180(0x190)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityRushSetting(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityRushSettingConfig Config); // Function DFMAbility.QA_AbilityRushSetting.QA_AbilityRushSetting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityOverrideAnimingCheck
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityOverrideAnimingCheck : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityOverrideAnimingCheck(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, bool bOverrideAimingCheck); // Function DFMAbility.QA_AbilityOverrideAnimingCheck.QA_AbilityOverrideAnimingCheck // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityPlayMontage
// Size: 0x1f0 (Inherited: 0x180)
class UQA_AbilityPlayMontage : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)
	/*struct FMulticastInlineDelegate*/char OnNotify[0x10]; // 0x190(0x10)
	/*struct FMulticastInlineDelegate*/char OnNotify2[0x10]; // 0x1a0(0x10)
	/*struct FMulticastInlineDelegate*/char OnNotify3[0x10]; // 0x1b0(0x10)
	/*struct FMulticastInlineDelegate*/char ExecByDSPlayerAi[0x10]; // 0x1c0(0x10)
	/*struct FMulticastInlineDelegate*/char PlayMontageAnimEndTrigger[0x10]; // 0x1d0(0x10)
	/*struct FMulticastInlineDelegate*/char PlayMontageAnimStartTrigger[0x10]; // 0x1e0(0x10)

	struct UQA_AbilityPlayMontage* STATIC_QA_AbilityPlayMontageWithAnimSet(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName _LogicName, struct FAbilityPlayMontageDataP2 Data); // Function DFMAbility.QA_AbilityPlayMontage.QA_AbilityPlayMontageWithAnimSet // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityStopMontage
// Size: 0x198 (Inherited: 0x180)
class UQA_AbilityStopMontage : public UQA_AbilityLogicTask {
public:

	char pad_180[0x18]; // 0x180(0x18)

	struct UQA_AbilityStopMontage* STATIC_QA_AbilityStopMontage(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName _LogicName, int32_t PlayIndex, enum class EAnimationPlayType AnimationPlayType); // Function DFMAbility.QA_AbilityStopMontage.QA_AbilityStopMontage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityTakeDemageStopMontage
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityTakeDemageStopMontage : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityTakeDemageStopMontage(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName _LogicName); // Function DFMAbility.QA_AbilityTakeDemageStopMontage.QA_AbilityTakeDemageStopMontage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityPlayUIAudio
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityPlayUIAudio : public UQA_AbilityLogicTask {
public:

	struct UGPAudioEventAsset* EventAsset; // 0x180(0x08)
	char pad_188[0x8]; // 0x188(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityPlayUIAudio(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UGPAudioEventAsset* AudioAsset, bool Include3P); // Function DFMAbility.QA_AbilityPlayUIAudio.QA_AbilityPlayUIAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityPreviewActor
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityPreviewActor : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilityPreviewActor(struct ADFMAbilityLogicTemplate* InLogicTemplate, struct FName InLogicName, struct FAbilityPreviewData PreviewData); // Function DFMAbility.QA_AbilityPreviewActor.QA_AbilityPreviewActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityEnablePreviewLine
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityEnablePreviewLine : public UQA_AbilityLogicTask {
public:

	bool bEnable; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityEnablePreviewLine(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, bool Enable); // Function DFMAbility.QA_AbilityEnablePreviewLine.QA_AbilityEnablePreviewLine // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityProcessBar
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityProcessBar : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityProcessBar(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float Time, struct FName Name, int32_t BarType); // Function DFMAbility.QA_AbilityProcessBar.QA_AbilityProcessBar // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityProjectileActor
// Size: 0x198 (Inherited: 0x180)
class UQA_AbilityProjectileActor : public UQA_AbilityLogicTask {
public:

	char pad_180[0x18]; // 0x180(0x18)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityProjectileActor(/*struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UClass* ProjectileActorClass, struct FVector StartLocationOffset, float Speed, struct TSoftClassPtr<UObject> projectileActorClassSoft*/); // Function DFMAbility.QA_AbilityProjectileActor.QA_AbilityProjectileActor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityPullOutFireArrow
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityPullOutFireArrow : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilityPullOutFireArrow(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName Text, float Time); // Function DFMAbility.QA_AbilityPullOutFireArrow.QA_AbilityPullOutFireArrow // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityRankSkillOperate
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityRankSkillOperate : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilityRankSkillOperate(struct ADFMAbilityLogicTemplate* LogicTemplate); // Function DFMAbility.QA_AbilityRankSkillOperate.QA_AbilityRankSkillOperate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityRemoveWeapon
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityRemoveWeapon : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityRemoveWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName WeaponID, int32_t AttachPos); // Function DFMAbility.QA_AbilityRemoveWeapon.QA_AbilityRemoveWeapon // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilitySendSupportPackTarget
// Size: 0x1a0 (Inherited: 0x180)
class UQA_AbilitySendSupportPackTarget : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)
	struct TArray<enum class ECharingSlot> CharingSlotList; // 0x188(0x10)
	char pad_198[0x8]; // 0x198(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilitySendSupportPackTarget(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ESupportType SupportType, bool bSelfUse, struct TArray<enum class ECharingSlot> InCharingSlotList); // Function DFMAbility.QA_AbilitySendSupportPackTarget.QA_AbilitySendSupportPackTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilitySetCharAbilityMask
// Size: 0x1a8 (Inherited: 0x180)
class UQA_AbilitySetCharAbilityMask : public UQA_AbilityLogicTask {
public:

	bool bEnable; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FSetCharAbilityMaskData SetCharAbilityMaskData; // 0x188(0x10)
	struct FSetCharAbilityMaskData MPSetCharAbilityMaskData; // 0x198(0x10)

	struct UQA_AbilitySetCharAbilityMask* STATIC_QA_AbilitySetCharAbilityMask(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, bool bEnableAbility, struct FSetCharAbilityMaskData MaskData, struct FSetCharAbilityMaskData MPMaskData); // Function DFMAbility.QA_AbilitySetCharAbilityMask.QA_AbilitySetCharAbilityMask // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilitySetCharCanProneFireMove
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilitySetCharCanProneFireMove : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilitySetCharCanProneFireMove(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, bool CanProneFireMove); // Function DFMAbility.QA_AbilitySetCharCanProneFireMove.QA_AbilitySetCharCanProneFireMove // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilitySetUseC301Launcher
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilitySetUseC301Launcher : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilitySetUseC301Launcher(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, bool UseC301Launcher, int32_t LastBulletCnt, bool IsFire); // Function DFMAbility.QA_AbilitySetUseC301Launcher.QA_AbilitySetUseC301Launcher // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityShowDetectorMap
// Size: 0x1b8 (Inherited: 0x180)
class UQA_AbilityShowDetectorMap : public UQA_AbilityLogicTask {
public:

	char pad_180[0x38]; // 0x180(0x38)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityShowDetectorMap(struct ADFMAbilityLogicTemplate* LogicTemplate, struct UClass* ActorClass, float DetectorMapRadius, float _SlideSpeedDelay, float _DetectorRadius, float _DetectorRadiusScale); // Function DFMAbility.QA_AbilityShowDetectorMap.QA_AbilityShowDetectorMap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityShowDetectorMapEx
// Size: 0x1c8 (Inherited: 0x180)
class UQA_AbilityShowDetectorMapEx : public UQA_AbilityLogicTask {
public:

	char pad_180[0x48]; // 0x180(0x48)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityShowDetectorMapEx(struct ADFMAbilityLogicTemplate* LogicTemplate, struct UClass* ActorClass, float DetectorMapRadius, float _SlideSpeedDelay, float _DetectorRadius, float _DetectorRadiusScale, float MarkerShowTime, bool IsShowMarkerInMap); // Function DFMAbility.QA_AbilityShowDetectorMapEx.QA_AbilityShowDetectorMapEx // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityShowPanel
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityShowPanel : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityShowPanel(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName PanelName, bool Show, bool _Include3p); // Function DFMAbility.QA_AbilityShowPanel.QA_AbilityShowPanel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityShowTips
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityShowTips : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityShowTips(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName Text, float Time, bool bUseLuaShowTips); // Function DFMAbility.QA_AbilityShowTips.QA_AbilityShowTips // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityKeyTips
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityKeyTips : public UQA_AbilityLogicTask {
public:

	struct TArray<struct FRightKeyTipsSkillData> TipsData; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityKeyTips(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct TArray<struct FRightKeyTipsSkillData> InTipsData); // Function DFMAbility.QA_AbilityKeyTips.QA_AbilityKeyTips // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilitySkillConflictID
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilitySkillConflictID : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilitySkillConflictID(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t ConflictID); // Function DFMAbility.QA_AbilitySkillConflictID.QA_AbilitySkillConflictID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilitySkillUIEvent
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilitySkillUIEvent : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilitySkillUIEvent(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName Key); // Function DFMAbility.QA_AbilitySkillUIEvent.QA_AbilitySkillUIEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilitySoundVisualizationNotify
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilitySoundVisualizationNotify : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilitySoundVisualizationNotify(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ESoundVisualizationType EventType); // Function DFMAbility.QA_AbilitySoundVisualizationNotify.QA_AbilitySoundVisualizationNotify // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilitySpawnActor
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilitySpawnActor : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilitySpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAASpawnActorData InSpawnActorData); // Function DFMAbility.QA_AbilitySpawnActor.QA_AbilitySpawnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityNotifySpawnActor
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityNotifySpawnActor : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityNotifySpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InNotifyName); // Function DFMAbility.QA_AbilityNotifySpawnActor.QA_AbilityNotifySpawnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityStaminaChange
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityStaminaChange : public UQA_AbilityLogicTask {
public:

	char pad_180[0x8]; // 0x180(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityStaminaChange(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class EStaminaIndependentChangeType InStaminaChangeType, float InDeltaSeconds); // Function DFMAbility.QA_AbilityStaminaChange.QA_AbilityStaminaChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilitySwithLeftWeapon
// Size: 0x198 (Inherited: 0x180)
class UQA_AbilitySwithLeftWeapon : public UQA_AbilityLogicTask {
public:

	int32_t AttachPos; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	uint64_t WeaponItemId; // 0x188(0x08)
	bool bIsEquipWeapon; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	int32_t WeaponManagerSlot; // 0x194(0x04)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilitySwithLeftWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InWeaponId, int32_t InAttachPos, int32_t InWeaponManagerSlot, bool InIsEquipWeapon); // Function DFMAbility.QA_AbilitySwithLeftWeapon.QA_AbilitySwithLeftWeapon // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilitySwithWeapon
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilitySwithWeapon : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilitySwithWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class EAbilitySwithWeaponType SwitchType, int32_t AttachPos, bool OnlySwitchPosWeapon, bool CoverPendingSwitch, enum class EWeaponSwitchType InWeaponEquipSwitchType, bool IncludeSkillWeapon); // Function DFMAbility.QA_AbilitySwithWeapon.QA_AbilitySwithWeapon // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityTrigger
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityTrigger : public UQA_AbilityLogicTask {
public:

	struct AActor* Trigger; // 0x180(0x08)
	char pad_188[0x8]; // 0x188(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityTagTrigger(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class EGPQuestActionTriggerType Type, struct FName QATag); // Function DFMAbility.QA_AbilityTrigger.QA_AbilityTagTrigger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityEnableUseTogether
// Size: 0x188 (Inherited: 0x180)
class UQA_AbilityEnableUseTogether : public UQA_AbilityLogicTask {
public:

	bool bEnable; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityEnableUseTogether(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, bool Enable); // Function DFMAbility.QA_AbilityEnableUseTogether.QA_AbilityEnableUseTogether // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityCastSkill
// Size: 0x1f8 (Inherited: 0x180)
class UQA_AbilityCastSkill : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)
	/*struct FMulticastInlineDelegate*/char CastSkillDone[0x10]; // 0x190(0x10)
	struct TMap<int32_t, struct FAbilityCastSkillData> PlayedSkills; // 0x1a0(0x50)
	int32_t CastSkillid; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)

	struct UQA_AbilityCastSkill* STATIC_QA_AbilityCastSkill(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t SkillId); // Function DFMAbility.QA_AbilityCastSkill.QA_AbilityCastSkill // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityHookSkill
// Size: 0x1d8 (Inherited: 0x180)
class UQA_AbilityHookSkill : public UQA_AbilityLogicTask {
public:

	char pad_180[0x10]; // 0x180(0x10)
	/*struct FMulticastInlineDelegate*/char SkillPress[0x10]; // 0x190(0x10)
	/*struct FMulticastInlineDelegate*/char SkillClick[0x10]; // 0x1a0(0x10)
	/*struct FMulticastInlineDelegate*/char SkillLongPress[0x10]; // 0x1b0(0x10)
	/*struct FMulticastInlineDelegate*/char SkillRelease[0x10]; // 0x1c0(0x10)
	int32_t CastSkillid; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)

	struct UQA_AbilityHookSkill* STATIC_QA_AbilityHookSkill(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t SkillId); // Function DFMAbility.QA_AbilityHookSkill.QA_AbilityHookSkill // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityUseSupportPack
// Size: 0x200 (Inherited: 0x180)
class UQA_AbilityUseSupportPack : public UQA_AbilityLogicTask {
public:

	char pad_180[0x20]; // 0x180(0x20)
	struct TMap<struct FName, struct FAbilityUseSupportPack> AbilityDelayData; // 0x1a0(0x50)
	/*struct FMulticastInlineDelegate*/char OnCastFailed[0x10]; // 0x1f0(0x10)

	struct UQA_AbilityUseSupportPack* STATIC_QA_AbilityUseSupportPack(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ESupportType SupportType, bool bCondCheck); // Function DFMAbility.QA_AbilityUseSupportPack.QA_AbilityUseSupportPack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityWantCharacterSpeak
// Size: 0x190 (Inherited: 0x180)
class UQA_AbilityWantCharacterSpeak : public UQA_AbilityLogicTask {
public:

	enum class ECharacterAudioType VoiceType; // 0x180(0x01)
	char pad_181[0xf]; // 0x181(0x0f)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityWantCharacterSpeak(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, enum class ECharacterAudioType InVoiceType, struct FName InVoiceName); // Function DFMAbility.QA_AbilityWantCharacterSpeak.QA_AbilityWantCharacterSpeak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityWeaponProjectileActor
// Size: 0x180 (Inherited: 0x180)
class UQA_AbilityWeaponProjectileActor : public UQA_AbilityLogicTask {
public:


	struct UQA_AbilityLogicTask* STATIC_QA_AbilityWeaponProjectileActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityWeaponProjectileData ProjectileData); // Function DFMAbility.QA_AbilityWeaponProjectileActor.QA_AbilityWeaponProjectileActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ThrowBlockingPreviewPartComponent
// Size: 0x310 (Inherited: 0x308)
class UThrowBlockingPreviewPartComponent : public UThrowBlockingPartComponent {
public:

	enum class EThrowBlockingExpansionType ExpansionType; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)

	void InitPreviewPart(struct USceneComponent* BaseNode, struct UMeshComponent* Mesh); // Function DFMAbility.ThrowBlockingPreviewPartComponent.InitPreviewPart // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponBulletArrow
// Size: 0x7e0 (Inherited: 0x7a8)
class AWeaponBulletArrow : public AWeaponBulletBuff {
public:

	bool bShouldBounce; // 0x7a8(0x01)
	char pad_7A9[0x3]; // 0x7a9(0x03)
	float Bounciness; // 0x7ac(0x04)
	float BounceVelocityStopLimited; // 0x7b0(0x04)
	float Friction; // 0x7b4(0x04)
	struct UGPAudioEventAsset* BulletBounceAudioEvent; // 0x7b8(0x08)
	struct FName ArrowCollisionTag; // 0x7c0(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerChar; // 0x7c8(0x08)
	char pad_7D0[0x10]; // 0x7d0(0x10)

	float GetFlyDistance(); // Function DFMAbility.WeaponBulletArrow.GetFlyDistance // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponBulletPenetratingSniper
// Size: 0x7c0 (Inherited: 0x7a8)
class AWeaponBulletPenetratingSniper : public AWeaponBulletBuff {
public:

	float BulletBuffRadius; // 0x7a8(0x04)
	float BulletBuffHalfHeight; // 0x7ac(0x04)
	char pad_7B0[0x10]; // 0x7b0(0x10)

	void BP_CreateBulletBuff(struct FHitResult& ImpactResult); // Function DFMAbility.WeaponBulletPenetratingSniper.BP_CreateBulletBuff // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponBulletSupport
// Size: 0x7e0 (Inherited: 0x7a8)
class AWeaponBulletSupport : public AWeaponBulletBuff {
public:

	bool DebugRadius; // 0x7a8(0x01)
	bool DebugBulletRadius; // 0x7a9(0x01)
	char pad_7AA[0x2]; // 0x7aa(0x02)
	float TeamMateBulletRaidus; // 0x7ac(0x04)
	float MinHomingDistance; // 0x7b0(0x04)
	float ProjectileFindHomingTargetDistance; // 0x7b4(0x04)
	struct FVector HomingSpeed; // 0x7b8(0x0c)
	struct FName AimTag; // 0x7c4(0x08)
	struct FName HomingSocketName; // 0x7cc(0x08)
	char pad_7D4[0x4]; // 0x7d4(0x04)
	struct AActor* HomingTarget; // 0x7d8(0x08)

	void ServerOverlapByBullet(struct AActor* Target); // Function DFMAbility.WeaponBulletSupport.ServerOverlapByBullet // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.AbilityWeaponBulletGrenadeMine
// Size: 0xfc0 (Inherited: 0xfa8)
class AAbilityWeaponBulletGrenadeMine : public AAbilityWeaponBulletGrenade {
public:

	struct ADFMAbilitySuppressionMine* AbilitySuppressionMine; // 0xfa8(0x08)
	bool bIsCheckMine; // 0xfb0(0x01)
	char pad_FB1[0xf]; // 0xfb1(0x0f)

	void OnRep_AbilitySuppressionMine(); // Function DFMAbility.AbilityWeaponBulletGrenadeMine.OnRep_AbilitySuppressionMine // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ADS
// Size: 0x540 (Inherited: 0x400)
class AADS : public ADFMAbilityLevelActor {
public:

	char pad_400[0x28]; // 0x400(0x28)
	float ProtectedRange; // 0x428(0x04)
	float ProtectedTime; // 0x42c(0x04)
	float ProtectedCoolDown; // 0x430(0x04)
	float ProtectedRemainCount; // 0x434(0x04)
	float ProtectedRemainCounter; // 0x438(0x04)
	float TickInterval; // 0x43c(0x04)
	struct FVector FirePointheight; // 0x440(0x0c)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct TArray<struct AGPWeaponBulletBase*> RegistedProjectileArray; // 0x450(0x10)
	char pad_460[0x10]; // 0x460(0x10)
	struct UGPSkeletalMeshComponent* SkeletalMeshComponent; // 0x470(0x08)
	float InnerRadius; // 0x478(0x04)
	float OutterRadius; // 0x47c(0x04)
	int32_t InnerAttackerValueID; // 0x480(0x04)
	int32_t OutterAttackerValueID; // 0x484(0x04)
	float EMPCollDownTime; // 0x488(0x04)
	float MarkerOffset; // 0x48c(0x04)
	char pad_490[0x8]; // 0x490(0x08)
	struct UGPAudioEventAsset* DeployAudio; // 0x498(0x08)
	struct UGPAudioEventAsset* DestroyAudio; // 0x4a0(0x08)
	struct FName DestroyEffectId; // 0x4a8(0x08)
	enum class ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct UAnimationAsset* AnimationToPlay; // 0x4b8(0x08)
	struct UAnimationAsset* PlaceAnimation; // 0x4c0(0x08)
	char pad_4C8[0x8]; // 0x4c8(0x08)
	struct USphereComponent* SphereComponent; // 0x4d0(0x08)
	struct UAbilityADSMapIconViewController* IconCtrl; // 0x4d8(0x08)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char InterceptAudio[0x28]; // 0x4e0(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char BeIntercepted2DAudio[0x28]; // 0x508(0x28)
	struct FName InterceptEffectId; // 0x530(0x08)
	struct FName FireEffectID; // 0x538(0x08)

	void OnProjectileIntercepted(struct FVector ProjectilePos, struct AActor* BulletCreator); // Function DFMAbility.ADS.OnProjectileIntercepted // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityADSDefencer
// Size: 0x488 (Inherited: 0x400)
class ADFMAbilityADSDefencer : public ADFMAbilityLevelActor {
public:

	char pad_400[0x18]; // 0x400(0x18)
	bool bOnlyTeammate; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct UGPAudioEventAsset* DeployAudio; // 0x420(0x08)
	struct UGPAudioEventAsset* DestroyAudio; // 0x428(0x08)
	struct UGPAudioEventAsset* LoopStartAudio; // 0x430(0x08)
	struct UGPAudioEventAsset* LoopStopAudio; // 0x438(0x08)
	struct FName FlashingEffectId; // 0x440(0x08)
	struct FName DestroyEffectId; // 0x448(0x08)
	float AutoDestroyTime; // 0x450(0x04)
	int32_t ConfigAvaliableCount; // 0x454(0x04)
	float CreateTime; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct UGameStaticAkComponent* GameAkComp; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)
	struct UFXResourceContainerComponent* FlashingEffect; // 0x470(0x08)
	char pad_478[0x4]; // 0x478(0x04)
	float RebornRange; // 0x47c(0x04)
	char pad_480[0x8]; // 0x480(0x08)

	void OnSectorTransEnd(int32_t ActiveID); // Function DFMAbility.DFMAbilityADSDefencer.OnSectorTransEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityBunker
// Size: 0x458 (Inherited: 0x400)
class ADFMAbilityBunker : public ADFMAbilityLevelActor {
public:

	struct ADFMAbilityBunkerPiece* BunkerChildrens[0xa]; // 0x400(0x50)
	char pad_450[0x8]; // 0x450(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.RebornFlag
// Size: 0x4d8 (Inherited: 0x400)
class ARebornFlag : public ADFMAbilityLevelActor {
public:

	char pad_400[0x40]; // 0x400(0x40)
	enum class ERebornFlagType RebornFlagType; // 0x440(0x01)
	bool bOnlyTeammate; // 0x441(0x01)
	char pad_442[0x6]; // 0x442(0x06)
	struct UGPAudioEventAsset* DeployAudio; // 0x448(0x08)
	struct UGPAudioEventAsset* DestroyAudio; // 0x450(0x08)
	struct UGPAudioEventAsset* LoopStartAudio; // 0x458(0x08)
	struct UGPAudioEventAsset* LoopStopAudio; // 0x460(0x08)
	struct FName FlashingEffectId; // 0x468(0x08)
	struct FName DestroyEffectId; // 0x470(0x08)
	float AutoDestroyTime; // 0x478(0x04)
	int32_t ConfigAvaliableCount; // 0x47c(0x04)
	struct FName OutLineEffectMeshTag; // 0x480(0x08)
	bool bAutoAttachToSurface; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	float AttachToSurfaceDis; // 0x48c(0x04)
	float CreateTime; // 0x490(0x04)
	float RemainTimeProgress; // 0x494(0x04)
	char pad_498[0x8]; // 0x498(0x08)
	struct UFXResourceContainerComponent* FlashingEffect; // 0x4a0(0x08)
	char pad_4A8[0x8]; // 0x4a8(0x08)
	uint64_t OutLineItemID; // 0x4b0(0x08)
	float RebornRange; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct USkeletalMeshComponent* OutLineEffectMesh; // 0x4c0(0x08)
	enum class ETacticalEquipmentMarkerType ChildMarkerType; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct UAbilityRebornFlagMapIconViewController* IconCtrl; // 0x4d0(0x08)

	bool TryStickyToThrowAttachable(struct FHitResult& ImpactResult); // Function DFMAbility.RebornFlag.TryStickyToThrowAttachable // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityBuffDetector
// Size: 0x790 (Inherited: 0x558)
class ADFMAbilityBuffDetector : public ADFMAbilityDetectorBase {
public:

	char pad_558[0x68]; // 0x558(0x68)
	struct TArray<struct FAbilityDetectorBuffData> AddBuffIDs; // 0x5c0(0x10)
	int32_t AbilityId; // 0x5d0(0x04)
	int32_t OwnerCampID; // 0x5d4(0x04)
	int32_t OwnerTeamID; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	uint64_t OwnerUin; // 0x5e0(0x08)
	int32_t SkillId; // 0x5e8(0x04)
	int32_t SkillEntityID; // 0x5ec(0x04)
	bool bTickBuff; // 0x5f0(0x01)
	char pad_5F1[0x3]; // 0x5f1(0x03)
	float TickRate; // 0x5f4(0x04)
	struct TArray<float> CustomCountTime; // 0x5f8(0x10)
	struct TArray<float> CountTimeList; // 0x608(0x10)
	char pad_618[0x8]; // 0x618(0x08)
	bool bEnemyTrigger; // 0x620(0x01)
	bool bTeammateTrigger; // 0x621(0x01)
	bool bTriggerCheckEnemy; // 0x622(0x01)
	char pad_623[0x5]; // 0x623(0x05)
	int64_t HitEffectId; // 0x628(0x08)
	float HitEffectDamge; // 0x630(0x04)
	float HitEffectAnimTime; // 0x634(0x04)
	float HitEffectScale; // 0x638(0x04)
	float MaxHP; // 0x63c(0x04)
	float CurrHP; // 0x640(0x04)
	bool bTakeDamage; // 0x644(0x01)
	char pad_645[0x3]; // 0x645(0x03)
	struct FName DestroyFX; // 0x648(0x08)
	bool bTeammateDamage; // 0x650(0x01)
	bool bSelfDamage; // 0x651(0x01)
	char pad_652[0x2]; // 0x652(0x02)
	struct FName BindToAttachMeshName; // 0x654(0x08)
	bool bBindToAttachMesh; // 0x65c(0x01)
	bool bOnly3PBindToAttachMesh; // 0x65d(0x01)
	char pad_65E[0x2]; // 0x65e(0x02)
	struct FName HitBoneName; // 0x660(0x08)
	enum class EHitEventType ApplyHitEventType; // 0x668(0x01)
	char pad_669[0x3]; // 0x669(0x03)
	struct FName AIStaggerName; // 0x66c(0x08)
	float AppyHitCD; // 0x674(0x04)
	bool ApplyHit; // 0x678(0x01)
	bool DamageApplyHit; // 0x679(0x01)
	bool ApplyScoreWhenBeDestroy; // 0x67a(0x01)
	enum class EScoreName BeDestroyScore; // 0x67b(0x01)
	bool bHitByName; // 0x67c(0x01)
	enum class ECharacterPart CharacterPart; // 0x67d(0x01)
	char pad_67E[0x2]; // 0x67e(0x02)
	float HitTargetYaw; // 0x680(0x04)
	char pad_684[0x4]; // 0x684(0x04)
	struct TMap<uint64_t, float> StaggerCDMap; // 0x688(0x50)
	bool bIsDetectDone; // 0x6d8(0x01)
	char pad_6D9[0x5f]; // 0x6d9(0x5f)
	struct UFXResourceContainerComponent* DestroyFXComp; // 0x738(0x08)
	struct TWeakObjectPtr<struct UFXResourceContainerComponent> DestroyFXCompChecker; // 0x740(0x08)
	char pad_748[0x4]; // 0x748(0x04)
	int32_t iDetectCounter; // 0x74c(0x04)
	bool bIsNeedCheckIsOverlapEnemy; // 0x750(0x01)
	char pad_751[0x7]; // 0x751(0x07)
	struct TArray<uint64_t> OverlapEnemies; // 0x758(0x10)
	uint32_t StickyTargetID; // 0x768(0x04)
	bool bIsStickyToTarget; // 0x76c(0x01)
	char pad_76D[0x3]; // 0x76d(0x03)
	uint64_t StickyCharUin; // 0x770(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> StickyChar; // 0x778(0x08)
	struct FVector StickyRelativePosition; // 0x780(0x0c)
	bool bResonance; // 0x78c(0x01)
	char pad_78D[0x3]; // 0x78d(0x03)

	void UpdatePostEffectVectorParameters(struct FName PostEffectName, struct FName ParameterName, struct FLinearColor Value); // Function DFMAbility.DFMAbilityBuffDetector.UpdatePostEffectVectorParameters // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityBuffSystem
// Size: 0xb8 (Inherited: 0x50)
class UDFMAbilityBuffSystem : public UDFMAbilitySingleSystem {
public:

	struct TMap<struct UDFMCharacterBuffEntityBase*, int64_t> InstanceMap; // 0x50(0x50)
	struct TArray<uint64_t> PlayerKnockDownRecord; // 0xa0(0x10)
	char pad_B0[0x8]; // 0xb0(0x08)

	void ProcessKillAward(struct UDFMCharacterBuffEntityBase* BuffEntity, int32_t SkillEntityIndex, struct UQA_AbilityBuff* BuffQA, struct FKillInfo& NewKillInfo, struct UGPModularWeaponDesc* Desc); // Function DFMAbility.DFMAbilityBuffSystem.ProcessKillAward // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityPlayMontageSystem
// Size: 0x50 (Inherited: 0x50)
class UDFMAbilityPlayMontageSystem : public UDFMAbilitySingleSystem {
public:


	void TryBindAudioTrigger(int32_t SkillEntityIndex, struct FAbilityPlayMontageResources& ResourceData); // Function DFMAbility.DFMAbilityPlayMontageSystem.TryBindAudioTrigger // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceArtilleryShelling
// Size: 0x78 (Inherited: 0x70)
class UDFMAbilityInstanceArtilleryShelling : public UDFMAbilityInstanceRankSkill {
public:

	struct UClass* ShellingAreaTemplate; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityInstanceRankSkillRebornFlag
// Size: 0xc8 (Inherited: 0x70)
class UDFMAbilityInstanceRankSkillRebornFlag : public UDFMAbilityInstanceRankSkill {
public:

	/*struct TSoftClassPtr<UObject>*/char RebornFlagClass[0x28]; // 0x70(0x28)
	int32_t CheckClientSelectPosValidDis; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	/*struct TSoftClassPtr<UObject>*/char SelectPositionActorClass[0x28]; // 0xa0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityBehaviorCall
// Size: 0x190 (Inherited: 0x188)
class UQA_AbilityBehaviorCall : public UQA_AbilityLogicState {
public:

	char pad_188[0x8]; // 0x188(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilitySlotButton(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, enum class ESlotButton sb); // Function DFMAbility.QA_AbilityBehaviorCall.QA_AbilitySlotButton // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityChangeBehaviorCall
// Size: 0x190 (Inherited: 0x188)
class UQA_AbilityChangeBehaviorCall : public UQA_AbilityLogicState {
public:

	char pad_188[0x8]; // 0x188(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityChangeSlotButton(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName FunctionName, enum class ESlotButton sb); // Function DFMAbility.QA_AbilityChangeBehaviorCall.QA_AbilityChangeSlotButton // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.QA_AbilityFSMStatusInstanceListner
// Size: 0x190 (Inherited: 0x188)
class UQA_AbilityFSMStatusInstanceListner : public UQA_AbilityLogicState {
public:

	char pad_188[0x8]; // 0x188(0x08)

	struct UQA_AbilityLogicTask* STATIC_QA_AbilityFSMStatusInstanceListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, enum class EFSMGamePlayStatusDefine Status); // Function DFMAbility.QA_AbilityFSMStatusInstanceListner.QA_AbilityFSMStatusInstanceListner // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponBulletAbilityFireArrow
// Size: 0x7e0 (Inherited: 0x7e0)
class AWeaponBulletAbilityFireArrow : public AWeaponBulletArrow {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.WeaponBulletProxSensorArrow
// Size: 0x9a0 (Inherited: 0x7e0)
class AWeaponBulletProxSensorArrow : public AWeaponBulletArrow {
public:

	struct TArray<struct FName> IgnoreTagArray; // 0x7e0(0x10)
	struct FName TriggerTag; // 0x7f0(0x08)
	int32_t MarkBuffID; // 0x7f8(0x04)
	char pad_7FC[0x4]; // 0x7fc(0x04)
	struct FString ClientPostProcessEffectName; // 0x800(0x10)
	struct FString PostProcessEffectParameterName; // 0x810(0x10)
	struct FString PostProcessEffectColorParameterName; // 0x820(0x10)
	float PostProcessEffectFadeOutTime; // 0x830(0x04)
	struct FVector PostProcessEffectEdgeColor; // 0x834(0x0c)
	float ClientPostProcessEffectTickRate; // 0x840(0x04)
	struct FName FindEnenmyVO; // 0x844(0x08)
	struct FName FindHeavyArmorEnenmyVO; // 0x84c(0x08)
	float MarkEnemyTime; // 0x854(0x04)
	float MarkVehicleTime; // 0x858(0x04)
	float DetectorLifeTime; // 0x85c(0x04)
	float ScanInterval; // 0x860(0x04)
	float MinScanRadius; // 0x864(0x04)
	float MaxScanRadius; // 0x868(0x04)
	float MaxScanRadiusHeight; // 0x86c(0x04)
	bool bNeedBlockCheck; // 0x870(0x01)
	bool bNeedMarkEnemyInMap; // 0x871(0x01)
	char pad_872[0x2]; // 0x872(0x02)
	int32_t CheckBlockTime; // 0x874(0x04)
	struct TArray<struct FProxSensorArrowScanData> GameModeScanDataList; // 0x878(0x10)
	char pad_888[0x30]; // 0x888(0x30)
	struct UBoxComponent* ProxSensorBoxCache; // 0x8b8(0x08)
	struct TMap<int64_t, struct FVector> EnemyLocationMap; // 0x8c0(0x50)
	/*struct TSet<int32_t>*/char ScanCharacterSet[0x50]; // 0x910(0x50)
	struct FVector RelativeHitPos; // 0x960(0x0c)
	struct FVector LastHitGroundPos; // 0x96c(0x0c)
	struct FVector LastTickActorPos; // 0x978(0x0c)
	char pad_984[0x4]; // 0x984(0x04)
	struct TArray<struct AActor*> Ignores; // 0x988(0x10)
	char pad_998[0x8]; // 0x998(0x08)

	void UpdateClientPostProcessEffect(); // Function DFMAbility.WeaponBulletProxSensorArrow.UpdateClientPostProcessEffect // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.RankSkillRebornFlag
// Size: 0x4e0 (Inherited: 0x4d8)
class ARankSkillRebornFlag : public ARebornFlag {
public:

	char pad_4D8[0x8]; // 0x4d8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityAddBufferToSelf
// Size: 0x798 (Inherited: 0x790)
class ADFMAbilityAddBufferToSelf : public ADFMAbilityBuffDetector {
public:

	char pad_790[0x8]; // 0x790(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityBaseBox
// Size: 0x840 (Inherited: 0x790)
class ADFMAbilityBaseBox : public ADFMAbilityBuffDetector {
public:

	char pad_790[0x10]; // 0x790(0x10)
	float AddCD; // 0x7a0(0x04)
	float TickInterval; // 0x7a4(0x04)
	float RealCheckRadius; // 0x7a8(0x04)
	char pad_7AC[0x4]; // 0x7ac(0x04)
	struct TArray<struct FDFMAbilityBaseBoxCD> BoxCDList; // 0x7b0(0x10)
	struct UCapsuleComponent* RangeCheckCapsule; // 0x7c0(0x08)
	int32_t TeamOrCampID; // 0x7c8(0x04)
	char pad_7CC[0x4]; // 0x7cc(0x04)
	struct TMap<int64_t, float> AddTimeMap; // 0x7d0(0x50)
	struct TArray<struct ADFMCharacter*> PendingCharacters; // 0x820(0x10)
	char pad_830[0x10]; // 0x830(0x10)

	void UpdateBoxCDList(int64_t Uin, float CD); // Function DFMAbility.DFMAbilityBaseBox.UpdateBoxCDList // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityPlacementBase
// Size: 0x800 (Inherited: 0x790)
class ADFMAbilityPlacementBase : public ADFMAbilityBuffDetector {
public:

	char pad_790[0x20]; // 0x790(0x20)
	struct UGPSkeletalMeshComponent* SkeletalMeshComponent; // 0x7b0(0x08)
	enum class ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0x7b8(0x01)
	char pad_7B9[0x3]; // 0x7b9(0x03)
	float DelayActiveTime; // 0x7bc(0x04)
	int32_t MaxCount; // 0x7c0(0x04)
	char pad_7C4[0x4]; // 0x7c4(0x04)
	struct UGPAudioEventAsset* DeployAudio; // 0x7c8(0x08)
	struct UGPAudioEventAsset* ActiveAudio; // 0x7d0(0x08)
	struct FName SqueezedOutEffect; // 0x7d8(0x08)
	bool bCanBeDestoryByEMP; // 0x7e0(0x01)
	char pad_7E1[0x7]; // 0x7e1(0x07)
	struct UAnimationAsset* AnimationToPlay; // 0x7e8(0x08)
	struct UAnimationAsset* PlaceAnimation; // 0x7f0(0x08)
	char pad_7F8[0x3]; // 0x7f8(0x03)
	bool bActived; // 0x7fb(0x01)
	char pad_7FC[0x4]; // 0x7fc(0x04)

	void OnRep_bActived(); // Function DFMAbility.DFMAbilityPlacementBase.OnRep_bActived // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityAssault
// Size: 0x7f0 (Inherited: 0x790)
class ADFMAbilityAssault : public ADFMAbilityBuffDetector {
public:

	bool bApplyStagger; // 0x790(0x01)
	char pad_791[0x7]; // 0x791(0x07)
	struct TMap<int32_t, float> AbilityForbitData; // 0x798(0x50)
	float AlertMessageRange; // 0x7e8(0x04)
	bool ApplyTeammate; // 0x7ec(0x01)
	bool ApplySelt; // 0x7ed(0x01)
	char pad_7EE[0x2]; // 0x7ee(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityIncendiaryArea
// Size: 0xa18 (Inherited: 0x790)
class ADFMAbilityIncendiaryArea : public ADFMAbilityBuffDetector {
public:

	char pad_790[0x10]; // 0x790(0x10)
	bool bOpenClientDebug; // 0x7a0(0x01)
	char pad_7A1[0x3]; // 0x7a1(0x03)
	float ExtinguishDelayTime; // 0x7a4(0x04)
	int32_t ThreatId; // 0x7a8(0x04)
	int32_t OneFrameCheckNum; // 0x7ac(0x04)
	float CellCheckDamageMaxHeight; // 0x7b0(0x04)
	float CellCheckSize; // 0x7b4(0x04)
	int32_t ClientCellMerge; // 0x7b8(0x04)
	int32_t ClientCellMergeMobile; // 0x7bc(0x04)
	float FullPSMinRate; // 0x7c0(0x04)
	float FullPSMinRateMobile; // 0x7c4(0x04)
	float FullPSMaxOffset; // 0x7c8(0x04)
	int32_t PSCellExtraCheckNum; // 0x7cc(0x04)
	int32_t PSCellExtraCheckCenterWeight; // 0x7d0(0x04)
	float PSCellCheckOffset; // 0x7d4(0x04)
	float PSCellShowRandomOffset; // 0x7d8(0x04)
	float PSCellShowRandomAngleOffset; // 0x7dc(0x04)
	struct FName FullPSName; // 0x7e0(0x08)
	struct FName FullPSName_Water; // 0x7e8(0x08)
	struct FName CenterCellPSName; // 0x7f0(0x08)
	struct FName CellPSName; // 0x7f8(0x08)
	struct FName CenterCellPSName_Water; // 0x800(0x08)
	struct FName CellPSName_Water; // 0x808(0x08)
	float CellSurfaceMaxAngle; // 0x810(0x04)
	float CellMinOffset; // 0x814(0x04)
	float CellMaxOffset; // 0x818(0x04)
	int32_t CellParentCheckNum; // 0x81c(0x04)
	float CellParentCheckOffset; // 0x820(0x04)
	enum class ECollisionChannel CellTraceChannel; // 0x824(0x01)
	char pad_825[0x3]; // 0x825(0x03)
	int32_t HitBreakableItemAttackerID; // 0x828(0x04)
	char pad_82C[0x4]; // 0x82c(0x04)
	struct UGPAudioEventAsset* ExtinguishEvent; // 0x830(0x08)
	struct TArray<int32_t> AllActiveCells; // 0x838(0x10)
	struct TMap<int32_t, struct FDFMAbilityIncendiaryAreaCell> AllCheckedCellsMap; // 0x848(0x50)
	struct TMap<int32_t, struct FDFMAbilityIncendiaryAreaClientCell> AllActiveClientCells; // 0x898(0x50)
	struct TArray<struct UExtinguishIncendiaryComponent*> AllExtinguishComponents; // 0x8e8(0x10)
	struct UFXResourceContainerComponent* FullEffect; // 0x8f8(0x08)
	int32_t FullEffectHandleIndex; // 0x900(0x04)
	int32_t CurrentCheckClientCellIndex; // 0x904(0x04)
	struct FTimerHandle CheckClientCellTimerHandle; // 0x908(0x08)
	bool bIsAreaOnWater; // 0x910(0x01)
	bool bIsExtinguished; // 0x911(0x01)
	bool bIsNeedTickCheckExtinguishCell; // 0x912(0x01)
	char pad_913[0x1]; // 0x913(0x01)
	int32_t MaxCellLen; // 0x914(0x04)
	float AllCellNum; // 0x918(0x04)
	float MaxCellRadius; // 0x91c(0x04)
	bool bIsAutoFitDecal; // 0x920(0x01)
	char pad_921[0x7]; // 0x921(0x07)
	struct TArray<uint64_t> HitPlayerUidArray; // 0x928(0x10)
	int32_t CheckCellSuccessNum; // 0x938(0x04)
	float CheckCellMaxOffset; // 0x93c(0x04)
	bool bIsCheckingCell; // 0x940(0x01)
	char pad_941[0x3]; // 0x941(0x03)
	int32_t CheckCellNum; // 0x944(0x04)
	struct TArray<int32_t> CurrCheckCells; // 0x948(0x10)
	struct TArray<int32_t> NextCheckCells; // 0x958(0x10)
	bool bIsInitTraceParm; // 0x968(0x01)
	char pad_969[0x97]; // 0x969(0x97)
	int32_t SourceVehicleId; // 0xa00(0x04)
	bool bIsShowMarker; // 0xa04(0x01)
	char pad_A05[0x3]; // 0xa05(0x03)
	struct FVector MarkerLocation; // 0xa08(0x0c)
	char pad_A14[0x4]; // 0xa14(0x04)

	void STATIC_UnPackageCellInfo(int32_t CellInfo, int32_t& X, int32_t& Y, int32_t& XOffset, int32_t& YOffset, enum class EIncendiaryAreaCellDiffuseType& DiffuseType); // Function DFMAbility.DFMAbilityIncendiaryArea.UnPackageCellInfo // (Final|Native|Static|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityBlindingSmokeMine
// Size: 0x870 (Inherited: 0x790)
class ADFMAbilityBlindingSmokeMine : public ADFMAbilityBuffDetector {
public:

	char pad_790[0x20]; // 0x790(0x20)
	uint32_t OutLineItemID; // 0x7b0(0x04)
	struct FName OutLineEffectMeshTag; // 0x7b4(0x08)
	int32_t ThreatId; // 0x7bc(0x04)
	float DelayActiveTime; // 0x7c0(0x04)
	float DelayDestroyTime; // 0x7c4(0x04)
	struct FName BlindingSmokeEffectID; // 0x7c8(0x08)
	struct UGPAudioEventAsset* BlindingSmokePrepareAudio; // 0x7d0(0x08)
	struct USkeletalMeshComponent* OutLineEffectMesh; // 0x7d8(0x08)
	bool bHasActive; // 0x7e0(0x01)
	char pad_7E1[0xf]; // 0x7e1(0x0f)
	struct UShapeComponent* TriggerCache; // 0x7f0(0x08)
	struct FTimerHandle ActiveTimerHandle; // 0x7f8(0x08)
	struct FTimerHandle DelayDestroyTimerHandle; // 0x800(0x08)
	struct UFXResourceContainerComponent* BlindingSmokeFXComp; // 0x808(0x08)
	int32_t BlindingSmokeFXCompHandle; // 0x810(0x04)
	char pad_814[0x4]; // 0x814(0x04)
	/*struct TSet<uint64_t>*/char AddScoreMap[0x50]; // 0x818(0x50)
	int32_t SmokeUid; // 0x868(0x04)
	char pad_86C[0x4]; // 0x86c(0x04)

	void TryExtinguishIncendiary(); // Function DFMAbility.DFMAbilityBlindingSmokeMine.TryExtinguishIncendiary // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityDetector
// Size: 0x828 (Inherited: 0x790)
class ADFMAbilityDetector : public ADFMAbilityBuffDetector {
public:

	char pad_790[0x10]; // 0x790(0x10)
	struct TMap<int32_t, int32_t> DetectorHandlerMap; // 0x7a0(0x50)
	struct FName MapIconName; // 0x7f0(0x08)
	bool MarkerTeammate; // 0x7f8(0x01)
	bool MarkerSelf; // 0x7f9(0x01)
	char pad_7FA[0x2]; // 0x7fa(0x02)
	int32_t WeaponMarkableType; // 0x7fc(0x04)
	struct FString WeaponMarkableName; // 0x800(0x10)
	struct FName MarkerSocketName; // 0x810(0x08)
	struct FVector MarkerOffset; // 0x818(0x0c)
	char pad_824[0x4]; // 0x824(0x04)

	bool IsDestroy(); // Function DFMAbility.DFMAbilityDetector.IsDestroy // (Native|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityFireArrow
// Size: 0x930 (Inherited: 0x790)
class ADFMAbilityFireArrow : public ADFMAbilityBuffDetector {
public:

	char pad_790[0x18]; // 0x790(0x18)
	struct TArray<struct FDFMAbilityArrowData> GameModeArrowDataList; // 0x7a8(0x10)
	int32_t ThreatId; // 0x7b8(0x04)
	float LifeTime_StickyToChar; // 0x7bc(0x04)
	struct FName ElectricEffectID; // 0x7c0(0x08)
	float ElectricEffectInterval; // 0x7c8(0x04)
	int32_t PullOutArrowSkillID; // 0x7cc(0x04)
	struct UCapsuleComponent* RangeCheckCapsule; // 0x7d0(0x08)
	bool bStopDamage; // 0x7d8(0x01)
	char pad_7D9[0x3]; // 0x7d9(0x03)
	float RealCheckRadius; // 0x7dc(0x04)
	float TickEffectTime; // 0x7e0(0x04)
	float Curtime; // 0x7e4(0x04)
	int64_t AttackValueId; // 0x7e8(0x08)
	int64_t BarbedWireAttackValueId; // 0x7f0(0x08)
	float MakeDamageInterval; // 0x7f8(0x04)
	float MakeDamageTime; // 0x7fc(0x04)
	float ArrowFlyDis; // 0x800(0x04)
	int32_t TeamOrCampID; // 0x804(0x04)
	float CreateTime; // 0x808(0x04)
	char pad_80C[0x4]; // 0x80c(0x04)
	/*struct TSet<int32_t>*/char HitPlayerSet[0x50]; // 0x810(0x50)
	struct TArray<struct ADFMCharacter*> PendingCharacters; // 0x860(0x10)
	struct FGPWeaponBulletThrowableProjectileInfo ProjectileInfo; // 0x870(0x60)
	uint64_t LastStickyCharUin; // 0x8d0(0x08)
	bool bShowMarker; // 0x8d8(0x01)
	char pad_8D9[0x7]; // 0x8d9(0x07)
	/*struct TSet<uint32_t>*/char AllHitTargets[0x50]; // 0x8e0(0x50)

	void StopFireArrowDamage(); // Function DFMAbility.DFMAbilityFireArrow.StopFireArrowDamage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityMarkerDetector
// Size: 0x798 (Inherited: 0x790)
class ADFMAbilityMarkerDetector : public ADFMAbilityBuffDetector {
public:

	float Height; // 0x790(0x04)
	float Gravity; // 0x794(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilitySensorDetector
// Size: 0x8a0 (Inherited: 0x790)
class ADFMAbilitySensorDetector : public ADFMAbilityBuffDetector {
public:

	int32_t TotalScanTimes_BF; // 0x790(0x04)
	float ScanInterval_BF; // 0x794(0x04)
	float ScanSpeed_BF; // 0x798(0x04)
	float MaxScanDistance_BF; // 0x79c(0x04)
	int32_t TotalScanTimes_SOL; // 0x7a0(0x04)
	float ScanInterval_SOL; // 0x7a4(0x04)
	float ScanSpeed_SOL; // 0x7a8(0x04)
	float MaxScanDistance_SOL; // 0x7ac(0x04)
	float TickScanTime; // 0x7b0(0x04)
	char pad_7B4[0x4]; // 0x7b4(0x04)
	struct TArray<struct AActor*> PendingCharacters; // 0x7b8(0x10)
	char pad_7C8[0x30]; // 0x7c8(0x30)
	/*struct TSet<int32_t>*/char ScanCharacterSet[0x50]; // 0x7f8(0x50)
	/*struct TSet<int32_t>*/char ScanEnermyCharacterSet[0x50]; // 0x848(0x50)
	int32_t ScanEnermyCharacterSetNum; // 0x898(0x04)
	char pad_89C[0x4]; // 0x89c(0x04)

	void BP_ApplySensorEffect(); // Function DFMAbility.DFMAbilitySensorDetector.BP_ApplySensorEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityPenetratingGunBullet
// Size: 0x7c0 (Inherited: 0x790)
class ADFMAbilityPenetratingGunBullet : public ADFMAbilityBuffDetector {
public:

	struct UCapsuleComponent* BuffColComp; // 0x790(0x08)
	char pad_798[0x10]; // 0x798(0x10)
	struct ADFMCharacter* BulletBuffTaker; // 0x7a8(0x08)
	struct TArray<struct ADFMCharacter*> DebuffCharArry; // 0x7b0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityProxSensor
// Size: 0x890 (Inherited: 0x790)
class ADFMAbilityProxSensor : public ADFMAbilityBuffDetector {
public:

	int32_t TotalScanTimes_BF; // 0x790(0x04)
	float ScanInterval_BF; // 0x794(0x04)
	float ScanSpeed_BF; // 0x798(0x04)
	float MaxScanDistance_BF; // 0x79c(0x04)
	int32_t TotalScanTimes_SOL; // 0x7a0(0x04)
	float ScanInterval_SOL; // 0x7a4(0x04)
	float ScanSpeed_SOL; // 0x7a8(0x04)
	float MaxScanDistance_SOL; // 0x7ac(0x04)
	char pad_7B0[0x30]; // 0x7b0(0x30)
	struct TArray<struct ADFMCharacter*> PendingCharacters; // 0x7e0(0x10)
	/*struct TSet<int32_t>*/char ScanCharacterSet[0x50]; // 0x7f0(0x50)
	struct TMap<int64_t, struct FVector> EnemyLocationMap; // 0x840(0x50)

	bool IsOnwerEnemyWithCharacter(struct AGPCharacterBase* Charecter); // Function DFMAbility.DFMAbilityProxSensor.IsOnwerEnemyWithCharacter // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityProxSensorAdvanceScan
// Size: 0x968 (Inherited: 0x790)
class ADFMAbilityProxSensorAdvanceScan : public ADFMAbilityBuffDetector {
public:

	float LifeTime; // 0x790(0x04)
	float ScanCDTime; // 0x794(0x04)
	float FindPathCDTime; // 0x798(0x04)
	float ScanDistance; // 0x79c(0x04)
	int32_t MaxTargetToDrawLine; // 0x7a0(0x04)
	float PathLineHeight; // 0x7a4(0x04)
	float PathMinDistance; // 0x7a8(0x04)
	struct FVector ScaleMask; // 0x7ac(0x0c)
	struct FVector ScaleFactor; // 0x7b8(0x0c)
	float FirstSectionMinDistance; // 0x7c4(0x04)
	float FirstSectionMaxDistance; // 0x7c8(0x04)
	float FirstSectionClostScale; // 0x7cc(0x04)
	float FirstSectionFarScale; // 0x7d0(0x04)
	float FirstSectionCalcForwardOffset; // 0x7d4(0x04)
	float FirstSectionOffset; // 0x7d8(0x04)
	float ScanFaceAngle; // 0x7dc(0x04)
	struct FName FX_P_Scout_AcousticalDetector_Blue; // 0x7e0(0x08)
	struct TArray<struct ADFMCharacter*> ScanCharacters; // 0x7e8(0x10)
	struct TArray<struct ADFMCharacter*> LocalScanCharacters; // 0x7f8(0x10)
	struct TArray<struct FDFMAbilityAdvanceScanItem> AdvanceScanPathArray; // 0x808(0x10)
	struct TArray<struct FTransform> LineTransforms; // 0x818(0x10)
	struct TArray<struct FDFMAbilityAdvanceScanTracePathItem> AttachlineArray; // 0x828(0x10)
	struct TMap<struct ADFMCharacter*, int32_t> AttachLineTransformIndexMap; // 0x838(0x50)
	struct UInstancedStaticMeshComponent* InstancedMeshComponent; // 0x888(0x08)
	struct UFXResourceContainerComponent* FXContainer; // 0x890(0x08)
	char pad_898[0x4]; // 0x898(0x04)
	bool bPlayEffect; // 0x89c(0x01)
	bool bIsPathDirty; // 0x89d(0x01)
	char pad_89E[0x2]; // 0x89e(0x02)
	float TickAccumulateTime; // 0x8a0(0x04)
	char pad_8A4[0x14]; // 0x8a4(0x14)
	struct TArray<struct ADFMCharacter*> PendingCharacters; // 0x8b8(0x10)
	/*struct TSet<int32_t>*/char ScanCharacterSet[0x50]; // 0x8c8(0x50)
	struct TMap<int64_t, struct FVector> EnemyLocationMap; // 0x918(0x50)

	void TickScan(); // Function DFMAbility.DFMAbilityProxSensorAdvanceScan.TickScan // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityStormBall
// Size: 0x7e0 (Inherited: 0x790)
class ADFMAbilityStormBall : public ADFMAbilityBuffDetector {
public:

	/*struct TSet<uint64_t>*/char CharSet[0x50]; // 0x790(0x50)

	bool IsDestroy(); // Function DFMAbility.DFMAbilityStormBall.IsDestroy // (Native|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilitySuppressionMine
// Size: 0x930 (Inherited: 0x790)
class ADFMAbilitySuppressionMine : public ADFMAbilityBuffDetector {
public:

	char pad_790[0x30]; // 0x790(0x30)
	int32_t ThreatId; // 0x7c0(0x04)
	char pad_7C4[0x4]; // 0x7c4(0x04)
	struct FText RecycleText; // 0x7c8(0x18)
	uint32_t OutLineItemID; // 0x7e0(0x04)
	struct FName OutLineEffectMeshTag; // 0x7e4(0x08)
	char pad_7EC[0x4]; // 0x7ec(0x04)
	struct USkeletalMeshComponent* OutLineEffectMesh; // 0x7f0(0x08)
	struct FTimerHandle ReplayTimerHandle; // 0x7f8(0x08)
	struct TWeakObjectPtr<struct AActor> Grenade; // 0x800(0x08)
	struct FGPWeaponBulletThrowableProjectileInfo ProjectileInfo; // 0x808(0x60)
	float TraceStartOffset; // 0x868(0x04)
	float ActiveTime; // 0x86c(0x04)
	float DelayActiveTime; // 0x870(0x04)
	float PickUpDistance; // 0x874(0x04)
	float ManualActivateDistance; // 0x878(0x04)
	float PickUpDirectionDegree; // 0x87c(0x04)
	bool bPickUpDisTrace; // 0x880(0x01)
	char pad_881[0x3]; // 0x881(0x03)
	float PickUpTraceTimeInterval; // 0x884(0x04)
	enum class ECollisionChannel PickUpTraceChannel; // 0x888(0x01)
	char pad_889[0x3]; // 0x889(0x03)
	float ActiveDistance; // 0x88c(0x04)
	float ActiveDirectionDegree; // 0x890(0x04)
	bool bActiveDisTrace; // 0x894(0x01)
	char pad_895[0x3]; // 0x895(0x03)
	float BloodDistance; // 0x898(0x04)
	float NearDistanceHP; // 0x89c(0x04)
	float MaxDistanceToDestroy; // 0x8a0(0x04)
	float DestroyDistanceCheckDelayTime; // 0x8a4(0x04)
	float DestroyDistanceCheckUIOffsetTime; // 0x8a8(0x04)
	float ReadyToRecoverTime; // 0x8ac(0x04)
	struct FName PanelName; // 0x8b0(0x08)
	enum class EAbilityDetectorTriggerType TriggerState; // 0x8b8(0x01)
	char pad_8B9[0xf]; // 0x8b9(0x0f)
	struct FTimerHandle ActiveSuppressionMineTimerHandle; // 0x8c8(0x08)
	bool bMaxDistaceToDestoyed; // 0x8d0(0x01)
	bool bHasActive; // 0x8d1(0x01)
	bool bDeployFinished; // 0x8d2(0x01)
	bool bClientHasActive; // 0x8d3(0x01)
	bool bClientPreActive; // 0x8d4(0x01)
	enum class ECharacterFSMEventDefine thisevent; // 0x8d5(0x01)
	char pad_8D6[0x2]; // 0x8d6(0x02)
	struct FName MapIconColor_Self; // 0x8d8(0x08)
	struct FName MapIconColor_TeamMate; // 0x8e0(0x08)
	struct FName MapIconColor_CampMate; // 0x8e8(0x08)
	bool bIsFirstEnemyEnter; // 0x8f0(0x01)
	char pad_8F1[0x1]; // 0x8f1(0x01)
	bool bIsPreDestroyed; // 0x8f2(0x01)
	char pad_8F3[0xd]; // 0x8f3(0x0d)
	struct UShapeComponent* TriggerCache; // 0x900(0x08)
	char pad_908[0x22]; // 0x908(0x22)
	enum class ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0x92a(0x01)
	char pad_92B[0x5]; // 0x92b(0x05)

	void SuppressionMineTriggerEvent(struct AActor* NewCharacterOwner, struct AActor* Bunker, int32_t TriggerType); // Function DFMAbility.DFMAbilitySuppressionMine.SuppressionMineTriggerEvent // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.ZoyaSwarmsActor
// Size: 0x8a8 (Inherited: 0x790)
class AZoyaSwarmsActor : public ADFMAbilityBuffDetector {
public:

	char pad_790[0x10]; // 0x790(0x10)
	int32_t ThreatId; // 0x7a0(0x04)
	struct FVector ThreatOffset; // 0x7a4(0x0c)
	float ExtraLODDistance; // 0x7b0(0x04)
	char pad_7B4[0x4]; // 0x7b4(0x04)
	struct FString HitTargetVoiceString; // 0x7b8(0x10)
	enum class EHitEventType HitEventType; // 0x7c8(0x01)
	char pad_7C9[0x3]; // 0x7c9(0x03)
	struct FName HitLeftArmAnimName; // 0x7cc(0x08)
	bool bHitCancelUseItem; // 0x7d4(0x01)
	char pad_7D5[0x3]; // 0x7d5(0x03)
	struct USwarmsComponent* SwarmsComponent; // 0x7d8(0x08)
	struct FName SwarmsSoundRTPC_TeamType; // 0x7e0(0x08)
	struct UGPAudioEventAsset* SwarmsFlyEvent; // 0x7e8(0x08)
	struct UGPAudioEventAsset* SwarmsEndFlyEvent; // 0x7f0(0x08)
	struct UGPAudioEventAsset* FindTargetSwarmsFlyEvent; // 0x7f8(0x08)
	struct UGPAudioEventAsset* FindTargetSwarmsEndFlyEvent; // 0x800(0x08)
	struct UGPAudioEventAsset* HitTargetEvent; // 0x808(0x08)
	struct UGPAudioEventAsset* LockTargetEvent; // 0x810(0x08)
	struct UGPAudioEventAsset* LockTargetEndEvent; // 0x818(0x08)
	int32_t CurrSwarmsSpawnPointsType; // 0x820(0x04)
	char pad_824[0x4]; // 0x824(0x04)
	struct TMap<uint32_t, float> HitTargets; // 0x828(0x50)
	struct TArray<struct UTravelerGameAk*> AllCachedTravelerAk; // 0x878(0x10)
	struct UTravelerGameAk* CachedFindTargetTravelerAk; // 0x888(0x08)
	int32_t LocalPawnFindTargetIndex; // 0x890(0x04)
	float LocalPawnLockAudioEndTime; // 0x894(0x04)
	float LocalPawnLockAudioTimeScale; // 0x898(0x04)
	struct FVector LocalPawnLockAudioStartLocation; // 0x89c(0x0c)

	void UpdateTravelerGameAk(); // Function DFMAbility.ZoyaSwarmsActor.UpdateTravelerGameAk // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityAmmoBox
// Size: 0x8f8 (Inherited: 0x840)
class ADFMAbilityAmmoBox : public ADFMAbilityBaseBox {
public:

	enum class EWeaponAddAmmoType AddAmmoType; // 0x840(0x01)
	char pad_841[0x3]; // 0x841(0x03)
	float AddAmmoValue; // 0x844(0x04)
	struct TArray<enum class ECharingSlot> CharingSlotList; // 0x848(0x10)
	struct TArray<char> Blacklist; // 0x858(0x10)
	char pad_868[0x50]; // 0x868(0x50)
	struct FName BoxEdgeEffectID; // 0x8b8(0x08)
	struct FName BoxEdgeEffectID_HD; // 0x8c0(0x08)
	struct FName BoxEdgeEffectPosParamName; // 0x8c8(0x08)
	struct FName AddAmmoUIAudioName; // 0x8d0(0x08)
	struct FName LeftArmAnimName; // 0x8d8(0x08)
	char pad_8E0[0x8]; // 0x8e0(0x08)
	struct UGPSkeletalMeshComponent* GPSkeletalMeshComp; // 0x8e8(0x08)
	enum class ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0x8f0(0x01)
	char pad_8F1[0x7]; // 0x8f1(0x07)

	int32_t SpecialAddAmmo(struct ADFMCharacter* TargetChar); // Function DFMAbility.DFMAbilityAmmoBox.SpecialAddAmmo // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityMedicalBox
// Size: 0x848 (Inherited: 0x840)
class ADFMAbilityMedicalBox : public ADFMAbilityBaseBox {
public:

	uint32_t BuffId; // 0x840(0x04)
	enum class ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0x844(0x01)
	char pad_845[0x3]; // 0x845(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityMineBase
// Size: 0x878 (Inherited: 0x800)
class ADFMAbilityMineBase : public ADFMAbilityPlacementBase {
public:

	char pad_800[0x8]; // 0x800(0x08)
	float PickUpDistance; // 0x808(0x04)
	char pad_80C[0x8]; // 0x80c(0x08)
	enum class ESkillRecycleType SkillRecycleType; // 0x814(0x01)
	char pad_815[0x3]; // 0x815(0x03)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char TriggerExplosionAudio[0x28]; // 0x818(0x28)
	float DelayExplosionTime; // 0x840(0x04)
	float StayTimeAfterPawnDie; // 0x844(0x04)
	char pad_848[0x4]; // 0x848(0x04)
	struct FVector ExplosionOffset; // 0x84c(0x0c)
	char pad_858[0x4]; // 0x858(0x04)
	struct TWeakObjectPtr<struct AActor> LastMaker; // 0x85c(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> Shooter; // 0x864(0x08)
	char pad_86C[0xc]; // 0x86c(0x0c)

	void OnPawnDie(struct AGPCharacterBase* CHARACTER); // Function DFMAbility.DFMAbilityMineBase.OnPawnDie // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityBarbedWireArea
// Size: 0xb30 (Inherited: 0xa18)
class ADFMAbilityBarbedWireArea : public ADFMAbilityIncendiaryArea {
public:

	float MinDestroyRadialDamage; // 0xa18(0x04)
	float TakeDamageBoxSizeZ; // 0xa1c(0x04)
	float HitMoveDistance; // 0xa20(0x04)
	struct FName MTPawnLocationParamName; // 0xa24(0x08)
	struct FName MTPawnLeaveTimeParamName; // 0xa2c(0x08)
	float MTPawnLeaveTimeMaxValue; // 0xa34(0x04)
	struct FName MTEmissiveParamName; // 0xa38(0x08)
	struct FLinearColor EmissiveColor; // 0xa40(0x10)
	struct FLinearColor EnemyEmissiveColor; // 0xa50(0x10)
	struct UGPAudioEventAsset* MoveSoundEvent; // 0xa60(0x08)
	float MoveSoundDistance; // 0xa68(0x04)
	char pad_A6C[0x4]; // 0xa6c(0x04)
	struct UShapeComponent* BaseHitBoxCache; // 0xa70(0x08)
	struct TMap<int32_t, struct UBoxComponent*> AllHitBoxesMap; // 0xa78(0x50)
	struct UShapeComponent* ClientRangeCheckCache; // 0xac8(0x08)
	struct TArray<struct TWeakObjectPtr<struct AGPCharacter>> AllCheckCharacters; // 0xad0(0x10)
	struct TMap<uint32_t, struct FDFMAbilityBarbedWireTarget> LastTargetsLocationMap; // 0xae0(0x50)

	bool TrySetMaterialParams(struct UFXResourceContainerComponent* FxComponent, struct FVector Location, float Time); // Function DFMAbility.DFMAbilityBarbedWireArea.TrySetMaterialParams // (Final|Native|Private|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityMedic
// Size: 0xab8 (Inherited: 0x8a0)
class ADFMAbilityMedic : public ADFMAbilitySensorDetector {
public:

	char pad_8A0[0x20]; // 0x8a0(0x20)
	struct FName PanelName; // 0x8c0(0x08)
	struct TArray<struct FAbilityDetectorBuffData> OverlapAddBuffIDs; // 0x8c8(0x10)
	struct TMap<int32_t, struct FTimerHandle> MedicHandlerMap; // 0x8d8(0x50)
	float CheckImpendingDeathInterval; // 0x928(0x04)
	char pad_92C[0x4]; // 0x92c(0x04)
	float CureTeammateTime; // 0x930(0x04)
	bool bUseSmokeWallMovement; // 0x934(0x01)
	char pad_935[0x3]; // 0x935(0x03)
	struct FName ImpackName; // 0x938(0x08)
	struct FName LastImpackName; // 0x940(0x08)
	char pad_948[0x8]; // 0x948(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> StingerMissileVehicles; // 0x950(0x10)
	int32_t ThreatId; // 0x960(0x04)
	bool bShowThreatMarker; // 0x964(0x01)
	char pad_965[0x3]; // 0x965(0x03)
	float LineTraceTimeRate; // 0x968(0x04)
	float LastLineTraceTimeTamp; // 0x96c(0x04)
	bool bBeginMove; // 0x970(0x01)
	char pad_971[0xf]; // 0x971(0x0f)
	struct TWeakObjectPtr<struct ADFMAbilityMedic> DamageMakerMedic; // 0x980(0x08)
	struct UMapItemRangeViewController* RangeController; // 0x988(0x08)
	float BigMapRange; // 0x990(0x04)
	float YawOffset; // 0x994(0x04)
	float NoParentMeshUpSpeed; // 0x998(0x04)
	float MoveDeltaTime; // 0x99c(0x04)
	bool bIsLastWave; // 0x9a0(0x01)
	bool bIsLocalControlled; // 0x9a1(0x01)
	bool bIsAIControlled; // 0x9a2(0x01)
	char pad_9A3[0x1]; // 0x9a3(0x01)
	float AccumulateLifeTime; // 0x9a4(0x04)
	float MaxFlyDistance; // 0x9a8(0x04)
	float MaxFlyTime; // 0x9ac(0x04)
	struct UGPUASMovementComponent* MovementComponent; // 0x9b0(0x08)
	struct UClass* DeformableActorMovementClass; // 0x9b8(0x08)
	struct UClass* DeformableActorMovementClass_Pilot; // 0x9c0(0x08)
	struct FLinearColor SelfColor; // 0x9c8(0x10)
	struct FLinearColor TeamColor; // 0x9d8(0x10)
	struct FLinearColor CampColor; // 0x9e8(0x10)
	struct FLinearColor EnermyColor; // 0x9f8(0x10)
	struct FLinearColor SelfColorMP; // 0xa08(0x10)
	struct FLinearColor TeamColorMP; // 0xa18(0x10)
	struct FLinearColor CampColorMP; // 0xa28(0x10)
	struct FLinearColor EnermyColorMP; // 0xa38(0x10)
	bool bUsePilotMove; // 0xa48(0x01)
	char pad_A49[0x3]; // 0xa49(0x03)
	struct FRotator ClientControllerRotator; // 0xa4c(0x0c)
	struct FVector ClientPos1p; // 0xa58(0x0c)
	char pad_A64[0x54]; // 0xa64(0x54)

	void UpdateTimeMap(); // Function DFMAbility.DFMAbilityMedic.UpdateTimeMap // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityAntiTankMine
// Size: 0xaf0 (Inherited: 0x878)
class ADFMAbilityAntiTankMine : public ADFMAbilityMineBase {
public:

	struct USphereComponent* SphereComponent; // 0x878(0x08)
	float TriggerRadius; // 0x880(0x04)
	int32_t AttackId; // 0x884(0x04)
	struct FAbilityMineExplosionEffectConfig ExplosionEffectConfig; // 0x888(0x128)
	int32_t DestorytAttackID; // 0x9b0(0x04)
	char pad_9B4[0x4]; // 0x9b4(0x04)
	struct FAbilityMineExplosionEffectConfig DestorytExplosionEffectConfig; // 0x9b8(0x128)
	struct TArray<struct TWeakObjectPtr<struct ADFMVehicleBase>> EnemyOverlaps; // 0xae0(0x10)

	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DFMAbility.DFMAbilityAntiTankMine.OnOverlapEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAbility.DFMAbilityClaymoreMine
// Size: 0xdc0 (Inherited: 0x878)
class ADFMAbilityClaymoreMine : public ADFMAbilityMineBase {
public:

	struct UParticleSystemComponent* ClayMoreLine; // 0x878(0x08)
	struct USphereComponent* SphereComponent; // 0x880(0x08)
	float ClaymoreTriggerRadius; // 0x888(0x04)
	float ClaymoreExplosionRadius; // 0x88c(0x04)
	float ClaymoreTriggerAngle; // 0x890(0x04)
	float ClaymoreExplosionAngle; // 0x894(0x04)
	char pad_898[0x10]; // 0x898(0x10)
	struct TArray<struct AActor*> Overlaps; // 0x8a8(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> EnemyOverlaps; // 0x8b8(0x10)
	struct TArray<float> TriggerAttackDis; // 0x8c8(0x10)
	struct TArray<int32_t> TriggerAttackID; // 0x8d8(0x10)
	struct FAbilityMineExplosionEffectConfig ExplosionEffectConfig; // 0x8e8(0x128)
	int32_t DamageAttackID; // 0xa10(0x04)
	int32_t DestorytAttackID; // 0xa14(0x04)
	struct FAbilityMineExplosionEffectConfig DestorytExplosionEffectConfig; // 0xa18(0x128)
	struct FName ClayMoreLineEffect; // 0xb40(0x08)
	float VelDesRad; // 0xb48(0x04)
	bool bShowDebug; // 0xb4c(0x01)
	char pad_B4D[0x3]; // 0xb4d(0x03)
	struct FAbilityMineExplosionEffectConfig LaserConfig0; // 0xb50(0x128)
	struct FAbilityMineExplosionEffectConfig LaserConfig1; // 0xc78(0x128)
	struct FColor TeammateColor; // 0xda0(0x04)
	struct FColor EnemyColor; // 0xda4(0x04)
	struct UFXResourceContainerComponent* Laser0; // 0xda8(0x08)
	struct UFXResourceContainerComponent* Laser1; // 0xdb0(0x08)
	bool bDamageLogic2; // 0xdb8(0x01)
	char pad_DB9[0x7]; // 0xdb9(0x07)

	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DFMAbility.DFMAbilityClaymoreMine.OnOverlapEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
