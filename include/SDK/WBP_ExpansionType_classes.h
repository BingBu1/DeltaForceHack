
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ExpansionType.WBP_ExpansionType_C
// Size: 0x2c9 (Inherited: 0x298)
class UWBP_ExpansionType_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UDFImage* DFImage_Num; // 0x2a0(0x08)
	struct UImage* wtItemIcon; // 0x2a8(0x08)
	int32_t BpColorIndex; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<struct FLinearColor> BpColor; // 0x2b8(0x10)
	bool BpSelected; // 0x2c8(0x01)

	void BP_SetStyle(); // Function WBP_ExpansionType.WBP_ExpansionType_C.BP_SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
