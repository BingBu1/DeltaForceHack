
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonButtonV1S1_Hall_Pc.WBP_DFCommonButtonV1S1_Hall_Pc_C
// Size: 0x580 (Inherited: 0x550)
class UWBP_DFCommonButtonV1S1_Hall_Pc_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* HoverAni; // 0x558(0x08)
	struct UDFCommonButtonV1_Hall_Pc_C* DFCommonButton; // 0x560(0x08)
	struct FText btnMainTitle; // 0x568(0x18)

	void GetDisabledStyle(struct FButtonStyle& disabledStyle); // Function WBP_DFCommonButtonV1S1_Hall_Pc.WBP_DFCommonButtonV1S1_Hall_Pc_C.GetDisabledStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
