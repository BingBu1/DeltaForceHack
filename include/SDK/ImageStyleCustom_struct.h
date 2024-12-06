
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct ImageStyleCustom.ImageStyle
// Size: 0x28 (Inherited: 0x08)
struct FImageStyle : public FTableRowBase {
public:

	struct FLinearColor ColorAndOpacity; // 0x08(0x10)
	struct FName RowDescription; // 0x18(0x08)
	struct FName ColorKey; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
