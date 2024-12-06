
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum ImGui.EImGuiDPIScaleMethod
enum class EImGuiDPIScaleMethod : int {
	ImGui = 0,
	Slate = 1,
	EImGuiDPIScaleMethod_MAX = 2
};

// Enum ImGui.EImGuiCanvasSizeType
enum class EImGuiCanvasSizeType : int {
	Custom = 0,
	Desktop = 1,
	Viewport = 2,
	EImGuiCanvasSizeType_MAX = 3
};

// ScriptStruct ImGui.ImGuiDPIScaleInfo
// Size: 0xb0 (Inherited: 0x00)
struct FImGuiDPIScaleInfo {
public:

	enum class EImGuiDPIScaleMethod ScalingMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scale; // 0x04(0x04)
	struct FRuntimeFloatCurve DPICurve; // 0x08(0xa0)
	bool bScaleWithCurve; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ImGui.ImGuiCanvasSizeInfo
// Size: 0x10 (Inherited: 0x00)
struct FImGuiCanvasSizeInfo {
public:

	enum class EImGuiCanvasSizeType SizeType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Width; // 0x04(0x04)
	int32_t Height; // 0x08(0x04)
	bool bExtendToViewport; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ImGui.ImGuiKeyInfo
// Size: 0x20 (Inherited: 0x00)
struct FImGuiKeyInfo {
public:

	struct FKey Key; // 0x00(0x18)
	enum class ECheckBoxState Shift; // 0x18(0x01)
	enum class ECheckBoxState Ctrl; // 0x19(0x01)
	enum class ECheckBoxState Alt; // 0x1a(0x01)
	enum class ECheckBoxState Cmd; // 0x1b(0x01)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
