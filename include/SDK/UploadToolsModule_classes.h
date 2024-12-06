
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class UploadToolsModule.COSConfig
// Size: 0x80 (Inherited: 0x30)
class UCOSConfig : public UObject {
public:

	struct FString APPID; // 0x30(0x10)
	struct FString Secret_id; // 0x40(0x10)
	struct FString Secret_key; // 0x50(0x10)
	struct FString BucketName; // 0x60(0x10)
	struct FString HostName; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UploadToolsModule.UploadToolsModuleBPTools
// Size: 0x30 (Inherited: 0x30)
class UUploadToolsModuleBPTools : public UBlueprintFunctionLibrary {
public:


	void STATIC_UploadZippedFile(struct FUploadFileNtf& UploadNtf, enum class EUploadFileType& Type); // Function UploadToolsModule.UploadToolsModuleBPTools.UploadZippedFile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UploadToolsModule.UploadToolsModuleDelegates
// Size: 0x40 (Inherited: 0x30)
class UUploadToolsModuleDelegates : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnUploadFinish[0x10]; // 0x30(0x10)

	struct UUploadToolsModuleDelegates* STATIC_Get(); // Function UploadToolsModule.UploadToolsModuleDelegates.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
