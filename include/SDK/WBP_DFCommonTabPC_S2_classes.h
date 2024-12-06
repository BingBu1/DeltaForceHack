
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonTabPC_S2.WBP_DFCommonTabPC_S2_C
// Size: 0x5c8 (Inherited: 0x5a8)
class UWBP_DFCommonTabPC_S2_C : public ULuaUIHudBaseView {
public:

	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x5a8(0x08)
	struct UDFCommonCheckButtonPc_V2_C* DFCommonCheckButton; // 0x5b0(0x08)
	struct UDFImage* DFImage_Line; // 0x5b8(0x08)
	/*struct UWBP_CommonOthersPoint_C**/char WBP_CommonPoint[0x8]; // 0x5c0(0x08)

	void BP_SetLineVisible(bool bVisible); // Function WBP_DFCommonTabPC_S2.WBP_DFCommonTabPC_S2_C.BP_SetLineVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
