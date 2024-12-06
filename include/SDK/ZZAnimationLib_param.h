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
	struct Function_ZZAnimationLib_ZZAnimationLibBPLibrary_ZZPredictStopOffset_Param
	{
	public:

		struct UCharacterMovementComponent* inCharacterMovementComp; // 0x00(0x08)
		bool isPivot; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FVector outPredictOffset; // 0x0c(0x0c)
		bool Success; // 0x18(0x01)
	};

	struct Function_ZZAnimationLib_ZZAnimAttrFetchInterface_FetchAnimAttr_Param
	{
	public:

		struct FAnimInstanceAttributeDict ReturnValue; // 0x00(0x1e0)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
