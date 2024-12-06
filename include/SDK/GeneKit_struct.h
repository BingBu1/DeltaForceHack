
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GeneKit.EPositionSnapArrangeType
enum class EPositionSnapArrangeType : int {
	TopLeft = 0,
	TopCenter = 1,
	TopRight = 2,
	MiddleLeft = 3,
	MiddleCenter = 4,
	MiddleRight = 5,
	BottomLeft = 6,
	BottomCenter = 7,
	BottomRight = 8,
	EPositionSnapArrangeType_MAX = 9
};

// Enum GeneKit.EGeneKitMaterialType
enum class EGeneKitMaterialType : int {
	Wood = 0,
	EGeneKitMaterialType_MAX = 1
};

// Enum GeneKit.EGeneKitConnectType
enum class EGeneKitConnectType : int {
	Constant = 0,
	Sigle = 1,
	Combined = 2,
	EGeneKitConnectType_MAX = 3
};

// Enum GeneKit.EGeneKitRotateType
enum class EGeneKitRotateType : int {
	CannotRotate = 0,
	HorizontalRotate = 1,
	VerticalRotate = 2,
	FreeRotate = 3,
	EGeneKitRotateType_MAX = 4
};

// Enum GeneKit.EGeneKitSnapType
enum class EGeneKitSnapType : int {
	Unknow = 0,
	GripSnap = 1,
	AnchorSnap = 2,
	SocketPluginSnap = 3,
	EGeneKitSnapType_MAX = 4
};

// Enum GeneKit.EGeneKitPrefabType
enum class EGeneKitPrefabType : int {
	Unknown = 0,
	Atomic = 1,
	Combined = 2,
	EGeneKitPrefabType_MAX = 3
};

// Enum GeneKit.EGeneKitAnchorType
enum class EGeneKitAnchorType : int {
	Unknown = 0,
	Socket = 1,
	Plugin = 2,
	EGeneKitAnchorType_MAX = 3
};

// ScriptStruct GeneKit.GeneKitAnchorData
// Size: 0x50 (Inherited: 0x00)
struct FGeneKitAnchorData {
public:

	char pad_0[0x8]; // 0x00(0x08)
	uint64_t AnchorDataConnectId; // 0x08(0x08)
	struct FName SocketOrPluginTag; // 0x10(0x08)
	struct FVector PivotOffset; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FRotator> Rotations; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneKit.GeneKitPrefabInfo
// Size: 0x30 (Inherited: 0x00)
struct FGeneKitPrefabInfo {
public:

	struct FName GeneKitName; // 0x00(0x08)
	/*struct TSoftObjectPtr<UObject>*/char GeneKitActorPrefabs[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneKit.GeneKitSocketPluginBind
// Size: 0x20 (Inherited: 0x00)
struct FGeneKitSocketPluginBind {
public:

	struct FName SocketTag; // 0x00(0x08)
	struct TArray<struct FName> CanBindPluginTags; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneKit.GeneKitPluginTag
// Size: 0x14 (Inherited: 0x00)
struct FGeneKitPluginTag {
public:

	struct FName PluginTag; // 0x00(0x08)
	struct FName PluginTagDes; // 0x08(0x08)
	char pad_10[0x4]; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneKit.GeneKitSocketTag
// Size: 0x14 (Inherited: 0x00)
struct FGeneKitSocketTag {
public:

	struct FName SocketTag; // 0x00(0x08)
	struct FName SocketTagDes; // 0x08(0x08)
	char pad_10[0x4]; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
