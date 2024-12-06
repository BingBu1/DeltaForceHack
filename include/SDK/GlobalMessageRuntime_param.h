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
	struct Function_GlobalMessageRuntime_MessageBPLibrary_UnlistenMessageByName_Param
	{
	public:

		struct FName MessageId; // 0x00(0x08)
		struct UObject* Listener; // 0x08(0x08)
		struct UGMMessageManager* Mgr; // 0x10(0x08)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GlobalMessageRuntime_PropertiesContainer_Get_Param
	{
	public:

		struct UObject* ReturnValue; // 0x00(0x08)
	};

	struct Function_GlobalMessageRuntime_RpcProxyComponent_Unreliable_Notify_Param
	{
	public:

		struct UObject* InObject; // 0x00(0x08)
		struct FName MessageName; // 0x08(0x08)
		struct TArray<char> Buffer; // 0x10(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
