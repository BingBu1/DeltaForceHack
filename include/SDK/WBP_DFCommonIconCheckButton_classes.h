
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonIconCheckButton.WBP_DFCommonIconCheckButton_C
// Size: 0x5e8 (Inherited: 0x550)
class UWBP_DFCommonIconCheckButton_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCommonCheckButton_C* DFCommonCheckButton; // 0x558(0x08)
	struct UDFImage* HotZone; // 0x560(0x08)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon_Checked[0x28]; // 0x568(0x28)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon_Unchecked[0x28]; // 0x590(0x28)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon_Dis[0x28]; // 0x5b8(0x28)
	int64_t ButtonID; // 0x5e0(0x08)

	void BP_SetType(/*struct TSoftObjectPtr<UPaperSprite> InImageIcon_Checked, struct TSoftObjectPtr<UPaperSprite> InImageIcon_Unchecked, struct TSoftObjectPtr<UPaperSprite> ImageIcon_Dis*/); // Function WBP_DFCommonIconCheckButton.WBP_DFCommonIconCheckButton_C.BP_SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
