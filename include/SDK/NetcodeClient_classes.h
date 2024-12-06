
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class NetcodeClient.ClientCommandlet
// Size: 0x88 (Inherited: 0x88)
class UClientCommandlet : public UCommandlet {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NetcodeClient.NetcodeActorChannel
// Size: 0x2a0 (Inherited: 0x298)
class UNetcodeActorChannel : public UActorChannel {
public:

	char pad_298[0x8]; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NetcodeClient.NetcodeConnection
// Size: 0x1de8 (Inherited: 0x1de0)
class UNetcodeConnection : public UIpConnection {
public:

	char pad_1DE0[0x8]; // 0x1de0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NetcodeClient.NetcodeControlChannel
// Size: 0x80 (Inherited: 0x78)
class UNetcodeControlChannel : public UChannel {
public:

	char pad_78[0x8]; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NetcodeClient.NetcodeMinimalClient
// Size: 0xe0 (Inherited: 0x30)
class UNetcodeMinimalClient : public UObject {
public:

	char pad_30[0xb0]; // 0x30(0xb0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NetcodeClient.NetcodePackageMapClient
// Size: 0x538 (Inherited: 0x530)
class UNetcodePackageMapClient : public UGPPackageMapClient {
public:

	char pad_530[0x8]; // 0x530(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
