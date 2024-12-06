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
	 * 	Name: PredefinedFunction FCrossMeshManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FCrossMeshManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x6f\x61\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x43\x72\x6f\x73\x73\x4d\x65\x73\x68\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FCrossActorManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FCrossActorManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x6f\x61\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x43\x72\x6f\x73\x73\x41\x63\x74\x6f\x72\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSideMeshManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSideMeshManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x6f\x61\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x53\x69\x64\x65\x4d\x65\x73\x68\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FCurbsManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FCurbsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x6f\x61\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x43\x75\x72\x62\x73\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSideActorManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSideActorManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x6f\x61\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x53\x69\x64\x65\x41\x63\x74\x6f\x72\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ACrossActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ACrossActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x52\x6f\x61\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x43\x72\x6f\x73\x73\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ARoadActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ARoadActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x52\x6f\x61\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x52\x6f\x61\x64\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function RoadRuntime.CrossActor.UpdateSideMesh
	 * 	Flags: (Final, Native, Public, HasDefaults)
	 */
	void ACrossActor::UpdateSideMesh(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, int32_t SocketIndex, bool IsEnable, bool IsNormalized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x52\x6f\x61\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x43\x72\x6f\x73\x73\x41\x63\x74\x6f\x72\x2e\x55\x70\x64\x61\x74\x65\x53\x69\x64\x65\x4d\x65\x73\x68");
		Function_RoadRuntime_CrossActor_UpdateSideMesh_Param params { };
		params.InPrototype = InPrototype;
		params.MeshRelativeLocation = MeshRelativeLocation;
		params.MeshRelativeRotation = MeshRelativeRotation;
		params.SocketIndex = SocketIndex;
		params.IsEnable = IsEnable;
		params.IsNormalized = IsNormalized;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function RoadRuntime.RoadActor.UpdateSplineMesh
	 * 	Flags: (Final, Native, Public)
	 */
	void ARoadActor::UpdateSplineMesh(int32_t MeshIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x52\x6f\x61\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x52\x6f\x61\x64\x41\x63\x74\x6f\x72\x2e\x55\x70\x64\x61\x74\x65\x53\x70\x6c\x69\x6e\x65\x4d\x65\x73\x68");
		Function_RoadRuntime_RoadActor_UpdateSplineMesh_Param params { };
		params.MeshIndex = MeshIndex;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}