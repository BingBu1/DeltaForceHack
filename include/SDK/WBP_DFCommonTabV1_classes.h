
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonTabV1.WBP_DFCommonTabV1_C
// Size: 0x5aa (Inherited: 0x550)
class UWBP_DFCommonTabV1_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCommonCheckButton_TabV1_C* DFCommonCheckButton; // 0x558(0x08)
	bool Is_Lock; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct FText btnMainTitle; // 0x568(0x18)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon[0x28]; // 0x580(0x28)
	bool Show_Icon; // 0x5a8(0x01)
	bool bShowSpacerLine; // 0x5a9(0x01)

	void BP_SetShowSpacerLine(bool bShowSpacerLine); // Function WBP_DFCommonTabV1.WBP_DFCommonTabV1_C.BP_SetShowSpacerLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
