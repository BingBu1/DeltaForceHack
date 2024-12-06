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
	 * 	Name: PredefinedFunction FSlatePreDepthMeshTriangle.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSlatePreDepthMeshTriangle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x2e\x53\x6c\x61\x74\x65\x50\x72\x65\x44\x65\x70\x74\x68\x4d\x65\x73\x68\x54\x72\x69\x61\x6e\x67\x6c\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMGameInstance.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x2e\x44\x46\x4d\x47\x61\x6d\x65\x49\x6e\x73\x74\x61\x6e\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UPOIHUDView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UPOIHUDView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x2e\x50\x4f\x49\x48\x55\x44\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ASlatePreDepthActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ASlatePreDepthActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x2e\x53\x6c\x61\x74\x65\x50\x72\x65\x44\x65\x70\x74\x68\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USlatePreDepthMeshComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USlatePreDepthMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x2e\x53\x6c\x61\x74\x65\x50\x72\x65\x44\x65\x70\x74\x68\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFM.DFMGameInstance.StartLocalDS
	 * 	Flags: (Final, Exec, Native, Public)
	 */
	void UDFMGameInstance::StartLocalDS(struct FString MapName, struct FString PlayerIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x2e\x44\x46\x4d\x47\x61\x6d\x65\x49\x6e\x73\x74\x61\x6e\x63\x65\x2e\x53\x74\x61\x72\x74\x4c\x6f\x63\x61\x6c\x44\x53");
		Function_DFM_DFMGameInstance_StartLocalDS_Param params { };
		params.MapName = MapName;
		params.PlayerIds = PlayerIds;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFM.POIHUDView.SetHudAndAutoHide
	 * 	Flags: (Final, Native, Public)
	 */
	void UPOIHUDView::SetHudAndAutoHide(struct FString TextFirst, struct FString TextSecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x2e\x50\x4f\x49\x48\x55\x44\x56\x69\x65\x77\x2e\x53\x65\x74\x48\x75\x64\x41\x6e\x64\x41\x75\x74\x6f\x48\x69\x64\x65");
		Function_DFM_POIHUDView_SetHudAndAutoHide_Param params { };
		params.TextFirst = TextFirst;
		params.TextSecond = TextSecond;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFM.SlatePreDepthMeshComponent.SetMeshTriangles
	 * 	Flags: (Final, Native, Public, HasOutParms)
	 */
	bool USlatePreDepthMeshComponent::SetMeshTriangles(struct TArray<struct FSlatePreDepthMeshTriangle>& Triangles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x2e\x53\x6c\x61\x74\x65\x50\x72\x65\x44\x65\x70\x74\x68\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x53\x65\x74\x4d\x65\x73\x68\x54\x72\x69\x61\x6e\x67\x6c\x65\x73");
		Function_DFM_SlatePreDepthMeshComponent_SetMeshTriangles_Param params { };
		params.Triangles = Triangles;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Triangles = params.Triangles;
		return params.ReturnValue;
	}
}