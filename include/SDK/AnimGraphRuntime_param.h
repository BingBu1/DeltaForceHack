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
	struct Function_AnimGraphRuntime_KismetAnimationLibrary_K2_TwoBoneIK_Param
	{
	public:

		struct FVector RootPos; // 0x00(0x0c)
		struct FVector JointPos; // 0x0c(0x0c)
		struct FVector EndPos; // 0x18(0x0c)
		struct FVector JointTarget; // 0x24(0x0c)
		struct FVector Effector; // 0x30(0x0c)
		struct FVector OutJointPos; // 0x3c(0x0c)
		struct FVector OutEndPos; // 0x48(0x0c)
		bool bAllowStretching; // 0x54(0x01)
		char pad_55[0x3]; // 0x55(0x03)
		float StartStretchRatio; // 0x58(0x04)
		float MaxStretchScale; // 0x5c(0x04)
	};

	struct Function_AnimGraphRuntime_PlayMontageCallbackProxy_OnNotifyEndReceived_Param
	{
	public:

		struct FName NotifyName; // 0x00(0x08)
		struct FBranchingPointNotifyPayload BranchingPointNotifyPayload; // 0x08(0x20)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
