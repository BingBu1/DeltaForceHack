
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_InteractQuality_Grid_Pc.WBP_InteractQuality_Grid_Pc_C
// Size: 0x2bc (Inherited: 0x298)
class UWBP_InteractQuality_Grid_Pc_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UDFImage* Grid; // 0x2a0(0x08)
	struct TArray<struct FLinearColor> ItemColorByLevel; // 0x2a8(0x10)
	int32_t Type; // 0x2b8(0x04)

	void SetStyle(int32_t IndexToTest); // Function WBP_InteractQuality_Grid_Pc.WBP_InteractQuality_Grid_Pc_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
