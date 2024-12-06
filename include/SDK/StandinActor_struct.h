
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct StandinActor.StandinProxyEntry
// Size: 0x48 (Inherited: 0x00)
struct FStandinProxyEntry {
public:

	/*LazyObjectProperty*/char StandinActor[0x1c]; // 0x00(0x1c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UStaticMesh* StaticMesh; // 0x20(0x08)
	struct UMaterialInterface* Material; // 0x28(0x08)
	struct TArray<struct UTexture2D*> Textures; // 0x30(0x10)
	struct FName Key; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
