
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailCheckBox.WBP_ItemDetailCheckBox_C
// Size: 0x598 (Inherited: 0x550)
class UWBP_ItemDetailCheckBox_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_ItemDetailCheckBox_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_ItemDetailCheckBox_in; // 0x560(0x08)
	struct UImage* Image_3; // 0x568(0x08)
	struct UButton* wWeaponDetailBtn_2; // 0x570(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char BpRefImage[0x10]; // 0x578(0x10)
	bool BpSelectedInDesignTime; // 0x588(0x01)
	char pad_589[0x3]; // 0x589(0x03)
	int32_t Type; // 0x58c(0x04)
	struct FName Color; // 0x590(0x08)

	void SetStyle(); // Function WBP_ItemDetailCheckBox.WBP_ItemDetailCheckBox_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
