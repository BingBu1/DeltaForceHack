
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonProgressBarV1.WBP_DFCommonProgressBarV1_C
// Size: 0x569 (Inherited: 0x550)
class UWBP_DFCommonProgressBarV1_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_DFCommonProgressBarV1_Flush; // 0x558(0x08)
	struct UDFCommonProgressBarV1_C* DFCommonProgressBar; // 0x560(0x08)
	bool HideMask; // 0x568(0x01)

	void SetProgressMask(bool bHide); // Function WBP_DFCommonProgressBarV1.WBP_DFCommonProgressBarV1_C.SetProgressMask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
