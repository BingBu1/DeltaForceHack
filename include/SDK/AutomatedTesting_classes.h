
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AutomatedTesting.AutomatedTestingHelpers
// Size: 0x30 (Inherited: 0x30)
class UAutomatedTestingHelpers : public UObject {
public:


	void STATIC_WriteExecResult(struct FString Result); // Function AutomatedTesting.AutomatedTestingHelpers.WriteExecResult // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AutomatedTesting.AutomatedTestingInterface
// Size: 0x30 (Inherited: 0x30)
class UAutomatedTestingInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AutomatedTesting.BPAutomatedTestingConfig
// Size: 0x30 (Inherited: 0x30)
class UBPAutomatedTestingConfig : public UBlueprintFunctionLibrary {
public:


	void STATIC_MountPufferPaks(); // Function AutomatedTesting.BPAutomatedTestingConfig.MountPufferPaks // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AutomatedTesting.RuntimeSceneCaptureCamera
// Size: 0xd10 (Inherited: 0xd00)
class ARuntimeSceneCaptureCamera : public ACameraActor {
public:

	struct USceneCaptureComponent2D* CaptureComponent; // 0xd00(0x08)
	char pad_D08[0x8]; // 0xd08(0x08)

	void SaveCaptureResult(struct UTextureRenderTarget2D* InCaptureResult, struct FString CaptureResultSavedPath, struct FString CaptureResultSavedName, bool bShouldSave); // Function AutomatedTesting.RuntimeSceneCaptureCamera.SaveCaptureResult // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AutomatedTesting.RuntimeSceneCaptureController
// Size: 0x378 (Inherited: 0x378)
class ARuntimeSceneCaptureController : public AActor {
public:


	struct TArray<struct FString> SplitString(struct FString SourceString, struct FString Delimiter, bool bCullEmpty); // Function AutomatedTesting.RuntimeSceneCaptureController.SplitString // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
