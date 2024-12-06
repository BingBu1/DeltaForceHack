
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct ReplayTool.ReportRelatedFiles
// Size: 0x50 (Inherited: 0x00)
struct FReportRelatedFiles {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ReplayTool.ShotcutInfo
// Size: 0x40 (Inherited: 0x00)
struct FShotcutInfo {
public:

	char pad_0[0x40]; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ReplayTool.MemoryReport
// Size: 0x60 (Inherited: 0x00)
struct FMemoryReport {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ReplayTool.TextureMemoryInfo
// Size: 0x10 (Inherited: 0x00)
struct FTextureMemoryInfo {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ReplayTool.ObjMemoryInfo
// Size: 0x10 (Inherited: 0x00)
struct FObjMemoryInfo {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ReplayTool.PerformanceInfo
// Size: 0x40 (Inherited: 0x00)
struct FPerformanceInfo {
public:

	char pad_0[0x40]; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ReplayTool.HistoryInfo
// Size: 0x10 (Inherited: 0x00)
struct FHistoryInfo {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ReplayTool.S_ReplayInfo
// Size: 0x30 (Inherited: 0x00)
struct FS_ReplayInfo {
public:

	struct FString ReplayName; // 0x00(0x10)
	struct FString FriendlyName; // 0x10(0x10)
	struct FDateTime Timestamp; // 0x20(0x08)
	int32_t LengthInMS; // 0x28(0x04)
	bool bIsValid; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
