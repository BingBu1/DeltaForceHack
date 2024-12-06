
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class UITween.TestUserWidget
// Size: 0x2c0 (Inherited: 0x298)
class UTestUserWidget : public UUserWidget {
public:

	struct FUIAnimationController AnimationController; // 0x298(0x20)
	struct UButton* BtnPlayAnim; // 0x2b8(0x08)

	void OnBtnClick(); // Function UITween.TestUserWidget.OnBtnClick // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UITween.TweenUserWidget
// Size: 0x298 (Inherited: 0x298)
class UTweenUserWidget : public UUserWidget {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UITween.UITweenLiteLib
// Size: 0x30 (Inherited: 0x30)
class UUITweenLiteLib : public UBlueprintFunctionLibrary {
public:


	void STATIC_StartupTween(); // Function UITween.UITweenLiteLib.StartupTween // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
