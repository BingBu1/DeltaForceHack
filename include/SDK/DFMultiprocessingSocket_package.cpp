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
	 * 	Name: PredefinedFunction UDFSocketClient.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFSocketClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x75\x6c\x74\x69\x70\x72\x6f\x63\x65\x73\x73\x69\x6e\x67\x53\x6f\x63\x6b\x65\x74\x2e\x44\x46\x53\x6f\x63\x6b\x65\x74\x43\x6c\x69\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFSocketServer.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFSocketServer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x75\x6c\x74\x69\x70\x72\x6f\x63\x65\x73\x73\x69\x6e\x67\x53\x6f\x63\x6b\x65\x74\x2e\x44\x46\x53\x6f\x63\x6b\x65\x74\x53\x65\x72\x76\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USocketRSThread.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USocketRSThread::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x75\x6c\x74\x69\x70\x72\x6f\x63\x65\x73\x73\x69\x6e\x67\x53\x6f\x63\x6b\x65\x74\x2e\x53\x6f\x63\x6b\x65\x74\x52\x53\x54\x68\x72\x65\x61\x64");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMultiprocessingSocket.DFSocketClient.SendToServer
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UDFSocketClient::SendToServer(struct FString Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x75\x6c\x74\x69\x70\x72\x6f\x63\x65\x73\x73\x69\x6e\x67\x53\x6f\x63\x6b\x65\x74\x2e\x44\x46\x53\x6f\x63\x6b\x65\x74\x43\x6c\x69\x65\x6e\x74\x2e\x53\x65\x6e\x64\x54\x6f\x53\x65\x72\x76\x65\x72");
		Function_DFMultiprocessingSocket_DFSocketClient_SendToServer_Param params { };
		params.Message = Message;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMultiprocessingSocket.DFSocketServer.SendToClient
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UDFSocketServer::SendToClient(struct FString Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x75\x6c\x74\x69\x70\x72\x6f\x63\x65\x73\x73\x69\x6e\x67\x53\x6f\x63\x6b\x65\x74\x2e\x44\x46\x53\x6f\x63\x6b\x65\x74\x53\x65\x72\x76\x65\x72\x2e\x53\x65\x6e\x64\x54\x6f\x43\x6c\x69\x65\x6e\x74");
		Function_DFMultiprocessingSocket_DFSocketServer_SendToClient_Param params { };
		params.Message = Message;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}