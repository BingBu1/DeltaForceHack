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
	 * 	Name: PredefinedFunction FMemoryDeviceInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMemoryDeviceInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x4d\x65\x6d\x6f\x72\x79\x44\x65\x76\x69\x63\x65\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FResizableBarInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FResizableBarInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x52\x65\x73\x69\x7a\x61\x62\x6c\x65\x42\x61\x72\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FDeviceTempInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FDeviceTempInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x44\x65\x76\x69\x63\x65\x54\x65\x6d\x70\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMonitorInfoHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMonitorInfoHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x4d\x6f\x6e\x69\x74\x6f\x72\x49\x6e\x66\x6f\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FDisplayModeHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FDisplayModeHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x44\x69\x73\x70\x6c\x61\x79\x4d\x6f\x64\x65\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FGraphicsQualityMappingRowHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGraphicsQualityMappingRowHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x47\x72\x61\x70\x68\x69\x63\x73\x51\x75\x61\x6c\x69\x74\x79\x4d\x61\x70\x70\x69\x6e\x67\x52\x6f\x77\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FGPUBenchmarkRowHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGPUBenchmarkRowHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x47\x50\x55\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x52\x6f\x77\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FCPUBenchmarkRowHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FCPUBenchmarkRowHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x43\x50\x55\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x52\x6f\x77\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FHardwareBenchmarkRowHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FHardwareBenchmarkRowHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x48\x61\x72\x64\x77\x61\x72\x65\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x52\x6f\x77\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSystemInfoHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSystemInfoHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x53\x79\x73\x74\x65\x6d\x49\x6e\x66\x6f\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FGPUDriverVersionHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGPUDriverVersionHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x47\x50\x55\x44\x72\x69\x76\x65\x72\x56\x65\x72\x73\x69\x6f\x6e\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMemoryBenchmarkRowHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMemoryBenchmarkRowHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x4d\x65\x6d\x6f\x72\x79\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x52\x6f\x77\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FGPUDriverCompatibilityRowHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGPUDriverCompatibilityRowHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x47\x50\x55\x44\x72\x69\x76\x65\x72\x43\x6f\x6d\x70\x61\x74\x69\x62\x69\x6c\x69\x74\x79\x52\x6f\x77\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FVRamBenchmarkRowHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FVRamBenchmarkRowHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x56\x52\x61\x6d\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x52\x6f\x77\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FRamBenchmarkRowHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FRamBenchmarkRowHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x52\x61\x6d\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x52\x6f\x77\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPScalabilityBlueprintTools.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPScalabilityBlueprintTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x47\x50\x53\x63\x61\x6c\x61\x62\x69\x6c\x69\x74\x79\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x54\x6f\x6f\x6c\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UHardwareParamHelper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UHardwareParamHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x48\x61\x72\x64\x77\x61\x72\x65\x50\x61\x72\x61\x6d\x48\x65\x6c\x70\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UNvidiaDRSSetting.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UNvidiaDRSSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x4e\x76\x69\x64\x69\x61\x44\x52\x53\x53\x65\x74\x74\x69\x6e\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UVideoSettingHelper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UVideoSettingHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x56\x69\x64\x65\x6f\x53\x65\x74\x74\x69\x6e\x67\x48\x65\x6c\x70\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPSettings.GPScalabilityBlueprintTools.SetMaxFPS
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UGPScalabilityBlueprintTools::STATIC_SetMaxFPS(float InMaxFPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x47\x50\x53\x63\x61\x6c\x61\x62\x69\x6c\x69\x74\x79\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x54\x6f\x6f\x6c\x73\x2e\x53\x65\x74\x4d\x61\x78\x46\x50\x53");
		Function_GPSettings_GPScalabilityBlueprintTools_SetMaxFPS_Param params { };
		params.InMaxFPS = InMaxFPS;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPSettings.HardwareParamHelper.Warning
	 * 	Flags: (Final, Native, Static, Public)
	 */
	void UHardwareParamHelper::STATIC_Warning(struct FString InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x48\x61\x72\x64\x77\x61\x72\x65\x50\x61\x72\x61\x6d\x48\x65\x6c\x70\x65\x72\x2e\x57\x61\x72\x6e\x69\x6e\x67");
		Function_GPSettings_HardwareParamHelper_Warning_Param params { };
		params.InMessage = InMessage;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPSettings.VideoSettingHelper.WithACLine
	 * 	Flags: (Final, Native, Static, Public)
	 */
	bool UVideoSettingHelper::STATIC_WithACLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x56\x69\x64\x65\x6f\x53\x65\x74\x74\x69\x6e\x67\x48\x65\x6c\x70\x65\x72\x2e\x57\x69\x74\x68\x41\x43\x4c\x69\x6e\x65");
		Function_GPSettings_VideoSettingHelper_WithACLine_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}