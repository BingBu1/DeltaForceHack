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
	struct Function_GPTween_GPTweenFloat_MakeFloatDamperImplicitVector2D_Param
	{
	public:

		struct FVector2D InCurrentValue; // 0x00(0x08)
		struct FVector2D InTargetValue; // 0x08(0x08)
		float HalfLife; // 0x10(0x04)
		float InDeltaTime; // 0x14(0x04)
		float eps; // 0x18(0x04)
		struct FVector2D ReturnValue; // 0x1c(0x08)
	};

	struct Function_GPTween_GPTweenVector3D_MakeVector3DByCurve_Param
	{
	public:

		struct FString TweenName; // 0x00(0x10)
		float DurTime; // 0x10(0x04)
		struct FVector Start; // 0x14(0x0c)
		struct FVector End; // 0x20(0x0c)
		char pad_2C[0x4]; // 0x2c(0x04)
		struct UCurveFloat* Curve; // 0x30(0x08)
		bool IsLoop; // 0x38(0x01)
		char pad_39[0x7]; // 0x39(0x07)
		struct UGPTweenVector3D* ReturnValue; // 0x40(0x08)
	};

	struct Function_GPTween_GPTweenWidget_MakeLocalScale_Param
	{
	public:

		struct FString TweenName; // 0x00(0x10)
		float DurTime; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UWidget* UI; // 0x18(0x08)
		struct FVector2D StartScale; // 0x20(0x08)
		struct FVector2D EndScale; // 0x28(0x08)
		enum class EaseType EaseType; // 0x30(0x01)
		bool IsLoop; // 0x31(0x01)
		char pad_32[0x6]; // 0x32(0x06)
		struct UGPTweenWidget* ReturnValue; // 0x38(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
