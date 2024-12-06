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
	 * 	Name: PredefinedFunction FMRMeshConfiguration.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMRMeshConfiguration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x52\x4d\x65\x73\x68\x2e\x4d\x52\x4d\x65\x73\x68\x43\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMeshReconstructorBase.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMeshReconstructorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x52\x4d\x65\x73\x68\x2e\x4d\x65\x73\x68\x52\x65\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x42\x61\x73\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMockDataMeshTrackerComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMockDataMeshTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x52\x4d\x65\x73\x68\x2e\x4d\x6f\x63\x6b\x44\x61\x74\x61\x4d\x65\x73\x68\x54\x72\x61\x63\x6b\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMRMeshComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMRMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x52\x4d\x65\x73\x68\x2e\x4d\x52\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MRMesh.MeshReconstructorBase.StopReconstruction
	 * 	Flags: (Native, Public, BlueprintCallable)
	 */
	void UMeshReconstructorBase::StopReconstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x52\x4d\x65\x73\x68\x2e\x4d\x65\x73\x68\x52\x65\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x42\x61\x73\x65\x2e\x53\x74\x6f\x70\x52\x65\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e");
		Function_MRMesh_MeshReconstructorBase_StopReconstruction_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	 * 	Flags: (MulticastDelegate, Public, Delegate, HasOutParms)
	 */
	void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x44\x65\x6c\x65\x67\x61\x74\x65\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x52\x4d\x65\x73\x68\x2e\x4d\x6f\x63\x6b\x44\x61\x74\x61\x4d\x65\x73\x68\x54\x72\x61\x63\x6b\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x4f\x6e\x4d\x6f\x63\x6b\x44\x61\x74\x61\x4d\x65\x73\x68\x54\x72\x61\x63\x6b\x65\x72\x55\x70\x64\x61\x74\x65\x64\x5f\x5f\x44\x65\x6c\x65\x67\x61\x74\x65\x53\x69\x67\x6e\x61\x74\x75\x72\x65");
		DelegateFunction_MRMesh_MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Param params { };
		params.Index = Index;
		params.Vertices = Vertices;
		params.Triangles = Triangles;
		params.Normals = Normals;
		params.Confidence = Confidence;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Vertices = params.Vertices;
		Triangles = params.Triangles;
		Normals = params.Normals;
		Confidence = params.Confidence;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MRMesh.MRMeshComponent.IsConnected
	 * 	Flags: (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMRMeshComponent::IsConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x52\x4d\x65\x73\x68\x2e\x4d\x52\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x49\x73\x43\x6f\x6e\x6e\x65\x63\x74\x65\x64");
		Function_MRMesh_MRMeshComponent_IsConnected_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}