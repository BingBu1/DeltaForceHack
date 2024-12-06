
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ImGui.ImGuiInputHandler
// Size: 0x58 (Inherited: 0x30)
class UImGuiInputHandler : public UObject {
public:

	char pad_30[0x28]; // 0x30(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ImGui.ImGuiSettings
// Size: 0x130 (Inherited: 0x30)
class UImGuiSettings : public UObject {
public:

	struct FSoftClassPath ImGuiInputHandlerClass; // 0x30(0x18)
	bool bShareKeyboardInput; // 0x48(0x01)
	bool bShareGamepadInput; // 0x49(0x01)
	bool bShareMouseInput; // 0x4a(0x01)
	bool bUseSoftwareCursor; // 0x4b(0x01)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FImGuiKeyInfo ToggleInput; // 0x50(0x20)
	struct FImGuiCanvasSizeInfo CanvasSize; // 0x70(0x10)
	struct FImGuiDPIScaleInfo DpiScale; // 0x80(0xb0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
