
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Recruit_Chat.WBP_Recruit_Chat_C
// Size: 0x578 (Inherited: 0x550)
class UWBP_Recruit_Chat_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur_70; // 0x558(0x08)
	struct UDFButton* wtJumpToBottomBtn; // 0x560(0x08)
	/*struct UWBP_DFCommonButtonV3S1_C**/char wtPublishRecruitmentBtn[0x8]; // 0x568(0x08)
	struct UDFWaterfallScrollView* wtRecruitmentScrollView; // 0x570(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_Recruit_Chat.WBP_Recruit_Chat_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
