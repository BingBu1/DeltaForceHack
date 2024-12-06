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
	 * 	Name: PredefinedFunction UAnimationImport.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAnimationImport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x44\x61\x74\x61\x54\x61\x62\x6c\x65\x49\x6d\x70\x6f\x72\x74\x54\x6f\x6f\x6c\x2e\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x49\x6d\x70\x6f\x72\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function AnimationDataTableImportTool.AnimationImport.ImportDataTable
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnimationImport::STATIC_ImportDataTable(struct UDataTable* Source, struct UDataTable* Destination, struct FString Prefix, struct FDirectoryPath ProjectPath, struct FDirectoryPath ChangeLogPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x44\x61\x74\x61\x54\x61\x62\x6c\x65\x49\x6d\x70\x6f\x72\x74\x54\x6f\x6f\x6c\x2e\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x49\x6d\x70\x6f\x72\x74\x2e\x49\x6d\x70\x6f\x72\x74\x44\x61\x74\x61\x54\x61\x62\x6c\x65");
		Function_AnimationDataTableImportTool_AnimationImport_ImportDataTable_Param params { };
		params.Source = Source;
		params.Destination = Destination;
		params.Prefix = Prefix;
		params.ProjectPath = ProjectPath;
		params.ChangeLogPath = ChangeLogPath;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}