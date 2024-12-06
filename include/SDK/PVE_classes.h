
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class PVE.DamageTriggerVolume
// Size: 0x3a8 (Inherited: 0x380)
class ADamageTriggerVolume : public ATriggerSphere {
public:

	struct TArray<struct UClass*> DamageGameplayEffect; // 0x380(0x10)
	float OnceDamageValue; // 0x390(0x04)
	float DamageInterval; // 0x394(0x04)
	struct TArray<struct ADFMCharacter*> InVolumeCharacterArray; // 0x398(0x10)

	void OnVolumeEndOverlap(struct AActor* OverlappedActor); // Function PVE.DamageTriggerVolume.OnVolumeEndOverlap // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PVE.PVECharacterExternalDamageComponent
// Size: 0x108 (Inherited: 0x100)
class UPVECharacterExternalDamageComponent : public UActorComponent {
public:

	float CharacterDamageInfluenceVehicleDamageRate; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	void OnTakeDamage(struct FDamageResultInfo& DamageResultInfo); // Function PVE.PVECharacterExternalDamageComponent.OnTakeDamage // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PVE.PVECharacterPickupComponent
// Size: 0x148 (Inherited: 0x100)
class UPVECharacterPickupComponent : public UActorComponent {
public:

	struct UBaseUIView* PickupWeaponHUD; // 0x100(0x08)
	/*struct FMulticastInlineDelegate*/char OnClientHasPickupedItemNtf[0x10]; // 0x108(0x10)
	struct UInteractorComponent* InteractorComponent; // 0x118(0x08)
	struct UInventoryManager* InventoryManager; // 0x120(0x08)
	struct TArray<struct FInventoryItemInfo> WeaponPickupArray; // 0x128(0x10)
	uint64_t LastDisplayedWeaponGid; // 0x138(0x08)
	float AutoPickupDeltaTime; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)

	void ShowPickupWeaponHUD(bool Show, struct FInventoryItemInfo ItemInfo); // Function PVE.PVECharacterPickupComponent.ShowPickupWeaponHUD // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PVE.PVEGameRuleComponent
// Size: 0x1c8 (Inherited: 0x1a0)
class UPVEGameRuleComponent : public UIrisGameRuleComponent {
public:

	int32_t MaxMatchDuration; // 0x1a0(0x04)
	bool bLimitMatchDuration; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct TArray<struct AActor*> PVEPlayerStartArray; // 0x1a8(0x10)
	char pad_1B8[0x10]; // 0x1b8(0x10)

	void SetTeamVisiable(int32_t TeamId, bool bVisiblity); // Function PVE.PVEGameRuleComponent.SetTeamVisiable // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PVE.PVEHUD
// Size: 0x748 (Inherited: 0x718)
class APVEHUD : public ADFMHUD {
public:

	struct UDataTable* PVEUIDataTable; // 0x718(0x08)
	/*struct TSoftObjectPtr<UDataTable>*/char PVEUIDataTableHDOverride[0x28]; // 0x720(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PVE.PVEPlayerEcoSystemComponent
// Size: 0x130 (Inherited: 0x100)
class UPVEPlayerEcoSystemComponent : public UActorComponent {
public:

	float FrequencyOfPassiveAddMerit; // 0x100(0x04)
	float PassiveAddMerit; // 0x104(0x04)
	float HitTargetLeastDamage; // 0x108(0x04)
	uint32_t LastContinueKillNum; // 0x10c(0x04)
	float LastContinueKillTime; // 0x110(0x04)
	float LastPassiveAddMeritElapseTime; // 0x114(0x04)
	struct AIrisWorldPlayerState* OwnerPVEPlayerState; // 0x118(0x08)
	struct AIrisWorldGameState* PVEGameState; // 0x120(0x08)
	struct FTimerHandle ShowTotalGainMeritViewHandle; // 0x128(0x08)

	void ServerUnequipItem(uint64_t ItemGid); // Function PVE.PVEPlayerEcoSystemComponent.ServerUnequipItem // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PVE.PVEPlayerResurrectComponent
// Size: 0x150 (Inherited: 0x148)
class UPVEPlayerResurrectComponent : public UDFMPlayerResurrectComponent {
public:

	bool bIsInRailRideState; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PVE.PVETeamSystem
// Size: 0x3b8 (Inherited: 0x3b8)
class APVETeamSystem : public ASOLTeamSystem {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
