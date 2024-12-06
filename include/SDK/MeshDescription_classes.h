
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MeshDescription.MeshDescription
// Size: 0x30 (Inherited: 0x30)
class UMeshDescription : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MeshDescription.MeshDescriptionBase
// Size: 0x398 (Inherited: 0x30)
class UMeshDescriptionBase : public UObject {
public:

	char pad_30[0x368]; // 0x30(0x368)

	void SetVertexPosition(struct FVertexID VertexID, struct FVector& Position); // Function MeshDescription.MeshDescriptionBase.SetVertexPosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
