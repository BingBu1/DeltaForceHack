
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass GMButtonItem.GMButtonItem_C
// Size: 0x2d0 (Inherited: 0x298)
class UGMButtonItem_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UButton* CharacterLog; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_OBStatus_7; // 0x2a8(0x08)
	struct UImage* VisualBtnBG_12; // 0x2b0(0x08)
	struct AActor* CameraFordwardActor; // 0x2b8(0x08)
	bool ShowForwardDebug; // 0x2c0(0x01)
	bool ShowInteractorForwardDebug; // 0x2c1(0x01)
	bool ShowInteractorReverseDebug; // 0x2c2(0x01)
	char pad_2C3[0x5]; // 0x2c3(0x05)
	struct AActor* CameraForwardActor; // 0x2c8(0x08)

	void BndEvt__CharacterLog_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature(); // Function GMButtonItem.GMButtonItem_C.BndEvt__CharacterLog_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x6ec0780065
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
