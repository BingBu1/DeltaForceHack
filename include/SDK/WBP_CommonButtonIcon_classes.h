
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonButtonIcon.WBP_CommonButtonIcon_C
// Size: 0x5ad (Inherited: 0x560)
class UWBP_CommonButtonIcon_C : public UDFMCommonButtonIcon {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UDFCheckBox* DFCheckBox_58; // 0x568(0x08)
	struct UDFMImage* DFMImage_Icon; // 0x570(0x08)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon[0x28]; // 0x578(0x28)
	bool Selected; // 0x5a0(0x01)
	bool SetSize; // 0x5a1(0x01)
	char pad_5A2[0x2]; // 0x5a2(0x02)
	struct FVector2D imageSize; // 0x5a4(0x08)
	bool Disabled; // 0x5ac(0x01)

	void BP_Set_Type(); // Function WBP_CommonButtonIcon.WBP_CommonButtonIcon_C.BP_Set_Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
