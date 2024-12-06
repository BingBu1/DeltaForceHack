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
	struct Function_slua_unreal_LatentDelegate_OnLatentCallback_Param
	{
	public:

		int32_t threadRef; // 0x00(0x04)
	};

	struct Function_slua_unreal_LuaActor_CallLuaMember_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct TArray<struct FLuaBPVar> Args; // 0x10(0x10)
		struct FLuaBPVar ReturnValue; // 0x20(0x20)
	};

	struct Function_slua_unreal_LuaPawn_CallLuaMember_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct TArray<struct FLuaBPVar> Args; // 0x10(0x10)
		struct FLuaBPVar ReturnValue; // 0x20(0x20)
	};

	struct Function_slua_unreal_LuaCharacter_CallLuaMember_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct TArray<struct FLuaBPVar> Args; // 0x10(0x10)
		struct FLuaBPVar ReturnValue; // 0x20(0x20)
	};

	struct Function_slua_unreal_LuaController_CallLuaMember_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct TArray<struct FLuaBPVar> Args; // 0x10(0x10)
		struct FLuaBPVar ReturnValue; // 0x20(0x20)
	};

	struct Function_slua_unreal_LuaPlayerController_CallLuaMember_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct TArray<struct FLuaBPVar> Args; // 0x10(0x10)
		struct FLuaBPVar ReturnValue; // 0x20(0x20)
	};

	struct Function_slua_unreal_LuaActorComponent_CallLuaMember_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct TArray<struct FLuaBPVar> Args; // 0x10(0x10)
		struct FLuaBPVar ReturnValue; // 0x20(0x20)
	};

	struct Function_slua_unreal_LuaGameModeBase_CallLuaMember_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct TArray<struct FLuaBPVar> Args; // 0x10(0x10)
		struct FLuaBPVar ReturnValue; // 0x20(0x20)
	};

	struct Function_slua_unreal_LuaHUD_CallLuaMember_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct TArray<struct FLuaBPVar> Args; // 0x10(0x10)
		struct FLuaBPVar ReturnValue; // 0x20(0x20)
	};

	struct Function_slua_unreal_LuaBlueprintLibrary_GetStringFromVar_Param
	{
	public:

		struct FLuaBPVar Value; // 0x00(0x20)
		int32_t Index; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct FString ReturnValue; // 0x28(0x10)
	};

	struct Function_slua_unreal_LuaUserWidget_CallLuaMember_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct TArray<struct FLuaBPVar> Args; // 0x10(0x10)
		struct FLuaBPVar ReturnValue; // 0x20(0x20)
	};

	struct Function_slua_unreal_LuaDelegate_EventTrigger_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
