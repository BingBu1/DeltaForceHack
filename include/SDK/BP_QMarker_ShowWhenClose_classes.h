
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_QMarker_ShowWhenClose.BP_QMarker_ShowWhenClose_C
// Size: 0x454 (Inherited: 0x444)
class ABP_QMarker_ShowWhenClose_C : public ABP_QMarker_C {
public:

	char pad_444[0x4]; // 0x444(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	float ShowDistanceThreshold; // 0x450(0x04)

	void ReceiveBeginPlay(); // Function BP_QMarker_ShowWhenClose.BP_QMarker_ShowWhenClose_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
