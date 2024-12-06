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
	 * 	Name: PredefinedFunction UCrashSightGameInfoCollectSys.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UCrashSightGameInfoCollectSys::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x4d\x2e\x43\x72\x61\x73\x68\x53\x69\x67\x68\x74\x47\x61\x6d\x65\x49\x6e\x66\x6f\x43\x6f\x6c\x6c\x65\x63\x74\x53\x79\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UPlayerGMComponentRaid.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UPlayerGMComponentRaid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x4d\x2e\x50\x6c\x61\x79\x65\x72\x47\x4d\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x52\x61\x69\x64");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GM.PlayerGMComponentRaid.ServerSetBreakableActorHP
	 * 	Flags: (Net, NetReliable, Native, Event, Public, NetServer)
	 */
	void UPlayerGMComponentRaid::ServerSetBreakableActorHP(int32_t DesHP, struct AActor* Target, struct FName ActorsTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x4d\x2e\x50\x6c\x61\x79\x65\x72\x47\x4d\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x52\x61\x69\x64\x2e\x53\x65\x72\x76\x65\x72\x53\x65\x74\x42\x72\x65\x61\x6b\x61\x62\x6c\x65\x41\x63\x74\x6f\x72\x48\x50");
		Function_GM_PlayerGMComponentRaid_ServerSetBreakableActorHP_Param params { };
		params.DesHP = DesHP;
		params.Target = Target;
		params.ActorsTag = ActorsTag;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}