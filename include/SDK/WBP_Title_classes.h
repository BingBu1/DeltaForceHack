
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Title.WBP_Title_C
// Size: 0x2d0 (Inherited: 0x2b8)
class UWBP_Title_C : public UIrisSafeHouseInteractorDepartmentTitle {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UDFMImage* wtDepartmentImg; // 0x2c0(0x08)
	struct UDFTextBlock* wtDepartmentTitle; // 0x2c8(0x08)

	void SetInfo(struct FSoftObjectPath IconImgPath, struct FText& Name); // Function WBP_Title.WBP_Title_C.SetInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
