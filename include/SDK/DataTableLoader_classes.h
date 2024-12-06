
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DataTableLoader.DataTableGameFlow2SceneManager
// Size: 0x48 (Inherited: 0x38)
class UDataTableGameFlow2SceneManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DataTableLoader.DataTableHotfixer
// Size: 0x1d0 (Inherited: 0x38)
class UDataTableHotfixer : public UGPSubsystemBase {
public:

	/*struct FMulticastInlineDelegate*/char OnHotfixDatatableFinishCallback[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnHotfixDataTableCallback[0x10]; // 0x48(0x10)
	char pad_58[0x178]; // 0x58(0x178)

	void WriteTable(struct FCSVZipTable& InParam); // Function DataTableLoader.DataTableHotfixer.WriteTable // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DataTableLoader.DataTableLoader
// Size: 0x40 (Inherited: 0x38)
class UDataTableLoader : public UGPSubsystemBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	void SetRunMainGameFlow(bool inbRunMainGameFlow); // Function DataTableLoader.DataTableLoader.SetRunMainGameFlow // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
