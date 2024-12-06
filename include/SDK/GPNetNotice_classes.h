
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPNetNotice.GPNetNoticeInterface
// Size: 0x30 (Inherited: 0x30)
class UGPNetNoticeInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPNetNotice.GPNetNoticeWorld
// Size: 0x90 (Inherited: 0x38)
class UGPNetNoticeWorld : public UWorldSubsystem {
public:

	char pad_38[0x58]; // 0x38(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
