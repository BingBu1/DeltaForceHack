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
	 * 	Name: PredefinedFunction UInstanceTemplateWidget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UInstanceTemplateWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x50\x61\x72\x74\x69\x63\x75\x6c\x61\x72\x2e\x49\x6e\x73\x74\x61\x6e\x63\x65\x54\x65\x6d\x70\x6c\x61\x74\x65\x57\x69\x64\x67\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UParticleWidget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UParticleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x50\x61\x72\x74\x69\x63\x75\x6c\x61\x72\x2e\x50\x61\x72\x74\x69\x63\x6c\x65\x57\x69\x64\x67\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUICascadedComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUICascadedComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x50\x61\x72\x74\x69\x63\x75\x6c\x61\x72\x2e\x55\x49\x43\x61\x73\x63\x61\x64\x65\x64\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUIMeshWidget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUIMeshWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x50\x61\x72\x74\x69\x63\x75\x6c\x61\x72\x2e\x55\x49\x4d\x65\x73\x68\x57\x69\x64\x67\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUMGStaticsLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUMGStaticsLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x50\x61\x72\x74\x69\x63\x75\x6c\x61\x72\x2e\x55\x4d\x47\x53\x74\x61\x74\x69\x63\x73\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UIParticular.InstanceTemplateWidget.SetTickWhenPaused
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UInstanceTemplateWidget::SetTickWhenPaused(bool NewTickWhenPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x49\x50\x61\x72\x74\x69\x63\x75\x6c\x61\x72\x2e\x49\x6e\x73\x74\x61\x6e\x63\x65\x54\x65\x6d\x70\x6c\x61\x74\x65\x57\x69\x64\x67\x65\x74\x2e\x53\x65\x74\x54\x69\x63\x6b\x57\x68\x65\x6e\x50\x61\x75\x73\x65\x64");
		Function_UIParticular_InstanceTemplateWidget_SetTickWhenPaused_Param params { };
		params.NewTickWhenPaused = NewTickWhenPaused;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UIParticular.ParticleWidget.SetTickWhenPaused
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UParticleWidget::SetTickWhenPaused(bool NewTickWhenPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x49\x50\x61\x72\x74\x69\x63\x75\x6c\x61\x72\x2e\x50\x61\x72\x74\x69\x63\x6c\x65\x57\x69\x64\x67\x65\x74\x2e\x53\x65\x74\x54\x69\x63\x6b\x57\x68\x65\x6e\x50\x61\x75\x73\x65\x64");
		Function_UIParticular_ParticleWidget_SetTickWhenPaused_Param params { };
		params.NewTickWhenPaused = NewTickWhenPaused;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UIParticular.UIMeshWidget.SetTickWhenPaused
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UUIMeshWidget::SetTickWhenPaused(bool NewTickWhenPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x49\x50\x61\x72\x74\x69\x63\x75\x6c\x61\x72\x2e\x55\x49\x4d\x65\x73\x68\x57\x69\x64\x67\x65\x74\x2e\x53\x65\x74\x54\x69\x63\x6b\x57\x68\x65\x6e\x50\x61\x75\x73\x65\x64");
		Function_UIParticular_UIMeshWidget_SetTickWhenPaused_Param params { };
		params.NewTickWhenPaused = NewTickWhenPaused;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function UIParticular.UMGStaticsLibrary.PlayAnimationByName
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	float UUMGStaticsLibrary::STATIC_PlayAnimationByName(struct UUserWidget* UserWidget, struct FString AnimName, struct FString WidgetName, enum class EUMGPlayAnimMode PlayMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x55\x49\x50\x61\x72\x74\x69\x63\x75\x6c\x61\x72\x2e\x55\x4d\x47\x53\x74\x61\x74\x69\x63\x73\x4c\x69\x62\x72\x61\x72\x79\x2e\x50\x6c\x61\x79\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x42\x79\x4e\x61\x6d\x65");
		Function_UIParticular_UMGStaticsLibrary_PlayAnimationByName_Param params { };
		params.UserWidget = UserWidget;
		params.AnimName = AnimName;
		params.WidgetName = WidgetName;
		params.PlayMode = PlayMode;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}