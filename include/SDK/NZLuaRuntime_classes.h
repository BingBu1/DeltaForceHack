
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class NZLuaRuntime.LuaBlueprintBridge
// Size: 0x30 (Inherited: 0x30)
class ULuaBlueprintBridge : public UBlueprintFunctionLibrary {
public:


	void STATIC_LuaCtorCallFunction(struct UObject* WorldContextObject, struct FString Filename, struct FString FuncName, struct TArray<struct FLuaBPVar>& Args, struct FString StateName); // Function NZLuaRuntime.LuaBlueprintBridge.LuaCtorCallFunction // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NZLuaRuntime.LuaScript
// Size: 0x60 (Inherited: 0x30)
class ULuaScript : public UObject {
public:

	struct FString Code; // 0x30(0x10)
	struct FString ImportPath; // 0x40(0x10)
	struct TArray<char> CodeBuffer; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NZLuaRuntime.NZLuaGameModeBase
// Size: 0x460 (Inherited: 0x460)
class ANZLuaGameModeBase : public AGameMode {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NZLuaRuntime.NZLuaUIViewWithFileTag
// Size: 0x3a0 (Inherited: 0x390)
class UNZLuaUIViewWithFileTag : public ULuaUserWidget {
public:

	struct FLuaFileTag LuaFileTag; // 0x390(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
