
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonVideoComponent.WBP_CommonVideoComponent_C
// Size: 0x581 (Inherited: 0x550)
class UWBP_CommonVideoComponent_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* logo; // 0x558(0x08)
	struct UDFImage* DFImage_Bg; // 0x560(0x08)
	struct UDFMCommonMediaImage* wt_CommonMediaImage; // 0x568(0x08)
	/*struct UWBP_CommonVideoProgressBar_C**/char wt_CommonVideoProgressBar[0x8]; // 0x570(0x08)
	struct UDFStreamMediaImage* wt_WebMediaPlayer; // 0x578(0x08)
	bool Is_Blur; // 0x580(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_CommonVideoComponent.WBP_CommonVideoComponent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3cc71c70c0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
