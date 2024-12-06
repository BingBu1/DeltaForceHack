
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFLQATool.LQABaseView
// Size: 0x2a8 (Inherited: 0x298)
class ULQABaseView : public UUserWidget {
public:

	struct UButton* ScreenShotBtn; // 0x298(0x08)
	struct UButton* DumpViewBtn; // 0x2a0(0x08)

	void ScreenShot(); // Function DFLQATool.LQABaseView.ScreenShot // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFLQATool.LQAHttpProxy
// Size: 0x120 (Inherited: 0x30)
class ULQAHttpProxy : public UObject {
public:

	char pad_30[0x68]; // 0x30(0x68)
	struct UGameInstance* GameInstanceCache; // 0x98(0x08)
	char pad_A0[0x80]; // 0xa0(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFLQATool.LQAManager
// Size: 0x50 (Inherited: 0x38)
class ULQAManager : public UGameInstanceSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	struct ULQASettings* LQASettings; // 0x40(0x08)
	struct ULQABaseView* LQAWidget; // 0x48(0x08)

	void LQADumpViewAndSnapshot(); // Function DFLQATool.LQAManager.LQADumpViewAndSnapshot // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFLQATool.LQARemoteToolManager
// Size: 0x98 (Inherited: 0x38)
class ULQARemoteToolManager : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnLQALogin[0x10]; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)
	struct ULQAHttpProxy* LQAProxy; // 0x78(0x08)
	char pad_80[0x18]; // 0x80(0x18)

	void SendSnapshotData(); // Function DFLQATool.LQARemoteToolManager.SendSnapshotData // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFLQATool.LQARestoreManager
// Size: 0xc8 (Inherited: 0x38)
class ULQARestoreManager : public UGameInstanceSubsystem {
public:

	char pad_38[0x10]; // 0x38(0x10)
	struct TMap<uint32_t, struct URestoreWindowProxy*> ActiveWindow; // 0x48(0x50)
	char pad_98[0x30]; // 0x98(0x30)

	bool MakeRestoredWindow(struct FString DumpFilePath); // Function DFLQATool.LQARestoreManager.MakeRestoredWindow // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFLQATool.LQASettings
// Size: 0xc8 (Inherited: 0x30)
class ULQASettings : public UObject {
public:

	bool bEnableLQATool; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	/*struct TSoftClassPtr<UObject>*/char LQABaseView[0x28]; // 0x38(0x28)
	bool bEnableBlackNameFilter; // 0x60(0x01)
	bool bEnableLayerIdFilter; // 0x61(0x01)
	bool bFilterByUserWidget; // 0x62(0x01)
	bool bFilterByWidget; // 0x63(0x01)
	bool bPriotiryInText; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FString> BlackNameList; // 0x68(0x10)
	struct FString RemoteServerUrl; // 0x78(0x10)
	bool bEnableEncrypt; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FString SecretEncryptKey; // 0x90(0x10)
	/*struct TSoftClassPtr<UObject>*/char LQARestoreRoot[0x28]; // 0xa0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFLQATool.LQASavedData
// Size: 0x40 (Inherited: 0x30)
class ULQASavedData : public UObject {
public:

	struct FString LastServerId; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFLQATool.RestoreWindowProxy
// Size: 0x150 (Inherited: 0x30)
class URestoreWindowProxy : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct TMap<struct FString, struct UTexture2D*> SharedTextureMap; // 0x38(0x50)
	struct UTexture2D* MergedSourceTexture; // 0x88(0x08)
	struct TArray<struct UTexture2D*> MergedTextureList; // 0x90(0x10)
	char pad_A0[0x50]; // 0xa0(0x50)
	struct TArray<struct FWidgetMeta> WidgetMetaArray; // 0xf0(0x10)
	struct UCanvasPanel* WindowPanel; // 0x100(0x08)
	char pad_108[0x38]; // 0x108(0x38)
	struct URootObjWidget* RootObj; // 0x140(0x08)
	struct UGameInstance* CachedGameInstance; // 0x148(0x08)

	void AddChildrenToPanel(); // Function DFLQATool.RestoreWindowProxy.AddChildrenToPanel // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFLQATool.RootObjWidget
// Size: 0x2a0 (Inherited: 0x298)
class URootObjWidget : public UUserWidget {
public:

	struct UCanvasPanel* MainCanvas; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
