
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseScroll.WBP_WarehouseScroll_C
// Size: 0x5a4 (Inherited: 0x550)
class UWBP_WarehouseScroll_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_WarehouseScroll_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_WarehouseScroll_loop; // 0x560(0x08)
	struct UWidgetAnimation* WBP_WarehouseScroll_in; // 0x568(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x570(0x08)
	struct UDFImage* DFImage_33; // 0x578(0x08)
	struct UImage* Image_2; // 0x580(0x08)
	struct UImage* Image_37; // 0x588(0x08)
	struct USizeBox* SizeBox_1; // 0x590(0x08)
	float HeightOverride; // 0x598(0x04)
	bool UpDirection; // 0x59c(0x01)
	char pad_59D[0x3]; // 0x59d(0x03)
	int32_t Type; // 0x5a0(0x04)

	void SetType(int32_t Type); // Function WBP_WarehouseScroll.WBP_WarehouseScroll_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffebfff0000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
