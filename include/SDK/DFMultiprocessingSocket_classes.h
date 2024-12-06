
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMultiprocessingSocket.DFSocketClient
// Size: 0x60 (Inherited: 0x30)
class UDFSocketClient : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char ReceiveSocketDataDelegate[0x10]; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	struct TArray<struct USocketRSThread*> RecThreads; // 0x50(0x10)

	void SendToServer(struct FString Message); // Function DFMultiprocessingSocket.DFSocketClient.SendToServer // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMultiprocessingSocket.DFSocketServer
// Size: 0x88 (Inherited: 0x30)
class UDFSocketServer : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char SocketCreateDelegate[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char ConnectReceiveDelegate[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char ReceiveSocketDataDelegate[0x10]; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
	struct TArray<struct USocketRSThread*> RecThreads; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)

	void SendToClient(struct FString Message); // Function DFMultiprocessingSocket.DFSocketServer.SendToClient // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMultiprocessingSocket.SocketRSThread
// Size: 0x98 (Inherited: 0x30)
class USocketRSThread : public UObject {
public:

	char pad_30[0x68]; // 0x30(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
