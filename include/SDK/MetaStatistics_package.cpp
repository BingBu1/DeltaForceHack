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
	 * 	Name: PredefinedFunction FMTDorianTrace.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMTDorianTrace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x74\x61\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x2e\x4d\x54\x44\x6f\x72\x69\x61\x6e\x54\x72\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMTDorianTraceRecord.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMTDorianTraceRecord::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x74\x61\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x2e\x4d\x54\x44\x6f\x72\x69\x61\x6e\x54\x72\x61\x63\x65\x52\x65\x63\x6f\x72\x64");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMTCallTrace.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMTCallTrace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x74\x61\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x2e\x4d\x54\x43\x61\x6c\x6c\x54\x72\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMTAlertRecord.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMTAlertRecord::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x74\x61\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x2e\x4d\x54\x41\x6c\x65\x72\x74\x52\x65\x63\x6f\x72\x64");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMTCallRecord.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMTCallRecord::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x74\x61\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x2e\x4d\x54\x43\x61\x6c\x6c\x52\x65\x63\x6f\x72\x64");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMTCallCollector.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMTCallCollector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x74\x61\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x2e\x4d\x54\x43\x61\x6c\x6c\x43\x6f\x6c\x6c\x65\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMTStatisticsMonitor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMTStatisticsMonitor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x74\x61\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x2e\x4d\x54\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x4d\x6f\x6e\x69\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMTStatisticsHelper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMTStatisticsHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x74\x61\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x2e\x4d\x54\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x48\x65\x6c\x70\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MetaStatistics.MTStatisticsMonitor.ResetData
	 * 	Flags: (Final, Native, Static, Public)
	 */
	void UMTStatisticsMonitor::STATIC_ResetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x65\x74\x61\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x2e\x4d\x54\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x4d\x6f\x6e\x69\x74\x6f\x72\x2e\x52\x65\x73\x65\x74\x44\x61\x74\x61");
		Function_MetaStatistics_MTStatisticsMonitor_ResetData_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MetaStatistics.MTStatisticsHelper.SetInTimeMonitorEnabled
	 * 	Flags: (Final, Native, Static, Public)
	 */
	bool UMTStatisticsHelper::STATIC_SetInTimeMonitorEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x65\x74\x61\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x2e\x4d\x54\x53\x74\x61\x74\x69\x73\x74\x69\x63\x73\x48\x65\x6c\x70\x65\x72\x2e\x53\x65\x74\x49\x6e\x54\x69\x6d\x65\x4d\x6f\x6e\x69\x74\x6f\x72\x45\x6e\x61\x62\x6c\x65\x64");
		Function_MetaStatistics_MTStatisticsHelper_SetInTimeMonitorEnabled_Param params { };
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}