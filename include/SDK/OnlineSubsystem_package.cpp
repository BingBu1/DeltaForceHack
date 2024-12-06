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
	 * 	Name: PredefinedFunction FInAppPurchaseProductInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FInAppPurchaseProductInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4f\x6e\x6c\x69\x6e\x65\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x49\x6e\x41\x70\x70\x50\x75\x72\x63\x68\x61\x73\x65\x50\x72\x6f\x64\x75\x63\x74\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FInAppPurchaseRestoreInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FInAppPurchaseRestoreInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4f\x6e\x6c\x69\x6e\x65\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x49\x6e\x41\x70\x70\x50\x75\x72\x63\x68\x61\x73\x65\x52\x65\x73\x74\x6f\x72\x65\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FNamedInterfaceDef.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FNamedInterfaceDef::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4f\x6e\x6c\x69\x6e\x65\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x4e\x61\x6d\x65\x64\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x44\x65\x66");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FNamedInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FNamedInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4f\x6e\x6c\x69\x6e\x65\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x4e\x61\x6d\x65\x64\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FInAppPurchaseProductRequest.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FInAppPurchaseProductRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4f\x6e\x6c\x69\x6e\x65\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x49\x6e\x41\x70\x70\x50\x75\x72\x63\x68\x61\x73\x65\x50\x72\x6f\x64\x75\x63\x74\x52\x65\x71\x75\x65\x73\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UNamedInterfaces.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UNamedInterfaces::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x6e\x6c\x69\x6e\x65\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x4e\x61\x6d\x65\x64\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTurnBasedMatchInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTurnBasedMatchInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x6e\x6c\x69\x6e\x65\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x54\x75\x72\x6e\x42\x61\x73\x65\x64\x4d\x61\x74\x63\x68\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void UTurnBasedMatchInterface::OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4f\x6e\x6c\x69\x6e\x65\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x54\x75\x72\x6e\x42\x61\x73\x65\x64\x4d\x61\x74\x63\x68\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x2e\x4f\x6e\x4d\x61\x74\x63\x68\x52\x65\x63\x65\x69\x76\x65\x64\x54\x75\x72\x6e");
		Function_OnlineSubsystem_TurnBasedMatchInterface_OnMatchReceivedTurn_Param params { };
		params.Match = Match;
		params.bDidBecomeActive = bDidBecomeActive;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}