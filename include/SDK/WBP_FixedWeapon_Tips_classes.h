
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_FixedWeapon_Tips.WBP_FixedWeapon_Tips_C
// Size: 0x2d0 (Inherited: 0x298)
class UWBP_FixedWeapon_Tips_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* WBP_FixedWeapon_Overheat_out; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_FixedWeapon_Overheat_in; // 0x2a8(0x08)
	struct UBorder* Border_52; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_90; // 0x2b8(0x08)
	struct UWBP_TipsReload_PC_C* WBP_TipsReload_PC; // 0x2c0(0x08)
	struct FTimerHandle timeHandle; // 0x2c8(0x08)

	void PCAdaptation(); // Function WBP_FixedWeapon_Tips.WBP_FixedWeapon_Tips_C.PCAdaptation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
