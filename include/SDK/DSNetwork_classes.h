
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DSNetwork.DSLogicBase
// Size: 0x3d8 (Inherited: 0x30)
class UDSLogicBase : public UObject {
public:

	char pad_30[0x3a8]; // 0x30(0x3a8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DSNetwork.DualChannelIpNetConnection
// Size: 0x1f80 (Inherited: 0x1de0)
class UDualChannelIpNetConnection : public UPropertyReplicationConnection {
public:

	char pad_1DE0[0x98]; // 0x1de0(0x98)
	struct UDualChannelChildConnection* ChildConnection; // 0x1e78(0x08)
	float SocketErrorRecoverDelay; // 0x1e80(0x04)
	float ServerSocketSendThreshold; // 0x1e84(0x04)
	bool ForceSendViaDualSocket; // 0x1e88(0x01)
	bool EnablePacketAnalyse; // 0x1e89(0x01)
	char pad_1E8A[0xf6]; // 0x1e8a(0xf6)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DSNetwork.DualChannelChildConnection
// Size: 0x1de8 (Inherited: 0x1de0)
class UDualChannelChildConnection : public UIpConnection {
public:

	struct UDualChannelIpNetConnection* ParentConnection; // 0x1de0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DSNetwork.DualChannelIpNetDriver
// Size: 0x880 (Inherited: 0x808)
class UDualChannelIpNetDriver : public UIpNetDriver {
public:

	char pad_808[0x78]; // 0x808(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DSNetwork.MultiIpNetConnection
// Size: 0x1de0 (Inherited: 0x1de0)
class UMultiIpNetConnection : public UIpConnection {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DSNetwork.MultiIpNetDriver
// Size: 0x888 (Inherited: 0x808)
class UMultiIpNetDriver : public UIpNetDriver {
public:

	char pad_808[0x80]; // 0x808(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DSNetwork.ProtocolJsonExporter
// Size: 0x68 (Inherited: 0x30)
class UProtocolJsonExporter : public UObject {
public:

	char pad_30[0x38]; // 0x30(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DSNetwork.ParseNetProtocolCommandlet
// Size: 0x88 (Inherited: 0x88)
class UParseNetProtocolCommandlet : public UCommandlet {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
