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
	struct Function_PBDPhysics_PBDPhysicsBPLibrary_SquaredDistanceFromPointToSegment_Param
	{
	public:

		struct FVector CapsulePointA; // 0x00(0x0c)
		struct FVector CapsulePointB; // 0x0c(0x0c)
		struct FVector TestPoint; // 0x18(0x0c)
		float ReturnValue; // 0x24(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
