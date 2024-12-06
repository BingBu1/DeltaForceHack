
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldPhysicsStreaming.PhysXDrawingSettings
// Size: 0x1b8 (Inherited: 0x40)
class UPhysXDrawingSettings : public UDeveloperSettings {
public:

	bool bFreeze; // 0x40(0x01)
	bool bMessage; // 0x41(0x01)
	bool bMainCharacter; // 0x42(0x01)
	bool bSolidTrigger; // 0x43(0x01)
	bool bDoubleSided; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float Opacity; // 0x48(0x04)
	float offset; // 0x4c(0x04)
	float CullingScreenSize; // 0x50(0x04)
	float FarClippingDistance; // 0x54(0x04)
	float MaxTranslucentExtent; // 0x58(0x04)
	float MaxTriggerExtent; // 0x5c(0x04)
	float StaticInterval; // 0x60(0x04)
	float SceneMessageInterval; // 0x64(0x04)
	float SelectionInterval; // 0x68(0x04)
	float MessageSize; // 0x6c(0x04)
	int32_t MarginX; // 0x70(0x04)
	int32_t MarginY; // 0x74(0x04)
	int32_t Mode; // 0x78(0x04)
	int32_t Color; // 0x7c(0x04)
	int32_t ElementLimit; // 0x80(0x04)
	int32_t Inclusion; // 0x84(0x04)
	int32_t Exclusion; // 0x88(0x04)
	int32_t TracingChannel; // 0x8c(0x04)
	int32_t HiddenChannel; // 0x90(0x04)
	int32_t Selection; // 0x94(0x04)
	int32_t SelectionColor; // 0x98(0x04)
	int32_t SelectionSize; // 0x9c(0x04)
	bool bResolve; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float ResolveOpacity; // 0xa4(0x04)
	float ResolveSize; // 0xa8(0x04)
	int32_t Net; // 0xac(0x04)
	float NetDistance; // 0xb0(0x04)
	int32_t NetPackets; // 0xb4(0x04)
	int32_t NetColor; // 0xb8(0x04)
	int32_t NetMode; // 0xbc(0x04)
	float NetOpacity; // 0xc0(0x04)
	float NetOffset; // 0xc4(0x04)
	bool bOffline; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TArray<struct FString> IgnoreComponentWildcards; // 0xd0(0x10)
	struct TArray<struct FString> EnableDrawingCommands; // 0xe0(0x10)
	struct TArray<struct FString> DisableDrawingCommands; // 0xf0(0x10)
	struct TArray<struct FString> ShowOthersCommands; // 0x100(0x10)
	struct TArray<struct FString> HideOthersCommands; // 0x110(0x10)
	struct TArray<struct FString> EnableDiffCommands; // 0x120(0x10)
	struct TArray<struct FString> DisableDiffCommands; // 0x130(0x10)
	/*struct TSoftObjectPtr<UMaterial>*/char OpaqueMaterialPath[0x28]; // 0x140(0x28)
	/*struct TSoftObjectPtr<UMaterial>*/char TranslucentMaterialPath[0x28]; // 0x168(0x28)
	/*struct TSoftObjectPtr<UMaterial>*/char UnlitMaterialPath[0x28]; // 0x190(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPhysicsStreaming.PhysXDrawingComponent
// Size: 0x5c0 (Inherited: 0x560)
class UPhysXDrawingComponent : public UPrimitiveComponent {
public:

	char pad_560[0x60]; // 0x560(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPhysicsStreaming.PhysXSerialBlendMask
// Size: 0x70 (Inherited: 0x30)
class UPhysXSerialBlendMask : public UObject {
public:

	char UVChannel; // 0x30(0x01)
	enum class TextureAddress AddressX; // 0x31(0x01)
	enum class TextureAddress AddressY; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	struct FIntPoint TextureSize; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<char> TextureData; // 0x40(0x10)
	struct FName SourceInfo; // 0x50(0x08)
	struct FDateTime Timestamp; // 0x58(0x08)
	struct TArray<struct UPhysicalMaterial*> Materials; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPhysicsStreaming.PhysXSerialBodySetup
// Size: 0x140 (Inherited: 0x30)
class UPhysXSerialBodySetup : public UObject {
public:

	struct FName SourceInfo; // 0x30(0x08)
	struct FDateTime Timestamp; // 0x38(0x08)
	struct FKAggregateGeom AggGeom; // 0x40(0x58)
	struct TArray<struct FIntPoint> ConvexMeshToMirrored; // 0x98(0x10)
	struct TArray<struct FIntPoint> GeomToShape; // 0xa8(0x10)
	struct TArray<char> FilterDataBytes; // 0xb8(0x10)
	struct TArray<struct UPhysicalMaterial*> Materials; // 0xc8(0x10)
	struct TArray<struct UPhysXSerialBlendMask*> BlendMasks; // 0xd8(0x10)
	struct TArray<char> FaceMaterialIndices; // 0xe8(0x10)
	char bIsHeightField : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x47]; // 0xf9(0x47)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPhysicsStreaming.PhysXSerialComponent
// Size: 0x650 (Inherited: 0x560)
class UPhysXSerialComponent : public UPrimitiveComponent {
public:

	struct TArray<struct FPhysXSerialActor> SerialActors; // 0x560(0x10)
	struct TArray<struct FPhysXSerialBodyInstance> SerialBodyInstances; // 0x570(0x10)
	struct FDateTime Timestamp; // 0x580(0x08)
	char bDestructible : 1; // 0x588(0x01)
	char pad_588_1 : 7; // 0x588(0x01)
	char pad_589[0xc7]; // 0x589(0xc7)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPhysicsStreaming.PhysXSceneProxyActor
// Size: 0x378 (Inherited: 0x378)
class APhysXSceneProxyActor : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPhysicsStreaming.PhysXProxyScheduler
// Size: 0x70 (Inherited: 0x38)
class UPhysXProxyScheduler : public UWorldSubsystem {
public:

	char pad_38[0x38]; // 0x38(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPhysicsStreaming.PhysXProxySettings
// Size: 0x50 (Inherited: 0x40)
class UPhysXProxySettings : public UDeveloperSettings {
public:

	bool bDisableBlendMask; // 0x40(0x01)
	bool bDisableScheduler; // 0x41(0x01)
	bool bPruningStructure; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	int32_t SchedulerStep; // 0x44(0x04)
	float SchedulerTimeLimit; // 0x48(0x04)
	float SchedulerInterval; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPhysicsStreaming.PhysXDrawingBase
// Size: 0x5a0 (Inherited: 0x378)
class APhysXDrawingBase : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)
	struct UPhysXDrawingComponent* StaticDrawingComponent; // 0x380(0x08)
	struct UPhysXDrawingComponent* DynamicDrawingComponent; // 0x388(0x08)
	char pad_390[0x210]; // 0x390(0x210)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPhysicsStreaming.PhysXDrawingNet
// Size: 0x710 (Inherited: 0x5a0)
class APhysXDrawingNet : public APhysXDrawingBase {
public:

	struct UPhysXDrawingComponent* NetDrawingComponent; // 0x5a0(0x08)
	char pad_5A8[0x168]; // 0x5a8(0x168)

	void ServerDestroy(); // Function OpenWorldPhysicsStreaming.PhysXDrawingNet.ServerDestroy // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldPhysicsStreaming.PhysXDrawing
// Size: 0x710 (Inherited: 0x710)
class APhysXDrawing : public APhysXDrawingNet {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
