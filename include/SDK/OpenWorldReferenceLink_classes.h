
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldReferenceLink.OpenWorldRefLinkComponent
// Size: 0x150 (Inherited: 0x100)
class UOpenWorldRefLinkComponent : public UActorComponent {
public:

	struct TMap<struct FGuid, struct FOpenWorldLinkGroupInfo> LinkGroupMap; // 0x100(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldReferenceLink.OpenWorldRefLinkSubSystem
// Size: 0x3c8 (Inherited: 0x378)
class AOpenWorldRefLinkSubSystem : public ALevelSubsystem {
public:

	struct TMap<struct FGuid, struct FOpenWorldRefLinkComps> LinkCompsMap; // 0x378(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
