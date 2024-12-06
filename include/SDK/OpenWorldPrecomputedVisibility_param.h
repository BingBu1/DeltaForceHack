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
	struct Function_OpenWorldPrecomputedVisibility_OpenWorldPrecomputedForm_GetFormType_Param
	{
	public:

		enum class EOpenWorldPrecomputedFormType ReturnValue; // 0x00(0x01)
	};

	struct Function_OpenWorldPrecomputedVisibility_OpenWorldPrecomputedFormStatics_SetFormVisibilityIds_Param
	{
	public:

		struct UObject* MutableForm; // 0x00(0x08)
		struct TArray<int32_t> VisibilityIds; // 0x08(0x10)
	};

	struct Function_OpenWorldPrecomputedVisibility_MutableFormMeshComponent_NextForm_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
