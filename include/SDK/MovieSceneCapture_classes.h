
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x30 (Inherited: 0x30)
class UMovieSceneCaptureInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x30 (Inherited: 0x30)
class UMovieSceneCaptureEnvironment : public UObject {
public:


	bool STATIC_IsCaptureInProgress(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x60 (Inherited: 0x30)
class UMovieSceneCaptureProtocolBase : public UObject {
public:

	char pad_30[0x28]; // 0x30(0x28)
	enum class EMovieSceneCaptureProtocolState State; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	bool IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x228 (Inherited: 0x30)
class UMovieSceneCapture : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)
	struct FSoftClassPath ImageCaptureProtocolType; // 0x40(0x18)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x58(0x18)
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x70(0x08)
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x78(0x08)
	struct FMovieSceneCaptureSettings Settings; // 0x80(0x70)
	bool bUseSeparateProcess; // 0xf0(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct FString AdditionalCommandLineArguments; // 0xf8(0x10)
	struct FString InheritedCommandLineArguments; // 0x108(0x10)
	char pad_118[0x110]; // 0x118(0x110)

	void SetImageCaptureProtocolType(struct UClass* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Size: 0x60 (Inherited: 0x60)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Size: 0x60 (Inherited: 0x60)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x248 (Inherited: 0x228)
class ULevelCapture : public UMovieSceneCapture {
public:

	bool bAutoStartCapture; // 0x228(0x01)
	char pad_229[0xb]; // 0x229(0x0b)
	struct FGuid PrerequisiteActorId; // 0x234(0x10)
	char pad_244[0x4]; // 0x244(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.NullAudioCaptureProtocol
// Size: 0x60 (Inherited: 0x60)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size: 0x98 (Inherited: 0x60)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {
public:

	struct FString Filename; // 0x60(0x10)
	char pad_70[0x28]; // 0x70(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0xc8 (Inherited: 0x60)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {
public:

	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x60(0x10)
	bool bCaptureFramesInHDR; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t HDRCompressionQuality; // 0x74(0x04)
	enum class EHDRCaptureGamut CaptureGamut; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FSoftObjectPath PostProcessingMaterial; // 0x80(0x18)
	bool bDisableScreenPercentage; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct UMaterialInterface* PostProcessingMaterialPtr; // 0xa0(0x08)
	char pad_A8[0x20]; // 0xa8(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.FrameGrabberProtocol
// Size: 0x70 (Inherited: 0x60)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase {
public:

	char pad_60[0x10]; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0xe0 (Inherited: 0x60)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {
public:

	struct UWorld* World; // 0x60(0x08)
	char pad_68[0x78]; // 0x68(0x78)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.ImageSequenceProtocol
// Size: 0xe0 (Inherited: 0x70)
class UImageSequenceProtocol : public UFrameGrabberProtocol {
public:

	char pad_70[0x70]; // 0x70(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.VideoCaptureProtocol
// Size: 0x88 (Inherited: 0x70)
class UVideoCaptureProtocol : public UFrameGrabberProtocol {
public:

	bool bUseCompression; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float CompressionQuality; // 0x74(0x04)
	char pad_78[0x10]; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0xe8 (Inherited: 0xe0)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol {
public:

	enum class EDesiredImageFormat Format; // 0xe0(0x01)
	bool bEnableCompression; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	int32_t CompressionQuality; // 0xe4(0x04)

	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size: 0xe8 (Inherited: 0xe0)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol {
public:

	int32_t CompressionQuality; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// Size: 0xe0 (Inherited: 0xe0)
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0xf0 (Inherited: 0xe0)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol {
public:

	bool bCompressed; // 0xe0(0x01)
	enum class EHDRCaptureGamut CaptureGamut; // 0xe1(0x01)
	char pad_E2[0xe]; // 0xe2(0x0e)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// Size: 0xe8 (Inherited: 0xe8)
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// Size: 0xe8 (Inherited: 0xe8)
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
