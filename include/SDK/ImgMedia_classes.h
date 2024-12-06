
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ImgMedia.ImgMediaSource
// Size: 0xb8 (Inherited: 0x90)
class UImgMediaSource : public UBaseMediaSource {
public:

	struct FFrameRate FrameRateOverride; // 0x90(0x08)
	struct FString ProxyOverride; // 0x98(0x10)
	struct FDirectoryPath SequencePath; // 0xa8(0x10)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
