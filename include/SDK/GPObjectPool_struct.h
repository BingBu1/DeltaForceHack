
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPObjectPool.EGPObjectPoolRecycleType
enum class EGPObjectPoolRecycleType : int {
	Auto = 0,
	EGPObjectPoolRecycleType_MAX = 1
};

// ScriptStruct GPObjectPool.GPObjectPoolData
// Size: 0x38 (Inherited: 0x00)
struct FGPObjectPoolData {
public:

	struct TArray<struct UObject*> InPoolObjectList; // 0x00(0x10)
	struct TArray<struct UObject*> InUsingObjectList; // 0x10(0x10)
	char pad_20[0x18]; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
