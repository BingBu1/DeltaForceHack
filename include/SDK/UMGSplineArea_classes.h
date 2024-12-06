
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class UMGSplineArea.SplineAreaWidget
// Size: 0x1d8 (Inherited: 0x168)
class USplineAreaWidget : public UWidget {
public:

	struct FUMGSplineAreaInfo SplineAreaInfo; // 0x168(0x50)
	struct UMaterialInterface* Material; // 0x1b8(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x1c0(0x08)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
