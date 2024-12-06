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
	struct Function_FieldSystemEngine_FieldSystemComponent_ResetFieldSystem_Param
	{
	public:

	};

	struct Function_FieldSystemEngine_FieldSystemMetaDataIteration_SetMetaDataIteration_Param
	{
	public:

		int32_t Iterations; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UFieldSystemMetaDataIteration* ReturnValue; // 0x08(0x08)
	};

	struct Function_FieldSystemEngine_FieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Param
	{
	public:

		enum class EFieldResolutionType ResolutionType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UFieldSystemMetaDataProcessingResolution* ReturnValue; // 0x08(0x08)
	};

	struct Function_FieldSystemEngine_OperatorField_SetOperatorField_Param
	{
	public:

		float Magnitude; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UFieldNodeBase* RightField; // 0x08(0x08)
		struct UFieldNodeBase* LeftField; // 0x10(0x08)
		enum class EFieldOperationType Operation; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UOperatorField* ReturnValue; // 0x20(0x08)
	};

	struct Function_FieldSystemEngine_CullingField_SetCullingField_Param
	{
	public:

		struct UFieldNodeBase* Culling; // 0x00(0x08)
		struct UFieldNodeBase* Field; // 0x08(0x08)
		enum class EFieldCullingOperationType Operation; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UCullingField* ReturnValue; // 0x18(0x08)
	};

	struct Function_FieldSystemEngine_ReturnResultsTerminal_SetReturnResultsTerminal_Param
	{
	public:

		struct UReturnResultsTerminal* ReturnValue; // 0x00(0x08)
	};

	struct Function_FieldSystemEngine_UniformInteger_SetUniformInteger_Param
	{
	public:

		int32_t Magnitude; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UUniformInteger* ReturnValue; // 0x08(0x08)
	};

	struct Function_FieldSystemEngine_RadialIntMask_SetRadialIntMask_Param
	{
	public:

		float radius; // 0x00(0x04)
		struct FVector Position; // 0x04(0x0c)
		int32_t InteriorValue; // 0x10(0x04)
		int32_t ExteriorValue; // 0x14(0x04)
		enum class ESetMaskConditionType SetMaskConditionIn; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct URadialIntMask* ReturnValue; // 0x20(0x08)
	};

	struct Function_FieldSystemEngine_ToIntegerField_SetToIntegerField_Param
	{
	public:

		struct UFieldNodeFloat* FloatField; // 0x00(0x08)
		struct UToIntegerField* ReturnValue; // 0x08(0x08)
	};

	struct Function_FieldSystemEngine_UniformScalar_SetUniformScalar_Param
	{
	public:

		float Magnitude; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UUniformScalar* ReturnValue; // 0x08(0x08)
	};

	struct Function_FieldSystemEngine_RadialFalloff_SetRadialFalloff_Param
	{
	public:

		float Magnitude; // 0x00(0x04)
		float MinRange; // 0x04(0x04)
		float MaxRange; // 0x08(0x04)
		float Default; // 0x0c(0x04)
		float radius; // 0x10(0x04)
		struct FVector Position; // 0x14(0x0c)
		enum class EFieldFalloffType Falloff; // 0x20(0x01)
		char pad_21[0x7]; // 0x21(0x07)
		struct URadialFalloff* ReturnValue; // 0x28(0x08)
	};

	struct Function_FieldSystemEngine_PlaneFalloff_SetPlaneFalloff_Param
	{
	public:

		float Magnitude; // 0x00(0x04)
		float MinRange; // 0x04(0x04)
		float MaxRange; // 0x08(0x04)
		float Default; // 0x0c(0x04)
		float Distance; // 0x10(0x04)
		struct FVector Position; // 0x14(0x0c)
		struct FVector Normal; // 0x20(0x0c)
		enum class EFieldFalloffType Falloff; // 0x2c(0x01)
		char pad_2D[0x3]; // 0x2d(0x03)
		struct UPlaneFalloff* ReturnValue; // 0x30(0x08)
	};

	struct Function_FieldSystemEngine_BoxFalloff_SetBoxFalloff_Param
	{
	public:

		float Magnitude; // 0x00(0x04)
		float MinRange; // 0x04(0x04)
		float MaxRange; // 0x08(0x04)
		float Default; // 0x0c(0x04)
		struct FTransform Transform; // 0x10(0x30)
		enum class EFieldFalloffType Falloff; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct UBoxFalloff* ReturnValue; // 0x48(0x08)
	};

	struct Function_FieldSystemEngine_NoiseField_SetNoiseField_Param
	{
	public:

		float MinRange; // 0x00(0x04)
		float MaxRange; // 0x04(0x04)
		char pad_8[0x8]; // 0x08(0x08)
		struct FTransform Transform; // 0x10(0x30)
		struct UNoiseField* ReturnValue; // 0x40(0x08)
	};

	struct Function_FieldSystemEngine_ToFloatField_SetToFloatField_Param
	{
	public:

		struct UFieldNodeInt* IntegerField; // 0x00(0x08)
		struct UToFloatField* ReturnValue; // 0x08(0x08)
	};

	struct Function_FieldSystemEngine_UniformVector_SetUniformVector_Param
	{
	public:

		float Magnitude; // 0x00(0x04)
		struct FVector Direction; // 0x04(0x0c)
		struct UUniformVector* ReturnValue; // 0x10(0x08)
	};

	struct Function_FieldSystemEngine_RadialVector_SetRadialVector_Param
	{
	public:

		float Magnitude; // 0x00(0x04)
		struct FVector Position; // 0x04(0x0c)
		struct URadialVector* ReturnValue; // 0x10(0x08)
	};

	struct Function_FieldSystemEngine_RandomVector_SetRandomVector_Param
	{
	public:

		float Magnitude; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct URandomVector* ReturnValue; // 0x08(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
