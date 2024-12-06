
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ArmedDriverView_GunFrontSight.WBP_ArmedDriverView_GunFrontSight_C
// Size: 0x334 (Inherited: 0x298)
class UWBP_ArmedDriverView_GunFrontSight_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWBP_Vehicle_Overheat_C* AimAmmoProgress; // 0x2a0(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2a8(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x2b0(0x08)
	struct UWBP_FixedWeapon_Tips_C* HeatTip; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image_2; // 0x2c8(0x08)
	struct UImage* Image_3; // 0x2d0(0x08)
	struct UImage* Image_4; // 0x2d8(0x08)
	struct UImage* Image_5; // 0x2e0(0x08)
	struct UImage* Image_6; // 0x2e8(0x08)
	struct UImage* Image_31; // 0x2f0(0x08)
	struct UImage* Image_52; // 0x2f8(0x08)
	struct USafeZone* SafeZone_1; // 0x300(0x08)
	struct UCanvasPanel* SightRoot; // 0x308(0x08)
	struct UWBP_Vehicle_MachineGun_C* WBP_Vehicle_MachineGun_2; // 0x310(0x08)
	struct UWBP_Vehicle_Rocket_C* WBP_Vehicle_Rocket; // 0x318(0x08)
	struct UWBP_Vehicle_Shot_C* WBP_Vehicle_Shot; // 0x320(0x08)
	struct UWBP_Vehicle_SpecialGrenade_C* WBP_Vehicle_SpecialGrenade; // 0x328(0x08)
	int32_t Type; // 0x330(0x04)

	void PCAdaptation(); // Function WBP_ArmedDriverView_GunFrontSight.WBP_ArmedDriverView_GunFrontSight_C.PCAdaptation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x73fffec0700078
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
