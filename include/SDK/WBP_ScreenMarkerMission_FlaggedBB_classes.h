
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ScreenMarkerMission_FlaggedBB.WBP_ScreenMarkerMission_FlaggedBB_C
// Size: 0x334 (Inherited: 0x298)
class UWBP_ScreenMarkerMission_FlaggedBB_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* WBP_ScreenMarkerMission_FlaggedBB_Type1_Unit; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_ScreenMarkerMission_FlaggedBB_Type2_Position; // 0x2a8(0x08)
	struct UWidgetAnimation* WBP_ScreenMarkerMission_FlaggedBB_Type0_Position; // 0x2b0(0x08)
	struct UWidgetAnimation* WBP_ScreenMarkerMission_FlaggedBB_Type1_Position; // 0x2b8(0x08)
	struct UWidgetAnimation* WBP_ScreenMarkerMission_FlaggedBB_Loop; // 0x2c0(0x08)
	struct UWidgetAnimation* WBP_ScreenMarkerMission_FlaggedBB_Type0_Unit; // 0x2c8(0x08)
	struct UWidgetAnimation* MarkingLoopAnim; // 0x2d0(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_43; // 0x2d8(0x08)
	struct UDFImage* DFImage; // 0x2e0(0x08)
	struct UDFImage* DFImage_2; // 0x2e8(0x08)
	struct UDFImage* DFImage_3; // 0x2f0(0x08)
	struct UDFImage* DFImage_4; // 0x2f8(0x08)
	struct UDFImage* DFImage_44; // 0x300(0x08)
	struct UDFImage* DFImage_FX; // 0x308(0x08)
	struct UDFImage* DFImage_FX_2; // 0x310(0x08)
	int32_t Type; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x320(0x10)
	int32_t ImageType; // 0x330(0x04)

	void Set_Type(int32_t Type, int32_t ImageType); // Function WBP_ScreenMarkerMission_FlaggedBB.WBP_ScreenMarkerMission_FlaggedBB_C.Set Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x52c0000064
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
