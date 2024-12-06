
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class CaptureStudio.CaptureEnv
// Size: 0xd60 (Inherited: 0x378)
class ACaptureEnv : public AActor {
public:

	struct UClass* CharacterClass; // 0x378(0x08)
	struct UClass* BPLightEnvClass; // 0x380(0x08)
	uint32_t RenderTargetSizeX; // 0x388(0x04)
	uint32_t RenderTargetSizeY; // 0x38c(0x04)
	bool bDisableWorldRender; // 0x390(0x01)
	bool bCaptureOnEndFrame; // 0x391(0x01)
	char pad_392[0x6]; // 0x392(0x06)
	struct AActor* ALightEnv; // 0x398(0x08)
	struct USceneCaptureComponent2D* Capture2DCom; // 0x3a0(0x08)
	char pad_3A8[0x10]; // 0x3a8(0x10)
	struct USceneComponent* RootPoint; // 0x3b8(0x08)
	struct FCaptureTarget CaptureTarget; // 0x3c0(0x10)
	struct FPostProcessSettings DefaultPostProcessSettings; // 0x3d0(0x950)
	struct TArray<struct ULightComponent*> AllLight; // 0xd20(0x10)
	char pad_D30[0x30]; // 0xd30(0x30)

	void WeaponLoadComplete(); // Function CaptureStudio.CaptureEnv.WeaponLoadComplete // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class CaptureStudio.CaptureLight
// Size: 0x378 (Inherited: 0x378)
class ACaptureLight : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class CaptureStudio.CaptureStudioManager
// Size: 0x60 (Inherited: 0x38)
class UCaptureStudioManager : public UWorldSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnCaptureEnvLoaded[0x10]; // 0x38(0x10)
	struct ACaptureEnv* CaptureEnv; // 0x48(0x08)
	char pad_50[0x10]; // 0x50(0x10)

	void LoadCaptureEnv(struct FString CaptureEnvPath); // Function CaptureStudio.CaptureStudioManager.LoadCaptureEnv // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
