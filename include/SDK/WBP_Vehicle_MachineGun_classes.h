
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Vehicle_MachineGun.WBP_Vehicle_MachineGun_C
// Size: 0x2dc (Inherited: 0x2a0)
class UWBP_Vehicle_MachineGun_C : public UDFMCrossHairBPItemBase {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UImage* Center; // 0x2a8(0x08)
	struct UImage* CrossHair; // 0x2b0(0x08)
	struct UImage* crosshair1; // 0x2b8(0x08)
	struct UImage* crosshair2; // 0x2c0(0x08)
	struct UImage* crosshair3; // 0x2c8(0x08)
	float Value; // 0x2d0(0x04)
	int32_t Type; // 0x2d4(0x04)
	float MagazineValue; // 0x2d8(0x04)

	void BPGetCrossHairImgs(); // Function WBP_Vehicle_MachineGun.WBP_Vehicle_MachineGun_C.BPGetCrossHairImgs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x418ffffec0740065
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
