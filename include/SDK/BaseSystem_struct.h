
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct BaseSystem.RangeValue
// Size: 0x0c (Inherited: 0x00)
struct FRangeValue {
public:

	int32_t MinValue; // 0x00(0x04)
	int32_t MaxValue; // 0x04(0x04)
	int32_t Value; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BaseSystem.SystemData
// Size: 0x28 (Inherited: 0x00)
struct FSystemData {
public:

	struct UObject* obj; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BaseSystem.DataStorageBase
// Size: 0x08 (Inherited: 0x00)
struct FDataStorageBase {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BaseSystem.DataTableRowNamePicker
// Size: 0x08 (Inherited: 0x00)
struct FDataTableRowNamePicker {
public:

	struct FName RowName; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BaseSystem.DataTablePathPicker
// Size: 0x28 (Inherited: 0x00)
struct FDataTablePathPicker {
public:

	/*struct TSoftObjectPtr<UDataTable>*/char DataTablePath[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BaseSystem.DataTableRowPicker
// Size: 0x10 (Inherited: 0x00)
struct FDataTableRowPicker {
public:

	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BaseSystem.DataTablePicker
// Size: 0x08 (Inherited: 0x00)
struct FDataTablePicker {
public:

	struct UDataTable* DataTable; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BaseSystem.SystemConfigs
// Size: 0x10 (Inherited: 0x00)
struct FSystemConfigs {
public:

	struct TArray<struct FSystemConfig> Configs; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BaseSystem.SystemConfig
// Size: 0x10 (Inherited: 0x00)
struct FSystemConfig {
public:

	struct UClass* SystemClass; // 0x00(0x08)
	char Flags; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BaseSystem.ActorDependences
// Size: 0x10 (Inherited: 0x00)
struct FActorDependences {
public:

	struct TArray<struct FActorDependence> Configs; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BaseSystem.ActorDependence
// Size: 0x58 (Inherited: 0x00)
struct FActorDependence {
public:

	/*struct TSet<struct UClass*>*/char ComponentClasses[0x50]; // 0x00(0x50)
	char Flags; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
