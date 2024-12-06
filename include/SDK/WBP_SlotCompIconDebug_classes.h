
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SlotCompIconDebug.WBP_SlotCompIconDebug_C
// Size: 0x2e0 (Inherited: 0x298)
class UWBP_SlotCompIconDebug_C : public UUserWidget {
public:

	struct UImage* Image_DontMerge; // 0x298(0x08)
	struct UImage* Image_Merge; // 0x2a0(0x08)
	struct UTextBlock* Text_Debug; // 0x2a8(0x08)
	struct UTextBlock* Text_Merge; // 0x2b0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Debug; // 0x2b8(0x08)
	/*struct TArray<struct TSoftClassPtr<UObject>>*/char LoadedDebugClassList[0x10]; // 0x2c0(0x10)
	struct TArray<struct UObject*> LoadedDebugResourceList; // 0x2d0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
