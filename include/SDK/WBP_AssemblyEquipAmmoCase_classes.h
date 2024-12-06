
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_AssemblyEquipAmmoCase.WBP_AssemblyEquipAmmoCase_C
// Size: 0x5f5 (Inherited: 0x550)
class UWBP_AssemblyEquipAmmoCase_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage_83; // 0x558(0x08)
	struct UDFTextBlock* DFTextBlock_428; // 0x560(0x08)
	struct UImage* Image; // 0x568(0x08)
	struct UImage* Image_2; // 0x570(0x08)
	struct UImage* LockImage; // 0x578(0x08)
	struct UDFImage* Reminder_Icon; // 0x580(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg_C_1[0x8]; // 0x588(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x590(0x08)
	struct UWBP_AssemblyEquipAmmoCase_item_C* wtMainWeaponLeftBulletCaseItem; // 0x598(0x08)
	struct UWBP_AssemblyEquipAmmoCase_item_C* wtMainWeaponRightBulletCaseItem; // 0x5a0(0x08)
	struct UWBP_AssemblyEquipAmmoCase_item_C* wtPistrolBulletCaseItem; // 0x5a8(0x08)
	int32_t Bp_SlotType; // 0x5b0(0x04)
	char pad_5B4[0x4]; // 0x5b4(0x04)
	struct UPaperSprite* EmptyIcon; // 0x5b8(0x08)
	struct FText Text; // 0x5c0(0x18)
	int32_t Bp_AbnormalType; // 0x5d8(0x04)
	enum class ETipsDirection TipsDir; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x5e0(0x10)
	int32_t Bp_Type; // 0x5f0(0x04)
	bool Lock; // 0x5f4(0x01)

	void Bp_SetLock(bool Lock); // Function WBP_AssemblyEquipAmmoCase.WBP_AssemblyEquipAmmoCase_C.Bp_SetLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3f03a8f5fdc7211b
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
