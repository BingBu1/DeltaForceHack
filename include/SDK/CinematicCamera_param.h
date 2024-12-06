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
	struct Function_CinematicCamera_CineCameraActor_GetCineCameraComponent_Param
	{
	public:

		struct UCineCameraComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_CinematicCamera_CineCameraComponent_SetLensPresetByName_Param
	{
	public:

		struct FString InPresetName; // 0x00(0x10)
	};

	struct Function_CinematicCamera_CameraRig_Rail_GetRailSplineComponent_Param
	{
	public:

		struct USplineComponent* ReturnValue; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
