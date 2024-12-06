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
	 * 	Name: PredefinedFunction FSteamUserStatsReceivedData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSteamUserStatsReceivedData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4f\x6e\x6c\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x2e\x53\x74\x65\x61\x6d\x55\x73\x65\x72\x53\x74\x61\x74\x73\x52\x65\x63\x65\x69\x76\x65\x64\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FAchievementInSteam.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FAchievementInSteam::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4f\x6e\x6c\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x2e\x41\x63\x68\x69\x65\x76\x65\x6d\x65\x6e\x74\x49\x6e\x53\x74\x65\x61\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FFriendInfoInSteam.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FFriendInfoInSteam::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4f\x6e\x6c\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x2e\x46\x72\x69\x65\x6e\x64\x49\x6e\x66\x6f\x49\x6e\x53\x74\x65\x61\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFSteamServiceAgent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFSteamServiceAgent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4f\x6e\x6c\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x2e\x44\x46\x53\x74\x65\x61\x6d\x53\x65\x72\x76\x69\x63\x65\x41\x67\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFOnlineService.DFSteamServiceAgent.UninstallDLC
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UDFSteamServiceAgent::UninstallDLC(struct FString APPID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4f\x6e\x6c\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x2e\x44\x46\x53\x74\x65\x61\x6d\x53\x65\x72\x76\x69\x63\x65\x41\x67\x65\x6e\x74\x2e\x55\x6e\x69\x6e\x73\x74\x61\x6c\x6c\x44\x4c\x43");
		Function_DFOnlineService_DFSteamServiceAgent_UninstallDLC_Param params { };
		params.APPID = APPID;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}