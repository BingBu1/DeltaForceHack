/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#include "../SDK.h"

namespace Dumper
{
	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FLuaFileTag.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FLuaFileTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4e\x5a\x4c\x75\x61\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4c\x75\x61\x46\x69\x6c\x65\x54\x61\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULuaBlueprintBridge.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULuaBlueprintBridge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4e\x5a\x4c\x75\x61\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4c\x75\x61\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x42\x72\x69\x64\x67\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULuaScript.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULuaScript::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4e\x5a\x4c\x75\x61\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4c\x75\x61\x53\x63\x72\x69\x70\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ANZLuaGameModeBase.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ANZLuaGameModeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4e\x5a\x4c\x75\x61\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4e\x5a\x4c\x75\x61\x47\x61\x6d\x65\x4d\x6f\x64\x65\x42\x61\x73\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UNZLuaUIViewWithFileTag.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UNZLuaUIViewWithFileTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4e\x5a\x4c\x75\x61\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4e\x5a\x4c\x75\x61\x55\x49\x56\x69\x65\x77\x57\x69\x74\x68\x46\x69\x6c\x65\x54\x61\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function NZLuaRuntime.LuaBlueprintBridge.LuaCtorCallFunction
	 * 	Flags: (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 */
	void ULuaBlueprintBridge::STATIC_LuaCtorCallFunction(struct UObject* WorldContextObject, struct FString Filename, struct FString FuncName, struct TArray<struct FLuaBPVar>& Args, struct FString StateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4e\x5a\x4c\x75\x61\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4c\x75\x61\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x42\x72\x69\x64\x67\x65\x2e\x4c\x75\x61\x43\x74\x6f\x72\x43\x61\x6c\x6c\x46\x75\x6e\x63\x74\x69\x6f\x6e");
		Function_NZLuaRuntime_LuaBlueprintBridge_LuaCtorCallFunction_Param params { };
		params.WorldContextObject = WorldContextObject;
		params.Filename = Filename;
		params.FuncName = FuncName;
		params.Args = Args;
		params.StateName = StateName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Args = params.Args;
	}
}