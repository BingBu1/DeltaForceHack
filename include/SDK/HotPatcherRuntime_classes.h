
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class HotPatcherRuntime.FlibPakHelper
// Size: 0x30 (Inherited: 0x30)
class UFlibPakHelper : public UBlueprintFunctionLibrary {
public:


	bool STATIC_UnMountPak(struct FString PakPath); // Function HotPatcherRuntime.FlibPakHelper.UnMountPak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HotPatcherRuntime.FlibPatchParserHelper
// Size: 0x30 (Inherited: 0x30)
class UFlibPatchParserHelper : public UBlueprintFunctionLibrary {
public:


	void STATIC_ReloadShaderbytecode(); // Function HotPatcherRuntime.FlibPatchParserHelper.ReloadShaderbytecode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HotPatcherRuntime.FlibShaderPipelineCacheHelper
// Size: 0x30 (Inherited: 0x30)
class UFlibShaderPipelineCacheHelper : public UBlueprintFunctionLibrary {
public:


	bool STATIC_SavePipelineFileCache(enum class EPSOSaveMode Mode); // Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.SavePipelineFileCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HotPatcherRuntime.MountListener
// Size: 0xa0 (Inherited: 0x30)
class UMountListener : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnMountPakDelegate[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnMountPakDelegate[0x10]; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	void Init(); // Function HotPatcherRuntime.MountListener.Init // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HotPatcherRuntime.ScopedSlowTaskContext
// Size: 0x38 (Inherited: 0x30)
class UScopedSlowTaskContext : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
