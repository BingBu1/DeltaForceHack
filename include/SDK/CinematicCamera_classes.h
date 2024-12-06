
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class CinematicCamera.CineCameraActor
// Size: 0xd60 (Inherited: 0xd00)
class ACineCameraActor : public ACameraActor {
public:

	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0xd00(0x50)
	char pad_D50[0x10]; // 0xd50(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xd10 (Inherited: 0xc10)
class UCineCameraComponent : public UCameraComponent {
public:

	struct FCameraFilmbackSettings FilmbackSettings; // 0xc10(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0xc1c(0x0c)
	struct FCameraLensSettings LensSettings; // 0xc28(0x1c)
	char pad_C44[0x4]; // 0xc44(0x04)
	struct FCameraFocusSettings FocusSettings; // 0xc48(0x58)
	float CurrentFocalLength; // 0xca0(0x04)
	float CurrentAperture; // 0xca4(0x04)
	float CurrentFocusDistance; // 0xca8(0x04)
	char pad_CAC[0xc]; // 0xcac(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0xcb8(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0xcc8(0x10)
	struct FString DefaultFilmbackPresetName; // 0xcd8(0x10)
	struct FString DefaultFilmbackPreset; // 0xce8(0x10)
	struct FString DefaultLensPresetName; // 0xcf8(0x10)
	float DefaultLensFocalLength; // 0xd08(0x04)
	float DefaultLensFStop; // 0xd0c(0x04)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class CinematicCamera.CameraRig_Crane
// Size: 0x3a8 (Inherited: 0x378)
class ACameraRig_Crane : public AActor {
public:

	float CranePitch; // 0x378(0x04)
	float CraneYaw; // 0x37c(0x04)
	float CraneArmLength; // 0x380(0x04)
	bool bLockMountPitch; // 0x384(0x01)
	bool bLockMountYaw; // 0x385(0x01)
	char pad_386[0x2]; // 0x386(0x02)
	struct USceneComponent* TransformComponent; // 0x388(0x08)
	struct USceneComponent* CraneYawControl; // 0x390(0x08)
	struct USceneComponent* CranePitchControl; // 0x398(0x08)
	struct USceneComponent* CraneCameraMount; // 0x3a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x398 (Inherited: 0x378)
class ACameraRig_Rail : public AActor {
public:

	float CurrentPositionOnRail; // 0x378(0x04)
	bool bLockOrientationToRail; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	struct USceneComponent* TransformComponent; // 0x380(0x08)
	struct USplineComponent* RailSplineComponent; // 0x388(0x08)
	struct USceneComponent* RailCameraMount; // 0x390(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
