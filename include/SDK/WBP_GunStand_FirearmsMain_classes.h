
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_GunStand_FirearmsMain.WBP_GunStand_FirearmsMain_C
// Size: 0x5d4 (Inherited: 0x550)
class UWBP_GunStand_FirearmsMain_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_AssemblyFirearmsMain_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_AssemblyFirearmsMain_in; // 0x560(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x568(0x08)
	struct UCanvasPanel* CanvasPanel_Detail; // 0x570(0x08)
	struct UDFBorder* DFBorder_2; // 0x578(0x08)
	struct UDFImage* DFImage_60; // 0x580(0x08)
	struct UDFSafeZone* DFSafeZone_99; // 0x588(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x590(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_4; // 0x598(0x08)
	struct UWBP_AssemblyMapNeed_C* WBP_AssemblyMapNeed; // 0x5a0(0x08)
	struct UWBP_AssemblyMapNeed_C* WBP_AssemblyMapNeed_4; // 0x5a8(0x08)
	/*struct UWBP_ItemDetailView_Streamline_C**/char WBP_ItemDetailView_Streamline[0x8]; // 0x5b0(0x08)
	/*struct UWBP_DFCommonButtonV1S1_C**/char wt_WBP_CommonButtonV1S1_Gunsmith_Default[0x8]; // 0x5b8(0x08)
	/*struct UWBP_DFCommonButtonV1S2_C**/char wt_WBP_CommonButtonV1S2_Gunsmith_Simulate[0x8]; // 0x5c0(0x08)
	struct UDFWaterfallScrollView* wtWaterFallList; // 0x5c8(0x08)
	int32_t Type; // 0x5d0(0x04)

	void BP_SetType(int32_t Type); // Function WBP_GunStand_FirearmsMain.WBP_GunStand_FirearmsMain_C.BP_SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
