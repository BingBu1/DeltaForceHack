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
	 * 	Name: PredefinedFunction FTAProfilerMessage.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FTAProfilerMessage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x54\x69\x6d\x69\x41\x75\x64\x69\x6f\x50\x72\x6f\x66\x69\x6c\x65\x72\x2e\x54\x41\x50\x72\x6f\x66\x69\x6c\x65\x72\x4d\x65\x73\x73\x61\x67\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTAProfilerBPFuncLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTAProfilerBPFuncLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x69\x6d\x69\x41\x75\x64\x69\x6f\x50\x72\x6f\x66\x69\x6c\x65\x72\x2e\x54\x41\x50\x72\x6f\x66\x69\x6c\x65\x72\x42\x50\x46\x75\x6e\x63\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTAProfilerPanel.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTAProfilerPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x69\x6d\x69\x41\x75\x64\x69\x6f\x50\x72\x6f\x66\x69\x6c\x65\x72\x2e\x54\x41\x50\x72\x6f\x66\x69\x6c\x65\x72\x50\x61\x6e\x65\x6c");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function TimiAudioProfiler.TAProfilerBPFuncLibrary.CreateProfilerWidget
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTAProfilerBPFuncLibrary::STATIC_CreateProfilerWidget(struct APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x54\x69\x6d\x69\x41\x75\x64\x69\x6f\x50\x72\x6f\x66\x69\x6c\x65\x72\x2e\x54\x41\x50\x72\x6f\x66\x69\x6c\x65\x72\x42\x50\x46\x75\x6e\x63\x4c\x69\x62\x72\x61\x72\x79\x2e\x43\x72\x65\x61\x74\x65\x50\x72\x6f\x66\x69\x6c\x65\x72\x57\x69\x64\x67\x65\x74");
		Function_TimiAudioProfiler_TAProfilerBPFuncLibrary_CreateProfilerWidget_Param params { };
		params.InPlayerController = InPlayerController;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function TimiAudioProfiler.TAProfilerPanel.StartLogOnClicked
	 * 	Flags: (Final, Native, Public)
	 */
	void UTAProfilerPanel::StartLogOnClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x54\x69\x6d\x69\x41\x75\x64\x69\x6f\x50\x72\x6f\x66\x69\x6c\x65\x72\x2e\x54\x41\x50\x72\x6f\x66\x69\x6c\x65\x72\x50\x61\x6e\x65\x6c\x2e\x53\x74\x61\x72\x74\x4c\x6f\x67\x4f\x6e\x43\x6c\x69\x63\x6b\x65\x64");
		Function_TimiAudioProfiler_TAProfilerPanel_StartLogOnClicked_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}