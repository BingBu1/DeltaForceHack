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
	 * 	Name: PredefinedFunction FObjectRegistryType.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FObjectRegistryType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x55\x45\x34\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x73\x2e\x4f\x62\x6a\x65\x63\x74\x52\x65\x67\x69\x73\x74\x72\x79\x54\x79\x70\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UComponentBookKeeper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UComponentBookKeeper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x45\x34\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x73\x2e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x42\x6f\x6f\x6b\x4b\x65\x65\x70\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UComponentRegistryLib.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UComponentRegistryLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x45\x34\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x73\x2e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x52\x65\x67\x69\x73\x74\x72\x79\x4c\x69\x62");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UObjectRegistrys.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UObjectRegistrys::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x45\x34\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x73\x2e\x4f\x62\x6a\x65\x63\x74\x52\x65\x67\x69\x73\x74\x72\x79\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UE4Singletons.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UE4Singletons::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x45\x34\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x73\x2e\x45\x34\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UE4Singletons.ComponentBookKeeper.RegisterAutoSpawnComponents
	 * 	Flags: (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 */
	void UComponentBookKeeper::STATIC_RegisterAutoSpawnComponents(/*struct UClass* Class, struct TSet<struct UClass*>& RegDatas, bool bPersistent, char Flags*/)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x45\x34\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x73\x2e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x42\x6f\x6f\x6b\x4b\x65\x65\x70\x65\x72\x2e\x52\x65\x67\x69\x73\x74\x65\x72\x41\x75\x74\x6f\x53\x70\x61\x77\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73");
		Function_UE4Singletons_ComponentBookKeeper_RegisterAutoSpawnComponents_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UE4Singletons.ComponentRegistryLib.AllComponent
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct TArray<struct UActorComponent*> UComponentRegistryLib::STATIC_AllComponent(struct UObject* WorldContextObj, struct UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x45\x34\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x73\x2e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x52\x65\x67\x69\x73\x74\x72\x79\x4c\x69\x62\x2e\x41\x6c\x6c\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		Function_UE4Singletons_ComponentRegistryLib_AllComponent_Param params { };
		params.WorldContextObj = WorldContextObj;
		params.Class = Class;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UE4Singletons.ObjectRegistrys.SetObject
	 * 	Flags: (Final, Native, Static, Protected, BlueprintCallable)
	 */
	void UObjectRegistrys::STATIC_SetObject(struct UObject* Object, struct UClass* StopClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x45\x34\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x73\x2e\x4f\x62\x6a\x65\x63\x74\x52\x65\x67\x69\x73\x74\x72\x79\x73\x2e\x53\x65\x74\x4f\x62\x6a\x65\x63\x74");
		Function_UE4Singletons_ObjectRegistrys_SetObject_Param params { };
		params.Object = Object;
		params.StopClass = StopClass;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UE4Singletons.E4Singletons.RegisterAsSingletonImpl
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UObject* UE4Singletons::STATIC_RegisterAsSingletonImpl(struct UObject* Object, struct UObject* WorldContextObject, bool bReplaceExist, struct UClass* InNativeClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x45\x34\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x73\x2e\x45\x34\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x73\x2e\x52\x65\x67\x69\x73\x74\x65\x72\x41\x73\x53\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x49\x6d\x70\x6c");
		Function_UE4Singletons_E4Singletons_RegisterAsSingletonImpl_Param params { };
		params.Object = Object;
		params.WorldContextObject = WorldContextObject;
		params.bReplaceExist = bReplaceExist;
		params.InNativeClass = InNativeClass;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}