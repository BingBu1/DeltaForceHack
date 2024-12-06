
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SlotCompSelected.WBP_SlotCompSelected_C
// Size: 0x588 (Inherited: 0x550)
class UWBP_SlotCompSelected_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* selected_Image; // 0x558(0x08)
	struct UWidgetAnimation* Selected; // 0x560(0x08)
	struct UDFImage* DFImage_71; // 0x568(0x08)
	struct UImage* MI_UI_SlotCompSelected_002; // 0x570(0x08)
	struct UImage* wtSelectedBox; // 0x578(0x08)
	bool ThereBottom; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	int32_t Color; // 0x584(0x04)

	void SetType(bool ThereBotton, int32_t Color); // Function WBP_SlotCompSelected.WBP_SlotCompSelected_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
