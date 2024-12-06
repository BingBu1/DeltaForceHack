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
	 * 	Name: PredefinedFunction FMTExpectStat.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMTExpectStat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x74\x61\x54\x65\x73\x74\x2e\x4d\x54\x45\x78\x70\x65\x63\x74\x53\x74\x61\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMetaTestManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMetaTestManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x74\x61\x54\x65\x73\x74\x2e\x4d\x65\x74\x61\x54\x65\x73\x74\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MetaTest.MetaTestManager.StubCallCountPlusOne
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UMetaTestManager::STATIC_StubCallCountPlusOne(struct FString Func)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x65\x74\x61\x54\x65\x73\x74\x2e\x4d\x65\x74\x61\x54\x65\x73\x74\x4d\x61\x6e\x61\x67\x65\x72\x2e\x53\x74\x75\x62\x43\x61\x6c\x6c\x43\x6f\x75\x6e\x74\x50\x6c\x75\x73\x4f\x6e\x65");
		Function_MetaTest_MetaTestManager_StubCallCountPlusOne_Param params { };
		params.Func = Func;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}