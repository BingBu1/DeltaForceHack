
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_TestPlayerCameraManager.BP_TestPlayerCameraManager_C
// Size: 0x5179 (Inherited: 0x5170)
class ABP_TestPlayerCameraManager_C : public ADFMPlayerCameraManager {
public:

	struct UCameraTransComponent* CameraTrans; // 0x5170(0x08)
	bool bDebugPPS; // 0x5178(0x01)

	struct FVector BP_GetCameraOffset(float ScopeHeight, float ScopeRadius); // Function BP_TestPlayerCameraManager.BP_TestPlayerCameraManager_C.BP_GetCameraOffset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
