
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_BattlePass_Main_Item.WBP_BattlePass_Main_Item_C
// Size: 0x5dc (Inherited: 0x550)
class UWBP_BattlePass_Main_Item_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_BattlePass_Main_Item_Loop; // 0x558(0x08)
	struct UWidgetAnimation* WBP_BattlePass_Main_Item_in; // 0x560(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur_86; // 0x568(0x08)
	struct UDFImage* DFImage_7; // 0x570(0x08)
	struct UDFImage* DFImage_232; // 0x578(0x08)
	struct UDFImage* DFImage_Current; // 0x580(0x08)
	struct UDFImage* DFImage_FX; // 0x588(0x08)
	struct UDFTextBlock* DFTextBlock_156; // 0x590(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x598(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_2; // 0x5a0(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_3; // 0x5a8(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_4; // 0x5b0(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_6; // 0x5b8(0x08)
	int32_t Type; // 0x5c0(0x04)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char Image[0x10]; // 0x5c8(0x10)
	int32_t Number; // 0x5d8(0x04)

	void IsPC(); // Function WBP_BattlePass_Main_Item.WBP_BattlePass_Main_Item_C.IsPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x6ec0780065
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
