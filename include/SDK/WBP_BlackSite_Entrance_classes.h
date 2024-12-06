
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_BlackSite_Entrance.WBP_BlackSite_Entrance_C
// Size: 0x5e8 (Inherited: 0x550)
class UWBP_BlackSite_Entrance_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_BlackSite_Entrance_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_BlackSite_Entrance_in; // 0x560(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_153; // 0x568(0x08)
	struct UDFTextBlock* DFTextBlock; // 0x570(0x08)
	struct UComputeTextBlock* DFTextBlock_90; // 0x578(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x580(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_10; // 0x588(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_11; // 0x590(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_14; // 0x598(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_15; // 0x5a0(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_16; // 0x5a8(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_17; // 0x5b0(0x08)
	struct UWBP_Common_ScaleBg_C* WBP_Common_ScaleBg01; // 0x5b8(0x08)
	struct UWBP_BlackSite_EntranceItem_C* wtConstructEntranceWB; // 0x5c0(0x08)
	/*struct UWBP_DFCommonButtonV1S1_C**/char wtEnterBlackSiteDFCBO[0x8]; // 0x5c8(0x08)
	struct UWBP_BlackSite_EntranceItem_C* wtProduceEntranceWB; // 0x5d0(0x08)
	struct UWBP_BlackSite_Entrance_Item_01_C* wtUsedForDeviceUpgradesWB; // 0x5d8(0x08)
	struct UWBP_BlackSite_Entrance_Item_01_C* wtUsedForMaterialProductionWB; // 0x5e0(0x08)

	void IsPC(); // Function WBP_BlackSite_Entrance.WBP_BlackSite_Entrance_C.IsPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffffffffc0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
