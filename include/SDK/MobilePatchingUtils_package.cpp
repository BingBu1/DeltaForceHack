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
	 * 	Name: PredefinedFunction UMobilePatchingLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMobilePatchingLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x6f\x62\x69\x6c\x65\x50\x61\x74\x63\x68\x69\x6e\x67\x55\x74\x69\x6c\x73\x2e\x4d\x6f\x62\x69\x6c\x65\x50\x61\x74\x63\x68\x69\x6e\x67\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMobileInstalledContent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMobileInstalledContent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x6f\x62\x69\x6c\x65\x50\x61\x74\x63\x68\x69\x6e\x67\x55\x74\x69\x6c\x73\x2e\x4d\x6f\x62\x69\x6c\x65\x49\x6e\x73\x74\x61\x6c\x6c\x65\x64\x43\x6f\x6e\x74\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMobilePendingContent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMobilePendingContent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x6f\x62\x69\x6c\x65\x50\x61\x74\x63\x68\x69\x6e\x67\x55\x74\x69\x6c\x73\x2e\x4d\x6f\x62\x69\x6c\x65\x50\x65\x6e\x64\x69\x6e\x67\x43\x6f\x6e\x74\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UMobilePatchingLibrary::STATIC_RequestContent(/*struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed*/)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x6f\x62\x69\x6c\x65\x50\x61\x74\x63\x68\x69\x6e\x67\x55\x74\x69\x6c\x73\x2e\x4d\x6f\x62\x69\x6c\x65\x50\x61\x74\x63\x68\x69\x6e\x67\x4c\x69\x62\x72\x61\x72\x79\x2e\x52\x65\x71\x75\x65\x73\x74\x43\x6f\x6e\x74\x65\x6e\x74");
		Function_MobilePatchingUtils_MobilePatchingLibrary_RequestContent_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MobilePatchingUtils.MobileInstalledContent.Mount
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	bool UMobileInstalledContent::Mount(int32_t PakOrder, struct FString MountPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x6f\x62\x69\x6c\x65\x50\x61\x74\x63\x68\x69\x6e\x67\x55\x74\x69\x6c\x73\x2e\x4d\x6f\x62\x69\x6c\x65\x49\x6e\x73\x74\x61\x6c\x6c\x65\x64\x43\x6f\x6e\x74\x65\x6e\x74\x2e\x4d\x6f\x75\x6e\x74");
		Function_MobilePatchingUtils_MobileInstalledContent_Mount_Param params { };
		params.PakOrder = PakOrder;
		params.MountPoint = MountPoint;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MobilePatchingUtils.MobilePendingContent.StartInstall
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UMobilePendingContent::StartInstall(/*struct FDelegate OnSucceeded, struct FDelegate OnFailed*/)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x6f\x62\x69\x6c\x65\x50\x61\x74\x63\x68\x69\x6e\x67\x55\x74\x69\x6c\x73\x2e\x4d\x6f\x62\x69\x6c\x65\x50\x65\x6e\x64\x69\x6e\x67\x43\x6f\x6e\x74\x65\x6e\x74\x2e\x53\x74\x61\x72\x74\x49\x6e\x73\x74\x61\x6c\x6c");
		Function_MobilePatchingUtils_MobilePendingContent_StartInstall_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}