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
	 * 	Name: PredefinedFunction FLogLine.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FLogLine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4c\x6f\x67\x56\x69\x73\x75\x61\x6c\x69\x7a\x65\x72\x49\x6e\x47\x61\x6d\x65\x2e\x4c\x6f\x67\x4c\x69\x6e\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULogVisualizerInGame.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULogVisualizerInGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4c\x6f\x67\x56\x69\x73\x75\x61\x6c\x69\x7a\x65\x72\x49\x6e\x47\x61\x6d\x65\x2e\x4c\x6f\x67\x56\x69\x73\x75\x61\x6c\x69\x7a\x65\x72\x49\x6e\x47\x61\x6d\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function LogVisualizerInGame.LogVisualizerInGame.UpdateFilteredLogContent
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULogVisualizerInGame::STATIC_UpdateFilteredLogContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4c\x6f\x67\x56\x69\x73\x75\x61\x6c\x69\x7a\x65\x72\x49\x6e\x47\x61\x6d\x65\x2e\x4c\x6f\x67\x56\x69\x73\x75\x61\x6c\x69\x7a\x65\x72\x49\x6e\x47\x61\x6d\x65\x2e\x55\x70\x64\x61\x74\x65\x46\x69\x6c\x74\x65\x72\x65\x64\x4c\x6f\x67\x43\x6f\x6e\x74\x65\x6e\x74");
		Function_LogVisualizerInGame_LogVisualizerInGame_UpdateFilteredLogContent_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}