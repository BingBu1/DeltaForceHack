
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ControllerFunctionButtonCommand.WBP_ControllerFunctionButtonCommand_C
// Size: 0x5cc (Inherited: 0x5a8)
class UWBP_ControllerFunctionButtonCommand_C : public ULuaUIHudBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a8(0x08)
	struct UWidgetAnimation* Ani_HudController; // 0x5b0(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* ShowMsgBtn; // 0x5b8(0x08)
	struct UWBP_ControllerButtonType_C* WBP_ControllerButtonType; // 0x5c0(0x08)
	int32_t Type; // 0x5c8(0x04)

	void SetPositionType(int32_t Type); // Function WBP_ControllerFunctionButtonCommand.WBP_ControllerFunctionButtonCommand_C.SetPositionType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3f03a8f5fdc7211b
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
