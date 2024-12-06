
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPRecordReplay.RecordControlComoponnt
// Size: 0x110 (Inherited: 0x100)
class URecordControlComoponnt : public UActorComponent {
public:

	struct FString DemoFriendlyName; // 0x100(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPRecordReplay.RecordReplaySystem
// Size: 0x3a0 (Inherited: 0x378)
class ARecordReplaySystem : public ALevelSubsystem {
public:

	bool bNeedReplayFindComponent; // 0x378(0x01)
	bool bAllowManualRecordCommand; // 0x379(0x01)
	char pad_37A[0x6]; // 0x37a(0x06)
	struct URecordControlComoponnt* RecordCtrlComponent; // 0x380(0x08)
	struct UClass* DefaultReplayCtrlCompClass; // 0x388(0x08)
	struct UClass* ReplayCtrlCompClassOveride; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)

	void StartStopRecordingReplayOnServer(bool bStartOrStop); // Function GPRecordReplay.RecordReplaySystem.StartStopRecordingReplayOnServer // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPRecordReplay.ReplayControlComponent
// Size: 0x108 (Inherited: 0x100)
class UReplayControlComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)

	bool SwitchReplayPauseState(); // Function GPRecordReplay.ReplayControlComponent.SwitchReplayPauseState // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPRecordReplay.ReplayFindComponent
// Size: 0x210 (Inherited: 0x100)
class UReplayFindComponent : public UActorComponent {
public:

	struct TMap<struct FString, bool> SearchInclueTypes; // 0x100(0x50)
	/*struct FMulticastInlineDelegate*/char OnSearchReplayStreamsComplete[0x10]; // 0x150(0x10)
	char pad_160[0xb0]; // 0x160(0xb0)

	void PlayReplay(struct FString ReplayName, struct FString StreamerType); // Function GPRecordReplay.ReplayFindComponent.PlayReplay // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
