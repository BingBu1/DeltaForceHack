
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ImageStyleRuntime.ImageStyleBlueprintFuncLib
// Size: 0x30 (Inherited: 0x30)
class UImageStyleBlueprintFuncLib : public UBlueprintFunctionLibrary {
public:


	void STATIC_SetImageStyle(struct UImage* InImage, struct FName InStyleName); // Function ImageStyleRuntime.ImageStyleBlueprintFuncLib.SetImageStyle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ImageStyleRuntime.ImageStyleRuntimeManager
// Size: 0xd0 (Inherited: 0x38)
class UImageStyleRuntimeManager : public UEngineSubsystem {
public:

	char pad_38[0x90]; // 0x38(0x90)
	struct UDataTable* CachedCurImageStyleConfig; // 0xc8(0x08)

	bool GetImageStyleCfgData(struct FName& InName, struct FImageStyle& OutCustomImageStyle); // Function ImageStyleRuntime.ImageStyleRuntimeManager.GetImageStyleCfgData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
