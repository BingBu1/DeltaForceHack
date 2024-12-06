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
	 * 	Name: PredefinedFunction UAutomatedTestingHelpers.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAutomatedTestingHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x2e\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x48\x65\x6c\x70\x65\x72\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UAutomatedTestingInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAutomatedTestingInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x2e\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UBPAutomatedTestingConfig.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBPAutomatedTestingConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x2e\x42\x50\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x43\x6f\x6e\x66\x69\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ARuntimeSceneCaptureCamera.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ARuntimeSceneCaptureCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x2e\x52\x75\x6e\x74\x69\x6d\x65\x53\x63\x65\x6e\x65\x43\x61\x70\x74\x75\x72\x65\x43\x61\x6d\x65\x72\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ARuntimeSceneCaptureController.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ARuntimeSceneCaptureController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x2e\x52\x75\x6e\x74\x69\x6d\x65\x53\x63\x65\x6e\x65\x43\x61\x70\x74\x75\x72\x65\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function AutomatedTesting.AutomatedTestingHelpers.WriteExecResult
	 * 	Flags: (Final, Native, Static, Public)
	 */
	void UAutomatedTestingHelpers::STATIC_WriteExecResult(struct FString Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x2e\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x48\x65\x6c\x70\x65\x72\x73\x2e\x57\x72\x69\x74\x65\x45\x78\x65\x63\x52\x65\x73\x75\x6c\x74");
		Function_AutomatedTesting_AutomatedTestingHelpers_WriteExecResult_Param params { };
		params.Result = Result;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function AutomatedTesting.BPAutomatedTestingConfig.MountPufferPaks
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UBPAutomatedTestingConfig::STATIC_MountPufferPaks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x2e\x42\x50\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x43\x6f\x6e\x66\x69\x67\x2e\x4d\x6f\x75\x6e\x74\x50\x75\x66\x66\x65\x72\x50\x61\x6b\x73");
		Function_AutomatedTesting_BPAutomatedTestingConfig_MountPufferPaks_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function AutomatedTesting.RuntimeSceneCaptureCamera.SaveCaptureResult
	 * 	Flags: (Final, Native, Protected, BlueprintCallable)
	 */
	void ARuntimeSceneCaptureCamera::SaveCaptureResult(struct UTextureRenderTarget2D* InCaptureResult, struct FString CaptureResultSavedPath, struct FString CaptureResultSavedName, bool bShouldSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x2e\x52\x75\x6e\x74\x69\x6d\x65\x53\x63\x65\x6e\x65\x43\x61\x70\x74\x75\x72\x65\x43\x61\x6d\x65\x72\x61\x2e\x53\x61\x76\x65\x43\x61\x70\x74\x75\x72\x65\x52\x65\x73\x75\x6c\x74");
		Function_AutomatedTesting_RuntimeSceneCaptureCamera_SaveCaptureResult_Param params { };
		params.InCaptureResult = InCaptureResult;
		params.CaptureResultSavedPath = CaptureResultSavedPath;
		params.CaptureResultSavedName = CaptureResultSavedName;
		params.bShouldSave = bShouldSave;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function AutomatedTesting.RuntimeSceneCaptureController.SplitString
	 * 	Flags: (Final, Native, Protected, BlueprintCallable)
	 */
	struct TArray<struct FString> ARuntimeSceneCaptureController::SplitString(struct FString SourceString, struct FString Delimiter, bool bCullEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x75\x74\x6f\x6d\x61\x74\x65\x64\x54\x65\x73\x74\x69\x6e\x67\x2e\x52\x75\x6e\x74\x69\x6d\x65\x53\x63\x65\x6e\x65\x43\x61\x70\x74\x75\x72\x65\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72\x2e\x53\x70\x6c\x69\x74\x53\x74\x72\x69\x6e\x67");
		Function_AutomatedTesting_RuntimeSceneCaptureController_SplitString_Param params { };
		params.SourceString = SourceString;
		params.Delimiter = Delimiter;
		params.bCullEmpty = bCullEmpty;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}