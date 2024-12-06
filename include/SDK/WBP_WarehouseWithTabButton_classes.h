
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseWithTabButton.WBP_WarehouseWithTabButton_C
// Size: 0x5b0 (Inherited: 0x550)
class UWBP_WarehouseWithTabButton_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage_36; // 0x558(0x08)
	struct UDFImage* DFImage_217; // 0x560(0x08)
	struct UDFImage* Line; // 0x568(0x08)
	struct UDFTipsAnchor* wtTipsAnchor; // 0x570(0x08)
	int32_t Type; // 0x578(0x04)
	bool Image_Line; // 0x57c(0x01)
	char pad_57D[0x3]; // 0x57d(0x03)
	int32_t size; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	/*struct TSoftObjectPtr<UPaperSprite>*/char Image[0x28]; // 0x588(0x28)

	void SetLine(); // Function WBP_WarehouseWithTabButton.WBP_WarehouseWithTabButton_C.SetLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
