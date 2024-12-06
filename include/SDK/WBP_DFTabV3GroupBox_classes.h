
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFTabV3GroupBox.WBP_DFTabV3GroupBox_C
// Size: 0x424 (Inherited: 0x3f8)
class UWBP_DFTabV3GroupBox_C : public UDFCommonTabWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UDFBlurSlotReContainer* DFBlurSlotReContainer_67; // 0x400(0x08)
	struct UDFImage* DFImage_45; // 0x408(0x08)
	bool BgVisibility; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	struct FVector2D BP_VIconTabSize; // 0x414(0x08)
	struct FVector2D BP_VTextTabSize; // 0x41c(0x08)

	void SetBg(bool BgVisibility); // Function WBP_DFTabV3GroupBox.WBP_DFTabV3GroupBox_C.SetBg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
