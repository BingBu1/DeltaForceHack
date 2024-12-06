
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldSceneAutommation.OpenWorldSceneAutommationFlowComponent
// Size: 0x2b0 (Inherited: 0x240)
class UOpenWorldSceneAutommationFlowComponent : public USceneComponent {
public:

	float PlayerSpeed; // 0x240(0x04)
	float PlayerHigh; // 0x244(0x04)
	struct FString POIName; // 0x248(0x10)
	struct TArray<struct FOpenWorldSceneAutomationFlowRuntimeSection> RuntimeSections; // 0x258(0x10)
	char pad_268[0x28]; // 0x268(0x28)
	struct UWorld* CacheWorld; // 0x290(0x08)
	char pad_298[0x18]; // 0x298(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldSceneAutommation.OpenWorldSceneAutommationFlow
// Size: 0x390 (Inherited: 0x378)
class AOpenWorldSceneAutommationFlow : public AActor {
public:

	struct UOpenWorldSceneAutommationFlowComponent* FlowComponent; // 0x378(0x08)
	struct FString OpenWorldSceneAutommationFlowName; // 0x380(0x10)

	void InitAutomationData(); // Function OpenWorldSceneAutommation.OpenWorldSceneAutommationFlow.InitAutomationData // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldSceneAutommation.OpenWorldSceneAutommationMethod
// Size: 0x38 (Inherited: 0x30)
class UOpenWorldSceneAutommationMethod : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	void UpdatePlayerLocaiton(struct FVector& InPlayerLocation, struct FRotator& InPlayerRotator); // Function OpenWorldSceneAutommation.OpenWorldSceneAutommationMethod.UpdatePlayerLocaiton // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
