
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ZZAnimationLib.DynamicAttributtAnimInstance
// Size: 0xbb0 (Inherited: 0x280)
class UDynamicAttributtAnimInstance : public UAnimInstance {
public:

	struct FDynamicAttrAnimInstanceProxy Proxy; // 0x280(0x930)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZZAnimationLib.JogStartingComponent
// Size: 0x230 (Inherited: 0x100)
class UJogStartingComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	/*struct FMulticastInlineDelegate*/char OnJogStartDelegate[0x10]; // 0x108(0x10)
	struct ACHARACTER* OwnerCharacter; // 0x118(0x08)
	struct UCharacterMovementComponent* ObserveredCharacterMovementComponent; // 0x120(0x08)
	struct USkeletalMeshComponent* ObserveredSkeletalMeshComponent; // 0x128(0x08)
	struct FVector JogStartingLocation; // 0x130(0x0c)
	float DistanceNeededToNomalJog; // 0x13c(0x04)
	float VelocityCanBeSeemsAsIdleThreshold; // 0x140(0x04)
	struct FName JogStartingLocationKey; // 0x144(0x08)
	struct FName JogStartDistanceKey; // 0x14c(0x08)
	struct FName JogStartToJoggingConditionKey; // 0x154(0x08)
	struct FName IdleToJogStartConditionKey; // 0x15c(0x08)
	struct FName MainJogStartAnimSeqKey; // 0x164(0x08)
	struct FName SecondaryJogStartAnimSeqKey; // 0x16c(0x08)
	struct FName JogStartFirstStepAngleAlphaKey; // 0x174(0x08)
	struct FName JogStartFirstStepTransitionKey; // 0x17c(0x08)
	struct FName MainJogStartAnimPositionKey; // 0x184(0x08)
	struct FName SecondaryJogStartAnimPositionKey; // 0x18c(0x08)
	char pad_194[0x4]; // 0x194(0x04)
	struct UAnimSequence* JogStartForwardSequence; // 0x198(0x08)
	struct UAnimSequence* JogStartBackwardSequence; // 0x1a0(0x08)
	struct UAnimSequence* JogStartLeftSequence; // 0x1a8(0x08)
	struct UAnimSequence* JogStartRightSequence; // 0x1b0(0x08)
	char pad_1B8[0x78]; // 0x1b8(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZZAnimationLib.JogStopComponent
// Size: 0x178 (Inherited: 0x100)
class UJogStopComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	/*struct FMulticastInlineDelegate*/char OnJogStopDelegate[0x10]; // 0x108(0x10)
	struct ACHARACTER* OwnerCharacter; // 0x118(0x08)
	struct UCharacterMovementComponent* ObserveredCharacterMovementComponent; // 0x120(0x08)
	struct USkeletalMeshComponent* ObserveredSkeletalMeshComponent; // 0x128(0x08)
	char pad_130[0x48]; // 0x130(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZZAnimationLib.MSAISkeletalMeshComponent
// Size: 0xf60 (Inherited: 0xf28)
class UMSAISkeletalMeshComponent : public USkeletalMeshComponent {
public:

	struct TArray<struct UClass*> AppendedAnimBlueprint; // 0xf28(0x10)
	char pad_F38[0x10]; // 0xf38(0x10)
	struct TArray<struct UAnimInstance*> AppendAnimInstances; // 0xf48(0x10)
	char pad_F58[0x8]; // 0xf58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZZAnimationLib.ZZAnimationLibBPLibrary
// Size: 0x30 (Inherited: 0x30)
class UZZAnimationLibBPLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_ZZPredictStopOffset(struct UCharacterMovementComponent* inCharacterMovementComp, bool isPivot, struct FVector& outPredictOffset, bool& Success); // Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZPredictStopOffset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZZAnimationLib.ZZAnimAttrFetchInterface
// Size: 0x30 (Inherited: 0x30)
class UZZAnimAttrFetchInterface : public UInterface {
public:


	struct FAnimInstanceAttributeDict FetchAnimAttr(); // Function ZZAnimationLib.ZZAnimAttrFetchInterface.FetchAnimAttr // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZZAnimationLib.ZZAnimSettings
// Size: 0x60 (Inherited: 0x40)
class UZZAnimSettings : public UDeveloperSettings {
public:

	struct FName CollectAttributeFromComponentWithTagName; // 0x40(0x08)
	struct FName DistanceCurveName; // 0x48(0x08)
	struct FName DisableSpeedWarpingCurveName; // 0x50(0x08)
	struct FName TurningDistanceCurveName; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
