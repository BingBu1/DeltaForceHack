
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class Intro.IntroGameMode
// Size: 0x830 (Inherited: 0x7c0)
class AIntroGameMode : public ADFMGameMode {
public:

	struct FString IntroQuestDir; // 0x7c0(0x10)
	int32_t IntroQuestID; // 0x7d0(0x04)
	char pad_7D4[0x4]; // 0x7d4(0x04)
	struct FSoftObjectPath IntroQuestPath; // 0x7d8(0x18)
	struct TArray<struct FSoftObjectPath> IntroQStagePath; // 0x7f0(0x10)
	struct FName DefaultPlayerStartTag; // 0x800(0x08)
	struct TArray<struct AActor*> IntroPlayerStartArray; // 0x808(0x10)
	struct AIntroGameState* IntroGameState; // 0x818(0x08)
	char pad_820[0x10]; // 0x820(0x10)

	void SetPlayerVisiable(int32_t PlayerIndex, bool bVisiblity); // Function Intro.IntroGameMode.SetPlayerVisiable // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Intro.IntroGameState
// Size: 0xa40 (Inherited: 0xa38)
class AIntroGameState : public ADFMGameState {
public:

	char pad_A38[0x8]; // 0xa38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Intro.IntroPlayerState
// Size: 0x1030 (Inherited: 0x1020)
class AIntroPlayerState : public ADFMPlayerState {
public:

	struct APlayerStart* PVEPlayerStart; // 0x1020(0x08)
	bool IsPlayerVisiable; // 0x1028(0x01)
	char pad_1029[0x7]; // 0x1029(0x07)

	void SetPlayerVisiable(bool bPlayerVisiable); // Function Intro.IntroPlayerState.SetPlayerVisiable // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
