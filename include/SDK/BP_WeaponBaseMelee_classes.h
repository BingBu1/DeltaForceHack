
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_WeaponBaseMelee.BP_WeaponBaseMelee_C
// Size: 0x1108 (Inherited: 0x10d0)
class ABP_WeaponBaseMelee_C : public ADFMWeapon {
public:

	struct UWeaponMeleeDataComponentFiring* WeaponMeleeDataComponentFiring; // 0x10d0(0x08)
	struct UWeaponMeleeDataComponentAnim* WeaponMeleeDataComponentAnim; // 0x10d8(0x08)
	struct UWeaponDataComponentReadData* WeaponDataComponentReadData; // 0x10e0(0x08)
	struct UDFMWeaponDataComponentDamage* DFMWeaponDataComponentDamage; // 0x10e8(0x08)
	struct UWeaponAttributesCenterComponent* WeaponAttributesCenter; // 0x10f0(0x08)
	struct UWeaponDataComponentState* WeaponDataComponentState; // 0x10f8(0x08)
	struct UWeaponDataComponentCore* WeaponDataComponentCore; // 0x1100(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
