
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class TextStyleRuntime.FontStyleRuntimeManager
// Size: 0x178 (Inherited: 0x38)
class UFontStyleRuntimeManager : public UEngineSubsystem {
public:

	char pad_38[0xa0]; // 0x38(0xa0)
	struct FName CachedCulture; // 0xd8(0x08)
	char pad_E0[0x90]; // 0xe0(0x90)
	struct UDataTable* CachedCurFontConfig; // 0x170(0x08)

	void WarmupText(struct FName& InStyleName, struct FString InContent); // Function TextStyleRuntime.FontStyleRuntimeManager.WarmupText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class TextStyleRuntime.StyleTableConfigObj
// Size: 0xb0 (Inherited: 0x30)
class UStyleTableConfigObj : public UObject {
public:

	struct FSoftObjectPath TextStyleTable; // 0x30(0x18)
	struct FSoftObjectPath DefaultFontConfig; // 0x48(0x18)
	struct TMap<struct FName, struct FSoftObjectPath> FontDataConfigs; // 0x60(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class TextStyleRuntime.TextStyleBlueprintLib
// Size: 0x30 (Inherited: 0x30)
class UTextStyleBlueprintLib : public UBlueprintFunctionLibrary {
public:


	void STATIC_Blueprint_SetTextStyle(struct UTextLayoutWidget* InTextWidget, struct FName InTextStyleIdx); // Function TextStyleRuntime.TextStyleBlueprintLib.Blueprint_SetTextStyle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class TextStyleRuntime.TextStyleRuntimeManager
// Size: 0xd0 (Inherited: 0x38)
class UTextStyleRuntimeManager : public UEngineSubsystem {
public:

	char pad_38[0x90]; // 0x38(0x90)
	struct UDataTable* CachedCurTxtStyleConfig; // 0xc8(0x08)

	bool GetTextStyleCfgData(struct FName& InName, struct FCustomTextStyle& OutCustomTextStyle); // Function TextStyleRuntime.TextStyleRuntimeManager.GetTextStyleCfgData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
