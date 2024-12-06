
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class SpinePlugin.SpineAtlasAsset
// Size: 0x60 (Inherited: 0x30)
class USpineAtlasAsset : public UObject {
public:

	struct TArray<struct UTexture2D*> atlasPages; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
	struct FString RawData; // 0x48(0x10)
	struct FName atlasFileName; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SpinePlugin.SpineBoneDriverComponent
// Size: 0x270 (Inherited: 0x240)
class USpineBoneDriverComponent : public USceneComponent {
public:

	struct AActor* Target; // 0x240(0x08)
	struct FString BoneName; // 0x248(0x10)
	bool UseComponentTransform; // 0x258(0x01)
	bool UsePosition; // 0x259(0x01)
	bool UseRotation; // 0x25a(0x01)
	bool UseScale; // 0x25b(0x01)
	char pad_25C[0x14]; // 0x25c(0x14)

	void BeforeUpdateWorldTransform(struct USpineSkeletonComponent* Skeleton); // Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SpinePlugin.SpineBoneFollowerComponent
// Size: 0x260 (Inherited: 0x240)
class USpineBoneFollowerComponent : public USceneComponent {
public:

	struct AActor* Target; // 0x240(0x08)
	struct FString BoneName; // 0x248(0x10)
	bool UseComponentTransform; // 0x258(0x01)
	bool UsePosition; // 0x259(0x01)
	bool UseRotation; // 0x25a(0x01)
	bool UseScale; // 0x25b(0x01)
	char pad_25C[0x4]; // 0x25c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SpinePlugin.TrackEntry
// Size: 0x98 (Inherited: 0x30)
class UTrackEntry : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char animationStart[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationInterrupt[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationEvent[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationComplete[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char animationEnd[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationDispose[0x10]; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	void SetTrackTime(float TrackTime); // Function SpinePlugin.TrackEntry.SetTrackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SpinePlugin.SpineSkeletonDataAsset
// Size: 0x100 (Inherited: 0x30)
class USpineSkeletonDataAsset : public UObject {
public:

	float DefaultMix; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FSpineAnimationStateMixData> MixData; // 0x38(0x10)
	struct TArray<struct FString> Bones; // 0x48(0x10)
	struct TArray<struct FString> Slots; // 0x58(0x10)
	struct TArray<struct FString> Skins; // 0x68(0x10)
	struct TArray<struct FString> Animations; // 0x78(0x10)
	struct TArray<struct FString> Events; // 0x88(0x10)
	struct TArray<char> RawData; // 0x98(0x10)
	struct FName skeletonDataFileName; // 0xa8(0x08)
	char pad_B0[0x50]; // 0xb0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SpinePlugin.SpineSkeletonRendererComponent
// Size: 0xae0 (Inherited: 0x730)
class USpineSkeletonRendererComponent : public UProceduralMeshComponent {
public:

	struct UMaterialInterface* NormalBlendMaterial; // 0x730(0x08)
	struct UMaterialInterface* AdditiveBlendMaterial; // 0x738(0x08)
	struct UMaterialInterface* MultiplyBlendMaterial; // 0x740(0x08)
	struct UMaterialInterface* ScreenBlendMaterial; // 0x748(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials; // 0x750(0x10)
	char pad_760[0x50]; // 0x760(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials; // 0x7b0(0x10)
	char pad_7C0[0x50]; // 0x7c0(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials; // 0x810(0x10)
	char pad_820[0x50]; // 0x820(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials; // 0x870(0x10)
	char pad_880[0x50]; // 0x880(0x50)
	float DepthOffset; // 0x8d0(0x04)
	struct FName TextureParameterName; // 0x8d4(0x08)
	struct FLinearColor Color; // 0x8dc(0x10)
	bool bCreateCollision; // 0x8ec(0x01)
	char pad_8ED[0x1f3]; // 0x8ed(0x1f3)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SpinePlugin.SpineWidget
// Size: 0x6e8 (Inherited: 0x168)
class USpineWidget : public UWidget {
public:

	float Scale; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FString InitialSkin; // 0x170(0x10)
	struct USpineAtlasAsset* Atlas; // 0x180(0x08)
	struct USpineSkeletonDataAsset* SkeletonData; // 0x188(0x08)
	struct UMaterialInterface* NormalBlendMaterial; // 0x190(0x08)
	struct UMaterialInterface* AdditiveBlendMaterial; // 0x198(0x08)
	struct UMaterialInterface* MultiplyBlendMaterial; // 0x1a0(0x08)
	struct UMaterialInterface* ScreenBlendMaterial; // 0x1a8(0x08)
	struct FName TextureParameterName; // 0x1b0(0x08)
	float DepthOffset; // 0x1b8(0x04)
	struct FLinearColor Color; // 0x1bc(0x10)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct FSlateBrush Brush; // 0x1d0(0x90)
	/*struct FMulticastInlineDelegate*/char BeforeUpdateWorldTransform[0x10]; // 0x260(0x10)
	/*struct FMulticastInlineDelegate*/char AfterUpdateWorldTransform[0x10]; // 0x270(0x10)
	/*struct FMulticastInlineDelegate*/char animationStart[0x10]; // 0x280(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationInterrupt[0x10]; // 0x290(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationEvent[0x10]; // 0x2a0(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationComplete[0x10]; // 0x2b0(0x10)
	/*struct FMulticastInlineDelegate*/char animationEnd[0x10]; // 0x2c0(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationDispose[0x10]; // 0x2d0(0x10)
	char pad_2E0[0x40]; // 0x2e0(0x40)
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials; // 0x320(0x10)
	char pad_330[0x50]; // 0x330(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials; // 0x380(0x10)
	char pad_390[0x50]; // 0x390(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials; // 0x3e0(0x10)
	char pad_3F0[0x50]; // 0x3f0(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials; // 0x440(0x10)
	char pad_450[0x240]; // 0x450(0x240)
	/*struct TSet<struct UTrackEntry*>*/char trackEntries[0x50]; // 0x690(0x50)
	bool bAutoPlaying; // 0x6e0(0x01)
	char pad_6E1[0x7]; // 0x6e1(0x07)

	void UpdateWorldTransform(); // Function SpinePlugin.SpineWidget.UpdateWorldTransform // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SpinePlugin.SpineSkeletonComponent
// Size: 0x158 (Inherited: 0x100)
class USpineSkeletonComponent : public UActorComponent {
public:

	struct USpineAtlasAsset* Atlas; // 0x100(0x08)
	struct USpineSkeletonDataAsset* SkeletonData; // 0x108(0x08)
	/*struct FMulticastInlineDelegate*/char BeforeUpdateWorldTransform[0x10]; // 0x110(0x10)
	/*struct FMulticastInlineDelegate*/char AfterUpdateWorldTransform[0x10]; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)
	struct USpineAtlasAsset* lastAtlas; // 0x138(0x08)
	char pad_140[0x18]; // 0x140(0x18)

	void UpdateWorldTransform(); // Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SpinePlugin.SpineSkeletonAnimationComponent
// Size: 0x258 (Inherited: 0x158)
class USpineSkeletonAnimationComponent : public USpineSkeletonComponent {
public:

	/*struct FMulticastInlineDelegate*/char animationStart[0x10]; // 0x158(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationInterrupt[0x10]; // 0x168(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationEvent[0x10]; // 0x178(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationComplete[0x10]; // 0x188(0x10)
	/*struct FMulticastInlineDelegate*/char animationEnd[0x10]; // 0x198(0x10)
	/*struct FMulticastInlineDelegate*/char AnimationDispose[0x10]; // 0x1a8(0x10)
	struct FString PreviewAnimation; // 0x1b8(0x10)
	struct FString PreviewSkin; // 0x1c8(0x10)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	/*struct TSet<struct UTrackEntry*>*/char trackEntries[0x50]; // 0x1e0(0x50)
	bool bAutoPlaying; // 0x230(0x01)
	char pad_231[0x27]; // 0x231(0x27)

	void SetTimeScale(float TimeScale); // Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
