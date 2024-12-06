
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_ArmoredCar.BP_ArmoredCar_C
// Size: 0x11e8 (Inherited: 0x1190)
class ABP_ArmoredCar_C : public ADFMWheeledVehicle {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1190(0x08)
	struct UDFMVehicleAssembledPartComponent* Point_FrontLeft_Wheel; // 0x1198(0x08)
	struct UDFMVehicleAssembledPartComponent* Point_FrontRight_Wheel; // 0x11a0(0x08)
	struct UDFMVehicleAssembledPartComponent* Point_BackRight_Wheel1; // 0x11a8(0x08)
	struct UDFMVehicleAssembledPartComponent* Point_BackRight_Wheel2; // 0x11b0(0x08)
	struct UDFMVehicleAssembledPartComponent* Point_BackLeft_Wheel2; // 0x11b8(0x08)
	struct UDFMVehicleAssembledPartComponent* Point_BackLeft_Wheel1; // 0x11c0(0x08)
	struct UDFMVehicleAssembledPartComponent* Bodycontrol; // 0x11c8(0x08)
	struct UCameraComponent* Camera; // 0x11d0(0x08)
	struct UDFMVehicleSprintComponent* DFMVehicleSpringArm; // 0x11d8(0x08)
	struct UGameAkComponent* GameAk; // 0x11e0(0x08)

	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue); // Function BP_ArmoredCar.BP_ArmoredCar_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x72c0000074
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
