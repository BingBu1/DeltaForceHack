
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x48 (Inherited: 0x40)
class UAnimNotify_PlayMontageNotify : public UAnimNotify {
public:

	struct FName NotifyName; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x40 (Inherited: 0x38)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState {
public:

	struct FName NotifyName; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x30 (Inherited: 0x30)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xb0 (Inherited: 0x30)
class UPlayMontageCallbackProxy : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnCompleted[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnBlendOut[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnInterrupted[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnNotifyBegin[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnNotifyEnd[0x10]; // 0x70(0x10)
	char pad_80[0x30]; // 0x80(0x30)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AnimGraphRuntime.AnimCustomInstance
// Size: 0x280 (Inherited: 0x280)
class UAnimCustomInstance : public UAnimInstance {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x280 (Inherited: 0x280)
class UAnimSequencerInstance : public UAnimCustomInstance {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
