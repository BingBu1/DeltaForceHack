
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct SpinePlugin.SpineEvent
// Size: 0x30 (Inherited: 0x00)
struct FSpineEvent {
public:

	struct FString Name; // 0x00(0x10)
	struct FString StringValue; // 0x10(0x10)
	int32_t IntValue; // 0x20(0x04)
	float FloatValue; // 0x24(0x04)
	float Time; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SpinePlugin.SpineAnimationStateMixData
// Size: 0x28 (Inherited: 0x00)
struct FSpineAnimationStateMixData {
public:

	struct FString From; // 0x00(0x10)
	struct FString To; // 0x10(0x10)
	float Mix; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
