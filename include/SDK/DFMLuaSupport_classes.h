
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMLuaSupport.DFLuaActor
// Size: 0x390 (Inherited: 0x378)
class ADFLuaActor : public AActor {
public:

	struct FString LuaPath; // 0x378(0x10)
	char pad_388[0x8]; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.DFMToolLua
// Size: 0x78 (Inherited: 0x58)
class UDFMToolLua : public UGPToolBase {
public:

	char pad_58[0x20]; // 0x58(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.LuaDebugUtil
// Size: 0x30 (Inherited: 0x30)
class ULuaDebugUtil : public UObject {
public:


	void STATIC_ForceSleepGamethread(float SleepTime); // Function DFMLuaSupport.LuaDebugUtil.ForceSleepGamethread // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.LuaExtension
// Size: 0x30 (Inherited: 0x30)
class ULuaExtension : public UObject {
public:


	bool STATIC_TestMofidyAnimation(struct UWidgetAnimation* Animation, struct UObject* BindObj, struct FName& TrackName, int32_t SectionIndex, struct FName& PropertyName, int32_t FrameIndex, struct TArray<float> Vars); // Function DFMLuaSupport.LuaExtension.TestMofidyAnimation // (Final|Native|Static|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.LuaFrontEndGameMode
// Size: 0x468 (Inherited: 0x460)
class ALuaFrontEndGameMode : public AGameMode {
public:

	enum class ELuaFrontEndType FrontEndType; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.LuaFunctionForward
// Size: 0x30 (Inherited: 0x30)
class ULuaFunctionForward : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.LuaItemDragConfigUtil
// Size: 0x30 (Inherited: 0x30)
class ULuaItemDragConfigUtil : public UBlueprintFunctionLibrary {
public:


	void STATIC_UpdateMaxDragPointSampleNum(int32_t Value); // Function DFMLuaSupport.LuaItemDragConfigUtil.UpdateMaxDragPointSampleNum // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.LuaLevelLoader
// Size: 0x108 (Inherited: 0x38)
class ULuaLevelLoader : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnLoadStreamLevelComplete[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnloadStreamLevelComplete[0x10]; // 0x48(0x10)
	char pad_58[0xb0]; // 0x58(0xb0)

	int32_t RequestUnloadStreamLevel(struct FName UnloadLevelName, bool bShouldBlockOnUnload); // Function DFMLuaSupport.LuaLevelLoader.RequestUnloadStreamLevel // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.LuaLobbyGameMode
// Size: 0x460 (Inherited: 0x460)
class ALuaLobbyGameMode : public AGameMode {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.LuaResourceConverter
// Size: 0x30 (Inherited: 0x30)
class ULuaResourceConverter : public UObject {
public:


	bool STATIC_IsEmptyTexture(struct UTexture* Tex); // Function DFMLuaSupport.LuaResourceConverter.IsEmptyTexture // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.LuaResourceLoader
// Size: 0xa0 (Inherited: 0x38)
class ULuaResourceLoader : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnBatchComplete[0x10]; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)

	int32_t RequestAsyncLoad(struct TArray<struct FString> InPaths, int32_t Priority); // Function DFMLuaSupport.LuaResourceLoader.RequestAsyncLoad // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.LuaSubsystem
// Size: 0x278 (Inherited: 0x38)
class ULuaSubsystem : public UGameInstanceSubsystem {
public:

	char pad_38[0x80]; // 0x38(0x80)
	struct FString URL; // 0xb8(0x10)
	struct FString MixtureStr; // 0xc8(0x10)
	struct FString Timestamp; // 0xd8(0x10)
	struct FString MD5; // 0xe8(0x10)
	struct FString SoMD5; // 0xf8(0x10)
	int64_t Version; // 0x108(0x08)
	struct FString Force; // 0x110(0x10)
	/*struct FMulticastInlineDelegate*/char OnLuaPreClearDynamicObjectsDelegate[0x10]; // 0x120(0x10)
	/*struct FMulticastInlineDelegate*/char OnLuaPostEngineInitDelegate[0x10]; // 0x130(0x10)
	/*struct FMulticastInlineDelegate*/char OnLuaPostClearDynamicObjectsDelegate[0x10]; // 0x140(0x10)
	/*struct FMulticastInlineDelegate*/char OnLuaUObjectNumWarningDelegate[0x10]; // 0x150(0x10)
	/*struct FMulticastInlineDelegate*/char OnLuaLowMemoryWarningDelegate[0x10]; // 0x160(0x10)
	/*struct FMulticastInlineDelegate*/char OnAsyncLoadingFlushDelegate[0x10]; // 0x170(0x10)
	/*struct FMulticastInlineDelegate*/char OnNotifyLuaResolutionResized[0x10]; // 0x180(0x10)
	/*struct FMulticastInlineDelegate*/char OnLuaClientSeamlessTravelEnd[0x10]; // 0x190(0x10)
	/*struct FMulticastInlineDelegate*/char OnLuaClientSeamlessTravelStart[0x10]; // 0x1a0(0x10)
	/*struct FMulticastInlineDelegate*/char OnActorProxyUpdate[0x10]; // 0x1b0(0x10)
	/*struct FMulticastInlineDelegate*/char OnLuaNetworkFailure[0x10]; // 0x1c0(0x10)
	/*struct FMulticastInlineDelegate*/char OnLuaPostWorldInitialization[0x10]; // 0x1d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnLuaStartFinishedDelegate[0x10]; // 0x1e0(0x10)
	/*struct FMulticastInlineDelegate*/char OnLuaPreGarbageCollect[0x10]; // 0x1f0(0x10)
	struct FMetaInfo MetaInfoCache; // 0x200(0x10)
	bool Error2SkipMoLi; // 0x210(0x01)
	bool bGetMetaData; // 0x211(0x01)
	bool bIsNewMoLi; // 0x212(0x01)
	bool bHttpSuccess; // 0x213(0x01)
	int32_t HttpReTryNum; // 0x214(0x04)
	struct FString ErrCode; // 0x218(0x10)
	int32_t MoLiFlag; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	/*struct FMulticastInlineDelegate*/char OnLuaPostPCCreatedDelegate[0x10]; // 0x230(0x10)
	char pad_240[0x20]; // 0x240(0x20)
	struct UOnlineLuaProcess* OnlineObj; // 0x260(0x08)
	bool bShoudlRestartLua; // 0x268(0x01)
	char pad_269[0xf]; // 0x269(0x0f)

	void STATIC_TestObjectWarning(struct TArray<struct FString>& Args, struct UWorld* World); // Function DFMLuaSupport.LuaSubsystem.TestObjectWarning // (Final|Native|Static|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.LuaWidgetCreateManager
// Size: 0x88 (Inherited: 0x38)
class ULuaWidgetCreateManager : public UGameInstanceSubsystem {
public:

	struct TMap<int32_t, struct FLuaWidgetCreatedPool> CreatedWidgets; // 0x38(0x50)

	void SetMaxPreateNumByUIId(int32_t UINavId, int32_t NewMaxNum); // Function DFMLuaSupport.LuaWidgetCreateManager.SetMaxPreateNumByUIId // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMLuaSupport.OnlineLuaProcess
// Size: 0x30 (Inherited: 0x30)
class UOnlineLuaProcess : public UObject {
public:


	struct UWorld* OnlineLuaGetWorld(); // Function DFMLuaSupport.OnlineLuaProcess.OnlineLuaGetWorld // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
