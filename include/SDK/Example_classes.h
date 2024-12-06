
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass Example.Example_C
// Size: 0x3a0 (Inherited: 0x378)
class AExample_C : public AActor {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UTextRenderComponent* TextRender; // 0x380(0x08)
	struct UPostProcessComponent* PostProcess; // 0x388(0x08)
	struct UBoxComponent* Box; // 0x390(0x08)
	struct UStaticMeshComponent* Plane; // 0x398(0x08)

	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Example.Example_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x73fffec0700078
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
