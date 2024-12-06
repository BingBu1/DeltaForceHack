
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DataTableLoader.EDataTableHotfixFileState
enum class EDataTableHotfixFileState : int {
	EState_Obsoleted = 0,
	EState_WaitSync = 1,
	EState_Synced = 2,
	EState_Overrided = 3,
	EState_WaitNofity = 4,
	EState_MAX = 5
};

// Enum DataTableLoader.EDataTableLoaderGameScene
enum class EDataTableLoaderGameScene : int {
	GameScene_None = 0,
	GameScene_SOL = 1,
	GameScene_BattleField = 2,
	GameScene_MAX = 3
};

// ScriptStruct DataTableLoader.DataTableGameFlow2Scene
// Size: 0x18 (Inherited: 0x10)
struct FDataTableGameFlow2Scene : public FDescRowBase {
public:

	enum class EDataTableUseScene UseScene; // 0x10(0x01)
	enum class EGameFlowStageType GameFlow; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DataTableLoader.DataTableHotfixedData
// Size: 0x30 (Inherited: 0x00)
struct FDataTableHotfixedData {
public:

	bool Result; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName TableName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString MD5; // 0x10(0x10)
	struct TArray<struct FString> Keys; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DataTableLoader.DataTableHotfixFilePackage
// Size: 0x68 (Inherited: 0x00)
struct FDataTableHotfixFilePackage {
public:

	char pad_0[0x68]; // 0x00(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DataTableLoader.DataTableHotfixFile
// Size: 0x88 (Inherited: 0x00)
struct FDataTableHotfixFile {
public:

	char pad_0[0x88]; // 0x00(0x88)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DataTableLoader.DataTableHotfixCell
// Size: 0x28 (Inherited: 0x00)
struct FDataTableHotfixCell {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DataTableLoader.DataTableHotfixNotifier
// Size: 0x58 (Inherited: 0x00)
struct FDataTableHotfixNotifier {
public:

	char pad_0[0x58]; // 0x00(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DataTableLoader.DataTableHotfixEventBridge
// Size: 0x18 (Inherited: 0x00)
struct FDataTableHotfixEventBridge {
public:

	struct FName DataTableName; // 0x00(0x08)
	struct TArray<struct FDataTableHotfixEventHandle> EventHandles; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DataTableLoader.DataTableHotfixEventHandle
// Size: 0x18 (Inherited: 0x00)
struct FDataTableHotfixEventHandle {
public:

	int64_t Token; // 0x00(0x08)
	/*struct FDelegate*/char Event[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DataTableLoader.CSVZipPkg
// Size: 0x28 (Inherited: 0x00)
struct FCSVZipPkg {
public:

	uint64_t Seq; // 0x00(0x08)
	uint64_t Idx; // 0x08(0x08)
	uint64_t Total; // 0x10(0x08)
	struct TArray<struct FCSVZipTable> Tables; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DataTableLoader.CSVZipTable
// Size: 0x50 (Inherited: 0x00)
struct FCSVZipTable {
public:

	bool bCompress; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t Source_CSV_Size; // 0x08(0x08)
	struct FString CSV; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
	struct FString CSV_Name; // 0x30(0x10)
	struct FString Hash; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DataTableLoader.DataTableHotfixC2SParam
// Size: 0x20 (Inherited: 0x00)
struct FDataTableHotfixC2SParam {
public:

	uint64_t Token; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	struct FString Hash; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DataTableLoader.DataTableHotfixParam
// Size: 0x40 (Inherited: 0x00)
struct FDataTableHotfixParam {
public:

	int32_t ReceiveCount; // 0x00(0x04)
	int32_t HotfixCount; // 0x04(0x04)
	struct FName TableName; // 0x08(0x08)
	struct FString MD5; // 0x10(0x10)
	struct FString Header; // 0x20(0x10)
	struct FString Content; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
