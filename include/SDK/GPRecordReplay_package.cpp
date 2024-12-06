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
	 * 	Name: PredefinedFunction FReplayDemoInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FReplayDemoInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x52\x65\x63\x6f\x72\x64\x52\x65\x70\x6c\x61\x79\x2e\x52\x65\x70\x6c\x61\x79\x44\x65\x6d\x6f\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction URecordControlComoponnt.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* URecordControlComoponnt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x52\x65\x63\x6f\x72\x64\x52\x65\x70\x6c\x61\x79\x2e\x52\x65\x63\x6f\x72\x64\x43\x6f\x6e\x74\x72\x6f\x6c\x43\x6f\x6d\x6f\x70\x6f\x6e\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ARecordReplaySystem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ARecordReplaySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x52\x65\x63\x6f\x72\x64\x52\x65\x70\x6c\x61\x79\x2e\x52\x65\x63\x6f\x72\x64\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UReplayControlComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UReplayControlComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x52\x65\x63\x6f\x72\x64\x52\x65\x70\x6c\x61\x79\x2e\x52\x65\x70\x6c\x61\x79\x43\x6f\x6e\x74\x72\x6f\x6c\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UReplayFindComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UReplayFindComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x52\x65\x63\x6f\x72\x64\x52\x65\x70\x6c\x61\x79\x2e\x52\x65\x70\x6c\x61\x79\x46\x69\x6e\x64\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPRecordReplay.RecordReplaySystem.StartStopRecordingReplayOnServer
	 * 	Flags: (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void ARecordReplaySystem::StartStopRecordingReplayOnServer(bool bStartOrStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x52\x65\x63\x6f\x72\x64\x52\x65\x70\x6c\x61\x79\x2e\x52\x65\x63\x6f\x72\x64\x52\x65\x70\x6c\x61\x79\x53\x79\x73\x74\x65\x6d\x2e\x53\x74\x61\x72\x74\x53\x74\x6f\x70\x52\x65\x63\x6f\x72\x64\x69\x6e\x67\x52\x65\x70\x6c\x61\x79\x4f\x6e\x53\x65\x72\x76\x65\x72");
		Function_GPRecordReplay_RecordReplaySystem_StartStopRecordingReplayOnServer_Param params { };
		params.bStartOrStop = bStartOrStop;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPRecordReplay.ReplayControlComponent.SwitchReplayPauseState
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	bool UReplayControlComponent::SwitchReplayPauseState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x52\x65\x63\x6f\x72\x64\x52\x65\x70\x6c\x61\x79\x2e\x52\x65\x70\x6c\x61\x79\x43\x6f\x6e\x74\x72\x6f\x6c\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x53\x77\x69\x74\x63\x68\x52\x65\x70\x6c\x61\x79\x50\x61\x75\x73\x65\x53\x74\x61\x74\x65");
		Function_GPRecordReplay_ReplayControlComponent_SwitchReplayPauseState_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPRecordReplay.ReplayFindComponent.PlayReplay
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UReplayFindComponent::PlayReplay(struct FString ReplayName, struct FString StreamerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x52\x65\x63\x6f\x72\x64\x52\x65\x70\x6c\x61\x79\x2e\x52\x65\x70\x6c\x61\x79\x46\x69\x6e\x64\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x50\x6c\x61\x79\x52\x65\x70\x6c\x61\x79");
		Function_GPRecordReplay_ReplayFindComponent_PlayReplay_Param params { };
		params.ReplayName = ReplayName;
		params.StreamerType = StreamerType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}