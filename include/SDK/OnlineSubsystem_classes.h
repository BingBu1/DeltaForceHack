
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OnlineSubsystem.NamedInterfaces
// Size: 0x68 (Inherited: 0x30)
class UNamedInterfaces : public UObject {
public:

	struct TArray<struct FNamedInterface> NamedInterfaces; // 0x30(0x10)
	struct TArray<struct FNamedInterfaceDef> NamedInterfaceDefs; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OnlineSubsystem.TurnBasedMatchInterface
// Size: 0x30 (Inherited: 0x30)
class UTurnBasedMatchInterface : public UInterface {
public:


	void OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
