
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MultiWorld.MultiWorldManager
// Size: 0x260 (Inherited: 0x38)
class UMultiWorldManager : public UGameInstanceSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	struct UWorld* MainWorld; // 0x40(0x08)
	char pad_48[0x218]; // 0x48(0x218)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
