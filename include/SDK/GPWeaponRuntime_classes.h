
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPWeaponRuntime.AbilityTask_WaitDelayWhileAbilityActive
// Size: 0xa8 (Inherited: 0x88)
class UAbilityTask_WaitDelayWhileAbilityActive : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnFinish[0x10]; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitDelayWhileAbilityActive* STATIC_WaitDelayWhileAbilityActive(struct UGameplayAbility* OwningAbility, float Time); // Function GPWeaponRuntime.AbilityTask_WaitDelayWhileAbilityActive.WaitDelayWhileAbilityActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.ActorPoolInterface
// Size: 0x30 (Inherited: 0x30)
class UActorPoolInterface : public UInterface {
public:


	void SetActorPoolMethod(enum class EActorPoolMethod Val); // Function GPWeaponRuntime.ActorPoolInterface.SetActorPoolMethod // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.ADSDetectedInterface
// Size: 0x30 (Inherited: 0x30)
class UADSDetectedInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.ConeTrace
// Size: 0x30 (Inherited: 0x30)
class UConeTrace : public UBlueprintFunctionLibrary {
public:


	bool STATIC_SphereTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float radius, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function GPWeaponRuntime.ConeTrace.SphereTraceMultiForObjects // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPBulletFilterComponent
// Size: 0x108 (Inherited: 0x100)
class UGPBulletFilterComponent : public UActorComponent {
public:

	float MinBulletBlockRadius; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPGrenadeInterface
// Size: 0x30 (Inherited: 0x30)
class UGPGrenadeInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.ProjectileViewMovementComponent
// Size: 0x110 (Inherited: 0x100)
class UProjectileViewMovementComponent : public UActorComponent {
public:

	struct USceneComponent* UpdatedComponent; // 0x100(0x08)
	float LerpDuration; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPProjectileMovementUtils
// Size: 0x30 (Inherited: 0x30)
class UGPProjectileMovementUtils : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPProjectilePublishCenterInterface
// Size: 0x30 (Inherited: 0x30)
class UGPProjectilePublishCenterInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPProjectilePublisherInterface
// Size: 0x30 (Inherited: 0x30)
class UGPProjectilePublisherInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPProjectileSubscriberInterface
// Size: 0x30 (Inherited: 0x30)
class UGPProjectileSubscriberInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPProjectileReplicateComponent
// Size: 0x1c8 (Inherited: 0x100)
class UGPProjectileReplicateComponent : public UActorComponent {
public:

	char pad_100[0x10]; // 0x100(0x10)
	/*struct TScriptInterface<IWeaponLogInterface>*/char WeaponLogInterface[0x10]; // 0x110(0x10)
	/*struct TSet<uint64_t>*/char PublisherGuids[0x50]; // 0x120(0x50)
	struct AGPWeaponBulletSystem* CacheBulletSystem; // 0x170(0x08)
	char pad_178[0x50]; // 0x178(0x50)

	void ClientPublishTrajectoryItems(struct TArray<struct FRepProjectileTrajectoryItem> TrajectoryItems); // Function GPWeaponRuntime.GPProjectileReplicateComponent.ClientPublishTrajectoryItems // (Net|Native|Event|Protected|NetClient) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPProjectileSystemInterface
// Size: 0x30 (Inherited: 0x30)
class UGPProjectileSystemInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPThrowableWeaponInterface
// Size: 0x30 (Inherited: 0x30)
class UGPThrowableWeaponInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponAimAssistorBase
// Size: 0x58 (Inherited: 0x30)
class UGPWeaponAimAssistorBase : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UGPWeaponDataComponentFiring* DCFiring; // 0x38(0x08)
	struct UGPWeaponFuncComponentFiring* FCFiring; // 0x40(0x08)
	struct UGPWeaponGlobals* WeaponGlobals; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponAttributeSetEquip
// Size: 0xa0 (Inherited: 0x50)
class UGPWeaponAttributeSetEquip : public UGPAttributeSetBase {
public:

	float EquipTime; // 0x50(0x04)
	float UnEquipTime; // 0x54(0x04)
	float FastEquipTime; // 0x58(0x04)
	float FastUnEquipTime; // 0x5c(0x04)
	float FirstEquipTime; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FGameplayAttributeData EquipTimeRate; // 0x68(0x10)
	struct FGameplayAttributeData UnEquipTimeRate; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)

	void OnRep_UnEquipTimeRate(struct FGameplayAttributeData& OldData); // Function GPWeaponRuntime.GPWeaponAttributeSetEquip.OnRep_UnEquipTimeRate // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponAttributeSetFireMode
// Size: 0x1c0 (Inherited: 0x50)
class UGPWeaponAttributeSetFireMode : public UGPAttributeSetBase {
public:

	struct FGameplayAttributeData FireInterval; // 0x50(0x10)
	struct FGameplayAttributeData FastFireInterval; // 0x60(0x10)
	struct FGameplayAttributeData FireCD; // 0x70(0x10)
	struct FGameplayAttributeData AutoFireSingleInterval; // 0x80(0x10)
	struct FGameplayAttributeData AutoFireBurstInterval; // 0x90(0x10)
	struct FGameplayAttributeData FireDelayTime; // 0xa0(0x10)
	struct FGameplayAttributeData BurstInterval; // 0xb0(0x10)
	struct FGameplayAttributeData PostFireTime; // 0xc0(0x10)
	struct FGameplayAttributeData BurstFireInterval; // 0xd0(0x10)
	struct FGameplayAttributeData BurstFireCD; // 0xe0(0x10)
	struct FGameplayAttributeData FiringMode; // 0xf0(0x10)
	struct FGameplayAttributeData BurstFireBulletCount; // 0x100(0x10)
	struct FGameplayAttributeData ChamberTime; // 0x110(0x10)
	struct FGameplayAttributeData PreFireTime; // 0x120(0x10)
	struct FGameplayAttributeData PreFireKeepTime; // 0x130(0x10)
	struct FGameplayAttributeData PreFireCancelTime; // 0x140(0x10)
	struct FGameplayAttributeData KeepPreFireDamageScale; // 0x150(0x10)
	struct FGameplayAttributeData BulletInOneShot; // 0x160(0x10)
	struct FGameplayAttributeData PullBoltTimeRate; // 0x170(0x10)
	struct FGameplayAttributeData ProjectileInitialVelocityRate; // 0x180(0x10)
	char pad_190[0x30]; // 0x190(0x30)

	void OnRep_PullBoltTimeRate(struct FGameplayAttributeData& OldData); // Function GPWeaponRuntime.GPWeaponAttributeSetFireMode.OnRep_PullBoltTimeRate // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponAttributeSetWeaponAmmo
// Size: 0xc8 (Inherited: 0x50)
class UGPWeaponAttributeSetWeaponAmmo : public UGPAttributeSetBase {
public:

	float WeaponAmmoCount; // 0x50(0x04)
	float WeaponCarriedAmmoCount; // 0x54(0x04)
	float WeaponConsumeAmmoType; // 0x58(0x04)
	float WeaponAmmoCost; // 0x5c(0x04)
	float ClipAmmoCount; // 0x60(0x04)
	float MaxCarriedAmmoCount; // 0x64(0x04)
	float WeaponAmmoType; // 0x68(0x04)
	float CanAddAmmo; // 0x6c(0x04)
	float AmmoPrice; // 0x70(0x04)
	char pad_74[0x54]; // 0x74(0x54)

	void SetWeaponCarriedAmmoCountWithCallBack(float NewValue); // Function GPWeaponRuntime.GPWeaponAttributeSetWeaponAmmo.SetWeaponCarriedAmmoCountWithCallBack // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponAttributeSetWeaponChangeClip
// Size: 0xe0 (Inherited: 0x50)
class UGPWeaponAttributeSetWeaponChangeClip : public UGPAttributeSetBase {
public:

	struct FGameplayAttributeData WeaponChangeClipMode; // 0x50(0x10)
	struct FGameplayAttributeData WeaponChangeClipMaxReloadedOnce; // 0x60(0x10)
	struct FGameplayAttributeData WeaponChangeClipTime; // 0x70(0x10)
	struct FGameplayAttributeData WeaponChangeClipTimeWhenEmpty; // 0x80(0x10)
	struct FGameplayAttributeData WeaponChangeClipOneByOneTime; // 0x90(0x10)
	struct FGameplayAttributeData WeaponChangeClipTimeRate; // 0xa0(0x10)
	char pad_B0[0x30]; // 0xb0(0x30)

	void OnRep_WeaponChangeClipTimeRate(struct FGameplayAttributeData& OldData); // Function GPWeaponRuntime.GPWeaponAttributeSetWeaponChangeClip.OnRep_WeaponChangeClipTimeRate // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponAttributeSetWeaponDamage
// Size: 0x120 (Inherited: 0x50)
class UGPWeaponAttributeSetWeaponDamage : public UGPAttributeSetBase {
public:

	struct FGameplayAttributeData Damage; // 0x50(0x10)
	struct FGameplayAttributeData VehicleDamage; // 0x60(0x10)
	struct FGameplayAttributeData HealthDamage; // 0x70(0x10)
	struct FGameplayAttributeData CriticalHitDamageRate; // 0x80(0x10)
	struct FGameplayAttributeData CriticalHitRate; // 0x90(0x10)
	struct FGameplayAttributeData HeadDamageRate; // 0xa0(0x10)
	struct FGameplayAttributeData ThoraxDamageRate; // 0xb0(0x10)
	struct FGameplayAttributeData ThoraxUpperDamageRate; // 0xc0(0x10)
	struct FGameplayAttributeData LegDamageRate; // 0xd0(0x10)
	struct FGameplayAttributeData LegUpperDamageRate; // 0xe0(0x10)
	struct FGameplayAttributeData ArmDamageRate; // 0xf0(0x10)
	struct FGameplayAttributeData ArmUpperDamageRate; // 0x100(0x10)
	struct FGameplayAttributeData ArmorDamage; // 0x110(0x10)

	void OnRep_HeadDamageRate(struct FGameplayAttributeData& OldData); // Function GPWeaponRuntime.GPWeaponAttributeSetWeaponDamage.OnRep_HeadDamageRate // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponAttributeSetWeaponMovement
// Size: 0x58 (Inherited: 0x50)
class UGPWeaponAttributeSetWeaponMovement : public UGPAttributeSetBase {
public:

	float WeaponMovingScale; // 0x50(0x04)
	float WeaponFiringMovingScale; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponAttributeSetWeaponPerk
// Size: 0x80 (Inherited: 0x50)
class UGPWeaponAttributeSetWeaponPerk : public UGPAttributeSetBase {
public:

	float CanEquipPerk; // 0x50(0x04)
	float PerkCost; // 0x54(0x04)
	float PerkDuability; // 0x58(0x04)
	float ArmorPenetrate; // 0x5c(0x04)
	float PerkLevel; // 0x60(0x04)
	char pad_64[0x1c]; // 0x64(0x1c)

	void OnRep_Penetrate(float OldValue); // Function GPWeaponRuntime.GPWeaponAttributeSetWeaponPerk.OnRep_Penetrate // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	struct UGPWeaponManagerComponent* STATIC_GetWeaponManagerComponent(struct AActor* Actor); // Function GPWeaponRuntime.GPWeaponBlueprintLibrary.GetWeaponManagerComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponBulletDefensorInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponBulletDefensorInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponBulletDetectorInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponBulletDetectorInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponBulletManager
// Size: 0x270 (Inherited: 0x100)
class UGPWeaponBulletManager : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	struct ACHARACTER* CharacterOwner; // 0x108(0x08)
	struct TArray<struct FBulletInfo> BulletInfos; // 0x110(0x10)
	struct FRepBulletInfoArray RepBulletInfoArray; // 0x120(0x118)
	float CheckInterval; // 0x238(0x04)
	int32_t BulletInfosMaxSize; // 0x23c(0x04)
	char pad_240[0x30]; // 0x240(0x30)

	void CreateBulletAppearanceByFastTArray(); // Function GPWeaponRuntime.GPWeaponBulletManager.CreateBulletAppearanceByFastTArray // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponBulletSystem
// Size: 0x5e8 (Inherited: 0x378)
class AGPWeaponBulletSystem : public ALevelSubsystem {
public:

	char pad_378[0x48]; // 0x378(0x48)
	struct FWorldActorPool BulletPool; // 0x3c0(0x68)
	struct FWorldActorPool BulletEffectPool; // 0x428(0x68)
	struct TMap<uint64_t, struct AGPProjectile*> ProjectileMap; // 0x490(0x50)
	char pad_4E0[0x108]; // 0x4e0(0x108)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponChangeClipExecution
// Size: 0x48 (Inherited: 0x48)
class UGPWeaponChangeClipExecution : public UGameplayEffectExecutionCalculation {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponComponentBase
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponComponentBase : public UInterface {
public:


	void WeaponDetaching(bool bHangToBack, enum class EWeaponSwitchType SwitchType); // Function GPWeaponRuntime.GPWeaponComponentBase.WeaponDetaching // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponCostAmmoExecution
// Size: 0x48 (Inherited: 0x48)
class UGPWeaponCostAmmoExecution : public UGameplayEffectExecutionCalculation {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDamageSettings
// Size: 0x88 (Inherited: 0x30)
class UGPWeaponDamageSettings : public UObject {
public:

	struct TArray<struct FGPWeaponDamageBodyPartInfo> RadiusDamageBodyParts; // 0x30(0x10)
	struct TArray<struct FGPWeaponDamageBodyPartInfo> RadiusDamageBodyPartsForVehicle; // 0x40(0x10)
	float RadiusDamageOffsetAloneWithNormal; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	int64_t KillDamagePhysicalValueId; // 0x58(0x08)
	int64_t PointDamageValidationRuleId; // 0x60(0x08)
	int64_t RadialDamageValidationRuleId; // 0x68(0x08)
	int64_t PhysicsDamageValidationRuleId; // 0x70(0x08)
	/*struct TArray<struct TSoftClassPtr<UObject>>*/char GodPawns[0x10]; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentAnimInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponDataComponentAnimInterface : public UInterface {
public:


	bool IsZooming(); // Function GPWeaponRuntime.GPWeaponDataComponentAnimInterface.IsZooming // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponDataComponentAppearanceInterface : public UInterface {
public:


	bool ShouldSpawn3P(); // Function GPWeaponRuntime.GPWeaponDataComponentAppearanceInterface.ShouldSpawn3P // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentFiringInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponDataComponentFiringInterface : public UInterface {
public:


	void UpdateSprintAutoDelayFireOnceInfo(bool InAutoFire); // Function GPWeaponRuntime.GPWeaponDataComponentFiringInterface.UpdateSprintAutoDelayFireOnceInfo // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponDataComponentOverHeatInterface : public UInterface {
public:


	void WeaponTickHeat(float DeltaTime); // Function GPWeaponRuntime.GPWeaponDataComponentOverHeatInterface.WeaponTickHeat // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentStateInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponDataComponentStateInterface : public UInterface {
public:


	void SetCurrentStateType(enum class EGPWeaponStateType InStateType); // Function GPWeaponRuntime.GPWeaponDataComponentStateInterface.SetCurrentStateType // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentZoomInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponDataComponentZoomInterface : public UInterface {
public:


	bool IsZooming(); // Function GPWeaponRuntime.GPWeaponDataComponentZoomInterface.IsZooming // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponDataInterface : public UInterface {
public:


	bool IsSupportComboMeleeAttack(); // Function GPWeaponRuntime.GPWeaponDataInterface.IsSupportComboMeleeAttack // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.WeaponOptimizeHelper
// Size: 0x30 (Inherited: 0x30)
class UWeaponOptimizeHelper : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponBlackboard
// Size: 0x80 (Inherited: 0x30)
class UGPWeaponBlackboard : public UObject {
public:

	char pad_30[0x38]; // 0x30(0x38)
	struct TArray<enum class EGPWeaponFiringMode> SupportedFiringModes; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDelegates
// Size: 0xf0 (Inherited: 0x38)
class UGPWeaponDelegates : public UWorldSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnServerBeforeMakeDamageGlobal[0x10]; // 0x38(0x10)
	char pad_48[0xa8]; // 0x48(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireAssistedAimingBase
// Size: 0x48 (Inherited: 0x30)
class UGPWeaponFireAssistedAimingBase : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UGPWeaponDataComponentFiring* DCFiring; // 0x38(0x08)
	struct UGPWeaponFuncComponentFiring* FCFiring; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireModeInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponFireModeInterface : public UInterface {
public:


	float GetProjectileInitSpeed(); // Function GPWeaponRuntime.GPWeaponFireModeInterface.GetProjectileInitSpeed // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireRecoilBase
// Size: 0x48 (Inherited: 0x30)
class UGPWeaponFireRecoilBase : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UGPWeaponDataComponentFiring* DCFiring; // 0x38(0x08)
	struct UGPWeaponFuncComponentFiring* FCFiring; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireSocket
// Size: 0x80 (Inherited: 0x30)
class UGPWeaponFireSocket : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)
	/*struct TScriptInterface<IGPWeaponProxyInterface>*/char GPWeaponProxy[0x10]; // 0x40(0x10)
	/*struct TScriptInterface<IGPWeaponDataComponentAppearanceInterface>*/char GPWeaponAppearance[0x10]; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
	bool bFireSocketInfoDirty; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireSocketInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponFireSocketInterface : public UInterface {
public:


	void MarkFireSocketInfoDirty(); // Function GPWeaponRuntime.GPWeaponFireSocketInterface.MarkFireSocketInfoDirty // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireSpreadOwnerInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponFireSpreadOwnerInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireSpreadBase
// Size: 0x48 (Inherited: 0x30)
class UGPWeaponFireSpreadBase : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	/*struct TScriptInterface<IGPWeaponFireSpreadOwnerInterface>*/char GPWeaponFireSpreadOwnerInterface[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSM
// Size: 0x338 (Inherited: 0x278)
class UGPWeaponFSM : public UGPFSMBase {
public:

	char pad_278[0x68]; // 0x278(0x68)
	struct TMap<enum class EGPWeaponStateType, struct UGPFSMStateBase*> StateTypeAndInstanceMap; // 0x2e0(0x50)
	struct UGPWeaponDataComponentStateFSM* DCState; // 0x330(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.FireModeProxy
// Size: 0x98 (Inherited: 0x30)
class UFireModeProxy : public UObject {
public:

	char pad_30[0x60]; // 0x30(0x60)
	struct UGPWeaponFSMStateFiring* StateFiring; // 0x90(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.BowFireModeProxy
// Size: 0x90 (Inherited: 0x30)
class UBowFireModeProxy : public UObject {
public:

	char pad_30[0x50]; // 0x30(0x50)
	struct UGPWeaponFSMStateFiring_Bow* StateFiring; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.ChargeFireModeProxy
// Size: 0x90 (Inherited: 0x30)
class UChargeFireModeProxy : public UObject {
public:

	char pad_30[0x50]; // 0x30(0x50)
	struct UGPWeaponFSMStateFiring_ChargeGun* StateFiring; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.LauncherFireModeProxy
// Size: 0xc8 (Inherited: 0x30)
class ULauncherFireModeProxy : public UObject {
public:

	char pad_30[0x90]; // 0x30(0x90)
	struct UGPWeaponFSMStateFiring_Launcher* StateFiring; // 0xc0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponFuncComponentAppearanceInterface : public UInterface {
public:


	void UpdateWeaponMeshVisibility(); // Function GPWeaponRuntime.GPWeaponFuncComponentAppearanceInterface.UpdateWeaponMeshVisibility // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFuncComponentFiringInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponFuncComponentFiringInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponGlobals
// Size: 0x3e8 (Inherited: 0x30)
class UGPWeaponGlobals : public UObject {
public:

	enum class ECollisionChannel WeaponTraceChannel; // 0x30(0x01)
	enum class ECollisionChannel ProjectileTraceChannel; // 0x31(0x01)
	enum class ECollisionChannel WeaponAmbientTraceChannel; // 0x32(0x01)
	enum class ECollisionChannel FireFlameTraceChannel; // 0x33(0x01)
	enum class ECollisionChannel RadialDamageChannel; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FName ProjectileProfileName; // 0x38(0x08)
	struct FName MeleeFireStartBoneName; // 0x40(0x08)
	struct TMap<enum class EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> WeaponEquipSockets; // 0x48(0x50)
	struct TMap<enum class EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> WeaponAttachSockets; // 0x98(0x50)
	struct TMap<enum class EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> WeaponAttachSocketsWithBag; // 0xe8(0x50)
	struct TMap<char, struct FWeaponSocketItem> WeaponAttachSocketsForWeaponType; // 0x138(0x50)
	struct TMap<enum class EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> SecondaryWeaponEquipSockets; // 0x188(0x50)
	struct TMap<enum class EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> SecondaryWeaponAttachSockets; // 0x1d8(0x50)
	struct TMap<enum class EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> SecondaryWeaponAttachSocketsWithBag; // 0x228(0x50)
	struct TMap<char, struct FWeaponSocketItem> SecondaryWeaponAttachSocketsForWeaponType; // 0x278(0x50)
	bool bAssistedAimingEnable; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	int32_t AssistedAimingTargetCapsuleHalfHeight; // 0x2cc(0x04)
	int32_t AssistedAimingTargetCapsuleRadius; // 0x2d0(0x04)
	bool bAimAssistorEnable; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	int32_t AimAssistorLineTraceMaxNum; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct TArray<struct FName> BasicFireSocketNames; // 0x2e0(0x10)
	struct TArray<struct FName> ExtraFireSocketNames; // 0x2f0(0x10)
	struct UClass* BulletHideAnimationBPClass; // 0x300(0x08)
	char BulletHideBulletVisibleCount; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct TArray<enum class EGPWeaponInnerEvent> ShouldBlendOutEventList; // 0x310(0x10)
	float BlendOutAnimTimeSeconds; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	uint64_t EmptyHandRecId; // 0x328(0x08)
	uint64_t TestFullWeaponRecId; // 0x330(0x08)
	struct TArray<struct UClass*> ObjectPoolPreloadProjectileClasss; // 0x338(0x10)
	struct TArray<struct UClass*> ObjectPoolPreloadProjectileEffectClasss; // 0x348(0x10)
	int32_t ObjectPoolNum; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct TArray<struct UClass*> ObjectPoolPreload3PSimulateProjectileClasss; // 0x360(0x10)
	int32_t ObjectPoolNumOf3PSimulateProjectile; // 0x370(0x04)
	float FakeBulletFitDistanceSquared; // 0x374(0x04)
	float FakeBulletFitDirectionDot; // 0x378(0x04)
	float FakeBulletFitLerpTime; // 0x37c(0x04)
	float PredictionFudgeFactor; // 0x380(0x04)
	float MaxPredictionPing; // 0x384(0x04)
	struct FName ThrowAttachableTag; // 0x388(0x08)
	struct FName ForbidThrowWeaponAttachTag; // 0x390(0x08)
	/*struct TMap<uint64_t, struct TSoftClassPtr<UObject>>*/char CommonWeaponBPClassMap[0x50]; // 0x398(0x50)

	void STATIC_SetAssistedAimingEnable(bool Enable); // Function GPWeaponRuntime.GPWeaponGlobals.SetAssistedAimingEnable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponImpactSettings
// Size: 0x160 (Inherited: 0x30)
class UGPWeaponImpactSettings : public UObject {
public:

	/*struct TArray<struct TSoftClassPtr<UObject>>*/char AttachImpactActors[0x10]; // 0x30(0x10)
	struct TArray<struct FString> AttachImpactActorsName; // 0x40(0x10)
	struct TArray<struct FGPPhysicalSurfaceGroupInfo> SurfaceGroups; // 0x50(0x10)
	struct TArray<enum class EPhysicalSurface> NoRotateSurfaces; // 0x60(0x10)
	struct TMap<enum class EPhysicalSurface, struct FGPPhysicalSurfaceAtlasInfo> SurfaceAtlasMap; // 0x70(0x50)
	/*struct TSet<enum class EPhysicalSurface>*/char ForceUseMeshTypeDecalSurfaces[0x50]; // 0xc0(0x50)
	struct FSoftObjectPath DecalMeshPath; // 0x110(0x18)
	/*struct TSoftClassPtr<UObject>*/char DecalComponentClass[0x28]; // 0x128(0x28)
	struct FName OverlapImpactEffectTag; // 0x150(0x08)
	struct UStaticMesh* DecalMesh; // 0x158(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponInterface : public UInterface {
public:


	void SetWeaponBipodDeploy(bool IsCanWeaponBipodDeploy); // Function GPWeaponRuntime.GPWeaponInterface.SetWeaponBipodDeploy // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponManagerComponent
// Size: 0x118 (Inherited: 0x100)
class UGPWeaponManagerComponent : public UActorComponent {
public:

	char pad_100[0x18]; // 0x100(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponManagerInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponManagerInterface : public UInterface {
public:


	bool IsWeaponExist(struct FWeaponIdentity& InWeaponIdentity); // Function GPWeaponRuntime.GPWeaponManagerInterface.IsWeaponExist // (Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponOwnerInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponOwnerInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponPhysicsInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponPhysicsInterface : public UInterface {
public:


	bool IsPhysicsAssetValidateForWeaponTrace(struct UPhysicsAsset* PhysicsAsset); // Function GPWeaponRuntime.GPWeaponPhysicsInterface.IsPhysicsAssetValidateForWeaponTrace // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponProxyInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponProxyInterface : public UInterface {
public:


	void ThirdPersonStateGuard(); // Function GPWeaponRuntime.GPWeaponProxyInterface.ThirdPersonStateGuard // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponReplicateComponent
// Size: 0x580 (Inherited: 0x100)
class UGPWeaponReplicateComponent : public UActorComponent {
public:

	char pad_100[0x18]; // 0x100(0x18)
	struct ACHARACTER* CharacterOwner; // 0x118(0x08)
	struct FGPWeaponRepDataArray WeaponReplicatedDataArray; // 0x120(0x10)
	struct FGPWeaponRepDataArray MutableWeaponReplicatedDataArray; // 0x130(0x10)
	struct TArray<struct FGPWeaponRepInfoPair> CurrActiveWeapInfoArr; // 0x140(0x10)
	struct FGPWeaponRepInfoPairFastArray WeapInfoArray; // 0x150(0x118)
	struct FGPWeaponEventRepInfoFastArray WeapEventArray; // 0x268(0x118)
	struct TMap<char, struct FSlotActiveWeaponInfo> SlotActiveWeaponInfoMap; // 0x380(0x50)
	/*struct TScriptInterface<IGPWeaponInterface>*/char EmptyHandAttachment[0x10]; // 0x3d0(0x10)
	struct FWeaponFrameNumber WeaponFrameNumber; // 0x3e0(0x10)
	/*struct TMap<struct FWeaponIdentity, struct TScriptInterface<IGPWeaponInterface>>*/char WeaponAttachmentMap[0x50]; // 0x3f0(0x50)
	/*struct TArray<struct TScriptInterface<IGPWeaponInterface>>*/char GPWeaponAttachmentList[0x10]; // 0x440(0x10)
	struct TMap<struct FWeaponIdentity, uint32_t> WeaponRepEventLastFrameMap; // 0x450(0x50)
	char pad_4A0[0x10]; // 0x4a0(0x10)
	struct TArray<struct UObject*> WeaponAttachmentRefHolderList; // 0x4b0(0x10)
	char pad_4C0[0x28]; // 0x4c0(0x28)
	struct TArray<struct FGPWeaponHitImpactRepInfo> RepHitInfoList; // 0x4e8(0x10)
	char pad_4F8[0x8]; // 0x4f8(0x08)
	struct TArray<struct FGPWeaponEventRepInfo> NextFrameWeaponRepInfo; // 0x500(0x10)
	char pad_510[0x70]; // 0x510(0x70)

	void UpdateOwnerClientAttachments(); // Function GPWeaponRuntime.GPWeaponReplicateComponent.UpdateOwnerClientAttachments // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponStateBase
// Size: 0x4b0 (Inherited: 0x498)
class UGPWeaponStateBase : public UGPAbilityBase {
public:

	char pad_498[0x18]; // 0x498(0x18)

	bool SetAttributeSetFloatValue(struct FGameplayAttribute Attribute, float Value); // Function GPWeaponRuntime.GPWeaponStateBase.SetAttributeSetFloatValue // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponThrowableProjectileMovementComponent
// Size: 0x220 (Inherited: 0x220)
class UGPWeaponThrowableProjectileMovementComponent : public UProjectileMovementComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponTickInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponTickInterface : public UInterface {
public:


	void WeaponTick(float DeltaSecond); // Function GPWeaponRuntime.GPWeaponTickInterface.WeaponTick // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponTickActorInterface
// Size: 0x30 (Inherited: 0x30)
class UGPWeaponTickActorInterface : public UInterface {
public:


	void WeaponTick(float DeltaSecond); // Function GPWeaponRuntime.GPWeaponTickActorInterface.WeaponTick // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.WeaponStateTimeLineOwnerInterface
// Size: 0x30 (Inherited: 0x30)
class UWeaponStateTimeLineOwnerInterface : public UInterface {
public:


	bool ServerVerifyStateFrameImp(struct FStateFrame& WSFrame, float InCheckCode); // Function GPWeaponRuntime.WeaponStateTimeLineOwnerInterface.ServerVerifyStateFrameImp // (Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.WeaponLogInterface
// Size: 0x30 (Inherited: 0x30)
class UWeaponLogInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.WeaponObInterface
// Size: 0x30 (Inherited: 0x30)
class UWeaponObInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.ReplicatedProjectileMovementComponent
// Size: 0x438 (Inherited: 0x220)
class UReplicatedProjectileMovementComponent : public UProjectileMovementComponent {
public:

	char pad_220[0x8]; // 0x220(0x08)
	struct FHitResult StopHitResult; // 0x228(0x88)
	struct FRepProjectileTrajectory RepTrajectoryData; // 0x2b0(0x20)
	char pad_2D0[0x28]; // 0x2d0(0x28)
	struct FProjectileTrajectory LocalProjectileTrajectory; // 0x2f8(0x48)
	struct FProjectileTrajectory RemoteProjectileTrajectory; // 0x340(0x48)
	struct FProjectileTrajectoryItem TrajectoryItemTolerant; // 0x388(0x2c)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	/*struct TSet<char>*/char TrajectoryFlagBlackSet[0x50]; // 0x3b8(0x50)
	bool bMoveByOwner; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	int32_t AllowMaxStuckedCount; // 0x40c(0x04)
	float StuckedHitTimeError; // 0x410(0x04)
	char pad_414[0x24]; // 0x414(0x24)

	void OnRep_StopHitResult(); // Function GPWeaponRuntime.ReplicatedProjectileMovementComponent.OnRep_StopHitResult // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPProjectile
// Size: 0x478 (Inherited: 0x378)
class AGPProjectile : public AActor {
public:

	char pad_378[0x18]; // 0x378(0x18)
	struct UReplicatedProjectileMovementComponent* ProjectileMovementComponent; // 0x390(0x08)
	struct USceneComponent* ViewComponent; // 0x398(0x08)
	struct UProjectileViewMovementComponent* ViewMovementComponent; // 0x3a0(0x08)
	uint64_t Guid; // 0x3a8(0x08)
	uint64_t ReplicatedTime; // 0x3b0(0x08)
	struct FProjectileConfig ProjectileConfig; // 0x3b8(0x28)
	struct FProjectileRuntimeContext RuntimeContext; // 0x3e0(0x38)
	char pad_418[0x19]; // 0x418(0x19)
	bool bInterpedByADSV2; // 0x431(0x01)
	char pad_432[0x6]; // 0x432(0x06)
	struct TArray<struct FProjectileEvent> ReplicatedEvents; // 0x438(0x10)
	struct FProjectileTimeProxy ProjectileTimeProxy; // 0x448(0x2c)
	char pad_474[0x4]; // 0x474(0x04)

	void OnProjectileStop(struct FHitResult& ImpactResult); // Function GPWeaponRuntime.GPProjectile.OnProjectileStop // (Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponComponentImplement
// Size: 0x160 (Inherited: 0x100)
class UGPWeaponComponentImplement : public UActorComponent {
public:

	char pad_100[0x38]; // 0x100(0x38)
	struct ACHARACTER* CharacterOwner; // 0x138(0x08)
	/*struct TScriptInterface<IGPWeaponInterface>*/char WeaponOwner[0x10]; // 0x140(0x10)
	/*struct TScriptInterface<IWeaponObInterface>*/char WeaponOwnerOb[0x10]; // 0x150(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponViewComponentBase
// Size: 0x158 (Inherited: 0x100)
class UGPWeaponViewComponentBase : public UActorComponent {
public:

	char pad_100[0x28]; // 0x100(0x28)
	/*struct TScriptInterface<IGPWeaponProxyInterface>*/char GPWeaponProxy[0x10]; // 0x128(0x10)
	enum class EGPComponentSpawnCondition CompSpawnCondition; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct ACHARACTER* CharacterOwner; // 0x140(0x08)
	/*struct TScriptInterface<IWeaponObInterface>*/char WeaponObInterface[0x10]; // 0x148(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireModeParamsBase
// Size: 0xd0 (Inherited: 0x30)
class UGPWeaponFireModeParamsBase : public UObject {
public:

	char ShotsInOneBullet; // 0x30(0x01)
	char AmmoCost; // 0x31(0x01)
	char MaxValidBulletNumPerShot; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	struct FBulletModeConfig BulletModeConfig; // 0x34(0x18)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FWeaponBulletBaseInitParam BulletBaseParam; // 0x50(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireModeBase
// Size: 0xe8 (Inherited: 0x30)
class UGPWeaponFireModeBase : public UObject {
public:

	char pad_30[0x80]; // 0x30(0x80)
	/*struct TScriptInterface<IGPWeaponInterface>*/char WeaponOwner[0x10]; // 0xb0(0x10)
	struct UGPWeaponDataComponentFiring* DCFiring; // 0xc0(0x08)
	struct UGPWeaponFuncComponentFiring* FCFiring; // 0xc8(0x08)
	struct UGPWeaponFireModeParamsBase* Params; // 0xd0(0x08)
	struct UGPWeaponAttributeSetWeaponDamage* GPWeaponAttributeSetWeaponDamage; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)

	void OnProjectileHit(uint64_t BulletGuid, struct AGPWeaponBulletBase* Bullet, struct FHitResult& HitResult); // Function GPWeaponRuntime.GPWeaponFireModeBase.OnProjectileHit // (Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateBase
// Size: 0xb0 (Inherited: 0x68)
class UGPWeaponFSMStateBase : public UGPFSMStateBase {
public:

	struct FName BeginEventName; // 0x68(0x08)
	struct FName FinishEventName; // 0x70(0x08)
	struct FName SkipEventName; // 0x78(0x08)
	struct UGPWeaponFSM* FSMWeapon; // 0x80(0x08)
	/*struct TScriptInterface<IGPWeaponInterface>*/char WeaponOwner[0x10]; // 0x88(0x10)
	/*struct TScriptInterface<IGPWeaponDataInterface>*/char DCData[0x10]; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)

	void OnPredictFinishTimeReach(); // Function GPWeaponRuntime.GPWeaponFSMStateBase.OnPredictFinishTimeReach // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponProjectileMovementComponent
// Size: 0x5c0 (Inherited: 0x438)
class UGPWeaponProjectileMovementComponent : public UReplicatedProjectileMovementComponent {
public:

	float AirDragFactor; // 0x438(0x04)
	float WallBounciness; // 0x43c(0x04)
	float CeilingBounciness; // 0x440(0x04)
	float CharacterBounciness; // 0x444(0x04)
	float CharacterFriction; // 0x448(0x04)
	int32_t MaxCharacterBounceTimes; // 0x44c(0x04)
	bool bResetLocationOnServerStop; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	float ZeroGravityDistance; // 0x454(0x04)
	bool bMoveCollideWithPawn; // 0x458(0x01)
	bool bTraceCharacterMesh; // 0x459(0x01)
	bool bMoveCollideWithVehicle; // 0x45a(0x01)
	bool bFixedMoveEnable; // 0x45b(0x01)
	bool bMoveComponentSimple; // 0x45c(0x01)
	bool bTraceCompolex; // 0x45d(0x01)
	bool bUseAsyncTrace; // 0x45e(0x01)
	bool bComponentSweepByWeaponChannel; // 0x45f(0x01)
	bool bCheckInteruptHit; // 0x460(0x01)
	bool bShouldBounceOnCharacter; // 0x461(0x01)
	char pad_462[0xe]; // 0x462(0x0e)
	bool bAsyncIsValid; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	float CurrentMovementDeltaTime; // 0x474(0x04)
	struct FVector CurrentMoveDelta; // 0x478(0x0c)
	float LeftNoGravityTime; // 0x484(0x04)
	float NoGravityTime; // 0x488(0x04)
	char pad_48C[0x134]; // 0x48c(0x134)

	void SetInitFlyingInfo(struct FVector InFlyDir, float InInitSpeed, float InZeroDistance); // Function GPWeaponRuntime.GPWeaponProjectileMovementComponent.SetInitFlyingInfo // (Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponBulletBase
// Size: 0x500 (Inherited: 0x478)
class AGPWeaponBulletBase : public AGPProjectile {
public:

	struct FWeaponBulletBaseInitParam BulletBaseParam; // 0x478(0x80)
	char pad_4F8[0x8]; // 0x4f8(0x08)

	struct AActor* GetCharacterOwner(); // Function GPWeaponRuntime.GPWeaponBulletBase.GetCharacterOwner // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentBase
// Size: 0x5f0 (Inherited: 0x160)
class UGPWeaponDataComponentBase : public UGPWeaponComponentImplement {
public:

	struct TArray<struct FName> ReplicatedNameArray; // 0x160(0x10)
	struct TArray<struct FName> MutableReplicatedNameArray; // 0x170(0x10)
	struct TMap<struct FName, enum class EWeaponRepCondition> RepConditions; // 0x180(0x50)
	/*struct TSet<struct FName>*/char CacheRepBlackboards[0x50]; // 0x1d0(0x50)
	char pad_220[0x3d0]; // 0x220(0x3d0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFuncComponentBase
// Size: 0x168 (Inherited: 0x160)
class UGPWeaponFuncComponentBase : public UGPWeaponComponentImplement {
public:

	enum class EGPComponentSpawnCondition CompSpawnCondition; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentAnim
// Size: 0x160 (Inherited: 0x158)
class UGPWeaponDataComponentAnim : public UGPWeaponViewComponentBase {
public:

	char pad_158[0x8]; // 0x158(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentAppearance
// Size: 0x550 (Inherited: 0x158)
class UGPWeaponDataComponentAppearance : public UGPWeaponViewComponentBase {
public:

	char pad_158[0x8]; // 0x158(0x08)
	struct FGPWeaponMesh MeshForFirstPerson; // 0x160(0xb0)
	struct FGPWeaponMesh MeshForThirdPerson; // 0x210(0xb0)
	struct FGPWeaponMesh MeshSecondaryForFirstPerson; // 0x2c0(0xb0)
	struct FGPWeaponMesh MeshSecondaryForThirdPerson; // 0x370(0xb0)
	bool bAttachWeaponToCharacter; // 0x420(0x01)
	enum class EWeaponOverrideUseAttachParentBound OverrideUseAttachParentBound; // 0x421(0x01)
	bool bSpawn3P; // 0x422(0x01)
	char pad_423[0x1]; // 0x423(0x01)
	struct FRotator MeshRotator; // 0x424(0x0c)
	struct FVector MeshLocation; // 0x430(0x0c)
	struct FVector2D CollisionSize; // 0x43c(0x08)
	float WeaponScale; // 0x444(0x04)
	struct USkeletalMeshComponent* WeaponMainMeshComp; // 0x448(0x08)
	struct USkeletalMeshComponent* WeaponSecondaryMeshComp; // 0x450(0x08)
	struct UMeshComponent* WeaponBaseMeshComp; // 0x458(0x08)
	struct UMeshComponent* WeaponSecondaryBaseMeshComp; // 0x460(0x08)
	char pad_468[0x38]; // 0x468(0x38)
	bool bReloadAttachPointToIKGun; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct UAnimSequence* IKHandPose; // 0x4a8(0x08)
	struct UAnimSequence* IKRightHandPose; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)
	struct TMap<struct USkeletalMeshComponent*, struct FGPWeaponBitTag> HiddenMap; // 0x4c0(0x50)
	char pad_510[0x8]; // 0x510(0x08)
	/*struct TScriptInterface<IGPWeaponFireSocketInterface>*/char IGPWeaponFireSocket[0x10]; // 0x518(0x10)
	char pad_528[0x28]; // 0x528(0x28)

	bool IsMeshHiddenPropagateToChildren(); // Function GPWeaponRuntime.GPWeaponDataComponentAppearance.IsMeshHiddenPropagateToChildren // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFuncComponentAnim
// Size: 0x160 (Inherited: 0x158)
class UGPWeaponFuncComponentAnim : public UGPWeaponViewComponentBase {
public:

	struct UGPWeaponDataComponentAnim* DCAnim; // 0x158(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFuncComponentAppearance
// Size: 0x220 (Inherited: 0x158)
class UGPWeaponFuncComponentAppearance : public UGPWeaponViewComponentBase {
public:

	char pad_158[0x8]; // 0x158(0x08)
	/*struct TScriptInterface<IGPWeaponDataComponentAppearanceInterface>*/char DCAppearance[0x10]; // 0x160(0x10)
	char pad_170[0x9c]; // 0x170(0x9c)
	bool bEnableFirstPersonThrowableWeaponTextureFullMipLevel; // 0x20c(0x01)
	char pad_20D[0x3]; // 0x20d(0x03)
	struct TArray<struct UTexture*> CacheForceKeepFullMipLevels; // 0x210(0x10)

	void UnSetForceKeepFullMipLevels(); // Function GPWeaponRuntime.GPWeaponFuncComponentAppearance.UnSetForceKeepFullMipLevels // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponViewComponentImpact
// Size: 0x158 (Inherited: 0x158)
class UGPWeaponViewComponentImpact : public UGPWeaponViewComponentBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireModeParamsInstantHit
// Size: 0xe0 (Inherited: 0xd0)
class UGPWeaponFireModeParamsInstantHit : public UGPWeaponFireModeParamsBase {
public:

	float BulletBeginDropDistance; // 0xd0(0x04)
	float DistanceBulletDropZ; // 0xd4(0x04)
	float WeaponTraceRange; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireModeParamsPhysicSimulate
// Size: 0x118 (Inherited: 0xd0)
class UGPWeaponFireModeParamsPhysicSimulate : public UGPWeaponFireModeParamsBase {
public:

	struct UClass* ProjectileClass; // 0xd0(0x08)
	struct UClass* LaserPointerProjectileClass; // 0xd8(0x08)
	struct FWeaponBulletProjectileInitParam BulletProjectileParam; // 0xe0(0x28)
	struct FVector FixedStartFireDir; // 0x108(0x0c)
	char pad_114[0x4]; // 0x114(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.WeaponFireModeParamsSpawnable
// Size: 0xf0 (Inherited: 0xd0)
class UWeaponFireModeParamsSpawnable : public UGPWeaponFireModeParamsBase {
public:

	struct FSoftObjectPath SpwanBPPath; // 0xd0(0x18)
	float ActiveTime; // 0xe8(0x04)
	bool SpawnActorInEndFire; // 0xec(0x01)
	bool HideWeaponMeshInFire; // 0xed(0x01)
	bool HideWeaponMeshInKeep; // 0xee(0x01)
	char pad_EF[0x1]; // 0xef(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireModeParamsThrowable
// Size: 0x220 (Inherited: 0xd0)
class UGPWeaponFireModeParamsThrowable : public UGPWeaponFireModeParamsBase {
public:

	struct UClass* ProjectileClass; // 0xd0(0x08)
	/*struct TSoftClassPtr<UObject>*/char ProjectileClassBP[0x28]; // 0xd8(0x28)
	struct FSoftObjectPath ProjectileMesh; // 0x100(0x18)
	/*struct TSoftClassPtr<UObject>*/char ProjectileAnimationBP[0x28]; // 0x118(0x28)
	float VelocityThrowHigh; // 0x140(0x04)
	float VelocityThrowLow; // 0x144(0x04)
	float GravityScale; // 0x148(0x04)
	bool bUseScreenPosFire; // 0x14c(0x01)
	bool bShouldBounce; // 0x14d(0x01)
	char pad_14E[0x2]; // 0x14e(0x02)
	struct FRotator RotationRate; // 0x150(0x0c)
	float Bounciness; // 0x15c(0x04)
	float WallBounciness; // 0x160(0x04)
	float CeilingBounciness; // 0x164(0x04)
	float Friction; // 0x168(0x04)
	float BounceVelocityStopLimited; // 0x16c(0x04)
	enum class EWeaponThrowableEffectType EffectType; // 0x170(0x01)
	enum class EWeaponThrowableExplosionType ExplosionType; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	float ExplosionSeconds; // 0x174(0x04)
	float ExplosionDurationSeconds; // 0x178(0x04)
	float DamageDistance; // 0x17c(0x04)
	float FullExplodeDamageDistance; // 0x180(0x04)
	bool KeepFireExcludeExplosionTime; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	float KeepFireExcludeExplosionDelayTime; // 0x188(0x04)
	float FadeOutTime; // 0x18c(0x04)
	bool bIsClientOnlyThrowConfig; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	float MinClientFakeLerpTime; // 0x194(0x04)
	float MaxClientFakeLerpTime; // 0x198(0x04)
	bool bIsClientFakeProjectileUseSocket; // 0x19c(0x01)
	bool bIsClientFakePreviewUseSocket; // 0x19d(0x01)
	char pad_19E[0x2]; // 0x19e(0x02)
	struct FName ClientFakeSocketName; // 0x1a0(0x08)
	float ThrowRotationPitchAddition; // 0x1a8(0x04)
	float ThrowLocationHorizontalAddition; // 0x1ac(0x04)
	float ThrowLocationVerticalAddition; // 0x1b0(0x04)
	float ThrowLocationDepthAddition; // 0x1b4(0x04)
	float ThrowLowRotationPitchAddition; // 0x1b8(0x04)
	float ThrowLowLocationHorizontalAddition; // 0x1bc(0x04)
	float ThrowLowLocationVerticalAddition; // 0x1c0(0x04)
	float ThrowPlusCharacterOwnerVelcoityFactor; // 0x1c4(0x04)
	float ThrowVelocityOwnerFactorForward; // 0x1c8(0x04)
	float ThrowVelocityOwnerFactorBack; // 0x1cc(0x04)
	float ThrowVelocityOwnerFactorRight; // 0x1d0(0x04)
	float ThrowVelocityOwnerFactorLeft; // 0x1d4(0x04)
	float ThrowVelocityOwnerFactorUp; // 0x1d8(0x04)
	float ThrowVelocityOwnerFactorDown; // 0x1dc(0x04)
	bool bReEquipInFireEnd; // 0x1e0(0x01)
	bool bEnablePreviewLine; // 0x1e1(0x01)
	char pad_1E2[0x6]; // 0x1e2(0x06)
	struct UClass* DrawActorClass; // 0x1e8(0x08)
	struct FVector LenScale; // 0x1f0(0x0c)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct UClass* PerviewActorClass; // 0x200(0x08)
	float PreviewNearDistance; // 0x208(0x04)
	float PreviewFarDistance; // 0x20c(0x04)
	float PreviewNearScale; // 0x210(0x04)
	float PreviewFarScale; // 0x214(0x04)
	bool DrawPreviewLine; // 0x218(0x01)
	bool DSValidateStartPos; // 0x219(0x01)
	char pad_21A[0x2]; // 0x21a(0x02)
	float DSValidateDSDistance; // 0x21c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireModeInstantHit
// Size: 0x160 (Inherited: 0xe8)
class UGPWeaponFireModeInstantHit : public UGPWeaponFireModeBase {
public:

	struct UGPWeaponFireModeParamsInstantHit* FireModeParams; // 0xe8(0x08)
	char pad_F0[0x68]; // 0xf0(0x68)
	bool bEnableADSCheck; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireModePhysicSimulate
// Size: 0x100 (Inherited: 0xe8)
class UGPWeaponFireModePhysicSimulate : public UGPWeaponFireModeBase {
public:

	struct UGPWeaponFireModeParamsPhysicSimulate* FireModeParams; // 0xe8(0x08)
	struct TWeakObjectPtr<struct AActor> ServerHomingTarget; // 0xf0(0x08)
	bool bApplyCharacterVelocityToFireTrace; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireModeSpawnable
// Size: 0x108 (Inherited: 0xe8)
class UGPWeaponFireModeSpawnable : public UGPWeaponFireModeBase {
public:

	struct UWeaponFireModeParamsSpawnable* FireModeParams; // 0xe8(0x08)
	struct UClass* SpawnAbleAsset; // 0xf0(0x08)
	bool bEnableCheckSpawnActor; // 0xf8(0x01)
	bool bEnableCheckUsedWeapon; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	float ActiveTime; // 0xfc(0x04)
	char pad_100[0x8]; // 0x100(0x08)

	void OnPreKeep(); // Function GPWeaponRuntime.GPWeaponFireModeSpawnable.OnPreKeep // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFireModeThrowable
// Size: 0x1f8 (Inherited: 0xe8)
class UGPWeaponFireModeThrowable : public UGPWeaponFireModeBase {
public:

	bool bOverrideFireLocation; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FVector OverrideFireLocation; // 0xec(0x0c)
	char pad_F8[0x18]; // 0xf8(0x18)
	struct UGPWeaponFireModeParamsThrowable* FireModeParams; // 0x110(0x08)
	char pad_118[0xa8]; // 0x118(0xa8)
	struct TArray<struct AActor*> DrawActorPool; // 0x1c0(0x10)
	char pad_1D0[0x20]; // 0x1d0(0x20)
	struct AActor* PreviewActor; // 0x1f0(0x08)

	bool ValidateFirePos(struct FVector& FireLocation, struct FVector& OutLocation); // Function GPWeaponRuntime.GPWeaponFireModeThrowable.ValidateFirePos // (Native|Protected|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateActive
// Size: 0x148 (Inherited: 0xb0)
class UGPWeaponFSMStateActive : public UGPWeaponFSMStateBase {
public:

	/*struct TScriptInterface<IGPWeaponDataComponentFiringInterface>*/char DCFiring[0x10]; // 0xb0(0x10)
	struct UGPWeaponFSM* WeaponFSM; // 0xc0(0x08)
	char pad_C8[0x80]; // 0xc8(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateAutoFireActive
// Size: 0xc8 (Inherited: 0xb0)
class UGPWeaponFSMStateAutoFireActive : public UGPWeaponFSMStateBase {
public:

	/*struct TScriptInterface<IGPWeaponDataComponentFiringInterface>*/char DCFiring[0x10]; // 0xb0(0x10)
	int32_t AutoFireCount; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateBreakableEquip
// Size: 0xc0 (Inherited: 0xb0)
class UGPWeaponFSMStateBreakableEquip : public UGPWeaponFSMStateBase {
public:

	char pad_B0[0x2]; // 0xb0(0x02)
	bool EndStateGotoFireState; // 0xb2(0x01)
	char pad_B3[0x1]; // 0xb3(0x01)
	struct FName BreakToFireStateName; // 0xb4(0x08)
	bool BreakImmediately; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateCancelPreFire
// Size: 0xb8 (Inherited: 0xb0)
class UGPWeaponFSMStateCancelPreFire : public UGPWeaponFSMStateBase {
public:

	char pad_B0[0x8]; // 0xb0(0x08)

	void OnCancelPreFire(); // Function GPWeaponRuntime.GPWeaponFSMStateCancelPreFire.OnCancelPreFire // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateChamber
// Size: 0xd0 (Inherited: 0xb0)
class UGPWeaponFSMStateChamber : public UGPWeaponFSMStateBase {
public:

	/*struct TScriptInterface<IGPWeaponDataComponentFiringInterface>*/char DCFiring[0x10]; // 0xb0(0x10)
	char pad_C0[0x10]; // 0xc0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateChangeClip
// Size: 0x108 (Inherited: 0xb0)
class UGPWeaponFSMStateChangeClip : public UGPWeaponFSMStateBase {
public:

	char pad_B0[0x10]; // 0xb0(0x10)
	/*struct TScriptInterface<IGPWeaponDataComponentFiringInterface>*/char DCFiring[0x10]; // 0xc0(0x10)
	char pad_D0[0x38]; // 0xd0(0x38)

	void ReloadAmmoDelay(); // Function GPWeaponRuntime.GPWeaponFSMStateChangeClip.ReloadAmmoDelay // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateConditionEquip
// Size: 0xc8 (Inherited: 0xb0)
class UGPWeaponFSMStateConditionEquip : public UGPWeaponFSMStateBase {
public:

	char pad_B0[0x2]; // 0xb0(0x02)
	bool bNeedSetFireEndBlackBoard; // 0xb2(0x01)
	char pad_B3[0x1]; // 0xb3(0x01)
	struct FName EndFire_BreakEvent_GotoStateName; // 0xb4(0x08)
	struct FName ManualExitGoToStateNameIfStopFire; // 0xbc(0x08)
	char pad_C4[0x4]; // 0xc4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateFiring
// Size: 0xe8 (Inherited: 0xb0)
class UGPWeaponFSMStateFiring : public UGPWeaponFSMStateBase {
public:

	struct UFireModeProxy* FireModeProxy; // 0xb0(0x08)
	char pad_B8[0x18]; // 0xb8(0x18)
	/*struct TScriptInterface<IGPWeaponDataComponentFiringInterface>*/char DCFiring[0x10]; // 0xd0(0x10)
	char pad_E0[0x8]; // 0xe0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateFiring_Bow
// Size: 0xf0 (Inherited: 0xb0)
class UGPWeaponFSMStateFiring_Bow : public UGPWeaponFSMStateBase {
public:

	char pad_B0[0x8]; // 0xb0(0x08)
	struct UBowFireModeProxy* FireModeProxy; // 0xb8(0x08)
	char pad_C0[0x10]; // 0xc0(0x10)
	/*struct TScriptInterface<IGPWeaponDataComponentFiringInterface>*/char DCFiring[0x10]; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateFiring_ChargeGun
// Size: 0xe8 (Inherited: 0xb0)
class UGPWeaponFSMStateFiring_ChargeGun : public UGPWeaponFSMStateBase {
public:

	struct UChargeFireModeProxy* FireModeProxy; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)
	/*struct TScriptInterface<IGPWeaponDataComponentFiringInterface>*/char DCFiring[0x10]; // 0xc8(0x10)
	char pad_D8[0x10]; // 0xd8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateFiring_Launcher
// Size: 0x118 (Inherited: 0xb0)
class UGPWeaponFSMStateFiring_Launcher : public UGPWeaponFSMStateBase {
public:

	struct TArray<float> FireAnimTimeList; // 0xb0(0x10)
	struct TArray<float> FireDelayTimeList; // 0xc0(0x10)
	float TimerTickRate; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct ULauncherFireModeProxy* FireModeProxy; // 0xd8(0x08)
	char pad_E0[0x18]; // 0xe0(0x18)
	/*struct TScriptInterface<IGPWeaponDataComponentFiringInterface>*/char DCFiring[0x10]; // 0xf8(0x10)
	char pad_108[0x4]; // 0x108(0x04)
	float Timer; // 0x10c(0x04)
	struct FTimerHandle TimerTickHandle; // 0x110(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStatePostFire
// Size: 0xc8 (Inherited: 0xb0)
class UGPWeaponFSMStatePostFire : public UGPWeaponFSMStateBase {
public:

	char pad_B0[0x18]; // 0xb0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStatePrefire
// Size: 0x108 (Inherited: 0xb0)
class UGPWeaponFSMStatePrefire : public UGPWeaponFSMStateBase {
public:

	/*struct TScriptInterface<IGPWeaponDataComponentFiringInterface>*/char DCFiring[0x10]; // 0xb0(0x10)
	char pad_C0[0x2b]; // 0xc0(0x2b)
	bool bCheckCanFire; // 0xeb(0x01)
	bool bCheckInputAutoFire; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FName ManualExitGoToStateNameIfStopFire; // 0xf0(0x08)
	struct FName ManualExitGoToStateNameIfCancelFire; // 0xf8(0x08)
	bool bBreakablePrefire; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateThrow
// Size: 0xd8 (Inherited: 0xb0)
class UGPWeaponFSMStateThrow : public UGPWeaponFSMStateBase {
public:

	bool bCheckCanFire; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float FireIntervalFactor; // 0xb4(0x04)
	struct FName PutWeaponToStateLater; // 0xb8(0x08)
	struct FName InavtiveEventName; // 0xc0(0x08)
	struct FName PutBackEventName; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPProjectileMovementComponent
// Size: 0x600 (Inherited: 0x5c0)
class UGPProjectileMovementComponent : public UGPWeaponProjectileMovementComponent {
public:

	int32_t MoveFixedFrame; // 0x5c0(0x04)
	float SingleFrameMoveMaxTime; // 0x5c4(0x04)
	int32_t SingleFrameMaxSimulateCount; // 0x5c8(0x04)
	char pad_5CC[0x14]; // 0x5cc(0x14)
	float LastMoveTime; // 0x5e0(0x04)
	int32_t MoveStepCount; // 0x5e4(0x04)
	char pad_5E8[0x18]; // 0x5e8(0x18)

	bool MoveStep(float StepTime); // Function GPWeaponRuntime.GPProjectileMovementComponent.MoveStep // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponBulletProjectile
// Size: 0x630 (Inherited: 0x500)
class AGPWeaponBulletProjectile : public AGPWeaponBulletBase {
public:

	char pad_500[0x8]; // 0x500(0x08)
	struct FWeaponBulletProjectileInitParam BulletProjectileParam; // 0x508(0x28)
	bool bActiveState; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct FWeaponBulletRuntimeContext BulletRuntime; // 0x538(0x58)
	char pad_590[0x8c]; // 0x590(0x8c)
	enum class EActorPoolMethod ActorPoolMethod; // 0x61c(0x01)
	char pad_61D[0x13]; // 0x61d(0x13)

	void ReleaseToPool(); // Function GPWeaponRuntime.GPWeaponBulletProjectile.ReleaseToPool // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponBulletThrowableProjectile
// Size: 0x730 (Inherited: 0x500)
class AGPWeaponBulletThrowableProjectile : public AGPWeaponBulletBase {
public:

	char pad_500[0x20]; // 0x500(0x20)
	struct UCapsuleComponent* BulletCollisionComp; // 0x520(0x08)
	struct UGPWeaponProjectileMovementComponent* BulletMovementComp; // 0x528(0x08)
	struct UClass* BulletMovementCompBP; // 0x530(0x08)
	float CatchupTimeFactor; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct URotatingMovementComponent* BulletRotatingComp; // 0x540(0x08)
	struct UStaticMeshComponent* BulletMeshComp; // 0x548(0x08)
	bool bMoveCollideWithPawn; // 0x550(0x01)
	bool bTraceCharacterMesh; // 0x551(0x01)
	bool bMoveCollideWithVehicle; // 0x552(0x01)
	bool bFixedMoveEnable; // 0x553(0x01)
	char pad_554[0x4]; // 0x554(0x04)
	struct AActor* WeaponOwnerActor; // 0x558(0x08)
	struct AActor* OwnerActor; // 0x560(0x08)
	char pad_568[0x1]; // 0x568(0x01)
	enum class EWeaponThrowableExplosionType ExplosionType; // 0x569(0x01)
	enum class EWeaponThrowableEffectType EffectType; // 0x56a(0x01)
	char pad_56B[0x1]; // 0x56b(0x01)
	float PreExplosionPredictBeginTime; // 0x56c(0x04)
	float ExplosionPredictBeginTime; // 0x570(0x04)
	float ExplosionSeconds; // 0x574(0x04)
	float ExplosionDurationSeconds; // 0x578(0x04)
	uint32_t WeaponUniqueID; // 0x57c(0x04)
	bool bCheckBulletDetectorIntercept; // 0x580(0x01)
	bool bShouldBounceOnCharacter; // 0x581(0x01)
	bool bSetFakeLifeSpan; // 0x582(0x01)
	char pad_583[0x1]; // 0x583(0x01)
	float FakeLifeSpan; // 0x584(0x04)
	bool bInteruptToDestroy; // 0x588(0x01)
	bool bIsPassSafeExplosionCheck; // 0x589(0x01)
	char pad_58A[0x1e]; // 0x58a(0x1e)
	struct FGPWeaponBulletThrowableProjectileInfo ProjectileInfo; // 0x5a8(0x60)
	char pad_608[0xc8]; // 0x608(0xc8)
	struct FVector CachedRelativeLocToBone; // 0x6d0(0x0c)
	char pad_6DC[0x1c]; // 0x6dc(0x1c)
	float MaxLifeTimeSeconds; // 0x6f8(0x04)
	enum class EGPThrowableWeaponTypeForADS ThrowableWeaponTypeForADS; // 0x6fc(0x01)
	char pad_6FD[0x7]; // 0x6fd(0x07)
	bool bIsNeedLerpClientMesh; // 0x704(0x01)
	char pad_705[0x3]; // 0x705(0x03)
	struct FVector LerpClientMeshOffset; // 0x708(0x0c)
	float LerpClientMeshStartTime; // 0x714(0x04)
	float LerpClientMeshDuration; // 0x718(0x04)
	int32_t SkillId; // 0x71c(0x04)
	int32_t SkillEntityID; // 0x720(0x04)
	char pad_724[0xc]; // 0x724(0x0c)

	void TryStartLerpClientMesh3P(); // Function GPWeaponRuntime.GPWeaponBulletThrowableProjectile.TryStartLerpClientMesh3P // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentAdapter
// Size: 0x5f0 (Inherited: 0x5f0)
class UGPWeaponDataComponentAdapter : public UGPWeaponDataComponentBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentCore
// Size: 0x730 (Inherited: 0x5f0)
class UGPWeaponDataComponentCore : public UGPWeaponDataComponentBase {
public:

	char pad_5F0[0x68]; // 0x5f0(0x68)
	struct UGPASC* WeaponAscCache; // 0x658(0x08)
	struct UGPWeaponAttributeSetWeaponChangeClip* AttributeSetWeaponChangeClip; // 0x660(0x08)
	struct UGPWeaponAttributeSetFireMode* AttributeSetFireMode; // 0x668(0x08)
	struct UGPWeaponAttributeSetEquip* AttributeSetEquip; // 0x670(0x08)
	char pad_678[0xb8]; // 0x678(0xb8)

	void OnAttributeSetDirty(); // Function GPWeaponRuntime.GPWeaponDataComponentCore.OnAttributeSetDirty // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentDamage
// Size: 0x698 (Inherited: 0x5f0)
class UGPWeaponDataComponentDamage : public UGPWeaponDataComponentBase {
public:

	int32_t HitWallNum; // 0x5f0(0x04)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct TArray<struct FGPWeaponPenetrationModifier> HitPawnModifier; // 0x5f8(0x10)
	struct TMap<struct UPhysicalMaterial*, struct FGPWeaponPenetrationModifier> MaterialModifier; // 0x608(0x50)
	struct TArray<struct UClass*> WeaponEffects; // 0x658(0x10)
	struct TArray<struct UClass*> WeaponEffectsToTeammates; // 0x668(0x10)
	struct TArray<struct FName> HitHelmetBoneNameArray; // 0x678(0x10)
	struct TArray<struct FName> HitBreastPlateBoneNameArray; // 0x688(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentFiring
// Size: 0x7e0 (Inherited: 0x5f0)
class UGPWeaponDataComponentFiring : public UGPWeaponDataComponentBase {
public:

	char pad_5F0[0x8]; // 0x5f0(0x08)
	struct TArray<struct FGPWeaponFireModeInfo> FireModeClassList; // 0x5f8(0x10)
	struct TArray<struct FName> FireSockets; // 0x608(0x10)
	char pad_618[0x18]; // 0x618(0x18)
	enum class EGPWeaponFireSocketMode FireSocketMode; // 0x630(0x01)
	char pad_631[0x7]; // 0x631(0x07)
	struct TArray<struct FGPWeaponFireModeInstanceInfo> FireModeInstanceList; // 0x638(0x10)
	int32_t CurrEnabledFireModeIndex; // 0x648(0x04)
	char pad_64C[0xc]; // 0x64c(0x0c)
	struct FWeaponFireRepInfo FireInfo; // 0x658(0x80)
	bool bNeedSendFireInfo; // 0x6d8(0x01)
	char pad_6D9[0x7]; // 0x6d9(0x07)
	float BulletRadius; // 0x6e0(0x04)
	char pad_6E4[0x4]; // 0x6e4(0x04)
	struct UGPWeaponFireRecoilBase* FireRecoilMethod; // 0x6e8(0x08)
	struct UGPWeaponAimAssistorBase* FireAimAssistor; // 0x6f0(0x08)
	char pad_6F8[0xc8]; // 0x6f8(0xc8)
	int32_t BulletIndex; // 0x7c0(0x04)
	int32_t ProjectileIndex; // 0x7c4(0x04)
	char ContinueFireCount; // 0x7c8(0x01)
	char pad_7C9[0x2]; // 0x7c9(0x02)
	bool bHasChambered; // 0x7cb(0x01)
	char pad_7CC[0x14]; // 0x7cc(0x14)

	void ServerSetFireModeIndex(char FireModeIndex); // Function GPWeaponRuntime.GPWeaponDataComponentFiring.ServerSetFireModeIndex // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentImpact
// Size: 0x5f0 (Inherited: 0x5f0)
class UGPWeaponDataComponentImpact : public UGPWeaponDataComponentBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentOverHeat
// Size: 0x628 (Inherited: 0x5f0)
class UGPWeaponDataComponentOverHeat : public UGPWeaponDataComponentBase {
public:

	char pad_5F0[0xc]; // 0x5f0(0x0c)
	float TotalHeat; // 0x5fc(0x04)
	char pad_600[0x10]; // 0x600(0x10)
	bool bUseLastDecreaseHeatTime; // 0x610(0x01)
	char pad_611[0x3]; // 0x611(0x03)
	float HeatIncreasePerFire; // 0x614(0x04)
	float HeatDecreasePerSecond; // 0x618(0x04)
	float OverHeatCDSeconds; // 0x61c(0x04)
	char pad_620[0x8]; // 0x620(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentProxy
// Size: 0x7c8 (Inherited: 0x5f0)
class UGPWeaponDataComponentProxy : public UGPWeaponDataComponentBase {
public:

	char pad_5F0[0x8]; // 0x5f0(0x08)
	bool bViewEnable; // 0x5f8(0x01)
	char pad_5F9[0x77]; // 0x5f9(0x77)
	struct UGPASC* ASC; // 0x670(0x08)
	struct UGPWeaponBlackboard* GPWeaponBlackboard; // 0x678(0x08)
	int32_t Rep_CurrentStateStep; // 0x680(0x04)
	enum class EGPWeaponStateType Rep_CurrentStateType; // 0x684(0x01)
	enum class EGPWeaponStateType Rep_LastStateType; // 0x685(0x01)
	bool bIsZooming; // 0x686(0x01)
	char pad_687[0x1]; // 0x687(0x01)
	int32_t CurrEnabledFireModeIndex; // 0x688(0x04)
	float FiringMode; // 0x68c(0x04)
	float ChangeClipMode; // 0x690(0x04)
	int32_t MeleeComboNumber; // 0x694(0x04)
	bool IsFirstActive; // 0x698(0x01)
	bool IsFirstEmptyInspect; // 0x699(0x01)
	char pad_69A[0x2]; // 0x69a(0x02)
	float OverHeatValue; // 0x69c(0x04)
	enum class EGPWeaponFireSocketMode FireSocketMode; // 0x6a0(0x01)
	enum class EWeaponSwitchType SwitchType; // 0x6a1(0x01)
	enum class ESwitchWeaponContext SwitchWeaponContext; // 0x6a2(0x01)
	char pad_6A3[0x5]; // 0x6a3(0x05)
	struct FWeaponFireMulticastInfo ReplicatedFireInfo; // 0x6a8(0x38)
	bool IsWeaponInInteractive; // 0x6e0(0x01)
	char pad_6E1[0x3]; // 0x6e1(0x03)
	int32_t BulletIndex; // 0x6e4(0x04)
	float PredictHit_X; // 0x6e8(0x04)
	float PredictHit_Y; // 0x6ec(0x04)
	float PredictHit_Z; // 0x6f0(0x04)
	char pad_6F4[0xd4]; // 0x6f4(0xd4)

	void UpdateDataZoom(); // Function GPWeaponRuntime.GPWeaponDataComponentProxy.UpdateDataZoom // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentState
// Size: 0x7a0 (Inherited: 0x5f0)
class UGPWeaponDataComponentState : public UGPWeaponDataComponentBase {
public:

	char pad_5F0[0x58]; // 0x5f0(0x58)
	struct FRepWeaponStateTimeLine RepStateInfo; // 0x648(0x20)
	enum class EGPWeaponStateType Rep_CurStateType; // 0x668(0x01)
	char pad_669[0x137]; // 0x669(0x137)

	void RPC_ClientNotifyStateFrameInValid(int32_t ClientStateNo); // Function GPWeaponRuntime.GPWeaponDataComponentState.RPC_ClientNotifyStateFrameInValid // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentZoom
// Size: 0x610 (Inherited: 0x5f0)
class UGPWeaponDataComponentZoom : public UGPWeaponDataComponentBase {
public:

	char pad_5F0[0x8]; // 0x5f0(0x08)
	bool bEnableZoom; // 0x5f8(0x01)
	bool bEnableEquipZoom; // 0x5f9(0x01)
	char pad_5FA[0xe]; // 0x5fa(0x0e)
	bool bIsZooming; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)

	bool ToggleZoom(int8_t ForceZoom, bool IsQuickZoom); // Function GPWeaponRuntime.GPWeaponDataComponentZoom.ToggleZoom // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFuncComponentAdapter
// Size: 0x168 (Inherited: 0x168)
class UGPWeaponFuncComponentAdapter : public UGPWeaponFuncComponentBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFuncComponentDamage
// Size: 0x168 (Inherited: 0x168)
class UGPWeaponFuncComponentDamage : public UGPWeaponFuncComponentBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFuncComponentFiring
// Size: 0x188 (Inherited: 0x168)
class UGPWeaponFuncComponentFiring : public UGPWeaponFuncComponentBase {
public:

	char pad_168[0x8]; // 0x168(0x08)
	struct UGPWeaponFireModeBase* CurrentFireMode; // 0x170(0x08)
	struct UGPWeaponDataComponentFiring* DCFiring; // 0x178(0x08)
	char pad_180[0x8]; // 0x180(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFuncComponentState
// Size: 0x168 (Inherited: 0x168)
class UGPWeaponFuncComponentState : public UGPWeaponFuncComponentBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFuncComponentZoom
// Size: 0x168 (Inherited: 0x168)
class UGPWeaponFuncComponentZoom : public UGPWeaponFuncComponentBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateActive_Bow
// Size: 0x148 (Inherited: 0x148)
class UGPWeaponFSMStateActive_Bow : public UGPWeaponFSMStateActive {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateThrowActive
// Size: 0x148 (Inherited: 0x148)
class UGPWeaponFSMStateThrowActive : public UGPWeaponFSMStateActive {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateConditionEquip_Bow
// Size: 0xc8 (Inherited: 0xc8)
class UGPWeaponFSMStateConditionEquip_Bow : public UGPWeaponFSMStateConditionEquip {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponFSMStateMeleeFiring
// Size: 0xf0 (Inherited: 0xe8)
class UGPWeaponFSMStateMeleeFiring : public UGPWeaponFSMStateFiring {
public:

	char pad_E8[0x8]; // 0xe8(0x08)

	void RefreshMeleeComboAttack(); // Function GPWeaponRuntime.GPWeaponFSMStateMeleeFiring.RefreshMeleeComboAttack // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponBulletPhysicsSimulate
// Size: 0x630 (Inherited: 0x630)
class AGPWeaponBulletPhysicsSimulate : public AGPWeaponBulletProjectile {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentStateAbility
// Size: 0x818 (Inherited: 0x7a0)
class UGPWeaponDataComponentStateAbility : public UGPWeaponDataComponentState {
public:

	struct TArray<struct UClass*> StateAbilities; // 0x7a0(0x10)
	struct UClass* InitStateAbility; // 0x7b0(0x08)
	struct TMap<enum class EGPWeaponStateType, struct FGameplayTagContainer> StateGameplayTagMap; // 0x7b8(0x50)
	struct UGPWeaponStateBase* CurrentStateAbility; // 0x808(0x08)
	char pad_810[0x8]; // 0x810(0x08)

	bool SwitchToWeaponStateAbilityInner(struct UAbilitySystemComponent* ASC, enum class EGPWeaponStateType StateType); // Function GPWeaponRuntime.GPWeaponDataComponentStateAbility.SwitchToWeaponStateAbilityInner // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPWeaponRuntime.GPWeaponDataComponentStateFSM
// Size: 0x7c8 (Inherited: 0x7a0)
class UGPWeaponDataComponentStateFSM : public UGPWeaponDataComponentState {
public:

	struct UClass* FSMClass; // 0x7a0(0x08)
	struct UGPWeaponFSM* FSMInstance; // 0x7a8(0x08)
	char pad_7B0[0x18]; // 0x7b0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
