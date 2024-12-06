
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_Loader.BP_Loader_C
// Size: 0x3a0 (Inherited: 0x390)
class ABP_Loader_C : public ABP_StreamingTriggerBase_C {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	bool 离开时卸载; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	float 卸载延迟_秒_; // 0x39c(0x04)

	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_Loader.BP_Loader_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x3f03a8f5fdc7211b
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
