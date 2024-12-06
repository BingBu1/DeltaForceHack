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
	 * 	Name: PredefinedFunction FAppleImageUtilsImageConversionResult.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FAppleImageUtilsImageConversionResult::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x41\x70\x70\x6c\x65\x49\x6d\x61\x67\x65\x55\x74\x69\x6c\x73\x2e\x41\x70\x70\x6c\x65\x49\x6d\x61\x67\x65\x55\x74\x69\x6c\x73\x49\x6d\x61\x67\x65\x43\x6f\x6e\x76\x65\x72\x73\x69\x6f\x6e\x52\x65\x73\x75\x6c\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UAppleImageUtilsBaseAsyncTaskBlueprintProxy.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x70\x70\x6c\x65\x49\x6d\x61\x67\x65\x55\x74\x69\x6c\x73\x2e\x41\x70\x70\x6c\x65\x49\x6d\x61\x67\x65\x55\x74\x69\x6c\x73\x42\x61\x73\x65\x41\x73\x79\x6e\x63\x54\x61\x73\x6b\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x50\x72\x6f\x78\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UAppleImageInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAppleImageInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x70\x70\x6c\x65\x49\x6d\x61\x67\x65\x55\x74\x69\x6c\x73\x2e\x41\x70\x70\x6c\x65\x49\x6d\x61\x67\x65\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x70\x70\x6c\x65\x49\x6d\x61\x67\x65\x55\x74\x69\x6c\x73\x2e\x41\x70\x70\x6c\x65\x49\x6d\x61\x67\x65\x55\x74\x69\x6c\x73\x42\x61\x73\x65\x41\x73\x79\x6e\x63\x54\x61\x73\x6b\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x50\x72\x6f\x78\x79\x2e\x43\x72\x65\x61\x74\x65\x50\x72\x6f\x78\x79\x4f\x62\x6a\x65\x63\x74\x46\x6f\x72\x43\x6f\x6e\x76\x65\x72\x74\x54\x6f\x54\x49\x46\x46");
		Function_AppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Param params { };
		params.SourceImage = SourceImage;
		params.bWantColor = bWantColor;
		params.bUseGpu = bUseGpu;
		params.Scale = Scale;
		params.Rotate = Rotate;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}