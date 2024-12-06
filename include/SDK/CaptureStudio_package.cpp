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
	 * 	Name: PredefinedFunction FCaptureTarget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FCaptureTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x43\x61\x70\x74\x75\x72\x65\x53\x74\x75\x64\x69\x6f\x2e\x43\x61\x70\x74\x75\x72\x65\x54\x61\x72\x67\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ACaptureEnv.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ACaptureEnv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x61\x70\x74\x75\x72\x65\x53\x74\x75\x64\x69\x6f\x2e\x43\x61\x70\x74\x75\x72\x65\x45\x6e\x76");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ACaptureLight.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ACaptureLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x61\x70\x74\x75\x72\x65\x53\x74\x75\x64\x69\x6f\x2e\x43\x61\x70\x74\x75\x72\x65\x4c\x69\x67\x68\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UCaptureStudioManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UCaptureStudioManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x61\x70\x74\x75\x72\x65\x53\x74\x75\x64\x69\x6f\x2e\x43\x61\x70\x74\x75\x72\x65\x53\x74\x75\x64\x69\x6f\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function CaptureStudio.CaptureEnv.WeaponLoadComplete
	 * 	Flags: (Final, Native, Protected)
	 */
	void ACaptureEnv::WeaponLoadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x43\x61\x70\x74\x75\x72\x65\x53\x74\x75\x64\x69\x6f\x2e\x43\x61\x70\x74\x75\x72\x65\x45\x6e\x76\x2e\x57\x65\x61\x70\x6f\x6e\x4c\x6f\x61\x64\x43\x6f\x6d\x70\x6c\x65\x74\x65");
		Function_CaptureStudio_CaptureEnv_WeaponLoadComplete_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function CaptureStudio.CaptureStudioManager.LoadCaptureEnv
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UCaptureStudioManager::LoadCaptureEnv(struct FString CaptureEnvPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x43\x61\x70\x74\x75\x72\x65\x53\x74\x75\x64\x69\x6f\x2e\x43\x61\x70\x74\x75\x72\x65\x53\x74\x75\x64\x69\x6f\x4d\x61\x6e\x61\x67\x65\x72\x2e\x4c\x6f\x61\x64\x43\x61\x70\x74\x75\x72\x65\x45\x6e\x76");
		Function_CaptureStudio_CaptureStudioManager_LoadCaptureEnv_Param params { };
		params.CaptureEnvPath = CaptureEnvPath;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}