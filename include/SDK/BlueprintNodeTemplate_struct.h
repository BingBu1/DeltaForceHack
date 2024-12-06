
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum BlueprintNodeTemplate.ETickPrerequisite_BP
enum class ETickPrerequisite_BP : int {
	IndependentTick = 0,
	TickBeforeOwner = 1,
	TickAfterOwner = 2,
	ETickPrerequisite_MAX = 3
};

// ScriptStruct BlueprintNodeTemplate.AITask_TickFunction
// Size: 0x68 (Inherited: 0x60)
struct FAITask_TickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BlueprintNodeTemplate.BlueprintTaskTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FBlueprintTaskTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
