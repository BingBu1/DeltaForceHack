
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AndroidPermission.AndroidPermissionCallbackProxy
// Size: 0x50 (Inherited: 0x30)
class UAndroidPermissionCallbackProxy : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnPermissionsGrantedDynamicDelegate[0x10]; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary {
public:


	bool STATIC_CheckPermission(struct FString Permission); // Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
