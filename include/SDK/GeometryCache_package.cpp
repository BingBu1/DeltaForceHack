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
	 * 	Name: PredefinedFunction FTrackRenderData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FTrackRenderData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x54\x72\x61\x63\x6b\x52\x65\x6e\x64\x65\x72\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FGeometryCacheMeshData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGeometryCacheMeshData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x4d\x65\x73\x68\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FGeometryCacheVertexInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGeometryCacheVertexInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x56\x65\x72\x74\x65\x78\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FGeometryCacheMeshBatchInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGeometryCacheMeshBatchInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x4d\x65\x73\x68\x42\x61\x74\x63\x68\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGeometryCache.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGeometryCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AGeometryCacheActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AGeometryCacheActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGeometryCacheComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGeometryCacheComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGeometryCacheCodecBase.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x43\x6f\x64\x65\x63\x42\x61\x73\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGeometryCacheTrack.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x54\x72\x61\x63\x6b");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGeometryCacheCodecRaw.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecRaw::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x43\x6f\x64\x65\x63\x52\x61\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGeometryCacheCodecV1.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecV1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x43\x6f\x64\x65\x63\x56\x31");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGeometryCacheTrack_FlipbookAnimation.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_FlipbookAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x54\x72\x61\x63\x6b\x5f\x46\x6c\x69\x70\x62\x6f\x6f\x6b\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGeometryCacheTrackStreamable.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGeometryCacheTrackStreamable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x54\x72\x61\x63\x6b\x53\x74\x72\x65\x61\x6d\x61\x62\x6c\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGeometryCacheTrack_TransformAnimation.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_TransformAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x54\x72\x61\x63\x6b\x5f\x54\x72\x61\x6e\x73\x66\x6f\x72\x6d\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGeometryCacheTrack_TransformGroupAnimation.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_TransformGroupAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x54\x72\x61\x63\x6b\x5f\x54\x72\x61\x6e\x73\x66\x6f\x72\x6d\x47\x72\x6f\x75\x70\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	 * 	Flags: (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x41\x63\x74\x6f\x72\x2e\x47\x65\x74\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		Function_GeometryCache_GeometryCacheActor_GetGeometryCacheComponent_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x54\x69\x63\x6b\x41\x74\x54\x68\x69\x73\x54\x69\x6d\x65");
		Function_GeometryCache_GeometryCacheComponent_TickAtThisTime_Param params { };
		params.Time = Time;
		params.bInIsRunning = bInIsRunning;
		params.bInBackwards = bInBackwards;
		params.bInIsLooping = bInIsLooping;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	 * 	Flags: (Final, Native, Public, HasOutParms)
	 */
	void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x54\x72\x61\x63\x6b\x5f\x46\x6c\x69\x70\x62\x6f\x6f\x6b\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x2e\x41\x64\x64\x4d\x65\x73\x68\x53\x61\x6d\x70\x6c\x65");
		Function_GeometryCache_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Param params { };
		params.MeshData = MeshData;
		params.SampleTime = SampleTime;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		MeshData = params.MeshData;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	 * 	Flags: (Final, Native, Public, HasOutParms)
	 */
	void UGeometryCacheTrack_TransformAnimation::SetMesh(struct FGeometryCacheMeshData& NewMeshData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x54\x72\x61\x63\x6b\x5f\x54\x72\x61\x6e\x73\x66\x6f\x72\x6d\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x2e\x53\x65\x74\x4d\x65\x73\x68");
		Function_GeometryCache_GeometryCacheTrack_TransformAnimation_SetMesh_Param params { };
		params.NewMeshData = NewMeshData;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		NewMeshData = params.NewMeshData;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	 * 	Flags: (Final, Native, Public, HasOutParms)
	 */
	void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(struct FGeometryCacheMeshData& NewMeshData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x2e\x47\x65\x6f\x6d\x65\x74\x72\x79\x43\x61\x63\x68\x65\x54\x72\x61\x63\x6b\x5f\x54\x72\x61\x6e\x73\x66\x6f\x72\x6d\x47\x72\x6f\x75\x70\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x2e\x53\x65\x74\x4d\x65\x73\x68");
		Function_GeometryCache_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Param params { };
		params.NewMeshData = NewMeshData;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		NewMeshData = params.NewMeshData;
	}
}