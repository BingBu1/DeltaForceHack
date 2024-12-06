
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class Gamelet.Gamelet
// Size: 0x60 (Inherited: 0x30)
class UGamelet : public UObject {
public:

	char pad_30[0x30]; // 0x30(0x30)

	void Tick(float fDeltaTime); // Function Gamelet.Gamelet.Tick // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Gamelet.GameletMatBrush
// Size: 0x48 (Inherited: 0x40)
class UGameletMatBrush : public UPixUIBrushWrapper {
public:

	struct UMaterialInstanceDynamic* MatInstance; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Gamelet.GameletEnvMgr
// Size: 0xa0 (Inherited: 0x30)
class UGameletEnvMgr : public UObject {
public:

	char pad_30[0x70]; // 0x30(0x70)

	int32_t OnEnvToGameMessage(struct FString Msg); // Function Gamelet.GameletEnvMgr.OnEnvToGameMessage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Gamelet.GameletFile
// Size: 0x30 (Inherited: 0x30)
class UGameletFile : public UBlueprintFunctionLibrary {
public:


	bool STATIC_WriteFile(struct FString Path, struct FGameletArrayBuffer& ArrayBuffer); // Function Gamelet.GameletFile.WriteFile // (Final|Native|Static|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Gamelet.GameletPaths
// Size: 0x30 (Inherited: 0x30)
class UGameletPaths : public UBlueprintFunctionLibrary {
public:


	struct FString STATIC_ToAbsolutePathForWrite(struct FString Path); // Function Gamelet.GameletPaths.ToAbsolutePathForWrite // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Gamelet.GameletPuertsEnvMgr
// Size: 0x90 (Inherited: 0x30)
class UGameletPuertsEnvMgr : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnPostMessage[0x10]; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)

	void OnEnvMessage(struct FString Msg); // Function Gamelet.GameletPuertsEnvMgr.OnEnvMessage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Gamelet.GameletPuertsUtilities
// Size: 0x30 (Inherited: 0x30)
class UGameletPuertsUtilities : public UBlueprintFunctionLibrary {
public:


	void STATIC_UpdateTextureResources(struct UTexture2D* Texture); // Function Gamelet.GameletPuertsUtilities.UpdateTextureResources // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Gamelet.GameletSettings
// Size: 0x88 (Inherited: 0x30)
class UGameletSettings : public UObject {
public:

	/*struct FDelegate*/char OnSDKMessage[0x10]; // 0x30(0x10)
	/*struct FDelegate*/char OnRefreshUserdata[0x10]; // 0x40(0x10)
	/*struct FDelegate*/char OnViewCreated[0x10]; // 0x50(0x10)
	/*struct FDelegate*/char OnViewAboutToDestroy[0x10]; // 0x60(0x10)
	/*struct FDelegate*/char OnReportData[0x10]; // 0x70(0x10)
	bool DisableJsErrReport; // 0x80(0x01)
	bool DisableGetBackTrace; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)

	bool IsValidSetting(); // Function Gamelet.GameletSettings.IsValidSetting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Gamelet.GameletWidget
// Size: 0x1b8 (Inherited: 0x198)
class UGameletWidget : public UCanvasPanel {
public:

	char pad_198[0x20]; // 0x198(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Gamelet.GameletWindow
// Size: 0x150 (Inherited: 0x30)
class UGameletWindow : public UObject {
public:

	char pad_30[0x120]; // 0x30(0x120)

	void OnPxWidgetScriptStateInit(); // Function Gamelet.GameletWindow.OnPxWidgetScriptStateInit // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
