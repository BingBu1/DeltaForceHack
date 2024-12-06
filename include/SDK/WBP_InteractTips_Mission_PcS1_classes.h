
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_InteractTips_Mission_PcS1.WBP_InteractTips_Mission_PcS1_C
// Size: 0x2c8 (Inherited: 0x298)
class UWBP_InteractTips_Mission_PcS1_C : public UDFHDInteractorMissionItem {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UDFImage* BG; // 0x2a0(0x08)
	struct UDFImage* Icon_2; // 0x2a8(0x08)
	int32_t Type; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x2b8(0x10)

	void SetStyle(int32_t Selection); // Function WBP_InteractTips_Mission_PcS1.WBP_InteractTips_Mission_PcS1_C.SetStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
