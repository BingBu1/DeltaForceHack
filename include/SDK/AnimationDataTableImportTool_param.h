/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_AnimationDataTableImportTool_AnimationImport_ImportDataTable_Param
	{
	public:

		struct UDataTable* Source; // 0x00(0x08)
		struct UDataTable* Destination; // 0x08(0x08)
		struct FString Prefix; // 0x10(0x10)
		struct FDirectoryPath ProjectPath; // 0x20(0x10)
		struct FDirectoryPath ChangeLogPath; // 0x30(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
