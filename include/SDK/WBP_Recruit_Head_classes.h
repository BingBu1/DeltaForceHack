
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Recruit_Head.WBP_Recruit_Head_C
// Size: 0x578 (Inherited: 0x550)
class UWBP_Recruit_Head_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWBP_CommonHeadIcon_C* wtCommonHeadIcon; // 0x558(0x08)
	/*struct UWBP_Common_SmallFlatRank_C**/char wtRankDivisionIcon[0x8]; // 0x560(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Icon[0x10]; // 0x568(0x10)

	void SetPC(); // Function WBP_Recruit_Head.WBP_Recruit_Head_C.SetPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x52c0000064
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
