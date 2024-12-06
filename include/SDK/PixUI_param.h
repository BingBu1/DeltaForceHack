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
	struct Function_PixUI_PixFileLoadObject_OnFileLoad_Param
	{
	public:

		struct TArray<char> arrayFileData; // 0x00(0x10)
	};

	struct Function_PixUI_PixUIBPLibrary_PixUI_Version_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_PixUI_PixUIExternalInterface_OnWidgetLoad_Param
	{
	public:

		struct FString fstrWidgetPath; // 0x00(0x10)
		struct FString fstrWidgetTag; // 0x10(0x10)
		struct UWidget* ReturnValue; // 0x20(0x08)
	};

	struct Function_PixUI_PixUIInput_OnInputText_Param
	{
	public:

		struct FString fstrInsert; // 0x00(0x10)
		bool bEndInput; // 0x10(0x01)
		bool bLostFocus; // 0x11(0x01)
		bool bReplace; // 0x12(0x01)
	};

	struct Function_PixUI_PixUILog_PxLogToggleSwitchLevel_Param
	{
	public:

		enum class EPxLogLevels eLogLevel; // 0x00(0x01)
		bool beOpen; // 0x01(0x01)
	};

	struct Function_PixUI_PixUIScriptVM_SendPxMessage_Param
	{
	public:

		struct FString fstrMessage; // 0x00(0x10)
		int32_t nWaitMS; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_PixUI_PixUIViewPortWidget_SendPxMessage_Param
	{
	public:

		struct FString fstrMessage; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_PixUI_PixUIWidget_ShowNextDrawBatch_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
