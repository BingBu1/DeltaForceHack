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
	 * 	Name: PredefinedFunction UAntiCheatExpertSDKManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAntiCheatExpertSDKManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x6e\x74\x69\x43\x68\x65\x61\x74\x45\x78\x70\x65\x72\x74\x53\x44\x4b\x2e\x41\x6e\x74\x69\x43\x68\x65\x61\x74\x45\x78\x70\x65\x72\x74\x53\x44\x4b\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function AntiCheatExpertSDK.AntiCheatExpertSDKManager.OnGetConnectResult
	 * 	Flags: (Final, Native, Private, HasOutParms)
	 */
	void UAntiCheatExpertSDKManager::OnGetConnectResult(struct FConnectorResultInfo& ConnectResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x6e\x74\x69\x43\x68\x65\x61\x74\x45\x78\x70\x65\x72\x74\x53\x44\x4b\x2e\x41\x6e\x74\x69\x43\x68\x65\x61\x74\x45\x78\x70\x65\x72\x74\x53\x44\x4b\x4d\x61\x6e\x61\x67\x65\x72\x2e\x4f\x6e\x47\x65\x74\x43\x6f\x6e\x6e\x65\x63\x74\x52\x65\x73\x75\x6c\x74");
		Function_AntiCheatExpertSDK_AntiCheatExpertSDKManager_OnGetConnectResult_Param params { };
		params.ConnectResult = ConnectResult;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		ConnectResult = params.ConnectResult;
	}
}