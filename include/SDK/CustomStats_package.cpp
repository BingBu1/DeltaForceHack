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
	 * 	Name: PredefinedFunction UCustomGameStats.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UCustomGameStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x75\x73\x74\x6f\x6d\x53\x74\x61\x74\x73\x2e\x43\x75\x73\x74\x6f\x6d\x47\x61\x6d\x65\x53\x74\x61\x74\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameStatsOnFetchBaseSystem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameStatsOnFetchBaseSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x75\x73\x74\x6f\x6d\x53\x74\x61\x74\x73\x2e\x47\x61\x6d\x65\x53\x74\x61\x74\x73\x4f\x6e\x46\x65\x74\x63\x68\x42\x61\x73\x65\x53\x79\x73\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function CustomStats.GameStatsOnFetchBaseSystem.StatsEvent
	 * 	Flags: (Native, Public)
	 */
	void UGameStatsOnFetchBaseSystem::StatsEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x43\x75\x73\x74\x6f\x6d\x53\x74\x61\x74\x73\x2e\x47\x61\x6d\x65\x53\x74\x61\x74\x73\x4f\x6e\x46\x65\x74\x63\x68\x42\x61\x73\x65\x53\x79\x73\x74\x65\x6d\x2e\x53\x74\x61\x74\x73\x45\x76\x65\x6e\x74");
		Function_CustomStats_GameStatsOnFetchBaseSystem_StatsEvent_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}