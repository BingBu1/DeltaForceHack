
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class PBDPhysics.PBDChainCollisionData
// Size: 0x68 (Inherited: 0x38)
class UPBDChainCollisionData : public UDataAsset {
public:

	struct TArray<struct FOutSideSphereCollisionInfo> Spheres; // 0x38(0x10)
	struct TArray<struct FOutsideCapsuleCollisionInfo> Capsules; // 0x48(0x10)
	struct TArray<struct FOutsidePlaneCollisionInfo> Planes; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PBDPhysics.PBDChainWindData
// Size: 0x98 (Inherited: 0x30)
class UPBDChainWindData : public UObject {
public:

	struct FName WindName; // 0x30(0x08)
	float WindPower; // 0x38(0x04)
	enum class EBoneControlSpace WindSpace; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector WindDirection; // 0x40(0x0c)
	float WindPowerFluctuation; // 0x4c(0x04)
	float WindPowerFluctuationFrequency; // 0x50(0x04)
	enum class EWindType WindWaveType; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float WaveFrequency; // 0x58(0x04)
	struct FVector2D WaveRange; // 0x5c(0x08)
	bool bEnableTurbulence; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FChainWindTurbulenceData WindTurbulenceData; // 0x68(0x1c)
	float WindBoneDepthDelay; // 0x84(0x04)
	float WindRootBoneDelay; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UCurveFloat* WindPowerScaleCurve; // 0x90(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PBDPhysics.PBDChainWindConfig
// Size: 0x48 (Inherited: 0x38)
class UPBDChainWindConfig : public UDataAsset {
public:

	struct TArray<struct UPBDChainWindData*> WinDataArray; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PBDPhysics.PBDPhysicsBPLibrary
// Size: 0x30 (Inherited: 0x30)
class UPBDPhysicsBPLibrary : public UBlueprintFunctionLibrary {
public:


	float STATIC_SquaredDistanceFromPointToSegment(struct FVector CapsulePointA, struct FVector CapsulePointB, struct FVector TestPoint); // Function PBDPhysics.PBDPhysicsBPLibrary.SquaredDistanceFromPointToSegment // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
