
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Recruit_Chat_Item.WBP_Recruit_Chat_Item_C
// Size: 0x591 (Inherited: 0x550)
class UWBP_Recruit_Chat_Item_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage_Bg; // 0x558(0x08)
	struct UWBP_Recruit_Main_RecruitInfo_Item_C* WBP_Recruit_Main_RecruitInfo_Item; // 0x560(0x08)
	struct UWBP_Recruit_Main_RecruitInfo_Item_C* WBP_Recruit_Main_RecruitInfo_Item_2; // 0x568(0x08)
	struct UWBP_Recruit_Main_RecruitInfo_Item_C* WBP_Recruit_Main_RecruitInfo_Item_3; // 0x570(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char wtJoinBtn[0x8]; // 0x578(0x08)
	struct UDFTextBlock* wtMapNameAndMemberNumText; // 0x580(0x08)
	struct UWBP_Recruit_Head_C* wtTeammateHead; // 0x588(0x08)
	bool Is_Hide; // 0x590(0x01)

	void SetType(bool Type); // Function WBP_Recruit_Chat_Item.WBP_Recruit_Chat_Item_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
