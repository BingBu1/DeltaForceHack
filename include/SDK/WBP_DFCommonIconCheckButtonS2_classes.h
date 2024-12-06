
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonIconCheckButtonS2.WBP_DFCommonIconCheckButtonS2_C
// Size: 0x5e0 (Inherited: 0x550)
class UWBP_DFCommonIconCheckButtonS2_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCommonCheckButton_C* DFCommonCheckButton; // 0x558(0x08)
	struct UDFImage* HotZone; // 0x560(0x08)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon_Checked[0x28]; // 0x568(0x28)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon_Unchecked[0x28]; // 0x590(0x28)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon_Dis[0x28]; // 0x5b8(0x28)

	void BP_SetType(/*struct TSoftObjectPtr<UPaperSprite> InImageIcon_Checked, struct TSoftObjectPtr<UPaperSprite> InImageIcon_Unchecked, struct TSoftObjectPtr<UPaperSprite> ImageIcon_Dis*/); // Function WBP_DFCommonIconCheckButtonS2.WBP_DFCommonIconCheckButtonS2_C.BP_SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x9908894d9dcfbe9
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
