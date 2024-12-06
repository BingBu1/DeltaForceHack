
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class UIParticular.InstanceTemplateWidget
// Size: 0x2a8 (Inherited: 0x168)
class UInstanceTemplateWidget : public UWidget {
public:

	/*struct TSoftObjectPtr<UUserWidget>*/char WidgetTemplate[0x28]; // 0x168(0x28)
	bool bAutoActivate; // 0x190(0x01)
	bool TickWhenPaused; // 0x191(0x01)
	bool bReactivate; // 0x192(0x01)
	bool bCullWhenLeaveViewport; // 0x193(0x01)
	struct FRotator MeshRotate; // 0x194(0x0c)
	float fRotate; // 0x1a0(0x04)
	struct FName RotateName; // 0x1a4(0x08)
	bool FakeDepthScale; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	float FakeDepthScaleDistance; // 0x1b0(0x04)
	bool DisableWarnings; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	struct FSlateBrush Brush; // 0x1b8(0x90)
	struct TArray<struct FVector2D> MeshUVArray; // 0x248(0x10)
	struct TArray<struct FVector> MeshPositionArray; // 0x258(0x10)
	struct TArray<struct FVector> MeshOrginPosArray; // 0x268(0x10)
	struct TArray<uint32_t> MeshIndexArray; // 0x278(0x10)
	struct TArray<struct FColor> MeshColorArray; // 0x288(0x10)
	char pad_298[0x10]; // 0x298(0x10)

	void SetTickWhenPaused(bool NewTickWhenPaused); // Function UIParticular.InstanceTemplateWidget.SetTickWhenPaused // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UIParticular.ParticleWidget
// Size: 0x1c8 (Inherited: 0x168)
class UParticleWidget : public UWidget {
public:

	struct UFXSystemAsset* ParticleSystemTemplate; // 0x168(0x08)
	bool bAutoActivate; // 0x170(0x01)
	enum class EParticleAxisFlags ParticleAxis; // 0x171(0x01)
	bool TickWhenPaused; // 0x172(0x01)
	bool bReactivate; // 0x173(0x01)
	bool bCullWhenLeaveViewport; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	struct FRotator ParticleRotate; // 0x178(0x0c)
	float fRotate; // 0x184(0x04)
	struct FName RotateName; // 0x188(0x08)
	float SizeScale; // 0x190(0x04)
	bool FakeDepthScale; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float FakeDepthScaleDistance; // 0x198(0x04)
	bool DisableWarnings; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	struct TArray<struct UMaterialInterface*> MaterialRemapArray; // 0x1a0(0x10)
	struct UFXSystemComponent* WorldParticleComponent; // 0x1b0(0x08)
	char pad_1B8[0x10]; // 0x1b8(0x10)

	void SetTickWhenPaused(bool NewTickWhenPaused); // Function UIParticular.ParticleWidget.SetTickWhenPaused // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UIParticular.UICascadedComponent
// Size: 0x800 (Inherited: 0x7d0)
class UUICascadedComponent : public UParticleSystemComponent {
public:

	char pad_7D0[0x30]; // 0x7d0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UIParticular.UIMeshWidget
// Size: 0xcb0 (Inherited: 0x168)
class UUIMeshWidget : public UWidget {
public:

	/*struct TSoftObjectPtr<UStaticMesh>*/char MeshRes[0x28]; // 0x168(0x28)
	struct FTransform Transform; // 0x190(0x30)
	struct FSlateBrush Brush; // 0x1c0(0x90)
	struct FLinearColor ColorAndOpacity; // 0x250(0x10)
	bool bFill; // 0x260(0x01)
	bool bEnableVertexColor; // 0x261(0x01)
	bool bUseOriginVertex; // 0x262(0x01)
	bool bAutoActivate; // 0x263(0x01)
	bool TickWhenPaused; // 0x264(0x01)
	bool bAdjustViewInfo; // 0x265(0x01)
	bool FakeDepthScale; // 0x266(0x01)
	char pad_267[0x1]; // 0x267(0x01)
	float FakeDepthScaleDistance; // 0x268(0x04)
	bool DisableWarnings; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct TArray<struct FVector2D> MeshUVArray; // 0x270(0x10)
	struct TArray<struct FVector> MeshPositionArray; // 0x280(0x10)
	struct TArray<struct FVector> MeshOriginPosArray; // 0x290(0x10)
	struct TArray<uint32_t> MeshIndexArray; // 0x2a0(0x10)
	struct TArray<struct FColor> MeshColorArray; // 0x2b0(0x10)
	char pad_2C0[0x9f0]; // 0x2c0(0x9f0)

	void SetTickWhenPaused(bool NewTickWhenPaused); // Function UIParticular.UIMeshWidget.SetTickWhenPaused // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UIParticular.UMGStaticsLibrary
// Size: 0x30 (Inherited: 0x30)
class UUMGStaticsLibrary : public UBlueprintFunctionLibrary {
public:


	float STATIC_PlayAnimationByName(struct UUserWidget* UserWidget, struct FString AnimName, struct FString WidgetName, enum class EUMGPlayAnimMode PlayMode); // Function UIParticular.UMGStaticsLibrary.PlayAnimationByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
