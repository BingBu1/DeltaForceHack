
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct SMExtendedRuntime.SMTextSerializer
// Size: 0x10 (Inherited: 0x00)
struct FSMTextSerializer {
public:

	struct TArray<struct FName> ToTextFunctionNames; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMExtendedRuntime.SMTextNodeWidgetInfo
// Size: 0xb00 (Inherited: 0x00)
struct FSMTextNodeWidgetInfo : public FSMTextDisplayWidgetInfo {
public:

	struct FInlineEditableTextBlockStyle EditableTextStyle; // 0x00(0xaf8)
	float WrapTextAt; // 0xaf8(0x04)
	char pad_AFC[0x4]; // 0xafc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMExtendedRuntime.SMTextGraphProperty
// Size: 0xc38 (Inherited: 0x110)
struct FSMTextGraphProperty : public FSMGraphProperty_Base {
public:

	struct FText Result; // 0x110(0x18)
	struct FSMTextNodeWidgetInfo WidgetInfo; // 0x128(0xb00)
	struct FSMTextSerializer TextSerializer; // 0xc28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
