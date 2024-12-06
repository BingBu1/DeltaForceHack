
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_DFMCharacter_Iris.BP_DFMCharacter_Iris_C
// Size: 0x2ca8 (Inherited: 0x2c64)
class ABP_DFMCharacter_Iris_C : public ABP_DFMCharacter_C {
public:

	char pad_2C64[0x4]; // 0x2c64(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c68(0x08)
	struct UBP_DFMIrisEnterComponent_C* BP_DFMIrisEnterComponent; // 0x2c70(0x08)
	struct UBP_QuestDebugJumpComponent_C* BP_QuestDebugJumpComponent; // 0x2c78(0x08)
	struct UPVECharacterExternalDamageComponent* PVECharacterExternalDamage; // 0x2c80(0x08)
	struct UPVECharacterPickupComponent* CharacterPickup; // 0x2c88(0x08)
	struct UBP_RaidDebugJumpComponent_C* BP_RaidDebugJumpComponent; // 0x2c90(0x08)
	struct UAirHitDetectorComponent* AirHitDetector; // 0x2c98(0x08)
	struct USphereComponent* AmbientSensorCollision; // 0x2ca0(0x08)

	void GMFly_Path(int32_t PathID); // Function BP_DFMCharacter_Iris.BP_DFMCharacter_Iris_C.GMFly Path // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0740000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
