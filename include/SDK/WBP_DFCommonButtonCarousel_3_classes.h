
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonButtonCarousel_3.WBP_DFCommonButtonCarousel_2_C
// Size: 0x57c (Inherited: 0x550)
class UWBP_DFCommonButtonCarousel_2_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFButton* DFButton_Icon; // 0x558(0x08)
	struct UDFImage* DFImage_105; // 0x560(0x08)
	struct TArray<struct FButtonStyle> Style; // 0x568(0x10)
	int32_t Type; // 0x578(0x04)

	void SetStyle(int32_t Condition); // Function WBP_DFCommonButtonCarousel_3.WBP_DFCommonButtonCarousel_2_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x6ec0780065
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
