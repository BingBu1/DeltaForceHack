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
	 * 	Name: PredefinedFunction FSpineEvent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSpineEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x45\x76\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSpineAnimationStateMixData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSpineAnimationStateMixData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x53\x74\x61\x74\x65\x4d\x69\x78\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USpineAtlasAsset.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USpineAtlasAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x41\x74\x6c\x61\x73\x41\x73\x73\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USpineBoneDriverComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USpineBoneDriverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x42\x6f\x6e\x65\x44\x72\x69\x76\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USpineBoneFollowerComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USpineBoneFollowerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x42\x6f\x6e\x65\x46\x6f\x6c\x6c\x6f\x77\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTrackEntry.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTrackEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x54\x72\x61\x63\x6b\x45\x6e\x74\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USpineSkeletonDataAsset.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USpineSkeletonDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x53\x6b\x65\x6c\x65\x74\x6f\x6e\x44\x61\x74\x61\x41\x73\x73\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USpineSkeletonRendererComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USpineSkeletonRendererComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x53\x6b\x65\x6c\x65\x74\x6f\x6e\x52\x65\x6e\x64\x65\x72\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USpineWidget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USpineWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x57\x69\x64\x67\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USpineSkeletonComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USpineSkeletonComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x53\x6b\x65\x6c\x65\x74\x6f\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USpineSkeletonAnimationComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USpineSkeletonAnimationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x53\x6b\x65\x6c\x65\x74\x6f\x6e\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
	 * 	Flags: (Final, Native, Protected)
	 */
	void USpineBoneDriverComponent::BeforeUpdateWorldTransform(struct USpineSkeletonComponent* Skeleton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x42\x6f\x6e\x65\x44\x72\x69\x76\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x42\x65\x66\x6f\x72\x65\x55\x70\x64\x61\x74\x65\x57\x6f\x72\x6c\x64\x54\x72\x61\x6e\x73\x66\x6f\x72\x6d");
		Function_SpinePlugin_SpineBoneDriverComponent_BeforeUpdateWorldTransform_Param params { };
		params.Skeleton = Skeleton;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SpinePlugin.TrackEntry.SetTrackTime
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UTrackEntry::SetTrackTime(float TrackTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x54\x72\x61\x63\x6b\x45\x6e\x74\x72\x79\x2e\x53\x65\x74\x54\x72\x61\x63\x6b\x54\x69\x6d\x65");
		Function_SpinePlugin_TrackEntry_SetTrackTime_Param params { };
		params.TrackTime = TrackTime;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SpinePlugin.SpineWidget.UpdateWorldTransform
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void USpineWidget::UpdateWorldTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x57\x69\x64\x67\x65\x74\x2e\x55\x70\x64\x61\x74\x65\x57\x6f\x72\x6c\x64\x54\x72\x61\x6e\x73\x66\x6f\x72\x6d");
		Function_SpinePlugin_SpineWidget_UpdateWorldTransform_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void USpineSkeletonComponent::UpdateWorldTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x53\x6b\x65\x6c\x65\x74\x6f\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x55\x70\x64\x61\x74\x65\x57\x6f\x72\x6c\x64\x54\x72\x61\x6e\x73\x66\x6f\x72\x6d");
		Function_SpinePlugin_SpineSkeletonComponent_UpdateWorldTransform_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void USpineSkeletonAnimationComponent::SetTimeScale(float TimeScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x70\x69\x6e\x65\x50\x6c\x75\x67\x69\x6e\x2e\x53\x70\x69\x6e\x65\x53\x6b\x65\x6c\x65\x74\x6f\x6e\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x53\x65\x74\x54\x69\x6d\x65\x53\x63\x61\x6c\x65");
		Function_SpinePlugin_SpineSkeletonAnimationComponent_SetTimeScale_Param params { };
		params.TimeScale = TimeScale;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}