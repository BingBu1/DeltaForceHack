/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_PhysXVehicles_VehicleAnimInstance_GetVehicle_Param
	{
	public:

		struct AWheeledVehicle* ReturnValue; // 0x00(0x08)
	};

	struct Function_PhysXVehicles_VehicleWheel_IsInAir_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_PhysXVehicles_WheeledVehicleMovementComponent_SetUseAutoGears_Param
	{
	public:

		bool bUseAuto; // 0x00(0x01)
	};

	struct Function_PhysXVehicles_SimpleWheeledVehicleMovementComponent_SetSteerAngle_Param
	{
	public:

		float SteerAngle; // 0x00(0x04)
		int32_t WheelIndex; // 0x04(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
