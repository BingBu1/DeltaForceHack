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
	struct Function_NZLuaRuntime_LuaBlueprintBridge_LuaCtorCallFunction_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FString Filename; // 0x08(0x10)
		struct FString FuncName; // 0x18(0x10)
		struct TArray<struct FLuaBPVar> Args; // 0x28(0x10)
		struct FString StateName; // 0x38(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
