
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_TopBarHD_Currency1.WBP_TopBarHD_Currency1_C
// Size: 0x5c4 (Inherited: 0x550)
class UWBP_TopBarHD_Currency1_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFButton* _wtAddBtn; // 0x558(0x08)
	struct UDFImage* DFImage_75; // 0x560(0x08)
	struct UImage* Image_Currency; // 0x568(0x08)
	struct USizeBox* SizeBox_2; // 0x570(0x08)
	struct UTextBlock* wtTextBlock_value; // 0x578(0x08)
	struct FText ValueName; // 0x580(0x18)
	/*struct TSoftObjectPtr<UPaperSprite>*/char Image[0x28]; // 0x598(0x28)
	float Override; // 0x5c0(0x04)

	void SetStyle(); // Function WBP_TopBarHD_Currency1.WBP_TopBarHD_Currency1_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xe933132bf2d37f80
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
