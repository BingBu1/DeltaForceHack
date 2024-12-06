
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_DFMPlayerGMComponent.BP_DFMPlayerGMComponent_C
// Size: 0x5b0 (Inherited: 0x570)
class UBP_DFMPlayerGMComponent_C : public UPlayerGMComponent {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UUserWidget* GMVehicleHUD; // 0x578(0x08)
	/*struct TSoftClassPtr<UObject>*/char NewVar_1[0x28]; // 0x580(0x28)
	struct FName VehicleDatatableName; // 0x5a8(0x08)

	void BP_GMWhoIsYourDaddy(int32_t Health); // Function BP_DFMPlayerGMComponent.BP_DFMPlayerGMComponent_C.BP_GMWhoIsYourDaddy // (Event|Public|BlueprintEvent) // @ game+0xffffffffc0000001
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
