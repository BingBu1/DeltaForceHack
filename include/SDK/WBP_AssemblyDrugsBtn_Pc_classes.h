
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_AssemblyDrugsBtn_Pc.WBP_AssemblyDrugsBtn_Pc_C
// Size: 0x5f9 (Inherited: 0x550)
class UWBP_AssemblyDrugsBtn_Pc_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_AssemblyStorageBtn_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_AssemblyStorageBtn_in; // 0x560(0x08)
	struct UDFButton* DFButton_2; // 0x568(0x08)
	struct UDFImage* DFImage_124; // 0x570(0x08)
	struct UDFTextBlock* DFTextBlock_3; // 0x578(0x08)
	struct UDFMImage* Icon; // 0x580(0x08)
	struct UImage* Image; // 0x588(0x08)
	struct UImage* Image_2; // 0x590(0x08)
	struct UImage* LockImage; // 0x598(0x08)
	struct UDFImage* Reminder_Icon; // 0x5a0(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg[0x8]; // 0x5a8(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x5b0(0x08)
	int32_t Bp_Type; // 0x5b8(0x04)
	int32_t Bp_AbnormalType; // 0x5bc(0x04)
	enum class ETipsDirection TipsDir; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	int64_t ButtonID; // 0x5c8(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x5d0(0x10)
	struct FText Text; // 0x5e0(0x18)
	bool Lock; // 0x5f8(0x01)

	void Bp_SetLock(bool Lock); // Function WBP_AssemblyDrugsBtn_Pc.WBP_AssemblyDrugsBtn_Pc_C.Bp_SetLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffff3790000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
