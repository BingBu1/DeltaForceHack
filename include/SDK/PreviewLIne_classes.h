
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass PreviewLIne.PreviewLIne_C
// Size: 0x410 (Inherited: 0x3f0)
class APreviewLIne_C : public AGPPreviewLineActor {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UStaticMeshComponent* StartPointMesh; // 0x3f8(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh; // 0x400(0x08)
	struct USceneComponent* Scene; // 0x408(0x08)

	void ReceiveBeginPlay(); // Function PreviewLIne.PreviewLIne_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
