
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class FieldSystemEngine.FieldSystemActor
// Size: 0x380 (Inherited: 0x378)
class AFieldSystemActor : public AActor {
public:

	struct UFieldSystemComponent* FieldSystemComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x40 (Inherited: 0x30)
class UFieldSystem : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x5a0 (Inherited: 0x560)
class UFieldSystemComponent : public UPrimitiveComponent {
public:

	struct UFieldSystem* FieldSystem; // 0x560(0x08)
	char pad_568[0x10]; // 0x568(0x10)
	/*struct TArray<struct TSoftObjectPtr<AChaosSolverActor>>*/char SupportedSolvers[0x10]; // 0x578(0x10)
	char pad_588[0x18]; // 0x588(0x18)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0x100 (Inherited: 0x100)
class UFieldSystemMetaData : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0x100 (Inherited: 0x100)
class UFieldNodeBase : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0x108 (Inherited: 0x100)
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData {
public:

	int32_t Iterations; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0x108 (Inherited: 0x100)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData {
public:

	enum class EFieldResolutionType ResolutionType; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0x100 (Inherited: 0x100)
class UFieldNodeInt : public UFieldNodeBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0x100 (Inherited: 0x100)
class UFieldNodeFloat : public UFieldNodeBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0x100 (Inherited: 0x100)
class UFieldNodeVector : public UFieldNodeBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.OperatorField
// Size: 0x120 (Inherited: 0x100)
class UOperatorField : public UFieldNodeBase {
public:

	float Magnitude; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct UFieldNodeBase* RightField; // 0x108(0x08)
	struct UFieldNodeBase* LeftField; // 0x110(0x08)
	enum class EFieldOperationType Operation; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.CullingField
// Size: 0x118 (Inherited: 0x100)
class UCullingField : public UFieldNodeBase {
public:

	struct UFieldNodeBase* Culling; // 0x100(0x08)
	struct UFieldNodeBase* Field; // 0x108(0x08)
	enum class EFieldCullingOperationType Operation; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0x100 (Inherited: 0x100)
class UReturnResultsTerminal : public UFieldNodeBase {
public:


	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.UniformInteger
// Size: 0x108 (Inherited: 0x100)
class UUniformInteger : public UFieldNodeInt {
public:

	int32_t Magnitude; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0x120 (Inherited: 0x100)
class URadialIntMask : public UFieldNodeInt {
public:

	float radius; // 0x100(0x04)
	struct FVector Position; // 0x104(0x0c)
	int32_t InteriorValue; // 0x110(0x04)
	int32_t ExteriorValue; // 0x114(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)

	struct URadialIntMask* SetRadialIntMask(float radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0x108 (Inherited: 0x100)
class UToIntegerField : public UFieldNodeInt {
public:

	struct UFieldNodeFloat* FloatField; // 0x100(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.UniformScalar
// Size: 0x108 (Inherited: 0x100)
class UUniformScalar : public UFieldNodeFloat {
public:

	float Magnitude; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0x128 (Inherited: 0x100)
class URadialFalloff : public UFieldNodeFloat {
public:

	float Magnitude; // 0x100(0x04)
	float MinRange; // 0x104(0x04)
	float MaxRange; // 0x108(0x04)
	float Default; // 0x10c(0x04)
	float radius; // 0x110(0x04)
	struct FVector Position; // 0x114(0x0c)
	enum class EFieldFalloffType Falloff; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0x130 (Inherited: 0x100)
class UPlaneFalloff : public UFieldNodeFloat {
public:

	float Magnitude; // 0x100(0x04)
	float MinRange; // 0x104(0x04)
	float MaxRange; // 0x108(0x04)
	float Default; // 0x10c(0x04)
	float Distance; // 0x110(0x04)
	struct FVector Position; // 0x114(0x0c)
	struct FVector Normal; // 0x120(0x0c)
	enum class EFieldFalloffType Falloff; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x150 (Inherited: 0x100)
class UBoxFalloff : public UFieldNodeFloat {
public:

	float Magnitude; // 0x100(0x04)
	float MinRange; // 0x104(0x04)
	float MaxRange; // 0x108(0x04)
	float Default; // 0x10c(0x04)
	struct FTransform Transform; // 0x110(0x30)
	enum class EFieldFalloffType Falloff; // 0x140(0x01)
	char pad_141[0xf]; // 0x141(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.NoiseField
// Size: 0x140 (Inherited: 0x100)
class UNoiseField : public UFieldNodeFloat {
public:

	float MinRange; // 0x100(0x04)
	float MaxRange; // 0x104(0x04)
	char pad_108[0x8]; // 0x108(0x08)
	struct FTransform Transform; // 0x110(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.ToFloatField
// Size: 0x108 (Inherited: 0x100)
class UToFloatField : public UFieldNodeFloat {
public:

	struct UFieldNodeInt* IntField; // 0x100(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.UniformVector
// Size: 0x110 (Inherited: 0x100)
class UUniformVector : public UFieldNodeVector {
public:

	float Magnitude; // 0x100(0x04)
	struct FVector Direction; // 0x104(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.RadialVector
// Size: 0x110 (Inherited: 0x100)
class URadialVector : public UFieldNodeVector {
public:

	float Magnitude; // 0x100(0x04)
	struct FVector Position; // 0x104(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FieldSystemEngine.RandomVector
// Size: 0x108 (Inherited: 0x100)
class URandomVector : public UFieldNodeVector {
public:

	float Magnitude; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
