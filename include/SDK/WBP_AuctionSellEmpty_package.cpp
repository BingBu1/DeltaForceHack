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
	 * 	Name: PredefinedFunction UWBP_AuctionSellEmpty_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_AuctionSellEmpty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x41\x75\x63\x74\x69\x6f\x6e\x53\x65\x6c\x6c\x45\x6d\x70\x74\x79\x2e\x57\x42\x50\x5f\x41\x75\x63\x74\x69\x6f\x6e\x53\x65\x6c\x6c\x45\x6d\x70\x74\x79\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC033005F
	 * 	Name: Function WBP_AuctionSellEmpty.WBP_AuctionSellEmpty_C.SetSty
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_AuctionSellEmpty_C::SetSty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x41\x75\x63\x74\x69\x6f\x6e\x53\x65\x6c\x6c\x45\x6d\x70\x74\x79\x2e\x57\x42\x50\x5f\x41\x75\x63\x74\x69\x6f\x6e\x53\x65\x6c\x6c\x45\x6d\x70\x74\x79\x5f\x43\x2e\x53\x65\x74\x53\x74\x79");
		Function_WBP_AuctionSellEmpty_WBP_AuctionSellEmpty_C_SetSty_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}