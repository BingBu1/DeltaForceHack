
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct GPLineRenderer.LineSection
// Size: 0x30 (Inherited: 0x00)
struct FLineSection {
public:

	char pad_0[0x28]; // 0x00(0x28)
	struct UMaterialInterface* Material; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPLineRenderer.GPBatchedLine
// Size: 0x100 (Inherited: 0x00)
struct FGPBatchedLine {
public:

	struct FVector Start; // 0x00(0x0c)
	struct FVector StartNormal; // 0x0c(0x0c)
	struct FVector StartForward; // 0x18(0x0c)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FMatrix StartMatrix; // 0x30(0x40)
	struct FVector End; // 0x70(0x0c)
	struct FVector EndNormal; // 0x7c(0x0c)
	struct FVector EndForward; // 0x88(0x0c)
	char pad_94[0xc]; // 0x94(0x0c)
	struct FMatrix EndMatrix; // 0xa0(0x40)
	struct FLinearColor Color; // 0xe0(0x10)
	float Thickness; // 0xf0(0x04)
	float RemainingLifeTime; // 0xf4(0x04)
	char DepthPriority; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
