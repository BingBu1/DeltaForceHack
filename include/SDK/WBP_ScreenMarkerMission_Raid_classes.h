
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ScreenMarkerMission_Raid.WBP_ScreenMarkerMission_Raid_C
// Size: 0x47a (Inherited: 0x408)
class UWBP_ScreenMarkerMission_Raid_C : public URaidScreenMarkerView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UWidgetAnimation* WBP_ScreenMarkerMission_Raid_loop; // 0x410(0x08)
	struct UWidgetAnimation* WBP_ScreenMarkerMission_Raid_out; // 0x418(0x08)
	struct UWidgetAnimation* WBP_ScreenMarkerMission_Raid_in; // 0x420(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_160; // 0x428(0x08)
	struct UTextBlock* DistMText; // 0x430(0x08)
	struct UTextBlock* UpDistMText; // 0x438(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x440(0x08)
	struct UWBP_ScreenMarkerMission__Flagged_C* WBP_ScreenMarkerMission__Flagged; // 0x448(0x08)
	int32_t Type; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct TArray<struct UPaperSprite*> IconImageArray; // 0x458(0x10)
	struct TArray<struct FLinearColor> BpColor; // 0x468(0x10)
	enum class EGPQuestActionMarkerType markerType; // 0x478(0x01)
	bool bIsAimed; // 0x479(0x01)

	void SetArrow(bool bIsOutScreen, float Angle); // Function WBP_ScreenMarkerMission_Raid.WBP_ScreenMarkerMission_Raid_C.SetArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
