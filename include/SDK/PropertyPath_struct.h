
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct PropertyPath.CachedPropertyPath
// Size: 0x28 (Inherited: 0x00)
struct FCachedPropertyPath {
public:

	struct TArray<struct FPropertyPathSegment> Segments; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
	struct UFunction* CachedFunction; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PropertyPath.PropertyPathSegment
// Size: 0x28 (Inherited: 0x00)
struct FPropertyPathSegment {
public:

	struct FName Name; // 0x00(0x08)
	int32_t ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* Struct; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
