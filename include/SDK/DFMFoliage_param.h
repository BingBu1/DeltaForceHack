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
	struct Function_DFMFoliage_FoliageCollisionData_TestOverlapSVO_Param
	{
	public:

		struct FVector Center; // 0x00(0x0c)
		struct FVector HalfExtent; // 0x0c(0x0c)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_DFMFoliage_FoliageCollision_TestOverlap_Param
	{
	public:

		enum class EFoliageCollisionName Name; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector Center; // 0x04(0x0c)
		struct FVector HalfExtent; // 0x10(0x0c)
		bool ReturnValue; // 0x1c(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
