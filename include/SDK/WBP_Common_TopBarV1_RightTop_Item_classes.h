
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Common_TopBarV1_RightTop_Item.WBP_Common_TopBarV1_RightTop_Item_C
// Size: 0x5d2 (Inherited: 0x550)
class UWBP_Common_TopBarV1_RightTop_Item_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* unlockAni; // 0x558(0x08)
	struct UDFButton* DFButton_Top; // 0x560(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_111; // 0x568(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Lock; // 0x570(0x08)
	struct UDFImage* DFImage_Icon; // 0x578(0x08)
	struct UDFImage* DFImage_Line; // 0x580(0x08)
	struct UDFImage* DFImage_Lock; // 0x588(0x08)
	struct UImage* DFImage_Lock_2; // 0x590(0x08)
	struct UImage* DFImage_Lock_3; // 0x598(0x08)
	struct UDFSizeBox* DFSizeBox_1; // 0x5a0(0x08)
	struct UDFTextBlock* DFTextBlock_Title; // 0x5a8(0x08)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char Arrimage[0x10]; // 0x5b0(0x10)
	int32_t ImageType; // 0x5c0(0x04)
	int32_t LengthType; // 0x5c4(0x04)
	float BP_LongWidth; // 0x5c8(0x04)
	float BP_ShortWidth; // 0x5cc(0x04)
	bool IsLock; // 0x5d0(0x01)
	bool IsPress; // 0x5d1(0x01)

	void BP_SetLengthType(int32_t LengthType); // Function WBP_Common_TopBarV1_RightTop_Item.WBP_Common_TopBarV1_RightTop_Item_C.BP_SetLengthType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
