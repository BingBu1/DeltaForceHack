
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x800 (Inherited: 0x798)
class AArchVisCharacter : public ACHARACTER {
public:

	struct FString LookUpAxisName; // 0x798(0x10)
	struct FString LookUpAtRateAxisName; // 0x7a8(0x10)
	struct FString TurnAxisName; // 0x7b8(0x10)
	struct FString TurnAtRateAxisName; // 0x7c8(0x10)
	struct FString MoveForwardAxisName; // 0x7d8(0x10)
	struct FString MoveRightAxisName; // 0x7e8(0x10)
	float MouseSensitivityScale_Pitch; // 0x7f8(0x04)
	float MouseSensitivityScale_Yaw; // 0x7fc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0x7f0 (Inherited: 0x7a0)
class UArchVisCharMovementComponent : public UCharacterMovementComponent {
public:

	struct FRotator RotationalAcceleration; // 0x7a0(0x0c)
	struct FRotator RotationalDeceleration; // 0x7ac(0x0c)
	struct FRotator MaxRotationalVelocity; // 0x7b8(0x0c)
	float MinPitch; // 0x7c4(0x04)
	float MaxPitch; // 0x7c8(0x04)
	float WalkingFriction; // 0x7cc(0x04)
	float WalkingSpeed; // 0x7d0(0x04)
	float WalkingAcceleration; // 0x7d4(0x04)
	char pad_7D8[0x18]; // 0x7d8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
