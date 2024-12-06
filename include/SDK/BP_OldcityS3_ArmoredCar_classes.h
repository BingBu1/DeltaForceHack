
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_OldcityS3_ArmoredCar.BP_OldcityS3_ArmoredCar_C
// Size: 0x1210 (Inherited: 0x11e8)
class ABP_OldcityS3_ArmoredCar_C : public ABP_ArmoredCar_C {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x11e8(0x08)
	struct UChildActorComponent* BP_DeadZone_Back; // 0x11f0(0x08)
	struct UChildActorComponent* BP_DeadZone_Front; // 0x11f8(0x08)
	struct UGPLevelSequenceActingComponent* GPLevelSequenceActing; // 0x1200(0x08)
	struct FName PathTag; // 0x1208(0x08)

	bool IsPawnTeammate(struct APawn* CHARACTER); // Function BP_OldcityS3_ArmoredCar.BP_OldcityS3_ArmoredCar_C.IsPawnTeammate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x7f4dfffec0740000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
