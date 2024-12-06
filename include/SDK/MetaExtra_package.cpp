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
	 * 	Name: PredefinedFunction FMTIOTestData2.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMTIOTestData2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x74\x61\x45\x78\x74\x72\x61\x2e\x4d\x54\x49\x4f\x54\x65\x73\x74\x44\x61\x74\x61\x32");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMTTestUObject3.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMTTestUObject3::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x74\x61\x45\x78\x74\x72\x61\x2e\x4d\x54\x54\x65\x73\x74\x55\x4f\x62\x6a\x65\x63\x74\x33");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMTIOTestData3.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMTIOTestData3::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x74\x61\x45\x78\x74\x72\x61\x2e\x4d\x54\x49\x4f\x54\x65\x73\x74\x44\x61\x74\x61\x33");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMTTestUObject1.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMTTestUObject1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x74\x61\x45\x78\x74\x72\x61\x2e\x4d\x54\x54\x65\x73\x74\x55\x4f\x62\x6a\x65\x63\x74\x31");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMTTestUObject2.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMTTestUObject2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x74\x61\x45\x78\x74\x72\x61\x2e\x4d\x54\x54\x65\x73\x74\x55\x4f\x62\x6a\x65\x63\x74\x32");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MetaExtra.MTIOTestData3.TriggerContainerPassTest
	 * 	Flags: (Final, Native, Public)
	 */
	void UMTIOTestData3::TriggerContainerPassTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x65\x74\x61\x45\x78\x74\x72\x61\x2e\x4d\x54\x49\x4f\x54\x65\x73\x74\x44\x61\x74\x61\x33\x2e\x54\x72\x69\x67\x67\x65\x72\x43\x6f\x6e\x74\x61\x69\x6e\x65\x72\x50\x61\x73\x73\x54\x65\x73\x74");
		Function_MetaExtra_MTIOTestData3_TriggerContainerPassTest_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}