
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMReplaySystem.DFMNetworkPlayerReplayComponent
// Size: 0x170 (Inherited: 0x100)
class UDFMNetworkPlayerReplayComponent : public UActorComponent {
public:

	bool bIsReplayRecording; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	uint32_t MakerActorGUIDValue; // 0x104(0x04)
	struct ADFMPlayerController* OwnerPlayer; // 0x108(0x08)
	struct AGPCharacterBase* PlayerPawn; // 0x110(0x08)
	struct UDFMReplayInstance* LastKillcamRecordingReplay; // 0x118(0x08)
	struct UDFMReplayInstance* CurrentKillcamRecordingReplay; // 0x120(0x08)
	char pad_128[0x48]; // 0x128(0x48)

	bool TryStopReplayRecording(); // Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.TryStopReplayRecording // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.DFMNetworkReplaySubsystem
// Size: 0x100 (Inherited: 0x38)
class UDFMNetworkReplaySubsystem : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnLoadAllReplayFilesComplete[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnParseProtocolFileComplete[0x10]; // 0x48(0x10)
	struct UObject* CachedWorldContextObject; // 0x58(0x08)
	char pad_60[0x48]; // 0x60(0x48)
	struct TArray<struct UDFMReplayInstance*> RestoredReplay; // 0xa8(0x10)
	struct UDFMReplayInstance* CurrentRecordingReplay; // 0xb8(0x08)
	struct UDFMReplayInstance* GameModeRecordingReplay; // 0xc0(0x08)
	char pad_C8[0x38]; // 0xc8(0x38)

	void OnGameFlowLeave(enum class EGameFlowStageType GameFlowStage); // Function DFMReplaySystem.DFMNetworkReplaySubsystem.OnGameFlowLeave // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.DFMReplayEvent
// Size: 0x30 (Inherited: 0x30)
class UDFMReplayEvent : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.DFMReplayInstance
// Size: 0xc8 (Inherited: 0x30)
class UDFMReplayInstance : public UObject {
public:

	enum class ENetworkReplayStreamerType StreamerType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString ReplayName; // 0x38(0x10)
	struct FString FriendlyName; // 0x48(0x10)
	bool UsingCustomPath; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString CustomFilePath; // 0x60(0x10)
	float RecordMaxTime; // 0x70(0x04)
	float RecordStopTime; // 0x74(0x04)
	int32_t Length; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	int64_t FileSize; // 0x80(0x08)
	struct FDateTime DateRecorded; // 0x88(0x08)
	int32_t NumViewers; // 0x90(0x04)
	bool IsServerReplay; // 0x94(0x01)
	bool IsRecording; // 0x95(0x01)
	bool IsPlaying; // 0x96(0x01)
	bool IsPausing; // 0x97(0x01)
	/*struct FMulticastInlineDelegate*/char OnReplaySaveComplete[0x10]; // 0x98(0x10)
	struct AGPPlayerController* OwnerPlayerController; // 0xa8(0x08)
	struct UWorld* WorldReference; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)

	bool StopReplayRecording(); // Function DFMReplaySystem.DFMReplayInstance.StopReplayRecording // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.DFMReplayPlayerController
// Size: 0xaa8 (Inherited: 0xa50)
class ADFMReplayPlayerController : public AGPPlayerController {
public:

	/*struct FMulticastInlineDelegate*/char OnPlaybackTimeChange[0x10]; // 0xa50(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlaybackEndChange[0x10]; // 0xa60(0x10)
	struct UClass* ReplayGMHUDClass; // 0xa70(0x08)
	struct UClass* ReplayOBHUDClass; // 0xa78(0x08)
	struct UClass* ReplayKillcamHUDClass; // 0xa80(0x08)
	struct UDFMReplayInstance* CurrentReplayInstance; // 0xa88(0x08)
	char pad_A90[0x18]; // 0xa90(0x18)

	void OnUnregisterActor(struct AActor* ChangedActor); // Function DFMReplaySystem.DFMReplayPlayerController.OnUnregisterActor // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.DFMReplaySystemBlueprintHelper
// Size: 0x30 (Inherited: 0x30)
class UDFMReplaySystemBlueprintHelper : public UBlueprintFunctionLibrary {
public:


	void STATIC_StartParseProtocolFile(struct UObject* WorldContextObject, struct FString FilePath); // Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.StartParseProtocolFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.KillCamHUDView
// Size: 0x400 (Inherited: 0x388)
class UKillCamHUDView : public UBaseUIView {
public:

	struct UDFTextBlock* Text_ReplayTime; // 0x388(0x08)
	struct UDFHorizontalBox* Panel_KillerView; // 0x390(0x08)
	struct UDFCanvasPanel* Panel_SelfView; // 0x398(0x08)
	struct UDFTextBlock* Text_WeaponName; // 0x3a0(0x08)
	struct UDFTextBlock* Text_KillerName; // 0x3a8(0x08)
	struct UDFTextBlock* Text_KillerRank; // 0x3b0(0x08)
	struct UDFTextBlock* Text_DeathReason; // 0x3b8(0x08)
	struct UWidgetAnimation* Anim_DeathReplay_Main_in; // 0x3c0(0x08)
	struct UWidgetAnimation* Anim_DeathReplay_Main_loop; // 0x3c8(0x08)
	struct UWidgetAnimation* Anim_DeathReplay_Main_out; // 0x3d0(0x08)
	struct FName KillerWeaponWidget_Name; // 0x3d8(0x08)
	struct FName ImageInKillerWeaponWidget_Name; // 0x3e0(0x08)
	struct UUserWidget* KillerWeaponWidget; // 0x3e8(0x08)
	struct UDFImage* ImageInKillerWeaponWidget; // 0x3f0(0x08)
	char pad_3F8[0x8]; // 0x3f8(0x08)

	void StopKillCam(); // Function DFMReplaySystem.KillCamHUDView.StopKillCam // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.ProtocolFileDebugItem
// Size: 0x2c8 (Inherited: 0x298)
class UProtocolFileDebugItem : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UTextBlock* ProtocolFile; // 0x2a0(0x08)
	struct UButton* PlayButton; // 0x2a8(0x08)
	char pad_2B0[0x18]; // 0x2b0(0x18)

	void OnClickPlayButton(); // Function DFMReplaySystem.ProtocolFileDebugItem.OnClickPlayButton // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.ReplayControllerView
// Size: 0x408 (Inherited: 0x388)
class UReplayControllerView : public UBaseUIView {
public:

	struct UTextBlock* TxtPreviewTime; // 0x388(0x08)
	struct UTextBlock* TxtReplayDateTime; // 0x390(0x08)
	struct UTextBlock* TxtReplayTime; // 0x398(0x08)
	struct UTextBlock* TxtPlaySpeed; // 0x3a0(0x08)
	struct UButton* BtnPlay; // 0x3a8(0x08)
	struct UButton* BtnPause; // 0x3b0(0x08)
	struct UButton* BtnPlaySpeed; // 0x3b8(0x08)
	struct UButton* BtnExit; // 0x3c0(0x08)
	struct UProgressBar* ReplayProgressBar; // 0x3c8(0x08)
	char pad_3D0[0x38]; // 0x3d0(0x38)

	void TrySkipReplayTime(); // Function DFMReplaySystem.ReplayControllerView.TrySkipReplayTime // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.ReplayDebugFileItemView
// Size: 0x2b0 (Inherited: 0x298)
class UReplayDebugFileItemView : public UUserWidget {
public:

	struct UDFMReplayInstance* CurrentRecordingReplay; // 0x298(0x08)
	struct UClass* ReplayLoadingView; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)

	void PlayReplay(); // Function DFMReplaySystem.ReplayDebugFileItemView.PlayReplay // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.ReplayDebugMainView
// Size: 0x3a8 (Inherited: 0x388)
class UReplayDebugMainView : public UBaseUIView {
public:

	struct UClass* ReplayItemClass; // 0x388(0x08)
	struct UScrollBox* ReplayScrollList; // 0x390(0x08)
	struct TArray<struct UReplayDebugFileItemView*> AllReplayItems; // 0x398(0x10)

	void RemoveFromViewPortHide(); // Function DFMReplaySystem.ReplayDebugMainView.RemoveFromViewPortHide // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.ReplayListDisplayView
// Size: 0x350 (Inherited: 0x298)
class UReplayListDisplayView : public UUserWidget {
public:

	char pad_298[0x1]; // 0x298(0x01)
	bool bUseForProtocolReplay; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct UClass* ReplayItemClass; // 0x2a0(0x08)
	struct UClass* ProtocolFileItemClass; // 0x2a8(0x08)
	struct UCanvasPanel* ReplayPanel; // 0x2b0(0x08)
	struct UCanvasPanel* ProtocolFilePanel; // 0x2b8(0x08)
	struct UCanvasPanel* ProtocolReplayPanel; // 0x2c0(0x08)
	struct UCanvasPanel* ParseProgressPanel; // 0x2c8(0x08)
	struct UDFScrollGridBox* ProtocolFileCrollList; // 0x2d0(0x08)
	struct UDFScrollGridBox* DFReplayScrollList; // 0x2d8(0x08)
	struct UButton* PlayButton; // 0x2e0(0x08)
	struct UEditableTextBox* TxtPlayerUID; // 0x2e8(0x08)
	struct UProgressBar* ParseProgress; // 0x2f0(0x08)
	struct UTextBlock* TxtProgress; // 0x2f8(0x08)
	struct TArray<struct UDFMReplayInstance*> AllReplay; // 0x300(0x10)
	struct TArray<struct FString> AllProtocolFiles; // 0x310(0x10)
	char pad_320[0x30]; // 0x320(0x30)

	void RemoveFromViewPortHide(); // Function DFMReplaySystem.ReplayListDisplayView.RemoveFromViewPortHide // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.ReplayLoadingView
// Size: 0x2b8 (Inherited: 0x298)
class UReplayLoadingView : public UUserWidget {
public:

	struct UProgressBar* LoadingProgressBar; // 0x298(0x08)
	struct UTextBlock* TxtProgress; // 0x2a0(0x08)
	char pad_2A8[0x10]; // 0x2a8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMReplaySystem.ReplayOBView
// Size: 0x388 (Inherited: 0x388)
class UReplayOBView : public UBaseUIView {
public:


	void OnClientCharacterListChanged(struct AGPCharacterBase* CHARACTER); // Function DFMReplaySystem.ReplayOBView.OnClientCharacterListChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
