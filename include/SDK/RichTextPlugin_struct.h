
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct RichTextPlugin.RichTextMetadata
// Size: 0x50 (Inherited: 0x00)
struct FRichTextMetadata {
public:

	struct TMap<struct FString, struct FString> MetaData; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RichTextPlugin.RichTextAnimationRow
// Size: 0x18 (Inherited: 0x08)
struct FRichTextAnimationRow : public FTableRowBase {
public:

	struct TArray<struct FSlateBrush> AnimationBrush; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RichTextPlugin.RichTextHyperlinkRow
// Size: 0x548 (Inherited: 0x08)
struct FRichTextHyperlinkRow : public FTableRowBase {
public:

	struct FHyperlinkStyle HyperlinkStyle; // 0x08(0x540)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RichTextPlugin.ToolTipStyle
// Size: 0x100 (Inherited: 0x08)
struct FToolTipStyle : public FSlateWidgetStyle {
public:

	struct FSlateFontInfo Font; // 0x08(0x58)
	struct FMargin TextMargin; // 0x60(0x10)
	struct FSlateBrush BorderImage; // 0x70(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
