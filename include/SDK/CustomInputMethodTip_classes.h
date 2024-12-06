
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class CustomInputMethodTip.CustomInputMethodTipBPLib
// Size: 0x30 (Inherited: 0x30)
class UCustomInputMethodTipBPLib : public UBlueprintFunctionLibrary {
public:


	bool STATIC_IsCanddateListVisible(); // Function CustomInputMethodTip.CustomInputMethodTipBPLib.IsCanddateListVisible // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class CustomInputMethodTip.CustomInputMethodTipSettings
// Size: 0x50 (Inherited: 0x40)
class UCustomInputMethodTipSettings : public UDeveloperSettings {
public:

	struct UClass* DefaultCandidateListClass; // 0x40(0x08)
	int32_t ZOrder; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class CustomInputMethodTip.InputMethodCandidateList
// Size: 0x2d0 (Inherited: 0x298)
class UInputMethodCandidateList : public UUserWidget {
public:

	struct TArray<struct FString> CandidateList; // 0x298(0x10)
	struct FString ReadingText; // 0x2a8(0x10)
	char pad_2B8[0x18]; // 0x2b8(0x18)

	void SetReadingString(struct FString Text); // Function CustomInputMethodTip.InputMethodCandidateList.SetReadingString // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
