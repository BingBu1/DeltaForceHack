
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_GuideEntryComb.WBP_GuideEntryComb_C
// Size: 0x580 (Inherited: 0x550)
class UWBP_GuideEntryComb_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_GuideEntryComb_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_GuideEntryComb_in; // 0x560(0x08)
	struct UWBP_Guide_Entry_C* wtGuideEntry; // 0x568(0x08)
	int32_t Type; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct UWBP_Guide_Entry_C* NewVar_1; // 0x578(0x08)

	void Set_Type(); // Function WBP_GuideEntryComb.WBP_GuideEntryComb_C.Set_Type // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
