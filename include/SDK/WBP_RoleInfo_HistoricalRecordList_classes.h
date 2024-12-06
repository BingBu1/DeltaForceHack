
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_RoleInfo_HistoricalRecordList.WBP_RoleInfo_HistoricalRecordList_C
// Size: 0x650 (Inherited: 0x550)
class UWBP_RoleInfo_HistoricalRecordList_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_RoleInfo_HistoricalRecordList_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_RoleInfo_HistoricalRecordList_in; // 0x560(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x568(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_2; // 0x570(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Null; // 0x578(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_2; // 0x580(0x08)
	struct UDFImage* DFImage; // 0x588(0x08)
	struct UDFImage* DFImage_2; // 0x590(0x08)
	struct UDFImage* DFImage_49; // 0x598(0x08)
	struct UDFImage* DFImage_237; // 0x5a0(0x08)
	struct UDFImage* DFImage_367; // 0x5a8(0x08)
	struct UImage* DFImage_RAIDLevel; // 0x5b0(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg[0x8]; // 0x5b8(0x08)
	struct UDFScrollGridBox* wtAchievement; // 0x5c0(0x08)
	struct UDFButton* wtDetailBtn; // 0x5c8(0x08)
	struct UDFImage* wtHeroAvatar; // 0x5d0(0x08)
	struct UDFImage* wtHeroUpIcon; // 0x5d8(0x08)
	struct UDFImage* wtImageStar; // 0x5e0(0x08)
	struct UDFTextBlock* wtKillNum; // 0x5e8(0x08)
	struct UDFTextBlock* wtRank; // 0x5f0(0x08)
	struct UDFTextBlock* wtRankNore; // 0x5f8(0x08)
	struct UDFTextBlock* wtResult; // 0x600(0x08)
	struct UDFTextBlock* wtScoreText; // 0x608(0x08)
	struct UDFRichTextBlock* wtSoreUpdata; // 0x610(0x08)
	struct UDFTextBlock* wtStartNum; // 0x618(0x08)
	int32_t Mode; // 0x620(0x04)
	bool NULLASS; // 0x624(0x01)
	char pad_625[0x3]; // 0x625(0x03)
	int32_t Type; // 0x628(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char BG[0x10]; // 0x630(0x10)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Icon[0x10]; // 0x640(0x10)

	void SetNull(bool NULLAS); // Function WBP_RoleInfo_HistoricalRecordList.WBP_RoleInfo_HistoricalRecordList_C.SetNull // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
