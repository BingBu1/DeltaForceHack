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
	 * 	Name: PredefinedFunction FBinkMediaSrtEntry.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FBinkMediaSrtEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x2e\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x53\x72\x74\x45\x6e\x74\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UBinkFunctionLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBinkFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x2e\x42\x69\x6e\x6b\x46\x75\x6e\x63\x74\x69\x6f\x6e\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UBinkMediaPlayer.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBinkMediaPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x2e\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UBinkMediaSrt.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBinkMediaSrt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x2e\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x53\x72\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UBinkMediaTexture.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBinkMediaTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x2e\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x54\x65\x78\x74\x75\x72\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UBinkMoviePlayerSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBinkMoviePlayerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x2e\x42\x69\x6e\x6b\x4d\x6f\x76\x69\x65\x50\x6c\x61\x79\x65\x72\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
	 * 	Flags: (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FTimespan UBinkFunctionLibrary::STATIC_BinkLoadingMovie_GetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x2e\x42\x69\x6e\x6b\x46\x75\x6e\x63\x74\x69\x6f\x6e\x4c\x69\x62\x72\x61\x72\x79\x2e\x42\x69\x6e\x6b\x4c\x6f\x61\x64\x69\x6e\x67\x4d\x6f\x76\x69\x65\x5f\x47\x65\x74\x54\x69\x6d\x65");
		Function_BinkMediaPlayer_BinkFunctionLibrary_BinkLoadingMovie_GetTime_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
	 * 	Flags: (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::SupportsSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x2e\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x2e\x53\x75\x70\x70\x6f\x72\x74\x73\x53\x65\x65\x6b\x69\x6e\x67");
		Function_BinkMediaPlayer_BinkMediaPlayer_SupportsSeeking_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UBinkMediaTexture::SetMediaPlayer(struct UBinkMediaPlayer* InMediaPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x2e\x42\x69\x6e\x6b\x4d\x65\x64\x69\x61\x54\x65\x78\x74\x75\x72\x65\x2e\x53\x65\x74\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72");
		Function_BinkMediaPlayer_BinkMediaTexture_SetMediaPlayer_Param params { };
		params.InMediaPlayer = InMediaPlayer;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}