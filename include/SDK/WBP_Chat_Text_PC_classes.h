
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Chat_Text_PC.WBP_Chat_Text_PC_C
// Size: 0x588 (Inherited: 0x550)
class UWBP_Chat_Text_PC_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Chat_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Chat_in; // 0x560(0x08)
	struct URichTextBlock* RichTextBlock_2; // 0x568(0x08)
	struct UVerticalBox* VerticalBox_2; // 0x570(0x08)
	bool IsVisibleAnim; // 0x578(0x01)
	bool Set_Scale; // 0x579(0x01)
	char pad_57A[0x6]; // 0x57a(0x06)
	struct FTimerHandle HideTimer; // 0x580(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_Chat_Text_PC.WBP_Chat_Text_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
