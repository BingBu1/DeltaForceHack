
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct MetaperfSupport.MetaperfJankInfo
// Size: 0x18 (Inherited: 0x00)
struct FMetaperfJankInfo {
public:

	int64_t file_size; // 0x00(0x08)
	int64_t lag_count; // 0x08(0x08)
	int64_t room_id; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MetaperfSupport.MetaperfRecordInfo
// Size: 0x08 (Inherited: 0x00)
struct FMetaperfRecordInfo {
public:

	float frequency; // 0x00(0x04)
	int32_t captureMode; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MetaperfSupport.MetaperfSystemInfo
// Size: 0x28 (Inherited: 0x00)
struct FMetaperfSystemInfo {
public:

	int64_t core_num; // 0x00(0x08)
	float core_freq; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t memory_size; // 0x10(0x08)
	int64_t memory_freq; // 0x18(0x08)
	int32_t systemVersion; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
