
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_BattlePass_Branch_Item_PC_S.WBP_BattlePass_Branch_Item_PC_S_C
// Size: 0x5b8 (Inherited: 0x550)
class UWBP_BattlePass_Branch_Item_PC_S_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_BattlePass_Branch_Item_in_2; // 0x558(0x08)
	struct UDFButton* DFButton_1; // 0x560(0x08)
	struct UDFImage* DFImage_Lock; // 0x568(0x08)
	struct UDFImage* DFImage_Mode; // 0x570(0x08)
	struct UDFTextBlock* DFTextBlock; // 0x578(0x08)
	struct UDFTextBlock* DFTextBlock_75; // 0x580(0x08)
	struct UDFImage* Image; // 0x588(0x08)
	struct UDFImage* Image_2; // 0x590(0x08)
	struct UDFImage* Image_3; // 0x598(0x08)
	int32_t ButtonType; // 0x5a0(0x04)
	int32_t ModeType; // 0x5a4(0x04)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char ModeImage[0x10]; // 0x5a8(0x10)

	void SetModeType(int32_t ModeType); // Function WBP_BattlePass_Branch_Item_PC_S.WBP_BattlePass_Branch_Item_PC_S_C.SetModeType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
