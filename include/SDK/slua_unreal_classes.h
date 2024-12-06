
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class slua_unreal.LatentDelegate
// Size: 0x38 (Inherited: 0x30)
class ULatentDelegate : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	void OnLatentCallback(int32_t threadRef); // Function slua_unreal.LatentDelegate.OnLatentCallback // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaActor
// Size: 0x428 (Inherited: 0x378)
class ALuaActor : public AActor {
public:

	char pad_378[0x90]; // 0x378(0x90)
	struct FString LuaFilePath; // 0x408(0x10)
	struct FString LuaStateName; // 0x418(0x10)

	struct FLuaBPVar CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args); // Function slua_unreal.LuaActor.CallLuaMember // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaPawn
// Size: 0x488 (Inherited: 0x3d8)
class ALuaPawn : public APawn {
public:

	char pad_3D8[0x90]; // 0x3d8(0x90)
	struct FString LuaFilePath; // 0x468(0x10)
	struct FString LuaStateName; // 0x478(0x10)

	struct FLuaBPVar CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args); // Function slua_unreal.LuaPawn.CallLuaMember // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaCharacter
// Size: 0x850 (Inherited: 0x798)
class ALuaCharacter : public ACHARACTER {
public:

	char pad_798[0x90]; // 0x798(0x90)
	struct FString LuaFilePath; // 0x828(0x10)
	struct FString LuaStateName; // 0x838(0x10)
	char pad_848[0x8]; // 0x848(0x08)

	struct FLuaBPVar CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args); // Function slua_unreal.LuaCharacter.CallLuaMember // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaController
// Size: 0x4a0 (Inherited: 0x3f0)
class ALuaController : public AController {
public:

	char pad_3F0[0x90]; // 0x3f0(0x90)
	struct FString LuaFilePath; // 0x480(0x10)
	struct FString LuaStateName; // 0x490(0x10)

	struct FLuaBPVar CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args); // Function slua_unreal.LuaController.CallLuaMember // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaPlayerController
// Size: 0x780 (Inherited: 0x6d0)
class ALuaPlayerController : public APlayerController {
public:

	char pad_6D0[0x90]; // 0x6d0(0x90)
	struct FString LuaFilePath; // 0x760(0x10)
	struct FString LuaStateName; // 0x770(0x10)

	struct FLuaBPVar CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args); // Function slua_unreal.LuaPlayerController.CallLuaMember // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaActorComponent
// Size: 0x1c0 (Inherited: 0x100)
class ULuaActorComponent : public UActorComponent {
public:

	char pad_100[0xa0]; // 0x100(0xa0)
	struct FString LuaFilePath; // 0x1a0(0x10)
	struct FString LuaStateName; // 0x1b0(0x10)

	struct FLuaBPVar CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args); // Function slua_unreal.LuaActorComponent.CallLuaMember // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaGameModeBase
// Size: 0x4c8 (Inherited: 0x418)
class ALuaGameModeBase : public AGameModeBase {
public:

	char pad_418[0x90]; // 0x418(0x90)
	struct FString LuaFilePath; // 0x4a8(0x10)
	struct FString LuaStateName; // 0x4b8(0x10)

	struct FLuaBPVar CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args); // Function slua_unreal.LuaGameModeBase.CallLuaMember // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaHUD
// Size: 0x518 (Inherited: 0x468)
class ALuaHUD : public AHUD {
public:

	char pad_468[0x90]; // 0x468(0x90)
	struct FString LuaFilePath; // 0x4f8(0x10)
	struct FString LuaStateName; // 0x508(0x10)

	struct FLuaBPVar CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args); // Function slua_unreal.LuaHUD.CallLuaMember // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaTableObjectInterface
// Size: 0x30 (Inherited: 0x30)
class ULuaTableObjectInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class ULuaBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	struct FString STATIC_GetStringFromVar(struct FLuaBPVar Value, int32_t Index); // Function slua_unreal.LuaBlueprintLibrary.GetStringFromVar // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaUserWidget
// Size: 0x390 (Inherited: 0x298)
class ULuaUserWidget : public UUserWidget {
public:

	char pad_298[0x90]; // 0x298(0x90)
	struct FString LuaFilePath; // 0x328(0x10)
	struct FString LuaStateName; // 0x338(0x10)
	char pad_348[0x48]; // 0x348(0x48)

	struct FLuaBPVar CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args); // Function slua_unreal.LuaUserWidget.CallLuaMember // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaDelegateWrap
// Size: 0x48 (Inherited: 0x30)
class ULuaDelegateWrap : public UObject {
public:

	char pad_30[0x18]; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class slua_unreal.LuaDelegate
// Size: 0x90 (Inherited: 0x48)
class ULuaDelegate : public ULuaDelegateWrap {
public:

	char pad_48[0x48]; // 0x48(0x48)

	void EventTrigger(); // Function slua_unreal.LuaDelegate.EventTrigger // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
