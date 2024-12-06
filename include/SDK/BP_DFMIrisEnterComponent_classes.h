
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_DFMIrisEnterComponent.BP_DFMIrisEnterComponent_C
// Size: 0x330 (Inherited: 0x208)
class UBP_DFMIrisEnterComponent_C : public UDFMIrisEnterComponent {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x208(0x08)
	/*struct FMulticastInlineDelegate*/char GetOnFinish[0x10]; // 0x210(0x10)
	struct ASafeHouseHelicopter* CurrentHelicopter; // 0x220(0x08)
	/*struct FMulticastInlineDelegate*/char OnFlyEnd[0x10]; // 0x228(0x10)
	/*struct FMulticastInlineDelegate*/char OnRopeDownFinish[0x10]; // 0x238(0x10)
	/*struct FMulticastInlineDelegate*/char StartCloseDoor[0x10]; // 0x248(0x10)
	/*struct FMulticastInlineDelegate*/char CancelMatch[0x10]; // 0x258(0x10)
	/*struct FMulticastInlineDelegate*/char TeliportToStartFlyPointFinish[0x10]; // 0x268(0x10)
	struct ABP_HelicopterPovitActor_C* CurrentPovitActor; // 0x278(0x08)
	/*struct FMulticastInlineDelegate*/char OnSeamlessReady[0x10]; // 0x280(0x10)
	/*struct FMulticastInlineDelegate*/char StartCutScene[0x10]; // 0x290(0x10)
	/*struct FMulticastInlineDelegate*/char DebugGoto[0x10]; // 0x2a0(0x10)
	/*struct FMulticastInlineDelegate*/char StartEnterEventCS[0x10]; // 0x2b0(0x10)
	bool NeedStartEvent; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct AActor* StartEventTargetPoint; // 0x2c8(0x08)
	/*struct FMulticastInlineDelegate*/char OnStartEventCSEnd[0x10]; // 0x2d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnTeamShowCSEnd[0x10]; // 0x2e0(0x10)
	bool TeamShowEnd; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct UUserWidget* BlackScreen; // 0x2f8(0x08)
	/*struct FMulticastInlineDelegate*/char Intro_StartHelicopterMove[0x10]; // 0x300(0x10)
	/*struct FMulticastInlineDelegate*/char Intro_StartRopeDown[0x10]; // 0x310(0x10)
	/*struct FMulticastInlineDelegate*/char OnReadyGetOff[0x10]; // 0x320(0x10)

	void StartGetOnHelicopter(struct ASafeHouseHelicopter* Helicopter, struct ABP_HelicopterPovitActor_C* PovitActor); // Function BP_DFMIrisEnterComponent.BP_DFMIrisEnterComponent_C.StartGetOnHelicopter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xabffcba6271ad6aa
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
