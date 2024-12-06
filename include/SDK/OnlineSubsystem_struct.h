
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : int {
	Unknown = 0,
	Success = 1,
	Failed = 2,
	Cancelled = 3,
	Invalid = 4,
	NotAllowed = 5,
	Restored = 6,
	AlreadyOwned = 7,
	EInAppPurchaseState_MAX = 8
};

// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : int {
	None = 0,
	Quit = 1,
	Won = 2,
	Lost = 3,
	Tied = 4,
	TimeExpired = 5,
	First = 6,
	Second = 7,
	Third = 8,
	Fourth = 9,
	EMPMatchOutcome_MAX = 10
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// Size: 0xa8 (Inherited: 0x00)
struct FInAppPurchaseProductInfo {
public:

	struct FString Identifier; // 0x00(0x10)
	struct FString TransactionIdentifier; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString DisplayDescription; // 0x30(0x10)
	struct FString DisplayPrice; // 0x40(0x10)
	float RawPrice; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString CurrencyCode; // 0x58(0x10)
	struct FString CurrencySymbol; // 0x68(0x10)
	struct FString DecimalSeparator; // 0x78(0x10)
	struct FString GroupingSeparator; // 0x88(0x10)
	struct FString ReceiptData; // 0x98(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// Size: 0x30 (Inherited: 0x00)
struct FInAppPurchaseRestoreInfo {
public:

	struct FString Identifier; // 0x00(0x10)
	struct FString ReceiptData; // 0x10(0x10)
	struct FString TransactionIdentifier; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// Size: 0x18 (Inherited: 0x00)
struct FNamedInterfaceDef {
public:

	struct FName InterfaceName; // 0x00(0x08)
	struct FString InterfaceClassName; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OnlineSubsystem.NamedInterface
// Size: 0x10 (Inherited: 0x00)
struct FNamedInterface {
public:

	struct FName InterfaceName; // 0x00(0x08)
	struct UObject* InterfaceObject; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// Size: 0x18 (Inherited: 0x00)
struct FInAppPurchaseProductRequest {
public:

	struct FString ProductIdentifier; // 0x00(0x10)
	bool bIsConsumable; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
