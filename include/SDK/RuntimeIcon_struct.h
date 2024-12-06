
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct RuntimeIcon.AtlasRectangleContainer
// Size: 0x38 (Inherited: 0x00)
struct FAtlasRectangleContainer {
public:

	char pad_0[0x38]; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RuntimeIcon.AtlasPackingAlgorithm
// Size: 0x08 (Inherited: 0x00)
struct FAtlasPackingAlgorithm {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RuntimeIcon.AtlasRectangleData
// Size: 0x28 (Inherited: 0x00)
struct FAtlasRectangleData {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RuntimeIcon.RTIConfigParam
// Size: 0x14 (Inherited: 0x00)
struct FRTIConfigParam {
public:

	float IconScale; // 0x00(0x04)
	int32_t FrontendMaxNum; // 0x04(0x04)
	int32_t FrontendAtlasSize; // 0x08(0x04)
	int32_t IngameMaxNum; // 0x0c(0x04)
	int32_t IngameAtlasSize; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
