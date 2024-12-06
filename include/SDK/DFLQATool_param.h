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
	struct Function_DFLQATool_LQABaseView_ScreenShot_Param
	{
	public:

	};

	struct Function_DFLQATool_LQAManager_LQADumpViewAndSnapshot_Param
	{
	public:

	};

	struct Function_DFLQATool_LQARemoteToolManager_SendSnapshotData_Param
	{
	public:

	};

	struct Function_DFLQATool_LQARestoreManager_MakeRestoredWindow_Param
	{
	public:

		struct FString DumpFilePath; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_DFLQATool_RestoreWindowProxy_AddChildrenToPanel_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
