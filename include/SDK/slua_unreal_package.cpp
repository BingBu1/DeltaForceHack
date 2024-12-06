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
	 * 	Name: PredefinedFunction FLuaBPVar.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FLuaBPVar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x42\x50\x56\x61\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULatentDelegate.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULatentDelegate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x61\x74\x65\x6e\x74\x44\x65\x6c\x65\x67\x61\x74\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ALuaActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALuaActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ALuaPawn.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALuaPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x50\x61\x77\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ALuaCharacter.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALuaCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x43\x68\x61\x72\x61\x63\x74\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ALuaController.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALuaController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ALuaPlayerController.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALuaPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x50\x6c\x61\x79\x65\x72\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULuaActorComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULuaActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x41\x63\x74\x6f\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ALuaGameModeBase.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALuaGameModeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x47\x61\x6d\x65\x4d\x6f\x64\x65\x42\x61\x73\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ALuaHUD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALuaHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x48\x55\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULuaTableObjectInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULuaTableObjectInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x54\x61\x62\x6c\x65\x4f\x62\x6a\x65\x63\x74\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULuaBlueprintLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULuaBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULuaUserWidget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULuaUserWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x55\x73\x65\x72\x57\x69\x64\x67\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULuaDelegateWrap.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULuaDelegateWrap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x44\x65\x6c\x65\x67\x61\x74\x65\x57\x72\x61\x70");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULuaDelegate.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULuaDelegate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x44\x65\x6c\x65\x67\x61\x74\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LatentDelegate.OnLatentCallback
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void ULatentDelegate::OnLatentCallback(int32_t threadRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x61\x74\x65\x6e\x74\x44\x65\x6c\x65\x67\x61\x74\x65\x2e\x4f\x6e\x4c\x61\x74\x65\x6e\x74\x43\x61\x6c\x6c\x62\x61\x63\x6b");
		Function_slua_unreal_LatentDelegate_OnLatentCallback_Param params { };
		params.threadRef = threadRef;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LuaActor.CallLuaMember
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	struct FLuaBPVar ALuaActor::CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x41\x63\x74\x6f\x72\x2e\x43\x61\x6c\x6c\x4c\x75\x61\x4d\x65\x6d\x62\x65\x72");
		Function_slua_unreal_LuaActor_CallLuaMember_Param params { };
		params.FunctionName = FunctionName;
		params.Args = Args;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Args = params.Args;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LuaPawn.CallLuaMember
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	struct FLuaBPVar ALuaPawn::CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x50\x61\x77\x6e\x2e\x43\x61\x6c\x6c\x4c\x75\x61\x4d\x65\x6d\x62\x65\x72");
		Function_slua_unreal_LuaPawn_CallLuaMember_Param params { };
		params.FunctionName = FunctionName;
		params.Args = Args;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Args = params.Args;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LuaCharacter.CallLuaMember
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	struct FLuaBPVar ALuaCharacter::CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x43\x68\x61\x72\x61\x63\x74\x65\x72\x2e\x43\x61\x6c\x6c\x4c\x75\x61\x4d\x65\x6d\x62\x65\x72");
		Function_slua_unreal_LuaCharacter_CallLuaMember_Param params { };
		params.FunctionName = FunctionName;
		params.Args = Args;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Args = params.Args;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LuaController.CallLuaMember
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	struct FLuaBPVar ALuaController::CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72\x2e\x43\x61\x6c\x6c\x4c\x75\x61\x4d\x65\x6d\x62\x65\x72");
		Function_slua_unreal_LuaController_CallLuaMember_Param params { };
		params.FunctionName = FunctionName;
		params.Args = Args;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Args = params.Args;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LuaPlayerController.CallLuaMember
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	struct FLuaBPVar ALuaPlayerController::CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x50\x6c\x61\x79\x65\x72\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72\x2e\x43\x61\x6c\x6c\x4c\x75\x61\x4d\x65\x6d\x62\x65\x72");
		Function_slua_unreal_LuaPlayerController_CallLuaMember_Param params { };
		params.FunctionName = FunctionName;
		params.Args = Args;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Args = params.Args;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LuaActorComponent.CallLuaMember
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	struct FLuaBPVar ULuaActorComponent::CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x41\x63\x74\x6f\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x43\x61\x6c\x6c\x4c\x75\x61\x4d\x65\x6d\x62\x65\x72");
		Function_slua_unreal_LuaActorComponent_CallLuaMember_Param params { };
		params.FunctionName = FunctionName;
		params.Args = Args;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Args = params.Args;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LuaGameModeBase.CallLuaMember
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	struct FLuaBPVar ALuaGameModeBase::CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x47\x61\x6d\x65\x4d\x6f\x64\x65\x42\x61\x73\x65\x2e\x43\x61\x6c\x6c\x4c\x75\x61\x4d\x65\x6d\x62\x65\x72");
		Function_slua_unreal_LuaGameModeBase_CallLuaMember_Param params { };
		params.FunctionName = FunctionName;
		params.Args = Args;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Args = params.Args;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LuaHUD.CallLuaMember
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	struct FLuaBPVar ALuaHUD::CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x48\x55\x44\x2e\x43\x61\x6c\x6c\x4c\x75\x61\x4d\x65\x6d\x62\x65\x72");
		Function_slua_unreal_LuaHUD_CallLuaMember_Param params { };
		params.FunctionName = FunctionName;
		params.Args = Args;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Args = params.Args;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LuaBlueprintLibrary.GetStringFromVar
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FString ULuaBlueprintLibrary::STATIC_GetStringFromVar(struct FLuaBPVar Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x4c\x69\x62\x72\x61\x72\x79\x2e\x47\x65\x74\x53\x74\x72\x69\x6e\x67\x46\x72\x6f\x6d\x56\x61\x72");
		Function_slua_unreal_LuaBlueprintLibrary_GetStringFromVar_Param params { };
		params.Value = Value;
		params.Index = Index;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LuaUserWidget.CallLuaMember
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	struct FLuaBPVar ULuaUserWidget::CallLuaMember(struct FString FunctionName, struct TArray<struct FLuaBPVar>& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x55\x73\x65\x72\x57\x69\x64\x67\x65\x74\x2e\x43\x61\x6c\x6c\x4c\x75\x61\x4d\x65\x6d\x62\x65\x72");
		Function_slua_unreal_LuaUserWidget_CallLuaMember_Param params { };
		params.FunctionName = FunctionName;
		params.Args = Args;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Args = params.Args;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function slua_unreal.LuaDelegate.EventTrigger
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void ULuaDelegate::EventTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x6c\x75\x61\x5f\x75\x6e\x72\x65\x61\x6c\x2e\x4c\x75\x61\x44\x65\x6c\x65\x67\x61\x74\x65\x2e\x45\x76\x65\x6e\x74\x54\x72\x69\x67\x67\x65\x72");
		Function_slua_unreal_LuaDelegate_EventTrigger_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}