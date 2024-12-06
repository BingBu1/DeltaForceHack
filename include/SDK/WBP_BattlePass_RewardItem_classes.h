
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_BattlePass_RewardItem.WBP_BattlePass_RewardItem_C
// Size: 0x604 (Inherited: 0x550)
class UWBP_BattlePass_RewardItem_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x558(0x08)
	struct UDFHorizontalBox* DFHorizontalBox; // 0x560(0x08)
	struct UDFImage* DFImage_203; // 0x568(0x08)
	struct UDFImage* DFImage_406; // 0x570(0x08)
	struct UDFTextBlock* DFTextBlock_2; // 0x578(0x08)
	struct UDFWrapBox* DFWrapBox_308; // 0x580(0x08)
	struct UPlatformPaddingBox* PaddingBox; // 0x588(0x08)
	struct UDFCanvasPanel* Panel_Free; // 0x590(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_2; // 0x598(0x08)
	struct UPlatformSizeBox* PlatformSizeBox_1; // 0x5a0(0x08)
	int32_t Type; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char Arrimage[0x10]; // 0x5b0(0x10)
	struct TArray<struct FVector2D> PlatformPaddingBox_1_Size_PC; // 0x5c0(0x10)
	struct TArray<struct FVector2D> PlatformSizeBox_0_Size_PC; // 0x5d0(0x10)
	struct TArray<struct FVector2D> PlatformPaddingBox_1_Size_Mobile; // 0x5e0(0x10)
	struct TArray<struct FVector2D> PlatformSizeBox_0_Size_Mobile; // 0x5f0(0x10)
	int32_t Position; // 0x600(0x04)

	void SetPos(int32_t InPosition); // Function WBP_BattlePass_RewardItem.WBP_BattlePass_RewardItem_C.SetPos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
