
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum UE4Singletons.ECompAttachedType
enum class ECompAttachedType : int {
	Default = 0,
	ServerSide = 1,
	ClientSide = 2,
	Replicated = 3,
	NameStable = 4,
	BothSide = 5,
	ECompAttachedType_MAX = 6
};

// Enum UE4Singletons.ESystemAttachedType
enum class ESystemAttachedType : int {
	Default = 0,
	ServerSide = 1,
	ClientSide = 2,
	Replicated = 3,
	Instanced = 4,
	BothSide = 5,
	ESystemAttachedType_MAX = 6
};

// ScriptStruct UE4Singletons.ObjectRegistryType
// Size: 0x10 (Inherited: 0x00)
struct FObjectRegistryType {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
