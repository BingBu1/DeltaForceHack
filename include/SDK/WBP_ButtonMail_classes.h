
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ButtonMail.WBP_ButtonMail_C
// Size: 0x2d0 (Inherited: 0x298)
class UWBP_ButtonMail_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UDFTipsAnchor* _wtTipsAnchor; // 0x2a0(0x08)
	struct UDFButton* Button_2; // 0x2a8(0x08)
	struct UImage* Image_5; // 0x2b0(0x08)
	/*struct UWBP_CommonOthersPoint_C**/char WBP_CommonOthersPoint[0x8]; // 0x2b8(0x08)
	int32_t Type; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	int64_t ButtonID; // 0x2c8(0x08)

	void SetStyle(); // Function WBP_ButtonMail.WBP_ButtonMail_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdc0000030
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
