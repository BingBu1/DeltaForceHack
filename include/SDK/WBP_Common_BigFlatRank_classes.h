
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Common_BigFlatRank.WBP_Common_BigFlatRank_C
// Size: 0x578 (Inherited: 0x550)
class UWBP_Common_BigFlatRank_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_19; // 0x558(0x08)
	struct UDFImage* DFImage_BigFlatIcon; // 0x560(0x08)
	struct UDFImage* DFImage_BigFlatNum; // 0x568(0x08)
	float size; // 0x570(0x04)
	int32_t ModeType; // 0x574(0x04)

	void SetMode(int32_t Mode); // Function WBP_Common_BigFlatRank.WBP_Common_BigFlatRank_C.SetMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffebfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
