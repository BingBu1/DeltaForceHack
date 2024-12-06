
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class RichTextPlugin.RichTextBlockExtenderDecorator
// Size: 0x8b8 (Inherited: 0x30)
class URichTextBlockExtenderDecorator : public URichTextBlockDecorator {
public:

	/*struct FMulticastInlineDelegate*/char OnClicked[0x10]; // 0x30(0x10)
	/*struct TSoftObjectPtr<UDataTable>*/char RichTextHyperlinkStyleSet[0x28]; // 0x40(0x28)
	struct UDataTable* RichTextHyperlinkStyleSetCache; // 0x68(0x08)
	/*struct TSoftObjectPtr<UDataTable>*/char RichTextImageSet[0x28]; // 0x70(0x28)
	struct UDataTable* RichTextImageSetCache; // 0x98(0x08)
	/*struct TSoftObjectPtr<UDataTable>*/char RichTextAnimationSet[0x28]; // 0xa0(0x28)
	struct UDataTable* RichTextAnimationSetCache; // 0xc8(0x08)
	float AnimationDefaultUpdateRate; // 0xd0(0x04)
	char pad_D4[0x7e4]; // 0xd4(0x7e4)

	void OnRichTextClickedEvent__DelegateSignature(struct FRichTextMetadata& InMetadata); // DelegateFunction RichTextPlugin.RichTextBlockExtenderDecorator.OnRichTextClickedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class RichTextPlugin.TextExtenderDecorator
// Size: 0x300 (Inherited: 0x30)
class UTextExtenderDecorator : public URichTextBlockDecorator {
public:

	/*struct TSoftObjectPtr<UDataTable>*/char ExtendTextStyleSet[0x28]; // 0x30(0x28)
	struct UDataTable* ExtendTextStyleSetCache; // 0x58(0x08)
	char pad_60[0x2a0]; // 0x60(0x2a0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
