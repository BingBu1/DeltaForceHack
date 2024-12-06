
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Store_ItemName.WBP_Store_ItemName_C
// Size: 0x5e8 (Inherited: 0x550)
class UWBP_Store_ItemName_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Store_ItemName_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Store_ItemName_in; // 0x560(0x08)
	struct UDFImage* DFImage_8; // 0x568(0x08)
	struct UDFImage* DFImage_123; // 0x570(0x08)
	struct UDFImage* DFImage_179; // 0x578(0x08)
	struct UDFImage* DFImage_FX_2; // 0x580(0x08)
	struct UDFImage* DFImage_FX_3; // 0x588(0x08)
	struct UDFTextBlock* wtCorePrizeText; // 0x590(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char wtDetailBtn[0x8]; // 0x598(0x08)
	struct UDFTextBlock* wtPropNameText; // 0x5a0(0x08)
	struct UDFImage* wtQualityIcon; // 0x5a8(0x08)
	bool Up_and_down; // 0x5b0(0x01)
	bool Direction; // 0x5b1(0x01)
	bool Style; // 0x5b2(0x01)
	char pad_5B3[0x5]; // 0x5b3(0x05)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char StyleImage[0x10]; // 0x5b8(0x10)
	float Direction_X; // 0x5c8(0x04)
	float Direction_Y; // 0x5cc(0x04)
	struct FText NewVar_1; // 0x5d0(0x18)

	void Set_Type(bool Style); // Function WBP_Store_ItemName.WBP_Store_ItemName_C.Set_Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x52c0000064
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
