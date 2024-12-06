
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct Overlay.OverlayItem
// Size: 0x28 (Inherited: 0x00)
struct FOverlayItem {
public:

	struct FTimespan StartTime; // 0x00(0x08)
	struct FTimespan EndTime; // 0x08(0x08)
	struct FString Text; // 0x10(0x10)
	struct FVector2D Position; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
