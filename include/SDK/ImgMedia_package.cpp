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
	 * 	Name: PredefinedFunction UImgMediaSource.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UImgMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6d\x67\x4d\x65\x64\x69\x61\x2e\x49\x6d\x67\x4d\x65\x64\x69\x61\x53\x6f\x75\x72\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ImgMedia.ImgMediaSource.SetSequencePath
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UImgMediaSource::SetSequencePath(struct FString Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x49\x6d\x67\x4d\x65\x64\x69\x61\x2e\x49\x6d\x67\x4d\x65\x64\x69\x61\x53\x6f\x75\x72\x63\x65\x2e\x53\x65\x74\x53\x65\x71\x75\x65\x6e\x63\x65\x50\x61\x74\x68");
		Function_ImgMedia_ImgMediaSource_SetSequencePath_Param params { };
		params.Path = Path;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}