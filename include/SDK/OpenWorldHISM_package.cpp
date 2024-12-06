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
	 * 	Name: PredefinedFunction FBillboardTransformParamRuntime.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FBillboardTransformParamRuntime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x48\x49\x53\x4d\x2e\x42\x69\x6c\x6c\x62\x6f\x61\x72\x64\x54\x72\x61\x6e\x73\x66\x6f\x72\x6d\x50\x61\x72\x61\x6d\x52\x75\x6e\x74\x69\x6d\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FBillboardMIParamRuntime.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FBillboardMIParamRuntime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x48\x49\x53\x4d\x2e\x42\x69\x6c\x6c\x62\x6f\x61\x72\x64\x4d\x49\x50\x61\x72\x61\x6d\x52\x75\x6e\x74\x69\x6d\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FCustomInstanceData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FCustomInstanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x48\x49\x53\x4d\x2e\x43\x75\x73\x74\x6f\x6d\x49\x6e\x73\x74\x61\x6e\x63\x65\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UBillboardBatchConfigRuntime.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBillboardBatchConfigRuntime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x48\x49\x53\x4d\x2e\x42\x69\x6c\x6c\x62\x6f\x61\x72\x64\x42\x61\x74\x63\x68\x43\x6f\x6e\x66\x69\x67\x52\x75\x6e\x74\x69\x6d\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UOpenWorldBillboardBatchComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UOpenWorldBillboardBatchComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x48\x49\x53\x4d\x2e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x42\x69\x6c\x6c\x62\x6f\x61\x72\x64\x42\x61\x74\x63\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UOpenWorldHierarchicalInstancedMeshComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UOpenWorldHierarchicalInstancedMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x48\x49\x53\x4d\x2e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x48\x69\x65\x72\x61\x72\x63\x68\x69\x63\x61\x6c\x49\x6e\x73\x74\x61\x6e\x63\x65\x64\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function OpenWorldHISM.OpenWorldHierarchicalInstancedMeshComponent.TestAddInstance
	 * 	Flags: (Final, Native, Public)
	 */
	void UOpenWorldHierarchicalInstancedMeshComponent::TestAddInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x48\x49\x53\x4d\x2e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x48\x69\x65\x72\x61\x72\x63\x68\x69\x63\x61\x6c\x49\x6e\x73\x74\x61\x6e\x63\x65\x64\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x54\x65\x73\x74\x41\x64\x64\x49\x6e\x73\x74\x61\x6e\x63\x65");
		Function_OpenWorldHISM_OpenWorldHierarchicalInstancedMeshComponent_TestAddInstance_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}