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
	 * 	Name: PredefinedFunction UDFSharedMemoryManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFSharedMemoryManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x53\x68\x61\x72\x65\x64\x4d\x65\x6d\x6f\x72\x79\x2e\x44\x46\x53\x68\x61\x72\x65\x64\x4d\x65\x6d\x6f\x72\x79\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFSharedMemoryBase.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFSharedMemoryBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x53\x68\x61\x72\x65\x64\x4d\x65\x6d\x6f\x72\x79\x2e\x44\x46\x53\x68\x61\x72\x65\x64\x4d\x65\x6d\x6f\x72\x79\x42\x61\x73\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFWindowsSharedMemory.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFWindowsSharedMemory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x53\x68\x61\x72\x65\x64\x4d\x65\x6d\x6f\x72\x79\x2e\x44\x46\x57\x69\x6e\x64\x6f\x77\x73\x53\x68\x61\x72\x65\x64\x4d\x65\x6d\x6f\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFSharedMemory.DFSharedMemoryManager.WriteSharedMemory
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UDFSharedMemoryManager::WriteSharedMemory(struct FString Name, struct FString Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x53\x68\x61\x72\x65\x64\x4d\x65\x6d\x6f\x72\x79\x2e\x44\x46\x53\x68\x61\x72\x65\x64\x4d\x65\x6d\x6f\x72\x79\x4d\x61\x6e\x61\x67\x65\x72\x2e\x57\x72\x69\x74\x65\x53\x68\x61\x72\x65\x64\x4d\x65\x6d\x6f\x72\x79");
		Function_DFSharedMemory_DFSharedMemoryManager_WriteSharedMemory_Param params { };
		params.Name = Name;
		params.Data = Data;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}