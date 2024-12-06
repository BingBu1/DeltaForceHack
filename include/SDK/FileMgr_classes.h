
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class FileMgr.IFileMgr
// Size: 0x40 (Inherited: 0x30)
class UIFileMgr : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnSaveToAlbum[0x10]; // 0x30(0x10)

	bool SaveToAlbum(struct FString AbsolutePath); // Function FileMgr.IFileMgr.SaveToAlbum // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FileMgr.AndroidFileMgr
// Size: 0x40 (Inherited: 0x40)
class UAndroidFileMgr : public UIFileMgr {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class FileMgr.IOSFileMgr
// Size: 0x40 (Inherited: 0x40)
class UIOSFileMgr : public UIFileMgr {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
