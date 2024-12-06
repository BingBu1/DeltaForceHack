
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Common_MediaBg.WBP_Common_MediaBg_C
// Size: 0x2c1 (Inherited: 0x298)
class UWBP_Common_MediaBg_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UDFBackgroundBox* DFBackgroundBox_2; // 0x2a0(0x08)
	struct UDFSafeZone* DFSafeZone_2; // 0x2a8(0x08)
	struct UNamedSlot* NamedSlot_29; // 0x2b0(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x2b8(0x08)
	bool bIsBackgroud; // 0x2c0(0x01)

	void BP_SetIsBackgroud(bool IsBackgroud); // Function WBP_Common_MediaBg.WBP_Common_MediaBg_C.BP_SetIsBackgroud // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdc0000030
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
