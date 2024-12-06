
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ACLPlugin.AnimationCompressionLibraryDatabase
// Size: 0x1d8 (Inherited: 0x30)
class UAnimationCompressionLibraryDatabase : public UObject {
public:

	struct TArray<char> CookedCompressedBytes; // 0x30(0x10)
	struct TArray<uint64_t> CookedAnimSequenceMappings; // 0x40(0x10)
	char pad_50[0x180]; // 0x50(0x180)
	uint32_t MaxStreamRequestSizeKB; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)

	void STATIC_SetVisualFidelity(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UAnimationCompressionLibraryDatabase* DatabaseAsset, enum class ACLVisualFidelityChangeResult& Result, enum class ACLVisualFidelity VisualFidelity); // Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ACLPlugin.AnimCurveCompressionCodec_ACL
// Size: 0x30 (Inherited: 0x30)
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
// Size: 0x40 (Inherited: 0x40)
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACL
// Size: 0x48 (Inherited: 0x40)
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase {
public:

	struct UAnimBoneCompressionCodec* SafetyFallbackCodec; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
// Size: 0x40 (Inherited: 0x40)
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
// Size: 0x48 (Inherited: 0x40)
class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase {
public:

	struct UAnimationCompressionLibraryDatabase* DatabaseAsset; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
// Size: 0x40 (Inherited: 0x40)
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
