
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SlotCompAccessoryStatus.WBP_SlotCompAccessoryStatus_C
// Size: 0x578 (Inherited: 0x550)
class UWBP_SlotCompAccessoryStatus_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UImage* Image_14; // 0x558(0x08)
	bool Style; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefIcon[0x10]; // 0x568(0x10)

	void Set_Style(bool Style); // Function WBP_SlotCompAccessoryStatus.WBP_SlotCompAccessoryStatus_C.Set_Style // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
