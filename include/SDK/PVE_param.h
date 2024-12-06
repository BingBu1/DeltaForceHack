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
	struct Function_PVE_DamageTriggerVolume_OnVolumeEndOverlap_Param
	{
	public:

		struct AActor* OverlappedActor; // 0x00(0x08)
	};

	struct Function_PVE_PVECharacterExternalDamageComponent_OnTakeDamage_Param
	{
	public:

		struct FDamageResultInfo DamageResultInfo; // 0x00(0x5e0)
	};

	struct Function_PVE_PVECharacterPickupComponent_ShowPickupWeaponHUD_Param
	{
	public:

		bool Show; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FInventoryItemInfo ItemInfo; // 0x08(0x538)
	};

	struct Function_PVE_PVEGameRuleComponent_SetTeamVisiable_Param
	{
	public:

		int32_t TeamId; // 0x00(0x04)
		bool bVisiblity; // 0x04(0x01)
	};

	struct Function_PVE_PVEPlayerEcoSystemComponent_ServerUnequipItem_Param
	{
	public:

		uint64_t ItemGid; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
