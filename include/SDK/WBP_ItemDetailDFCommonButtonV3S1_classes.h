
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailDFCommonButtonV3S1.WBP_ItemDetailDFCommonButtonV3S1_C
// Size: 0x5c0 (Inherited: 0x550)
class UWBP_ItemDetailDFCommonButtonV3S1_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	/*struct UWBP_DFCommonButtonV3S1_C**/char WBP_DFCommonButtonV3S1_2[0x8]; // 0x558(0x08)
	/*struct TMap<struct TSoftObjectPtr<UPaperSprite>, struct FString>*/char Icon[0x50]; // 0x560(0x50)
	struct TArray<int32_t> size; // 0x5b0(0x10)

	void SetSize(int32_t size); // Function WBP_ItemDetailDFCommonButtonV3S1.WBP_ItemDetailDFCommonButtonV3S1_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40fffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
