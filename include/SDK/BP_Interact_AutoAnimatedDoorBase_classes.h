
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_Interact_AutoAnimatedDoorBase.BP_Interact_AutoAnimatedDoorBase_C
// Size: 0x3a3 (Inherited: 0x378)
class ABP_Interact_AutoAnimatedDoorBase_C : public AActor {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UBoxComponent* BlockBox; // 0x380(0x08)
	struct UBoxComponent* NavAreaBox; // 0x388(0x08)
	struct UGPSkeletalMeshComponent* GPSkeletalMesh; // 0x390(0x08)
	struct UInteractorBoxComponent* InteractorBox1; // 0x398(0x08)
	bool isOpening; // 0x3a0(0x01)
	bool InTrigger; // 0x3a1(0x01)
	bool isopened; // 0x3a2(0x01)

	void OnRep_IsOpened(); // Function BP_Interact_AutoAnimatedDoorBase.BP_Interact_AutoAnimatedDoorBase_C.OnRep_IsOpened // (BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
