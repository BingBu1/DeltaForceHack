
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : int {
	SIT_Float = 0,
	SIT_Float2 = 1,
	SIT_Float3 = 2,
	SIT_Float4 = 3,
	SIT_Integer = 4,
	SIT_Image = 5,
	SIT_Unused_7 = 6,
	SIT_Unused_8 = 7,
	SIT_Integer2 = 8,
	SIT_Integer3 = 9,
	SIT_Integer4 = 10,
	SIT_MAX = 11
};

// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : int {
	SGM_PlatformDefault = 0,
	SGM_Baked = 1,
	SGM_OnLoadSync = 2,
	SGM_OnLoadSyncAndCache = 3,
	SGM_OnLoadAsync = 4,
	SGM_OnLoadAsyncAndCache = 5,
	SGM_MAX = 6
};

// Enum SubstanceCore.EDefaultSubstanceTextureSize
enum class EDefaultSubstanceTextureSize : int {
	size_1 = 0,
	size_17 = 1,
	size_33 = 2,
	size_65 = 3,
	size_129 = 4,
	size_257 = 5,
	size_513 = 6,
	size_1025 = 7,
	size_2049 = 8,
	size_4097 = 9,
	size_MAX = 10
};

// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : int {
	SET_CPU = 0,
	SET_GPU = 1,
	SET_MAX = 2
};

// Enum SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : int {
	ERL_17 = 0,
	ERL_33 = 1,
	ERL_65 = 2,
	ERL_129 = 3,
	ERL_257 = 4,
	ERL_513 = 5,
	ERL_1025 = 6,
	ERL_2049 = 7,
	ERL_4097 = 8,
	ERL_8193 = 9,
	ERL_MAX = 10
};

// ScriptStruct SubstanceCore.SubstanceInstanceDesc
// Size: 0x20 (Inherited: 0x00)
struct FSubstanceInstanceDesc {
public:

	struct FString Name; // 0x00(0x10)
	struct TArray<struct FSubstanceInputDesc> Inputs; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SubstanceCore.SubstanceConnection
// Size: 0x20 (Inherited: 0x00)
struct FSubstanceConnection {
public:

	struct FString OutputIdentifier; // 0x00(0x10)
	struct FString InputImageIdentifier; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SubstanceCore.SubstanceInputDesc
// Size: 0x18 (Inherited: 0x00)
struct FSubstanceInputDesc {
public:

	struct FString Name; // 0x00(0x10)
	enum class ESubstanceInputType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SubstanceCore.SubstanceFloatInputDesc
// Size: 0x48 (Inherited: 0x18)
struct FSubstanceFloatInputDesc : public FSubstanceInputDesc {
public:

	struct TArray<float> Min; // 0x18(0x10)
	struct TArray<float> Max; // 0x28(0x10)
	struct TArray<float> Default; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SubstanceCore.SubstanceIntInputDesc
// Size: 0x48 (Inherited: 0x18)
struct FSubstanceIntInputDesc : public FSubstanceInputDesc {
public:

	struct TArray<int32_t> Min; // 0x18(0x10)
	struct TArray<int32_t> Max; // 0x28(0x10)
	struct TArray<int32_t> Default; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
