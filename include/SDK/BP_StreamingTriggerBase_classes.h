
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_StreamingTriggerBase.BP_StreamingTriggerBase_C
// Size: 0x390 (Inherited: 0x380)
class ABP_StreamingTriggerBase_C : public ATriggerBox {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UBP_StreamingComponent_C* BP_StreamingComponent; // 0x388(0x08)

	void 加载完成回调(); // Function BP_StreamingTriggerBase.BP_StreamingTriggerBase_C.加载完成回调 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
