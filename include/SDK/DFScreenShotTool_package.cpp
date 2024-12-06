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
	 * 	Name: PredefinedFunction UDFScreenShotRequest.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFScreenShotRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x53\x63\x72\x65\x65\x6e\x53\x68\x6f\x74\x54\x6f\x6f\x6c\x2e\x44\x46\x53\x63\x72\x65\x65\x6e\x53\x68\x6f\x74\x52\x65\x71\x75\x65\x73\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFScreenShotToolManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFScreenShotToolManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x53\x63\x72\x65\x65\x6e\x53\x68\x6f\x74\x54\x6f\x6f\x6c\x2e\x44\x46\x53\x63\x72\x65\x65\x6e\x53\x68\x6f\x74\x54\x6f\x6f\x6c\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFScreenShotTool.DFScreenShotRequest.OnScreenShotCapturedSpliceWatermark
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	void UDFScreenShotRequest::OnScreenShotCapturedSpliceWatermark(int32_t InSizeX, int32_t InSizeY, struct TArray<struct FColor>& InImageData, struct FString ScreenshotName, struct UGameInstance* GameInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x53\x63\x72\x65\x65\x6e\x53\x68\x6f\x74\x54\x6f\x6f\x6c\x2e\x44\x46\x53\x63\x72\x65\x65\x6e\x53\x68\x6f\x74\x52\x65\x71\x75\x65\x73\x74\x2e\x4f\x6e\x53\x63\x72\x65\x65\x6e\x53\x68\x6f\x74\x43\x61\x70\x74\x75\x72\x65\x64\x53\x70\x6c\x69\x63\x65\x57\x61\x74\x65\x72\x6d\x61\x72\x6b");
		Function_DFScreenShotTool_DFScreenShotRequest_OnScreenShotCapturedSpliceWatermark_Param params { };
		params.InSizeX = InSizeX;
		params.InSizeY = InSizeY;
		params.InImageData = InImageData;
		params.ScreenshotName = ScreenshotName;
		params.GameInstance = GameInstance;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		InImageData = params.InImageData;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFScreenShotTool.DFScreenShotToolManager.OnDFMScreenshotFinishDelegate
	 * 	Flags: (Final, Native, Public)
	 */
	void UDFScreenShotToolManager::OnDFMScreenshotFinishDelegate(struct FString ScreenshotName, bool WithWaterMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x53\x63\x72\x65\x65\x6e\x53\x68\x6f\x74\x54\x6f\x6f\x6c\x2e\x44\x46\x53\x63\x72\x65\x65\x6e\x53\x68\x6f\x74\x54\x6f\x6f\x6c\x4d\x61\x6e\x61\x67\x65\x72\x2e\x4f\x6e\x44\x46\x4d\x53\x63\x72\x65\x65\x6e\x73\x68\x6f\x74\x46\x69\x6e\x69\x73\x68\x44\x65\x6c\x65\x67\x61\x74\x65");
		Function_DFScreenShotTool_DFScreenShotToolManager_OnDFMScreenshotFinishDelegate_Param params { };
		params.ScreenshotName = ScreenshotName;
		params.WithWaterMark = WithWaterMark;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}