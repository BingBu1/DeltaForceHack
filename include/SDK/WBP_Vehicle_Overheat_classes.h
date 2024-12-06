
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Vehicle_Overheat.WBP_Vehicle_Overheat_C
// Size: 0x2c4 (Inherited: 0x298)
class UWBP_Vehicle_Overheat_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* WBP_Vehicle_Overheat_cooling; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_Vehicle_Overheat_superheat; // 0x2a8(0x08)
	struct UDFImage* DFImage_54; // 0x2b0(0x08)
	struct UDFRadialImage* ProgressBar; // 0x2b8(0x08)
	int32_t Type; // 0x2c0(0x04)

	void SetType(int32_t Type); // Function WBP_Vehicle_Overheat.WBP_Vehicle_Overheat_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3c9ffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
