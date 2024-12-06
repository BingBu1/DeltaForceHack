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
	 * 	Name: PredefinedFunction FGPObjectPoolData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGPObjectPoolData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x4f\x62\x6a\x65\x63\x74\x50\x6f\x6f\x6c\x2e\x47\x50\x4f\x62\x6a\x65\x63\x74\x50\x6f\x6f\x6c\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPObjectPoolInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPObjectPoolInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x4f\x62\x6a\x65\x63\x74\x50\x6f\x6f\x6c\x2e\x47\x50\x4f\x62\x6a\x65\x63\x74\x50\x6f\x6f\x6c\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPObjectPoolItemInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPObjectPoolItemInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x4f\x62\x6a\x65\x63\x74\x50\x6f\x6f\x6c\x2e\x47\x50\x4f\x62\x6a\x65\x63\x74\x50\x6f\x6f\x6c\x49\x74\x65\x6d\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPObjectPoolWorld.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPObjectPoolWorld::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x4f\x62\x6a\x65\x63\x74\x50\x6f\x6f\x6c\x2e\x47\x50\x4f\x62\x6a\x65\x63\x74\x50\x6f\x6f\x6c\x57\x6f\x72\x6c\x64");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPObjectPool.GPObjectPoolInterface.SetMaxUsingObjects
	 * 	Flags: (Native, Public)
	 */
	void UGPObjectPoolInterface::SetMaxUsingObjects(struct UClass* objectClass, int32_t MaxObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x4f\x62\x6a\x65\x63\x74\x50\x6f\x6f\x6c\x2e\x47\x50\x4f\x62\x6a\x65\x63\x74\x50\x6f\x6f\x6c\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x2e\x53\x65\x74\x4d\x61\x78\x55\x73\x69\x6e\x67\x4f\x62\x6a\x65\x63\x74\x73");
		Function_GPObjectPool_GPObjectPoolInterface_SetMaxUsingObjects_Param params { };
		params.objectClass = objectClass;
		params.MaxObject = MaxObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}