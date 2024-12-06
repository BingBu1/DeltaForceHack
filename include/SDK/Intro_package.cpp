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
	 * 	Name: PredefinedFunction AIntroGameMode.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AIntroGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x72\x6f\x2e\x49\x6e\x74\x72\x6f\x47\x61\x6d\x65\x4d\x6f\x64\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AIntroGameState.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AIntroGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x72\x6f\x2e\x49\x6e\x74\x72\x6f\x47\x61\x6d\x65\x53\x74\x61\x74\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AIntroPlayerState.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AIntroPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6e\x74\x72\x6f\x2e\x49\x6e\x74\x72\x6f\x50\x6c\x61\x79\x65\x72\x53\x74\x61\x74\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Intro.IntroGameMode.SetPlayerVisiable
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void AIntroGameMode::SetPlayerVisiable(int32_t PlayerIndex, bool bVisiblity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x49\x6e\x74\x72\x6f\x2e\x49\x6e\x74\x72\x6f\x47\x61\x6d\x65\x4d\x6f\x64\x65\x2e\x53\x65\x74\x50\x6c\x61\x79\x65\x72\x56\x69\x73\x69\x61\x62\x6c\x65");
		Function_Intro_IntroGameMode_SetPlayerVisiable_Param params { };
		params.PlayerIndex = PlayerIndex;
		params.bVisiblity = bVisiblity;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Intro.IntroPlayerState.SetPlayerVisiable
	 * 	Flags: (Final, Native, Public)
	 */
	void AIntroPlayerState::SetPlayerVisiable(bool bPlayerVisiable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x49\x6e\x74\x72\x6f\x2e\x49\x6e\x74\x72\x6f\x50\x6c\x61\x79\x65\x72\x53\x74\x61\x74\x65\x2e\x53\x65\x74\x50\x6c\x61\x79\x65\x72\x56\x69\x73\x69\x61\x62\x6c\x65");
		Function_Intro_IntroPlayerState_SetPlayerVisiable_Param params { };
		params.bPlayerVisiable = bPlayerVisiable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}