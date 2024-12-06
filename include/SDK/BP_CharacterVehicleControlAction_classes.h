
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_CharacterVehicleControlAction.BP_CharacterVehicleControlAction_C
// Size: 0x1b8 (Inherited: 0x198)
class UBP_CharacterVehicleControlAction_C : public UDFMFSM_CharacterVehicleControlAction {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x198(0x08)
	enum class ECollisionEnabled CachedCollisionType; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	struct FVector H2HBOffset; // 0x1a4(0x0c)
	struct AGPNetworkPlayerController* GPPlayer; // 0x1b0(0x08)

	void Set_Motion_Blue(bool Enable, bool bIsTPP); // Function BP_CharacterVehicleControlAction.BP_CharacterVehicleControlAction_C.Set Motion Blue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
