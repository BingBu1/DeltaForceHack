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
	 * 	Name: PredefinedFunction FDataOfTimer.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FDataOfTimer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x41\x6e\x61\x6c\x79\x73\x54\x6f\x6f\x6c\x2e\x44\x61\x74\x61\x4f\x66\x54\x69\x6d\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FUICostData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUICostData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x41\x6e\x61\x6c\x79\x73\x54\x6f\x6f\x6c\x2e\x55\x49\x43\x6f\x73\x74\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UAnalyseSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAnalyseSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x41\x6e\x61\x6c\x79\x73\x54\x6f\x6f\x6c\x2e\x41\x6e\x61\x6c\x79\x73\x65\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMAnalyseManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMAnalyseManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x41\x6e\x61\x6c\x79\x73\x54\x6f\x6f\x6c\x2e\x44\x46\x4d\x41\x6e\x61\x6c\x79\x73\x65\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFUICostMonitor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFUICostMonitor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x41\x6e\x61\x6c\x79\x73\x54\x6f\x6f\x6c\x2e\x44\x46\x55\x49\x43\x6f\x73\x74\x4d\x6f\x6e\x69\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMAnalysTool.DFMAnalyseManager.SaveData
	 * 	Flags: (Native, Public, BlueprintCallable)
	 */
	void UDFMAnalyseManager::SaveData(struct FString InDataPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x41\x6e\x61\x6c\x79\x73\x54\x6f\x6f\x6c\x2e\x44\x46\x4d\x41\x6e\x61\x6c\x79\x73\x65\x4d\x61\x6e\x61\x67\x65\x72\x2e\x53\x61\x76\x65\x44\x61\x74\x61");
		Function_DFMAnalysTool_DFMAnalyseManager_SaveData_Param params { };
		params.InDataPath = InDataPath;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMAnalysTool.DFUICostMonitor.SaveData
	 * 	Flags: (Native, Public, BlueprintCallable)
	 */
	void UDFUICostMonitor::SaveData(struct FString InFilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x41\x6e\x61\x6c\x79\x73\x54\x6f\x6f\x6c\x2e\x44\x46\x55\x49\x43\x6f\x73\x74\x4d\x6f\x6e\x69\x74\x6f\x72\x2e\x53\x61\x76\x65\x44\x61\x74\x61");
		Function_DFMAnalysTool_DFUICostMonitor_SaveData_Param params { };
		params.InFilePath = InFilePath;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}