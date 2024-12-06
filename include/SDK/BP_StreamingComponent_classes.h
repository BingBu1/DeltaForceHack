
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_StreamingComponent.BP_StreamingComponent_C
// Size: 0x1b8 (Inherited: 0x100)
class UBP_StreamingComponent_C : public UActorComponent {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct TArray<struct FString> 区域; // 0x108(0x10)
	/*struct TArray<struct TSoftObjectPtr<UWorld>>*/char 子关卡[0x10]; // 0x118(0x10)
	struct FTimerHandle UnloadingTimerHandle; // 0x128(0x08)
	/*struct TScriptInterface<IBP_StreamingCallbackInterface_C>*/char callback[0x10]; // 0x130(0x10)
	struct TMap<struct FString, struct FAreaContainer> LoadedAreas; // 0x140(0x50)
	struct FString UpdatingArea; // 0x190(0x10)
	bool 是否区分HD和Mobile; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	/*struct TArray<struct TSoftObjectPtr<UWorld>>*/char 子关卡HD[0x10]; // 0x1a8(0x10)

	void 作者(); // Function BP_StreamingComponent.BP_StreamingComponent_C.@作者 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c000003e
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
