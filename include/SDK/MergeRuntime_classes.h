
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MergeRuntime.CompositeSkeletalMeshComponent
// Size: 0xf60 (Inherited: 0xf28)
class UCompositeSkeletalMeshComponent : public USkeletalMeshComponent {
public:

	bool bMergeOnRegister; // 0xf28(0x01)
	bool bDestroyOriginMesh; // 0xf29(0x01)
	char pad_F2A[0x6]; // 0xf2a(0x06)
	struct TArray<struct USkeletalMesh*> SubSkeletalMeshes; // 0xf30(0x10)
	char pad_F40[0x10]; // 0xf40(0x10)
	struct USkeletalMesh* MergedMesh; // 0xf50(0x08)
	char pad_F58[0x8]; // 0xf58(0x08)

	void Merge(); // Function MergeRuntime.CompositeSkeletalMeshComponent.Merge // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MergeRuntime.MergeLibrary
// Size: 0x30 (Inherited: 0x30)
class UMergeLibrary : public UBlueprintFunctionLibrary {
public:


	struct USkeletalMesh* STATIC_MergeSkeletalMeshs(struct TArray<struct USkeletalMesh*> SrcMeshList, struct UCompositeSkeletalMeshComponent* Outer); // Function MergeRuntime.MergeLibrary.MergeSkeletalMeshs // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
