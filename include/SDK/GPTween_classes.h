
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPTween.GPTweenUpdateManager
// Size: 0x378 (Inherited: 0x378)
class AGPTweenUpdateManager : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTween.GPTweenBase
// Size: 0x50 (Inherited: 0x38)
class UGPTweenBase : public UBlueprintAsyncActionBase {
public:

	char pad_38[0x18]; // 0x38(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTween.GPTweenFloat
// Size: 0x88 (Inherited: 0x50)
class UGPTweenFloat : public UGPTweenBase {
public:

	/*struct FMulticastInlineDelegate*/char OnFirst[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdate[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnComplete[0x10]; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)

	struct FVector2D STATIC_MakeFloatDamperImplicitVector2D(struct FVector2D& InCurrentValue, struct FVector2D& InTargetValue, float HalfLife, float InDeltaTime, float eps); // Function GPTween.GPTweenFloat.MakeFloatDamperImplicitVector2D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTween.GPTweenVector3D
// Size: 0x98 (Inherited: 0x50)
class UGPTweenVector3D : public UGPTweenBase {
public:

	/*struct FMulticastInlineDelegate*/char OnFirst[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdate[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnComplete[0x10]; // 0x70(0x10)
	char pad_80[0x18]; // 0x80(0x18)

	struct UGPTweenVector3D* STATIC_MakeVector3DByCurve(struct FString TweenName, float DurTime, struct FVector Start, struct FVector End, struct UCurveFloat* Curve, bool IsLoop); // Function GPTween.GPTweenVector3D.MakeVector3DByCurve // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTween.GPTweenWidget
// Size: 0xc0 (Inherited: 0x50)
class UGPTweenWidget : public UGPTweenBase {
public:

	/*struct FMulticastInlineDelegate*/char OnFirst[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdate[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnComplete[0x10]; // 0x70(0x10)
	char pad_80[0x40]; // 0x80(0x40)

	struct UGPTweenWidget* STATIC_MakeLocalScale(struct FString TweenName, float DurTime, struct UWidget* UI, struct FVector2D StartScale, struct FVector2D EndScale, enum class EaseType EaseType, bool IsLoop); // Function GPTween.GPTweenWidget.MakeLocalScale // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
