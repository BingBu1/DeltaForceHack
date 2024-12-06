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
	struct Function_Gamelet_Gamelet_Tick_Param
	{
	public:

		float fDeltaTime; // 0x00(0x04)
	};

	struct Function_Gamelet_GameletEnvMgr_OnEnvToGameMessage_Param
	{
	public:

		struct FString Msg; // 0x00(0x10)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_Gamelet_GameletFile_WriteFile_Param
	{
	public:

		struct FString Path; // 0x00(0x10)
		struct FGameletArrayBuffer ArrayBuffer; // 0x10(0x18)
		bool ReturnValue; // 0x28(0x01)
	};

	struct Function_Gamelet_GameletPaths_ToAbsolutePathForWrite_Param
	{
	public:

		struct FString Path; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_Gamelet_GameletPuertsEnvMgr_OnEnvMessage_Param
	{
	public:

		struct FString Msg; // 0x00(0x10)
	};

	struct Function_Gamelet_GameletPuertsUtilities_UpdateTextureResources_Param
	{
	public:

		struct UTexture2D* Texture; // 0x00(0x08)
	};

	struct Function_Gamelet_GameletSettings_IsValidSetting_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Gamelet_GameletWindow_OnPxWidgetScriptStateInit_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
