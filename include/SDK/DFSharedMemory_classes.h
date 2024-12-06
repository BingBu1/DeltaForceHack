
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFSharedMemory.DFSharedMemoryManager
// Size: 0x88 (Inherited: 0x38)
class UDFSharedMemoryManager : public UGameInstanceSubsystem {
public:

	struct TMap<uint32_t, struct UDFSharedMemoryBase*> DFSharedMemoryPool; // 0x38(0x50)

	void WriteSharedMemory(struct FString Name, struct FString Data); // Function DFSharedMemory.DFSharedMemoryManager.WriteSharedMemory // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFSharedMemory.DFSharedMemoryBase
// Size: 0x30 (Inherited: 0x30)
class UDFSharedMemoryBase : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFSharedMemory.DFWindowsSharedMemory
// Size: 0x50 (Inherited: 0x30)
class UDFWindowsSharedMemory : public UDFSharedMemoryBase {
public:

	char pad_30[0x20]; // 0x30(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
