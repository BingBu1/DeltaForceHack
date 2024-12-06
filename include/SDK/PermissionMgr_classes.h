
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class PermissionMgr.IDFPermissionMgr
// Size: 0x40 (Inherited: 0x30)
class UIDFPermissionMgr : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnPermissionRequestResultEvent[0x10]; // 0x30(0x10)

	bool ShouldShowRequestPermissionRationale(enum class EDFPermissionType Permission); // Function PermissionMgr.IDFPermissionMgr.ShouldShowRequestPermissionRationale // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PermissionMgr.DFAndroidPermissionMgr
// Size: 0x40 (Inherited: 0x40)
class UDFAndroidPermissionMgr : public UIDFPermissionMgr {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PermissionMgr.DFiOSPermissionMgr
// Size: 0x40 (Inherited: 0x40)
class UDFiOSPermissionMgr : public UIDFPermissionMgr {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
