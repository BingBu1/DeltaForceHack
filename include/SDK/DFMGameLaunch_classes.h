
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMGameLaunch.DFBHDHelper
// Size: 0xc0 (Inherited: 0x38)
class UDFBHDHelper : public UGameInstanceSubsystem {
public:

	struct UDFSocketServer* DFSocketServer; // 0x38(0x08)
	struct UDFBHDHelperRunnable* BHDRunnable; // 0x40(0x08)
	/*struct FMulticastInlineDelegate*/char DFConnectBHDStageDelegate[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char DFConnectBHDExistDelegate[0x10]; // 0x58(0x10)
	char pad_68[0x58]; // 0x68(0x58)

	void SetDFExhibitionChange(bool bConnectBHD); // Function DFMGameLaunch.DFBHDHelper.SetDFExhibitionChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.DFBHDHelperRunnable
// Size: 0x88 (Inherited: 0x30)
class UDFBHDHelperRunnable : public UObject {
public:

	char pad_30[0x58]; // 0x30(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.DFDevopsTest
// Size: 0x30 (Inherited: 0x30)
class UDFDevopsTest : public UBlueprintFunctionLibrary {
public:


	bool STATIC_IsBlueprintClassExist(struct FString InClassPath); // Function DFMGameLaunch.DFDevopsTest.IsBlueprintClassExist // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.DFGameLaunchManager
// Size: 0xb0 (Inherited: 0x38)
class UDFGameLaunchManager : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnGameLaunchFlowEnd[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnLaunchStepBegin[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnLaunchStepEnd[0x10]; // 0x58(0x10)
	struct UDFGameLaunchStepFlowManager* FlowManager; // 0x68(0x08)
	struct UDFGameLaunchUserCache* UserCache; // 0x70(0x08)
	char pad_78[0x28]; // 0x78(0x28)
	struct UDFGameLaunchSettings* GameLaunchSettings; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)

	void StartPreCompilePSO(); // Function DFMGameLaunch.DFGameLaunchManager.StartPreCompilePSO // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.DFGameLaunchSettings
// Size: 0x40 (Inherited: 0x30)
class UDFGameLaunchSettings : public UObject {
public:

	struct TArray<struct FDFGameLaunchStepFlow> Settings; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.DFGameLaunchConfig
// Size: 0x60 (Inherited: 0x30)
class UDFGameLaunchConfig : public UObject {
public:

	struct FSoftClassPath DFGameLaunchSettings; // 0x30(0x18)
	struct FSoftObjectPath SpaceLimitViewPath; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.DFGameLaunchUserCache
// Size: 0x48 (Inherited: 0x30)
class UDFGameLaunchUserCache : public UObject {
public:

	bool bIsFirstLaunch; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString PSODoneVersion; // 0x38(0x10)

	void UpdateConfig(); // Function DFMGameLaunch.DFGameLaunchUserCache.UpdateConfig // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.DFGameLaunchStepFlowManager
// Size: 0xe8 (Inherited: 0x30)
class UDFGameLaunchStepFlowManager : public UObject {
public:

	char pad_30[0x48]; // 0x30(0x48)
	struct UDFGameLaunchStepBase* CurStepIns; // 0x78(0x08)
	struct UGameInstance* CachedGameInstance; // 0x80(0x08)
	char pad_88[0x60]; // 0x88(0x60)

	void RunStep(); // Function DFMGameLaunch.DFGameLaunchStepFlowManager.RunStep // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.DFGameLaunchStepBase
// Size: 0x58 (Inherited: 0x30)
class UDFGameLaunchStepBase : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)
	struct UDFGameLaunchStepFlowManager* StepFlowManager; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)

	void UpdateBackgroundInfo(struct FText InTipText, float InLoadingPercent); // Function DFMGameLaunch.DFGameLaunchStepBase.UpdateBackgroundInfo // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.DFGameLaunchStepBPBase
// Size: 0x58 (Inherited: 0x58)
class UDFGameLaunchStepBPBase : public UDFGameLaunchStepBase {
public:


	void EndStep(enum class ELaunchStepResult Result, struct FString ErrorCode); // Function DFMGameLaunch.DFGameLaunchStepBPBase.EndStep // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.GLS_CheckNetStatus
// Size: 0x58 (Inherited: 0x58)
class UGLS_CheckNetStatus : public UDFGameLaunchStepBase {
public:


	void OnConfirmBtnClicked(); // Function DFMGameLaunch.GLS_CheckNetStatus.OnConfirmBtnClicked // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.GLS_CheckPhysicSpace
// Size: 0x58 (Inherited: 0x58)
class UGLS_CheckPhysicSpace : public UDFGameLaunchStepBase {
public:


	void OnConfirmBtnClicked(); // Function DFMGameLaunch.GLS_CheckPhysicSpace.OnConfirmBtnClicked // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.GLS_OpenHealthTip
// Size: 0x68 (Inherited: 0x58)
class UGLS_OpenHealthTip : public UDFGameLaunchStepBase {
public:

	struct UUserWidget* HealthTipView; // 0x58(0x08)
	float BaseWaitTime; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	void WarmupSteps(); // Function DFMGameLaunch.GLS_OpenHealthTip.WarmupSteps // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.GLS_RequestMapleData
// Size: 0x70 (Inherited: 0x58)
class UGLS_RequestMapleData : public UDFGameLaunchStepBase {
public:

	char pad_58[0x10]; // 0x58(0x10)
	struct UGameSDKManager* CachedSDKManager; // 0x68(0x08)

	void StartRequestMapleData(); // Function DFMGameLaunch.GLS_RequestMapleData.StartRequestMapleData // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.GLS_UnpakShader
// Size: 0x68 (Inherited: 0x58)
class UGLS_UnpakShader : public UDFGameLaunchStepBase {
public:

	char pad_58[0x10]; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLaunch.GLS_RequestCDNMeta
// Size: 0x58 (Inherited: 0x58)
class UGLS_RequestCDNMeta : public UDFGameLaunchStepBPBase {
public:


	void RequestMetaFile(); // Function DFMGameLaunch.GLS_RequestCDNMeta.RequestMetaFile // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
