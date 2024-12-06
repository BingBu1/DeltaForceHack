
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommon_MissionUnlocked.WBP_DFCommon_MissionUnlocked_C
// Size: 0x57c (Inherited: 0x550)
class UWBP_DFCommon_MissionUnlocked_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_DFCommon_MissionUnlocked_finish; // 0x558(0x08)
	struct UWidgetAnimation* WBP_DFCommon_MissionUnlocked_unlock; // 0x560(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtTipCheckBtn[0x8]; // 0x568(0x08)
	/*struct UWBP_DFCommon_UnlockedItem_C**/char wtUnlockItem[0x8]; // 0x570(0x08)
	int32_t Type; // 0x578(0x04)

	void SetType(int32_t Type); // Function WBP_DFCommon_MissionUnlocked.WBP_DFCommon_MissionUnlocked_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
