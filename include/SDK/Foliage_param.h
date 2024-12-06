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
	struct Function_Foliage_FoliageEd_LogicTypeRedirector_AddFoliageType_Param
	{
	public:

		struct UFoliageType* InFoliageType; // 0x00(0x08)
	};

	struct Function_Foliage_FoliageStatistics_FoliageOverlappingSphereCount_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UStaticMesh* StaticMesh; // 0x08(0x08)
		struct FVector CenterPosition; // 0x10(0x0c)
		float radius; // 0x1c(0x04)
		int32_t ReturnValue; // 0x20(0x04)
	};

	struct Function_Foliage_InteractiveFoliageActor_CapsuleTouched_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComp; // 0x00(0x08)
		struct AActor* Other; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
		bool bFromSweep; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FHitResult OverlapInfo; // 0x20(0x88)
	};

	struct Function_Foliage_ProceduralFoliageSpawner_Simulate_Param
	{
	public:

		int32_t NumSteps; // 0x00(0x04)
	};

	struct Function_Foliage_FoliageType_SetCullDistanceHD_Param
	{
	public:

		int32_t InMin; // 0x00(0x04)
		int32_t InMax; // 0x04(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
