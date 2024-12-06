
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPLineRenderer.GPLineRendererComponent
// Size: 0x770 (Inherited: 0x6c8)
class UGPLineRendererComponent : public UMeshComponent {
public:

	struct UMaterialInterface* LineMaterial; // 0x6c8(0x08)
	struct TMap<int32_t, struct FLineSection> Sections; // 0x6d0(0x50)
	struct TMap<int32_t, struct UMaterialInstanceDynamic*> SectionMaterials; // 0x720(0x50)

	void UpdateLine(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals); // Function GPLineRenderer.GPLineRendererComponent.UpdateLine // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
