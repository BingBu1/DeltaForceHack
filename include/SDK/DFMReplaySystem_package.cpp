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
	 * 	Name: PredefinedFunction FReplayDataChunk.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FReplayDataChunk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x44\x61\x74\x61\x43\x68\x75\x6e\x6b");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FReplayCheckpointChunk.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FReplayCheckpointChunk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x43\x68\x65\x63\x6b\x70\x6f\x69\x6e\x74\x43\x68\x75\x6e\x6b");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FReplayHeaderChunk.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FReplayHeaderChunk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x48\x65\x61\x64\x65\x72\x43\x68\x75\x6e\x6b");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMNetworkPlayerReplayComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMNetworkPlayerReplayComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x44\x46\x4d\x4e\x65\x74\x77\x6f\x72\x6b\x50\x6c\x61\x79\x65\x72\x52\x65\x70\x6c\x61\x79\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMNetworkReplaySubsystem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMNetworkReplaySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x44\x46\x4d\x4e\x65\x74\x77\x6f\x72\x6b\x52\x65\x70\x6c\x61\x79\x53\x75\x62\x73\x79\x73\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMReplayEvent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMReplayEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x45\x76\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMReplayInstance.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMReplayInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x49\x6e\x73\x74\x61\x6e\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ADFMReplayPlayerController.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ADFMReplayPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x50\x6c\x61\x79\x65\x72\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMReplaySystemBlueprintHelper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMReplaySystemBlueprintHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x48\x65\x6c\x70\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UKillCamHUDView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UKillCamHUDView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x4b\x69\x6c\x6c\x43\x61\x6d\x48\x55\x44\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UProtocolFileDebugItem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UProtocolFileDebugItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x74\x6f\x63\x6f\x6c\x46\x69\x6c\x65\x44\x65\x62\x75\x67\x49\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UReplayControllerView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UReplayControllerView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UReplayDebugFileItemView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UReplayDebugFileItemView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x44\x65\x62\x75\x67\x46\x69\x6c\x65\x49\x74\x65\x6d\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UReplayDebugMainView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UReplayDebugMainView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x44\x65\x62\x75\x67\x4d\x61\x69\x6e\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UReplayListDisplayView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UReplayListDisplayView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x4c\x69\x73\x74\x44\x69\x73\x70\x6c\x61\x79\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UReplayLoadingView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UReplayLoadingView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x4c\x6f\x61\x64\x69\x6e\x67\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UReplayOBView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UReplayOBView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x4f\x42\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.TryStopReplayRecording
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	bool UDFMNetworkPlayerReplayComponent::TryStopReplayRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x44\x46\x4d\x4e\x65\x74\x77\x6f\x72\x6b\x50\x6c\x61\x79\x65\x72\x52\x65\x70\x6c\x61\x79\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x54\x72\x79\x53\x74\x6f\x70\x52\x65\x70\x6c\x61\x79\x52\x65\x63\x6f\x72\x64\x69\x6e\x67");
		Function_DFMReplaySystem_DFMNetworkPlayerReplayComponent_TryStopReplayRecording_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.DFMNetworkReplaySubsystem.OnGameFlowLeave
	 * 	Flags: (Final, Native, Public)
	 */
	void UDFMNetworkReplaySubsystem::OnGameFlowLeave(enum class EGameFlowStageType GameFlowStage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x44\x46\x4d\x4e\x65\x74\x77\x6f\x72\x6b\x52\x65\x70\x6c\x61\x79\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x4f\x6e\x47\x61\x6d\x65\x46\x6c\x6f\x77\x4c\x65\x61\x76\x65");
		Function_DFMReplaySystem_DFMNetworkReplaySubsystem_OnGameFlowLeave_Param params { };
		params.GameFlowStage = GameFlowStage;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.DFMReplayInstance.StopReplayRecording
	 * 	Flags: (Native, Public)
	 */
	bool UDFMReplayInstance::StopReplayRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x49\x6e\x73\x74\x61\x6e\x63\x65\x2e\x53\x74\x6f\x70\x52\x65\x70\x6c\x61\x79\x52\x65\x63\x6f\x72\x64\x69\x6e\x67");
		Function_DFMReplaySystem_DFMReplayInstance_StopReplayRecording_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.DFMReplayPlayerController.OnUnregisterActor
	 * 	Flags: (Native, Protected)
	 */
	void ADFMReplayPlayerController::OnUnregisterActor(struct AActor* ChangedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x50\x6c\x61\x79\x65\x72\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72\x2e\x4f\x6e\x55\x6e\x72\x65\x67\x69\x73\x74\x65\x72\x41\x63\x74\x6f\x72");
		Function_DFMReplaySystem_DFMReplayPlayerController_OnUnregisterActor_Param params { };
		params.ChangedActor = ChangedActor;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.StartParseProtocolFile
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UDFMReplaySystemBlueprintHelper::STATIC_StartParseProtocolFile(struct UObject* WorldContextObject, struct FString FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x48\x65\x6c\x70\x65\x72\x2e\x53\x74\x61\x72\x74\x50\x61\x72\x73\x65\x50\x72\x6f\x74\x6f\x63\x6f\x6c\x46\x69\x6c\x65");
		Function_DFMReplaySystem_DFMReplaySystemBlueprintHelper_StartParseProtocolFile_Param params { };
		params.WorldContextObject = WorldContextObject;
		params.FilePath = FilePath;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.KillCamHUDView.StopKillCam
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UKillCamHUDView::StopKillCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x4b\x69\x6c\x6c\x43\x61\x6d\x48\x55\x44\x56\x69\x65\x77\x2e\x53\x74\x6f\x70\x4b\x69\x6c\x6c\x43\x61\x6d");
		Function_DFMReplaySystem_KillCamHUDView_StopKillCam_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.ProtocolFileDebugItem.OnClickPlayButton
	 * 	Flags: (Final, Native, Public)
	 */
	void UProtocolFileDebugItem::OnClickPlayButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x74\x6f\x63\x6f\x6c\x46\x69\x6c\x65\x44\x65\x62\x75\x67\x49\x74\x65\x6d\x2e\x4f\x6e\x43\x6c\x69\x63\x6b\x50\x6c\x61\x79\x42\x75\x74\x74\x6f\x6e");
		Function_DFMReplaySystem_ProtocolFileDebugItem_OnClickPlayButton_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.ReplayControllerView.TrySkipReplayTime
	 * 	Flags: (Final, Native, Protected)
	 */
	void UReplayControllerView::TrySkipReplayTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72\x56\x69\x65\x77\x2e\x54\x72\x79\x53\x6b\x69\x70\x52\x65\x70\x6c\x61\x79\x54\x69\x6d\x65");
		Function_DFMReplaySystem_ReplayControllerView_TrySkipReplayTime_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.ReplayDebugFileItemView.PlayReplay
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UReplayDebugFileItemView::PlayReplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x44\x65\x62\x75\x67\x46\x69\x6c\x65\x49\x74\x65\x6d\x56\x69\x65\x77\x2e\x50\x6c\x61\x79\x52\x65\x70\x6c\x61\x79");
		Function_DFMReplaySystem_ReplayDebugFileItemView_PlayReplay_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.ReplayDebugMainView.RemoveFromViewPortHide
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UReplayDebugMainView::RemoveFromViewPortHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x44\x65\x62\x75\x67\x4d\x61\x69\x6e\x56\x69\x65\x77\x2e\x52\x65\x6d\x6f\x76\x65\x46\x72\x6f\x6d\x56\x69\x65\x77\x50\x6f\x72\x74\x48\x69\x64\x65");
		Function_DFMReplaySystem_ReplayDebugMainView_RemoveFromViewPortHide_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.ReplayListDisplayView.RemoveFromViewPortHide
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UReplayListDisplayView::RemoveFromViewPortHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x4c\x69\x73\x74\x44\x69\x73\x70\x6c\x61\x79\x56\x69\x65\x77\x2e\x52\x65\x6d\x6f\x76\x65\x46\x72\x6f\x6d\x56\x69\x65\x77\x50\x6f\x72\x74\x48\x69\x64\x65");
		Function_DFMReplaySystem_ReplayListDisplayView_RemoveFromViewPortHide_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMReplaySystem.ReplayOBView.OnClientCharacterListChanged
	 * 	Flags: (Final, Native, Public)
	 */
	void UReplayOBView::OnClientCharacterListChanged(struct AGPCharacterBase* CHARACTER)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x52\x65\x70\x6c\x61\x79\x4f\x42\x56\x69\x65\x77\x2e\x4f\x6e\x43\x6c\x69\x65\x6e\x74\x43\x68\x61\x72\x61\x63\x74\x65\x72\x4c\x69\x73\x74\x43\x68\x61\x6e\x67\x65\x64");
		Function_DFMReplaySystem_ReplayOBView_OnClientCharacterListChanged_Param params { };
		params.CHARACTER = CHARACTER;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}