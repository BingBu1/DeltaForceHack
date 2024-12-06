
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPObjectPool.GPObjectPoolInterface
// Size: 0x30 (Inherited: 0x30)
class UGPObjectPoolInterface : public UInterface {
public:


	void SetMaxUsingObjects(struct UClass* objectClass, int32_t MaxObject); // Function GPObjectPool.GPObjectPoolInterface.SetMaxUsingObjects // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPObjectPool.GPObjectPoolItemInterface
// Size: 0x30 (Inherited: 0x30)
class UGPObjectPoolItemInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPObjectPool.GPObjectPoolWorld
// Size: 0x90 (Inherited: 0x38)
class UGPObjectPoolWorld : public UWorldSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	struct TMap<struct FName, struct FGPObjectPoolData> ObjectMap; // 0x40(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
