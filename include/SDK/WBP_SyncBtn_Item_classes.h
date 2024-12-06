
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SyncBtn_Item.WBP_SyncBtn_Item_C
// Size: 0x5d8 (Inherited: 0x550)
class UWBP_SyncBtn_Item_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UButton* Button_1; // 0x558(0x08)
	struct UImage* DisImage; // 0x560(0x08)
	struct UImage* Icon; // 0x568(0x08)
	struct UTextBlock* TextBlock_25; // 0x570(0x08)
	struct FText Title; // 0x578(0x18)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image[0x10]; // 0x590(0x10)
	bool Disabled; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	int32_t SetImage; // 0x5a4(0x04)
	struct TArray<struct UObject*> Image_Normal; // 0x5a8(0x10)
	struct TArray<struct UObject*> Image_Horver; // 0x5b8(0x10)
	struct TArray<struct UObject*> Image_Click; // 0x5c8(0x10)

	void SetLock(); // Function WBP_SyncBtn_Item.WBP_SyncBtn_Item_C.SetLock // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
