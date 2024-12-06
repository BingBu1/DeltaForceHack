
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_DeadBodyAmmoBox.BP_DeadBodyAmmoBox_C
// Size: 0x494 (Inherited: 0x480)
class ABP_DeadBodyAmmoBox_C : public ADeadbodyAmmoBox {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct USphereComponent* Sphere; // 0x488(0x08)
	float SimulateTime; // 0x490(0x04)

	void EnableHighlight(); // Function BP_DeadBodyAmmoBox.BP_DeadBodyAmmoBox_C.EnableHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xa677b6666476947f
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
