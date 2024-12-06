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
	 * 	Name: PredefinedFunction FImageWriteOptions.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FImageWriteOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x49\x6d\x61\x67\x65\x57\x72\x69\x74\x65\x51\x75\x65\x75\x65\x2e\x49\x6d\x61\x67\x65\x57\x72\x69\x74\x65\x4f\x70\x74\x69\x6f\x6e\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UImageWriteBlueprintLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UImageWriteBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6d\x61\x67\x65\x57\x72\x69\x74\x65\x51\x75\x65\x75\x65\x2e\x49\x6d\x61\x67\x65\x57\x72\x69\x74\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
	 * 	Flags: (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
	 */
	void UImageWriteBlueprintLibrary::STATIC_ExportToDisk(struct UTexture* Texture, struct FString Filename, struct FImageWriteOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x49\x6d\x61\x67\x65\x57\x72\x69\x74\x65\x51\x75\x65\x75\x65\x2e\x49\x6d\x61\x67\x65\x57\x72\x69\x74\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x4c\x69\x62\x72\x61\x72\x79\x2e\x45\x78\x70\x6f\x72\x74\x54\x6f\x44\x69\x73\x6b");
		Function_ImageWriteQueue_ImageWriteBlueprintLibrary_ExportToDisk_Param params { };
		params.Texture = Texture;
		params.Filename = Filename;
		params.Options = Options;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Options = params.Options;
	}
}