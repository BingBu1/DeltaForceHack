
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailContent_Effect.WBP_ItemDetailContent_Effect_C
// Size: 0x5a4 (Inherited: 0x550)
class UWBP_ItemDetailContent_Effect_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFTextBlock* DFTextBlock; // 0x558(0x08)
	struct UDFTextBlock* DFTextBlock_2; // 0x560(0x08)
	struct UDFTextBlock* DFTextBlock_59; // 0x568(0x08)
	struct UDFTipsAnchor* DFTipsAnchor_246; // 0x570(0x08)
	struct UImage* Image_7; // 0x578(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtCommonCheckInstruction[0x8]; // 0x580(0x08)
	struct FText detail; // 0x588(0x18)
	int32_t Type; // 0x5a0(0x04)

	void SetType(int32_t Type); // Function WBP_ItemDetailContent_Effect.WBP_ItemDetailContent_Effect_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
