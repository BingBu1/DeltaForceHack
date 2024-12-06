
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ImageWriteQueue.ImageWriteBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_ExportToDisk(struct UTexture* Texture, struct FString Filename, struct FImageWriteOptions& Options); // Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
