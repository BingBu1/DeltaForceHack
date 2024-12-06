
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Chat_World.WBP_Chat_World_C
// Size: 0x5b9 (Inherited: 0x550)
class UWBP_Chat_World_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Chat_World_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Chat_World_in; // 0x560(0x08)
	struct UButton* Button_mention; // 0x568(0x08)
	struct UButton* Button_UnRead; // 0x570(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_2; // 0x578(0x08)
	struct ULine* Image_341; // 0x580(0x08)
	struct UImage* Image_1149; // 0x588(0x08)
	struct UImage* Image_1176; // 0x590(0x08)
	struct UImage* Image_1401; // 0x598(0x08)
	struct UTextBlock* TextBlock_47; // 0x5a0(0x08)
	struct UDFRichTextBlock* TextBlock_373; // 0x5a8(0x08)
	struct UDFWaterfallScrollView* WaterfallScrollView; // 0x5b0(0x08)
	bool IsElongation; // 0x5b8(0x01)

	void Elongation(bool IsElongation); // Function WBP_Chat_World.WBP_Chat_World_C.Elongation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
