
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_VehiclesMainV3.WBP_VehiclesMainV3_C
// Size: 0x5a8 (Inherited: 0x550)
class UWBP_VehiclesMainV3_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x558(0x08)
	struct UDFImage* DFImage_60; // 0x560(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x568(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x570(0x08)
	struct UWBP_CommonDownload_C* WBP_CommonDownload; // 0x578(0x08)
	struct UWBP_ItemDetailView_Equipped_C* WBP_ItemDetailView_Equipped; // 0x580(0x08)
	/*struct UWBP_VehiclesConditions_C**/char WBP_VehiclesConditions[0x8]; // 0x588(0x08)
	/*struct UWBP_DFCommonButtonV1S1_C**/char wt_CommonButtonV1S1[0x8]; // 0x590(0x08)
	struct UDFCanvasPanel* wt_DFCanvasPanel; // 0x598(0x08)
	struct UDFWaterfallScrollView* wtWaterFallList; // 0x5a0(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_VehiclesMainV3.WBP_VehiclesMainV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
