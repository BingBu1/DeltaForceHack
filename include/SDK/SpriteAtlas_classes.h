
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class SpriteAtlas.SpriteAtlasSheet
// Size: 0xa8 (Inherited: 0x30)
class USpriteAtlasSheet : public UObject {
public:

	/*struct TSoftObjectPtr<UTexture2D>*/char BakedTexturePtr[0x28]; // 0x30(0x28)
	/*struct TSet<struct TSoftObjectPtr<UPaperSprite>>*/char BakedSpritePtrSet[0x50]; // 0x58(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
