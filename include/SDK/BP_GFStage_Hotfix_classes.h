
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_GFStage_Hotfix.BP_GFStage_Hotfix_C
// Size: 0x140 (Inherited: 0x90)
class UBP_GFStage_Hotfix_C : public UGameFlowStage {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UObject* NewVar_1; // 0x98(0x08)
	struct TMap<struct FString, struct FString> reportsuccess; // 0xa0(0x50)
	struct TMap<struct FString, struct FString> reportfail; // 0xf0(0x50)

	void OnLuaGameFlowEvent_BFA5C325421863C8631C9D98AC4C3071(struct FString ArgStr); // Function BP_GFStage_Hotfix.BP_GFStage_Hotfix_C.OnLuaGameFlowEvent_BFA5C325421863C8631C9D98AC4C3071 // (BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
