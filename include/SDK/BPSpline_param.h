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
	struct Function_BPSpline_BPSplineCatenaryFunctions_CreateCatenaryPoints_Param
	{
	public:

		struct FVector Point1; // 0x00(0x0c)
		struct FVector Point2; // 0x0c(0x0c)
		float Length; // 0x18(0x04)
		struct FVector Up; // 0x1c(0x0c)
		int32_t NumPoints; // 0x28(0x04)
		char pad_2C[0x4]; // 0x2c(0x04)
		struct TArray<struct FVector> ReturnValue; // 0x30(0x10)
	};

	struct Function_BPSpline_BPSplineBlueprintFunctionHelper_SnapToGround_Param
	{
	public:

		struct USplineComponent* SplineComp; // 0x00(0x08)
		bool bInAlign; // 0x08(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
