
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_MsgBtn.WBP_MsgBtn_C
// Size: 0x594 (Inherited: 0x550)
class UWBP_MsgBtn_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_MsgBtn_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_MsgBtn_in; // 0x560(0x08)
	struct UImage* Image_83; // 0x568(0x08)
	struct UTextBlock* TextBlock_4; // 0x570(0x08)
	struct UWBP_DFCommonButtonV2S1_C* WBP_CommonButtonV2S1_C_2; // 0x578(0x08)
	struct UWBP_CommonHeadIcon_C* WBP_CommonHeadIcon; // 0x580(0x08)
	/*struct UWBP_CommonOthersPoint_C**/char WBP_CommonPoint[0x8]; // 0x588(0x08)
	int32_t Type; // 0x590(0x04)

	void SetType(int32_t Selection); // Function WBP_MsgBtn.WBP_MsgBtn_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4ec033005f
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
