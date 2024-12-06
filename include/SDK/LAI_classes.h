
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class LAI.LAI
// Size: 0x30 (Inherited: 0x30)
class ULAI : public UBlueprintFunctionLibrary {
public:


	void STATIC_TickLuaState(float DeltaTime); // Function LAI.LAI.TickLuaState // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LAI.LuaListItemObject
// Size: 0x38 (Inherited: 0x30)
class ULuaListItemObject : public UObject {
public:

	int32_t ItemIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LAI.LuaPerfTest
// Size: 0x30 (Inherited: 0x30)
class ULuaPerfTest : public UBlueprintFunctionLibrary {
public:


	void STATIC_TestSetVisibility_UserWidget(struct UUserWidget* View, enum class ESlateVisibility Visibility); // Function LAI.LuaPerfTest.TestSetVisibility_UserWidget // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LAI.Luautils
// Size: 0x30 (Inherited: 0x30)
class ULuautils : public UBlueprintFunctionLibrary {
public:


	void STATIC_TestLongJmpLimitation(struct UObject* ContextObj); // Function LAI.Luautils.TestLongJmpLimitation // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LAI.TestObject
// Size: 0x30 (Inherited: 0x30)
class UTestObject : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LAI.SluaTestCase
// Size: 0x260 (Inherited: 0x30)
class USluaTestCase : public UObject {
public:

	struct TWeakObjectPtr<struct UObject> weakptr; // 0x30(0x08)
	struct TArray<struct UObject*> foos; // 0x38(0x10)
	struct TMap<struct FString, struct FString> maps; // 0x48(0x50)
	struct TArray<struct FString> strs; // 0x98(0x10)
	struct TMap<int32_t, struct FUserInfo> UserInfo; // 0xa8(0x50)
	struct TArray<struct FUserInfo> userArray; // 0xf8(0x10)
	struct FSlateBrush Brush; // 0x108(0x90)
	int32_t Value; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FUserInfo Info; // 0x1a0(0xa0)
	/*struct FDelegate*/char OnTestGetCount[0x10]; // 0x240(0x10)
	/*struct FMulticastInlineDelegate*/char OnTestAAA[0x10]; // 0x250(0x10)

	void TwoArgs(struct FString A, int32_t B, float C, struct FString D, struct UObject* Widget); // Function LAI.SluaTestCase.TwoArgs // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LAI.TestBindUserWidget
// Size: 0x298 (Inherited: 0x298)
class UTestBindUserWidget : public UUserWidget {
public:


	struct UTestBindUserWidget* TestReturnSelf(); // Function LAI.TestBindUserWidget.TestReturnSelf // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LAI.WidgetAnimationUtil
// Size: 0x30 (Inherited: 0x30)
class UWidgetAnimationUtil : public UBlueprintFunctionLibrary {
public:


	void STATIC_StopAllWidgetAnimations(struct UUserWidget* UserWidget); // Function LAI.WidgetAnimationUtil.StopAllWidgetAnimations // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LAI.WidgetUtil
// Size: 0x30 (Inherited: 0x30)
class UWidgetUtil : public UBlueprintFunctionLibrary {
public:


	struct FString STATIC_TryAddChild(struct UWidget* TargetWidget, struct UWidget* ChildWidget); // Function LAI.WidgetUtil.TryAddChild // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
