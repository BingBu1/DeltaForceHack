
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Hero_Label.WBP_Hero_Label_C
// Size: 0x598 (Inherited: 0x550)
class UWBP_Hero_Label_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage_54; // 0x558(0x08)
	struct UDFImage* DFImage_104; // 0x560(0x08)
	struct UDFImage* DFImage_378; // 0x568(0x08)
	struct UDFImage* DFImage_462; // 0x570(0x08)
	struct UDFTextBlock* DFTextBlock_43; // 0x578(0x08)
	int32_t Type; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x588(0x10)

	void BP_SetType(int32_t Type); // Function WBP_Hero_Label.WBP_Hero_Label_C.BP_SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
