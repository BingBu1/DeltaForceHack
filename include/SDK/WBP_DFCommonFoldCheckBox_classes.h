
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonFoldCheckBox.WBP_DFCommonFoldCheckBox_C
// Size: 0x569 (Inherited: 0x550)
class UWBP_DFCommonFoldCheckBox_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCheckBox* DFCheckBox_Icon; // 0x558(0x08)
	struct UDFImage* DFImage_Arrow; // 0x560(0x08)
	bool Direction; // 0x568(0x01)

	void ArrowCheckStyle(bool Checked); // Function WBP_DFCommonFoldCheckBox.WBP_DFCommonFoldCheckBox_C.ArrowCheckStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
